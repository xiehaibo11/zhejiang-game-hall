local RightBtnsView = CF.gameClass("RightBtnsView", "game.Mahjong.BasicMahjong.Modules.RightBtns.View")

function RightBtnsView:initUI()
    RightBtnsView.super.initUI(self)
    local caiTiLayer = CF.gameRequire("Modules.GameLayer.CaiTiLayer"):new()
    if not caiTiLayer then
        return
    end
    -- 添加财替开关
    local wCaiti = caiTiLayer._caiTiPanel
    if wCaiti then
        local wCaitiClone= wCaiti:clone()
        wCaitiClone:setVisible(false)
        local pos = cc.p(self._msgBtn:getPositionX(), self._msgBtn:getPositionY() + 120)
        local nodePos = self._imgTableBg:convertToNodeSpace(self._msgBtn:getParent():convertToWorldSpace(pos))
        wCaitiClone:setPosition(nodePos)
        wCaitiClone:addTo(self._imgTableBg)
    end
end

return RightBtnsView%