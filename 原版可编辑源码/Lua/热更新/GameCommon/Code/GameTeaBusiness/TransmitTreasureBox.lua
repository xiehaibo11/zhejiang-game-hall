local CURRENT_MOUDLE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitTreasureBox = class("TransmitTreasureBox", Cell)

function TransmitTreasureBox:ctor()
    TransmitTreasureBox.super.ctor(self)
    self._cell = nil
end

function TransmitTreasureBox:start(nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if TransmitTreasureBox.super.start(self,timeoutTime) == false then
        return
    end  
    
    local CellSessionID = import(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitTreasureBox:onTempSessionCallBack(cell, type, date)
    if type == cell.TYPE.SUCCESS then      
        local cardTypeID = "1"
        local Cellbox = import(".CellTreasureBox",CURRENT_MOUDLE_NAME)
        local cellbox = Cellbox:new()
        cellbox:addCellCallBack(self, self.onReqTreasureCallback)   
        cellbox:start(XH.playerData:getNumberID(), cell._strTempSession, XH.playerData:getUserID(), 15)
    end
end 

function TransmitTreasureBox:onReqTreasureCallback(cell, type, data)
    if type == cell.TYPE.SUCCESS then
        self:success()
    else
        self:fail()
    end
end

function TransmitTreasureBox:stop()
    TransmitTreasureBox.super.stop(self)
    self._cell:stop()
end

return TransmitTreasureBox