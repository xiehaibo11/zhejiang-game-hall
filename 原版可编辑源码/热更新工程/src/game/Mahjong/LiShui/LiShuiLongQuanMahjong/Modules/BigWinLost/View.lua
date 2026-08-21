local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")

function BigWinLostModule:setPlayCountStr(param)
    if CF.roomData:getGameRoomMode() == CF.roomData.GAME_MODE.GAME_MODE_JU then
        self._playCount:setString("局数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
    else 
        self._playCount:setString("圈数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
    end
end

return BigWinLostModule