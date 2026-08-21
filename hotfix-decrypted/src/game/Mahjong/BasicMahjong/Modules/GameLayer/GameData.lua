local GameData = CF.gameClass("GameData",  "game.GameBase.Modules.GameLayer.GameData")

GameData.EVENT_BASESCORE_CHANGED = "EVENT_BASESCORE_CHANGED"
--手牌区
GameData.EVENT_MAHLAYER_SET_HANDMAH_COUNT = "EVENT_MAHLAYER_SET_HANDMAH_COUNT"
GameData.EVENT_MAHLAYER_FLUSH_HANDMAH = "EVENT_MAHLAYER_FLUSH_HANDMAH"
GameData.EVENT_MAHLAYER_DELETE_HANDMAH = "EVENT_MAHLAYER_DELETE_HANDMAH"
GameData.EVENT_MAHLAYER_DELETE_HANDMAH_INDEX = "EVENT_MAHLAYER_DELETE_HANDMAH_INDEX"
GameData.EVENT_MAHLAYER_FLUSH_DFMAH = "EVENT_MAHLAYER_FLUSH_DFMAH"
GameData.EVENT_MAHLAYER_DESTROY_HANDMAH = "EVENT_MAHLAYER_DESTROY_HANDMAH"
GameData.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT = "EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT"
--下发自己首手牌时派发（开局后首次 setFirstHandData(true)），供请神等模块按游戏类型区分处理
GameData.EVENT_FIRST_HAND_DATA = "EVENT_FIRST_HAND_DATA"
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
--开牌区
GameData.EVENT_MAHLAYER_OPEN_MAH  = "EVENT_MAHLAYER_OPEN_MAH"
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

GameData.EVENT_MAHLAYER_ACTION_MAH = "EVENT_MAHLAYER_ACTION_MAH"

GameData.EVENT_YA_ZI_CHANGED = "EVENT_YA_ZI_CHANGED"

GameData.EVENT_BANKER_CHANGED = "EVENT_BANKER_CHANGED"

function GameData:ctor()
    GameData.super.ctor(self)
    self._bankerSeatId = -1
    self._actionID = 0
    self._playPower = false
    self._huPower = false
    self._curPower = CF.GameDefine.POWER.NONE
    self._lastPlayMah = 0
    self._lastPlaySeat = CF.roomData:getMaxPlayer()
    self._tempMahIdToBackRoom = nil
    self._curGameStep = 0

    self._previewShow = false
    self._previewMah = 0

    self._huSeats = {}
    self._huMahs = {}
    self._huDanFang = {}

    self._firstHandData = false
    self._defaultEastWindPos = CF.roomData:getMaxPlayer()
    self._laoZhuangNum = 0

    self._isShowQuanFeng = false --显示圈风标识
    self._nQuanFeng = 1

    self._openMahToFlower = {}
    --是否把财神标记改为花牌标记
    self._isJokerToFlower = false
    --记录刚刚打出去的听牌可以胡的牌数据
    self._lastTingData = {}

    self._anteData = {}
    self:initDatas()
    self:initMahData()
end

function GameData:initMahData()
    --牌堆数量
    self._mahSurplusCounts = 0 
    --手牌最大的手牌数
    self._maxHandMahCounts = CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN
    self._handMahData = {}
    self._handDfData = {}
    self._handLimitMahData = {}
    self._combMahData = {}
    self._flowerMahData = {}
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

    -- 哪些牌打出牌可能会承包
    self._preBaoMahData = {}

    for i = 0, 3 do 
        self._handMahData[i] = {}
        for j = 1, self._maxHandMahCounts do
            self._handMahData[i][j] =  CF.GameDefine.MAH_VALUE.BACK
        end
       
        self._handDfData[i] = nil  
        self._handLimitMahData[i] = {}
        self._outCardDataSquare[i] = {}  
        self._preBaoMahData[i] = {}
    end

    for i = 1,self._jokerMahCounts do
        self._jokerMahData[i] = CF.GameDefine.MAH_VALUE.BACK
    end

    --临时麻将保存数据
    self._tempMahSaveData = {}
end

--每小局游戏需要更新的数据
function GameData:initEveryTimesDatas()
    self:initEveryTime()
    self._lastPlayMah = 0
    self._lastPlaySeat = CF.roomData:getMaxPlayer()
    self._curGameStep = 0
    self._laoZhuangNum = 0

    self._firstHandData = false
    self._huSeats = {}

    self._lastTingMahID = 0

    self._anteData = {}
    CF.roomData:initEveryTimesDatas()
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

function GameData:getGameStep()
    return self:getCurGameStep() 
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

function GameData:setFirstHandData(firstHandMah)
    local changed = (self._firstHandData ~= firstHandMah)
    self._firstHandData = firstHandMah
    -- 开局后首次下发自己首手牌时派发事件，供请神动画等按游戏类型区分处理
    if changed and firstHandMah == true then
        self:dispatchEvent({ name = self.EVENT_FIRST_HAND_DATA })
    end
end

function GameData:getFirstHandData()
    return self._firstHandData
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
end

function GameData:getLastTingData()
    return self._lastTingData
end

function GameData:clearAllMahData()
    for i = 0, 3 do
        self:clearMahData(i)
    end
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
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SURPLUS_MAH, data = data })
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
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SURPLUS_MAH, data = data })
end
---------------------------------------------------------
--开牌区操作
---------------------------------------------------------
function GameData:setOpenData(openData)
    openData = openData or {}
    self._openMahData = openData
    local data = {}
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_OPEN_MAH, data = data })
end

function GameData:addOpenData(openData)
    openData = openData or CF.GameDefine.MAH_VALUE.BACK
    self._openMahData[#self._openMahData + 1] = openData
    local data = {}
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_OPEN_MAH, data = data })
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
    self._openMahToFlower = {}
    local data = {}
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_OPEN_MAH, data = data })
end

function GameData:setOpenMahToFlower(mahs)
    self._openMahToFlower = mahs
end

function GameData:getOpenMahToFlower()
    return self._openMahToFlower
end
---------------------------------------------------------
--财神区操作
---------------------------------------------------------
function GameData:setJokerData(jokerData)
    jokerData = jokerData or {}
    self._jokerMahData = jokerData
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_JOKER_MAH})
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
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_JOKER_MAH})
end

function GameData:getInsteadMahData()
    return self._insteadMahData
end

--设置手牌碰杠遮罩
function GameData:lightActionMahs(mahValue)
    local data = {}
    data.mahValue = mahValue
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_ACTION_MAH, data = data})
end
---------------------------------------------------------
--手牌区操作
---------------------------------------------------------
function GameData:setMaxHandMahData(maxMahCounts)
    self._maxHandMahCounts = maxMahCounts
    local data = {}
    data.maxCount = maxMahCounts
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_HANDMAH_COUNT, data = data })
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
    self._handDfData[seat]  = mahDfData
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    --data.localSeat = seat + 1
    data.bAni = bAni
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

function GameData:sortHandMahData(seat)
    self:sortMahs(self._handMahData[seat])
     local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.bAni = false
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

function GameData:addDfDataIntoHandMah(seat, nMah)
    if not nMah and not self._handDfData[seat] then
        return
    end
    if self._handDfData[seat] and self._handDfData[seat] ~= 0 then
        --不知道这个判断干啥用
        local mahData =  self._handMahData[seat]
        mahData[#mahData + 1] = self._handDfData[seat]
        self:sortMahs(mahData)
        self._handMahData[seat] = mahData
        self._handDfData[seat] = nMah
        local data = {}
        data.localSeat = CF.roomData:seatToLocal(seat)
        data.bAni = false
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
    else
        --用于发牌阶段非出牌权限玩家补花
        if self._handMahData[seat] and #self._handMahData[seat] % 3 == 0 then
            local mahData =  self._handMahData[seat]
            mahData[#mahData + 1] = nMah
            self:sortMahs(mahData)
            self._handMahData[seat] = mahData
            local data = {}
            data.localSeat = CF.roomData:seatToLocal(seat)
            data.bAni = false
            self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
        else
            self._handDfData[seat] = nMah
            local data = {}
            data.localSeat = CF.roomData:seatToLocal(seat)
            self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_DFMAH, data = data })
        end
    end
end

--手牌全是牌背，直接删除数量
function GameData:deleteBackHandMahData(seat,mahData)
    mahData = mahData or {}
    if self._handDfData[seat] and self._handDfData[seat] ~= CF.GameDefine.MAH_VALUE.BACK then
        return false 
    end
    local handData =  self._handMahData[seat]
    for i = 1,#handData do
        if handData[i] ~= CF.GameDefine.MAH_VALUE.BACK then
            return false 
        end
    end
    local removeCounts = #mahData
    local tempCounts = removeCounts
    if self._handDfData[seat] then
        self._handDfData[seat] = nil
        tempCounts = tempCounts - 1 
    end
    for _ = 1,tempCounts do
        if #handData <= 0 then
           break
        end
        table.remove(handData, #handData)
    end
    local tempmahData = {}
    for _ = 1,removeCounts do
        tempmahData[#tempmahData + 1] = CF.GameDefine.MAH_VALUE.BACK
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.deteMahs = tempmahData
    data.dfMahs = self._handDfData[seat]
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DELETE_HANDMAH, data = data })
    return true
end

function GameData:delMahByValue(seat, mahValue)
    local handData =  self._handMahData[seat]
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
    local handData = self._handMahData[seat]
    if not handData then
        return false
    end
    local ret
    if index == 0 and self._handDfData[seat] == mahValue then
        self._handDfData[seat] = nil
        ret = true
    elseif index > 0 and handData[index] == mahValue then
        table.remove(handData, index)
        ret = true
    else
        ret =  self:delMahByValue(seat, mahValue)
    end
    --假如单放没有删掉，单放放入手牌中
    if self._handDfData[seat] then
        table.insert(handData,self._handDfData[seat] )
        self:sortMahs(handData)
        self._handMahData[seat] = handData
        self._handDfData[seat] = nil
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.delMahIndex = index
    data.delMahValue = mahValue
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DELETE_HANDMAH_INDEX, data = data })
    self:clearLimitHandMahs(seat)
    self:clearPreBaoHandMahs(seat)
    return ret
end

function GameData:deleteHandMahData(seat,mahData)
    seat = seat or 0
    mahData = mahData or {}
    if self:deleteBackHandMahData(seat,mahData) then
        return 
    end
    local handData =  self._handMahData[seat]
    local dfData = self._handDfData[seat]
    for i = 1,#mahData do
        local bFind = false
        if self._handDfData[seat] then
            if self._handDfData[seat] == mahData[i] then
                self._handDfData[seat] = nil
                bFind = true
            end
        end
        if not bFind then
            for j = 1,#handData do
                if handData[j] == mahData[i] then
                    table.remove(handData, j)
                    break
                end
            end   
        end
    end
    --假如单放没有删掉，单放放入手牌中
    if self._handDfData[seat] then
        table.insert(handData,self._handDfData[seat] )
        self:sortMahs(handData)
        self._handMahData[seat] = handData
        self._handDfData[seat] = nil
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.deteMahs = mahData
    data.dfMahs = dfData
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DELETE_HANDMAH, data = data })
end

function GameData:clearHandMah(seat)
    self._handMahData[seat] = {}
    self._handDfData[seat]  = nil
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DESTROY_HANDMAH, data = data })
end

function GameData:getHandDfData(seat)
    return self._handDfData[seat]
end

function GameData:setHandDfData(seat, mahDfData)
    self._handDfData[seat] = mahDfData
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_DFMAH, data = data })
end

function GameData:clearHandDfData(seat)
    self._handDfData[seat] = {}
end

function GameData:getLimitHandMahs(seat)
    return self._handLimitMahData[seat] or {}
end

function GameData:setLimitHandMahs(seat, limitMahData)
    limitMahData = limitMahData or {}
    self._handLimitMahData[seat] = limitMahData
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT, data = data })
end

function GameData:clearLimitHandMahs(seat)
    self._handLimitMahData[seat] = {}
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_LIMIT, data = data })
end

function GameData:getPreBaoHandMahs(seat)
    return self._preBaoMahData[seat] or {}
end

function GameData:setPreBaoHandMahs(seat, preBaoMahData)
    preBaoMahData = preBaoMahData or {}
    self._preBaoMahData[seat] = preBaoMahData
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_BAO, data = data })
end

function GameData:clearPreBaoHandMahs(seat)
    self._preBaoMahData[seat] = {}
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH_BAO, data = data })
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
        for j = 1,#handMahs do
            if handMahs[j] == mah then
                table.remove(handMahs, j)
                break
            end
        end   
    end

    if dfMah then
        table.insert(handMahs,dfMah )
        self:sortMahs(handMahs)
        dfMah = nil
    end
    self._handMahData[seat] = handMahs
    self._handDfData[seat] = dfMah
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.bAni = false
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

--同时支持四方和非四方出牌
--resetOutMahs的参数：outMahs1，outMahs2 是根据 getOutMahData 接口返回去设置，分别表示四方/非四方出牌数据
function GameData:resetOutMahs(seat, outMahs1, outMahs2 ,mahID)
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
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_OUTMAH, data = data })
end
---------------------------------------------------------
--comb区
---------------------------------------------------------
function GameData:getAllCombMahData(seat)
    return self._combMahData[seat] or {}
end

function GameData:getCombMahData(seat, combIndex)
    return self._combMahData[seat][combIndex] or {}
end

function GameData:setCombMahData(seat, combData, bAni, bMoveHand)
    self._combMahData[seat] = self._combMahData[seat] or {}
    table.insert(self._combMahData[seat], combData)
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.combIndex = #self._combMahData[seat]
    data.bAni = bAni or false
    data.bMoveHand = bMoveHand or false
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_COMB, data = data })
end

function GameData:refreshCombMahData(seat, combData, index)
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.combIndex = index
    data.combData = combData
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_REFRESH_COMB, data = data })
end

function GameData:clearCombMahData(seat)
    self._combMahData[seat] = {}
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_COMB, data = data })
end

--同时支持四方和非四方出牌
function GameData:getOutMahData(seat)
    if self:isFourDirectionOutMah() then
        return (self._outCardDataSquare[seat] or {}) , (self._outCardDataNoSquare or {})
    else
        return (self._outCardDataNoSquare or {}), (self._outCardDataSquare[seat] or {})
    end
end

--同时保留四方出牌区的数据
function GameData:setOutMahData(seat, outCard)
    if not outCard then
        return
    end
    if seat == -1 then
        self._outCardDataNoSquare = clone(outCard)
    else
        local tmpOutCardDataSquare = {}
        table.insertto(tmpOutCardDataSquare, outCard)
        local existData = self._outCardDataSquare[seat]
        if existData and #existData > 0 then
            --出牌瞬间断线重连时，onMsgTurnData可能已经把"刚出的牌"补进了出牌区，
            --若服务端全量快照(outCard)末张与已有数据末张是同一张，则跳过该重复牌，避免合并后多一张。
            local appendCount = #existData
            if #outCard > 0 and existData[#existData] == outCard[#outCard] then
                appendCount = appendCount - 1
            end
            for i = 1, appendCount do
                table.insert(tmpOutCardDataSquare, existData[i])
            end
        end
        self._outCardDataSquare[seat] = clone(tmpOutCardDataSquare)
        table.insertto(self._outCardDataNoSquare,outCard)
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_OUTMAH, data = data })
end

--同时保留四方出牌区的数据
function GameData:addOutMahData(seat, outCard)
    if seat == -1 or next(outCard) == nil then
        return
    end
    for index = 1,#outCard do
        if self._outCardDataSquare[seat] then
            table.insert(self._outCardDataSquare[seat], outCard[index])
        end
        table.insert(self._outCardDataNoSquare, outCard[index])
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.addMahs = outCard
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_ADD_OUTMAH, data = data })
end

function GameData:clearOutMahData(seat, bClearNoSquareData)
    bClearNoSquareData = bClearNoSquareData == nil and true or bClearNoSquareData
    self._outCardDataSquare[seat] = {}
    if bClearNoSquareData then
        self._outCardDataNoSquare = {}
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DESTROY_OUTMAH, data = data })
end

--同时支持四方和非四方出牌
function GameData:deleteLastOutMahData(seat)
    if self._outCardDataSquare[seat] then
        table.remove(self._outCardDataSquare[seat], #self._outCardDataSquare[seat])
    end
    table.remove(self._outCardDataNoSquare, #self._outCardDataNoSquare)
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DELETE_LAST_OUTMAH, data = data })
end
--同时支持四方和非四方出牌
function GameData:deleteOutMahData(seat, mahIDs)
    local function deleteMah(tMahIDs,outData)
        if outData and tMahIDs then
            for i = 1,#tMahIDs do
                for j = #outData,1,-1 do
                    if outData[j] == tMahIDs[i] then
                        table.remove(outData,j)
                        break
                    end
                end
            end
        end
    end
    deleteMah(mahIDs, self._outCardDataSquare[seat])
    deleteMah(mahIDs, self._outCardDataNoSquare)
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_OUTMAH, data = data })
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
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.playAni = playAni
    data.flowerMahs = mahsData
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_FLOWER, data = data })
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
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.playAni = playAni
    data.flowerMahs = mahsData
    --data.localSeat = seat + 1
    data.callBack = callBack
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_ADD_FLOWER, data = data })
end

function GameData:clearFlowerMahData(seat)
    self._flowerMahData[seat] = {}
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_FLOWER, data = data })
end

----------------------------------------------------------
--胡牌
--------------------------------------------------------
function GameData:setHuMahsData(seat, handMahs, huMah)
    self:sortMahs(handMahs)
    self._huHandMahData[seat] = handMahs
    self._huMahData[seat] = huMah
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_HU_MAHS, data = data })
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
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_HU_MAHS, data = data })
end

function GameData:setTingMahs(seat, mahs)
    self._tingMahs[seat] = mahs
    local data = {}
    data.seat = seat
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_TING_MAHS, data = data })
end

function GameData:getTingMahs(seat)
    return self._tingMahs[seat] or {}
end

function GameData:clearTingMahs(seat)
    self._tingMahs[seat] = {}
    local data = {}
    data.seat = seat
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_TING_MAHS, data = data })
end

function GameData:setCanHuMahsData(seat, info)
    self._canHuInfo[seat] = info
end

function GameData:getCanHuMahsData(seat)
    return self._canHuInfo[seat] or {}
end

function GameData:clearCanHuMahsData(seat)
    self._canHuInfo[seat] = {}
end

function GameData:sortMahs(mahs)
    local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
    MahLogic.sortMahValues(mahs, self._jokerMahData, self._insteadMahData)
end

function GameData:isFourDirectionOutMah()
    return CF.settingData:getOutTableCardStyle() == CF.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION
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
        local outMah1 , outMah2 = self._tempMahSaveData:getOutMahData(seat)
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

    self:dispatchEvent( { name = self.EVENT_BANKER_CHANGED })
end

function GameData:getBankerSeat()
    return self._bankerSeatId
end

function GameData:isBanker(seatId)
    return self._bankerSeatId == seatId
end

function GameData:setPlayerAnteData(seat, anteData)
    self._anteData[seat] = anteData
    self:dispatchEvent( { name = self.EVENT_YA_ZI_CHANGED, msg = {seat = seat, anteNum = anteData.anteNum, anteMinNum = anteData.anteMinNum} })
end

function GameData:getPlayerAnteData(seat)
    return self._anteData[seat]
end

-- 通过ID获取剩余数量
function GameData:getSurplusMahs(mahID)
    local count = 4
    local seat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.BOTTOM)
    --花牌数量
    if mahID >= 97 then
        count = 1
        --补花区
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            local replaceMah = self:getFlowerMahData(i)
            if replaceMah and #replaceMah > 0 then
                for j = 1, #replaceMah do
                    if replaceMah[j] == mahID then
                        count = count - 1
                    end
                end
            end
        end
    end
    --开牌
    local openMahs = self:getOpenData()
    if openMahs and #openMahs > 0 then
        for i = 1, #openMahs do
            if openMahs[i] == mahID then
                count = count - 1
            end
        end
    end

    --手牌
    local handMahs = self:getHandMahData(seat)
    if handMahs and #handMahs > 0 then
        for i = 1, #handMahs do
            if handMahs[i] == mahID then
                count = count - 1
            end
        end
    end

    --单放
    local dfMah = self:getHandDfData(seat)
    if dfMah and dfMah ~= 0 then
        if dfMah == mahID then
            count = count - 1
        end
    end

    --comb
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local combs = clone(self:getAllCombMahData(i))
        for j = 1, #combs do
            if #combs[j].nMahs == 4 then
                local gangMah = CF.GameDefine.MAH_VALUE.BACK
                for k = 1, #combs[j].nMahs do
                    if combs[j].nMahs[k] ~= CF.GameDefine.MAH_VALUE.BACK then
                        gangMah = combs[j].nMahs[k]
                        break
                    end
                end
                if gangMah ~= CF.GameDefine.MAH_VALUE.BACK then
                    for k = 1, #combs[j].nMahs do
                        combs[j].nMahs[k] = gangMah
                    end
                end
            end
            for k = 1, #combs[j].nMahs do
                if combs[j].nMahs[k] == mahID then
                    count = count - 1
                end
            end
        end
    end

    --出牌区
    local outType = CF.settingData:getOutTableCardStyle()
    if outType == CF.GameDefine.OUTMAHS_PUT_TYPE.FOUR_DIRECTION then
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            local outMahs = self:getOutMahData(i)
            if #outMahs > 0 then
                for j = 1, #outMahs do
                    if outMahs[j] == mahID then
                        count = count - 1
                    end
                end
            end
        end
    else
        local outMahs = self:getOutMahData()
        if #outMahs > 0 then
            for i = 1, #outMahs do
                if outMahs[i] == mahID then
                    count = count - 1
                end
            end
        end
    end

    if count < 0 then
        count = 0
    end
    return count
end

function GameData:setCurPower(power)
    self._curPower = power
end

function GameData:getCurPower()
    return self._curPower
end

return GameData  
�  