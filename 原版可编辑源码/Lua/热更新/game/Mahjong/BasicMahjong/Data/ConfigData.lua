local ConfigData = CF.gameClass("ConfigData", "game.GameBase.Data.ConfigData")

function ConfigData:haveTing()
    return false
end

function ConfigData:getHaveMahlayer3D()
    return false
end

function ConfigData:showOthersActionInPlayBack()
    return true
end

function ConfigData:getIsShowLaoZhuang()
    return false
end

function ConfigData:getHaveFlower()
    return true
end

--判断是否需要飘财动画
function ConfigData:needShowGodOfWealthAni()
    return false
end

function ConfigData:canChowPungKongJoker()
    return false
end

function ConfigData:useSpecialHuAni()
    return false
end

--游戏规则项
function ConfigData:isGuoGangBuGang()
    return false
end

--用于小结束上的麻将子展示方式
function ConfigData:handNeedSort()
    return true
end

--用于小结束上的麻将子展示方式
function ConfigData:huMahAloneShow()
    return true
end

--配置听牌-可以胡的信息面板中剩余张数，是否需要客户端自行计算
function ConfigData:needGetSurplusMahCount()
    return true
end

--金币场小结束显示开关
function ConfigData:isShowSettleGoldWindow()
    return false
end

--是否仅本地洗牌
function ConfigData:getIsLocalShuffle()
    return true
end

-- 读取大厅 FlowOptimize 配置；默认不开启、不加速
function ConfigData:getFlowOptimizeConfig()
    local cfg
    if XH and XH.lobby and XH.lobby.getModule then
        local configuration = XH.lobby:getModule("Configuration")
        if configuration and configuration.getLobbyConfig then
            cfg = configuration:getLobbyConfig("FlowOptimize")
        end
    end
    cfg = cfg or {}
    return {
        enable = cfg.enable == true or cfg.enable == 1,
        firstChipSpeedScale = tonumber(cfg.firstChipSpeedScale) or 1,
        secondChipSpeedScale = tonumber(cfg.secondChipSpeedScale) or 1,
        smallRoundAutoReadyTime = tonumber(cfg.smallRoundAutoReadyTime) or 0,
        gameIds = cfg.gameIds or {},
        chipSpeed = cfg.ChipSpeed or cfg.chipSpeed or {},
        buyCodeSpeed = cfg.BuyCodeSpeed or cfg.buyCodeSpeed or {},
    }
end

function ConfigData:_getFlowOptimizeChipSpeedScale(scaleKey)
    local cfg = self:getFlowOptimizeConfig()
    local scale = cfg[scaleKey]
    local curGameId = CF.roomData and CF.roomData.getGameID and tonumber(CF.roomData:getGameID()) or 0
    if curGameId > 0 and type(cfg.chipSpeed) == "table" then
        local gameChipSpeed = cfg.chipSpeed[tostring(curGameId)] or cfg.chipSpeed[curGameId]
        if type(gameChipSpeed) == "table" then
            local gameScale = tonumber(gameChipSpeed[scaleKey])
            if gameScale and gameScale > 0 then
                scale = gameScale
            end
        end
    end
    if not scale or scale <= 0 then
        return 1
    end
    return scale
end

function ConfigData:_isGameIdInFlowOptimize(gameIds)
    if type(gameIds) ~= "table" then
        return false
    end
    local curGameId = CF.roomData and CF.roomData.getGameID and tonumber(CF.roomData:getGameID()) or 0
    if curGameId <= 0 then
        return false
    end
    for _, gameId in pairs(gameIds) do
        if tonumber(gameId) == curGameId then
            return true
        end
    end
    return false
end

-- 流程优化：需大厅 enable=true，且当前 gameid 在 gameIds 中
function ConfigData:isFlowOptimizeEnable()
    local cfg = self:getFlowOptimizeConfig()
    if not cfg.enable then
        return false
    end
    return self:_isGameIdInFlowOptimize(cfg.gameIds)
end

-- 第一次骰子加速倍数（无买顶底操作时生效；默认1不加速；音效不受影响）
function ConfigData:getFirstChipAniSpeedScale()
    if not self:isFlowOptimizeEnable() then
        return 1
    end
    return self:_getFlowOptimizeChipSpeedScale("firstChipSpeedScale")
end

-- 第二次骰子加速倍数（默认1不加速；音效不受影响）
function ConfigData:getSecondChipAniSpeedScale()
    if not self:isFlowOptimizeEnable() then
        return 1
    end
    return self:_getFlowOptimizeChipSpeedScale("secondChipSpeedScale")
end

-- 买码动画加速倍数（默认1不加速；取 buyCodeSpeed[gameId]，无则原速）
function ConfigData:getBuyCodeAniSpeedScale()
    if not self:isFlowOptimizeEnable() then
        return 1
    end
    local cfg = self:getFlowOptimizeConfig()
    local curGameId = CF.roomData and CF.roomData.getGameID and tonumber(CF.roomData:getGameID()) or 0
    if curGameId > 0 and type(cfg.buyCodeSpeed) == "table" then
        local gameScale = tonumber(cfg.buyCodeSpeed[tostring(curGameId)] or cfg.buyCodeSpeed[curGameId])
        if gameScale and gameScale > 0 then
            return gameScale
        end
    end
    return 1
end

-- 小局结束自动准备倒计时（秒）；默认0关闭
function ConfigData:getSmallRoundAutoReadyTime()
    if not self:isFlowOptimizeEnable() then
        return 0
    end
    local time = self:getFlowOptimizeConfig().smallRoundAutoReadyTime
    if not time or time < 0 then
        return 0
    end
    return time
end

return ConfigData