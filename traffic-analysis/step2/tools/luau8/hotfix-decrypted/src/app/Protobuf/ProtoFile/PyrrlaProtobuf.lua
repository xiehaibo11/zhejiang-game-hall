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
PyrrlaProtobuf.PlayerLeaveNotify = { XY_ID = 16 }
PyrrlaProtobuf.ListOnlineCountRequest = { XY_ID = 5 }
PyrrlaProtobuf.ListOnlineCountReply = { XY_ID = 6 }
PyrrlaProtobuf.GoldSettingRequest = { XY_ID = 20 }
PyrrlaProtobuf.GoldSettingReply = { XY_ID = 21 }
PyrrlaProtobuf.GoldPlayerInfoRequest = { XY_ID = 22 }
PyrrlaProtobuf.GoldPlayerInfoReply = { XY_ID = 23 }
PyrrlaProtobuf.GoldPlayerInfoSetRequest = { XY_ID = 24 }
PyrrlaProtobuf.GoldPlayerInfoSetReply = { XY_ID = 25 }
PyrrlaProtobuf.GoldRecordRequest = { XY_ID = 26 }
PyrrlaProtobuf.GoldRecordReply = { XY_ID = 27 }
PyrrlaProtobuf.GoldGameConfRequest = { XY_ID = 28 }
PyrrlaProtobuf.GoldGameConfReply = { XY_ID = 29 }
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


return PyrrlaProtobuf