// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/selections/streams/event_stream.hpp"

namespace xv
{
    void to_json(nl::json& j, const event_stream& data)
    {
        serialize(j, data.source(), "source");
        serialize(j, data.type(), "type");
    }
}