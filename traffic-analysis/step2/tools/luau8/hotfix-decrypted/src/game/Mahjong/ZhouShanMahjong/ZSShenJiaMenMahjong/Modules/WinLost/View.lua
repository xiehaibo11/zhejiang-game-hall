local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.WinLost.View")

function WinLostView:getProxyEvents()
    local proxyEvents = WinLostView.super.getProxyEvents(self)
    local winLostData = self:getWinLostData()
    proxyEvents[#proxyEvents + 1] = { module = winLostData, eventKeyName = "EVENT_RESULT_SET_GAMERULE", callBack = "onSetGameRule" }
    return proxyEvents
end


--设置规则
function WinLostView:onSetGameRule()
    self._textGameRule:setText(self:getWinLostData():getGameRule())
end

return WinLostView
O