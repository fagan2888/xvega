// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include <xproperty/xobserved.hpp>
#include <xtl/xoptional.hpp>
#include <xtl/xvariant.hpp>
#include <xtl/xjson.hpp>
#include <nlohmann/json.hpp>

#include "../../encoding-channel-options/aggregate.hpp"
#include "../../encoding-channel-options/bin.hpp"
#include "../../encoding-channel-options/field.hpp"
#include "../../encoding-channel-options/legend.hpp"
#include "../../encoding-channel-options/scale.hpp"
#include "../../encoding-channel-options/sort.hpp"
#include "../../encoding-channel-options/timeunit.hpp"

#include "../../../../utils/serialize.hpp"

namespace nl = nlohmann;

namespace xv
{
    using string_vec_none_type = xtl::variant<std::vector<std::string>, std::nullptr_t>;

    struct StrokeWidth : public xp::xobserved<StrokeWidth>
    {
        XPROPERTY(xtl::xoptional<agg_type>, StrokeWidth, aggregate);
        XPROPERTY(xtl::xoptional<bin_type>, StrokeWidth, bin);
        // XPROPERTY(xtl::xoptional<condition_type>, StrokeWidth, condition);
        XPROPERTY(xtl::xoptional<field_type>, StrokeWidth, field);
        XPROPERTY(xtl::xoptional<legend_type>, StrokeWidth, legend);
        XPROPERTY(xtl::xoptional<scale_type>, StrokeWidth, scale);
        XPROPERTY(xtl::xoptional<sort_type>, StrokeWidth, sort);
        XPROPERTY(xtl::xoptional<time_unit_type>, StrokeWidth, timeUnit);
        XPROPERTY(xtl::xoptional<string_vec_none_type>, StrokeWidth, title);
        XPROPERTY(xtl::xoptional<std::string>, StrokeWidth, type);
    };

    XVEGA_API void to_json(nl::json& j, const StrokeWidth& data);
}