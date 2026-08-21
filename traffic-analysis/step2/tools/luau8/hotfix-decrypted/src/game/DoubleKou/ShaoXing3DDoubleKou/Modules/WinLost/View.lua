local GameWinLostLayer = CF.gameClass("GameWinLostLayer", "game.DoubleKou.BaseDoubleKou.Modules.WinLost.View")

function GameWinLostLayer:getProxyEvents()
    local proxyEvents = GameWinLostLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_REQUST_SHUFFLE", callBack = "onReqShuffle"}
    return proxyEvents
end

function GameWinLostLayer:onReqShuffle(event)
    local shuffleBtns = {"_shuffleBtn", "_shuffleQuanBtn", "_shuffleGoldBtn"}
    for _, v in pairs(shuffleBtns) do
        if self[v] then
            self[v]:setEnabled(false)
            self[v]:setBright(false)
        end
    end
end

return GameWinLostLayer
�