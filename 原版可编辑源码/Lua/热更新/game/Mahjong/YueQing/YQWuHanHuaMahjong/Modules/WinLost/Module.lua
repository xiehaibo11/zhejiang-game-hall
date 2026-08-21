local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

WinLostModule.EVENT_HU_SHOW_ANI = "EVENT_HU_SHOW_ANI"

function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.soundManager:playSoundEnd()
    local huMahID = gameData:getHuDanFang(0)
    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        if gameData:isHuSeat(i) then
            for j = 1, #mahIDs do
                if mahIDs[j] == huMahID then
                    table.remove(mahIDs, j)
                    break
                end
            end
            gameData:setHuMahsData(i, mahIDs, huMahID)
        else
            gameData:setHuMahsData(i, mahIDs, 0)
        end
    end

    for j = 1, #gameData:getHuSeat() do
        self:playHuAni(gameData:getHuSeat()[j])
    end

    self:getWinLostData():onMsgResult(msgData)
    local time = self:getWinLostData():getDelayTime()
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                self:getWinLostData():setHuMahData(i, gameData:getHuDanFang(i))
            end
        end,time)
    end
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgEndType(msgData)
    self:getWinLostData():onMsgEndType(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeats = gameData:getHuSeat()
    for i = 1, #huSeats do
        --播放胡牌音效
        local acitonindex = nil
        if msgData.sEndType == CF.GameDefine.END_TYPE.ET_SELF then
            acitonindex = "hu_1"
        elseif msgData.sEndType == CF.GameDefine.END_TYPE.ET_DISCARD or msgData.sEndType == CF.GameDefine.END_TYPE.ET_ROBKONG then
            acitonindex = "hu_2"
        end
        if acitonindex then
            local bMan = false
            local playerData = CF.roomData:getPlayerDataBySeatId(huSeats[i])
            if playerData then
                bMan = playerData:getSex() == 1
            end
            local bFangYan = not CF.settingData:getMahIsNormalVoice()
            local gameid = bFangYan and CF.roomData:getGameID() or nil
            CF.soundManager:playSoundMahAction(acitonindex, bMan, gameid)
        end
    end
end

function WinLostModule:playHuAni(seat)
    local maxFanType = 0
    local tmpFan = self:getWinLostData()._fans[seat]
    if tmpFan then
        for j = 1, #tmpFan do
            if tmpFan[j].nFanID > maxFanType then
                maxFanType = tmpFan[j].nFanID
            end
        end
        local localSeat = CF.roomData:seatToLocal(seat)
        self:dispatchEvent( { name = self.EVENT_HU_SHOW_ANI, msg = {localSeat = localSeat, maxfan = maxFanType} })
        if maxFanType ~= 0 then
            local bMan = false
            local playerData = CF.roomData:getPlayerDataBySeatId(seat)
            if playerData then
                bMan = playerData:getSex() == 1
            end
            local bFangYan = not CF.settingData:getMahIsNormalVoice()
            local gameid = CF.roomData:getGameID()
            CF.soundManager:playSoundHuType(maxFanType, bMan, gameid, bFangYan)
        end
    end
end

return WinLostModule