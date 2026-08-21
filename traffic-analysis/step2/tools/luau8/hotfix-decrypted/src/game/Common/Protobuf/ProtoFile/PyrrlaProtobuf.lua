local PyrrlaProtobuf = {}

PyrrlaProtobuf.GameNotify = { XY_ID = 7 }
PyrrlaProtobuf.DismissNotify = { XY_ID = 14 }
PyrrlaProtobuf.CostNotify = { XY_ID = 10 }
PyrrlaProtobuf.ClockNotify = { XY_ID = 13 }
PyrrlaProtobuf.PlayerJoinRequest = {XY_ID = 1}
PyrrlaProtobuf.PlayerJoinReply = {XY_ID = 2}
PyrrlaProtobuf.PlayerLeaveRequest = {XY_ID = 3}
PyrrlaProtobuf.PlayerKickRequest = {XY_ID = 11}
PyrrlaProtobuf.PlayerKickReply = {XY_ID = 12}
PyrrlaProtobuf.PlayerReadyNotify = { XY_ID = 15 }
PyrrlaProtobuf.PlayerMatchNotify = { XY_ID = 17 }
PyrrlaProtobuf.PlayerLeaveNotify = { XY_ID = 16 }



for k, v in pairs(PyrrlaProtobuf) do
    v.processid = 1147
    v.protobufName = "pyrrla"
    v.protobufPackage = "Zeus.pyrrla.v1"
    v.name = k
    v.event_key = v.processid .. "_" .. v.XY_ID
end
PyrrlaProtobuf.processid = 1147
PyrrlaProtobuf.protobufName = "pyrrla"
PyrrlaProtobuf.protobufPackage = "Zeus.pyrrla.v1"


return PyrrlaProtobuf�