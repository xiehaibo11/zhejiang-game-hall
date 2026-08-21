local ModuleBase = class("ModuleBase", NG.ModuleBase)
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")

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
    local moduleProxy = self:getModuleProxy(NG.netEngine)
    moduleProxy:addEventListener(self:getEventKey(), handler(self, self.onServerToClientMessage))
end

function ModuleBase:getEventKey()
    -- return NG.GameMProtocol.ServerToClientMessage.event_key
    return GoldRoomProtoDefine.processid.."_"..GoldRoomProtoDefine.xyid.kServerToClientMessage
end

function ModuleBase:getSubXYDealList()
    return {}
end

function ModuleBase:initSubXYDealList()
    local list = self:getSubXYDealList() or {}
    for _, info in ipairs(list) do
        if info.msgClass and info.msgClass.cmdid then
            self._subXYDealList[info.msgClass.cmdid] = info
        end
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
    local sToClientData = NG.StringTool.gameProtobufDataToLuaData(event.msg.buff, "ServerToClientMessage")

    local subXYID = sToClientData.cmd_id
    local subBuff = sToClientData.message
    local subLen = sToClientData.msg_len
    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        record.callback(msgData)
    end
end

function ModuleBase:doServerToClientMessage(record, msgData, subXYID)
    -- local isNeedDelay, delayTime, isIncludeSelf = self:needDelay(subXYID, msgData)
    -- if isNeedDelay then
    --     self:addProtocolToDelayQueue(record.callback, clone(msgData), delayTime, isIncludeSelf, subXYID)
    -- else
    --     if #self._delayProtocolQueue > 0 then
    --         self:addProtocolToDelayQueue(record.callback, clone(msgData), 0, true, subXYID)
    --     else
    record.callback(msgData)
    --     end
    -- end
end

function ModuleBase:needDelay(xyid, protocol)
    return false, 0, true
end

function ModuleBase:clearSubXYDealList()
    self._subXYDealList = {}
end

function ModuleBase:onDestroy()
    self:clearSubXYDealList()
    ModuleBase.super.onDestroy(self)
end

return ModuleBase�
