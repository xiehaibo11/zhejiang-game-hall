local GameCardLayer = CF.gameClass("GameCardLayer","game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameCardLayer")

function GameCardLayer:setHandCards(localSeat, cardIDs ,bShowAni)
    local isBackHandCards = function (handCards)
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
    if not isBackHandCards(cardIDs) or CF.roomData:getIsSeer() then 
        GameCardLayer.super.setHandCards(self, localSeat, cardIDs ,bShowAni)
    end
end

return GameCardLayer�