local GoldReqTokenNew50 = class("GoldReqTokenNew50", NG.ReqHttp)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local UrlConf = require("newgold.GoldCommon.Config.GoldUrlConf")

function GoldReqTokenNew50:ctor()
    GoldReqTokenNew50.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.TokenRequest
    self._ask_id = -1
end

function GoldReqTokenNew50:start(tenanaid, areaid, numid,session, groupid, timeoutTime)
    if GoldReqTokenNew50.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time()
    local urlInfo = {
        tenant_id = tenanaid,
        area_id = areaid,
        user_id = numid,
        ask_id = self._ask_id,
        session = session,
    }
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    NG.httpManager50:RequestPost("", UrlConf.URL_GET_WEB_TOKEN, jsonStr, NG.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function GoldReqTokenNew50:onHttpCallBack(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.cr.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return GoldReqTokenNew50