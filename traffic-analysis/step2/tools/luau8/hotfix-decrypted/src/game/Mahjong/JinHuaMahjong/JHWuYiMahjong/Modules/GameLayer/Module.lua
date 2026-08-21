local GameModule = CF.gameClass("GameModule", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
	local xyDealList = GameModule.super.getSubXYDealList(self)
	return xyDealList
end

function GameModule:onMsgPanData(msgData)
	GameModule.super.onMsgPanData(self, msgData)
    CF.roomData:setFirstBanker(msgData.nFirstBanker)
    CF.roomData:setLaoZhuangNum(msgData.nLaoZhuang)
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    local tMahIndex = mahIndex
    if tMahIndex == 0 then
        tMahIndex = -1
    end
    if not tMahIndex then
        tMahIndex = 0
    end
    CF.msgManager:sendPlayMahIndex(tMahIndex)
	GameModule.super.showPlayPreOut(self, mahIndex, mahValue)
end

function GameModule:doActionKong()
    local jokerData = self:getGameData():getJokerData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local danFang = self:getGameData():getHandDfData(seat)

    local tempHands = clone(handMahs)
        if not CF.configData:canChowPungKongJoker() then
        for i = #tempHands,1,-1 do
            for j = 1,#jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands,i)
                    break
                end
            end
        end
    end

    local selfAllCombs = clone(self:getGameData():getAllCombMahData(seat))
    local msgCombs = {}
    local combs = self:getMahAlgorithm():findExposedKong(tempHands, inMah)
    if #combs == 1 then
        msgCombs.mahs = combs[1]
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.MKONG
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif #combs == 0 then
        --暗杠补杠可能有多种情况出现
        local tmpFlag = 0
        local tmpInMahs = {}
        local tmpFromSeat = CF.roomData:getMaxPlayer()
        local combsConcealedKong = self:getMahAlgorithm():findConcealedKong(tempHands, danFang)
        for i = 1 , #combsConcealedKong do
            combs[#combs + 1] = combsConcealedKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.CKONG
            tmpFromSeat = CF.roomData:getSelfSeat()
            tmpInMahs = {}
        end
        if CF.configData:isGuoGangBuGang() then
            tempHands = {}
        end

        local fillKongPower = self:getGameData():getPowerByte() or {}
        local canFillKong = true
        if fillKongPower[57] ~= 1 then
            canFillKong = false
        end
        if not canFillKong then
            for i = #selfAllCombs , 1 ,-1  do
                if selfAllCombs[i].nFlag == 2 then
                    table.remove(selfAllCombs,i)
                end
            end
        end

        local combsFillKong = self:getMahAlgorithm():findFillKong(tempHands, danFang, selfAllCombs)

        for i = 1 , #combsFillKong do
            combs[#combs + 1] = combsFillKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.TKONG
            for j = 1, 3 do
                tmpInMahs[j] = combsFillKong[1][1]
            end

            for j = 1,#selfAllCombs do
                if selfAllCombs[j].nInMahs[1] == combsFillKong[1][1] then
                    tmpFromSeat = selfAllCombs[j].nFromSeat
                end
            end
        end
        local combsSize = #combs
        if combsSize == 1 then
            if combs[1][1] == CF.GameDefine.MAH_VALUE.BACK then
                for i = 1,#combs[1] do
                    combs[1][i] = combs[1][4]
                end
            end
            msgCombs.mahs = combs[1]
            msgCombs.ins = tmpInMahs
            msgCombs.from = tmpFromSeat
            msgCombs.flag = tmpFlag
            CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
        elseif combsSize > 1 then
            local data = {}
            data.isShow = true
            data.combs = combs
            self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        end
    end
end

return GameModule�