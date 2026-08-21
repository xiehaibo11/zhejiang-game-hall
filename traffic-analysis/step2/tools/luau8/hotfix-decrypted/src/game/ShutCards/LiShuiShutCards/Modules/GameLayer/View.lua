local GameLayer = CF.gameClass("GameLayer", "game.ShutCards.BaseShutCards.Modules.GameLayer.View")
local CardLogic = CF.gameRequire("Modules.GameLayer.CardLogic")

--最后4张以内，判断能否一次出牌
function GameLayer:AutoOutCard()
    local sSeatId = CF.roomData:getSelfSeat()
    local selfCard = clone(self._gameData:getHandCards(sSeatId))

    if selfCard and #selfCard <= 4 then
        local lastOut = true
        local lastCardType =self._gameData:getLastCardType()
        local canOut = CardLogic:canOut(selfCard, lastCardType, lastOut, self._gameData:getMustOutCard())
        if canOut then
            self:updateOptBtns(false)
            --预显示
            if self._gameData:isPreShowOut() then
                self:showOutCard(sSeatId,selfCard)
                self._gameData:setPreShowOut(false)
            end
            self:sendOutCard(selfCard)
            return true
        end
    end
    return false
end

function GameLayer:updateDownPanel()
    local show = true
    local lastOutCard = self._gameData:getLastOutCard()
    local preOutSeat = self._gameData:getLastPlayer()
    if not(#lastOutCard == 0 or preOutSeat == CF.roomData:getSelfSeat()) and #self._promptCards == 0 then
--        if CF.roomData:isMustOut() then
--            self:delayAutoPass(0.5)
--        else
--            self:delayAutoPass(5)
--        end
        show = false
    end
    self._downPanel:setVisible(not show)
    self._btnsGameLayer:setVisible(show)
end

return GameLayer