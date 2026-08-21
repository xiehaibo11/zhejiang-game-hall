local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

--设置房间信息
function BigWinLostUI:setRoomInfo(param)
    BigWinLostUI.super.setRoomInfo(self, param)
    if param.maxCount > 900 then
        self._playCount:setString("局数:  " .. (param.playCount or 0))
    else
        self._playCount:setString("局数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
    end
end

return BigWinLostUI�