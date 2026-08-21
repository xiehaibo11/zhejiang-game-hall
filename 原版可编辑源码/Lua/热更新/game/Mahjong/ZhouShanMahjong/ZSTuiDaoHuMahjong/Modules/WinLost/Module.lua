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
    --local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

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
    local isCalKongScore = string.find(gameRule, "杠算分")
    -- 胜负分
    local tWinlost = {}
    tWinlost.nWinLost = {}
	-- 详情
	local tDetail = {}
	local fanStrTable = { "", "", "", "" }
	for i = 1,msg.playerCnt do
		tWinlost.nWinLost[i-1] = msg.winLostScore[i]

        if isCalKongScore then
            tDetail[i-1] = string.format("杠分:%d 胡牌分:%d ", msg.totalKong[i], msg.totalScore[i])
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