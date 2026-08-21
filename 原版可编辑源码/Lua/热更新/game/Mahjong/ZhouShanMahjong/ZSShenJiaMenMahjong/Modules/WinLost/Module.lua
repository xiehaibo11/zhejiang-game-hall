local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.WinLost.Module")

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgEndInfo), msgClass = CF.GameProtocol.msgEndInfo}
    return subXYDealList
end

function WinLostModule:onMsgEndInfo(msg)
    self:setHideWinlostUI(false)
    if self:getWinLostData()._sEndType == CF.GameDefine.HU_TYPE.NONE then
        return
    end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

    CF.roomData:setIsHaveResult(true)
	CF.soundManager:playSoundEnd()
	-- 延迟时间
	self:getWinLostData():setDelayTime(1)
    for i = 0, CF.roomData:getChairs()-1 do
        gameData:clearHandMah(i)
        local mahIDs = gameData:getHuMahs(i)
        local huMahID = gameData:getHuDanFang(i)
        gameData:setHuMahsData(i, mahIDs, huMahID)
    end

    -- 重组数据
    -- 胡牌位置
    local huSeat = -1
    for seat = 0,CF.roomData:getChairs()-1 do
        if msg.playerEndState[seat + 1] == 1 or msg.playerEndState[seat + 1] == 2 then
            huSeat = seat + 1
        end
    end
    -- 胜负分
    local tWinlost = {}
    tWinlost.nWinLost = {}
    -- 胡牌显示类型
    local tHuType = {}
	-- 详情
	local tDetail = {}
	local fanStrTable = { "", "", "", "" }
    for k,v in ipairs(msg.fanIDs) do
        if msg.fanNum[k] > 0 then
            fanStrTable[huSeat] = fanStrTable[huSeat] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.fanNum[k] .. "台 "
        end
        if v == 2407 then
            tHuType[huSeat-1] = "dui"
        elseif v == 2408 then
            tHuType[huSeat-1] = "can"
        elseif v == 2409 then
            tHuType[huSeat-1] = "bian"
        end
    end
	for i = 1,msg.playerCnt do
		tWinlost.nWinLost[i-1] = msg.winLostScore[i]
		for k,v in ipairs(msg.taiIDs[i]) do
            if msg.taiNum[i][k] > 0 then
                fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.taiNum[i][k] .. "台 "
            end
        end
        for k,v in ipairs(msg.huIDs[i]) do
            if msg.huNum[i][k] > 0 then
                fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.huNum[i][k] .. "胡 "
            end
        end

        local siShu = msg.totalSiHu[i]/4 .. ""
        tDetail[i-1] = string.format("总胡数:%d 丝数:%s 台数:%d ", msg.totalHu[i], siShu, msg.totalTai[i])
        tDetail[i-1] = tDetail[i-1] .. fanStrTable[i]
	end

    self:getWinLostData():onMsgResult(tWinlost)
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():setDetail(tDetail)
    self:getWinLostData():setHuShowType(tHuType)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            local strRule = CF.roomData:getGameRule()
            if gameData:getQuanFengStr() then
                strRule = strRule .. "  " .. gameData:getQuanFengStr()
            end
            self:getWinLostData():setGameRule(strRule)
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
end

return WinLostModule