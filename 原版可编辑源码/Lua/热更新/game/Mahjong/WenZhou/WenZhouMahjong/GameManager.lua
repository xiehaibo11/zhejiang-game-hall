local GameManager = CF.gameClass("WenZhouMahjongBaseManager", "game.Mahjong.WenZhou.WenZhouMahjongBase.GameManager")


function GameManager:enterGame()
    GameManager.super.enterGame(self)
    if CF.roomData and CF.roomData:getIsSeer() and CF.roomData:getIsGameStart() then
        return
    end
    CF.game:getModule("GameLayer"):clearAllTableInfo()
end

return GameManager