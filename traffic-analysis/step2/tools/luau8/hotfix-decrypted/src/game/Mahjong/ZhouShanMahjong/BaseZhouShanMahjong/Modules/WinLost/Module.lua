local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.BasicMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgEndInfo), msgClass = CF.GameProtocol.msgEndInfo}
    return subXYDealList
end

function WinLostModule:onMsgEndInfo(msg)
    self:setHideWinlostUI(false)
    CF.roomData:setIsHaveResult(true)
    self._soundManager.playSoundEnd()
    -- 延迟时间
    self._settleData:setDelayTime(1)
    for i = 0 , CF.roomData.getChairs() - 1 do
        self:getGameData():clearHandMah(i)
        local mahIDs = self._gameInfoData:getHuMahs(i)
        local huMahID = self._gameInfoData:getHuDanFang(i)
        self:getGameData():setHuMahsData(i, mahIDs, huMahID)
    end

    -- 重组数据
    -- 封顶台数
    local gameRule = CF.roomData:getGameRule()
    local fengdingTai = nil
    local scoreTable = self:spiltStringByFlag(gameRule, "封顶")
    if scoreTable[2] then
        fengdingTai = tonumber(self:cutString(scoreTable[2])[1])
    end
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    -- 胜负分
    local tWinlost = {}
    tWinlost.nWinLost = {}
	-- 详情
	local tDetail = {}
	local fanStrTable = { "", "", "", "" }
	local totalTai = { 0, 0, 0, 0 }
	for i = 1,msg.playerCnt do
		tWinlost.nWinLost[i-1] = msg.winLostScore[i]
		for k,v in ipairs(msg.fanIDs[i]) do
			if msg.fanNum[i][k] > 0 then
				fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.fanNum[i][k] .. "台 "
                totalTai[i] = totalTai[i] + msg.fanNum[i][k]
			end
		end
		for k,v in ipairs(msg.taiIDs[i]) do
            if msg.taiNum[i][k] > 0 then
                fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.taiNum[i][k] .. "台 "
                totalTai[i] = totalTai[i] + msg.taiNum[i][k]
            end
        end
        if fengdingTai and fengdingTai < totalTai[i] then
            totalTai[i] = fengdingTai
        end
        tDetail[i-1] = string.format("总台数:%d ", totalTai[i])
        tDetail[i-1] = tDetail[i-1] .. fanStrTable[i]
	end

    self:getWinLostData():onMsgResult(tWinlost)
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():setDetail(tDetail)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            self:getWinLostData():setGameRule(CF.roomData:getGameRule())
            for i = 0 , CF.roomData.getChairs() - 1 do
                local huMahID = self._gameInfoData:getHuDanFang(i)
                self._settleData:setHuMahData(i, huMahID)
            end
        end,time)
    end
end

return WinLostModuleu