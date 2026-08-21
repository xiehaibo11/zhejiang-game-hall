local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.soundManager:playSoundEnd()

    CF.game:getModule("WinLost"):getWinLostData():setFengDingFlag(msgData.bFengDing)
    if msgData.nScore ~= 0 then
        local fans = CF.game:getModule("WinLost"):getWinLostData():getFanNames()
        for i = 0, 3 do
            local extText = ""
            if i == msgData.nSeat then
                extText = "跟庄" .. msgData.nScore
            else
                extText = "跟庄+" .. (-msgData.nScore / 3)
            end
            if fans[i] then
                fans[i] = fans[i] .. " " .. extText
            else
                fans[i] = extText
            end
        end
        CF.game:getModule("WinLost"):getWinLostData():setFanNames(fans)
        CF.game:getModule("WinLost"):getWinLostData():dispatchEvent({name = CF.game:getModule("WinLost"):getWinLostData().EVENT_RESULT_EXINFO_CHANGED})
    end

    for i = 0 , CF.roomData:getChairs() - 1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huMahID = gameData:getHuDanFang(i)
        gameData:setHuMahsData(i, mahIDs, huMahID)
    end

    self:getWinLostData():onMsgResult(msgData)

    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
        local selfWinLost = msgData.nWinLost[CF.roomData:getSelfSeat()]
        local winLostWithServicePay = selfWinLost 
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        if gameData.getServicePay then 
            winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
        end
        CF.SysTool.performWithDelayGlobal(function()
            if not self or not CF.roomData then
                return
            end
            CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())--hjq todo
        end,time + 1)
    end

    -- 游戏小结束后触发
    self:doAfterMsgResult()
end

--小结束是否显示洗牌按钮
function WinLostModule:needShowShuffleButton(isCutCard)
    --回放
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    --大结束
    if playCount == maxPlayCount and not CF.roomData:isGoldRoom() then
        return false
    end
    if CF.roomData:getIsGameOver() then 
        return false
    end
    --读取配置,是否开启洗牌
    local isShowShuffle = CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID())
    -- 下局是否预洗牌
    if isShowShuffle and not isCutCard then
        local propUseModule = CF.game:getModule("PropUse")
        if propUseModule and propUseModule.isPreShuffle then
            isShowShuffle = not propUseModule:isPreShuffle()
        end
    end
    return isShowShuffle
end

return WinLostModule