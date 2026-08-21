local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")
local CardEnum = CF.gameRequire("Define.CardEnum")

local Card =
    CF.gameClass(
    "Card",
    function()
        return ccui.ImageView:create()
    end
)

Card.DEFAULT_SPECIAL_COLOR = cc.c3b(172, 255, 253)

Card.COLOR_STATE = {
    NONE = 1,
    NORMAL = 2,
    SELECT = 3,
    GRAY = 4
}

Card.COLOR = {
    [Card.COLOR_STATE.NONE] = cc.c3b(255, 255, 255),
    [Card.COLOR_STATE.NORMAL] = cc.c3b(255, 255, 255),
    [Card.COLOR_STATE.SELECT] = cc.c3b(180, 180, 180),
    [Card.COLOR_STATE.GRAY] = cc.c3b(180, 180, 180)
}

Card.STATE = {
    NORMAL = 1,
    SELECT = 2,
    DRAG = 3,
    DISSELECT = 4 -- 不可选中
}

Card.SIZETYPE = {
    NORMAL = 1,
    OUT = 4, -- 出牌
    HEAD = 5 -- 头像边的牌
}

function Card:ctor()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CARD_PLIST)
    self._state = Card.STATE.NORMAL
    self._id = 0
    self._sizeType = Card.SIZETYPE.NORMAL
    self._initPosY = 0 --起始Y坐标
    self._selectAddY = 50 --选中后弹起距离
    self._colorState = Card.COLOR_STATE.NONE

    if self._xianText == nil then
        self._xianText = ccui.Text:create()
        self._xianText:setFontName("cocosStudio/Common/Font/fangzhengcuyuan.TTF")
        self._xianText:setFontSize(36)
        self._xianText:setColor(cc.c3b(0xff, 0xff, 0xff))
        self._xianText:setAnchorPoint(cc.p(0.5, 0))
        self._xianText:setPosition(cc.p(54, 105))
        self._xianText:setString("")
        self._xianText:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
        self._xianText:setOpacity(255 * 1)
        self._xianText:setLocalZOrder(2)
        self:addChild(self._xianText)
    end
    if self._xianText2 == nil then
        self._xianText2 = ccui.Text:create()
        self._xianText2:setFontName("cocosStudio/Common/Font/fangzhengcuyuan.TTF")
        self._xianText2:setFontSize(32)
        self._xianText2:setColor(cc.c3b(0xff, 0xff, 0xff))
        self._xianText2:setAnchorPoint(cc.p(0, 0))
        self._xianText2:setPosition(cc.p(38, 72))
        self._xianText2:setString("线")
        self._xianText2:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
        self._xianText2:setOpacity(255 * 1)
        self._xianText2:setLocalZOrder(2)
        self._xianText2:setVisible(false)
        self:addChild(self._xianText2)
    end

    self._openCardFlag = nil -- 明牌标识
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CF.gameResourceRootPath .. "DarkShuangKou/Img/DarkShuangKou.plist")
end

function Card:clearXian()
    if self._xianText then
        self._xianText:setString("")
    end
    if self._xianText2 then
        self._xianText2:setVisible(false)
    end
    if self._xianSprite then
        self._xianSprite:setVisible(false)
    end
end

function Card:showXian(len)
    if self._xianText then
        self._xianText:setString(len)
    end
    if self._xianText2 then
        self._xianText2:setVisible(true)
    end
    if self._xianSprite then
        self._xianSprite:setVisible(true)
    end
end

function Card:setCardID(id, sizeType, isShowFire, isRight)
    self._id = id
    self._sizeType = sizeType or Card.SIZETYPE.NORMAL
    self._isShowFire = isShowFire or false
    self._isRight = isRight or false

    if id == 0 then
        self:initCardBack()
    else
        self:initCardFace()
    end
end

function Card:setColorState(colorState)
    self._colorState = colorState
    self:freshColor()
end

function Card:getColorState()
    return self._colorState
end

function Card:freshColor()
    if self._bSpecialColor and self._colorState ~= Card.COLOR_STATE.SELECT then
        local tempColor = self._specialColor or Card.DEFAULT_SPECIAL_COLOR
        self:setColor(tempColor)
    else
        self:setColor(Card.COLOR[self._colorState])
    end
    self._powerSprite:setColor(Card.COLOR[self._colorState])
    self._openCardFlag:setColor(Card.COLOR[self._colorState])
    self._colorSprite:setColor(Card.COLOR[self._colorState])
    self._iconSprite:setColor(Card.COLOR[self._colorState])
    self._xianText:setColor(Card.COLOR[self._colorState])
    self._xianText2:setColor(Card.COLOR[self._colorState])
    self._xianSprite:setColor(Card.COLOR[self._colorState])
end

--设置牌是否显示特殊牌颜色
--#color 可传人颜色，不传则使用默认值
function Card:showSpecialColor(color)
    self._bSpecialColor = true
    if color then
        self._specialColor = color
    end
    self:freshColor()
end

function Card:clearSpecialColor()
    if not self._bSpecialColor then
        return
    end
    self._bSpecialColor = false
    self:freshColor()
end
function Card:initCardBack()
    self:hidePowerAndIcon()
    self:loadTexture(CardLayerDefine.KW_UI_CARD_BACK_NAME[self._sizeType], ccui.TextureResType.plistType)
end

function Card:hidePowerAndIcon()
    if self._powerSprite then
        self._powerSprite:setVisible(false)
    end
    if self._colorSprite then
        self._colorSprite:setVisible(false)
    end
    if self._iconSprite then
        self._iconSprite:setVisible(false)
    end
    if self._openCardFlag then
        self._openCardFlag:setVisible(false)
    end
end

function Card:initCardFace()
    local cardPosConfig = CardLayerConfig.CardIconPos
    if self._sizeType == Card.SIZETYPE.OUT then
        cardPosConfig = CardLayerConfig.CardIconPosOut
    elseif self._sizeType == Card.SIZETYPE.HEAD then
        cardPosConfig = CardLayerConfig.CardIconPosHead
    end
    if self._xianSprite == nil then
        self._xianSprite = cc.Sprite:create()
        self._xianSprite:setAnchorPoint(cc.p(0, 0))
        self._xianSprite:setPosition(cc.p(35, 72))
        self._xianSprite:setSpriteFrame("darkdoublekou_Img_jx.png")
        self:addChild(self._xianSprite)
        self._xianSprite:setVisible(false)
    end
    if self._powerSprite == nil then
        self._powerSprite = cc.Sprite:create()
        self._powerSprite:setAnchorPoint(cc.p(0, 1))
        self._powerSprite:setPosition(cardPosConfig.posValue)
        self._powerSprite:setScale(cardPosConfig.scaleValue)
        self:addChild(self._powerSprite)
    end
    if self._colorSprite == nil then
        self._colorSprite = cc.Sprite:create()
        self._colorSprite:setAnchorPoint(cc.p(0, 1))
        self._colorSprite:setPosition(cardPosConfig.posColor)
        self._colorSprite:setScale(cardPosConfig.scaleColor)
        self:addChild(self._colorSprite)
    end
    if self._iconSprite == nil then
        self._iconSprite = cc.Sprite:create()
        self._iconSprite:setAnchorPoint(cc.p(1, 0))
        self._iconSprite:setPosition(cardPosConfig.posIcon)
        self._iconSprite:setVisible(true)
        self:addChild(self._iconSprite)
    end
    -- 明牌标识
    if self._openCardFlag == nil then
        self._openCardFlag = cc.Sprite:create()
        self._openCardFlag:setAnchorPoint(cc.p(0, 0))
        self._openCardFlag:setSpriteFrame(CardLayerDefine.KW_UI_CARD_MING_PAI)
        self._openCardFlag:setPosition(cardPosConfig.posMingIcon)
        self._openCardFlag:setScale(cardPosConfig.scaleMingIcon)
        self:addChild(self._openCardFlag)
        self._openCardFlag:setVisible(false)
    end

    if self._id == CardEnum.CARD_ID.CID_SJ or self._id == CardEnum.CARD_ID.CID_2_SJ then
        self._colorSprite:setVisible(false)
        if self._sizeType == Card.SIZETYPE.OUT then
            self._powerSprite:setSpriteFrame("darkdoublekou_joker_small_2.png")
            self._powerSprite:setPosition(cc.p(11, 138))
            self._powerSprite:setScale(1)
            self._iconSprite:setPosition(cc.p(100, 42))
            self._iconSprite:setScale(0.44)
            self._iconSprite:setVisible(true)
        elseif self._sizeType == Card.SIZETYPE.HEAD then
            self._powerSprite:setSpriteFrame("darkdoublekou_joker_small_3.png")
            self._powerSprite:setPosition(cc.p(23, 86))
            self._powerSprite:setScale(1)
        else
            self._powerSprite:setSpriteFrame("darkdoublekou_joker_small.png")
            self._powerSprite:setPosition(cc.p(35, 294))
            self._powerSprite:setScale(1)
            self._iconSprite:setPosition(cc.p(218, 28))
            self._iconSprite:setScale(1)
        end
        self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[5])
    elseif self._id == CardEnum.CARD_ID.CID_BJ or self._id == CardEnum.CARD_ID.CID_2_BJ then
        self._colorSprite:setVisible(false)
        if self._sizeType == Card.SIZETYPE.OUT then
            self._powerSprite:setSpriteFrame("darkdoublekou_joker_big_2.png")
            self._powerSprite:setPosition(cc.p(11, 138))
            self._powerSprite:setScale(1)
            self._iconSprite:setPosition(cc.p(100, 42))
            self._iconSprite:setScale(0.44)
            self._iconSprite:setVisible(true)
        elseif self._sizeType == Card.SIZETYPE.HEAD then
            self._powerSprite:setSpriteFrame("darkdoublekou_joker_big_3.png")
            self._powerSprite:setPosition(cc.p(23, 86))
            self._powerSprite:setScale(1)
        else
            self._powerSprite:setSpriteFrame("darkdoublekou_joker_big.png")
            self._powerSprite:setPosition(cc.p(35, 294))
            self._powerSprite:setScale(1)
            self._iconSprite:setPosition(cc.p(218, 28))
            self._iconSprite:setScale(1)
        end
        self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[6])
    else
        local value = CardEnum.CardID2Value[self._id]
        local color = CardEnum.getCardColor(self._id)
        if color % 2 == 1 then
            self._powerSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_RED_NAME, value))
        else
            self._powerSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_BLACK_NAME, value))
        end

        self._colorSprite:setVisible(true)
        self._colorSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_COLOR_NAME[color]))
        self._iconSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_COLOR_NAME[color]))
        self._iconSprite:setPosition(cc.p(201, 52))

        if self._sizeType == Card.SIZETYPE.OUT then
            self._iconSprite:setVisible(false)
        end
    end
    self:loadTexture(CardLayerDefine.KW_UI_CARD_FACE_NAME[self._sizeType], ccui.TextureResType.plistType)

    if self._sizeType == Card.SIZETYPE.HEAD then
        self._iconSprite:setVisible(false)
        self._colorSprite:setVisible(false)
    end
end

function Card:getCardID()
    return self._id
end

--选中后弹起距离
function Card:setSelectAddY(selectAddY)
    self._selectAddY = selectAddY
end

--初始化Y起始坐标，设置牌弹起时使用
function Card:initPositionY(posY)
    self._initPosY = posY
end

function Card:setCardState(state)
    self._state = state
    if self._state == Card.STATE.SELECT then
        self:setPositionY(self._initPosY + self._selectAddY)
    elseif self._state == Card.STATE.NORMAL then
        self:setPositionY(self._initPosY)
    end
end

function Card:getCardState()
    return self._state
end

function Card:isNormal()
    return self._state == Card.STATE.NORMAL
end

function Card:isSelect()
    return self._state == Card.STATE.SELECT
end

function Card:isDrag()
    return self._state == Card.STATE.DRAG
end

function Card:isDisSelect()
    return self._state == Card.STATE.DISSELECT
end

function Card:playSelectSound()
end

-- 背景遮罩，牌的大小比实际显示的大小要大一些，所以背景遮罩要和牌一样大，不然的话点击边上还是能够抬起牌
function Card:showMaskLayer()
    if not self._maskLayer then
        self._maskLayer = ccui.ImageView:create()
        self._maskLayer:setScale9Enabled(true)
        self._maskLayer:setAnchorPoint(cc.p(0.5, 0.5))
        local contentSize = self:getContentSize()
        self._maskLayer:setContentSize(cc.size(contentSize.width, contentSize.height))
        self._maskLayer:setPosition(cc.p(contentSize.width / 2, contentSize.height / 2))

        local imgMask = ccui.ImageView:create()
        imgMask:setScale9Enabled(true)
        imgMask:setAnchorPoint(cc.p(0.5, 0.5))
        imgMask:setContentSize(cc.size(contentSize.width - 14, contentSize.height - 11))
        imgMask:loadTexture(CardLayerDefine.KW_UI_CARD_MASK_NAME, ccui.TextureResType.localType)
        imgMask:setPosition(cc.p(contentSize.width / 2, contentSize.height / 2))
        self._maskLayer:addChild(imgMask)

        self:addChild(self._maskLayer, 99)
    end
    self._maskLayer:setVisible(true)
    self._maskLayer:setTouchEnabled(true)
end

function Card:hideMaskLayer()
    if not self._maskLayer then
        return
    end
    self._maskLayer:setVisible(false)
    self._maskLayer:setTouchEnabled(false)
end

function Card:isMaskLayerShow()
    if not self._maskLayer then
        return false
    end
    return self._maskLayer:isVisible()
end

function Card:setOpenCardFlagVisible(visible)
    if nil ~= self._openCardFlag then
        self._openCardFlag:setVisible(visible)
    end
end

function Card:getOpenCardFlagVisible()
    if nil ~= self._openCardFlag then
        return self._openCardFlag:isVisible()
    end
    return false
end

return Card
 �5  