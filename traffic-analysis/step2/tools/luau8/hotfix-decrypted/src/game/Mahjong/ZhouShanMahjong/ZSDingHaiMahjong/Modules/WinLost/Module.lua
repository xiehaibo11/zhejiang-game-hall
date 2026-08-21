local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.WinLost.Module")



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
    -- 封顶台数
    local gameRule = CF.roomData:getGameRule()
    local fengdingTai = nil
    local scoreTable = CF.StringTool.spiltStringByFlag(gameRule, "封顶")
    if scoreTable[2] then
        fengdingTai = tonumber(CF.StringTool.cutStringByLength(scoreTable[2]))
    end
    -- 胜负分
    local tWinlost = {}
    tWinlost.nWinLost = {}
    -- 胡牌显示类型
    local tHuType = {}
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
            if v == 2407 then
                tHuType[i-1] = "dui"
            elseif v == 2408 then
                tHuType[i-1] = "can"
            elseif v == 2409 then
                tHuType[i-1] = "bian"
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


return WinLostModule