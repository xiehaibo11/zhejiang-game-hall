local GameModule = CF.gameClass("GameModule", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.GameLayer.Module")

-- 牌墙
function GameModule:onMsgWallMah(msgData)
    local nDrawnCnt = 20 --荒牌数
    local wallMahCnt = msgData.nWallCnt + nDrawnCnt

    -- 设置牌墙数
    self:getGameData():setSurPlusCounts(wallMahCnt, true)
    self:dispatchEvent( { name = self.EVENT_UPDATE_MAH_WALL , msg = msgData})
end

return GameModule�