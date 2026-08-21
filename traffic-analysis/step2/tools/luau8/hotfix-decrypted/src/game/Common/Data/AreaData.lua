local AreaData = class("AreaData")

function AreaData:getSrsGroupID()
    return XH.areaData:getSrsGroupID()
end

function AreaData:getGoldSrsGroupID()
    return XH.areaData:getGoldSrsGroupID()
end

function AreaData:getLobbyID()
    return XH.areaData:getLobbyID()
end

function AreaData:getTenantID()
    return XH.areaData:getTenantid()
end

function AreaData:getAreaID()
    return XH.areaData:getAreaID()
end

function AreaData:getXHLinkURL()
    return XH.areaData:getXHLinkURL()
end

function AreaData:getPropList()
    return XH.areaData:getPropList()
end

function AreaData:getPropSmallRoomCardRatio()
    return XH.areaData:getPropSmallRoomCardRatio()
end

function AreaData:getAreaWindID()
    return XH.areaData:getAreaWindID()
end

function AreaData:getCommonGoldGameID()
    return XH.areaData:getCommonGoldGameID()
end

function AreaData:getConfigGameID()
    return XH.areaData:getConfigGameID()
end

function AreaData:getAreaTypeID()
    return XH.areaData:getAreaTypeID()
end

function AreaData:getSrsGroupIDbyAppID()
    return XH.areaData:getSrsGroupIDbyAppID()
end

function AreaData:isSupportFriendList()
    return XH.areaData:isSupportFriendList()
end

function AreaData:isSupportGoldQuickRecharge()
    return XH.areaData:isSupportGoldQuickRecharge()
end

function AreaData:setSrsGroupIDbyAppID(appID, srsGroupID)
    return XH.areaData:setSrsGroupIDbyAppID(appID, srsGroupID)
end

function AreaData:isSupportNewBagSystem()
    return XH.areaData:isSupportNewBagSystem()
end

function AreaData:getPropSmallRoomCardID()
    return XH.areaData:getPropSmallRoomCardID()
end

function AreaData:getNotifAppid()
    return XH.areaData:getNotifAppid()
end

function AreaData:getNotifSecret()
    return XH.areaData:getNotifSecret()
end

function AreaData:judgeSupportThrowProp(lobbyID)
    lobbyID = lobbyID or self:getLobbyID()
    local pathKey = "app.Config.prop." .. tostring(lobbyID)
    return pcall(function() return require(pathKey) end)
end

function AreaData:isInteractiveExpression()
    return XH.areaData:isInteractiveExpression()
end

function AreaData:getSmallRoomCardRatio()
    return XH.areaData:getPropSmallRoomCardRatio()
end

function AreaData:isOpenSimpleSettingGuide()
    return XH.areaData:isOpenSimpleSettingGuide()
end

function AreaData:isSupportFriendsV2()
    return XH.areaData:isSupportFriendsV2()
end

function AreaData:getPropDiamndID()
    return XH.areaData:getPropDiamndID()
end

function AreaData:getPropRoomCardID()
    return XH.areaData:getPropRoomCardID()
end

function AreaData:getPropBindRoomCardID()
    return XH.areaData:getPropBindRoomCardID()
end

function AreaData:getPropChangeCardID()
    return XH.areaData:getPropChangeCardID()
end

function AreaData:getPropFreeRoomCardRatio()
    return XH.areaData:getPropFreeRoomCardRatio()
end

function AreaData:getGoldPropId()
    return XH.areaData:getGoldPropId()
end

--获取当前区游戏名字列表
function AreaData:getAreaGameNameList()
    return XH.ReadGameListAndRuleConfig.getGameNameList(self:getLobbyID()) or {}
end

return AreaDataz