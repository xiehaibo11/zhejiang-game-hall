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
    -- 输赢分
    local tWinlost = {}
    tWinlost.nWinLost = {}
	-- 详情
	local tDetail = {}
	local fanStrTable = { "", "", "", "" }
    local totalFan = {0, 0, 0, 0}
	for i = 1,msg.playerCnt do
		tWinlost.nWinLost[i-1] = msg.winLostScore[i]
		for k,v in ipairs(msg.fanIDs[i]) do
            if not WinLostFanConfig.WINLOST_FAN_TYPE[v] then
                WinLostFanConfig.WINLOST_FAN_TYPE[v] = {v}
            end
            fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.fanNum[i][k] .. "番 "
            totalFan[i] = totalFan[i] + msg.fanNum[i][k]
		end

        tDetail[i-1] = string.format("总番数:%d ", totalFan[i])
        tDetail[i-1] = tDetail[i-1] .. fanStrTable[i]
	end

    self:getWinLostData():onMsgResult(tWinlost)
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():setDetail(tDetail)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            local strRule = "二人麻将  "..CF.roomData:getGameRule()
            self:getWinLostData():setGameRule(strRule)
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
end

return WinLostModule