local ShuffleConfig = {}
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

ShuffleConfig.ANI_TYPE = {
    OLDANI = 1,     -- 老动画
    NEWANI = 2,     -- 新动画
    ABTEST = 3,     -- 玩家ID：单号新动画，双号老动画
}

-- 洗牌是否新动画(麻将)
function ShuffleConfig:getMahShuffleAniType()
    local configModule = CF.getLobbyModule("Configuration")
    if not configModule then return false end
    local allJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if not allJsonData or not allJsonData.ShuffleAniTypeMah then
        return ShuffleConfig.ANI_TYPE.OLDANI
    end
    return allJsonData.ShuffleAniTypeMah
end

-- 洗牌是否新动画
function ShuffleConfig:getShuffleAniType()
    local configModule = CF.getLobbyModule("Configuration")
    if not configModule then return false end
    local allJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if not allJsonData or not allJsonData.ShuffleAniType then
        return ShuffleConfig.ANI_TYPE.OLDANI
    end
    return allJsonData.ShuffleAniType
end

-- 洗牌是否所有人可见
function ShuffleConfig:isSupportAllVisible(gameID)
    local lobbyID = CF.areaData:getLobbyID()
    local configModule = CF.getLobbyModule("Configuration")
    if not configModule then
        return false
    end
    local allJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    if not allJsonData or not allJsonData.ShuffleAllVisibleLobbyID then
        return false
    end
    local isAreaSupport = false
    for _,lobbyid in pairs(allJsonData.ShuffleAllVisibleLobbyID) do
        if lobbyID == lobbyid then
            isAreaSupport = true
            break
        end
    end
    if not isAreaSupport then return isAreaSupport end

    -- 该地区没配置游戏，但是地区支持了，那么该地区所有游戏都支持
    if not configJsonData or not configJsonData.ShuffleAllVisibleGameID or #configJsonData.ShuffleAllVisibleGameID == 0 then
        return true
    end
    local isGameSupport = false
    for _,gameid in pairs(configJsonData.ShuffleAllVisibleGameID) do
        if gameid == gameID then
            isGameSupport = true
            break
        end
    end
    return isGameSupport
end

return ShuffleConfig