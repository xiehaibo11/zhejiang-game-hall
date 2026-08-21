local CURRENT_MOUDLE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitReqRedbox = class("TransmitReqRedbox", Cell)

function TransmitReqRedbox:ctor()
    TransmitReqRedbox.super.ctor(self)
    self._cell = nil
end

function TransmitReqRedbox:start(nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if TransmitReqRedbox.super.start(self,timeoutTime) == false then
        return
    end  

    local CellSessionID = require(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitReqRedbox:onTempSessionCallBack(cell, type, date)
    if type == cell.TYPE.SUCCESS then      
        local cardTypeID = "1"
        local CellRedbox = import(".CellReqRedbox",CURRENT_MOUDLE_NAME)
        local cellRedbox = CellRedbox:new()
        cellRedbox:addCellCallBack(self, self.onReqRedboxCallback)   
        cellRedbox:start(XH.playerData:getNumberID(), cell._strTempSession, XH.playerData:getUserID(), 15)
    end
end 

function TransmitReqRedbox:onReqRedboxCallback(cell, type, data)
    local status = cell._status
    local inings =  cell._inings
    local info = cell._info
    if status  then --and inings ~= nil and inings % 2 == 0 and inings <= 6 then
        self:success(info)
    end
end

function TransmitReqRedbox:stop()
    TransmitReqRedbox.super.stop(self)
    self._cell:stop()
end

return TransmitReqRedbox