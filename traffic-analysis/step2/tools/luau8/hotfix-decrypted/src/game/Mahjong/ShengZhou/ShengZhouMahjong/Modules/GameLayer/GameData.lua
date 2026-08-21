local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:initMahData()
    GameData.super.initMahData(self)
    self._countScore = {}
    self._chowLimitOtherCombs = {}
end

function GameData:initEveryTimesDatas()
    GameData.super.initEveryTimesDatas(self)
    self._chowLimitOtherCombs = {}
end

function GameData:setCountScore(seat, pan, data)
    self._countScore[seat] = self._countScore[seat] or {}
    self._countScore[seat][pan] = data
end

function GameData:getCountScore(seat)
    return self._countScore[seat]
end

function GameData:setChowLimitOtherCombs(mah)
    local limitOtherCombs = {}
    local limitOtherComb1 = {}
    local limitOtherComb2 = {}
    local limitOtherComb3 = {}
    limitOtherComb1[1]= mah-2
    limitOtherComb1[2]= mah-1
    limitOtherCombs[1] = limitOtherComb1
    limitOtherComb2[1]= mah-1
    limitOtherComb2[2]= mah+1
    limitOtherCombs[2] = limitOtherComb2
    limitOtherComb3[1]= mah+1
    limitOtherComb3[2]= mah+2
    limitOtherCombs[3] = limitOtherComb3
    self._chowLimitOtherCombs = limitOtherCombs
end

function GameData:checkSanTanHintTrigger(seat,playerMahCombs,fromSeat)
	local sanTanSelf = {} -- 吃碰杠三摊
	local sanTanOthers = {} --被吃碰杠三摊
	playerMahCombs = self:filterCorrectComb(playerMahCombs)
	for _,subComb in pairs(playerMahCombs) do
		local nFromSeat = subComb.nFromSeat
		if seat == CF.roomData:getSelfSeat() and nFromSeat ~= CF.roomData:getSelfSeat() then
			sanTanSelf[nFromSeat] = sanTanSelf[nFromSeat] or 0
			sanTanSelf[nFromSeat] = sanTanSelf[nFromSeat] + 1
		end
		if nFromSeat == CF.roomData:getSelfSeat() and seat ~= CF.roomData:getSelfSeat() then
			sanTanOthers[seat] = sanTanOthers[seat] or 0
			sanTanOthers[seat] = sanTanOthers[seat] + 1
		end
	end
	local data = {}
	for i = 0, CF.roomData:getChairs() do
		local selfStanCnt = sanTanSelf[i] or 0
		if selfStanCnt == 2 and fromSeat == i then
			local subData = {}
			subData.hintType = CF.GameDefine.SANTAN_HINT_ENUM.SELF_SANTAN
			subData.triggerSeat = i
			table.insert(data,subData)
		end
	end
	for i = 0, CF.roomData:getChairs() do
		local otherStanCnt = sanTanOthers[i] or 0
		if otherStanCnt == 2 then
			if not fromSeat or (CF.roomData:getSelfSeat() == fromSeat) then
				local subData = {}
				subData.hintType = CF.GameDefine.SANTAN_HINT_ENUM.OTHER_SANTAN
				subData.triggerSeat = i
				table.insert(data,subData)
			end
		end
	end
    return data
end

function GameData:filterCorrectComb(combData)
    local combDataTmp = clone(combData)
    local deletList = {}
    for i = #combDataTmp, 1, -1 do
        for j = i - 1, 1, -1 do
            if combDataTmp[i].nMahs[1] == combDataTmp[j].nMahs[1] and combDataTmp[i].nFlag == 5 and combDataTmp[j].nFlag == 2 then
                table.insert(deletList, combDataTmp[j])
            end
        end
    end
    for i = #combDataTmp, 1, -1 do
        for j = 1, #deletList do
            if combDataTmp[i] == deletList[j] then
                table.remove(combDataTmp, i)
            end
        end
    end
    return combDataTmp
end

return GameData�