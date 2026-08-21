local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

local KW_IMG_SHOW_CIRCLEFENG = "KW_IMG_SHOW_CIRCLEFENG"

function WinLostView:onUpdateUI()
	WinLostView.super.onUpdateUI(self)

	local imgCircleIndex = self:getWinLostData():getCircleFeng()
	local imgCircleFeng = self._titleSp:getParent():getChildByName(KW_IMG_SHOW_CIRCLEFENG)
    if imgCircleIndex and imgCircleIndex>0 and imgCircleIndex<=7 then
        local mahjong_feng_png = string.format("qt_end_circle_feng_%d.png", imgCircleIndex)
        local img = cc.SpriteFrameCache:getInstance():getSpriteFrame(mahjong_feng_png)
        if img == nil then
            local plistFilePath = "res/cocosStudio/MahjongNew/GameLayer/Image/QingTian/qt_end_feng_circle.plist"
            cc.SpriteFrameCache:getInstance():addSpriteFrames(plistFilePath)
        end
        if not imgCircleFeng then
            imgCircleFeng = ccui.ImageView:create(mahjong_feng_png,ccui.TextureResType.plistType)
            if imgCircleFeng then
                self._titleSp:getParent():addChild(imgCircleFeng)
                imgCircleFeng:setName(KW_IMG_SHOW_CIRCLEFENG)
                imgCircleFeng:setVisible(true)
                imgCircleFeng:setAnchorPoint(cc.p(0, 0))
                local cSize = self._titleSp:getContentSize()
                local cP = cc.p(self._titleSp:getPosition())
                imgCircleFeng:setPosition(cc.p(cP.x + 180, cP.y - cSize.height/2))
            end
        else
            imgCircleFeng:setVisible(true)
            imgCircleFeng:loadTexture(mahjong_feng_png,ccui.TextureResType.plistType)
        end
    else
        if imgCircleFeng then
            imgCircleFeng:setVisible(false)
        end
    end
end

return WinLostView