// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/encodings/encoding-channels/facet-channels/column.hpp"

namespace xv
{
    void to_json(nl::json& j, const Column& data)
    {
        serialize(j, data.aggregate(), "aggregate");
        serialize(j, data.align(), "align");
        serialize(j, data.bin(), "bin");
        serialize(j, data.center(), "center");
        serialize(j, data.field(), "field");
        serialize(j, data.header(), "header");
        serialize(j, data.sort(), "sort");
        serialize(j, data.spacing(), "spacing");
        serialize(j, data.timeUnit(), "timeUnit");
        serialize(j, data.title(), "title");
        serialize(j, data.type(), "type");
    }
}