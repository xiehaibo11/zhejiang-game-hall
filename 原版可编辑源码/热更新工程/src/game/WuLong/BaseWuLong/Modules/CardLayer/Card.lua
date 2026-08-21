local Card = CF.gameClass("Card", "game.BaseCardGame.Modules.CardLayer.Card")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")

function Card:ctor()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_XG_CARD_PLIST)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CARD_PLIST)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CHANGE_CARD_PLIST)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("res/cocosStudio/WuLong/Img/wulong/wulong.plist")
    self._cardStyle = 0
    self._state = Card.STATE.NORMAL
    self._id = 0
    self._sizeType = Card.SIZETYPE.NORMAL
    self._initPosY = 0  --起始Y坐标
    self._selectAddY = 50   --选中后弹起距离
    self._colorState = Card.COLOR_STATE.NONE

    if self._xianText == nil then
        self._xianBg = ccui.ImageView:create()
        self._xianBg:loadTexture("WuLong/Img/wulong/Img_diq1.png", ccui.TextureResType.plistType)
        :setPosition(cc.p(45, 35))
        :setZOrder(100)
        :setVisible(false)

        self._xianText = ccui.TextBMFont:create()
        :setFntFile("res/tex/plist/wulong/Fnt_sz1-export.fnt")
        :setAnchorPoint(cc.p(0.5, 0.5))
        :setPosition(cc.p(45, 35))
        :setString("")
        :setOpacity(255 * 0.6)
        :setZOrder(101)

        self:addChild(self._xianBg)
        self:addChild(self._xianText)
    end
end

function Card:showXian(len)
    if self._xianText then
        if self._rightUp then
            self:flushXianRightTop()
        end
        self._xianText:setString("x" .. len)
        self._xianBg:setVisible(true)
    end
    self._xianText:setVisible(self._id ~= 0)
    self._xianBg:setVisible(self._id ~= 0)
end

function Card:flushXianRightTop()
    if self._xianText then
        self._rightUp = true
        self._xianText:setPosition(cc.p(45, 190))
    end
    if self._xianBg then
        self._xianBg:setPosition(cc.p(45, 190))
    end
end

function Card:initDKCardFace()
    if not self._powerSprite then
        return
    end
    local changeStyle = CF.settingData:getDoubleKouFaceStyle()
    if self._oriPowerScale == nil then
        self._oriPowerScale = self._powerSprite:getScale()
    end
    if self._oriColorScale == nil then
        self._oriColorScale = self._colorSprite:getScale()
    end
    local def = CardLayerConfig.DKCardIconPos[1]
    if CardLayerConfig.DKCardIconPos[changeStyle] then
        def = CardLayerConfig.DKCardIconPos[changeStyle]
    end
    self._powerSprite:setScale(def.posValueScale * self._oriPowerScale)
    self._colorSprite:setScale(def.posColorScale * self._oriColorScale)
    self._powerSprite:setPosition(def.posValue)
    self._colorSprite:setPosition(def.posColor)
    if self._id == self.CARDID_JOKER_SMALL or self._id == self.CARDID_JOKER_BIG then
        self._powerSprite:setScale(def.posJokerScale * self._oriPowerScale)
        self._powerSprite:setPosition(def.posJokerValue)
    end
    self._iconSprite:setPosition(def.posIcon)
    if self._xianText then
        self._xianText:setScale(def.posValueScale)
    end
end

return Card