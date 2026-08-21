local CURRENT_MODULE_NAME = ...
local CellHttp = import("..GameTea.CellHttp",CURRENT_MODULE_NAME) 
local CellReqPlayerBuffStatus = class("CellReqPlayerBuffStatus",CellHttp)
local requestUrl = "https://mmatch2.gametea.com/2015/activity/lscapturetreasure201802/getBuffStatus?"

function CellReqPlayerBuffStatus:ctor()
    CellReqPlayerBuffStatus.super.ctor(self)
    self._status = 1
    self._info = ""
    self._data = {}
end

function CellReqPlayerBuffStatus:start( numID, tempSessionID, uid, timeout)
    if CellReqPlayerBuffStatus.super.start(self, timeout) == false then
        return
    end
    local data = string.format("numid=%s&uid=%s&ssid=%s",numID,string.urlencode(uid),string.urlencode(tempSessionID))
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpReqPlayerBuffStatusCallBack)
    XH.bf.HttpManager:getInstance():RequestGet(XH.bf.HttpProtocolID.HTTP_ID_REQ_PLAYER_BUFF_STATUS, requestUrl .. data) --GET
end


function CellReqPlayerBuffStatus:onHttpReqPlayerBuffStatusCallBack(eType, result, httpData)
    if eType ~= XH.bf.HttpProtocolID.HTTP_ID_REQ_PLAYER_BUFF_STATUS then
        return
    end
    if result == true then 
        local respBody = json.decode(httpData)
        if respBody then
            self._info = respBody.info
            self._data = respBody.data
            self._status = respBody.status
        end
        self:success()
    else
        self:fail()
    end
end


return CellReqPlayerBuffStatus�