local WinLostItemNode = CF.gameClass("WinLostItemNode", "game.Mahjong.BasicMahjong.Modules.WinLost.ItemNode")

local KW_IMG_SHOW_MENGFENG = "KW_IMG_SHOW_MENGFENG"

function WinLostItemNode:updateBankerFlag()
    WinLostItemNode.super.updateBankerFlag(self)
    if not self._bankerFlagSp then
        return
    end
    local parent = self._bankerFlagSp:getParent()
    if not parent then
        return
    end
    
    local feng = self:getWinLostData():getMenFeng(self._seatId)
    if feng and feng > 0 and feng < 4 then --0是庄，不用更新
        local mahjong_feng_png = string.format("qt_settle_end_feng_%d.png", feng)
        local img = cc.SpriteFrameCache:getInstance():getSpriteFrame(mahjong_feng_png)
        if img == nil then
            local plistFilePath = "res/cocosStudio/MahjongNew/GameLayer/Image/QingTian/qt_end_feng_circle.plist"
            cc.SpriteFrameCache:getInstance():addSpriteFrames(plistFilePath)
        end
    
        local imgMengFeng = parent:getChildByName(KW_IMG_SHOW_MENGFENG)
        if not imgMengFeng then
            imgMengFeng = ccui.ImageView:create(mahjong_feng_png,ccui.TextureResType.plistType)
            if imgMengFeng then
                parent:addChild(imgMengFeng)
                imgMengFeng:setName(KW_IMG_SHOW_MENGFENG)
                imgMengFeng:setVisible(true)
                imgMengFeng:setAnchorPoint(cc.p(0.5, 0.5))
                imgMengFeng:setPosition(self._bankerFlagSp:getPosition())
            end
        else
            imgMengFeng:loadTexture(mahjong_feng_png,ccui.TextureResType.plistType)
        end
    end
end

return WinLostItemNode