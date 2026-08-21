local GameData = NG.GAME.gameClass("GameData", NG.ModuleBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local CardData = NG.GAME.gameRequire("Modules.GameMain.Data.CardData")

function GameData:ctor()
    GameData.super.ctor(self)

    self:initData()
end

function GameData:initData()
    self._cardDatas = {}
    self._gameStep = GameMainDefine.ENUM_GAME_STEP.GAME_STEP_NONE -- 游戏步骤
    self._seatPower = {} -- 权限，叫分阶段是叫分权限，出牌阶段是出牌权限
    self._prePlayerSeat = 0 -- 上一次出牌人的位置
    self._nowPlayerSeat = 0 -- 当前出牌人的位置
    self._baseCards = {} -- 底牌数据
    self._startGameGold = 0 -- 开始游戏金币数额
    self._selectOutCards = nil
    self._gameStep = GameMainDefine.ENUM_GAME_STEP.GAME_STEP_NONE -- 游戏步骤
    self._bankerSeat = GameMainDefine.SEAT_NONE -- 庄(地主)位置
    self._seatPower = {} -- 权限，叫分阶段是叫分权限，出牌阶段是出牌权限
    self._prePlayerSeat = 0 -- 上一次出牌人的位置
    self._nowPlayerSeat = 0 -- 当前出牌人的位置
    self._baseCards = {} -- 底牌数据
    self._spaceBase = {} -- 特殊底
    self._mult = 0 -- 所有倍数
    self._baseMult = 0 -- 基础倍数
    self._robMult = 0 -- 抢地主倍数
    self._doubleMult = 0 -- 加倍倍数
    self._boomMult = 0 -- 炸弹倍数
    self._chunTianMult = 0 -- 春天倍数
    self._brokes = {} -- 封顶数据
    self._caps = {} -- 破产数据
    self._result = {} -- 结算数据
    self.baseScore = 0 -- 底分
    self._prePlayCardSeat = -1
    self._isStart = false -- 是否开局
    self._serVicePay = 0
    self._maxWin = 0
    self._isTrustArr = {}
end

function GameData:clear()
    self:initData()
end

function GameData:getCardData(localSeat)
    if not self._cardDatas[localSeat] then
        self._cardDatas[localSeat] = CardData.new()
    end
    return self._cardDatas[localSeat]
end

function GameData:setHandCards(localSeat, nCards)
    self:getCardData(localSeat):setHandCards(nCards)
end

function GameData:addHandCards(localSeat, nCards)
    self:getCardData(localSeat):addHandCards(nCards)
end

function GameData:delHandCards(localSeat, nCards)
    self:getCardData(localSeat):delHandCards(nCards)
end

function GameData:setOutCards(localSeat, nCards, nTypeID, nPower)
    self:getCardData(localSeat):setOutCards(nCards, nTypeID, nPower)
end

function GameData:getOutCards(localSeat)
    return self:getCardData(localSeat):getOutCards()
end

function GameData:getHandCards(localSeat)
    return self:getCardData(localSeat):getHandCards()
end

function GameData:getHandCardsCount(localSeat)
    local handCards = self:getCardData(localSeat):getHandCards()
    return #handCards
end

function GameData:setPassState(localSeat, bPass)
    self:getCardData(localSeat):setPassState(bPass)
end

function GameData:getPassState(localSeat)
    return self:getCardData(localSeat):getPassState()
end

function GameData:setOutBombCnt(localSeat, cnt)
    self:getCardData(localSeat):setOutBombCnt(cnt)
end

function GameData:addOutBombCnt(localSeat, cnt)
    self:getCardData(localSeat):addOutBombCnt(cnt)
end

function GameData:getOutBombCnt(localSeat)
    return self:getCardData(localSeat):getOutBombCnt()
end

function GameData:setGameStep(gamestep)
    self._gameStep = gamestep
end

function GameData:getGameStep()
    return self._gameStep
end

function GameData:setBankerSeat(bankerSeat)
    self._bankerSeat = bankerSeat
end

function GameData:getBankerSeat()
    return self._bankerSeat
end

function GameData:setPower(localSeat, power)
    self._seatPower[localSeat] = power
end

function GameData:getPower(localSeat)
    return self._seatPower[localSeat]
end

function GameData.getNextSeat(localSeat)
    local next = localSeat + 1
    if next >= GameMainDefine.MAX_PLAYER then
        next = 0
    end
    return next
end

function GameData:setPrePlayerSeat(localSeat)
    self._prePlayerSeat = localSeat
end

function GameData:getPrePlayerSeat()
    return self._prePlayerSeat
end

function GameData:setNowPlayerSeat(localSeat)
    self._nowPlayerSeat = localSeat
end

function GameData:getNowPlayerSeat()
    return self._nowPlayerSeat
end

function GameData:setBaseCards(nCards)
    self._baseCards = nCards
end

function GameData:getBaseCards()
    return self._baseCards
end

function GameData:getBaseCardsCnt()
    return #self._baseCards
end

function GameData:setStartGameGold(gold)
    self._startGameGold = gold
end

function GameData:getStartGameGold()
    return self._startGameGold
end

function GameData:setSelectOutCards(cards, cardType, cardPower)
    self._selectOutCards = {outCard = cards, cardType = cardType, cardPower = cardPower}
    dump(self._selectOutCards, "self._selectOutCards")
end

function GameData:getSelectOutCards()
    return self._selectOutCards
end

function GameData:setTipData()
    local tipLogic = NG.goldGame:getModule("GameMain"):getTipLogic()
    local selfHandCards = self:getHandCards(GameMainDefine.SELF_LOCAL_SEAT)
    local prePlayerSeat = self:getPrePlayerSeat()
    local preOutCard = self:getOutCards(prePlayerSeat)
    if preOutCard and preOutCard.nCards and #preOutCard.nCards > 0 then
        -- dump(selfHandCards,"selfHandCards")
        -- dump(preOutCard.nCards,"preOutCard")
        self._tipData = tipLogic:getTipCard(selfHandCards, preOutCard.nCards)
        -- dump(self._tipData, "tipData")
    else
        local opt = {
            cards = selfHandCards,
            power = 0,
            cardType = 0
        }
        local popCardType = tipLogic.gameLogic:calculateCardType(selfHandCards, false, opt)
        if opt.cardType > 0 then
            self._tipData = {
                tipArr = {selfHandCards},
                powerArr = {opt}
            }
        else
            self._tipData = nil
        end
    end
    self._tipDataIndex = 0
end
-- 提示数据
function GameData:getTipData()
    return self._tipData
end

-- 提示数据
function GameData:getCurrentTipData()
    if self._tipData and self._tipData.tipArr then
        self._tipDataIndex = self._tipDataIndex + 1
        if self._tipDataIndex > #self._tipData.tipArr then
            self._tipDataIndex = 1
        end
        -- print("self._tipDataIndex",self._tipDataIndex)        
        return self._tipData.powerArr[self._tipDataIndex], self._tipData.tipArr[self._tipDataIndex]
    end
    return nil
end

-- 设置特殊底
function GameData:setSpaceBase(data)
    self._spaceBase = data
end

-- 获得特殊底
function GameData:getSpaceBase()
    return self._spaceBase
end

-- 设置基础倍数
function GameData:setBaseMult(baseMult)
    self._baseMult = baseMult
end

-- 获得基础倍数
function GameData:getBaseMult()
    return self._baseMult
end

-- 设置抢地主倍数
function GameData:setRobMult(robMult)
    self._robMult = robMult
end

-- 获得抢地主倍数
function GameData:getRobMult()
    return self._robMult
end

-- 设置加倍倍数
function GameData:setDoubleMult(data)
    self._doubleMult = data
end

-- 获得加倍倍数
function GameData:getDoubleMult()
    return self._doubleMult
end

-- 设置服务下发的所有倍数
function GameData:setMult(mult)
    self._mult = mult
end

-- 获得服务下发的所有倍数
function GameData:getMult()
    return self._mult
end

-- 设置炸弹倍数
function GameData:setBoomMult(boomMult)
    self._boomMult = boomMult
end

-- 获得炸弹倍数
function GameData:getBoomMult()
    return self._boomMult
end

-- 设置春天倍数
function GameData:setChunTianMult(chunTianMult)
    self._chunTianMult = chunTianMult
end

-- 获得春天倍数
function GameData:getChunTianMult()
    return self._chunTianMult
end

-- 设置破产数据
function GameData:setBroke(brokes)
    self._brokes = brokes
end

-- 获得破产数据
function GameData:getBroke()
    return self._brokes
end

-- 设置封顶数据
function GameData:setCap(caps)
    self._caps = caps
end

-- 获得封顶数据
function GameData:getCap()
    return self._caps
end

-- 获取结算信息
function GameData:setResult(result)
    self._result = result
end

-- 设置玩家结算信息
function GameData:getResult()
    return self._result
end

function GameData:setBase(baseScore)
    self._baseScore = baseScore
end

function GameData:getBase()
    return self._baseScore
end

function GameData:setPrePlayCardSeat(localSeat)
    self._prePlayCardSeat = localSeat
end

function GameData:getPrePlayCardSeat()
    return self._prePlayCardSeat
end

function GameData:setGameStart(isStart)
    self._isStart = isStart
end

function GameData:getGameStart()
    return self._isStart
end

function GameData:setServicePay(nPay)
    self._serVicePay = nPay
end

function GameData:getServicePay()
    return self._serVicePay
end

function GameData:setMaxWin(maxWin)
    self._maxWin = maxWin
end

function GameData:getMaxWin()
    return self._maxWin
end

function GameData:setTrustByLocalSeat(localSeat, isTrust)
    self._isTrustArr[localSeat] = isTrust or false
end

function GameData:getTrustByLocalSeat(localSeat)
    return self._isTrustArr[localSeat] or false
end

return GameData
  Z%  