// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/functions/populate_encodings.hpp"

namespace xv
{
    void populate_encodings(nl::json& json_template, const Chart& v)
    {
        serialize(json_template, v.encoding(), "encoding");
    }
}