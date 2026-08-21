local GameModule = CF.gameClass("GameModule", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.Module")

local CardLogic = CF.gameRequire("Logic.CardLogic")

function GameModule:onMsgPower(msgData)
    self._gameData:setPreOutSeat(msgData.sPrePowerSeat)
    self._gameData:setPowerSeat(msgData.sPowerSeat)
    self._gameData:setPreconditionOutCards(false)
    self._gameData:clearHintCards() --清除提示数据

    if msgData.sPowerSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer() then
        self:dispatchEvent({name = self.EVENT_PLAYER_GET_POWER, msg = {}})
        return
    end

    local getTipsDataFreedom = function(handCardIDs, preOutCardIDs, preOutCardType)
        local resultData = {}
        if self:getGameData():getGameType() ~= 9 then
            resultData = CardLogic.getTipsDataFreedom(handCardIDs)
        else
            CardLogic.getTipsDataFreedomNormal(handCardIDs, resultData)
            CardLogic.getTipsDataFreedomBomb(handCardIDs, resultData)
        end
        return resultData
    end

    local hintCards  --轮到自己出牌,刷新提示数据
    local handCardIDs = self._gameData:getHandCardIDs(CF.roomData:getSelfSeat())
    local isFirstSeat, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard() --是否是自由出牌
    if not isFirstSeat then
        hintCards = CardLogic.getTipsDataByOutCards(handCardIDs, preOutCardIDs, preOutCardType)
    else
        hintCards = getTipsDataFreedom(handCardIDs)
    end

    if self:getGameData():getGameType() == 9 then --经典双扣没有三王 大小王对
        hintCards = CardLogic.getClassicGameHintCards(isFirstSeat, handCardIDs, hintCards)
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

--选中手牌后触发事件
--用于更新"出牌"按钮状态以及智能提示
--event.haveUnSelect为true表示有牌被提起，false表示没有牌被提起
function GameModule:gameEventCheckedCards(event)
    local powerSeat = self._gameData:getPowerSeat()
    if powerSeat ~= CF.roomData:getSelfSeat() then
        return
    end

    local bCanOut = false
    local selectCardIDs = event.selectCardIDs
    local isFreedomutCard, preOutCardIDs, preOutCardType = self:checkIsFreedomOutCard()
    if not isFreedomutCard and self._isHintFirstSelect and #selectCardIDs > 0 then
        local hintCardIDs = self._gameData:getHintCardIdsBySomeCardIds(selectCardIDs, preOutCardIDs, preOutCardType)
        if hintCardIDs and #hintCardIDs > 0 then
            bCanOut = true
            --设置选中牌数据
            self:dispatchEvent(
                {
                    name = self.EVENT_GAME_SELECT_HINTCARDS,
                    msg = {
                        hintCardIDs = hintCardIDs
                    }
                }
            )
        end
        --只智能提示一次
        self._isHintFirstSelect = false
    end
    if not bCanOut and event.haveUnSelect then
        local handCardIDs = self._gameData:getHandCardIDs(powerSeat)
        local bHaveShun, resultData = CardLogic.smartTipsBySelectCardIDs(handCardIDs, selectCardIDs, preOutCardType, preOutCardIDs)
        if bHaveShun then
            bCanOut = true
            --设置选中牌数据
            self:dispatchEvent(
                {
                    name = self.EVENT_GAME_SELECT_HINTCARDS,
                    msg = {
                        hintCardIDs = resultData
                    }
                }
            )
        end
    end

    if not bCanOut then
        bCanOut = CardLogic.checkCanOutCard(preOutCardIDs, preOutCardType, selectCardIDs)
    end

    if self:getGameData():getGameType() == 9 then
        bCanOut = self:checkClassicsCanout(selectCardIDs, bCanOut)
    end
    --跟新出牌按钮状态
    self:dispatchEvent(
        {
            name = self.EVENT_GAME_CHANGE_BTNS_STATE,
            msg = {
                btnTagFlag = CF.GameDefine.GAME_BTNS_TAG_FLAG.BTN_OUTCARD,
                state = bCanOut
            }
        }
    )
end

function GameModule:checkSelfCanOutCard(selectCardIDs)
    local bCanOut = GameModule.super.checkSelfCanOutCard(self, selectCardIDs)
    if self:getGameData():getGameType() == 9 then --经典双扣没有三王 大小王
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
    if (isKinBomb and kingNum == 6) or (#tCardPower == 2 and kingNum == 5 and tCardPower[1] ~= tCardPower[2]) then
        bCanOut = false
    end
    return bCanOut
end

return GameModule
