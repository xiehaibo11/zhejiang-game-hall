local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqSR = class("CellPlayerSR", CellProtocol)

local ToolProtocol = require("app.Protocols.ToolProtocol")

function CellReqSR:ctor()
    CellReqSR.super.ctor(self)
    self._sr = 0
end

function CellReqSR:start(gameID) 
    local srData = ToolProtocol.ReqSR:new()--获取财富
    srData.gameid = gameID
    srData.askid = 0
    Game.Interface.addProtocolScriptFuncByObj(self,self.onReceivePacket,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Tool or 62) 
    Game.Interface.sendMessage(srData,0,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Tool or 62)
end

function CellReqSR:onReceivePacket(XYID, buff, len)
    if XYID ~= ToolProtocol.ResSR.XY_ID then
        return
    end

    local  srData = ToolProtocol.ResSR:new()
    srData:bistream( buff, len )
    self._sr = srData.purse
    XH.GT.CellLogin.setSR(self._sr)
    self:success()
end

return CellReqSR�