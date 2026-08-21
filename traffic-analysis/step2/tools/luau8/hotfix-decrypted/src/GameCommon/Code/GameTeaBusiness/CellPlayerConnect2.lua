local CURRENT_MODULE_NAME = ...
local CellProtocol = require("GameCommon.Code.GameTea.CellProtocol")
local CellPlayerConnect2 = class("CellPlayerConnect2", CellProtocol)
local ToolMXY = require("GameCommon.Code.GameProtocol.ToolMXY")

function CellPlayerConnect2:ctor()
    CellPlayerConnect2.super.ctor(self)
end


function CellPlayerConnect2:start(brandID,numberID,appID,sessionID,timeoutTime)
    if CellPlayerConnect2.super.start(self,timeoutTime) == false then
        return
    end
    local CellPlayerConnect2Data = ToolMXY.ReqPlayerConnect2:new()
    CellPlayerConnect2Data.askid = 0

    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespPlayerConnect2,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
    Game.Interface.sendMessage(CellPlayerConnect2Data,appID,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellPlayerConnect2:onRespPlayerConnect2(XYID, buff, len)
    if XYID ~= ToolMXY.RespPlayerConnect2.XY_ID then
        return
    end
    
    local tRespPlayerConnect2Data = ToolMXY.RespPlayerConnect2:new()
    tRespPlayerConnect2Data:bistream(buff, len)
    if tRespPlayerConnect2Data.flag == ToolMXY.RespPlayerConnect2.FLAG.SUCCEED then
        self:success()
    elseif tRespPlayerConnect2Data.flag == ToolMXY.RespPlayerConnect2.FLAG.ERR_TABLE_DISMISS then
        self:setMessage("该房间已解散")
        self:fail(tRespPlayerConnect2Data.flag)
    else
        self:setMessage(string.format("PlayerConnect错误 (%d)",tRespPlayerConnect2Data.flag))
        self:fail()
    end
end

return CellPlayerConnect2
M