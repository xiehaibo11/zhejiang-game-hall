local TableClockView = CF.gameClass("TableClockView", "game.Mahjong.BasicMahjong.Modules.GameLayer.TableClockView")

local KW_IMG_SHOW_CIRCLEFENG = "KW_IMG_SHOW_CIRCLEFENG"

function TableClockView:getProxyEvents()
    local proxyEvents = TableClockView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "UPDATE_CIRCLE_FENG_IMG", callBack = "updateQuanFengImg" }
    return proxyEvents
end

function TableClockView:updateQuanFengImg(event)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local imgCircleIndex = winLostData:getCircleFeng()
    local imgCircleFeng = self._clockRoot:getParent():getChildByName(KW_IMG_SHOW_CIRCLEFENG)
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
                self._clockRoot:getParent():addChild(imgCircleFeng)
                imgCircleFeng:setName(KW_IMG_SHOW_CIRCLEFENG)
                imgCircleFeng:setVisible(true)
                imgCircleFeng:setAnchorPoint(cc.p(0, 0))
                local clockSize = self._clockRoot:getContentSize()
                local clockP = cc.p(self._clockRoot:getPosition())
                imgCircleFeng:setPosition(cc.p(clockP.x + clockSize.width/2, clockP.y - clockSize.height/2))
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

return TableClockView
�