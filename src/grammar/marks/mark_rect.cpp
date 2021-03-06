// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/marks/mark_rect.hpp"

namespace xv
{
    mark_rect::mark_rect()
    {
        type = "rect";
    }

    void mark_rect::to_json(nl::json& j) const
    {
        base_type::to_json(j);
        // Fill in Rect Mark Properties
        serialize(j, align(), "align");
        serialize(j, baseline(), "baseline");
        serialize(j, cornerRadius(), "cornerRadius");
    }
}