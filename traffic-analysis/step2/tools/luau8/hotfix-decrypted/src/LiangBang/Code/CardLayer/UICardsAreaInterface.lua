local CURRENT_MOUDLE_NAME = ...
local UICardsAreaBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsAreaInterface")
local UICardsArea = class("UICardsArea",UICardsAreaBase)
local UICard = import(".UICard",CURRENT_MOUDLE_NAME)

local KW_CARD_NAME = "CARD_%d"

--手牌相关函数
function UICardsArea:setCards(ids,aniType)
    self:destroyCards()
    if self._maxCardsCount > 0 then
        self._lineCount = math.ceil(#ids/self._maxCardsCount)
    end
    for i = 1, self._lineCount do
        self._cardLines[i] = {}
        local cardCountInLine = self._maxCardsCount
        if i == self._lineCount then
            cardCountInLine = #ids - self._maxCardsCount * (self._lineCount - 1)
        end
        for j = 1, cardCountInLine do
            local cardsIndex = j + self._maxCardsCount * (i - 1)
            self._cardLines[i][j] = UICard:new()
            self._cardLines[i][j]:setCard(ids[cardsIndex])
            self._rootNode:addChild(self._cardLines[i][j])
            self._cardLines[i][j]:setVisible(true)
            self._cardLines[i][j]:setName(string.format(KW_CARD_NAME,cardsIndex))
            if self._canTouch == true then
                self._cardLines[i][j]:setTouchEnabled(true)
                self._cardLines[i][j]:addTouchEventListener(handler(self,self.onTouchEventCard))
            end 
            self._cards[cardsIndex] = self._cardLines[i][j]
        end
    end
    
    --动画
    if aniType == self.CardAniType.FirstDealHandCardRightIn or aniType == self.CardAniType.FirstDealHandCardLeftIn then
        self:firstDealHandCardAni(aniType)
    end
end

return UICardsArea�