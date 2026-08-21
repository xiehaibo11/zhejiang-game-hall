local CURRENT_MODULE_NAME = ...
local Cell = import("...GameTea.Cell",CURRENT_MODULE_NAME)
local TransmitReqMatchList = class("TransmitReqMatchList", Cell)
local MatchKeyWord = import("...Config.MatchKeyWord",CURRENT_MODULE_NAME)

function TransmitReqMatchList:start(matchid, timeout, appID)
    if TransmitReqMatchList.super.start(self,timeout) == false then
        return
    end

    local cellReqMatchConfig = import(".CellReqMatchList", CURRENT_MODULE_NAME)
    local matchConfig = cellReqMatchConfig:new()
    matchConfig:addCellCallBack(self, self.onReceiveMatchList)
    matchConfig:start(matchid, MatchKeyWord.KW_CONFIG_PROTOCOL_TIME_OUT_TIME, XH.bf.ProcessIDList.MatchServer, 
        appID)
end

function TransmitReqMatchList:onReceiveMatchList(cell, type, data)
    if type == XH.GT.Cell.TYPE.SUCCESS then     
        self:success(data)
    elseif type == XH.GT.Cell.TYPE.FAIL then
        self:fail()
    elseif type == XH.GT.Cell.TYPE.TIMEOUT then
        self:timeout()
    end
end

return TransmitReqMatchList