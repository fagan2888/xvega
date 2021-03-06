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
#include "../../encoding-channel-options/timeunit.hpp"

#include "../../../../utils/serialize.hpp"

namespace nl = nlohmann;

namespace xv
{
    using string_vec_none_type = xtl::variant<std::vector<std::string>, std::nullptr_t>;

    struct Key : public xp::xobserved<Key>
    {
        XPROPERTY(xtl::xoptional<agg_type>, Key, aggregate);
        XPROPERTY(xtl::xoptional<bin_type>, Key, bin);
        XPROPERTY(xtl::xoptional<field_type>, Key, field);
        XPROPERTY(xtl::xoptional<time_unit_type>, Key, timeUnit);
        XPROPERTY(xtl::xoptional<string_vec_none_type>, Key, title);
        XPROPERTY(xtl::xoptional<std::string>, Key, type);
    };

    XVEGA_API void to_json(nl::json& j, const Key& data);
}