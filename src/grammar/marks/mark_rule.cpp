// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/marks/mark_rule.hpp"

namespace xv
{
    mark_rule::mark_rule()
    {
        type = "rule";
    }

    void mark_rule::to_json(nl::json& j) const
    {
        base_type::to_json(j);
    }
}