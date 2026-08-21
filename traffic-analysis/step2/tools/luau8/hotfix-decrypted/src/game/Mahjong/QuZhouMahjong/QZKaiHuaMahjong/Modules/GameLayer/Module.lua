local GameModule = CF.gameClass("GameModule", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.GameLayer.Module")

-- 游戏开始
function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    local joker = CF.GameDefine.MAH_VALUE.JIAN_BAI
    self:getGameData():addOpenData(joker)
end

return GameModule^