local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.BigWinLost.View")

function BigWinLostUI:setRoomInfo(param)
    BigWinLostUI.super.setRoomInfo(self, param)
    local imgNewPlayType = ccui.ImageView:create("total_result_newPlayType_interduce1.png",ccui.TextureResType.plistType)
    if imgNewPlayType then
        imgNewPlayType:addTo(self)
        imgNewPlayType:setAnchorPoint(cc.p(1, 0.5))
        imgNewPlayType:setPosition(cc.p(self._bgNode:getContentSize().width, self._roomID:getParent():getPositionY()))
    end
end

return BigWinLostUI