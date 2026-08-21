local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgResult),msgClass = CF.GameProtocol.msgResult}
    return subXYDealList
end

function WinLostModule:getLimitXYIDs()
    -- 嘉兴区协议号与基类冲突，将原先协议对应监听置空
    return {1034, 1045, 1046}
end
    
-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if msgData.maxHuFan then
        for i = 0, 3 do
            gameData:setMaxHuFanWuJiang(i, msgData.maxHuFan[i])
        end
    end

    local huSeats = gameData:getHuSeat()
    if not (huSeats and #huSeats > 0) then
        self:getWinLostData():setEndType(CF.GameDefine.END_TYPE.ET_DRAW)
    elseif self:getWinLostData():getFromSeat() == CF.roomData:getSelfSeat() then
        self:getWinLostData():setEndType(CF.GameDefine.END_TYPE.ET_SELF)
    else
        self:getWinLostData():setEndType(CF.GameDefine.END_TYPE.ET_DISCARD)
    end

    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()  
    local time = self:getWinLostData():getDelayTime()
    local endType = self:getWinLostData():getEndType()
    if endType ~= CF.GameDefine.END_TYPE.ET_NONE and endType ~= CF.GameDefine.END_TYPE.ET_DRAW then
        for i = 0 , CF.roomData:getChairs() - 1 do
            self:getWinLostData():calcFan(i, msgData)
            gameData:clearHandMah(i)
            local mahIDs = gameData:getHuMahs(i)
            local fromSeat = self:getWinLostData():getFromSeat()
            local huMahID = (i == fromSeat) and msgData.nHuDanFang or 0
            if i == fromSeat then
                for j = 1, #mahIDs do
                    if mahIDs[j] == huMahID then
                        table.remove(mahIDs, j)
                        break
                    end
                end
                local localHuSeat = CF.roomData:seatToLocal(i)
                local isZiMo = gameData:getHuActType() == CF.GameDefine.HU_TYPE.TAKE_SELF
                CF.game:getModule("GameLayer"):showMahAcitonAni(localHuSeat, CF.GameDefine.POWER.HU, isZiMo)

                --播放胡牌音效
                local acitonindex = "hu_" .. gameData:getHuActType()
                local bMan = false
                local playerData = CF.roomData:getPlayerDataBySeatId(fromSeat)
                if playerData then
                    bMan = playerData:getSex() == 1
                end
                local bFangYan = not CF.settingData:getMahIsNormalVoice()
                local gameid = bFangYan and CF.roomData:getGameID() or nil
                CF.soundManager:playSoundMahAction(acitonindex, bMan, gameid)
            end
            gameData:setHuMahsData(i, mahIDs, huMahID)
        end
    end
    self:getWinLostData():onMsgResult(msgData)
    if time then
        self:performWithDelay(function()
            self:showSettleWindow()
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = (i == self:getWinLostData():getFromSeat()) and msgData.nHuDanFang or 0
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
    -- 游戏结束后请求金币信息
    CF.msgManager:sendReqPlayerGold()
    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

function WinLostModule:onMsgEndType()
    --协议号冲突，覆盖基类逻辑
end

return WinLostModule