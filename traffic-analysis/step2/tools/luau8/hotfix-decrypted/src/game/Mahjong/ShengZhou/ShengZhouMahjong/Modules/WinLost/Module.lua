local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

WinLostModule.EVENT_SHOW_HU_ANI = "EVENT_SHOW_HU_ANI"

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgEndDetail),msgClass = CF.GameProtocol.msgEndDetail}
    return subXYDealList
end

function WinLostModule:onMsgEndDetail(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()
    self:getWinLostData():setDelayTime(3)
    local time = self:getWinLostData():getDelayTime()
    local endType = self:getWinLostData()._sEndType
    if endType ~= CF.GameDefine.HU_TYPE.ET_NONE then
        for i = 0 , CF.roomData:getChairs() - 1 do
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            local huMahID = gameData:getHuDanFang(i)
            if mahIDs and huMahID then
                gameData:setHuMahsData(i, mahIDs, huMahID)
            end
        end
    end
    local tmpHuType = 0
    local tmpHuLocalSeat = 0
    if gameData._huSeats and gameData._huSeats[1] then
        tmpHuLocalSeat = CF.roomData:seatToLocal(gameData._huSeats[1])
    end
    for i = 1 , CF.roomData:getMaxPlayer() do
        if msgData.nHuType[i] and msgData.nHuType[i]>0 then
            tmpHuType = msgData.nHuType[i]
        end
    end
    self:actionHuType(tmpHuType,tmpHuLocalSeat)
    self:getWinLostData():onMsgResult(msgData)
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:actionHuType(huType,localSeat)
    self:dispatchEvent( { name = self.EVENT_SHOW_HU_ANI , msg = {localSeat = localSeat, huType = huType}})
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
            gameData:deleteLastOutMahData(gameData:getLastPlaySeat())
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

return WinLostModule�