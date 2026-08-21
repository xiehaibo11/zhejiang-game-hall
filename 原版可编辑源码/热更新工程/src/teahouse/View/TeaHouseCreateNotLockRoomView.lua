local TeaHouseCreateBoxRoomView = import(".TeaHouseCreateBoxRoomView")
local TeaHouseCreateNotLockRoomView = class("TeaHouseCreateNotLockRoomView", TeaHouseCreateBoxRoomView)

function TeaHouseCreateNotLockRoomView:ctor(playModeInfo, data)
    self._playModeInfo = playModeInfo
    TeaHouseCreateNotLockRoomView.super.ctor(self, data)
end

function TeaHouseCreateNotLockRoomView:initListViewGames()
    local gameIdList = TeaHouse.BridgeData.getBoxRoomGameList()
    local gameId = self._playModeInfo.nGameId
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    if gameId and gameNameList and self._btnModel then
        self:addGameBtnOnce(gameNameList[gameId], gameId)
        self:setSelectGameDynamic(gameId)
    end
end

function TeaHouseCreateNotLockRoomView:getTeaHouseGameRuleList(gameid)
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(TeaHouse.BridgeData.getLobbyID(), gameid)
    if not gameRuleList or not gameRuleList.categories or not gameRuleList.categories[1] then
        return gameRuleList
    end

    local resultPlayCounts = {}
    
    local PlayCountPlayMode = gameRuleList["PlayCountPlayMode"]
    local PlayerCountPlayMode = gameRuleList["PlayerCountPlayMode"]
    for categoriesIndex, categories in ipairs(gameRuleList["categories"]) do
        for nodeStr, nodeData in pairs(categories) do
            if string.find(nodeStr, "costType") or string.find(nodeStr, "CostType") or string.find(nodeStr, "costtype") then
                gameRuleList.categories[categoriesIndex][nodeStr] = nil
                break
            end
        end
        local bHavePayType, payTypeData = self:createPayTypeConf()
        if bHavePayType then
            gameRuleList.categories[categoriesIndex]["100payTypeData"] = payTypeData
        end
    end

    return gameRuleList
end

return TeaHouseCreateNotLockRoomView