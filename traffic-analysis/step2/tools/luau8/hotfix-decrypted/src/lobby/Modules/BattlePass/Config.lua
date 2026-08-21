local BattlePassConfig = {}

-- 任务类型
BattlePassConfig.TaskType = {
    DAILY = 1,
    CHALLENGE = 2
}

-- 任务状态
BattlePassConfig.TaskStatus = {
    UNFINISH = 0,
    FINISH = 1,
    REWARDED = 2,
}

-- 页签类型
BattlePassConfig.LobbyPageType = {
    REWAED = 0,         -- 奖励页签
    EVERYDAYTASK = 1,   -- 每日任务
    CHALLENGETASK = 2,  -- 挑战任务
}

-- 解锁雀神令入口
BattlePassConfig.LobbyUnLockEntrance = {
    MAIN = 0,           -- 主界面
    REWARD = 1,         -- 奖励到账界面
}

local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

-- 获取公用配置
function BattlePassConfig:getBattlePassAll()
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        return configJsonData.BattlePass
    end
end

function BattlePassConfig:getBattlePassShopId()
    local config = self:getBattlePassAll()
    if config then
        local lobbyid = XH.areaData:getLobbyID()
        local proptype = config.prop_type[tostring(lobbyid)]
        if proptype then
            return proptype
        end
    end
end

function BattlePassConfig:getAwardLevel(propid)
    if not self._config then
        self._config = self:getBattlePassAll()
    end
    if self._config then
        for key, v in pairs(self._config.poolAward) do
            if table.has(v, tostring(propid)) then
                return tonumber(key)
            end
        end
    end
    return 1
end

return BattlePassConfig
�