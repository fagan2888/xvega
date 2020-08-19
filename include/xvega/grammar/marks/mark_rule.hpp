// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef XVEGA_MARK_RULE
#define XVEGA_MARK_RULE

#include "../marks.hpp"

namespace xv
{
    struct mark_rule : public Marks<mark_rule>
    {
        using base_type = Marks<mark_rule>;

        mark_rule()
        {
            type = "rule";
        }

        void to_json(nl::json& j) const
        {
            base_type::to_json(j);
        }
    };
}

#endif
