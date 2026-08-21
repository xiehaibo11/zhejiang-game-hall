local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

--设置房间信息
function BigWinLostUI:setRoomInfo(param)
    BigWinLostUI.super.setRoomInfo(self, param)
    self._playCount:setString("局数:  " .. (param.playCount or 0))
    if CF.roomData:isPlayBack() then
        local systime = CF.game:getModule("PlayBack"):getJustRecordGameMsgFirstTime()
        self._timeStr:setString(os.date("%Y-%m-%d %H:%M:%S", systime))
    else
        self._timeStr:setString(param.timeStr or "")
    end
end

return BigWinLostUII