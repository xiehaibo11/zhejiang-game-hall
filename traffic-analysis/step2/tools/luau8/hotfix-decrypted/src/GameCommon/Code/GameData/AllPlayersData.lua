local AllPlayersData = class("AllPlayersData")
local CURRENT_MODULE_NAME = ...

AllPlayersData._playersData = {}

function AllPlayersData.updataPlayerData(playerDataMsg)
    local PlayerData = import(".PlayerData",CURRENT_MODULE_NAME)
    if playerDataMsg.nState == PlayerData.USER_STATE.US_SEEING then
        return
    end
    
    for first, second  in pairs(AllPlayersData._playersData) do
        if playerDataMsg.nBrandID == second._nBrandID and playerDataMsg.nNumberID == second._nNumberID then
            second:updatePlayerData(playerDataMsg)
            return 
        end
    end
    
    local tempPlayerData = PlayerData:new()
    tempPlayerData:updatePlayerData(playerDataMsg)
    AllPlayersData._playersData[#AllPlayersData._playersData+1] = tempPlayerData
end

function AllPlayersData.updataPlayerDataEx(playerDataExMsg)
    for first, second  in pairs(AllPlayersData._playersData) do
        if playerDataExMsg.nBrandID == second._nBrandID and playerDataExMsg.nNumberID == second._nNumberID then
            second:updatePlayerState(playerDataExMsg.nPlayState)
            return 
        end
    end
end

function AllPlayersData.updataPlayerAvatarUrl(player, url)
    for first, second  in pairs(AllPlayersData._playersData) do
        if player._nBrandID == second._nBrandID and player._nNumberID == second._nNumberID then
            second:updataAvatarUrl(url)
            return 
        end
    end
end

function AllPlayersData.getPlayerByPlayerID(nBrandID,nNumberID)
    for first, second  in pairs(AllPlayersData._playersData) do
        if nBrandID == second._nBrandID and nNumberID == second._nNumberID then
            return second
        end
    end
end

function AllPlayersData.getPlayerBySeat(nSeat)
    for first, second  in pairs(AllPlayersData._playersData) do
        if nSeat == second._nSeat then
            return second
        end
    end
end

function AllPlayersData.removePlayersData(nBrandID,nNumberID)
    for first, second  in pairs(AllPlayersData._playersData) do
        if nBrandID == second._nBrandID and nNumberID == second._nNumberID then
            AllPlayersData._playersData[first] = nil
            return 
        end
    end
end

function AllPlayersData.removePlayersDataBySeat(nSeat)
    for first, second  in pairs(AllPlayersData._playersData) do
        if nSeat == second._nSeat then
            AllPlayersData._playersData[first] = nil
            return 
        end
    end
end

function AllPlayersData.clearPlayersData()
    AllPlayersData._playersData = {}
end

function AllPlayersData.isSameIP(player)
    for first, second  in pairs(AllPlayersData._playersData) do
        if player ~= second and second:getIPName() == player:getIPName() then
            return true
        end
    end
    return false
end

function AllPlayersData.getPlayerCount()
    local count = 0
    for first, second  in pairs(AllPlayersData._playersData) do
        count = count + 1
    end
    return count
end
return AllPlayersData