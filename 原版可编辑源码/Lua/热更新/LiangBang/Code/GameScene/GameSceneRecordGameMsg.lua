local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameBaseProtocol = import("GameCommon.Code.GameBase.GameBaseProtocol")
local GameLogicProtocol = import("..GameProtocol.GameLogicProtocol",CURRENT_MODULE_NAME)
local GameMXY = import("GameCommon.Code.GameProtocol.GameMXY")

function GameScene:onRecordGameMsg(XYID, buff, len)
    if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        return
    end

    if XYID ~= GameMXY.ServerToClientMessage.XY_ID then
        return
    end

    local bis = XH.bf.ProtocolBistream:new()
    bis:attach(buff, len)
    local writeBuff = bis:Read(len)

    local tServerToClientMessageData = GameMXY.ServerToClientMessage:new()
    tServerToClientMessageData:bistream(buff, len)

    local subXYID = tServerToClientMessageData.cmdid
    local subBuff = tServerToClientMessageData.message
    local subLen = tServerToClientMessageData.msglen
    if subXYID == GameLogicProtocol.msgGameStart.XY_ID then
        local createBoxRoomTime = XH.bf.BoxRoomCacheMgr:getInstance():getCreateRoomTime()
        self._playback:startRecord(self._boxRoomID,createBoxRoomTime,self._isChangeSelfState,self._uuid)
        self._isChangeSelfState = false
    elseif subXYID == GameLogicProtocol.msgClientForward.XY_ID then
        local msgClientForward = GameLogicProtocol.msgClientForward:new()
        msgClientForward:bistream(subBuff, subLen)
        if msgClientForward.id == GameLogicProtocol.msgClientForward.CF_ID.MobileSignal then
            return
        end
    end

    self._playback:recordGameMsg(XYID,writeBuff,len)

    local retKeys = nil
    if subXYID == GameBaseProtocol.msgPlayerData.XY_ID then
        retKeys = self:onRecordMsgPlayerData(subXYID,subBuff,subLen)
    elseif subXYID == GameBaseProtocol.msgPlayerDataEx.XY_ID then
        retKeys = self:onRecordMsgPlayerDataEx(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgRoomHostSeat.XY_ID then
        retKeys = self:onRecordMsgRoomHostSeat(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgPlayCount.XY_ID then
        retKeys = self:onRecordMsgPlayCount(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameRule.XY_ID then
        retKeys = self:onRecordMsgGameRule(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgAvatarUrl.XY_ID then
        retKeys = self:onRecordMsgAvatarUrl(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgLianZhaBuDai.XY_ID then
        retKeys = self:onRecordMsgLianZhaBuDai(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgGameType.XY_ID then
        retKeys = self:onRecordMsgGameType(subXYID,subBuff,subLen)
    elseif subXYID == GameLogicProtocol.msgJokerData.XY_ID then
        retKeys = self:onRecordMsgJokerData(subXYID,subBuff,subLen)
    else
        return
    end
    local keys = {}
    keys[#keys + 1] = subXYID
    retKeys = retKeys or {}
    for i = 1,#retKeys do
        keys[#keys + 1] = retKeys[i]
    end
    local values = {}
    values.subXYID = XYID
    values.subBuff = writeBuff
    values.subLen = len
    self._playback:recordGameMsgForStartGame(keys,values,not self._playback:isFirstRecord())
end

function GameScene:onRecordTableInfo(XYID, buff, len)
    if self._roomMode ~= Game.FrameworkFunction.ROOM_MODE.BOXROOM then
        return
    end

    if XYID ~= GameMXY.TableInfo.XY_ID then
        return
    end

    local bis = XH.bf.ProtocolBistream:new()
    bis:attach(buff, len)
    local writeBuff = bis:Read(len)

    local keys = {}
    keys[#keys + 1] = XYID
    local values = {}
    values.subXYID = XYID
    values.subBuff = writeBuff
    values.subLen = len
    self._playback:recordGameMsgForStartGame(keys,values,not self._playback:isFirstRecord())
end

-- 玩家数据更新协议
function GameScene:onRecordMsgPlayerData(XYID,buff,len)
    local msgPlayerData = GameBaseProtocol.msgPlayerData:new()
    msgPlayerData:bistream(buff, len)
    local keys = {}
    keys[#keys + 1] = msgPlayerData.nBrandID
    keys[#keys + 1] = msgPlayerData.nNumberID
    return keys
end

function GameScene:onRecordMsgPlayerDataEx(XYID,buff,len)
    local msgPlayerDataEx = GameBaseProtocol.msgPlayerDataEx:new()
    msgPlayerDataEx:bistream(buff, len)

    local keys = {}
    keys[#keys + 1] = msgPlayerDataEx.nBrandID
    keys[#keys + 1] = msgPlayerDataEx.nNumberID
    return keys
end

function GameScene:onRecordMsgRoomHostSeat(XYID,buff,len)

end

function GameScene:onRecordMsgPlayCount(XYID,buff,len)

end

function GameScene:onRecordMsgGameRule(XYID,buff,len)

end

function GameScene:onRecordMsgLianZhaBuDai(XYID,buff,len)
    local msgLianZhaBuDai = GameLogicProtocol.msgLianZhaBuDai:new()
    msgLianZhaBuDai:bistream(buff, len)
    
    local keys = {}
    keys[#keys + 1] = msgLianZhaBuDai.bLianZhaBuDai
    return keys
end

function GameScene:onRecordMsgGameType(XYID,buff,len)
    local msgGameType = GameLogicProtocol.msgGameType:new()
    msgGameType:bistream(buff, len)

    local keys = {}
    keys[#keys + 1] = msgGameType.ucGameType
    return keys
end

function GameScene:onRecordMsgJokerData(XYID,buff,len)
    local msgJokerData = GameLogicProtocol.msgJokerData:new()
    msgJokerData:bistream(buff, len)

    local keys = {}
    keys[#keys + 1] = msgJokerData.ucCards
    keys[#keys + 1] = msgJokerData.ucCount
    return keys
end

function GameScene:onRecordMsgAvatarUrl(XYID,buff,len)
    local msgAvatarUrl = GameLogicProtocol.msgAvatarUrl:new()
    msgAvatarUrl:bistream(buff, len)
    local keys = {}
    keys[#keys + 1] = msgAvatarUrl.seat
    return keys
end

return GameScene