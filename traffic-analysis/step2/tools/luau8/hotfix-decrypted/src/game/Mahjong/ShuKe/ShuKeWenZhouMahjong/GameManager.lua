local GameManager = CF.gameClass("GameManager", "game.Mahjong.ShuKe.ShuKeMahjongBase.GameManager")

--断线重连
function GameManager:onRelink()
    CF.msgManager:sendPlayerConnect()
    CF.game:getModule("GameLayer"):clearQuickStartUI()
end

function GameManager:enterGame()
    GameManager.super.enterGame(self)
    if CF.roomData and CF.roomData:getIsSeer() and CF.roomData:getIsGameStart() then
        return
    end
    CF.game:getModule("GameLayer"):clearAllTableInfo()
end

return GameManager