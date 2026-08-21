--
-- Description: 牌
-- Author: hejiafeng
-- Date: 2019-07-09
--
-- self._powerSprite 左上角数字
-- self._colorSprite 左上角花色
-- self._iconSprite 右下角花色
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")

local Card = CF.gameClass("Card",function()
    return ccui.ImageView:create()
end)

Card.CARDID_JOKER_SMALL = 53
Card.CARDID_JOKER_BIG = 54

Card.COLOR_STATE = {
    NONE = 1,
    NORMAL = 2,
    SELECT = 3,
    GRAY = 4,
}

Card.COLOR = {
    [Card.COLOR_STATE.NONE] = cc.c3b(255,255,255),
    [Card.COLOR_STATE.NORMAL] = cc.c3b(255,255,255),
    [Card.COLOR_STATE.SELECT] = cc.c3b(255,200,170),
    [Card.COLOR_STATE.GRAY] = cc.c3b(180,180,180),
}

Card.STATE = {
    NORMAL = 1,
    SELECT = 2,
    DRAG = 3,
}

-- Card.DEFAULT_SPECIAL_COLOR = cc.c3b(15,130,179)
Card.DEFAULT_SPECIAL_COLOR = cc.c3b(172,255,253)
Card.SIZETYPE = {
    NORMAL = 1,
    SMALL = 2,
    BIG = 3,
}

function Card:ctor()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_XG_CARD_PLIST)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CARD_PLIST)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CHANGE_CARD_PLIST)
    self._cardStyle = 0
    self._state = Card.STATE.NORMAL
    self._id = 0
    self._sizeType = Card.SIZETYPE.NORMAL
    self._initPosY = 0  --起始Y坐标
    self._selectAddY = 50   --选中后弹起距离
    self._colorState = Card.COLOR_STATE.NONE

    if self._xianText == nil then
        self._xianText = ccui.Text:create()
            :setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
            :setFontSize(40)
            :setColor(cc.c3b(1, 90, 141))
            :setAnchorPoint(cc.p(0.5, 0))
            :setPosition(cc.p(30, 10))
            :setString("")
            :setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)
            :setOpacity(255*0.6)
        self:addChild(self._xianText)
    end
end

function Card:clearXian()
    if self._xianText then
        self._xianText:setString("")
    end
end

function Card:showXian(len)
    if self._xianText then
        self._xianText:setString(len) -- .. "\n线")
    end
end

function Card:setCardID(id, sizeType, isShowFire, isRight, fireOffsetY, cardStyle)
    self._id = id
    self._sizeType = sizeType or Card.SIZETYPE.NORMAL
    self._cardStyle = cardStyle or 0
    self._isShowFire = isShowFire or false
    self._fireOffsetY = fireOffsetY or 0
    self._isRight = isRight or false

    if id == 0 then
        self:initCardBack()
    else
        self:initCardFace()
    end
    self:initFire()
end

function Card:setColorState(colorState)
    self._colorState = colorState or Card.COLOR_STATE.NONE
    self:freshColor()
end

function Card:getColorState()
    return self._colorState or Card.COLOR_STATE.NONE
end

function Card:freshColor()
    if self._bSpecialColor and self._colorState ~= Card.COLOR_STATE.SELECT then
        local tempColor = self._specialColor or Card.DEFAULT_SPECIAL_COLOR
        self:setColor(tempColor)
    else
        self:setColor(Card.COLOR[self._colorState])
    end
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
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        self:loadTexture(CardLayerDefine.KW_UI_CHANGE_CARD_BACK_NAME, ccui.TextureResType.plistType)
    elseif self._cardStyle == XH.XG_CARD_STYLE then
        self:loadTexture(CardLayerDefine.KW_UI_XG_CARD_BACK_NAME, ccui.TextureResType.plistType)
    else
        self:loadTexture(CardLayerDefine.KW_UI_CARD_BACK_NAME, ccui.TextureResType.plistType)
    end
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
end

function Card:initCardFace()
    local cardPosConfig = CardLayerConfig.CardIconPos
    if self._sizeType == Card.SIZETYPE.BIG then 
        cardPosConfig = CardLayerConfig.CardIconPosBig
    elseif self._sizeType == Card.SIZETYPE.SMALL then 
        cardPosConfig = CardLayerConfig.CardIconPosSmall
    end
    if self._powerSprite == nil then
        self._powerSprite = cc.Sprite:create()
        self._powerSprite:setAnchorPoint(cc.p(0, 1))
        self._powerSprite:setPosition(cardPosConfig.posValue)
        local scale = 1
        if self._sizeType == Card.SIZETYPE.BIG then 
            scale = CardLayerConfig.scaleBigCard 
        elseif self._sizeType == Card.SIZETYPE.SMALL then 
            scale = 2.5 * scale
        end 
        self._powerSprite:setScale(scale)
        self:addChild(self._powerSprite)
    end
    if self._colorSprite == nil then
        self._colorSprite = cc.Sprite:create()
        self._colorSprite:setAnchorPoint(cc.p(0, 1))
        self._colorSprite:setPosition(cardPosConfig.posColor)
        local scale = 0.44
        if self._sizeType == Card.SIZETYPE.BIG then 
            scale = 0.53
        elseif self._sizeType == Card.SIZETYPE.SMALL then 
            scale = 2 * scale
        end 
        self._colorSprite:setScale(scale)
        self:addChild(self._colorSprite)
    end
    if self._iconSprite == nil then
        self._iconSprite = cc.Sprite:create()
        self._iconSprite:setAnchorPoint(cc.p(1, 0))
        self._iconSprite:setPosition(cardPosConfig.posIcon)
        self._iconSprite:setVisible(self._sizeType ~= Card.SIZETYPE.SMALL)
        self:addChild(self._iconSprite)
    end

    if self._id == self.CARDID_JOKER_SMALL then
        if self._sizeType == Card.SIZETYPE.SMALL then
            self._colorSprite:setVisible(false)
            self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[5])
            self._iconSprite:setVisible(false)
            self._powerSprite:setScale(1.3)
        else
            self._colorSprite:setVisible(false)
            self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_JOKER_NAME[1])
            self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[5])
            self._iconSprite:setPosition(cardPosConfig.posIcon)
            if self._cardStyle == XH.XG_CARD_STYLE then
                self._iconSprite:setPosition({x = 230, y = 0})
                self._iconSprite:setSpriteFrame("doublekou_face_smalljokerxg.png")
            end
        end
    elseif self._id == self.CARDID_JOKER_BIG then
        if self._sizeType == Card.SIZETYPE.SMALL then
            self._colorSprite:setVisible(false)
            self._iconSprite:setVisible(false)
            self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[6])
            self._powerSprite:setScale(1.3)
        else
            self._colorSprite:setVisible(false)
            self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_JOKER_NAME[2])
            self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[6])
            self._iconSprite:setPosition(cardPosConfig.posIcon)
            if self._cardStyle == XH.XG_CARD_STYLE then
                self._iconSprite:setPosition({x = 230, y = 0})
                self._iconSprite:setSpriteFrame("doublekou_face_bigjokerxg.png")
            end
        end
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
        self._colorSprite:setVisible(true)
        self._colorSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_COLOR_NAME[color]))
        self._iconSprite:setSpriteFrame(string.format(CardLayerDefine.KW_UI_CARD_COLOR_NAME[color]))
    end
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        self:loadTexture(CardLayerDefine.KW_UI_CHANGE_CARD_FACE_NAME, ccui.TextureResType.plistType)
    elseif self._cardStyle == XH.XG_CARD_STYLE then
        self:loadTexture(CardLayerDefine.KW_UI_XG_CARD_FACE_NAME, ccui.TextureResType.plistType)
    else
        self:loadTexture(CardLayerDefine.KW_UI_CARD_FACE_NAME, ccui.TextureResType.plistType)
    end
    if self._sizeType == Card.SIZETYPE.SMALL then 
        self:setScale(0.4)
    end 
    self:initDKCardFace()
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
    self._state = state or Card.STATE.NORMAL
    if self._state == Card.STATE.SELECT then
        self:setPositionY(self._initPosY + self._selectAddY)
    elseif self._state == Card.STATE.NORMAL then
        self:setPositionY(self._initPosY)
    end
end

function Card:getCardState()
    return self._state or Card.STATE.NORMAL
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

function Card:playSelectSound()
    if CF.soundManager and CF.soundManager.playSoundSelectCard then
        CF.soundManager:playSoundSelectCard()
    end
end

-- 背景遮罩，牌的大小比实际显示的大小要大一些，所以背景遮罩要和牌一样大，不然的话点击边上还是能够抬起牌
function Card:showMaskLayer()
    if not self._maskLayer then
        self._maskLayer = ccui.ImageView:create()
        self._maskLayer:setScale9Enabled(true)
        self._maskLayer:setAnchorPoint(cc.p(0.5, 0.5))
        local contentSize = self:getContentSize()
        self._maskLayer:setContentSize(cc.size(contentSize.width, contentSize.height))
        self._maskLayer:setPosition(cc.p(contentSize.width/2, contentSize.height/2))

        local imgMask = ccui.ImageView:create()
        imgMask:setScale9Enabled(true)
        imgMask:setAnchorPoint(cc.p(0.5, 0.5))
        imgMask:setContentSize(cc.size(contentSize.width-14, contentSize.height-11))
        imgMask:loadTexture(CardLayerDefine.KW_UI_CARD_MASK_NAME, ccui.TextureResType.localType)
        imgMask:setPosition(cc.p(contentSize.width/2, contentSize.height/2))
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

local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"
local KW_PATH_SAO_GUANG_CARD = KW_GAME_COMMON_ANI_JSON_PATH .. "zzb_sk_hy/"
function Card:initFire()
    if not cc.FileUtils:getInstance():isFileExist(KW_PATH_SAO_GUANG_CARD .. "zzb_sk_hy.json") then
        return
    end
    if self._isShowFire then
        local aniName = "animation2"
        if self._isRight then
            aniName = "animation"
        end
        local params = { path = KW_PATH_SAO_GUANG_CARD, tex = "zzb_sk_hy.json", ske = "zzb_sk_hy.atlas", armatureName = aniName, scale = 1 }
        self._fireNode = sp.SkeletonAnimation:create(params.path .. params.tex, params.path .. params.ske, 1)
        if self._fireNode then
            self._fireNode:setAnimation(0, "" .. params.armatureName, true)
        end
        local contentSize = self:getContentSize()
        self._fireNode:setAnchorPoint(cc.p(0.5, 0.5))
        if self._isRight then
            self._fireNode:setPosition(cc.p(contentSize.width / 2, contentSize.height - 20 + self._fireOffsetY))
        else
            self._fireNode:setPosition(cc.p(contentSize.width / 2 - 30, contentSize.height - 20 + self._fireOffsetY))
        end
        self:addChild(self._fireNode, -1)
    elseif self._fireNode then
        self._fireNode:setVisibles(false)
    end
end

function Card:setCardStype(style)
    self._cardStyle = style

    if self._id == 0 then
        self:initCardBack()
    else
        self:initCardFace()
    end
end

function Card:setCardFaceStyle()
    self:initDKCardFace()
end

-- 设置双扣牌面大小
function Card:initDKCardFace()
    if not CF.gameSub.isDoubleKou then
        return
    end
    if not CF.gameSub:isDoubleKou(CF.roomData:getGameID()) then
        return
    end
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

return Card  f:  