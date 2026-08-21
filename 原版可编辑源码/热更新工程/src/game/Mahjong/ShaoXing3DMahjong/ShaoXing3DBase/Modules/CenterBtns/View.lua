local CenterBtnsView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.CenterBtns.View")

function CenterBtnsView:onNextBtnClicked(send, eventType)
    if CF.roomData:getIsGameOver() then
        local bigSettleData = CF.game:getModule("BigWinLost"):getBigWinLostData()
        if bigSettleData then
            CF.gameRequire("Modules.BigWinLost.View").new(bigSettleData):showSelf()
        end
    else
        if CF.roomData and CF.roomData:getIsSeer() and CF.roomData:isDelayWatch() then
			CF.game:getModule("WatchGame"):changeToRealWatch()
            return
        end
        CF.msgManager:sendGameStart()
        CF.goldManager:sendPlayerJoinMatch()
        self:onHideSettleButton()
    end
end

return CenterBtnsView