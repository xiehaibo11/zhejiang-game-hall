local Card = CF.gameClass("Card", "game.BaseCardGame.Modules.CardLayer.Card")

local KW_DIZHU_FLAG_IMG = "landlords_dizhu_flag2.png"
local KW_MINGPAI_FLAG   = "landlords_mingpai.png"

function Card:ctor()
    Card.super.ctor(self)
    self._landlordFlag = nil -- 地主标识
    self._showHandFlag = nil -- 明牌标识
end

function Card:initCardFace()
    Card.super.initCardFace(self)
    -- 地主标识 
    if self._landlordFlag == nil then
        self._landlordFlag = cc.Sprite:create()
        self._landlordFlag:setAnchorPoint(cc.p(1, 1))
        self._landlordFlag:setSpriteFrame(KW_DIZHU_FLAG_IMG)
        self._landlordFlag:setPosition(self:getContentSize().width - 4, self:getContentSize().height - 4)
        self:addChild(self._landlordFlag)
        self._landlordFlag:setVisible(false)
    end
    -- 明牌标识
    if self._showHandFlag == nil then
        self._showHandFlag = cc.Sprite:create()
        self._showHandFlag:setAnchorPoint(cc.p(0, 0))
        self._showHandFlag:setSpriteFrame(KW_MINGPAI_FLAG)
        self._showHandFlag:setPosition(15, 15)
        self:addChild(self._showHandFlag)
        self._showHandFlag:setVisible(false)
    end
end

function Card:setLandlordFlagVisible(visible)
    if nil ~= self._landlordFlag then
        self._landlordFlag:setVisible(visible)
    end
end

function Card:setShowHandFlagVisible(visible)
    if nil ~= self._showHandFlag then
        self._showHandFlag:setVisible(visible)
    end
end

return Card
�