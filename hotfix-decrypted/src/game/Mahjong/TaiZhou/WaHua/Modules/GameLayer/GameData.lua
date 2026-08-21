local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._nLeftBanker = 0 --剩余庄数
    self._isTiHuan = {}   --白皮替换
    self._yaoZhangData = {}
    self._songMahs = {}
    self._actionMahs = {}
    self._powerID = 0
end

--每小局游戏需要更新的数据
function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._isTiHuan = {}
    self._yaoZhangData = {}
    self._songMahs = {}
end

function GameData:getTiHuan(seat)
    return self._isTiHuan[seat]
end

function GameData:setTiHuan(seat, bTiHuan)
    self._isTiHuan[seat] = bTiHuan
end

function GameData:setYaoZhangData(yaoZhang)
    self._yaoZhangData = yaoZhang or {}
end

function GameData:getYaoZhangData()
    return self._yaoZhangData
end

function GameData:setLeftBanker(nLeftBanker)
    self._nLeftBanker = nLeftBanker
end

function GameData:getLeftBanker()
    return self._nLeftBanker
end

function GameData:setSongZhangMahs(seat, songMahs)
    self._songMahs[seat] = songMahs
end

function GameData:getSongZhangMahs(seat)
    return self._songMahs[seat] or {}
end

function GameData:setActionMahs(actionMahs)
    self._actionMahs = actionMahs or {}
end

function GameData:getActionMahs()
    return self._actionMahs
end

function GameData:setPowerID(powerid)
    self._powerID = powerid
end

function GameData:getPowerID(args)
    return self._powerID
end

function GameData:getSeatWind(seat)
    local bankerSeat = self:getBankerSeat()
    if bankerSeat == -1 then
        return -1
    end
    if seat == bankerSeat then
        return 0
    elseif CF.roomData:getChairs() == 2 then
        return 1
    elseif CF.roomData:getChairs() == 3 then
        return (seat - bankerSeat + CF.roomData:getMaxPlayer()) % CF.roomData:getMaxPlayer()
    elseif CF.roomData:getChairs() == 4 then
        return (seat - bankerSeat + CF.roomData:getMaxPlayer()) % CF.roomData:getMaxPlayer()
    end
    return -1
end

function GameData:getModMahCombsBySeat(seat)
    local modMahs = {}
     local combsData = self:getAllCombMahData(seat) or {}
     for i = 1, #combsData do
        modMahs[#modMahs + 1] = combsData[i].nMahs[1] % CF.GameDefine.MAH_DIVIDED
     end
     return modMahs
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
    local exceptMahs = self:getModMahCombsBySeat(seat)
    local sortMahData = self:sortMahs(mahData, exceptMahs)
    self._handMahData[seat] = sortMahData
    self._handDfData[seat]  = mahDfData
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.bAni = bAni
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

function GameData:sortMahs(mahs, exceptMahs)
    local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
    local sortMahData = MahLogic.sortMahValues(clone(mahs), exceptMahs)
    return sortMahData
end

function GameData:sortHandMahData(seat)
    local exceptMahs = self:getModMahCombsBySeat(seat)
    local sortMahData = self:sortMahs(self._handMahData[seat], exceptMahs)
    self._handMahData[seat] = sortMahData
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
        local exceptMahs = self:getModMahCombsBySeat(seat)
        local sortMahData = self:sortMahs(mahData, exceptMahs)
        self._handMahData[seat] = sortMahData
        self._handDfData[seat] = nMah
        local data = {}
        data.localSeat = CF.roomData:seatToLocal(seat)
        data.bAni = false
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
    else
        --用于发牌阶段非出牌权限玩家补花
        if #self._handMahData[seat] % 2 == 1 then
            local mahData =  self._handMahData[seat]
            mahData[#mahData + 1] = nMah
            local exceptMahs = self:getModMahCombsBySeat(seat)
            local sortMahData = self:sortMahs(mahData, exceptMahs)
            self._handMahData[seat] = sortMahData
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

function GameData:deleteHandMahIndex(seat, index, mahValue)
    if not index then
        return false
    end
    local ret
    local handData =  self._handMahData[seat]
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
        local exceptMahs = self:getModMahCombsBySeat(seat)
        local sortMahData = self:sortMahs(handData, exceptMahs)
        self._handMahData[seat] = sortMahData
        self._handDfData[seat] = nil
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.delMahIndex = index
    data.delMahValue = mahValue
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DELETE_HANDMAH_INDEX, data = data })
    self:clearLimitHandMahs(seat)
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
        local exceptMahs = self:getModMahCombsBySeat(seat)
        local sortMahData = self:sortMahs(handData, exceptMahs)
        self._handMahData[seat] = sortMahData
        self._handDfData[seat] = nil
    end
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.deteMahs = mahData
    data.dfMahs = dfData
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_DELETE_HANDMAH, data = data })
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
        local exceptMahs = self:getModMahCombsBySeat(seat)
        local sortMahData = self:sortMahs(handMahs, exceptMahs)
        handMahs = sortMahData
        dfMah = nil
    end
    self._handMahData[seat] = handMahs
    self._handDfData[seat] = dfMah
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    data.bAni = false
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_FLUSH_HANDMAH, data = data })
end

function GameData:setHuMahsData(seat, handMahs, huMah)
    local exceptMahs = self:getModMahCombsBySeat(seat)
    local sortMahData = self:sortMahs(handMahs, exceptMahs)
    self._huHandMahData[seat] = sortMahData
    self._huMahData[seat] = huMah
    local data = {}
    data.localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_HU_MAHS, data = data })
end

return GameData �#  