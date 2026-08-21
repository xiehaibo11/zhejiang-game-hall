local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")
local KW_DEFAULT_STRING = "------"

--设置房间信息
function BigWinLostUI:setRoomInfo(param)
    self._roomID:setString("房间号: " .. string.format("%06d", param.roomid or KW_DEFAULT_STRING) )
    param.playCount = param.playCount > param.maxCount and param.maxCount or param.playCount
    self._playCount:setString("圈数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
    self._timeStr:setString(param.timeStr or "")
end

return BigWinLostUI