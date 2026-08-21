local HeadCardArea = CF.gameClass("HeadCardArea", CF.ViewBase)
local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
local CardEnum = CF.gameRequire("Define.CardEnum")

function HeadCardArea:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/PlayerHead/HeadCardNode.csb"
end

function HeadCardArea:getBindingInfo()
    local bindInfo = {
        ["_KW_HEAD_CARD_PANEL"] = {varName = "_panel"},
        ["_KW_CARDS_COUNT"] = {varName = "_cardCount"},
        ["_KW_HEAD_CARD_AN_"] = {varName = "_headCardAn", beginIndex = 1, endIndex = 4},
        ["_KW_HEAD_CARD_MING_"] = {varName = "_headCardMing", beginIndex = 1, endIndex = 2},
        ["_KW_CARD_FLY_POS"] = {varName = "_flyCardPos"}
    }
    return bindInfo
end

function HeadCardArea:setHeadCardInfo(node, cardId)
    node:setVisible(true)
    local _cardNum = node:getChildByName("_KW_CARD"):getChildByName("_KW_CARD_NUM")
    _cardNum:ignoreContentAdaptWithSize(true)
    local _cardBack = node:getChildByName("_KW_CARD"):getChildByName("_KW_CARD_BACK")
    local _cardEye = node:getChildByName("_KW_CARD"):getChildByName("_KW_CARD_EYE")
    if cardId == 0 then
        _cardNum:setVisible(false)
        _cardBack:setVisible(true)
        _cardEye:setVisible(false)
    else
        _cardNum:setVisible(true)
        _cardBack:setVisible(false)
        _cardEye:setVisible(true)
        local value = CardEnum.CardID2Value[cardId]
        local color = CardEnum.getCardColor(cardId)
        if color == CardEnum.CARD_COLOR.CC_NONE then
            -- 大小王的情况
            if value == CardEnum.CARD_VALUE.CV_SJ then
                _cardNum:setPosition(cc.p(13, 46))
                _cardNum:loadTexture(string.format("darkdoublekou_joker_small_2.png"), ccui.TextureResType.plistType)
            elseif value == CardEnum.CARD_VALUE.CV_BJ then
                _cardNum:setPosition(cc.p(13, 46))
                _cardNum:loadTexture(string.format("darkdoublekou_joker_big_2.png"), ccui.TextureResType.plistType)
            else
                _cardNum:setPosition(cc.p(25, 56))
            end
        else
            if color % 2 == 1 then
                _cardNum:loadTexture(string.format(CardLayerDefine.KW_UI_CARD_RED_NAME, value), ccui.TextureResType.plistType)
            else
                _cardNum:loadTexture(string.format(CardLayerDefine.KW_UI_CARD_BLACK_NAME, value), ccui.TextureResType.plistType)
            end
            _cardNum:setPosition(cc.p(25, 56))
        end
    end
end

function HeadCardArea:getFlyCardNode()
    return self._flyCardPos
end

--清除显示牌
function HeadCardArea:clearCards()
    self._panel:setVisible(false)
    for i = 1, 4 do
        self["_headCardAn" .. i]:setVisible(false)
    end
    for i = 1, 2 do
        self["_headCardMing" .. i]:setVisible(false)
    end
end

--设置显示牌数据
function HeadCardArea:setShowCards(cardIDs, openCardIDs)
    openCardIDs = openCardIDs or {}
    self:clearCards()
    self._panel:setVisible(#cardIDs > 0)
    if cardIDs == nil or #cardIDs == 0 then
        return
    end

    local mingCards = {}
    local anCards = {}
    for _, cardId in ipairs(cardIDs) do
        if table.has(openCardIDs, cardId) then
            table.insert(mingCards, cardId)
        else
            table.insert(anCards, cardId)
        end
    end

    table.sort(
        mingCards,
        function(a, b)
            return CardEnum.CardID2Power[((a - 1) % 54 + 1)] > CardEnum.CardID2Power[((b - 1) % 54 + 1)]
        end
    )
    table.sort(
        anCards,
        function(a, b)
            return CardEnum.CardID2Power[((a - 1) % 54 + 1)] > CardEnum.CardID2Power[((b - 1) % 54 + 1)]
        end
    )
    cardIDs = {}
    table.insertto(cardIDs, mingCards)
    table.insertto(cardIDs, anCards)

    local mingIndex = 0
    local anIndex = 0
    for _, cardId in ipairs(cardIDs) do
        if table.has(openCardIDs, cardId) then
            mingIndex = mingIndex + 1
            if mingIndex <= 2 then
                self:setHeadCardInfo(self["_headCardMing" .. mingIndex], cardId)
            end
        else
            anIndex = anIndex + 1
            local isShowAnIndex = (anIndex - 1) % 4 == 0
            local showAnIndex = (anIndex - 1) / 4 + 1
            if isShowAnIndex and showAnIndex <= 4 then
                self:setHeadCardInfo(self["_headCardAn" .. showAnIndex], 0)
            end
        end
    end

    self._cardCount:setString(tostring(#cardIDs) .. "张")
end

return HeadCardArea
