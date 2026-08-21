
local ReqNotify = class("ReqNotify", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqNotify:ctor()
    ReqNotify.super.ctor(self)
    self._notifyList = {}
end

function ReqNotify:start() 
    local channel = XH.SysTool:getChannelID()
    local windMsgID = XH.areaData:getAreaWindID()
    local gameid = XH.areaData:getNotifyGameID()

    local timestamp = os.time()

    local  data =  "channel=" ..channel .. "&gameid="..gameid .."&timestamp=" .. timestamp .. "&wid=" .. windMsgID .. "&reqUrl=" .. UrlConf.URL_SECOND_DOMAIN.REQ_NOTIFY_INFO
    XH.httpManager:RequestPost(HttpDefine.URL_NOTIFY_ID, UrlConf.URL_PALMAPI,data, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpResult),nil,true)
end

function ReqNotify:onHttpResult(httpID, code, resp)
    if code == 200 then
        self._newNotifyCount = 0
        if resp ~= nil and resp.code == 0 then 
            self._notifyList = resp.data
            self:success(self._notifyList)
        else
            self:setMessage(resp.message)
            self:fail()
        end
    else
        self:setMessage("获取最新公告失败，请稍后尝试！")
        self:fail()
    end
end

return ReqNotify