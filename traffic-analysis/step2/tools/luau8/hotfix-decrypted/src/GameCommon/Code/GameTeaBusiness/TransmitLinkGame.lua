--create by hujiaqi 8/7/2016--
local CURRENT_MODULE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MODULE_NAME)
local TransmitLinkGame = class("TransmitLinkGame", Cell)
local ToolMXY = require("GameCommon.Code.GameProtocol.ToolMXY")

function TransmitLinkGame:ctor()
    TransmitLinkGame.super.ctor(self)
    self._brandID = 0
    self._numberID = 0
    self._roomID = 0
    self._sessionID = ""

end

function TransmitLinkGame:start(brandID,numberID,roomID,sessionID,timeoutTime)
    if TransmitLinkGame.super.start(self,timeoutTime) == false then
        return
    end
    
    self._brandID = brandID
    self._numberID = numberID
    self._roomID = roomID
    self._sessionID = sessionID

    local CellPlayerConnect2 = import(".CellPlayerConnect2",CURRENT_MODULE_NAME)
    local cellPlayerConnect2 = CellPlayerConnect2:new()
    cellPlayerConnect2:addCellCallBack(self, self.onPlayerConnect2CallBack)
    cellPlayerConnect2:start(self._brandID,self._numberID,self._roomID,self._sessionID,self:getLeftTime())
end

function TransmitLinkGame:onCheckClientVerCallBack(cellCheckClientVer, type, data)
    if type == Cell.TYPE.SUCCESS then
        local CellPlayerConnect = import(".CellPlayerConnect",CURRENT_MODULE_NAME)
        local cellPlayerConnect = CellPlayerConnect:new()
        cellPlayerConnect:addCellCallBack(self, self.onPlayerConnectCallBack)
        cellPlayerConnect:start(self._brandID,self._numberID,self._roomID,self._sessionID,self:getLeftTime())
    elseif type == Cell.TYPE.FAIL then
        self:setMessage(cellCheckClientVer:getMessage())
        self:fail(data)
    elseif type == Cell.TYPE.TIMEOUT then
        self:setMessage(cellCheckClientVer:getMessage())
        self:timeout(data)
    end  
end

function TransmitLinkGame:onPlayerConnectCallBack(cell, type, data)
    if type == Cell.TYPE.SUCCESS then
        self:success(data)
    elseif type == Cell.TYPE.FAIL then
        self:setMessage(cell:getMessage())
        self:fail(data)
    elseif type == Cell.TYPE.TIMEOUT then
        self:setMessage(cell:getMessage())
        self:timeout(data)
    end  
end

function TransmitLinkGame:onPlayerConnect2CallBack(cell, type, data)
    if type == Cell.TYPE.SUCCESS then
        self:success(data)
    elseif type == Cell.TYPE.FAIL then  
        self:setMessage(cell:getMessage())
        self:fail(data)
        if data == ToolMXY.RespPlayerConnect2.FLAG.ERR_TABLE_DISMISS then
            cc.Director:getInstance():popScene()
            Game.Interface.popLayer("LoadingLayer")
        end
    elseif type == Cell.TYPE.TIMEOUT then
        self:setMessage(cell:getMessage())
        self:timeout(data)
    end  
end

return TransmitLinkGame
�
