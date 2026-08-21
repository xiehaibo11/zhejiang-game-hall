
local CardLayer = CF.gameClass("CardLayer", "game.BaseCardGame.Modules.CardLayer.CardLayer")
local CardArea = CF.gameRequire("Modules.CardLayer.CardArea")
local HandCardArea = CF.gameRequire("Modules.CardLayer.HandCardArea")
local CardLayerConfig = CF.gameRequire("Modules.CardLayer.CardLayerConfig")

function CardLayer:createHandCardArea(localSeat)
    local cardArea
    if localSeat == CardLayerConfig.LocalSeat.Bottom then
        cardArea = HandCardArea.new()
    else
        cardArea = CardArea.new()
    end
    local handCardConf = CardLayerConfig.HandCardConf[localSeat]
    self:setCardAreaNormalConf(cardArea, handCardConf)
    cardArea:setMaxCarDistance(handCardConf.maxCardDistanceX)
    cardArea:setScale(CardLayerConfig.HandCardScale[localSeat])
    cardArea:setAreaName("hand")
    cardArea:setAutoPositionBool(false)
    self["_handCardPos" .. localSeat]:addChild(cardArea)
    self._tHandCardArea[localSeat] = cardArea
end

return CardLayer
