local CardLayerDefine = NG.GAME.gameRequire("Modules.GameMain.CardLayer.CardLayerDefine")
local CardLayerConfig = NG.GAME.gameRequire("Modules.GameMain.CardLayer.CardLayerConfig")

local Card = NG.GAME.gameClass("Card",function()
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

function Card:ctor()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_BASE_CARD_PLIST)
    self._state = Card.STATE.NORMAL
    self._id = 0
    self._initPosY = 0  --起始Y坐标
    self._selectAddY = 50   --选中后弹起距离
    self._colorState = Card.COLOR_STATE.NONE
    self._spineNode = nil
    self._landlordFlag = nil
end

function Card:setCardID(id)
    self._id = id

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
    self:loadTexture(CardLayerDefine.KW_UI_CARD_BACK_NAME, ccui.TextureResType.plistType)
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
    if self._powerSprite == nil then
        self._powerSprite = cc.Sprite:create()
        self._powerSprite:setAnchorPoint(cc.p(0, 1))
        self._powerSprite:setPosition(CardLayerConfig.CardIconPos.posValue)
        self:addChild(self._powerSprite)
    end
    if self._colorSprite == nil then
        self._colorSprite = cc.Sprite:create()
        self._colorSprite:setAnchorPoint(cc.p(0, 1))
        self._colorSprite:setPosition(CardLayerConfig.CardIconPos.posColor)
        self._colorSprite:setScale(0.44)
        self:addChild(self._colorSprite)
    end
    if self._iconSprite == nil then
        self._iconSprite = cc.Sprite:create()
        self._iconSprite:setAnchorPoint(cc.p(1, 0))
        self._iconSprite:setPosition(CardLayerConfig.CardIconPos.posIcon)
        self:addChild(self._iconSprite)
    end

    if self._id == self.CARDID_JOKER_SMALL then
        self._colorSprite:setVisible(false)
        self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_JOKER_NAME[1])
        self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[5])
    elseif self._id == self.CARDID_JOKER_BIG then
        self._colorSprite:setVisible(false)
        self._powerSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_JOKER_NAME[2])
        self._iconSprite:setSpriteFrame(CardLayerDefine.KW_UI_CARD_COLOR_NAME[6])
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
    
    self:loadTexture(CardLayerDefine.KW_UI_CARD_FACE_NAME, ccui.TextureResType.plistType)
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

function Card:playSelectSound()
    -- if CF.soundManager.playSoundSelectCard then
    --     CF.soundManager:playSoundSelectCard()
    -- end
end

function Card:setLandlordFlagVisible(isShow)
    if not isShow and not self._landlordFlag then
        return
    end
    isShow = isShow or false
    -- 地主标识 
    if self._landlordFlag == nil then
        self._landlordFlag = cc.Sprite:create()
        self._landlordFlag:setAnchorPoint(cc.p(1, 1))
        self._landlordFlag:setSpriteFrame("newgold_hp_landlord_img_jiaobiao_dizhu.png")
        self._landlordFlag:setScale(1.44)
        self._landlordFlag:setPosition(self:getContentSize().width - 5, self:getContentSize().height - 4)
        self:addChild(self._landlordFlag)
    end
    self._landlordFlag:setVisible(isShow)
end

function Card:setShowHandFlagVisible(visible)
    
end

function Card:showFire(isShow)
    if not isShow and not self._spineNode then
        return
    end
    isShow = isShow or false
    if not self._spineNode then
        self._spineNode = NG.UITool.playDargonBonesSpine("NewGoldRes/Spine/HPLandlord/GameMain/", "Hp_zdtp.json", "Hp_zdtp.atlas", "animation0", true)
        local cardSize = self:getContentSize()
        self._spineNode:setScaleX(2.0)
        self._spineNode:setScaleY(1.7)
        self._spineNode:setPosition(cardSize.width/2, cardSize.height + 11)
        self:addChild(self._spineNode)
    end
    self._spineNode:setVisible(isShow or false)
end

local lineImgName = "lineImgName"
function Card:showBombLine(isShow, line)
    if not isShow or line < 1 or line > 5 then
        self:removeChildByName(lineImgName)
        return
    end
    local lineImg = ccui.ImageView:create()
    lineImg:loadTexture("newgold_hp_landlord_img_zha_"..line..".png", ccui.TextureResType.plistType)
    lineImg:setAnchorPoint(cc.p(0.5, 0.5))
    lineImg:setScale(1.5)
    lineImg:setPosition(cc.p(35, 75))
    lineImg:setName(lineImgName)
    self:addChild(lineImg)
end

return Card