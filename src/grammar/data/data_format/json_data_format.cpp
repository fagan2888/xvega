// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/data/data_format/json_data_format.hpp"

namespace xv
{
    json_data_format::json_data_format()
    {
        type = "json";
    }

    void json_data_format::to_json(nl::json& j) const
    {
        base_type::to_json(j);
        serialize(j, property(), "property");
    }
}