local WatchGameModule = CF.gameClass("WatchGameModule", "game.Mahjong.BasicMahjong.Modules.WatchGame.Module")

function WatchGameModule:processMsgData(subXYID, subBuff, subLen)
    if subXYID == CF.GameProtocol.msgPowerEx_SToC.XY_ID then
        return self:onFillMsgPlayerPowerEx(subXYID, subBuff, subLen)
    elseif subXYID == CF.GameProtocol.msgPlayerAction.XY_ID then
        return self:onFillMsgPlayerAction(subXYID, subBuff, subLen)
    end
    return WatchGameModule.super.processMsgData(self, subXYID, subBuff, subLen)
end

function WatchGameModule:onFillMsgPlayerPowerEx(XYID,buff,len)    
    local msgPowerEx = CF.GameProtocol.msgPowerEx_SToC:new()
    msgPowerEx:bistream(buff, len)

    local fillMsgPowerEx = CF.GameProtocol.msgPowerEx_CToS:new()
    fillMsgPowerEx.nSeat = msgPowerEx.nSeat
    fillMsgPowerEx.nIndex = msgPowerEx.nIndex

    if msgPowerEx.nIndex == 0 then
        fillMsgPowerEx.nPower = msgPowerEx.nPower
    else
        local allFillGameData = self:getFillGameMsgData()
        if not allFillGameData then
            return
        end
        local tmpData = allFillGameData[msgPowerEx.nIndex]
        if tmpData then
            fillMsgPowerEx.nPower = tmpData.nPower
        else
            fillMsgPowerEx.nPower = 0
        end

    end
    return fillMsgPowerEx:bostream()
end

function WatchGameModule:onFillMsgPlayerAction(XYID,buff,len)    
    local msgPlayerAction = CF.GameProtocol.msgPlayerAction:new()
    msgPlayerAction:bistream(buff, len)

    local fillMsgPlayerAction = CF.GameProtocol.msgPlayerAction:new()
    fillMsgPlayerAction.nSeat = msgPlayerAction.nSeat
    fillMsgPlayerAction.nIndex = msgPlayerAction.nIndex

    local allFillGameData = self:getFillGameMsgData()
    if not allFillGameData then
        return
    end
    local tmpData = allFillGameData[msgPlayerAction.nIndex]
    fillMsgPlayerAction.nFlag = tmpData.nFlag

    return fillMsgPlayerAction:bostream()
end

return WatchGameModule