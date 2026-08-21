local WatchGameModule = CF.gameClass("WatchGameModule", "game.GameBase.Modules.WatchGame.Module")

function WatchGameModule:initDatas()
    WatchGameModule.super.initDatas(self)
    self._msgObviousMahsData = nil
end

function WatchGameModule:getFillGameMsgData()
    if self._msgObviousMahsData and #self._msgObviousMahsData > 0 then
        return self._msgObviousMahsData
    end
    local gameMsgList = self._gameMsgList
    for i = #gameMsgList, 1, -1 do
        local XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID == CF.GameProtocol.msgObviousMahsData.XY_ID then
            local msgObviousMahsData = CF.GameProtocol.msgObviousMahsData:new()
            msgObviousMahsData:bistream(buff, len)
            self._msgObviousMahsData = msgObviousMahsData.mahsData
            break
        end
    end
    return self._msgObviousMahsData
end

function WatchGameModule:onFillMsgTake(msgid, buff, len)
    local msgTake = CF.GameProtocol.msgTake:new()
    msgTake:bistream(buff, len)
    
    local fillMsgTake = CF.GameProtocol.msgTake:new()
    fillMsgTake.nSeat = msgTake.nSeat
    fillMsgTake.nIndex = msgTake.nIndex
    
    local allFillGameData = self:getFillGameMsgData()
    if not allFillGameData then
        return
    end
    local tmpData = allFillGameData[msgTake.nIndex]
    if not tmpData then
        return
    end
    if msgTake.nMah == CF.GameDefine.MAH_VALUE.BACK then
        fillMsgTake.nMah = tmpData.takeMahs[1]
    else
        fillMsgTake.nMah = msgTake.nMah
    end
    return fillMsgTake:bostream()
end

function WatchGameModule:onFillMsgPlayerBack(msgid, buff, len)
    local msgPlayerBack = CF.GameProtocol.msgPlayerBack:new()
    msgPlayerBack:bistream(buff, len)

    local fillMsgPlayerBack = CF.GameProtocol.msgPlayerBack:new()
    fillMsgPlayerBack.nSeat = msgPlayerBack.nSeat
    fillMsgPlayerBack.nCombCount = msgPlayerBack.nCombCount
    fillMsgPlayerBack.tCombs = msgPlayerBack.tCombs
    fillMsgPlayerBack.nHandCount = msgPlayerBack.nHandCount
    fillMsgPlayerBack.nIndex = msgPlayerBack.nIndex
    fillMsgPlayerBack.nDFCount = msgPlayerBack.nDFCount
    
    local allFillGameData = self:getFillGameMsgData()
    if not allFillGameData then
        return
    end
    local tmpData = allFillGameData[msgPlayerBack.nIndex]
    if not tmpData then
        return
    end
    fillMsgPlayerBack.nMahs = tmpData.handMahs
    if #tmpData.takeMahs > 0 then
        fillMsgPlayerBack.nDanFang = tmpData.takeMahs[1]
    end
    return fillMsgPlayerBack:bostream()
end

function WatchGameModule:onAdjustRecordGameMsgList()
    if not CF.roomData:getIsSeer() or not CF.roomData:isDelayWatch() then
        return
    end
    local gameMsgList = self._gameMsgList
    for i = #gameMsgList, 1, -1 do
        local XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID == CF.GameProtocol.msgObviousMahsData.XY_ID and len < 10 then
            return
        end
    end
    for i = 1, #gameMsgList do
        local msgTime = gameMsgList[i].time
        local fillGameMsg =  self:fillGameMsgFunc(gameMsgList[i].subXYID, gameMsgList[i].subBuff, gameMsgList[i].subLen)
        if fillGameMsg then
            gameMsgList[i] = fillGameMsg
            gameMsgList[i].time = msgTime
        end
    end
end

function WatchGameModule:fillGameMsgFunc(msgid, buff, len)
    if msgid ~= CF.GameMProtocol.ServerToClientMessage.XY_ID then
        return
    end

    local sToClientData =  CF.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(buff, len)
    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen
    local tmpMsgData = self:processMsgData(subXYID, subBuff, subLen)
    local tFillSToCMessageData = {}
    if tmpMsgData then
        local tmpSToCData = CF.GameMProtocol.ServerToClientMessage:new()
        tmpSToCData.cmdid = subXYID
        tmpSToCData.message = tmpMsgData:getBytes()
        tmpSToCData.msglen = tmpMsgData:getLength()
        local bos = tmpSToCData:bostream()
        tFillSToCMessageData.subXYID = msgid
        local bis = un.network.OStream.new(bos:getBytes())
        local writeBuff = bis:read(bos:getLength())
        tFillSToCMessageData.subBuff = writeBuff
        tFillSToCMessageData.subLen = bos:getLength()
    else
        tFillSToCMessageData.subXYID = msgid
        tFillSToCMessageData.subBuff = buff
        tFillSToCMessageData.subLen = len
    end
    return tFillSToCMessageData
end

function WatchGameModule:processMsgData(subXYID, subBuff, subLen)
    local tmpMsgData = nil
    if subXYID == CF.GameProtocol.msgPlayerBack.XY_ID then
        tmpMsgData = self:onFillMsgPlayerBack(subXYID, subBuff, subLen)
    elseif subXYID == CF.GameProtocol.msgTake.XY_ID then
        tmpMsgData = self:onFillMsgTake(subXYID, subBuff, subLen)
    end
    return tmpMsgData
end

function WatchGameModule:clearTable()
    WatchGameModule.super.clearTable(self)
    local gamelayerModule = CF.game:getModule('GameLayer')
    if gamelayerModule then
        gamelayerModule:initDatas()
        gamelayerModule:clearAllPowerUI()
        gamelayerModule:onMsgStartGame()
    end
end

return WatchGameModule
W