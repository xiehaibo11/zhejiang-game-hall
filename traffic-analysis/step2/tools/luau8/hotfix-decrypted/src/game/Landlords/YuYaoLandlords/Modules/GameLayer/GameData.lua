local GameData = CF.gameClass("GameData", "game.Landlords.BaseLandlords.Modules.GameLayer.GameData")

function GameData:initDatas()
    GameData.super.initDatas(self)
    self._jokerData     = {}  --百搭
    self._selfCardType  = {}  --自己出牌的牌型
    self._teaBigWinStyleRule = {}
end

function GameData:initEveryTime()
    GameData.super.initEveryTime(self)
    self._selfCardType  = {} 
end

function GameData:setJokerData(joker)
    self._jokerData = joker
end

function GameData:getJokerData()
    return self._jokerData
end

function GameData:setSelfCardType(cardType)
    self._selfCardType = cardType
end

function GameData:getSelfCardType()
    return self._selfCardType
end

function GameData:getTeaBigWinStyleRule()
    return self._teaBigWinStyleRule
end

function GameData:setTeaBigWinStyleRule(ruleTable)
    self._teaBigWinStyleRule = ruleTable
end

return GameData�