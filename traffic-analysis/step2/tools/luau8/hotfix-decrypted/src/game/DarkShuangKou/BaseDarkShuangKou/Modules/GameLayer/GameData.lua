local GameData = CF.gameClass("GameData", CF.ModuleBase)
local CardLogic = CF.gameRequire("Logic.CardLogic")

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    self._servicePay = 0
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._hintCards = {} --提示数据
    self._handCard = {}
    self._openCard = {}
    self._powers = {[0] = -1, [1] = -1, [2] = -1, [3] = -1} -- 0表示出牌完成，1表示可以出牌，-1为初始化状态
    self._trustData = {[0] = false, [1] = false, [2] = false, [3] = false}
    self._stepClock = 0
    self._tOutCardIDs = {} --打出牌数据
    self._tOutCardTypes = {} --打出牌类型

    self._winLostData = {}
    self:clearWinLostData()
    self._reviveState = {}

    self._bigSettleData = nil
    self._round = 0
    self._totalRound = 0
    self._gameRevenue = {}
    self._gameInfo = {}
    self._firstHandData = false
end

function GameData:initEveryTime()
    self._servicePay = 0
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._hintCards = {}
    self:clearHandCardData()
    self._powers = {[0] = -1, [1] = -1, [2] = -1, [3] = -1}
    self._stepClock = 0
    self._tOutCardIDs = {} --打出牌数据
    self._tOutCardTypes = {} --打出牌类型

    self:clearWinLostData()
    self._reviveState = {}
    self._gameRevenue = {}
    self._firstHandData = false
end

----------------------------------------
--手续费
----------------------------------------
function GameData:setServicePay(servicePay)
    self._servicePay = servicePay
end

function GameData:getServicePay()
    return self._servicePay
end

----------------------------------------
--游戏步骤
----------------------------------------
function GameData:setGameStep(gameStep)
    self._gameStep = gameStep
end

function GameData:getGameStep()
    return self._gameStep
end

----------------------------------------
--提示牌，只存一个结果
----------------------------------------
function GameData:setHintCards(hintCards)
    self._hintCards = hintCards
end

function GameData:getHintCards()
    return self._hintCards
end

function GameData:clearHintCards()
    self._hintCards = {}
end

function GameData:getHintCardIDs()
    return clone(self._hintCards) or {}
end

----------------------------------------
--出牌权限
----------------------------------------
function GameData:setPowers(powers)
    self._powers = powers
end

function GameData:getPowerBySeat(seat)
    return self._powers[seat] or 0
end

----------------------------------------
--时钟
----------------------------------------
function GameData:setClock(time)
    self._stepClock = os.time() + time
end

function GameData:getClock()
    return self._stepClock - os.time()
end

function GameData:clearClock()
    self._stepClock = 0
end

----------------------------------------
--手牌
----------------------------------------
function GameData:setHandCardIDs(seat, cardIDs, bSort)
    bSort = bSort == nil and true or bSort
    local handCardIDs = cardIDs
    if bSort then
        handCardIDs = CardLogic.getCardIDsSort(cardIDs)
    end
    self._handCard[seat] = handCardIDs
    if seat == CF.roomData:getSelfSeat() then
        self:setFirstHandData(true)
    end
end

function GameData:getHandCardIDs(seat)
    return self._handCard[seat] or {}
end

function GameData:clearHandCardData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._handCard[i] = {}
    end
end

function GameData:setOpenCardIDs(seat, cardIDs, bSort)
    bSort = bSort == nil and true or bSort
    local handCardIDs = cardIDs
    if bSort then
        handCardIDs = CardLogic.getCardIDsSort(cardIDs)
    end
    self._openCard[seat] = handCardIDs
end

function GameData:getOpenCardIDs(seat)
    return self._openCard[seat]
end

function GameData:clearOpenCardData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._openCard[i] = {}
    end
end

----------------------------------------
--轮次数据
----------------------------------------
function GameData:setRoundInfo(round, totalRound)
    if round then
        self._round = round
    end
    if totalRound then
        self._totalRound = totalRound
    end
end

function GameData:getRoundInfo()
    return self._round, self._totalRound
end

----------------------------------------
--结束数据
----------------------------------------
function GameData:setWinLostData(data)
    self._winLostData = data
end

function GameData:clearWinLostData()
    self._winLostData = {}
end

function GameData:getWinLostData()
    return self._winLostData
end

----------------------------------------
--出牌数据
----------------------------------------
function GameData:setOutCard(ucOutCards, ucOutCardType)
    self._tOutCardIDs = ucOutCards
    self._tOutCardTypes = ucOutCardType
end

function GameData:getOutCard()
    return self._tOutCardIDs, self._tOutCardTypes
end

function GameData:clearOutCardData()
    self._tOutCardIDs = {}
    self._tOutCardTypes = {}
end

----------------------------------------
--复活状态
----------------------------------------
function GameData:setReviveState(iState)
    self._reviveState = iState
end

function GameData:getReviveState(seat) -- 服务端位置
    return self._reviveState[seat] or CF.GameDefine.tagReviveState.REVIVE_STATE_LIVE
end

----------------------------------------
--大结束数据
----------------------------------------
function GameData:setBigSettleData(data)
    self._bigSettleData = data
end

function GameData:getBigSettleData()
    return self._bigSettleData
end

----------------------------------------
--托管数据
----------------------------------------
function GameData:setTrustData(seat, bTrust)
    self._trustData[seat] = bTrust
end

function GameData:getTrustData(seat)
    return self._trustData[seat] or false
end

function GameData:clearTrustData()
    self._trustData = {[0] = false, [1] = false, [2] = false, [3] = false}
end

----------------------------------------
--流水数据
----------------------------------------
function GameData:setGameRevenue(data)
    self._gameRevenue = data
end

function GameData:getGameRevenue()
    return self._gameRevenue
end

----------------------------------------
--游戏数据
----------------------------------------
function GameData:setGameInfo(data)
    -- iBaseScore = 0
    -- iRound = 0
    -- iTotalRound = 0
    -- iMaximumLimit = 0
    -- iTableFee = 0
    self._gameInfo = data
end

function GameData:getGameInfo()
    return self._gameInfo
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
M