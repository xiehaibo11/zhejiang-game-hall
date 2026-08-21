local TeaHouseTableMahjongItem = import(".TeaHouseTableMahjongItem")
---@class TeaHouseTableSmallPlayModeItem : TeaHouseTableMahjongItem
local TeaHouseTableMahjongPlayModeItem = class("TeaHouseTableMahjongPlayModeItem", TeaHouseTableMahjongItem)

function TeaHouseTableMahjongPlayModeItem:ctor(playModeInfo)
    TeaHouseTableMahjongPlayModeItem.super.ctor(self)

    self._playModeInfo = playModeInfo

    self:updateMaxPlayerCount()

    -- self:setBaseScore(TeaHouse.SysTool.analysisZhRule(playModeInfo.acData))
    self:setBaseScoreEx(TeaHouse.SysTool.analysisBaseScore(playModeInfo.nGameId, playModeInfo.acData))
    self:setPayType(TeaHouse.SysTool.analysisPayType(playModeInfo.acData))
    self:setGame(playModeInfo.acName)
    self:setIsAutoReady(TeaHouse.SysTool.analysisIsAutoReady(playModeInfo.acData))
    self:setTableColor(false,TeaHouse.SysTool.analysisTableColor(playModeInfo.acData))
    self:setAutoChange(string.match(playModeInfo.acData or "", "AutoChange='1';"))
    self:setQueMen(playModeInfo.nGameId, playModeInfo.acData or "")
    if playModeInfo.anPlayerCount and #playModeInfo.anPlayerCount == 1 then
        self:setState(false, playModeInfo.anPlayerCount[1])
    end
    if self.updatePromoteIcon then
        if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] ~= nil and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].GAMEID == playModeInfo.nGameId and string.find(playModeInfo.acData,TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].RULE) then
            self:updatePromoteIcon(true)
        else 
            self:updatePromoteIcon(false)
        end
    end
end

function TeaHouseTableMahjongPlayModeItem:getPlayModeInfo()
    return self._playModeInfo
end

function TeaHouseTableMahjongPlayModeItem:updateState()
    if TeaHouse.manager.teahouseData:checkSelfPower("CreateTable") then
        local teahouseData = TeaHouse.manager.teahouseData
        self:updateMaxPlayerCount()
    else
        self:initMaxPlayerCount(0)
    end
    self:setPayType(TeaHouse.SysTool.analysisPayType(self._playModeInfo.acData))
end

function TeaHouseTableMahjongPlayModeItem:updateMaxPlayerCount()
    local playerCounts = TeaHouse.SysTool.analysisPlayerCounts(
    self._playModeInfo.nGameId, self._playModeInfo.acData, self._playModeInfo.anPlayerCount)
    local maxPlayerCount = 0
    for _, v in pairs(playerCounts) do
        if v > maxPlayerCount then
            maxPlayerCount = v
        end
    end
    self:initMaxPlayerCount(maxPlayerCount)
end

function TeaHouseTableMahjongPlayModeItem:onTableClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local currPayType = nil
    if self._textRule2 then 
        currPayType = self._textRule2:getString()
    end
    local zhRule = TeaHouse.SysTool.analysisZhRuleEx(self._playModeInfo.nGameId, self._playModeInfo.acData, currPayType)
    local bFirst = true
    if #zhRule > 0 then
        zhRule = zhRule .. "\n"
    end
    zhRule = zhRule .. "("
    if self._playModeInfo.bIsPlayerLock then
        local playerCountConf = TeaHouse.SysTool.getPlayerCountConfByGameID(self._playModeInfo.nGameId, self._playModeInfo.acData,self._playModeInfo.anPlayerCount)
        if playerCountConf then
            for _, playerCountValue in pairs(self._playModeInfo.anPlayerCount) do
                for _, v in pairs(playerCountConf.listData or {}) do
                    if v.Value == playerCountValue then
                        zhRule = zhRule .. (bFirst and "" or ",") .. v.TextShow
                        bFirst = false
                    end
                end
            end
        end
    else
        zhRule = zhRule .. (bFirst and "" or ",") .. "人数自选"
        bFirst = false
    end
    if self._playModeInfo.bIsCountLock then
        local playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._playModeInfo.nGameId, self._playModeInfo.acData,self._playModeInfo.anPlayerCount)
        if playCountConf then
            for _, playCountValue in pairs(self._playModeInfo.anCount) do
                for _, v in pairs(playCountConf.listData or {}) do
                    if v.Value == playCountValue then
                        zhRule = zhRule .. (bFirst and "" or ",") .. v.TextShow
                        bFirst = false
                    end
                end
            end
        end
    else
        zhRule = zhRule .. (bFirst and "" or ",") .. "局数自选"
        bFirst = false
    end
    zhRule = zhRule .. ")"
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, zhRule)
end

function TeaHouseTableMahjongPlayModeItem:onSeatClicked(send, eventType, seatID)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if TeaHouse.manager.teaHouseTable then
        TeaHouse.manager.teaHouseTable:joinPlayModeTable(self._playModeInfo)
    end
end

return TeaHouseTableMahjongPlayModeItem