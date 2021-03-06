// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/encodings/encoding-channels/text-tooltip-channels/tooltip.hpp"

namespace xv
{
    void to_json(nl::json& j, const Tooltip& data)
    {
        serialize(j, data.aggregate(), "aggregate");
        serialize(j, data.bin(), "bin");
        // // serialize(j, data.condition(), "condition");
        serialize(j, data.field(), "field");
        serialize(j, data.format(), "format");
        serialize(j, data.formatType(), "formatType");
        serialize(j, data.labelExpr(), "labelExpr");
        serialize(j, data.timeUnit(), "timeUnit");
        serialize(j, data.title(), "title");
        serialize(j, data.type(), "type");
    }
}