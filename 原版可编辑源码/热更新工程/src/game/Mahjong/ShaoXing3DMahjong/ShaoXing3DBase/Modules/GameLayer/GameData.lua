local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)
    self._chowLimitOtherCombs = {}
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._chowLimitOtherCombs = {}
end

function GameData:setChowLimitOtherCombs(mah)
    if self:isJokerMah(mah) then
        self._chowLimitOtherCombs = {}
        return
    end
    local limitOtherCombs = {}
    local limitOtherComb1 = {}
    local limitOtherComb2 = {}
    local limitOtherComb3 = {}
    limitOtherComb1[1]= mah-2
    limitOtherComb1[2]= mah-1
    limitOtherCombs[1] = limitOtherComb1
    limitOtherComb2[1]= mah-1
    limitOtherComb2[2]= mah+1
    limitOtherCombs[2] = limitOtherComb2
    limitOtherComb3[1]= mah+1
    limitOtherComb3[2]= mah+2
    limitOtherCombs[3] = limitOtherComb3
    self._chowLimitOtherCombs = limitOtherCombs
end

function GameData:getChowLimitOtherCombs()
    return self._chowLimitOtherCombs or { }
end

function GameData:isJokerMah(mah)
    local isJoker = false
    local jokers = self:getJokerData()
    for index = 1, #jokers do
        if jokers[index] == mah then
            isJoker = true
            break
        end
    end
    return isJoker
end

return GameData