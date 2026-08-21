local NotifyClubReBackPlayerInviteRequest = class("NotifyClubReBackPlayerInviteRequest", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local TestConfig = require("lobby.Modules.RecallNew.TestConfig")

function NotifyClubReBackPlayerInviteRequest:ctor()
    NotifyClubReBackPlayerInviteRequest.super.ctor(self)
    self._askId = 0
end

function NotifyClubReBackPlayerInviteRequest:start(act_id, club_id, invite_user_id, timeout)
    if NotifyClubReBackPlayerInviteRequest.super.start(self, timeout) == false then
        return
    end

    self._askId = os.time()

    local urlInfo = {}
    urlInfo["tenant_id"] = XH.areaData:getTenantid()
    urlInfo["area_id"] = XH.areaData:getAreaID()
    urlInfo["user_id"] = XH.playerData:getNumberID()
    urlInfo["act_id"] = act_id
    urlInfo["club_id"] = club_id
    urlInfo["invite_user_id"] = invite_user_id
    urlInfo["ask_id"] = self._askId

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    if TestConfig.IsDebug and TestConfig.NotifyClubReBackPlayerInviteRequest then
        TestConfig.NotifyClubReBackPlayerInviteRequest.resp = { errCode = 0 }
        self:onHttpCallBack(XH.HttpDefine.HTTP_ID_RECALL_NEW_NOTIFY_INVITE, 200, TestConfig.NotifyClubReBackPlayerInviteRequest)
        return
    end

    XH.httpManager50:RequestPost(XH.HttpDefine.HTTP_ID_RECALL_NEW_NOTIFY_INVITE, UrlConf.URL_RECALL_NEW_NOTIFY_INVITE, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function NotifyClubReBackPlayerInviteRequest:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.HTTP_ID_RECALL_NEW_NOTIFY_INVITE then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:setMessage("网络异常，稍后再试NotifyClubReBackPlayerInviteRequest")
        self:fail()
    end
end

return NotifyClubReBackPlayerInviteRequest�