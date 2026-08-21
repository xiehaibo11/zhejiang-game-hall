local CURRENT_MOUDLE_NAME = ...
local Cell = import("..GameTea.Cell",CURRENT_MOUDLE_NAME)
local TransmitReqCarnivalWord = class("TransmitReqCarnivalWord", Cell)
local KW_TEXT_INTRODUCE = "KW_TEXT_INTRODUCE"

function TransmitReqCarnivalWord:ctor()
    TransmitReqCarnivalWord.super.ctor(self)
    self._cell = nil
end

function TransmitReqCarnivalWord:start(nBrandID,nNumID,strUserID,strSSID,timeoutTime)
    if TransmitReqCarnivalWord.super.start(self,timeoutTime) == false then
        return
    end  
    
    local CellSessionID = import(KW_PATH_COMMON_GAMETEABUSSINESS..".CellSessionID")
    self._cell = CellSessionID:new()
    self._cell:addCellCallBack(self, self.onTempSessionCallBack)
    self._cell:start(0,nBrandID,nNumID,strUserID,strSSID,self:getLeftTime()) 
end

function TransmitReqCarnivalWord:onTempSessionCallBack(cell, type, date)
    if type == cell.TYPE.SUCCESS then      
        local CellReqCarnivalWord = import(".CellReqCarnivalWord",CURRENT_MOUDLE_NAME)
        local CellReqCarnivalWord = CellReqCarnivalWord:new()
        CellReqCarnivalWord:addCellCallBack(self, self.onReqCarnivalGetWordCallBack)   
        CellReqCarnivalWord:start(XH.playerData:getNumberID(), cell._strTempSession, XH.playerData:getUserID(), 15)
    end
end 

function TransmitReqCarnivalWord:onReqCarnivalGetWordCallBack(cell, type, data)
    local status = cell._status
    local word = cell._word
    if status and word then 
        self:success(word)
    end
end

function TransmitReqCarnivalWord:stop()
    TransmitReqCarnivalWord.super.stop(self)
    self._cell:stop()
end

return TransmitReqCarnivalWord