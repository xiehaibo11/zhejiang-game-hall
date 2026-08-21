local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

local KW_IMG_SHOW_MENGFENG = "KW_IMG_SHOW_MENGFENG"

function PlayerHeadNode:ctor(param)
    PlayerHeadNode.super.ctor(self, param)
    self:updateMenFengImg()
end

function PlayerHeadNode:getProxyEvents()
	local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "UPDATE_MEN_FENG_IMG", callBack = "updateMenFengImg" }
    return proxyEvents
end

function PlayerHeadNode:createAndShowMenFeng(fengSeat)
    if not self._bankerFlagSp then
        return
    end
    local parent = self._bankerFlagSp:getParent()
    if not parent then
        return
    end
    
    local mahjong_feng_png = string.format("qt_settle_end_feng_%d.png", fengSeat)
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

function PlayerHeadNode:updateMenFengImg(event)
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    local feng = winLostData:getMenFeng(self._seatId)
    if feng and feng > 0 and feng < 4 then --0是庄，不用更新
        self:createAndShowMenFeng(feng)
    end
end

function PlayerHeadNode:updateBankerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
	if self._bankerFlagSp then
		self._bankerFlagSp:setVisible(isBanker)
	end
    PlayerHeadNode.super.updateBankerFlag(self)
    if self._bankerFlagSp:isVisible() then
        CF.UITool.setVisible(self._bankerFlagSp:getParent(), KW_IMG_SHOW_MENGFENG, false)
    else
        CF.UITool.setVisible(self._bankerFlagSp:getParent(), KW_IMG_SHOW_MENGFENG, true)
    end
end

return PlayerHeadNodeY
