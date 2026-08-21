local CardType  = CF.gameRequire("Define.CardType")
local CardLogic = CF.gameClass("CardLogic", "game.Landlords.BaseLandlords.Logic.CardLogic")

function CardLogic:initAllCardType(gamerule)
    gamerule = gamerule or {}
    self._baseCardType = {}

    table.insert(self._baseCardType, self.matchWangZha)
    table.insert(self._baseCardType, self.matchNZhang)
    table.insert(self._baseCardType, self.matchMLianN)
    table.insert(self._baseCardType, self.matchN3Dai1)
    if gamerule._allow3With2 then
        table.insert(self._baseCardType, self.matchN3Dai1Dui)
    end
    table.insert(self._baseCardType, self.matchN4Dai2)
    if gamerule._allow4With4 then
        table.insert(self._baseCardType, self.matchN4Dai2Dui)
    end
end

function CardLogic:initCardTypePower(gamerule)
    gamerule = gamerule or {}
    self._cardTypePower = {}

    self._cardTypePower[CardType.ID.NZhang] = 12
    self._cardTypePower[CardType.ID.MLianN] = 1
    self._cardTypePower[CardType.ID.N3Dai1] = 1
    if gamerule._allow3With2 then
        self._cardTypePower[CardType.ID.N3Dai1Dui] = 1
    end
    self._cardTypePower[CardType.ID.N4Dai2] = 1
    if gamerule._allow4With4 then
        self._cardTypePower[CardType.ID.N4Dai2Dui] = 1
    end
    self._cardTypePower[CardType.ID.WangZha] = 100
    
    --NZhang牌权
    for i = 1, 4 do
        if i < 4 then
            if gamerule._allow3Cnt or i ~= 3 then
                self._cardTypePower[CardType.ID.NZhang + i] = 1
            end
        else
            self._cardTypePower[CardType.ID.NZhang + i] = i
        end
    end
    --MLianN牌权
    local endNum = 3
    if not gamerule._allow3Cnt then
        endNum = 2
    end
    for m = 1, endNum do
        if m == 1 then
            n = 5
        elseif m == 2 then
            n = 3
        else
            n = 2
        end
        for k = n, 12 do
            self._cardTypePower[CardType.ID.MLianN + m * 100 + k] = 1
        end
    end
    
    --N3Dai1牌权
    for i = 1, 5 do
        self._cardTypePower[CardType.ID.N3Dai1 + i] = 1
    end

    --N3Dai1Dui牌权
    for i = 1, 4 do
        self._cardTypePower[CardType.ID.N3Dai1Dui + i] = 1
    end

    --N4Dai2
    for i = 1, 1 do
        self._cardTypePower[CardType.ID.N4Dai2 + i] = 1
    end

    --N4Dai2对
    for i = 1, 1 do
        self._cardTypePower[CardType.ID.N4Dai2Dui + i] = 1
    end
end

return CardLogic�	