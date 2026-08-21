local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:createChildren()
    WinLostView.super.createChildren(self)
    if self._checkTableBtn then
        local _mahs = self:getWinLostData():getSurplusMahs()
        if _mahs and #_mahs > 0 then
            local _panelBottom = self._checkTableBtn:getParent()
            local imgSurplus = _panelBottom:getChildByName("KW_BTN_SHOW_SURPLUS")
            if not imgSurplus then
                local img = cc.SpriteFrameCache:getInstance():getSpriteFrame("mahjong_surplus.png")
                if img == nil then
                    local plistFilePath = "cocosStudio/MahjongNew/GameLayer/Image/RuiAn/ra_mah_surplus.plist"
                    cc.SpriteFrameCache:getInstance():addSpriteFrames(plistFilePath)
                end

                imgSurplus = ccui.ImageView:create("mahjong_surplus.png",ccui.TextureResType.plistType)
                if imgSurplus then
                    _panelBottom:addChild(imgSurplus)
                    imgSurplus:setName("KW_BTN_SHOW_SURPLUS")
                    imgSurplus:setVisible(true)
                    imgSurplus:setAnchorPoint(cc.p(0.5, 0.5))
                    imgSurplus:setTouchEnabled(true)
                    imgSurplus:addTouchEventListener(handler(self, self.onBtnSurplus))
                    local contentSize = self._checkTableBtn:getContentSize()
                    local halfWinWidth = -1920/2
                    local x,y = self._checkTableBtn:getPosition()
                    x = x - contentSize.width/2
                    imgSurplus:setPosition(cc.p((halfWinWidth+x)/2, y))
                end
            end
        end
    end
end

function WinLostView:onBtnSurplus(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local MahSurplusPanel = CF.gameRequire("Modules.GameLayer.MahSurplusPanel").new()
    MahSurplusPanel:showSelf()
end

function WinLostView:close()
    CF.game:getModule("GameLayer"):dispatchEvent( { name = CF.game:getModule("GameLayer").HIDE_MAH_SURPLUS_PANEL })
	WinLostView.super.close(self)
end

return WinLostView�