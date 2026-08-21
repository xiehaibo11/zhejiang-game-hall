local GameData = CF.gameClass("GameData", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameData")
local CardLogic = CF.gameRequire("Logic.CardLogic")

function GameData:deleteHandCardIDs(seat, delectCardIDs)
    local delCardIDs = clone(delectCardIDs)
    if not self._handCard[seat] or not delectCardIDs then
        return
    end

    local isBackHandCards = function(handCards)
        if handCards == nil or #handCards == 0 then
            return true
        end
        local retcount = 0
        for i = 1, #handCards do
            if handCards[i] == 0 then -- 0是牌背
                retcount = retcount + 1
            end
        end
        return retcount >= #handCards - 1 and retcount ~= 0
    end

    if isBackHandCards(self._handCard[seat]) then
        delCardIDs = {}
        local handCards = clone(self._handCard[seat])
        for _ = 1, #delectCardIDs do
            local isDel = false
            for j = 1, #handCards do
                if handCards[j] == delectCardIDs[j] then -- 0是牌背
                    table.insert(delCardIDs, handCards[j])
                    table.remove(handCards, j)
                    isDel = true
                    break
                end
            end
            if not isDel then
                table.insert(delCardIDs, 0)
            end
        end
    end
    local _, newHandCardIDs = CardLogic.deleteCardIDs(self._handCard[seat], delCardIDs)
    self:setHandCardIDs(seat, newHandCardIDs)

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE, msg = {seat = seat, bDeleteCard = true}})
end

return GameData
