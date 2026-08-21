local CrmNoticeProtobuf = {}

CrmNoticeProtobuf.processid = 113
CrmNoticeProtobuf.packageName = "Zeus.lachesis.v1"
CrmNoticeProtobuf.protobufFile = "lachesis_client.lua"

--// 客户端获取CRM离线消息情况请求 xyid=5014,返回 xyid=5015
CrmNoticeProtobuf.GetCrmNoticeRequest = {
    reqName = "GetCrmNoticeRequest",
    xyid = 5014,
    resqName = "GetCrmNoticeReply",
    data ={
        tenant_id = 0, --租户id
        area_id = 0,  --地区id
        user_id = 0,  --玩家id
    }
}

return CrmNoticeProtobuf