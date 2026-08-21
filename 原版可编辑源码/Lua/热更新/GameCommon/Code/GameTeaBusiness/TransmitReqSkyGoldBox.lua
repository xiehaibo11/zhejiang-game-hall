local CURRENT_MOUDLE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitReqSkyGoldBox = class("TransmitReqSkyGoldBox", Cell)

function TransmitReqSkyGoldBox:ctor()
    TransmitReqSkyGoldBox.super.ctor(self)
    self._data = {}
    self._gameID = nil
end

function TransmitReqSkyGoldBox:start(nBrandID,nNumID,strUserID,strSSID,gameID,timeoutTime)
    if TransmitReqSkyGoldBox.super.start(self,timeoutTime) == false then
        return
    end  
    self._gameID = gameID
    local CellSessionID = import(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitReqSkyGoldBox:onTempSessionCallBack(cell, type, date)
    if type == cell.TYPE.SUCCESS then
        local CellReqSkyGoldBox = import(".CellReqSkyGoldBox",CURRENT_MOUDLE_NAME)
        local cellReqSkyGoldBox = CellReqSkyGoldBox:new()
        cellReqSkyGoldBox:addCellCallBack(self, self.onReqSkyGoldBoxCallback)   
        cellReqSkyGoldBox:start(XH.GT.CellLogin.getNumberID(), cell._strTempSession, XH.GT.CellLogin.getUserID(),self._gameID, 15)
    end
end 

function TransmitReqSkyGoldBox:onReqSkyGoldBoxCallback(cell, type, data)
    local status = cell._status
    if status == 0 then 
        self:setMessage(cell._info)
        self._data = cell._data
        self:success()
    else 
        self:setMessage(cell._info)
        self:fail()
    end
end

return TransmitReqSkyGoldBox