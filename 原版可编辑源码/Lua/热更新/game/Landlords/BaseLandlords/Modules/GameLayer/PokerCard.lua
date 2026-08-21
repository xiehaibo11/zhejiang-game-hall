local PokerCard = class("PokerCard")
local CardEnum  = CF.gameRequire("Define.CardEnum")

function PokerCard:ctor(id)
    self._id = id or CardEnum.CARD_ID.CID_NONE
end

function PokerCard:getID() 
    return self._id
end

function PokerCard:setID(id)
    self._id = id
end

function PokerCard:getValue()
    return CardEnum.ucValue[self._id] or 0
end

function PokerCard:getPower()
    return CardEnum.ucPower[self._id] or 0
end

function PokerCard:getColor()
    return CardEnum.ucColor[self._id] or 0
end 

return PokerCard