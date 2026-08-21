local CURRENT_MOUDLE_NAME = ...
local Cell = import("...GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitReqGloriousLaborEffect = class("TransmitReqGloriousLaborEffect", Cell)

function TransmitReqGloriousLaborEffect:ctor()
    TransmitReqGloriousLaborEffect.super.ctor(self)
    self._data = {}
end

function TransmitReqGloriousLaborEffect:start(nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if TransmitReqGloriousLaborEffect.super.start(self,timeoutTime) == false then
        return
    end  
    
    local CellSessionID = import(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitReqGloriousLaborEffect:onTempSessionCallBack(cell,type, flag)
        if type == cell.TYPE.SUCCESS then      
        local CellReqGloriousLaborEffect = import(".CellReqGloriousLaborEffect",CURRENT_MOUDLE_NAME)
        local tCellReqGloriousLaborEffect = CellReqGloriousLaborEffect:new()
        tCellReqGloriousLaborEffect:addCellCallBack(self, self.onGloriousLaborEffectCallBack)   
        tCellReqGloriousLaborEffect:start(XH.GT.CellLogin.getNumberID(), cell._strTempSession,XH.GT.CellLogin.getUserID(),KW_CONFIG_AREA_ID, 15)
    end
end

function TransmitReqGloriousLaborEffect:onGloriousLaborEffectCallBack(cell, type, data)
    if type == XH.GT.Cell.TYPE.SUCCESS then
        local status = cell._status
        if status == 0 then 
            self:setMessage(cell._info)
            self._data = cell._data
            self:success()
        else 
            self:setMessage(cell._info)
            self:fail()
        end
    else
        self:fail()
    end
end

function TransmitReqGloriousLaborEffect:stop()
    TransmitReqGloriousLaborEffect.super.stop(self)
    self._cell:stop()
end


return TransmitReqGloriousLaborEffect

