// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/config/line_config.hpp"

namespace xv
{
    void line_config::to_json(nl::json& j) const
    {
        base_type::to_json(j);

        serialize(j, point(), "point");
    }
}