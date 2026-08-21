local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellSessionID = class("CellSessionID", CellProtocol)
local ToolProtocol = require("app.Protocols.ToolProtocol")

function CellSessionID:ctor()
    CellSessionID.super.ctor(self)
    self._strTempSession = ""
end

function CellSessionID:start(nType,nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if CellSessionID.super.start(self,timeoutTime) == false then
        return
    end
    
    local rtsid = ToolProtocol.ReqTempSessionID:new()
    rtsid.askid = nType
    rtsid.areaid = nBrandID
    rtsid.numid = nNumID
    rtsid.userid = strUserID

    rtsid.sessionid = strSSID
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceivePacket,0,62)
    XH.GT.sendPacket(rtsid,0,0,62)
end

function CellSessionID:onReceivePacket(XYID, buff, len)
    if(XYID == ToolProtocol.RespTempSessionID.XY_ID) then
        local msg = ToolProtocol.RespTempSessionID:new()
        msg:bistream(buff, len)
        if msg.flag == ToolProtocol.RespTempSessionID.FLAG.SUCCESS then
            local sessionid = XH.bf.CAgSessionID:new(msg.tempsessionid, 16)
            self._strTempSession = sessionid:StrID()
            self:success()
        else
            self:fail()
        end
    end
end

function CellSessionID:getTempSession()
    return CellSessionID._strTempSession
end

return CellSessionID