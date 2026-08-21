local CURRENT_MODULE_NAME = ...
local CellHttp = import("..GameTea.CellHttp",CURRENT_MODULE_NAME) 
local CellReqSkyGoldBox = class("CellReqSkyGoldBox",CellHttp)
local requestUrl = "https://mmatch2.gametea.com/2015/activity/lscapturetreasure201802/getBox?"

function CellReqSkyGoldBox:ctor()
    CellReqSkyGoldBox.super.ctor(self)
    self._status = 1
    self._info = ""
    self._data = {}
end

function CellReqSkyGoldBox:start( numID, tempSessionID, uid,gameID, timeout)
    if CellReqSkyGoldBox.super.start(self, timeout) == false then
        return
    end
    local data = string.format("numid=%s&uid=%s&ssid=%s&gameid=%d",numID,string.urlencode(uid),string.urlencode(tempSessionID),gameID or KW_DATA_DEFAULT_GAME_ID)
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpReqSkyGoldBoxCallBack)
    XH.bf.HttpManager:getInstance():RequestGet(XH.bf.HttpProtocolID.HTTP_ID_REQ_SKY_GOLD_BOX, requestUrl .. data) --GET
end


function CellReqSkyGoldBox:onHttpReqSkyGoldBoxCallBack(eType, result, httpData)
    if eType ~= XH.bf.HttpProtocolID.HTTP_ID_REQ_SKY_GOLD_BOX then
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


return CellReqSkyGoldBox