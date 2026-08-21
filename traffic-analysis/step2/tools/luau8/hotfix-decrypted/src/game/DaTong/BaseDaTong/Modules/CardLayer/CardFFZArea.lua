local CardFFZ           = CF.gameRequire("Modules.CardLayer.CardFFZ")
local CardLayerDefine   = CF.gameRequire("game.BaseCardGame.Modules.CardLayer.CardLayerDefine")
local CardAreaFFZ 		= CF.gameClass("CardAreaFFZ", "game.BaseCardGame.Modules.CardLayer.CardArea")

--创建一张牌
function CardAreaFFZ:createCard(cardId, cardIndex, sizeType, isShowFire, isRight, offsetY, cardStyle)
    local card = CardFFZ:new()
    card:setCardID(cardId, sizeType, isShowFire, isRight, offsetY, cardStyle)
    card:setName(string.format(CardLayerDefine.KW_CARD_NAME,cardIndex))
    card:setTag(cardIndex)
    return card
end

return CardAreaFFZ�