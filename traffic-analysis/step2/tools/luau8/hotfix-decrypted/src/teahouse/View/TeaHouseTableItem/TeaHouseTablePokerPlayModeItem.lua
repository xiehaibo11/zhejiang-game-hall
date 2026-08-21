local TeaHouseTablePokerItem = import(".TeaHouseTablePokerItem")
---@class TeaHouseTableSmallPlayModeItem : TeaHouseTablePokerItem
local TeaHouseTablePokerPlayModeItem = class("TeaHouseTablePokerPlayModeItem", TeaHouseTablePokerItem)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")

function TeaHouseTablePokerPlayModeItem:ctor(playModeInfo)
    TeaHouseTablePokerPlayModeItem.super.ctor(self)

    self._playModeInfo = playModeInfo

    self:updateMaxPlayerCount()

    -- self:setBaseScore(TeaHouse.SysTool.analysisZhRule(playModeInfo.acData))
    self:setBaseScoreEx(TeaHouse.SysTool.analysisBaseScore(playModeInfo.nGameId, playModeInfo.acData))
    self:setPayType(TeaHouse.SysTool.analysisPayType(playModeInfo.acData))
    self:setGame(playModeInfo.acName)
    self:setIsAutoReady(TeaHouse.SysTool.analysisIsAutoReady(playModeInfo.acData))
    self:setTableColor(false,TeaHouse.SysTool.analysisTableColor(playModeInfo.acData))
    self:setQueMen(playModeInfo.nGameId, playModeInfo.acData or "")
    if playModeInfo.anPlayerCount and #playModeInfo.anPlayerCount == 1 then
        self:setState(false, playModeInfo.anPlayerCount[1])
    end
end

function TeaHouseTablePokerPlayModeItem:getPlayModeInfo()
    return self._playModeInfo
end

function TeaHouseTablePokerPlayModeItem:updateState()
    if TeaHouse.manager.teahouseData:checkSelfPower("CreateTable") then
        local teahouseData = TeaHouse.manager.teahouseData
        self:updateMaxPlayerCount()
    else
        self:initMaxPlayerCount(0)
    end
    self:setPayType(TeaHouse.SysTool.analysisPayType(self._playModeInfo.acData))
end

function TeaHouseTablePokerPlayModeItem:updateMaxPlayerCount()
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

function TeaHouseTablePokerPlayModeItem:onTableClicked(send, eventType)
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
    local bPlayModuleAreaText = false
    local playerCountConf
    local playCountConf
    local curLobbyID = TeaHouse.BridgeData.getLobbyID()
    local mutiGameTable = MutiVersionGameConfig.getMutiGameTable(self._playModeInfo.nGameId, curLobbyID)
    local tmpLobbyid
    if mutiGameTable and mutiGameTable[self._playModeInfo.nGameId] then
        tmpLobbyid = mutiGameTable[self._playModeInfo.nGameId].lobbyid
    end
    if tmpLobbyid and tmpLobbyid ~= curLobbyID then
        playerCountConf = TeaHouse.SysTool.getPlayerCountConfByGameID(self._playModeInfo.nGameId, self._playModeInfo.acData,nil,tmpLobbyid)
        playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._playModeInfo.nGameId, self._playModeInfo.acData,nil,tmpLobbyid)
        bPlayModuleAreaText = true
    else
        playerCountConf = TeaHouse.SysTool.getPlayerCountConfByGameID(self._playModeInfo.nGameId, self._playModeInfo.acData)
        playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._playModeInfo.nGameId, self._playModeInfo.acData)
    end
    zhRule = zhRule .. "("
    if self._playModeInfo.bIsPlayerLock then
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
    if bPlayModuleAreaText then
        zhRule = zhRule .."\n".. mutiGameTable[self._playModeInfo.nGameId].areaName .. "玩法"
    end
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, zhRule)
end

function TeaHouseTablePokerPlayModeItem:onSeatClicked(send, eventType, seatID)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if TeaHouse.manager.teaHouseTable then
        TeaHouse.manager.teaHouseTable:joinPlayModeTable(self._playModeInfo)
    end
end

return TeaHouseTablePokerPlayModeItem�