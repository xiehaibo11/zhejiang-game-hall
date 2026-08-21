local GameModule = CF.gameClass("GameModule", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.Module")

local CardLogic = CF.gameRequire("Logic.CardLogic")

function GameModule:ctor()
    GameModule.super.ctor(self)
end

function GameModule:onMsgPower(msgData)
    self._gameData:setPreOutSeat(msgData.sPrePowerSeat)
    self._gameData:setPowerSeat(msgData.sPowerSeat)
    self._gameData:setPreconditionOutCards(false)
    self._gameData:clearHintCards() --清除提示数据

    if msgData.sPowerSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer() then
        self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER, msg = {}})
        return
    end

    local hintCards  --轮到自己出牌,刷新提示数据
    local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
    local isFirstSeat, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard() --是否是自由出牌
    if not isFirstSeat then
        hintCards = CardLogic.getTipsDataByOutCards(handCardIDs, preOutCardIDs, preOutCardType)
    else
        hintCards = CardLogic.getTipsDataFreedom(handCardIDs)
    end

    if self._gameData:getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_KAIHUA then
        local index = 1
        while index <= #hintCards do
            local cards = hintCards[index] or {}
            local tCardPower = {}
            for _, cardId in pairs(cards) do
                local cardPower = CardLogic.getCardPowerById(cardId)
                table.insert(tCardPower, cardPower)
            end
            local isKinBomb, kingNum = CardLogic.isKingBomb(tCardPower)
            if (isKinBomb and kingNum == 6) then
                table.remove(hintCards, index)
            else
                index = index + 1
            end
        end
    end

    self._gameData:setHintCards(hintCards)
    self._isHintFirstSelect = true

    local bChaoDi = self._gameData:getChaoDiBool(msgData.sPowerSeat)
    if bChaoDi then
        self._gameData:setChaoDiBool(msgData.sPowerSeat, false)
    end

    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_GET_POWER,
            msg = {
                bChaoDi = bChaoDi,
                isFirstSeat = isFirstSeat
            }
        }
    )
end

function GameModule:checkSelfCanOutCard(selectCardIDs)
    local _, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    local bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs)
    if CF.game:getModule("GameLayer"):getGameData():getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HUOPING_KAIHUA then
        bCanOut = self:checkClassicsCanout(selectCardIDs, bCanOut)
    end
    return bCanOut
end

function GameModule:checkClassicsCanout(selectCardIDs, bCan)
    local bCanOut = bCan
    local tCardPower = {}
    for _, cardId in pairs(selectCardIDs) do
        local cardPower = CardLogic.getCardPowerById(cardId)
        table.insert(tCardPower, cardPower)
    end

    local isKinBomb, kingNum = CardLogic.isKingBomb(tCardPower)
    if isKinBomb and kingNum == 6 then
        bCanOut = false
    end
    return bCanOut
end

return GameModule
�