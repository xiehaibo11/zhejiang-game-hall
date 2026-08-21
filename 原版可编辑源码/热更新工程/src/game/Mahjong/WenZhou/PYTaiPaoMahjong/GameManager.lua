local GameManager = CF.gameClass("WenZhouMahjongBaseManager", "game.Mahjong.WenZhou.WenZhouMahjongBase.GameManager")

function GameManager:enterGame()
    GameManager.super.enterGame(self)
    CF.game:getModule("GameLayer"):getGameData():setOpenCounts(2) --翻开两张牌
end

return GameManager