local ReqSxvipFellowSend = class("ReqSxvipFellowSend", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function ReqSxvipFellowSend:ctor()
    ReqSxvipFellowSend.super.ctor(self)
    self._askId = 0
    self._opt = nil
    self._reqPage = 1
    self._selectFriendInfo = nil
    self._isReqRedPoint = false
end

function ReqSxvipFellowSend:start(param, timeout)
    if ReqSxvipFellowSend.super.start(self, timeout) == false then
        return
    end
    if not param or not param.opt then
        return
    end

    local reqInfo = {}
    if param.selectFriendInfo and param.selectFriendInfo.numid then
        reqInfo.opt_user_id = param.selectFriendInfo.numid or 0
        self._selectFriendInfo = param.selectFriendInfo
    end
    if param.opt_user_id then
        reqInfo.opt_user_id = param.opt_user_id or 0
    end
    if param.isReqRedPoint then
        self._isReqRedPoint = true
    end
    reqInfo.opt = param.opt
    reqInfo.log_select = param.log_select or 0
    reqInfo.log_id = param.log_id or 0
    reqInfo.page = param.page or 0
    reqInfo.page_size = param.page_size or 0
    reqInfo.start_time = param.start_time or 0
    reqInfo.end_time = param.end_time or 0
    reqInfo.day = param.day or 0

    self._opt = param.opt
    self._reqPage = param.page or 0
    
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(reqInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_FELLOW_SEND, UrlConf.URL_SXVIP_FELLOW_SEND, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipFellowSend:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_FELLOW_SEND then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.opt = self._opt
            response.selectFriendInfo = self._selectFriendInfo
            response.page = self._reqPage
            response.isReqRedPoint = self._isReqRedPoint
            self:success(response)
        else
            self:setMessage(response.resp.errReason)
            self:fail(response)
        end
    else
        self:setMessage("请求VIP互赠失败")
        self:fail()
    end
end

return ReqSxvipFellowSend
