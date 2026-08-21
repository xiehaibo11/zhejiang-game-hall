---@class TeaHouseGuideTipItem : View
local TeaHouseGuideTipItem = class("TeaHouseGuideTipItem", TeaHouse.View)

local KW_INFO_BG = 1
local KW_PALYER_BG = 2

local KW_STYLE_TYPE_DEFINE = {
    INFO_BG_NEXT = 1,
    PLAYER_BG_NEXT = 2,
    INFO_BG_NO_NEXT = 3,
    PLAYER_BG_NO_NEXT = 4,
}

local TextHAlignment =
{
    LEFT = 0,
    CENTER = 1,
    RIGHT = 3,
}

local TextVAlignment =
{
    TOP = 0,
    CENTER = 1,
    BOTTOM = 2,
}

TeaHouseGuideTipItem.bgPng = "teahouse_guide_tip_bg_"
TeaHouseGuideTipItem.downPng = "teahouse_guide_tip_down_"
TeaHouseGuideTipItem.leftPng = "teahouse_guide_tip_left_"
TeaHouseGuideTipItem.rightPng = "teahouse_guide_tip_right_"
TeaHouseGuideTipItem.topPng = "teahouse_guide_tip_top_"

TeaHouseGuideTipItem.showTypePng = KW_INFO_BG

-- 定义showType  top down left right topleft topright downleft downright
TeaHouseGuideTipItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseGuideTipItem/TeaHouseGuideTipItem.csb",
    binding = {
        ["_KW_PANEL_GUIDE_TIP"] = { tag = "_KW_PANEL_GUIDE_TIP", name = "_panelGuideTip", class = "panel" },
        ["_KW_TEXT_GUIDE_TIP"] = { tag = "_KW_TEXT_GUIDE_TIP", name = "_textGuideTip", class = "text" },
        ["_KW_BG_GUIDE_TIP"] = { tag = "_KW_BG_GUIDE_TIP", name = "_imgBG", class = "img" },
        ["_KW_DOWN_GUIDE_TIP"] = { tag = "_KW_DOWN_GUIDE_TIP", name = "_imgDown", class = "img"},
        ["_KW_LEFT_GUIDE_TIP"] = { tag = "_KW_LEFT_GUIDE_TIP", name = "_imgLeft", class = "img"},
        ["_KW_RIGHT_GUIDE_TIP"] = { tag = "_KW_RIGHT_GUIDE_TIP", name = "_imgRight", class = "img"},
        ["_KW_TOP_GUIDE_TIP"] = { tag = "_KW_TOP_GUIDE_TIP", name = "_imgTop", class = "img"},
        ["_KW_TEXT_CONTINUE"] = { tag = "_KW_TEXT_CONTINUE", name = "_textContinue", class = "img"},
    }
}

function TeaHouseGuideTipItem:ctor(showType, showText, styleType)
    TeaHouseGuideTipItem.super.ctor(self)
    self:updata(showType, showText, styleType)
end

function TeaHouseGuideTipItem:updata(showType, showText, styleType)
    self._showType = showType or "top"
    self._showText = showText or ""
    if styleType == KW_STYLE_TYPE_DEFINE.INFO_BG_NEXT then
        TeaHouseGuideTipItem.showTypePng = KW_INFO_BG
        self._textContinue:setVisible(true)
    elseif styleType == KW_STYLE_TYPE_DEFINE.PLAYER_BG_NEXT then
        TeaHouseGuideTipItem.showTypePng = KW_PALYER_BG
        self._textContinue:setVisible(true)
    elseif styleType == KW_STYLE_TYPE_DEFINE.INFO_BG_NO_NEXT then
        TeaHouseGuideTipItem.showTypePng = KW_INFO_BG
        self._textContinue:setVisible(false)
        self._textGuideTip:setTextHorizontalAlignment(TextHAlignment.CENTER)
        self._textGuideTip:setTextVerticalAlignment(TextVAlignment.CENTER)
    elseif styleType == KW_STYLE_TYPE_DEFINE.PLAYER_BG_NO_NEXT then
        TeaHouseGuideTipItem.showTypePng = KW_PALYER_BG
        self._textContinue:setVisible(false)
        self._textGuideTip:setTextHorizontalAlignment(TextHAlignment.CENTER)
        self._textGuideTip:setTextVerticalAlignment(TextVAlignment.CENTER)
    end
    self:initUI()
end

function TeaHouseGuideTipItem:initUI()
    self:loadShowTypePng()
    if self._showType == "top" then
        self:initTopPos()
    elseif self._showType == "down" then
        self:initDownPos()
    elseif self._showType == "left" then
        self:initLeftPos()
    elseif self._showType == "right" then
        self:initRightPos()
    elseif self._showType == "topleft" then
        self:initTopLeftPos()
    elseif self._showType == "topright" then
        self:initTopRightPos()
    elseif self._showType == "downleft" then
        self:initDownLeftPos()
    elseif self._showType == "downright" then
        self:initDownRightPos()
    end
    self._textGuideTip:setString(TeaHouse.StringTool.replaceMatchStr(self._showText))
end

function TeaHouseGuideTipItem:loadShowTypePng()
    self._imgBG:loadTexture(TeaHouseGuideTipItem.bgPng .. TeaHouseGuideTipItem.showTypePng .. ".png", ccui.TextureResType.plistType)
    self._imgDown:loadTexture(TeaHouseGuideTipItem.downPng .. TeaHouseGuideTipItem.showTypePng .. ".png", ccui.TextureResType.plistType)
    self._imgLeft:loadTexture(TeaHouseGuideTipItem.leftPng .. TeaHouseGuideTipItem.showTypePng .. ".png", ccui.TextureResType.plistType)
    self._imgRight:loadTexture(TeaHouseGuideTipItem.rightPng .. TeaHouseGuideTipItem.showTypePng .. ".png", ccui.TextureResType.plistType)
    self._imgTop:loadTexture(TeaHouseGuideTipItem.topPng .. TeaHouseGuideTipItem.showTypePng .. ".png", ccui.TextureResType.plistType)
    self._imgBG:setContentSize(630,150)
end

function TeaHouseGuideTipItem:initTopPos()
    self._imgDown:setVisible(false)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(true)
    local size = self._panelGuideTip:getContentSize()
    self._imgTop:setPositionX(size.width * 0.5)
    self._imgTop:setPositionY(size.height * 1)

    self._panelGuideTip:setAnchorPoint(cc.p(0.5,1))
    self._panelGuideTip:setPosition(0,-50)
end

function TeaHouseGuideTipItem:initDownPos()
    self._imgDown:setVisible(true)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(false)
    local size = self._panelGuideTip:getContentSize()
    self._imgDown:setPositionX(size.width * 0.5)
    self._imgDown:setPositionY(size.height * 0)

    self._panelGuideTip:setAnchorPoint(cc.p(0.5,0))
    self._panelGuideTip:setPosition(0,50)
end

function TeaHouseGuideTipItem:initLeftPos()
    self._imgDown:setVisible(false)
    self._imgLeft:setVisible(true)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(false)
    local size = self._panelGuideTip:getContentSize()
    self._imgLeft:setPositionX(size.width * 0)
    self._imgLeft:setPositionY(size.height * 0.5)

    self._panelGuideTip:setAnchorPoint(cc.p(0,0.5))
    self._panelGuideTip:setPosition(50,0)
end

function TeaHouseGuideTipItem:initRightPos()
    self._imgDown:setVisible(false)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(true)
    self._imgTop:setVisible(false)
    local size = self._panelGuideTip:getContentSize()
    self._imgRight:setPositionX(size.width * 1)
    self._imgRight:setPositionY(size.height * 0.5)

    self._panelGuideTip:setAnchorPoint(cc.p(1,0.5))
    self._panelGuideTip:setPosition(-50,0)
end

function TeaHouseGuideTipItem:initTopRightPos()
    self._imgDown:setVisible(false)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(true)
    local size = self._panelGuideTip:getContentSize()
    self._imgTop:setPositionX(size.width * 0.85)
    self._imgTop:setPositionY(size.height * 1)

    self._panelGuideTip:setAnchorPoint(cc.p(0.85,1))
    self._panelGuideTip:setPosition(0,-50)
end

function TeaHouseGuideTipItem:initTopLeftPos()
    self._imgDown:setVisible(false)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(true)
    local size = self._panelGuideTip:getContentSize()
    self._imgTop:setPositionX(size.width * 0.15)
    self._imgTop:setPositionY(size.height * 1)

    self._panelGuideTip:setAnchorPoint(cc.p(0.15,1))
    self._panelGuideTip:setPosition(0,-50)
end

function TeaHouseGuideTipItem:initDownRightPos()
    self._imgDown:setVisible(true)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(false)
    local size = self._panelGuideTip:getContentSize()
    self._imgDown:setPositionX(size.width * 0.85)
    self._imgDown:setPositionY(size.height * 0)

    self._panelGuideTip:setAnchorPoint(cc.p(0.85,0))
    self._panelGuideTip:setPosition(0,50)
end

function TeaHouseGuideTipItem:initDownLeftPos()
    self._imgDown:setVisible(true)
    self._imgLeft:setVisible(false)
    self._imgRight:setVisible(false)
    self._imgTop:setVisible(false)
    local size = self._panelGuideTip:getContentSize()
    self._imgDown:setPositionX(size.width * 0.15)
    self._imgDown:setPositionY(size.height * 0)

    self._panelGuideTip:setAnchorPoint(cc.p(0.15,0))
    self._panelGuideTip:setPosition(0,50)
end

return TeaHouseGuideTipItem�   