local PlayBackModule = CF.gameClass("PlayBackModule", "game.GameBase.Modules.PlayBack.Module")
local CardEnum = CF.gameRequire("Define.CardEnum")

function PlayBackModule:getfileMsgFromFile(recordPath)
    if string.find(recordPath, "AllDirection") then
        local targetFile = io.open(recordPath, "rb")
        local fileMsg = {}
        fileMsg.xyid = tonumber(targetFile:read(6), 10)
        fileMsg.len = tonumber(targetFile:read(6), 10) or 0
        fileMsg.buff = targetFile:read(fileMsg.len)
        -- 兼容结束协议封装在11200协议里的情况
        if fileMsg.xyid == CF.GameMProtocol.ServerToClientMessage.XY_ID then
            local fillGameMsgData = {}
            local sToClientData = CF.GameMProtocol.ServerToClientMessage:new()
            sToClientData:bistream(fileMsg.buff, fileMsg.len)
            fillGameMsgData.buff = sToClientData.message
            fillGameMsgData.len = sToClientData.msglen
            fillGameMsgData.xyid = sToClientData.cmdid
            fileMsg = fillGameMsgData
        end
        local msgObviousCardsDataEx = CF.GameProtocol.msgObviousCardsDataEx:new()
        msgObviousCardsDataEx:bistream(fileMsg.buff, fileMsg.len)
        targetFile:close()
        return msgObviousCardsDataEx.cardsData
    end
    return nil
end

function PlayBackModule:onAdjustRecordGameMsgList()
    if not CF.roomData:isBoxRoom() then
        return
    end

    local gameMsgList = self:getGameMsgList()
    local XYID
    -- 删除断线重连多余的msgStartGame
    local isFindGameStart = false
    for i = 1, #gameMsgList do
        if i > #gameMsgList then
            break
        end
        XYID = gameMsgList[i].subXYID
        local buff = gameMsgList[i].subBuff
        local len = gameMsgList[i].subLen
        if XYID == CF.GameMProtocol.ServerToClientMessage.XY_ID or XYID == CF.GameProtocol_TableInfo_XYID then
            local tServerToClientMessageData = CF.GameMProtocol.ServerToClientMessage:new()
            tServerToClientMessageData:bistream(buff, len)
            local subXYID = tServerToClientMessageData.cmdid
            if subXYID == CF.GameProtocol.msgGameStart.XY_ID then
                if isFindGameStart then
                    table.remove(gameMsgList, i)
                else
                    isFindGameStart = true
                end
            end
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

function PlayBackModule:fillGameMsgFunc(msgid, buff, len)
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

function PlayBackModule:processMsgData(subXYID, subBuff, subLen)
    local tmpMsgData = nil
    if subXYID == CF.GameProtocol.msgHandCards.XY_ID then
        tmpMsgData = self:onFillMsgPlayerBack(subXYID, subBuff, subLen)
    elseif subXYID == CF.GameProtocol.msgDrawCards.XY_ID then
        tmpMsgData = self:onFillMsgDrawCard(subXYID, subBuff, subLen)
    end
    return tmpMsgData
end

function PlayBackModule:onFillMsgPlayerBack(msgid, buff, len)
    local msgHandCards = CF.GameProtocol.msgHandCards:new()
    msgHandCards:bistream(buff, len)

    local fillMsgPlayerBack = CF.GameProtocol.msgHandCards:new()
    fillMsgPlayerBack.sSeat = msgHandCards.sSeat
    fillMsgPlayerBack.ucCount = msgHandCards.ucCount
    fillMsgPlayerBack.ucCards = msgHandCards.ucCards
    fillMsgPlayerBack.bAni = msgHandCards.bAni
    fillMsgPlayerBack.nIndex = msgHandCards.nIndex
    local allFillGameData = self:getFillGameMsgData()
    local tmpData = allFillGameData[msgHandCards.nIndex]
    if msgHandCards.nIndex ~= 0 and tmpData and tmpData.handCardsCount == msgHandCards.ucCount then
        fillMsgPlayerBack.ucCards = tmpData.handCards
    end
    return fillMsgPlayerBack:bostream()
end

function PlayBackModule:onFillMsgDrawCard(msgid, buff, len)
    local msgDraw = CF.GameProtocol.msgDrawCards:new()
    msgDraw:bistream(buff, len)
    
    local fillMsgDraw = CF.GameProtocol.msgDrawCards:new()
    fillMsgDraw.sSeat = msgDraw.sSeat
    fillMsgDraw.ucCards = msgDraw.ucCards
    fillMsgDraw.ucCount = msgDraw.ucCount
    fillMsgDraw.nIndex = msgDraw.nIndex
    
    local allFillGameData = self:getFillGameMsgData()
    local tmpData = allFillGameData[msgDraw.nIndex]
    if msgDraw.nIndex ~= 0 and tmpData and tmpData.takeCardsCount == msgDraw.ucCount then
        fillMsgDraw.ucCards = tmpData.takeCards
    end
    return fillMsgDraw:bostream()
end

return PlayBackModule!