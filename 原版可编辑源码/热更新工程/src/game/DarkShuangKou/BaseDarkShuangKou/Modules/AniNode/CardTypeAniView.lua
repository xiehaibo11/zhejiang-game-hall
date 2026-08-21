local CardTypeAniLayer = CF.gameClass("CardTypeAniLayer", CF.ViewBase)
local CardEnum = CF.gameRequire("Define.CardEnum")

function CardTypeAniLayer:ctor(param)
    CardTypeAniLayer.super.ctor(self)
    self._cardTypeID = param.cardTypeID or 0
    self._score = param.score or 0
    self:init()
end

function CardTypeAniLayer:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/AniNode/CardTypeAni.csb"
end

function CardTypeAniLayer:getBindingInfo()
    return {
        ["_KW_IMG_BACK"] = {varName = "_backImg"},
        ["_KW_IMG_CARD_TYPE"] = {varName = "_cardTypeImg"},
        ["_KW_TEXT_MULT"] = {varName = "_multNum"}
    }
end

function CardTypeAniLayer:init()
    local cardTypeInfo = CardEnum.getCardTypeInfoByCardTypeID(self._cardTypeID)

    local mult = cardTypeInfo.mult
    self._multNum:setString(string.format("(%dx%d倍)", self._score, mult))

    self._backImg:loadTexture(string.format("DarkShuangKouCardType_back_%d.png", cardTypeInfo.cardType.id), ccui.TextureResType.plistType)
    self._cardTypeImg:loadTexture("DarkShuangKouCardType" .. cardTypeInfo.img .. ".png", ccui.TextureResType.plistType)
    self._cardTypeImg:ignoreContentAdaptWithSize(true)

    local size1 = self._cardTypeImg:getContentSize()
    local size2 = self._multNum:getContentSize()
    self._backImg:setContentSize(cc.size(87 + size2.width, self._backImg:getContentSize().height))
    self:setPosition(cc.p((size1.width - size2.width) / 2, 0))
end

return CardTypeAniLayer
