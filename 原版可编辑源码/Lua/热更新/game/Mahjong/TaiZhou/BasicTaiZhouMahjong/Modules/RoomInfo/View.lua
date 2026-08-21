local RoomInfoView = CF.gameClass("RoomInfoView", "game.Mahjong.BasicMahjong.Modules.RoomInfo.View")

function RoomInfoView:getProxyEvents()
    local proxyEvents = RoomInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_LEFT_BANKER_COUNT", callBack = "showLeftBankerCount"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_LEFT_JU_COUNT", callBack = "showLeftJuCount"}
    return proxyEvents
end

function RoomInfoView:initLeftRulePanel()
    if not self._leftRulePanel then
        return
    end
    self._leftRulePanel:setVisible(self:getLeftRuleVisible())
    local winSize = cc.Director:getInstance():getWinSize()
    local posX = 180
    if CF.UITool.checkIsIphoneX() then
        posX = posX + 80
    end
    self._leftRulePanel:setPosition(cc.p(posX, winSize.height - 170))
end

function RoomInfoView:showLeftBankerCount(event)
    local nLeftBanker = event.msg.nLeftBanker or 0
    self:setOneInfoNodeValue("playCount", string.format("%d庄", nLeftBanker))
end

function RoomInfoView:showLeftJuCount(event)
    local nLeftJu = event.msg.nLeftJu or 0
    self:setOneInfoNodeValue("playCount", string.format("%d局", nLeftJu))
end

return RoomInfoView