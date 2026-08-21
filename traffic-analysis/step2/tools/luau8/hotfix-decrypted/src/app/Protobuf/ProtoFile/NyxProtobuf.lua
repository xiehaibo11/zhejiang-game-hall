local NyxProtobuf = {}
NyxProtobuf.GetBankruptcyGiftRequest = {XY_ID = 2201}
NyxProtobuf.GetBankruptcyGiftReply = {XY_ID = 2202}
NyxProtobuf.GetShareTypeRequest = {XY_ID = 2428}
NyxProtobuf.GetShareTypeReply = {XY_ID = 2429}
for k, v in pairs(NyxProtobuf) do
    v.processid = 116
    v.protobufName = "nyx_client"
    v.protobufPackage = "Zeus.nyx.v1"
    v.name = k
    v.event_key = v.processid .. "_" .. v.XY_ID
end
NyxProtobuf.processid = 116
NyxProtobuf.protobufName = "nyx_client"
NyxProtobuf.protobufPackage = "Zeus.nyx.v1"

return NyxProtobuf7