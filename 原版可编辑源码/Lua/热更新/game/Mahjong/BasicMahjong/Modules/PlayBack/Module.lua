local PlayBackModule = CF.gameClass("PlayBackModule", "game.GameBase.Modules.PlayBack.Module")

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
        local msgObviousMahsData = CF.GameProtocol.msgObviousMahsData:new()
        msgObviousMahsData:bistream(fileMsg.buff, fileMsg.len)
        targetFile:close()
        return msgObviousMahsData.mahsData
    end
    return nil
end

function PlayBackModule:onFillMsgTake(msgid, buff, len)
local msgTake = CF.GameProtocol.msgTake:new()
    msgTake:bistream(buff, len)
    
    local fillMsgTake = CF.GameProtocol.msgTake:new()
    fillMsgTake.nSeat = msgTake.nSeat
    fillMsgTake.nIndex = msgTake.nIndex
    
    local allFillGameData = self:getFillGameMsgData()
    local tmpData = allFillGameData[msgTake.nIndex]
    if msgTake.nMah == CF.GameDefine.MAH_VALUE.BACK then
        fillMsgTake.nMah = tmpData.takeMahs[1]
    else
        fillMsgTake.nMah = msgTake.nMah
    end
    
    return fillMsgTake:bostream()
end

function PlayBackModule:onFillMsgPlayerBack(msgid, buff, len)
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
    local tmpData = allFillGameData[msgPlayerBack.nIndex]
    fillMsgPlayerBack.nMahs = tmpData.handMahs
    if #tmpData.takeMahs > 0 then
        fillMsgPlayerBack.nDanFang = tmpData.takeMahs[1]
    end
    return fillMsgPlayerBack:bostream()
end

function PlayBackModule:onAdjustRecordGameMsgList()
    if not CF.roomData:isBoxRoom() then
        return
    end
    local gameMsgList = self:getGameMsgList()
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
    if subXYID == CF.GameProtocol.msgPlayerBack.XY_ID then
        tmpMsgData = self:onFillMsgPlayerBack(subXYID, subBuff, subLen)
    elseif subXYID == CF.GameProtocol.msgTake.XY_ID then
        tmpMsgData = self:onFillMsgTake(subXYID, subBuff, subLen)
    end
    return tmpMsgData
end

return PlayBackModule
