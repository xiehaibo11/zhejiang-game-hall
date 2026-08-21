local CURRENT_MODULE_NAME = ...
local CellHttp = import("...GameTea.CellHttp",CURRENT_MODULE_NAME) 
local CellReqGloriousLaborEffect = class("CellReqGloriousLaborEffect",CellHttp)
local requestUrl = "https://webactivity.imeete.com/lishuilabour/check/special/effect?"

function CellReqGloriousLaborEffect:ctor()
    CellReqGloriousLaborEffect.super.ctor(self)
    self._status = 1
    self._data = {}
    self._info = ""
end
function CellReqGloriousLaborEffect:start( numid, strSessionKey, uid, areaid , timeout)
    if CellReqGloriousLaborEffect.super.start(self, timeout) == false then
        return
    end
    local data = string.format("numid=%d&uid=%s&ssid=%s&areaid=%d&status=%d",numid,uid,string.urlencode(strSessionKey),areaid,2)
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpReqGloriousLaborEffect)
    XH.bf.HttpManager:getInstance():RequestGet(XH.bf.HttpProtocolID.HTTP_ID_GLORIOUS_LABOR_EFFECT, requestUrl..data)--向web发送请求
end

function CellReqGloriousLaborEffect:onHttpReqGloriousLaborEffect(eType, result, httpData)
    if eType ~= XH.bf.HttpProtocolID.HTTP_ID_GLORIOUS_LABOR_EFFECT then
        return
    end
    local respBody = json.decode(httpData)
    if respBody ~= nil then
        if respBody["status"] == 0 then
            if respBody["data"] then 
                self._data = respBody["data"]
            end
            if respBody["status"] then
                self._status = respBody["status"]
            end
            if respBody["info"] then 
                self._info = respBody["info"]
            end
            self:success()
        else
            self:setMessage(respBody["msg"])
            self:fail()
        end
    else
        self:fail()
    end
end

return CellReqGloriousLaborEffect
