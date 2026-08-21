local ReqCancelWriteOff = class("ReqCancelWriteOff", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

function ReqCancelWriteOff:start(timeoutTime)
    if ReqCancelWriteOff.super.start(self, timeoutTime) == false then
        return
    end
    local data = {
        sid = XH.areaData:getAreaWindID(),
        areaid = XH.areaData:getAreaID(),
        numid = XH.playerData:getNumberID(),
        uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID()),
        gameid = XH.areaData:getNotifyGameID()
    }
    local param = json.encode(data)
    local headmap = {}
    headmap["Content-Type"] = "application/json"
    XH.httpManager:RequestPost(HttpDefine.URL_LOGOFF_DOCANCLE, UrlConf.URL_LOGOFF_DOCANCLE, param, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpReqCancelWriteOffCallBack), headmap, false)
end

function ReqCancelWriteOff:onHttpReqCancelWriteOffCallBack(eType, status, response)
    if status == 200 then
        if response.code == 0 then
            self:success(response.data)
        else
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqCancelWriteOff�