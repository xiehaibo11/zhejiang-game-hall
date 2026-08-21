local GameData = NG.GAME.gameClass("GameData", NG.ModuleBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local CardData = NG.GAME.gameRequire("Modules.GameMain.Data.CardData")
local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")

GameData.EVENT_BASESCORE_CHANGED = "EVENT_BASESCORE_CHANGED"
--手牌区
GameData.EVENT_MAHLAYER_SET_HANDMAH_COUNT = "EVENT_MAHLAYER_SET_HANDMAH_COUNT"
GameData.EVENT_MAHLAYER_FLUSH_HANDMAH = "EVENT_MAHLAYER_FLUSH_HANDMAH"
GameData.EVENT_MAHLAYER_ADD_HANDMAH = "EVENT_MAHLAYER_ADD_HANDMAH"
GameData.EVENT_MAHLAYER_DELETE_HANDMAH = "EVENT_MAHLAYER_DELETE_HANDMAH"
GameData.EVENT_MAHLAYER_DELETE_HANDMAH_INDEX = "EVENT_MAHLAYER_DELETE_HANDMAH_INDEX"
GameData.EVENT_MAHLAYER_FLUSH_DFMAH = "EVENT_MAHLAYER_FLUSH_DFMAH"
GameData.EVENT_MAHLAYER_DESTROY_HANDMAH = "EVENT_MAHLAYER_DESTROY_HANDMAH"
GameData.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT = "EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT"
GameData.EVENT_MAHLAYER_FLUSH_HANDMAH_BAO = "EVENT_MAHLAYER_FLUSH_HANDMAH_BAO"
--comb区
GameData.EVENT_MAHLAYER_SET_COMB = "EVENT_MAHLAYER_SET_COMB"
GameData.EVENT_MAHLAYER_CLEAR_COMB = "EVENT_MAHLAYER_CLEAR_COMB"
GameData.EVENT_MAHLAYER_REFRESH_COMB = "EVENT_MAHLAYER_REFRESH_COMB"
--废牌区
GameData.EVENT_MAHLAYER_OUTMAH_TYPE = "EVENT_MAHLAYER_OUTMAH_TYPE"
GameData.EVENT_MAHLAYER_FLUSH_OUTMAH = "EVENT_MAHLAYER_FLUSH_OUTMAH"
GameData.EVENT_MAHLAYER_ADD_OUTMAH = "EVENT_MAHLAYER_ADD_OUTMAH"
GameData.EVENT_MAHLAYER_DESTROY_OUTMAH = "EVENT_MAHLAYER_DESTROY_OUTMAH"
GameData.EVENT_MAHLAYER_DELETE_LAST_OUTMAH = "EVENT_MAHLAYER_DELETE_LAST_OUTMAH"
--花牌区
GameData.EVENT_MAHLAYER_SET_FLOWER = "EVENT_MAHLAYER_SET_FLOWER"
GameData.EVENT_MAHLAYER_CLEAR_FLOWER = "EVENT_MAHLAYER_CLEAR_FLOWER"
GameData.EVENT_MAHLAYER_ADD_FLOWER = "EVENT_MAHLAYER_ADD_FLOWER"
--胡牌区-血流
GameData.EVENT_MAHLAYER_SET_HU_XUELIU = "EVENT_MAHLAYER_SET_HU_XUELIU"
GameData.EVENT_MAHLAYER_CLEAR_HU_XUELIU = "EVENT_MAHLAYER_CLEAR_HU_XUELIU"
GameData.EVENT_MAHLAYER_ADD_HU_XUELIU = "EVENT_MAHLAYER_ADD_HU_XUELIU"
--开牌区
GameData.EVENT_MAHLAYER_OPEN_MAH = "EVENT_MAHLAYER_OPEN_MAH"
GameData.EVENT_MAHLAYER_CLEAR_OPEN_MAH = "EVENT_MAHLAYER_CLEAR_OPEN_MAH"
--财神区
GameData.EVENT_MAHLAYER_JOKER_MAH = "EVENT_MAHLAYER_JOKER_MAH"
--剩余手牌区
GameData.EVENT_MAHLAYER_SURPLUS_MAH = "EVENT_MAHLAYER_SURPLUS_MAH"
--胡牌
GameData.EVENT_MAHLAYER_SET_HU_MAHS = "EVENT_MAHLAYER_SET_HU_MAHS"
GameData.EVENT_MAHLAYER_CLEAR_HU_MAHS = "EVENT_MAHLAYER_CLEAR_HU_MAHS"
--听牌
GameData.EVENT_MAHLAYER_SET_TING_MAHS = "EVENT_MAHLAYER_SET_TING_MAHS"
GameData.EVENT_MAHLAYER_CLEAR_TING_MAHS = "EVENT_MAHLAYER_CLEAR_TING_MAHS"
GameData.EVENT_MAHLAYER_LAST_TING_MAHS = "EVENT_MAHLAYER_LAST_TING_MAHS"

GameData.EVENT_MAHLAYER_ACTION_MAH = "EVENT_MAHLAYER_ACTION_MAH"

GameData.EVENT_BANKER_CHANGED = "EVENT_BANKER_CHANGED"
GameData.EVENT_BAI_BIAN_DATA = "EVENT_BAI_BIAN_DATA"
GameData.EVENT_BIAN_PAI_SYN = "EVENT_BIAN_PAI_SYN"
GameData.EVENT_HU_CARD_INFO = "EVENT_HU_CARD_INFO"
GameData.EVENT_EXCLUDE_MAH = "EVENT_EXCLUDE_MAH"
GameData.EVENT_BANKRUP = "EVENT_BANKRUP"

function GameData:ctor()
    GameData.super.ctor(self)
    self._bankerSeatId = -1
    self._actionID = 0
    self._playPower = false
    self._huPower = false
    self._lastPlayMah = 0
    self._lastPlaySeat = NG.GAME.roomTableData:getMaxPlayer()
    self._tempMahIdToBackRoom = nil
    self._curGameStep = 0

    self._previewShow = false
    self._previewMah = 0

    self._huSeats = {}
    self._huMahs = {}
    self._huDanFang = {}
    self._excludeMahs = {}

    self._firstHandMah = false
    self._defaultEastWindPos = NG.GAME.roomTableData:getMaxPlayer()
    self._laoZhuangNum = 0

    self._isShowQuanFeng = false --显示圈风标识
    self._nQuanFeng = 1

    --是否把财神标记改为花牌标记
    self._isJokerToFlower = false
    --记录刚刚打出去的听牌可以胡的牌数据
    self._lastTingData = {}

    self._autoHu = false
    self._baiBianData = {}
    self._lastBaiBianInfo = nil

    self._huCardInfo = {}
    self:initMahData()


    --poker
    self:initData()
end

function GameData:initData()
    self._gameStep = GameMainDefine.ENUM_GAME_STEP.GAME_STEP_NONE -- 游戏步骤
    self._startGameGold = 0 -- 开始游戏金币数额
    self._result = {} -- 结算数据
    self._baseScore = 1 -- 底分
    self._isStart = false -- 是否开局
    self._serVicePay = 0
    self._maxWin = 0
    self._isTrustArr = {}
    self._brokenState = {}
end

function GameData:clear()
    self:initData()
end

function GameData:setGameStep(gamestep)
    self._gameStep = gamestep
end

function GameData:getGameStep()
    return self._gameStep
end

function GameData:setStartGameGold(gold)
    self._startGameGold = gold
end

function GameData:getStartGameGold()
    return self._startGameGold
end
function GameData:isHued(seat)
    return #(self:getHuMahDataXueLiu(seat) or {}) > 0
end


-- 获取结算信息
function GameData:setResult(result)
    self:setData("result", result)
end

-- 设置玩家结算信息
function GameData:getResult()
    return self:getData("result")
end

function GameData:setBase(baseScore)
    self._baseScore = baseScore
end

function GameData:getBase()
    return self._baseScore
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

function GameData:setBrokenState(seat, data)
    self._brokenState[seat] = data.nState
    self:dispatchEvent({ name = self.EVENT_BANKRUP, data = data })
end

function GameData:getBrokenState(seat)
    return self._brokenState[seat]
end



function GameData:initMahData()

    self._huanPaiMahIDs = {}
    --牌堆数量
    self._mahSurplusCounts = 0
    --手牌最大的手牌数
    self._maxHandMahCounts = NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN
    self._handMahData = {}
    self._handDfData = {}
    self._handLimitMahData = {}
    self._combMahData = {}
    self._flowerMahData = {}
    self._huMahDataXueLiu = {}
    --开牌数据
    self._openMahCounts = 0
    self._openMahData = {}
    --财神数据
    self._jokerMahCounts = 0
    self._jokerMahData = {}
    self._insteadMahData = {}
    self._outCardDataSquare = {}
    self._outCardDataNoSquare = {}
    --胡牌
    self._huHandMahData = {}
    self._huMahData = {}

    --听牌数据
    self._tingMahs = {}
    self._canHuInfo = {}

    self._exData = {}

    -- 哪些牌打出牌可能会承包
    self._preBaoMahData = {}

    for i = 0, 3 do
        self._handMahData[i] = {}
        for j = 1, self._maxHandMahCounts do
            self._handMahData[i][j] = NG.GAME.GameDefine.MAH_VALUE.BACK
        end

        self._handDfData[i] = nil
        self._handLimitMahData[i] = {}
        self._outCardDataSquare[i] = {}
        self._preBaoMahData[i] = {}
    end

    for i = 1, self._jokerMahCounts do
        self._jokerMahData[i] = NG.GAME.GameDefine.MAH_VALUE.BACK
    end

    --临时麻将保存数据
    self._tempMahSaveData = {}

    self._autoHu = false
    self._baiBianData = {} --{{bValue=0x11,nCnt=3}}
    self._lastBaiBianInfo = nil
end

--每小局游戏需要更新的数据
function GameData:initEveryTimesDatas()
    self._lastPlayMah = 0
    self._lastPlaySeat = NG.GAME.roomTableData:getMaxPlayer()
    self._curGameStep = 0
    self._laoZhuangNum = 0

    self._firstHandMah = false
    self._huSeats = {}

    self._lastTingMahID = 0

    self._anteData = {}
    NG.GAME.roomTableData:initEveryTimesDatas()
end

function GameData:setActionID(actionID)
    self._actionID = actionID or 0
end

function GameData:getActionID()
    return self._actionID
end

function GameData:getPreviewShow()
    return self._previewShow
end

function GameData:setPreviewShow(bSHow)
    self._previewShow = bSHow or false
end

function GameData:getPreviewMah()
    return self._previewMah
end

function GameData:setPreviewMah(mahID)
    self._previewMah = mahID or 0
end

function GameData:setPlayPower(have)
    self._playPower = have
end

function GameData:getPlayPower()
    return self._playPower
end

function GameData:setHuPower(have)
    self._huPower = have
end

function GameData:getHuPower()
    return self._huPower
end

function GameData:setLastPlayMah(mahID)
    self._lastPlayMah = mahID
end

function GameData:getLastPlayMah()
    return self._lastPlayMah
end

function GameData:setLastPlaySeat(seat)
    self._lastPlaySeat = seat
end

function GameData:getLastPlaySeat()
    return self._lastPlaySeat
end

function GameData:getCurGameStep()
    return self._curGameStep
end

function GameData:setCurGameStep(step)
    self._curGameStep = step
end


function GameData:getTempMahID()
    return self._tempMahIdToBackRoom
end

function GameData:setTempMahID(mahId)
    self._tempMahIdToBackRoom = mahId
end

function GameData:setHuMahs(seat, mahIDs)
    self._huMahs[seat] = mahIDs or {}
end

function GameData:getHuMahs(seat)
    return self._huMahs[seat] or {}
end

function GameData:setHuDanFang(seat, mahID)
    self._huDanFang[seat] = mahID or 0
end

function GameData:getHuDanFang(seat)
    return self._huDanFang[seat]
end

function GameData:setHuSeats(huSeats)
    self._huSeats = huSeats
end

function GameData:addHuSeat(huSeat)
    table.insert(self._huSeats, huSeat)
end

function GameData:getHuSeat()
    return self._huSeats
end

function GameData:setDefaultEastWindPos(seat)
    self._defaultEastWindPos = seat
end

function GameData:getDefaultEastWindPos()
    return self._defaultEastWindPos
end

function GameData:setFirstHandMah(firstHandMah)
    self._firstHandMah = firstHandMah
end

function GameData:getFirstHandMah()
    return self._firstHandMah
end

function GameData:setLaoZhuangNum(num)
    self._laoZhuangNum = num
end

function GameData:getLaoZhuangNum()
    return self._laoZhuangNum
end

function GameData:setIsShowQuanFeng(isShow)
    self._isShowQuanFeng = isShow
end

function GameData:getIsShowQuanFeng()
    return self._isShowQuanFeng
end

function GameData:setQuanFengNum(nValue)
    self._nQuanFeng = nValue or 1
end

function GameData:getQuanFengNum()
    return self._nQuanFeng
end

function GameData:setIsJokerToFlower(isJokerToFlower)
    self._isJokerToFlower = isJokerToFlower or false --设置那些牌是花牌
end

function GameData:getIsJokerToFlower()
    return self._isJokerToFlower
end

function GameData:setLastTingData(data)
    self._lastTingData = data or {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_LAST_TING_MAHS, data = self._lastTingData })
end

function GameData:getLastTingData()
    return self._lastTingData
end

function GameData:clearAllMahData()
    for i = 0, 3 do
        self:clearMahData(i)
    end
    self._huanPaiMahIDs = {}
    self._autoHu = false
    self._baiBianData = {}
    self._lastBaiBianInfo = nil
end

function GameData:clearMahData(seat)
    self:clearHandMah(seat)
    self:clearLimitHandMahs(seat)
    self:clearOutMahData(seat)
    self:clearCombMahData(seat)
    self:clearHuMahsData(seat)
    self:clearFlowerMahData(seat)
    self:clearJokerData()
    self:clearOpenData()
    self:setSurPlusCounts(0, false)
    self:clearTingMahs(seat)
    self:clearCanHuMahsData(seat)
    self:clearPreBaoHandMahs(seat)
end

---------------------------------------------------------
--剩余牌堆操作
---------------------------------------------------------
function GameData:setSurPlusCounts(surPlusCounts, bShow)
    surPlusCounts = surPlusCounts or 0
    if surPlusCounts < 0 then return end
    self._mahSurplusCounts = surPlusCounts
    local data = {}
    data.bShow = bShow
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SURPLUS_MAH, data = data })
end

function GameData:getSurPlusCounts()
    return self._mahSurplusCounts or 0
end

function GameData:decreaseSurPlusCounts()
    if self._mahSurplusCounts > 0 then
        self._mahSurplusCounts = self._mahSurplusCounts - 1
    end
    local data = {}
    data.bShow = true
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SURPLUS_MAH, data = data })
end
---------------------------------------------------------
--开牌区操作
---------------------------------------------------------
function GameData:setOpenData(openData)
    openData = openData or {}
    self._openMahData = openData
    local data = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_OPEN_MAH, data = data })
end

function GameData:addOpenData(openData)
    openData = openData or NG.GAME.GameDefine.MAH_VALUE.BACK
    self._openMahData[#self._openMahData + 1] = openData
    local data = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_OPEN_MAH, data = data })
end

function GameData:getOpenData()
    return self._openMahData
end

function GameData:setOpenCounts(openCounts)
    openCounts = openCounts or 1
    self._openMahCounts = openCounts
end

function GameData:clearOpenData()
    self._openMahData = {}
    local data = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_CLEAR_OPEN_MAH, data = data })
end
---------------------------------------------------------
--财神区操作
---------------------------------------------------------
function GameData:setJokerData(jokerData)
    jokerData = jokerData or {}
    self._jokerMahData = jokerData
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_JOKER_MAH })
end

function GameData:getJokerData()
    return self._jokerMahData
end

function GameData:setJokerCounts(jokerCounts)
    jokerCounts = jokerCounts or 1
    self._jokerMahCounts = jokerCounts
end

function GameData:clearJokerData()
    self._jokerMahData = {}
end

function GameData:setInsteadMahData(insteadData)
    insteadData = insteadData or {}
    self._insteadMahData = insteadData
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_JOKER_MAH })
end

function GameData:getInsteadMahData()
    return self._insteadMahData
end

--设置手牌碰杠遮罩
function GameData:lightActionMahs(mahValue)
    local data = {}
    data.mahValue = mahValue
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_ACTION_MAH, data = data })
end
---------------------------------------------------------
--手牌区操作
---------------------------------------------------------
function GameData:setMaxHandMahData(maxMahCounts)
    self._maxHandMahCounts = maxMahCounts
    local data = {}
    data.maxCount = maxMahCounts
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_HANDMAH_COUNT, data = data })
end

function GameData:getMaxHandMahData()
    return self._maxHandMahCounts
end

function GameData:getHandMahCounts(seat)
    return #(self._handMahData[seat])
end

function GameData:getHandMahData(seat)
    return self._handMahData[seat]
end

function GameData:getHandMahDataIndex(seat, index)
    if index == 0 then
        return self._handDfData[seat]
    end
    return self._handMahData[seat][index]
end

function GameData:setHandMahData(seat, mahData, mahDfData, bAni)
    seat = seat or 0
    bAni = bAni or false
    mahData = mahData or {}
    if mahDfData == 0 then
        mahDfData = nil
    end
    mahDfData = mahDfData
    --排序牌
    self:sortMahs(mahData)
    self._handMahData[seat] = mahData
    self._handDfData[seat] = mahDfData

    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    --data.localSeat = seat + 1
    data.bAni = bAni
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })

    -- if self:getBrokenState(seat) == NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP then
    --     self:dispatchEvent({ name = self.EVENT_BANKRUP, data = { nSeat = seat, nState = NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP } })
    -- end
end

function GameData:addHuanPai(seat, mahs)
    if NG.GAME.roomTableData:getSelfSeat() ~= seat then
        local huanNum = #mahs
        for i = #self._handMahData[seat], 1, -1 do
            if huanNum == 0 then
                break
            end
            table.remove(self._handMahData[seat], i)
            huanNum = huanNum - 1
        end
        if huanNum == 1 then
            self._handDfData[seat] = nil
        end
        self:sortHandMahData(seat)
    end

    for i = 1, #mahs do
        table.insert(self._handMahData[seat], mahs[i])
    end
    local df = nil
    if #self._handMahData[seat] == 14 then
        self._handDfData[seat] = self._handMahData[14]
        self._handMahData[14] = nil

        df = mahs[#mahs]
        mahs[#mahs] = nil
    end
    self:sortMahs(self._handMahData[seat])
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_ADD_HANDMAH, data = { seat = seat, mahs = mahs, df = df } })
end

function GameData:sortHandMahData(seat)
    self:sortMahs(self._handMahData[seat])
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.bAni = false
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

function GameData:addDfDataIntoHandMah(seat, nMah)
    if not nMah and not self._handDfData[seat] then
        return
    end
    if self._handDfData[seat] and self._handDfData[seat] ~= 0 then
        --不知道这个判断干啥用
        local mahData = self._handMahData[seat]
        mahData[#mahData + 1] = self._handDfData[seat]
        self:sortMahs(mahData)
        self._handMahData[seat] = mahData
        self._handDfData[seat] = nMah
        local data = {}
        data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
        data.bAni = false
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
    else
        --用于发牌阶段非出牌权限玩家补花
        if self._handMahData[seat] and #self._handMahData[seat] % 3 == 0 then
            local mahData = self._handMahData[seat]
            mahData[#mahData + 1] = nMah
            self:sortMahs(mahData)
            self._handMahData[seat] = mahData
            local data = {}
            data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
            data.bAni = false
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
        else
            self._handDfData[seat] = nMah
            local data = {}
            data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_DFMAH, data = data })
        end
    end
end

--手牌全是牌背，直接删除数量
function GameData:deleteBackHandMahData(seat, mahData)
    mahData = mahData or {}
    if self._handDfData[seat] and self._handDfData[seat] ~= NG.GAME.GameDefine.MAH_VALUE.BACK then
        return false
    end
    local handData = self._handMahData[seat]
    for i = 1, #handData do
        if handData[i] ~= NG.GAME.GameDefine.MAH_VALUE.BACK then
            return false
        end
    end
    local removeCounts = #mahData
    local tempCounts = removeCounts
    if self._handDfData[seat] then
        self._handDfData[seat] = nil
        tempCounts = tempCounts - 1
    end
    for _ = 1, tempCounts do
        if #handData <= 0 then
            break
        end
        table.remove(handData, #handData)
    end
    local tempmahData = {}
    for _ = 1, removeCounts do
        tempmahData[#tempmahData + 1] = NG.GAME.GameDefine.MAH_VALUE.BACK
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.deteMahs = tempmahData
    data.dfMahs = self._handDfData[seat]
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_DELETE_HANDMAH, data = data })
    return true
end

function GameData:delMahByValue(seat, mahValue)
    local handData = self._handMahData[seat]
    for index, val in ipairs(handData) do
        if mahValue == val then
            table.remove(handData, index)
            return true
        end
    end

    if self._handDfData[seat] == mahValue then
        self._handDfData[seat] = nil
        return true
    end

    return false
end

function GameData:deleteHandMahIndex(seat, index, mahValue)
    if not index then
        return false
    end
    local ret
    local handData = self._handMahData[seat]
    if index == 0 and self._handDfData[seat] == mahValue then
        self._handDfData[seat] = nil
        ret = true
    elseif index > 0 and handData[index] == mahValue then
        table.remove(handData, index)
        ret = true
    else
        ret = self:delMahByValue(seat, mahValue)
    end
    --假如单放没有删掉，单放放入手牌中
    if self._handDfData[seat] then
        table.insert(handData, self._handDfData[seat])
        self:sortMahs(handData)
        self._handMahData[seat] = handData
        self._handDfData[seat] = nil
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.delMahIndex = index
    data.delMahValue = mahValue
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_DELETE_HANDMAH_INDEX, data = data })
    self:clearLimitHandMahs(seat)
    self:clearPreBaoHandMahs(seat)
    return ret
end

function GameData:deleteHandMahData(seat, mahData)
    seat = seat or 0
    mahData = mahData or {}
    if self:deleteBackHandMahData(seat, mahData) then
        return
    end
    local handData = self._handMahData[seat]
    local dfData = self._handDfData[seat]
    for i = 1, #mahData do
        local bFind = false
        if self._handDfData[seat] then
            if self._handDfData[seat] == mahData[i] then
                self._handDfData[seat] = nil
                bFind = true
            end
        end
        if not bFind then
            for j = 1, #handData do
                if handData[j] == mahData[i] then
                    table.remove(handData, j)
                    break
                end
            end
        end
    end
    --假如单放没有删掉，单放放入手牌中
    if self._handDfData[seat] then
        table.insert(handData, self._handDfData[seat])
        self:sortMahs(handData)
        self._handMahData[seat] = handData
        self._handDfData[seat] = nil
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.deteMahs = mahData
    data.dfMahs = dfData
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_DELETE_HANDMAH, data = data })
end

function GameData:clearHandMah(seat)
    self._handMahData[seat] = {}
    self._handDfData[seat] = nil
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_DESTROY_HANDMAH, data = data })
end

function GameData:getHandDfData(seat)
    return self._handDfData[seat]
end

function GameData:setHandDfData(seat, mahDfData)
    self._handDfData[seat] = mahDfData
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_DFMAH, data = data })
end

function GameData:clearHandDfData(seat)
    self._handDfData[seat] = {}
end

function GameData:getLimitHandMahs(seat)
    if self:isHued(seat) and seat == NG.GAME.roomTableData:getSelfSeat() then
        local mahs = clone(self._handMahData[seat])
        table.insert(mahs, self:getHandDfData(seat))
        return mahs
    end
    return self._handLimitMahData[seat] or {}
end

function GameData:setLimitHandMahs(seat, limitMahData)
    limitMahData = limitMahData or {}
    self._handLimitMahData[seat] = limitMahData
    -- local data = {}
    -- data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    -- self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT, data = data })
end

function GameData:clearLimitHandMahs(seat)
    self._handLimitMahData[seat] = {}
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT, data = data })
end

function GameData:getPreBaoHandMahs(seat)
    return self._preBaoMahData[seat] or {}
end

function GameData:setPreBaoHandMahs(seat, preBaoMahData)
    preBaoMahData = preBaoMahData or {}
    self._preBaoMahData[seat] = preBaoMahData
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_BAO, data = data })
end

function GameData:clearPreBaoHandMahs(seat)
    self._preBaoMahData[seat] = {}
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_BAO, data = data })
end


function GameData:resetHandMahs(seat, handMahs, dfMah, mah)
    local bFind = false
    if dfMah then
        if dfMah == mah then
            dfMah = nil
            bFind = true
        end
    end

    if not bFind then
        for j = 1, #handMahs do
            if handMahs[j] == mah then
                table.remove(handMahs, j)
                break
            end
        end
    end

    if dfMah then
        table.insert(handMahs, dfMah)
        self:sortMahs(handMahs)
        dfMah = nil
    end
    self._handMahData[seat] = handMahs
    self._handDfData[seat] = dfMah
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.bAni = false
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

--同时支持四方和非四方出牌
--resetOutMahs的参数：outMahs1，outMahs2 是根据 getOutMahData 接口返回去设置，分别表示四方/非四方出牌数据
function GameData:resetOutMahs(seat, outMahs1, outMahs2, mahID)
    outMahs1 = outMahs1 or {}
    outMahs2 = outMahs2 or {}
    outMahs1[#outMahs1 + 1] = mahID
    outMahs2[#outMahs2 + 1] = mahID
    if self:isFourDirectionOutMah() then
        self._outCardDataSquare[seat] = outMahs1
        self._outCardDataNoSquare = outMahs2
    else
        self._outCardDataSquare[seat] = outMahs2
        self._outCardDataNoSquare = outMahs1
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_OUTMAH, data = data })
end
---------------------------------------------------------
--comb区
---------------------------------------------------------
function GameData:getAllCombMahData(seat)
    return self._combMahData[seat]
end

function GameData:getCombMahData(seat, combIndex)
    return self._combMahData[seat][combIndex] or {}
end

function GameData:setCombMahData(seat, combData, bAni, bMoveHand)
    self._combMahData[seat] = self._combMahData[seat] or {}
    local insertIdx = #self._combMahData[seat] + 1
    local isBuGang = false
    if combData.nFlag == NG.GAME.GameDefine.COMB_FLAG.TKONG or combData.nFlag == NG.GAME.GameDefine.COMB_FLAG.CKONG then
        for i = 1, #self._combMahData[seat] do
            if self._combMahData[seat][i].nMahs[1] == combData.nMahs[1] then
                table.remove(self._combMahData[seat], i)
                insertIdx = i
                isBuGang = true
                break
            end
        end
    end
    table.insert(self._combMahData[seat], insertIdx, combData)
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.combIndex = insertIdx
    data.bAni = bAni or false
    data.bMoveHand = bMoveHand or false
    data.isBuGang = isBuGang
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_COMB, data = data })
end

function GameData:refreshCombMahData(seat, combData, index)
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.combIndex = index
    data.combData = combData
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_REFRESH_COMB, data = data })
end

function GameData:clearCombMahData(seat)
    self._combMahData[seat] = {}
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_CLEAR_COMB, data = data })
end

--同时支持四方和非四方出牌
function GameData:getOutMahData(seat)
    if self:isFourDirectionOutMah() then
        return (self._outCardDataSquare[seat] or {}), (self._outCardDataNoSquare or {})
    else
        return (self._outCardDataNoSquare or {}), (self._outCardDataSquare[seat] or {})
    end
end

--同时保留四方出牌区的数据
function GameData:setOutMahData(seat, outCard)
    if not outCard then
        return
    end
    local filterMah = {}
    local laiZi = {}
    for i = 1, #outCard do
        if self:isJoker(outCard[i]) then
            table.insert(laiZi, outCard[i])
        else
            table.insert(filterMah, outCard[i])
        end
        self:setFlowerMahData(seat, laiZi, false)
    end

    outCard = filterMah
    if seat == -1 then
        self._outCardDataNoSquare = clone(outCard)
    else
        local tmpOutCardDataSquare = {}
        table.insertto(tmpOutCardDataSquare, outCard)
        if #self._outCardDataSquare[seat] > 0 then
            table.insertto(tmpOutCardDataSquare, self._outCardDataSquare[seat])
        end
        self._outCardDataSquare[seat] = clone(tmpOutCardDataSquare)
        table.insertto(self._outCardDataNoSquare, outCard)
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_OUTMAH, data = data })
end

function GameData:isJoker(mah)
    return MahLogic.checkIsJokerMah(mah, self._jokerMahData)
end

--同时保留四方出牌区的数据
function GameData:addOutMahData(seat, outCard)
    if seat == -1 or next(outCard) == nil then
        return
    end
    local filterMah = {}
    local laiZi = {}
    for i = 1, #outCard do
        if self:isJoker(outCard[i]) then
            table.insert(laiZi, outCard[i])
        else
            table.insert(filterMah, outCard[i])
        end
        self:addFlowerMahData(seat, laiZi, false)
    end
    if #filterMah == 0 then
        return
    end

    outCard = filterMah
    for index = 1, #outCard do
        if self._outCardDataSquare[seat] then
            table.insert(self._outCardDataSquare[seat], outCard[index])
        end
        table.insert(self._outCardDataNoSquare, outCard[index])
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.addMahs = outCard
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_ADD_OUTMAH, data = data })
end

function GameData:clearOutMahData(seat, bClearNoSquareData)
    bClearNoSquareData = bClearNoSquareData == nil and true or bClearNoSquareData
    self._outCardDataSquare[seat] = {}
    if bClearNoSquareData then
        self._outCardDataNoSquare = {}
    end
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_DESTROY_OUTMAH, data = data })
end

--同时支持四方和非四方出牌
function GameData:deleteLastOutMahData(seat, mah)
    if self._outCardDataSquare[seat] then
        if mah then
            if self._outCardDataSquare[seat][#self._outCardDataSquare[seat]] == mah then
                table.remove(self._outCardDataSquare[seat], #self._outCardDataSquare[seat])
            else
                printError("移除牌数据异常" .. mah)
            end
        else
            table.remove(self._outCardDataSquare[seat], #self._outCardDataSquare[seat])
        end
    end
    table.remove(self._outCardDataNoSquare, #self._outCardDataNoSquare)
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_DELETE_LAST_OUTMAH, data = data })
end
--同时支持四方和非四方出牌
function GameData:deleteOutMahData(seat, mahIDs)
    local function deleteMah(tMahIDs, outData)
        if outData and tMahIDs then
            for i = 1, #tMahIDs do
                for j = #outData, 1, -1 do
                    if outData[j] == tMahIDs[i] then
                        table.remove(outData, j)
                        break
                    end
                end
            end
        end
    end
    deleteMah(mahIDs, self._outCardDataSquare[seat])
    deleteMah(mahIDs, self._outCardDataNoSquare)
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_OUTMAH, data = data })
end
---------------------------------------------------------
--花牌区
---------------------------------------------------------
function GameData:getFlowerMahData(seat)
    return self._flowerMahData[seat]
end

function GameData:setFlowerMahData(seat, mahsData, playAni)
    mahsData = mahsData or {}
    self._flowerMahData[seat] = mahsData

    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.playAni = playAni
    data.flowerMahs = mahsData
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_FLOWER, data = data })
end

function GameData:addFlowerMahData(seat, mahsData, playAni, callBack)
    mahsData = mahsData or {}
    local flowerMahData = self._flowerMahData[seat] or {}
    for i = 1, #mahsData do
        if mahsData[i] then
            flowerMahData[#flowerMahData + 1] = mahsData[i]
        end
    end
    self._flowerMahData[seat] = flowerMahData
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.playAni = playAni
    data.flowerMahs = mahsData
    --data.localSeat = seat + 1
    data.callBack = callBack
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_ADD_FLOWER, data = data })
end

function GameData:clearFlowerMahData(seat)
    self._flowerMahData[seat] = {}
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_CLEAR_FLOWER, data = data })
end

----------------------------------------------------------
--胡牌
--------------------------------------------------------
function GameData:setHuMahsData(seat, handMahs, huMah)
    self:sortMahs(handMahs)
    self._huHandMahData[seat] = handMahs
    self._huMahData[seat] = huMah
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_HU_MAHS, data = data })
end

function GameData:getHuHandMahsData(seat)
    return self._huHandMahData[seat]
end

function GameData:getHuMahData(seat)
    return self._huMahData[seat]
end

function GameData:clearHuMahsData(seat)
    self._huHandMahData[seat] = {}
    self._huMahData[seat] = {}
    self._huMahDataXueLiu[seat] = {}
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_CLEAR_HU_MAHS, data = data })
end

function GameData:getHuMahDataXueLiu(seat)
    return self._huMahDataXueLiu[seat] or {}
end

function GameData:setHuMahsDataXueLiu(msg)
    self._huMahDataXueLiu = msg.huCards
    for i = 0, 3 do
        if msg.huCards[i] then
            local data = {}
            data.localSeat = NG.GAME.roomTableData:seatToLocal(i)
            data.playAni = false
            data.mahs = msg.huCards[i]
            data.total = #msg.huCards[i]
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_HU_XUELIU, data = data })
        end
    end
    if self:isHued(NG.GAME.roomTableData:getSelfSeat()) then
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT, data = { localSeat = NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM } })
    end
end

function GameData:addHuMahDataXueLiu(seat, mahsData, playAni, callBack)
    mahsData = mahsData or {}
    local flowerMahData = self._huMahDataXueLiu[seat] or {}
    for i = 1, #mahsData do
        if mahsData[i] then
            flowerMahData[#flowerMahData + 1] = mahsData[i]
        end
    end
    self._huMahDataXueLiu[seat] = flowerMahData
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    data.playAni = playAni
    data.mahs = mahsData
    data.total = #flowerMahData
    --data.localSeat = seat + 1
    data.callBack = callBack
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_ADD_HU_XUELIU, data = data })

    if seat == NG.GAME.roomTableData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT, data = { localSeat = NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM } })
    end
end

function GameData:clearHuMahDataXueLiu(seat)
    self._huMahDataXueLiu[seat] = {}
    local data = {}
    data.localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_CLEAR_HU_XUELIU, data = data })
end

----------------------------------------------------
--听牌
----------------------------------------------------
function GameData:setTingMahs(seat, mahs)
    self._tingMahs[seat] = mahs
    local data = {}
    data.seat = seat
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_TING_MAHS, data = data })
end

function GameData:getTingMahs(seat)
    return self._tingMahs[seat] or {}
end

function GameData:clearTingMahs(seat)
    self._tingMahs[seat] = {}
    local data = {}
    data.seat = seat
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_CLEAR_TING_MAHS, data = data })
end

function GameData:setCanHuMahsData(seat, info)
    self._canHuInfo[seat] = info
end
function GameData:updateCanHuMahsData(seat, outMah, info)
    self._canHuInfo[seat] = self._canHuInfo[seat] or {}
    self._canHuInfo[seat][outMah] = info
end

function GameData:getCanHuMahsData(seat)
    return self._canHuInfo[seat] or {}
end

function GameData:clearCanHuMahsData(seat)
    self._canHuInfo[seat] = {}
end

function GameData:sortMahs(mahs)
    MahLogic.sortMahValues(mahs, self._jokerMahData, self._insteadMahData)
end

function GameData:isFourDirectionOutMah()
    return NG.GAME.settingData:getOutTableCardStyle() == NG.GAME.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION
end

function GameData:isHuSeat(seat)
    local huSeat = self:getHuSeat()
    for i = 1, #huSeat do
        if huSeat[i] == seat then
            return true
        end
    end
    return false
end

function GameData:saveMahDataToTemp()
    self._tempMahSaveData = clone(self)
end

function GameData:clearTempMahData()
    self._tempMahSaveData = {}
end

--如果客户端出的牌和服务发下来的出牌不一致，会重新设置一遍手牌和出牌区
function GameData:resetMahData(seat, mahID)
    if self._tempMahSaveData and self._tempMahSaveData.getHandDfData and self._tempMahSaveData.getHandMahData then
        self:resetHandMahs(seat, self._tempMahSaveData:getHandMahData(seat), self._tempMahSaveData:getHandDfData(seat), mahID)
        local outMah1, outMah2 = self._tempMahSaveData:getOutMahData(seat)
        self:resetOutMahs(seat, outMah1, outMah2, mahID)
    end
    self._tempMahSaveData = {}
end

--设置庄座位
function GameData:setBankerSeat(seatId)
    if not seatId then
        return
    end
    self._bankerSeatId = seatId

    self:dispatchEvent({ name = self.EVENT_BANKER_CHANGED })
end

function GameData:getBankerSeat()
    return self._bankerSeatId
end

function GameData:isBanker(seatId)
    return self._bankerSeatId == seatId
end

function GameData:setHuanPaiMahIDs(ids)
    self._huanPaiMahIDs = ids
end
function GameData:getHuanPaiMahIDs()
    return self._huanPaiMahIDs
end
function GameData:setAutoHu(bAuto)
    self._autoHu = bAuto
end
function GameData:getAutoHu()
    return self._autoHu
end

function GameData:setExcludeMah(mahs)
    self._excludeMahs = mahs
    self:dispatchEvent({ name = self.EVENT_EXCLUDE_MAH })
end
function GameData:getExcludeMah()
    return self._excludeMahs
end

function GameData:setHandBaiBianData(data)
    self._baiBianData = data
    self:dispatchEvent({ name = self.EVENT_BAI_BIAN_DATA, data = data })
end

function GameData:getHandBaiBianData()
    return self._baiBianData
end

function GameData:setLastBaiBianInfo(data)
    self._lastBaiBianInfo = data
end

function GameData:getLastBaiBianInfo()
    return self._lastBaiBianInfo
end

function GameData:setHuCardInfo(seat, data)
    self._huCardInfo[seat] = data
    self:dispatchEvent({ name = self.EVENT_HU_CARD_INFO, data = data })
end

function GameData:getHuCardInfo(seat)
    return self._huCardInfo[seat]
end

function GameData:setData(type, data)
    self._exData = self._exData or {}
    self._exData[type] = data
end

function GameData:getData(type)
    return self._exData[type]
end

function GameData:isBaiBian(value, index)
    local idx = 1
    for i = 1, #self._baiBianData do
        if self._baiBianData[i].nValue == value then
            if idx == index then
                return true, self._baiBianData[i].nCnt
            else
                idx = idx + 1
            end
        end
    end
    return false, 0;
end

function GameData:updateBianPaiInfo(data)
    print("BBBBB")
    -- dump(self._lastBaiBianInfo)
    -- dump(self._baiBianData)

    if self._lastBaiBianInfo then
        if self._lastBaiBianInfo.value ~= data.nValueBefore or self._lastBaiBianInfo.cnt ~= data.nCnt + 1 then
            printError("变牌数据异常")
            -- dump(self._lastBaiBianInfo)
            -- dump(data)
        end
        self._lastBaiBianInfo.nValueAfter = data.nValueAfter
        self._lastBaiBianInfo.nCnt = data.nCnt
    end
    local idx = 1
    local bianIdx = (self._lastBaiBianInfo and self._lastBaiBianInfo.idx) or 1
    local findX = 0
    for i = 1, #self._baiBianData do
        if self._baiBianData[i].nValue == data.nValueBefore then
            if idx == bianIdx then
                self._baiBianData[i].nCnt = data.nCnt
                self._baiBianData[i].nValue = data.nValueAfter
                findX = i
                break
            end
            idx = idx + 1
        end
    end
    if findX == 0 then
        printError("变牌数据异常1")
    end


    --更新idx
    local newIdx = 1
    for i = 1, #self._baiBianData do
        if self._baiBianData[i].nValue == data.nValueAfter then
            if i == findX then
                break
            else
                newIdx = newIdx + 1
            end
        end
    end

    print("BBBBB", idx, bianIdx, findX, newIdx)

    self._lastBaiBianInfo.newIdx = newIdx
    data.newIdx = newIdx

    -- dump(self._baiBianData)
    local seat = NG.GAME.roomTableData:getSelfSeat()
    if self._handDfData[seat] == data.nValueBefore then
        self._handDfData[seat] = data.nValueAfter
    else
        for i = 1, #self._handMahData[seat] do
            if self._handMahData[seat][i] == data.nValueBefore then
                self._handMahData[seat][i] = data.nValueAfter
                break
            end
        end
    end
    self:dispatchEvent({ name = self.EVENT_BIAN_PAI_SYN, data = self._lastBaiBianInfo or data })
    self._lastBaiBianInfo = nil
end
return GameData  ��  