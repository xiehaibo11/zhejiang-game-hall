local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:getProxyEvents()
    local proxyEvents = WinLostView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart" }
    return proxyEvents
end

return WinLostView