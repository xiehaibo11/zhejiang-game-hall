local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:onMsgResult(msgData)
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():addExtInfoToFanNames()
    WinLostModule.super.onMsgResult(self, msgData)
end

function WinLostModule:onMsgFanCnt(msgData)
    -- 番数信息等，提供给小结束使用
    self:getWinLostData():onQZMsgFanCnt(msgData)
end

function WinLostModule:onMsgResultExtInfo(msgData)
    self:getWinLostData():onMsgResultExtInfo(msgData)
    self:getWinLostData():addExtInfoToFanNames()
    self:getWinLostData():updateGameResultUI()
end

return WinLostModule�