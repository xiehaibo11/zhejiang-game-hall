local HeadNode = CF.gameClass("HeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

local KW_IMG_MAIZI_ICON= "KW_IMG_MAIZI_ICON"
local KW_IMG_CHENGBAO_ICON = "KW_IMG_CHENGBAO_ICON"

function HeadNode:ctor(param)
    HeadNode.super.ctor(self, param)
    self:initPlayerFlag()
end

function HeadNode:initPlayerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local buyScore =  gameData:getBuyScoreBySeat(self._seatId)
    if buyScore > 0 then
        self:createAndShowMaiZiIcon(true)
    end
end

function HeadNode:getProxyEvents()
    local proxyEvents = HeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_MAIZI_ICON", callBack = "showMaiZiIcon"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "SHOW_CHENGBAO_ICON", callBack = "onShowChengBaoIcon"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "HIDE_CHENGBAO_ICON", callBack = "onHideAllChengBaoIcon"}
    return proxyEvents
end

function HeadNode:createAndShowMaiZiIcon(isShow)
    if not self._headFrame then
        return
    end
    local parent = self._headFrame:getParent()

    local maiziSpr = parent:getChildByName(KW_IMG_MAIZI_ICON)
    if not maiziSpr then
        if isShow then
            local pngName = "jx_maizi_icon.png"
            local img = cc.SpriteFrameCache:getInstance():getSpriteFrame(pngName)
            if img == nil then
                local plistFilePath = "res/cocosStudio/MahjongNew/GameLayer/Image/JiaXing/jiaxing_res.plist"
                cc.SpriteFrameCache:getInstance():addSpriteFrames(plistFilePath)
            end
            maiziSpr = ccui.ImageView:create(pngName,ccui.TextureResType.plistType)
            if maiziSpr then
                parent:addChild(maiziSpr)
                maiziSpr:setName(KW_IMG_MAIZI_ICON)
                maiziSpr:setVisible(isShow)
                maiziSpr:setAnchorPoint(cc.p(0.5, 0.5))
                maiziSpr:setPosition(cc.p(0, 0))
                maiziSpr:setScale(0.75)
                local posX,posY = self._headFrame:getPosition()
                local frame = self._headFrame:getContentSize()

                local localSeat = CF.roomData:seatToLocal(self._seatId)
                if localSeat ==  2 or localSeat == 1 or localSeat == 3 then
                    maiziSpr:setAnchorPoint(cc.p(0.5, 0))
                    maiziSpr:setPosition(cc.p(posX, posY + frame.height/2 + 5))
                elseif localSeat == 4 then
                    maiziSpr:setAnchorPoint(cc.p(0, 0.5))
                    maiziSpr:setPosition(cc.p(posX + frame.width/2 + 5, posY))
                end
            end
        end
    else
        maiziSpr:setVisible(isShow)
    end
end

function HeadNode:showMaiZiIcon(event)
    local msg = event.msg
    if msg and msg.seat == self._seatId then
        self:createAndShowMaiZiIcon(msg.show == 1)
    end
end

function HeadNode:onShowChengBaoIcon(event)
    if not self._headFrame then
        return
    end
    if event.msg and event.msg.seat and event.msg.seat==self._seatId and event.msg.cb then
        local parent = self._headFrame:getParent()
        if parent then
            local pngName
            if event.msg.cb == CF.GameDefine.ChengBao.CHENGBAO then
                pngName = "jx_cb_chengbao.png"
            elseif event.msg.cb == CF.GameDefine.ChengBao.GEN then
                pngName = "jx_cb_genda.png"
            else
                pngName = "jx_cb_bugen.png"
            end
            local img = cc.SpriteFrameCache:getInstance():getSpriteFrame(pngName)
            if img == nil then
                local plistFilePath = "res/cocosStudio/MahjongNew/GameLayer/Image/JiaXing/jiaxing_res.plist"
                cc.SpriteFrameCache:getInstance():addSpriteFrames(plistFilePath)
            end

            local cbSpr = parent:getChildByName(KW_IMG_CHENGBAO_ICON)
            if not cbSpr then
                cbSpr = ccui.ImageView:create(pngName,ccui.TextureResType.plistType)
                if cbSpr then
                    parent:addChild(cbSpr)
                    cbSpr:setName(KW_IMG_CHENGBAO_ICON)
                    cbSpr:setVisible(true)
                    local posX,posY = self._headFrame:getPosition()
                    local frame = self._headFrame:getContentSize()
                    local localSeat = CF.roomData:seatToLocal(self._seatId)
                    if localSeat ==  2 or localSeat == 1 or localSeat == 4 then
                        cbSpr:setAnchorPoint(cc.p(0, 0.5))
                        cbSpr:setPosition(cc.p(posX + frame.width/2 + 5, posY))
                    elseif localSeat == 3 then
                        cbSpr:setAnchorPoint(cc.p(1, 0.5))
                        cbSpr:setPosition(cc.p(posX - frame.width/2 - 5, posY))
                    end
                end
            else
                cbSpr:loadTexture(pngName,ccui.TextureResType.plistType)
            end
        end
    end
end

function HeadNode:onHideAllChengBaoIcon(event)
    if not self._headFrame then
        return
    end
    local parent = self._headFrame:getParent()
    if parent then
        local cbSpr = parent:getChildByName(KW_IMG_CHENGBAO_ICON)
        if cbSpr then
            cbSpr:setVisible(false)
        end
    end
end

function HeadNode:updateLayoutPosition()
end

return HeadNode
