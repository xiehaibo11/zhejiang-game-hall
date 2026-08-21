local RightBtnsView = CF.gameClass("RightBtnsView", "game.Mahjong.BasicMahjong.Modules.RightBtns.View")

function RightBtnsView:getProxyEvents()
    local proxyEvents = RightBtnsView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_CAITI_STATE_FLAG", callBack = "onUpdataCaiTi"}
    return proxyEvents
end

function RightBtnsView:initUI()
    RightBtnsView.super.initUI(self)
    local caiTiLayer = CF.gameRequire("Modules.GameLayer.CaiTiLayer"):new()
    if not caiTiLayer then
        return
    end
    -- 添加财替开关
    local parentNode = self._msgBtn:getParent()
    if parentNode then
        parentNode:addChild(caiTiLayer)
        self._imgCaitiOpen = CF.UITool.seekNodeByName(caiTiLayer:getChildren()[1], "_KW_CAITI_OPEN")
        self._imgCaitiClose = CF.UITool.seekNodeByName(caiTiLayer:getChildren()[1], "_KW_CAITI_CLOSE")
        caiTiLayer:setPosition(self._msgBtn:getPositionX(), self._msgBtn:getPositionY() + 120)
        self:onUpdataCaiTi()
    end
end

function RightBtnsView:onUpdataCaiTi()
    if self._imgCaitiOpen and self._imgCaitiClose then
        self._imgCaitiOpen:setVisible(true)
        self._imgCaitiClose:setVisible(false)
    end
end

return RightBtnsView