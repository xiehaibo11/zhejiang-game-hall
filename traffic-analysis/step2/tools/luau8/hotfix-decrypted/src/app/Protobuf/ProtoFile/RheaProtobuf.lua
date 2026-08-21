local RheaProtobuf = {}
RheaProtobuf.UsePropsRequest = {XY_ID = 1703}
RheaProtobuf.UsePropsReply = { XY_ID = 1704 }
RheaProtobuf.UseEquipCardRequest = {XY_ID = 1729}
RheaProtobuf.UseEquipCardReply = {XY_ID = 1730}
RheaProtobuf.OperateEquipRequest = {XY_ID = 1731}
RheaProtobuf.OperateEquipReply = {XY_ID = 1732}
RheaProtobuf.PropsCountNotify = {XY_ID = 1770}
RheaProtobuf.BankruptcyNotifyV2 = {XY_ID = 1908}
for k, v in pairs(RheaProtobuf) do
    v.processid = 116
    v.protobufName = "rhea_client"
    v.protobufPackage = "Zeus.poros.v1"
    v.name = k
    v.event_key = v.processid .. "_" .. v.XY_ID
end
RheaProtobuf.processid = 116
RheaProtobuf.protobufName = "rhea_client"
RheaProtobuf.protobufPackage = "Zeus.poros.v1"


return RheaProtobuf�