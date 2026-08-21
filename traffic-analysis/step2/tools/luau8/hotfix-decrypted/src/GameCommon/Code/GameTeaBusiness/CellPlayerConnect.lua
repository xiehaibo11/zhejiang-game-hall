--create by hujiaqi 8/7/2016--
local CURRENT_MODULE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MODULE_NAME)
local CellPlayerConnect = class("CellPlayerConnect", CellProtocol)
local ToolMXY = import("GameCommon.Code.GameProtocol.ToolMXY")

function CellPlayerConnect:ctor()
    CellPlayerConnect.super.ctor(self)
end


function CellPlayerConnect:start(brandID,numberID,roomID,sessionID,timeoutTime)
    if CellPlayerConnect.super.start(self,timeoutTime) == false then
        return
    end
    local tCellPlayerConnectData = ToolMXY.ReqPlayerConnect:new()
    tCellPlayerConnectData.brandID = brandID
    tCellPlayerConnectData.numID = numberID
    tCellPlayerConnectData.roomID = roomID
    tCellPlayerConnectData.sessionID = sessionID

    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespPlayerConnect,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
    Game.Interface.sendMessage(tCellPlayerConnectData,nil,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellPlayerConnect:onRespPlayerConnect(XYID, buff, len)
    if XYID ~= ToolMXY.RespPlayerConnect.XY_ID then
        return
    end
    
    local tRespPlayerConnectData = ToolMXY.RespPlayerConnect:new()
    tRespPlayerConnectData:bistream(buff, len)
    if tRespPlayerConnectData.flag == ToolMXY.RespPlayerConnect.FLAG.SUCCEED then
        self:success()
    else
        self:setMessage(string.format("PlayerConnect错误 (%d)",tRespPlayerConnectData.flag))
        self:fail()
    end
end

return CellPlayerConnect
.