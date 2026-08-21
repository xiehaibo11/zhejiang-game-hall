local ReqToken = class("ReqToken", XH.ReqHttp)
local HttpDefine = require("app.Define.HttpDefine")
local UrlConf = require("app.Config.UrlConf")

function ReqToken:start(timeout)
    if ReqToken.super.start(self, timeout) == false then
        return
    end

    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0, XH.playerData:getBrandID(),
    XH.playerData:getNumberID(), un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()), XH.playerData:getSessionID(), srsGroupID, timeout)
end

function ReqToken:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local tempSession = string.urlencode(data)
        local areaid = XH.areaData:getAreaID()
        local numid = XH.playerData:getNumberID()
        local lobbyid = XH.areaData:getLobbyID()

        local tHttpInfo = "areaid=" .. areaid .. "&numid=" .. numid .. "&ssid=" .. tempSession .. "&lobbyid=" .. lobbyid
        print(UrlConf.REQ_TOKEN .. tHttpInfo)
        XH.httpManager:RequestGet(HttpDefine.HTTP_ID_REQ_TOKEN, UrlConf.REQ_TOKEN .. tHttpInfo,
        HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpTokenCallBack))
    else
        self:setMessage(XH.ConstString.getStr("REQ_TOKEN_ERR"))
        self:fail()
    end
end

function ReqToken:onHttpTokenCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:fail()
        end
    end
end

return ReqToken�