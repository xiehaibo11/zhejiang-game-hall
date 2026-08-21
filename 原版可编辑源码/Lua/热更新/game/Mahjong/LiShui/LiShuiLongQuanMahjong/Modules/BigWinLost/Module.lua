local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")


function BigWinLostModule:analyTotalResultMsg(msgData)
    
    local param = BigWinLostModule.super.analyTotalResultMsg(self,msgData)
    param.playCount = CF.roomData:getPlayCount()


    return param
end


return BigWinLostModule