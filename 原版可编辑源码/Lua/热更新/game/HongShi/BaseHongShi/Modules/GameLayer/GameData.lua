local GameData = CF.gameClass("GameData", CF.ModuleBase)
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local WinLostData = CF.gameRequire("Modules.GameLayer.WinLostData")

GameData.EVENT_HANDCARD_UPDATE = "EVENT_HANDCARD_UPDATE"

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE        
    self._outCardsRecord = {}   
    self._tOutCardIDs = {} --新增打出牌数据
		
    self._handCard = {}
    self._jokerData = {}        	
    self._preOutSeat = 0
    self._powerSeat = 0
    self._clockSeat = -1
    
    self._openCardFirstSeat = 0
    self._openCardSecondSeat = 0
    self._preconditionOutCards = false
    self._sortType = CardLogic.SrotType.CardPower   --排序方式
    self._hintCards = {} --提示数据
    self._hintIndex = 0 --提示顺序序号
    self._winMut = 1
    self._lostMut = 1
    self._waitFollowSeat = -1
    self._selfLightTen = false
    self._followTurn = 0
    self._rankList = {}
    self._lightTenType = {}
    self._leftCardNum = {}

    self._playerName = {}
    self._tScore = {}
    self._bLastPlayCount = false
    self._playerEndState = false
    self._winLostData = WinLostData.new()
    self._firstHandData = false
end

function GameData:initEveryTime()
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._preconditionOutCards = false    
    self:clearHandCardData()
    self:resetRecordData()
    
    self._preOutSeat = CF.roomData:getMaxPlayer()
    self._powerSeat = CF.roomData:getMaxPlayer()
    self._clockSeat = CF.roomData:getMaxPlayer()
    
    self._sortType = CardLogic.SrotType.CardPower   --排序方式
    self._hintCards = {}
    self._hintIndex = 0
    self._winMut = 1
    self._lostMut = 1
    self:clearWinLostData()

    self._waitFollowSeat = -1
    self._lightTenPower = 0
    self._followTurn = 0
    self._rankList = {}
    self._lightTenType = {}
    self._playerEndState = false
    self._firstHandData = false
end

function GameData:setGameEndState(endState)
    self._playerEndState = endState
end

function GameData:getWinLostData()
    return self._winLostData
end

function GameData:setJokerIDs(cardIds)
    for _, v in ipairs(cardIds) do
        self._jokerData[v] = true
    end
end

function GameData:isJokerById(cardId)
    if self._jokerData[cardId] then
        return true
    end
    return false
end

----------------------------------------
--preconditionOutCards
----------------------------------------
function GameData:setPreconditionOutCards(preconditionOutCards)
    self._preconditionOutCards = preconditionOutCards
end

function GameData:getPreconditionOutCards()
    return self._preconditionOutCards
end

function GameData:setWinLostMut(winMut, lostMut)
    self._winMut = winMut
    self._lostMut = lostMut
end

function GameData:getWinLostMut()
    return self._winMut, self._lostMut
end

function GameData:setGameStep(gameStep)
    self._gameStep = gameStep
end

function GameData:getGameStep()
    return self._gameStep
end

function GameData:setOpenCardFirstSeat(openCardFirstSeat)
    self._openCardFirstSeat = openCardFirstSeat
end

function GameData:getOpenCardFirstSeat()
    return self._openCardFirstSeat
end

function GameData:setOpenCardSecondSeat(openCardSecondSeat)
    self._openCardSecondSeat = openCardSecondSeat
end

function GameData:getOpenCardSecondSeat()
    return self._openCardSecondSeat
end

----------------------------------------
--出牌数据
----------------------------------------
function GameData:setOutCardIDs(seat, cardIDs)
    self._tOutCardIDs[seat] = cardIDs
end

function GameData:getOutCardIDs(seat)
    return self._tOutCardIDs[seat]
end

function GameData:clearOutCardData()
    for i = 0 ,CF.roomData:getMaxPlayer() - 1 do
        self._tOutCardIDs[i] = {}
    end
end

function GameData:addOutCardRecord(nSeat, outGroup)
    local cards = clone(outGroup)
    if not self._outCardsRecord[nSeat] then
        self._outCardsRecord[nSeat] = {}
    end
    table.insert(self._outCardsRecord[nSeat],cards)
end

function GameData:getOutCardRecord(nSeat)
    return self._outCardsRecord[nSeat]
end

----------------------------------------
--手牌
----------------------------------------
function GameData:setHintCards(hintCards)
    self._hintCards = hintCards
    self._hintIndex = 0
end

function GameData:getHintCards()
    return self._hintCards
end

function GameData:clearHintCards()
    self._hintCards = {}
    self._hintIndex = 0
end

function GameData:setHintIndex(hintIndex)
    self._hintIndex = hintIndex
end

function GameData:getHintCardIdsBySomeCardIds(cardIDs, outCardIDs, outCardType)
    if outCardIDs and outCardType then
        --别家出单张，如果选择的是单张，并且大于出的单张，则不拆炸弹
        --别家出对子，如果选择的是对子，并且大于出的对子，则不拆炸弹
        --别家出三张，如果选择的是三张，并且大于出的三张，则不拆炸弹
        if (outCardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_0_EXCESS_1_CONTINUOUS and #cardIDs == 1) 
            or (outCardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_0_EXCESS_1_CONTINUOUS and #cardIDs == 2 and CardLogic.isSameCardPowerByIds(cardIDs))
            or (outCardType == CardEnum.CARDS_TYPE.CT_3_JUNKO_0_EXCESS_1_CONTINUOUS and #cardIDs == 3 and CardLogic.isSameCardPowerByIds(cardIDs)) then
            local powerOutCard = CardLogic.getCardPowerById(outCardIDs[1])
            local powerSelect = CardLogic.getCardPowerById(cardIDs[1])
            if powerSelect > powerOutCard then
                return clone(cardIDs)
            end
        end

        local lianNum = outCardType%1000
        local shunNum = math.floor(outCardType/1000)
        if shunNum == 1 and lianNum >= 5 and #cardIDs == 1 then
            local powerSelect = CardLogic.getCardPowerById(cardIDs[1])
            local maxPower = powerSelect + lianNum - 1
            if maxPower <= CardEnum.CARD_POWER.CP_A then
                local maxCardValue = CardLogic.getCardValueByPower(maxPower)
                local maxCardID = CardLogic.getCardIdByValueAndColor(maxCardValue, CardEnum.CARD_COLOR.CC_DIAMOND)
                local tempCardIDs = {}
                table.insert(tempCardIDs, cardIDs[1])
                table.insert(tempCardIDs, maxCardID)
                local tempHintCardIDs = self:getHintCardIDsFromHintDate(tempCardIDs)
                if #tempHintCardIDs > 0 then
                    return tempHintCardIDs
                end
            end
        end
    end
    return self:getHintCardIDsFromHintDate(cardIDs)
end

function GameData:getHintCardIDsFromHintDate(cardIDs)
    if not self._hintCards or #self._hintCards <= 0 then
        return {}
    end
    if  #cardIDs <= 0 then
        return {}
    end
    local tempHintCards = clone(self._hintCards)
    local tCardPowers = CardLogic.switchCardIDsToPowerKey(cardIDs)
    for _, hintCardIds in ipairs(tempHintCards) do
        local hintCardPowers = CardLogic.switchCardIDsToPowerKey(hintCardIds)
        local bHintThis = true
        for cardPower, v in pairs(tCardPowers) do
            if not hintCardPowers[cardPower] or  #v > #hintCardPowers[cardPower] then
                bHintThis = false
                break
            end
        end
        if bHintThis then
            return hintCardIds
        end
    end
    return {}
end

function GameData:getHintCardIDs()
    if self._hintIndex >= #self._hintCards then
        self._hintIndex = 1
    else
        self._hintIndex = self._hintIndex + 1
    end
    return clone(self._hintCards[self._hintIndex]) or {}
end

----------------------------------------
--手牌
----------------------------------------
function GameData:setHandCardIDs(seat, cardIDs)
    local handCardIDs = CardLogic.getCardIDsBySortType(self._sortType, cardIDs)
    self._handCard[seat] = handCardIDs
    if seat == CF.roomData:getSelfSeat() then
        self:setFirstHandData(true)
    end
end

function GameData:getHandCardIDs(seat)
    return self._handCard[seat]
end

function GameData:setHandCardNum(seat, num)
    self._leftCardNum[seat] = num
end

function GameData:getHandCardNum(seat)
    return self._leftCardNum[seat] or 0
end

function GameData:clearHandCardData()
    for i = 0 ,CF.roomData:getMaxPlayer() - 1 do
        self._handCard[i] = {}
    end
end

function GameData:deleteHandCardIDs(seat, delectCardIDs)
    local delCardIDs = clone(delectCardIDs)
    if not self._handCard[seat] or not delectCardIDs then
        return 
    end

    if CardLogic.isBackHandCards(self._handCard[seat]) then
        delCardIDs = {}
        for _ = 1, #delectCardIDs do
            table.insert(delCardIDs, 0)
        end
    end
    local _, newHandCardIDs = CardLogic.deleteCardIDs(self._handCard[seat], delCardIDs)
    self:setHandCardIDs(seat, newHandCardIDs)

    self:dispatchEvent( { name = self.EVENT_HANDCARD_UPDATE ,msg = {seat = seat, bDeleteCard = true}})
end

function GameData:dispatchUpdateHandCardEvent(seat)
    local msg = nil
    if seat ~= nil then
        msg = {seat = seat}
    end
    self:dispatchEvent( { name = self.EVENT_HANDCARD_UPDATE ,msg = msg})
end

function GameData:setSortType(sortType)
    self._sortType = sortType

    for seat = 0 ,CF.roomData:getMaxPlayer() - 1 do
        if self._handCard[seat] then
            local handCardIDs = CardLogic.getCardIDsBySortType(self._sortType, self._handCard[seat])
            self._handCard[seat] = handCardIDs
        end
    end

    self:dispatchEvent( { name = self.EVENT_HANDCARD_UPDATE })
end

function GameData:getSortType()
    return self._sortType
end

function GameData:resetRecordData()  
    for i = 0 ,CF.roomData:getMaxPlayer() - 1 do
        self._outCardsRecord[i] = {}
    end
end

----------------------------------------
--出牌
----------------------------------------
function GameData:setPreOutSeat(preOutSeat)
    self._preOutSeat = preOutSeat
end

function GameData:getPreOutSeat()
    return self._preOutSeat
end

function GameData:setPowerSeat(powerSeat)
    self._powerSeat = powerSeat
end

function GameData:getPowerSeat()
    return self._powerSeat
end

--设置当前倒计时玩家
function GameData:setClockSeat(clockSeat)
    self._clockSeat = clockSeat
end

function GameData:getClockSeat()
    return self._clockSeat
end

-------------------spideman
-- 设置等待接风的座位
function GameData:setWaitFollowSeat(serverseat)
    self._waitFollowSeat = serverseat
end

function GameData:getWaitFollowSeat()
    return self._waitFollowSeat
end

function GameData:setLightTenPower(power)
    self._lightTenPower = power
end

function GameData:getLightTenPower()
    return self._lightTenPower
end

function GameData:setSelfLightTen(bLight)
    self._selfLightTen = bLight
end

function GameData:getSelfLightTen()
    return self._selfLightTen or false
end

function GameData:resetFollowTurn()
    self._followTurn = 0
end

function GameData:addFollowTurn()
    self._followTurn = self._followTurn + 1
end

function GameData:getFollowTurn()
    return self._followTurn
end

function GameData:getNextHaveCards(serverseat)
    local perSeat =  (serverseat + CF.roomData:getMaxPlayer() - 1) % CF.roomData:getMaxPlayer()
    local afterSeat = (serverseat + 1) % CF.roomData:getMaxPlayer()
    for i = afterSeat, 3 do
        if #self._handCard[i] > 0 then
            return i
        end
    end
    for i = 0, perSeat do
        if #self._handCard[i] > 0 then
            return i
        end
    end
end

function GameData:setRanList(seat, rank)
    self._rankList[seat] = rank
end

function GameData:getRanList(seat)
    return self._rankList[seat]
end

function GameData:setLightTenType(seat, tType)
    self._lightTenType[seat] = tType
end

function GameData:getLightTenType(seat)
    return self._lightTenType[seat]
end

function GameData:clearWinLostData()
    self._winLostData:clearData()
end

function GameData:getWinLostData()
    return self._winLostData
end

-- 首发自己手牌事件（与 game.GameBase...GameData / QingShen 监听的事件名保持一致）
GameData.EVENT_FIRST_HAND_DATA = "EVENT_FIRST_HAND_DATA"

--- 本类直接继承 CF.ModuleBase，未继承公共 GameData 基类，此处本地实现首手牌标记
function GameData:setFirstHandData(firstHandMah)
    local changed = (self._firstHandData ~= firstHandMah)
    self._firstHandData = firstHandMah
    if changed and firstHandMah == true then
        self:dispatchEvent({ name = self.EVENT_FIRST_HAND_DATA })
    end
end

function GameData:getFirstHandData()
    return self._firstHandData or false
end

return GameData
