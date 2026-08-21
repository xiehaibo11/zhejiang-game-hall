local CURRENT_MOUDLE_NAME = ...
local HttpDefine = import(".HttpDefine",CURRENT_MOUDLE_NAME)
local CellHttp = import("..GameTea.CellHttp",CURRENT_MOUDLE_NAME)
local CellReqCarnivalWord = class("CellReqCarnivalWord.lua", CellHttp)
local requestUrl = "https://mmatch2.gametea.com/2015/activity/lschristmas2017/getWord"

function CellReqCarnivalWord:start(numID, tempSessionID, uid, timeout)
    if CellReqCarnivalWord.super.start(self, timeout) == false then
        return
    end
    
    local data = string.format("numid=%s&session=%s&uid=%s",numID,string.urlencode(tempSessionID),string.urlencode(uid))
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpReqCarnivalGetWordCallBack)
    XH.bf.HttpManager:getInstance():RequestPost(HttpDefine.HTTP_ID_REQUEST_CARNIVAL_GETWROD, requestUrl, data) --POST
end

function CellReqCarnivalWord:onHttpReqCarnivalGetWordCallBack(eType, result, httpData)
    if eType ~= HttpDefine.HTTP_ID_REQUEST_CARNIVAL_GETWROD then
        return
    end
    if result == true then
        local respBody = json.decode(httpData)
        local status = respBody["status"]
        local info = respBody["info"]
        if status == 0 then
            self._status = true
            local data = respBody["data"]
            if data then
                self._word = data["word"]
            end
        end
        self:success()
    else
        self:fail()
    end
end

return CellReqCarnivalWord