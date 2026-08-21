local CURRENT_MOUDLE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitReqPlayerBuffStatus = class("TransmitReqPlayerBuffStatus", Cell)
local KW_TEXT_INTRODUCE = "KW_TEXT_INTRODUCE"

function TransmitReqPlayerBuffStatus:ctor()
    TransmitReqPlayerBuffStatus.super.ctor(self)
    self._data = {}
end

function TransmitReqPlayerBuffStatus:start(nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if TransmitReqPlayerBuffStatus.super.start(self,timeoutTime) == false then
        return
    end  

    local CellSessionID = import(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitReqPlayerBuffStatus:onTempSessionCallBack(cell, type, date)
    if type == cell.TYPE.SUCCESS then
        local CellReqPlayerBuffStatus = import(".CellReqPlayerBuffStatus",CURRENT_MOUDLE_NAME)
        local cellReqPlayerBuffStatus = CellReqPlayerBuffStatus:new()
        cellReqPlayerBuffStatus:addCellCallBack(self, self.onReqPlayerBuffStatusCallback)   
        cellReqPlayerBuffStatus:start(XH.GT.CellLogin.getNumberID(), cell._strTempSession, XH.GT.CellLogin.getUserID(), 15)
    end
end 

function TransmitReqPlayerBuffStatus:onReqPlayerBuffStatusCallback(cell, type, data)
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

return TransmitReqPlayerBuffStatus�