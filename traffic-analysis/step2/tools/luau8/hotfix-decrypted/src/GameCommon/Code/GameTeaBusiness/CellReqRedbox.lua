local CURRENT_MOUDLE_NAME = ...
local HttpDefine = import(".HttpDefine",CURRENT_MOUDLE_NAME)
local CellHttp = import("..GameTea.CellHttp",CURRENT_MOUDLE_NAME)
local CellReqRedbox = class("CellReqRedbox", CellHttp)
local requestUrl = "https://webactivity.imeete.com/lswelfareredpacket/getRedPack?"


function CellReqRedbox:start(numID, tempSessionID, uid, timeout)
    if CellReqRedbox.super.start(self, timeout) == false then
        return
    end

    local data = string.format("numid=%s&uid=%s&ssid=%s&areaid=%s",numID,string.urlencode(uid),string.urlencode(tempSessionID),KW_CONFIG_AREA_ID)
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpReqRedboxCallBack)
    XH.bf.HttpManager:getInstance():RequestGet(HttpDefine.HTTP_ID_REQUEST_REDBOX, requestUrl .. data) --GET
end

function CellReqRedbox:onHttpReqRedboxCallBack(eType, result, httpData)
    if eType ~= HttpDefine.HTTP_ID_REQUEST_REDBOX then
        return
    end
    if result == true then
        local respBody = json.decode(httpData)
        local status = respBody["status"]
        if status == 0 then
            self._status = true
            self._info = respBody["info"]
            local data = respBody["data"]
            if data then
                self._inings = data["innings"]
                --self._ammount = data["amount"]
            end
        end 
        self:success()
    else
        self:fail()
    end
end

return CellReqRedbox�