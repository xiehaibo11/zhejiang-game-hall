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
    -- 规则
    local gameRule = CF.roomData:getGameRule()
    local isCalHuaScore = string.find(gameRule, "花%d分")
    local isCalZhuangScore = string.find(gameRule, "连庄%d分")
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    -- 胜负分
    local tWinlost = {}
    tWinlost.nWinLost = {}
	-- 详情
	local tDetail = {}
	local fanStrTable = { "", "", "", "" }
	for i = 1,msg.playerCnt do
		tWinlost.nWinLost[i-1] = msg.winLostScore[i]
		for k,v in ipairs(msg.fanIDs[i]) do
			if msg.fanNum[i][k] > 0 then
				fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.fanNum[i][k] .. "分 "
			end
		end
		for k,v in ipairs(msg.huaIDs[i]) do
            if msg.huaNum[i][k] > 0 then
                fanStrTable[i] = fanStrTable[i] .. WinLostFanConfig.WINLOST_FAN_TYPE[v][1] .. ":" .. msg.huaNum[i][k] .. "花 "
            end
        end

        if isCalHuaScore and isCalZhuangScore then
            tDetail[i-1] = string.format("花分:%d 连庄分:%d ", msg.huaScore[i], msg.zhuangScore[i])
        elseif isCalHuaScore then
            tDetail[i-1] = string.format("花分:%d ", msg.huaScore[i])
        elseif isCalZhuangScore then
            tDetail[i-1] = string.format("连庄分:%d ", msg.zhuangScore[i])
        else
            tDetail[i-1] = ""
        end
        tDetail[i-1] = tDetail[i-1] .. fanStrTable[i]
	end

    self:getWinLostData():onMsgResult(tWinlost)
    self:getWinLostData():setIsShowFan(false)
    self:getWinLostData():setDetail(tDetail)
    local time = self:getWinLostData():getDelayTime()
    if time then
        CF.SysTool.performWithDelayGlobal(function()
            self:showSettleWindow()
            local strRule = CF.roomData:getGameRule()
            self:getWinLostData():setGameRule(strRule)
            for i = 0 , CF.roomData:getChairs() - 1 do
                local huMahID = gameData:getHuDanFang(i)
                self:getWinLostData():setHuMahData(i, huMahID)
            end
        end,time)
    end
end

return WinLostModule