local GameData = CF.gameClass("GameData", "game.GameBase.Modules.GameLayer.GameData")
local CardEnum = CF.gameRequire("Define.CardEnum")
local CardLogic = CF.gameRequire("Logic.CardLogic")
local WinLostData = CF.gameRequire("Modules.GameLayer.WinLostData")
local KW_DISTANCE_WARNNING = 50

GameData.EVENT_HANDCARD_UPDATE = "EVENT_HANDCARD_UPDATE"
GameData.EVENT_GONGXIAN_CHANGED = "EVENT_GONGXIAN_CHANGED"
GameData.EVENT_CHAODI_BOOL_CHANGED = "EVENT_CHAODI_BOOL_CHANGED"
GameData.EVENT_PLAYER_SEAT_CHANGED = "EVENT_PLAYER_SEAT_CHANGED"
GameData.EVENT_GAME_MUT_CHANGED = "EVENT_GAME_MUT_CHANGED"
GameData.EVENT_GONGXIAN_CHANGED_NEW = "EVENT_GONGXIAN_CHANGED_NEW"

function GameData:ctor()
    GameData.super.ctor(self)
    self:initDatas()
end

function GameData:initDatas()
    GameData.super.initDatas(self)
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE
    self._roomHostSeat = -1 --
    self._haveMingPai = false --
    self._gameType = 0 --

    self._outCardsRecord = {}
    self._tOutCardIDs = {} --新增打出牌数据

    self._openCardID = 0

    self._handCard = {}
    self._jokerData = {}
    self._lianZhaBuDai = false

    self._bChaoDi = {}


    self._gongXian = {}
    self._localtion = {}

    self._preOutSeat = 0
    self._powerSeat = 0

    self._openCardFirstSeat = 0
    self._openCardSecondSeat = 0

    self._preconditionOutCards = false

    --高德配置
    self._openAMapConfig = false

    self._mapInfoData = {}

    self._sortType = CardLogic.SrotType.CardPower --排序方式
    self._hintCards = {} --提示数据
    self._hintIndex = 0 --提示顺序序号
    self._winMut = 1
    self._lostMut = 1
    self._winLostData = WinLostData.new()

    self._amapArrayList = {
        [0] = "",
        [1] = "",
        [2] = "",
        [3] = ""
    } --  高德地理数据

    self._bigSettleData = nil
    self._isHaveResult = false
    self._isGameOver = false
    self._playerEndState = false
    self._isShowSwapSeatBtn = false --换座按钮是否显示
    self._handCardsStates = {}  -- 手牌状态
    self._servicePay = 0
    self._showWinOrder = {} -- 是否显示标识
    self._bEightKing = false
    self._trustPunishTime = 20  -- 托管惩罚时间
end

function GameData:setGameEndState(endState)
    self._playerEndState = endState
end

function GameData:initEveryTime()
    GameData.super.initEveryTime(self)
    self._gameStep = CF.GameDefine.GAME_STEP.GAME_STEP_NONE

    self._localtion = {}
    self._openCardID = 0

    self._preconditionOutCards = false

    self:clearHandCardData()
    self:clearGongXian()
    self:clearWinLostMut()
    self:resetChaoDiData()
    self:resetRecordData()

    self._preOutSeat = CF.roomData:getMaxPlayer()
    self._powerSeat = CF.roomData:getMaxPlayer()

    self._sortType = CardLogic.SrotType.CardPower --排序方式
    self._hintCards = {}
    self._hintIndex = 0
    
    self:clearWinLostData()

    self._isHaveResult = false
    self._isGameOver = false

    self._showWinOrder = {} -- 是否显示标识
    self._trustPunishment = {}  -- 托管惩罚
    self._trustChastise = {}
end

function GameData:clearWinLostData()
    self._winLostData:clearData()
end

function GameData:getWinLostData()
    return self._winLostData
end

function GameData:setGameType(gameType)
    self._gameType = gameType
end

function GameData:getGameType()
    return self._gameType
end

function GameData:setHaveMingPai(haveMingPai)
    self._haveMingPai = haveMingPai
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

function GameData:setLianZhaBuDai(lianZhaBuDai)
    self._lianZhaBuDai = lianZhaBuDai
end

function GameData:getLianZhaBuDai()
    return self._lianZhaBuDai
end

----------------------------

function GameData:setAmapStrBySeat(seat, str)
    self._amapArrayList[seat] = str
end

function GameData:getAmapStrBySeat(seat)
    return self._amapArrayList[seat]
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

--
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
--翻牌数据
----------------------------------------
function GameData:setOpenCardID(openCardID)
    self._openCardID = openCardID
end

function GameData:getOpenCardID(openCardID)
    return self._openCardID
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
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._tOutCardIDs[i] = {}
    end
end

function GameData:addOutCardRecord(nSeat, outGroup)
    local cards = clone(outGroup)
    if not self._outCardsRecord[nSeat] then
        self._outCardsRecord[nSeat] = {}
    end
    table.insert(self._outCardsRecord[nSeat], cards)
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
        if
            (outCardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS and #cardIDs == 1) or
                (outCardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_1_CONTINUOUS and #cardIDs == 2 and CardLogic.isSameCardPowerByIds(cardIDs)) or
                (outCardType == CardEnum.CARDS_TYPE.CT_3_JUNKO_1_CONTINUOUS and #cardIDs == 3 and CardLogic.isSameCardPowerByIds(cardIDs))
         then
            local powerOutCard = CardLogic.getCardPowerById(outCardIDs[1])
            local powerSelect = CardLogic.getCardPowerById(cardIDs[1])
            if powerSelect > powerOutCard then
                return clone(cardIDs)
            end
        end

        local lianNum = outCardType % 100
        local shunNum = math.floor(outCardType / 100)
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
    if #cardIDs <= 0 then
        return {}
    end
    local tempHintCards = clone(self._hintCards)
    local tCardPowers = CardLogic.switchCardIDsToPowerKey(cardIDs)
    for _, hintCardIds in ipairs(tempHintCards) do
        local hintCardPowers = CardLogic.switchCardIDsToPowerKey(hintCardIds)
        local bHintThis = true
        for cardPower, v in pairs(tCardPowers) do
            if not hintCardPowers[cardPower] or #v > #hintCardPowers[cardPower] then
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
function GameData:setHandCardsState(nLocalSeat, bOpen)
    if self._handCardsStates == nil then
        self._handCardsStates = {}
    end
    self._handCardsStates[nLocalSeat] = bOpen
end

function GameData:getHandCardsState(nLocalSeat)
    if self._handCardsStates == nil then
        return false
    end
    return self._handCardsStates[nLocalSeat] or false
end

function GameData:clearShowWinOrder()
    self._showWinOrder = {}
end

function GameData:setShowWinOrder(nLocalSeat, nIndex)
    if self._showWinOrder == nil then
        self._showWinOrder = {}
    end
    self._showWinOrder[nLocalSeat] = nIndex
end

function GameData:getShowWinOrder(nLocalSeat)
    if self._showWinOrder == nil then
        return nil
    end
    return self._showWinOrder[nLocalSeat]
end

function GameData:setHandCardIDs(seat, cardIDs)
    local handCardIDs = CardLogic.getCardIDsBySortType(self._sortType, cardIDs)
    self._handCard[seat] = handCardIDs
    if seat == CF.roomData:getSelfSeat() and self.setFirstHandData then
        self:setFirstHandData(true)
    end
end

function GameData:getHandCardIDs(seat)
    return self._handCard[seat]
end

function GameData:getHandCardNum(seat)
    if not self._handCard[seat] then
        return 0
    end
    return #self._handCard[seat]
end

function GameData:clearHandCardData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
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

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE, msg = {seat = seat, bDeleteCard = true}})
end

function GameData:dispatchUpdateHandCardEvent(seat)
    local msg = nil
    if seat ~= nil then
        msg = {seat = seat}
    end
    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE, msg = msg})
end

function GameData:setSortType(sortType)
    self._sortType = sortType

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        if self._handCard[seat] then
            local handCardIDs = CardLogic.getCardIDsBySortType(self._sortType, self._handCard[seat])
            self._handCard[seat] = handCardIDs
        end
    end

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE})
end

function GameData:getSortType()
    return self._sortType
end

function GameData:swapPlayerSeat(nowseat, otherseat)
    local tempcards1 = clone(self:getHandCardIDs(otherseat))
    local tempcards2 = clone(self:getHandCardIDs(nowseat))
    self:setHandCardIDs(otherseat, tempcards2)
    self:setHandCardIDs(nowseat, tempcards1)

    --高德位置互换
    local str1 = self:getAmapStrBySeat(otherseat)
    local str2 = self:getAmapStrBySeat(nowseat)
    self:setAmapStrBySeat(otherseat, str2)
    self:setAmapStrBySeat(nowseat, str1)

    self:dispatchEvent({name = self.EVENT_HANDCARD_UPDATE})
    self:dispatchEvent(
        {
            name = self.EVENT_PLAYER_SEAT_CHANGED,
            msg = {nowseat = nowseat, otherseat = otherseat}
        }
    )
end

function GameData:setGongXianFen(seat, gongXianFen)
    local oldScore = self._gongXian[seat] or 0
    local changedGong = gongXianFen - oldScore
    self._gongXian[seat] = gongXianFen
    if CF.roomData:isNewUI() then
        self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED_NEW, msg = {seat = seat, changedGong = changedGong}})
    else
        self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED, msg = {seat = seat, changedGong = changedGong}})
    end
end

function GameData:getGongXianFen(seat)
    return self._gongXian[seat] or 0
end

function GameData:clearWinLostMut()
    self._winMut = 1
    self._lostMut = 1
    self:dispatchEvent({name = self.EVENT_GAME_MUT_CHANGED,
                        msg = {
                            isPlayWin = false, iWinTime = self._winMut , iLostTime = self._lostMut,fMut = 1
                        }})
end

function GameData:clearGongXian()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._gongXian[i] = 0
    end
end

----------------------------------------
--抄底
----------------------------------------
function GameData:setChaoDiBool(seat, bChaoDi)
    self._bChaoDi[seat] = bChaoDi

    self:dispatchEvent({name = self.EVENT_CHAODI_BOOL_CHANGED})
end

function GameData:getChaoDiBool(seat)
    return self._bChaoDi[seat]
end

function GameData:resetChaoDiData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        self._bChaoDi[i] = false
    end
end

function GameData:resetRecordData()
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
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

function GameData:setAMapOpen(bhaveAMap)
    if bhaveAMap ~= nil then
        self._openAMapConfig = bhaveAMap
    end
end

function GameData:getMapInfoData()
    return self._mapInfoData
end

function GameData:addMapInfoData(seat, tData)
    self._mapInfoData[seat] = tData or {}
end

function GameData:deleteMapInfoData(seat)
    if self._mapInfoData[seat] then
        self._mapInfoData[seat] = nil
    end
end

function GameData:clearMapInfoData()
    self._mapInfoData = nil
end

function GameData:isSameLocation(seat)
    for first, second in pairs(self._localtion) do
        if seat ~= first then
            local dis = GameData.calLantitudeLongitudeDist(self._localtion[seat]["longitude"], self._localtion[seat]["latitude"], second["longitude"], second["latitude"])
            if dis <= KW_DISTANCE_WARNNING then
                return true
            end
        end
    end
    return false
end

--度数转弧度
function GameData.rad(d)
    return d * math.pi / 180.0
end

--经纬度算距离
function GameData.calLantitudeLongitudeDist(lon1, lat1, lon2, lat2)
    local EARTH_RADIUS = 6378137
    local radLat1 = GameData.rad(lat1)
    local radLat2 = GameData.rad(lat2)

    local radLon1 = GameData.rad(lon1)
    local radLon2 = GameData.rad(lon2)

    if radLat1 < 0 then
        radLat1 = math.pi / 2 + math.abs(radLat1) --// south
    end
    if radLat1 > 0 then
        radLat1 = math.pi / 2 - math.abs(radLat1) --// north
    end
    if radLon1 < 0 then
        radLon1 = math.pi * 2 - math.abs(radLon1) --// west
    end
    if radLat2 < 0 then
        radLat2 = math.pi / 2 + math.abs(radLat2) --// south
    end
    if radLat2 > 0 then
        radLat2 = math.pi / 2 - math.abs(radLat2) --// north
    end
    if radLon2 < 0 then
        radLon2 = math.pi * 2 - math.abs(radLon2) --// west
    end

    local x1 = EARTH_RADIUS * math.cos(radLon1) * math.sin(radLat1)
    local y1 = EARTH_RADIUS * math.sin(radLon1) * math.sin(radLat1)
    local z1 = EARTH_RADIUS * math.cos(radLat1)

    local x2 = EARTH_RADIUS * math.cos(radLon2) * math.sin(radLat2)
    local y2 = EARTH_RADIUS * math.sin(radLon2) * math.sin(radLat2)
    local z2 = EARTH_RADIUS * math.cos(radLat2)

    local d = math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2))
    --  //余弦定理求夹角
    local theta = math.acos((EARTH_RADIUS * EARTH_RADIUS + EARTH_RADIUS * EARTH_RADIUS - d * d) / (2 * EARTH_RADIUS * EARTH_RADIUS))
    local dist = theta * EARTH_RADIUS
    return dist
end

--改用高德定位数据判断距离
function GameData:isSameLocationByMap(seat)
    local judgeLongitude = tonumber(self._mapInfoData[seat]["longitude"] or -1)
    local judgeLatitude = tonumber(self._mapInfoData[seat]["latitude"] or -1)
    print("seat_" .. seat .. "_judgeLongitude1_" .. judgeLongitude .. "_judgeLatitude1_" .. judgeLatitude)
    if judgeLongitude == -1 or judgeLatitude == -1 then
        return false
    end
    for first, second in pairs(self._mapInfoData) do
        if seat ~= first and second["longitude"] ~= -1 and second["latitude"] ~= -1 then
            print("seat_" .. seat .. "_judgeLongitude2_" .. second["longitude"] .. "_judgeLatitude2_" .. second["latitude"])
            local dis = GameData.calLantitudeLongitudeDist(judgeLongitude, judgeLatitude, second["longitude"], second["latitude"])
            if dis <= KW_DISTANCE_WARNNING then
                return true
            end
        end
    end
    return false
end

function GameData:setBigSettleData(data)
    self._bigSettleData = data
end

function GameData:getBigSettleData()
    return self._bigSettleData
end

function GameData:setIsHaveResult(isHaveResult)
    self._isHaveResult = isHaveResult or false
end

function GameData:getIsHaveResult()
    return self._isHaveResult
end

--相同连炸判断线数比较大小 901>504>405
function GameData:isLianZhanCompareWithLian()
    return false
end

--一张大王加一张小王是否可以当对子出
function GameData:isOneBJAndOneSJCanDui()
    return false
end

--四王是最大的7线
function GameData:isSiWangIsBig7Xian()
    return false
end

--四王无癞子是最大的8线 (暂定不支持)
function GameData:isSiWangIsBig8Xian()
    return false
end

function GameData:IsInTable(val, tb)
    for _, v in pairs(tb) do
        if val == v then
            return true
        end
    end
    return false
end

function GameData:setIsShowSwapSeatBtn(isShowSwapSeatBtn)
    if type(isShowSwapSeatBtn) ~= "boolean" then
        return
    end
    self._isShowSwapSeatBtn = isShowSwapSeatBtn
end

function GameData:isShowSwapSeatBtn()
    return self._isShowSwapSeatBtn
end

function GameData:setServicePay(servicePay)
    self._servicePay = servicePay
end

function GameData:getServicePay()
    return self._servicePay
end

function GameData:setEightKing(bEightKing)
    self._bEightKing = bEightKing
end

function GameData:getEightKing()
    return self._bEightKing
end

function GameData:setTrustPunishTime(trustPunishTime)
    self._trustPunishTime = trustPunishTime
end

function GameData:getTrustPunishTime()
    return self._trustPunishTime
end

return GameData
�Q