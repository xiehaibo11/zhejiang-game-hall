local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
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

    local players = CF.roomData:getPlayerDatas()
    for _, player in pairs(players) do
        local seat = player:getSeat()
        local mahIDs = gameData:getHuMahs(seat)
        local huMahID = gameData:getHuDanFang(seat)
        gameData:setHuMahsData(seat, mahIDs, huMahID)
    end
    self:getWinLostData():setDelayTime(1)
    self:getWinLostData():onMsgResult(msgData)

    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            for _, player in pairs(players) do
                local seat = player:getSeat()
                local huMahID = gameData:getHuDanFang(seat)
                self:getWinLostData():setHuMahData(seat, huMahID)
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


return WinLostModule�
