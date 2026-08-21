local CURRENT_MODULE_NAME = ...
local Cell = import("...GameTea.Cell",CURRENT_MODULE_NAME)
local TransmitJoinMatchSystem = class("TransmitJoinMatchSystem", Cell)
local MatchKeyWord = import("...Config.MatchKeyWord",CURRENT_MODULE_NAME)

function TransmitJoinMatchSystem:ctor()
    self.super.ctor(self)
    self._cacheMathConfig = {}
    self._appID = 0
    self._reqType = 0
end

function TransmitJoinMatchSystem:start(type, appID, timeout)
    if TransmitJoinMatchSystem.super.start(self,timeout) == false then
        return
    end

    local cellReqJoinMatch = import(".CellReqJoinMatchSystem", CURRENT_MODULE_NAME)
    self._appID = appID
    self._reqType = type
    local joinMatch = cellReqJoinMatch:new()
    
    if type == XH.bf.Match32XY.ReqJoinMatchSystem.TYPE.JOIN then
        joinMatch:addCellCallBack(self, self.onReceiveJoinMatchSystem)
        joinMatch:start(type, MatchKeyWord.KW_CONFIG_PROTOCOL_TIME_OUT_TIME, XH.bf.ProcessIDList.MatchServer, 
            appID)
    else
        local tempAppID = XH.GT.matchAppID
        for key, var in pairs(tempAppID) do
            for index, value in pairs(var) do
                joinMatch:start(type, MatchKeyWord.KW_CONFIG_PROTOCOL_TIME_OUT_TIME, XH.bf.ProcessIDList.MatchServer, 
                    value)
            end
        end
    end
end

return TransmitJoinMatchSystem