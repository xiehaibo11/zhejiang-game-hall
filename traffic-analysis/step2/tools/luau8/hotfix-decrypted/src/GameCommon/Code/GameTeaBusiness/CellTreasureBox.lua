local CURRENT_MOUDLE_NAME = ...
local HttpDefine = import(".HttpDefine",CURRENT_MOUDLE_NAME)
local CellHttp = import("..GameTea.CellHttp",CURRENT_MOUDLE_NAME)
local CellTreasureBox = class("CellTreasureBox", CellHttp)
local requestUrl = "https://yp.gameabc2.com/act/tea_house/indiana/chance?numid=%s&uid=%s&ssid=%s"

function CellTreasureBox:start(numID, tempSessionID, uid, timeout)
    if CellTreasureBox.super.start(self, timeout) == false then
        return
    end

    local urlString = string.format(requestUrl,numID,string.urlencode(uid),string.urlencode(tempSessionID))
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpTreasureBoxCallBack)
    print("CellTreasureBox " .. urlString)
    XH.bf.HttpManager:getInstance():RequestGet(HttpDefine.HTTP_ID_REQUEST_TREASURE, urlString) --GET
end

function CellTreasureBox:onHttpTreasureBoxCallBack(eType, result, httpData)
    if eType ~= HttpDefine.HTTP_ID_REQUEST_TREASURE then
        return
    end
    if result == true then
        local respBody = json.decode(httpData)
        local status = respBody["code"]
        if status == 0 then
            self:success()
        else
            self:fail()
        end        
    else
        self:fail()
    end
end

return CellTreasureBox