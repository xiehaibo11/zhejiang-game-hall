local CURRENT_MOUDLE_NAME = ...
local HttpDefine = import(".HttpDefine",CURRENT_MOUDLE_NAME)
local CellHttp = import("..GameTea.CellHttp",CURRENT_MOUDLE_NAME)
local CellReqRedboxTime = class("CellReqRedboxTime", CellHttp)
local requestUrl = "https://webactivity.imeete.com/lswelfareredpacket/getActivityTime?"


function CellReqRedboxTime:start(numID, tempSessionID, uid, timeout)
    if CellReqRedboxTime.super.start(self, timeout) == false then
        return
    end

    local data = string.format("numid=%s&uid=%s&ssid=%s&areaid=%s",numID,string.urlencode(uid),string.urlencode(tempSessionID),KW_CONFIG_AREA_ID)
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpReqRedboxTimeCallBack)
    XH.bf.HttpManager:getInstance():RequestGet(HttpDefine.HTTP_ID_REQUEST_REDBOX, requestUrl .. data) --GET
end

function CellReqRedboxTime:onHttpReqRedboxTimeCallBack(eType, result, httpData)
    if eType ~= HttpDefine.HTTP_ID_REQUEST_REDBOX then
        return
    end
    if result == true then
        local respBody = json.decode(httpData)
        local status = respBody["status"]
        local info = respBody["info"]
        if status == 0 then
            self._status = true
            self._dataTime = respBody["data"]
        end
        self:success()
    else
        self:fail()
    end
end

return CellReqRedboxTimeM