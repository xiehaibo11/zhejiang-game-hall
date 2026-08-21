local ModuleBase = class("ModuleBase", XH.ModuleBase)

function ModuleBase:ctor()
    ModuleBase.super.ctor(self)
    self._subXYDealList = {}
    self:initServerToClientMessage()
end

function ModuleBase:initServerToClientMessage()
    self:initSubXYDealList()
    if not self._subXYDealList or not next(self._subXYDealList) then
        return
    end
    local moduleProxy = self:getModuleProxy(CF.netEngine)
    moduleProxy:addEventListener(CF.GameMProtocol.ServerToClientMessage.event_key, handler(self, self.onServerToClientMessage))
    moduleProxy:addEventListener(CF.GameProtocolGT.ServerToClientMessage.event_key, handler(self, self.onServerToClientMessage))
end

function ModuleBase:getSubXYDealList()
    return {}
end

function ModuleBase:initSubXYDealList()
    local list = self:getSubXYDealList() or {}
    for _, info in ipairs(list) do
        if info.msgClass and info.msgClass.XY_ID then
            self._subXYDealList[info.msgClass.XY_ID] = info
        end
    end
    local limitIDs = self:getLimitXYIDs() or {}
    for _, xyID in pairs(limitIDs) do
        self._subXYDealList[xyID] = nil
    end
end

function ModuleBase:getLimitXYIDs()
    return {}
end

function ModuleBase:onServerToClientMessage(event)
    local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)

    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen

    if CF.roomData and not CF.roomData:isReceiveLogicMsg(subXYID) then
        return
    end
    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        -- 洗牌协议缓存
        local propUseModule = CF.game:getModule("PropUse")
        local isNeedDelay = false 
        if propUseModule and propUseModule.needDelayCmd then
            isNeedDelay = propUseModule:needDelayCmd() or false
        end
        if (CF.GameProtocol.msgPlayCount and subXYID == CF.GameProtocol.msgPlayCount.XY_ID)
        or (CF.GameProtocol.msgCurPanShu and subXYID == CF.GameProtocol.msgCurPanShu.XY_ID)
        or (CF.GameProtocol.msgBaseClientForwardEx and subXYID == CF.GameProtocol.msgBaseClientForwardEx.XY_ID)
        or (CF.LogicBaseProtocol.msgPlayCountEx and subXYID == CF.LogicBaseProtocol.msgPlayCountEx.XY_ID)
        or (CF.GameProtocol.msgQuanCount and subXYID == CF.GameProtocol.msgQuanCount.XY_ID) then
            isNeedDelay = false
        end
        if isNeedDelay then
            propUseModule:delayCmd(self, self.doServerToClientMessage, record, msgData, subXYID)
        else
            self:doServerToClientMessage(record, msgData, subXYID)
        end
    end
end

function ModuleBase:doServerToClientMessage(record, msgData, subXYID)
    record.callback(msgData)
end

function ModuleBase:clearSubXYDealList()
    self._subXYDealList = {}
end

function ModuleBase:onDestroy()
    self:clearSubXYDealList()
    ModuleBase.super.onDestroy(self)
end

return ModuleBase