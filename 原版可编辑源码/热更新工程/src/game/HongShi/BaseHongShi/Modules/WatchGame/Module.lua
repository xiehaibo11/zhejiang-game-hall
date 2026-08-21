local WatchGameModule = CF.gameClass("WatchGameModule", "game.GameBase.Modules.WatchGame.Module")

function WatchGameModule:clearTable()
    WatchGameModule.super.clearTable(self)
    CF.game:getModule("GameLayer"):onMsgGameStart()
    CF.game:getModule("GameLayer"):clearTableUI()
end

return WatchGameModule
