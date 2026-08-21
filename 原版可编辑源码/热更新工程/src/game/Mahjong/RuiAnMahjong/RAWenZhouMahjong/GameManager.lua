local GameManager = CF.gameClass("RAWenZhouMahjongManager", "game.Mahjong.RuiAnMahjong.RAMahjongBase.GameManager")

function GameManager:enterGame()
    GameManager.super.enterGame(self)
    if CF.roomData and CF.roomData:getIsSeer() and CF.roomData:getIsGameStart() then
        return
    end
    CF.game:getModule("GameLayer"):clearAllTableInfo()
end

return GameManager