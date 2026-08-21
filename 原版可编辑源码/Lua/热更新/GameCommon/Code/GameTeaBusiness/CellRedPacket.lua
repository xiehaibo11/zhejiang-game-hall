local CURRENT_MOUDLE_NAME = ...
local HttpDefine = import(".HttpDefine",CURRENT_MOUDLE_NAME)
local CellHttp = import("..GameTea.CellHttp",CURRENT_MOUDLE_NAME)
local CellRedPacket = class("CellRedPacket", CellHttp)

local requestUrl = "https://mmatch2.gametea.com/2015/activity/lsredpage/getRedpage?numid=%d&session=%s&uid=%s"

function CellRedPacket:ctor()
    CellRedPacket.super.ctor(self)
    self._status = {}
    self._cell = {}
    self._callbackFunc = {}
end
function CellRedPacket:start(numid,session,uid,timeout,cell,callbackFunc) 
    if CellRedPacket.super.start(self, timeout) == false then
        return
    end

    local strUrl = string.format(requestUrl,numid,session,uid)

    XH.GT.addHttpScriptFuncByObj(cell,callbackFunc)
    XH.bf.HttpManager:getInstance():RequestGet(XH.bf.HttpProtocolID. HTTP_ID_RED_PACKET, strUrl--[[,false,"X-Requested-With: XMLHttpRequest"]])
end

--function CellRedPacket:onHttpResult(eType, result, httpData)
--    if XH.bf.HttpProtocolID.HTTP_ID_RED_PACKET == eType then
--        if result == true then
--            local value = json.decode(httpData)
--            if value == nil then
--                self:setMessage("列表返回失败")
--                self:fail(result)
--            else
--                if value.status == 0 then
--                    self._status = value.status
--                    self:success(result)
--                end
--            end
--        else
--            self:setMessage("")
--            self:fail(result)
--        end
--    end
--end


return CellRedPacket