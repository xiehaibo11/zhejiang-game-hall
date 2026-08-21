local ReqJoinRoomGift = class("ReqJoinRoomGift", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqJoinRoomGift:ctor()
    ReqJoinRoomGift.super.ctor(self)
    self._askId = 0
end

function ReqJoinRoomGift:start(aid, session_id, timeout)
    timeout = timeout or 10
    if ReqJoinRoomGift.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["aid"] = aid
    urlInfo["session_id"] = session_id
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["ask_id"] = self._askId
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_ACT_50_JOINROOM, UrlConf.URL_ACT_50_JOINROOM_GIFT, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqJoinRoomGift:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_ACT_50_JOINROOM then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 and response.resp.askId == self._askId then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage(XH.ConstString.getStr("PHONE_REBIND_ERROR"))
        self:fail()
    end
end

return ReqJoinRoomGiftA