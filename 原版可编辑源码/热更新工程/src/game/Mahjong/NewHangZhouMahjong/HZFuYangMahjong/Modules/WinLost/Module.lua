local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.Module")

-- 小结束
function WinLostModule:onMsgResult(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    CF.roomData:setIsHaveResult(true)
    CF.soundManager:playSoundEnd()

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
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end

    CF.game:getModule("GameLayer"):clearMahLayerAction()

    gameData:setPowerData({})
    CF.SysTool.performWithDelayGlobal(function()
        CF.roomData:setIsGameStart(false)
    end, time);

    -- 游戏小结束后触发
    self:doAfterMsgResult()

    gameData:setMsgPowerData()
end


return WinLostModule