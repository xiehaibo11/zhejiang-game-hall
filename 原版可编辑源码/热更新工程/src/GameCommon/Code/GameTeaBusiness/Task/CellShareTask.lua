local CURRENT_MOUDLE_NAME = ...
local CellHttp = import("...GameTea.CellHttp",CURRENT_MOUDLE_NAME)
local CellShareTask = class("CellShareTask", CellHttp)

local requestUrl = "https://mmatch2.gametea.com/2015/activity/lishuiheji/share?"

function CellShareTask:start(numID,userID,tempSessionID,type,timeout)
    if CellShareTask.super.start(self, timeout) == false then
        return
    end

    local data = string.format("numid=%s&uid=%s&ssid=%s&index=%s",numID,userID,tempSessionID,type)
    XH.GT.addHttpScriptFuncByObj(self, self.onHttpShareTaskCallBack)
    XH.bf.HttpManager:getInstance():RequestPost(XH.bf.HttpProtocolID.HTTP_ID_SHARE_TASK, requestUrl .. data ,"") --POST 
end

function CellShareTask:onHttpShareTaskCallBack(eType, result, httpData)
    if eType ~= XH.bf.HttpProtocolID.HTTP_ID_SHARE_TASK then
        return 
    end
    if result == true then
        self:setMessage("分享成功!")
        self:success()
    else
        self:setMessage("分享失败，请稍后再试")
        self:fail()
    end
end

return CellShareTask