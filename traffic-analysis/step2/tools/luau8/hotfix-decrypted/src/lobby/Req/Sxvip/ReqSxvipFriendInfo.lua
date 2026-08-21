local ReqSReqSxvipFriendInfo = class("ReqSReqSxvipFriendInfo", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSReqSxvipFriendInfo:ctor()
    ReqSReqSxvipFriendInfo.super.ctor(self)
    self._askId = 0
end

function ReqSReqSxvipFriendInfo:start(userId, callfunc, timeout)
    if ReqSReqSxvipFriendInfo.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.day_limit = 7
    urlInfo.ask_id = 1605
    urlInfo.someone_user_id = userId or 0
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)
    self._callfunc = callfunc
    self._numid = urlInfo.someone_user_id
    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_FRIEND_INFO, UrlConf.URL_SXVIP_FRIEND_INFO, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSReqSxvipFriendInfo:onHttpCallBack(httpID, status, response, xhr)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_FRIEND_INFO then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            response.md5 = XH.SysTool:md5_encode(xhr.response)
            response.numid = self._numid 
            self:success(response)
            if self._callfunc then self._callfunc(response) end
        else
            self:setMessage(response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSReqSxvipFriendInfo
