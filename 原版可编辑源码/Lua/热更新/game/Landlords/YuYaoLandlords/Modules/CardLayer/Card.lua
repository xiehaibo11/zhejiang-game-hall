local Card = CF.gameClass("Card", "game.Landlords.BaseLandlords.Modules.CardLayer.Card")

Card.CARDID_JOKER_SMALL = 53
Card.CARDID_JOKER_BIG = 54

Card.COLOR_STATE = {
    NONE = 1,
    NORMAL = 2,
    SELECT = 3,
    GRAY = 4,
    BOMB = 5,
}

Card.COLOR = {
    [Card.COLOR_STATE.NONE] = cc.c3b(255,255,255),
    [Card.COLOR_STATE.NORMAL] = cc.c3b(255,255,255),
    [Card.COLOR_STATE.SELECT] = cc.c3b(255,200,170),
    [Card.COLOR_STATE.GRAY] = cc.c3b(180,180,180),
    [Card.COLOR_STATE.BOMB] = cc.c3b(255, 255, 0),
}

Card.STATE = {
    NORMAL = 1,
    SELECT = 2,
    DRAG = 3,
    BOMB = 4,
}

function Card:ctor()
    Card.super.ctor(self)
    self._value = 0
end

function Card:setColorState(colorState,boomValue)
    self._colorState = colorState
    boomValue = boomValue or {}
    self:setColor(Card.COLOR[self._colorState])
    for _,bombV in pairs(boomValue) do
        if self:getValue() == bombV and bombV ~= 0 then
            self:setColorState(Card.COLOR_STATE.BOMB)
        end
    end
end

function Card:setValue(value)
    self._value = value
end

function Card:getValue()
    return self._value
end

function Card:initCardFace()
    Card.super.initCardFace(self)
    if self._id == self.CARDID_JOKER_SMALL then
        self:setValue(14)
    elseif self._id == self.CARDID_JOKER_BIG then
        self:setValue(15)
    else
        local value = self._id%13
        if value == 0 then
            value = 13
        end
        self:setValue(value)
    end
end

return Card
