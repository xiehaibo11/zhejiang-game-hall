local CardFFZ 			= CF.gameClass("CardFFZ", "game.BaseCardGame.Modules.CardLayer.Card")
local CardLayerDefine   = CF.gameRequire("game.BaseCardGame.Modules.CardLayer.CardLayerDefine")
local CARD_SIZE 		= cc.size(70,100)

function CardFFZ:initCardFace()
    self:ignoreContentAdaptWithSize(false)
    if self._powerSprite == nil then --数字
        self._powerSprite = cc.Sprite:create()
        self._powerSprite:setAnchorPoint(cc.p(0.5, 1))
        self._powerSprite:setPosition(cc.p(CARD_SIZE.width / 3 + 5, CARD_SIZE.height - 10))
        self._powerSprite:setScale(0.7)
        self:addChild(self._powerSprite)
    end

    if self._iconSprite == nil then --大花色
        self._iconSprite = cc.Sprite:create()
        self._iconSprite:setAnchorPoint(cc.p(0.5, 0))
        self._iconSprite:setPosition(cc.p(CARD_SIZE.width / 3 + 3, 5))
        self._iconSprite:setScale(0.35)
        self:addChild(self._iconSprite)
    end

    if self._id == self.CARDID_JOKER_SMALL then
        self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_JOKER_NAME[1])
        self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[5])
        self._iconSprite:setVisible(false)
        self._powerSprite:setScale(0.4)
        self._powerSprite:setPosition(cc.p(CARD_SIZE.width / 3 + 5, CARD_SIZE.height - 5))
    elseif self._id == self.CARDID_JOKER_BIG then
        self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_JOKER_NAME[2])
        self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[6])
        self._iconSprite:setVisible(false)
        self._powerSprite:setScale(0.4)
        self._powerSprite:setPosition(cc.p(CARD_SIZE.width / 3 + 5, CARD_SIZE.height - 5))
    else
        local color = math.ceil(self._id/13)
        local value = self._id%13
        if value == 0 then
            value = 13
        end
        if color%2 == 1 then
            self._powerSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_RED_NAME, value))
        else
            self._powerSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_BLACK_NAME, value))
        end
        self._iconSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_COLOR_NAME[color]))
    end
    
    self:loadTexture(CardLayerDefine.KW_UI_CARD_FACE_NAME, ccui.TextureResType.plistType)
    self:setContentSize(CARD_SIZE)

    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        self:loadTexture(CardLayerDefine.KW_UI_CHANGE_CARD_FACE_NAME, ccui.TextureResType.plistType)
    elseif self._cardStyle == XH.XG_CARD_STYLE then
        self:loadTexture(CardLayerDefine.KW_UI_XG_CARD_FACE_NAME, ccui.TextureResType.plistType)
    else
        self:loadTexture(CardLayerDefine.KW_UI_CARD_FACE_NAME, ccui.TextureResType.plistType)
    end
end

return CardFFZ
