local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

function BigWinLostUI:setRoomInfo(param)
    BigWinLostUI.super.setRoomInfo(self, param)
    if param.maxCount >= 99 then
        -- 2小圈1大圈，大于99局时表示以圈数计算
        if param.maxCount == 100 then
            self._playCount:setString(string.format("2小圈(%d局)", param.playCount))
        elseif param.maxCount == 200 then
            self._playCount:setString(string.format("1大圈(%d局)", param.playCount))
        end
    end
end

return BigWinLostUI
H