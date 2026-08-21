local CURRENT_MOUDLE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitReqRedboxTime = class("TransmitReqRedbox", Cell)

function TransmitReqRedboxTime:ctor()
    TransmitReqRedboxTime.super.ctor(self)
    self._cell = nil
end

function TransmitReqRedboxTime:start(nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if TransmitReqRedboxTime.super.start(self,timeoutTime) == false then
        return
    end  
    
    local CellSessionID = require(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitReqRedboxTime:onTempSessionCallBack(cell, type, date)
    if type == cell.TYPE.SUCCESS then      
        local cardTypeID = "1"
        local CellRedbox = import(".CellReqRedboxTime",CURRENT_MOUDLE_NAME)
        local cellRedbox = CellRedbox:new()
        cellRedbox:addCellCallBack(self, self.onReqRedboxTimeCallback)   
        cellRedbox:start(XH.playerData:getNumberID(), cell._strTempSession, XH.playerData:getUserID(), 15)
    end
end 

function TransmitReqRedboxTime:onReqRedboxTimeCallback(cell, type, data)
    local status = cell._status
    local ammount = cell._ammount
    local dataTime = cell._dataTime
    if status  then
        self:success(dataTime)
    end
end

function TransmitReqRedboxTime:stop()
    TransmitReqRedboxTime.super.stop(self)
    self._cell:stop()
end

return TransmitReqRedboxTime>