// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/base/xvega-base.hpp"
#include <xproperty/xobserved.hpp>
#include <xtl/xoptional.hpp>
#include <xtl/xvariant.hpp>
#include <xtl/xjson.hpp>
#include <nlohmann/json.hpp>
#include "../../xvega_config.hpp"
#include "../../utils/serialize.hpp"

namespace nl = nlohmann;

namespace xv
{
    struct hconcat : public xp::xobserved<hconcat>
    {
        XPROPERTY(std::vector<Chart>, hconcat, charts);
    };

    inline nl::json mime_bundle_repr(const hconcat& v)
    {
        auto j = base_vegalite_json();
        int len_charts = v.charts().size();
        
        for(int i=0; i<len_charts; i++)
        {
            j["hconcat"][i]["mark"] = v.charts()[i].mark();
            serialize(j["hconcat"][i], v.charts()[i].encoding(), "encoding");
            serialize(j["hconcat"][i], v.charts()[i].width(), "width");
            serialize(j["hconcat"][i], v.charts()[i].height(), "height");
            int len_selections = v.charts()[i].selections().size();
            int len_transformations = v.charts()[i].transformations().size();
            for(int k=0; k<len_selections; k++)
            {
                xtl::visit([&](auto&& arg){
                        j["hconcat"][i]["selection"][arg.name().value()]=arg;
                    }, v.charts()[i].selections()[k]);
            }
            for(int k=0; k<len_transformations; k++)
            {
                xtl::visit([&](auto&& arg){
                        j["hconcat"][i]["transform"][k]=arg;
                    }, v.charts()[i].transformations()[k]);
            }
        }
        j["data"] = v.charts()[0].data();

        auto bundle = nl::json::object();
        bundle["application/vnd.vegalite.v3+json"] = j;
        return bundle;
    }
}