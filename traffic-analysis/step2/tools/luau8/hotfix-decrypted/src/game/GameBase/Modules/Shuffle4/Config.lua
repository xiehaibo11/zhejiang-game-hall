local Shuffle4Config = CF.gameClass("Shuffle4Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

Shuffle4Config.TOP_TIP_SCENE_CNT = 9 -- 总共多少个场景（有的场景不做，但也算个数）
Shuffle4Config.SHOW_CONTINUE_DAY = 3 -- 连续3天，均达到弹出上限，且均未使用
Shuffle4Config.SHOW_DAY_CD = 3 * 24 * 60 * 60 -- 如果连续3天，均达到弹出上限，且均未使用，则冷却3天（按72小时计算）不再弹出，第4天重新弹出。只要有通过弹出的提示使用，则重新计数，清缓存则全部重置
Shuffle4Config.TOP_SHOW_CD = 10  -- 提示出现后，下一次提示有10秒的冷却时间
Shuffle4Config.TOP_SHOW_LOSE_ROUND_BY_SCENE_6 = 3    -- 顶部scene6连续失败局数
Shuffle4Config.TOP_SHOW_NO_WILD_CARD_TIMES = 5       -- 连续5次没摸到万能牌（癞子|财神）
-- 只做 0,1,2,3,4,6,7
Shuffle4Config.TIP_SCENE = {
    SCENE_0 = 1, -- 当其他玩家本局开局时使用了洗牌，但自己没有使用，且没有预约下一局洗牌
    SCENE_1 = 2, -- 当其他玩家预约了下一局洗牌，且自己没有预约
    SCENE_2 = 3, -- 当自己本局失败，且分数小于0，且自己没有预约下局洗牌
    SCENE_3 = 4, -- 本局自己使用了洗牌，且获得胜利，且没有预约下一局洗牌
    SCENE_4 = 5, -- 被点炮
    SCENE_5 = 6,
    SCENE_6 = 7, -- 连续失败3小局
    SCENE_7 = 8, -- 麻将癞子/财神玩法第5手没有摸到癞子/财神(临海麻将和杜桥麻将)
    SCENE_8 = 9,
}

Shuffle4Config.XIPAI_FROM = {
    TABLE       = "table",
    RESULT      = "result",
    RESULT_DIS  = "result_discount",
}

-- 折扣id
Shuffle4Config.DISCOUNT_ID = {
    ID_2001 = 2001,
    ID_2002 = 2002,
    ID_2003 = 2003,
    ID_2004 = 2004,
    ID_2005 = 2005,
    ID_2006 = 2006,
    ID_2007 = 2007,
    ID_2008 = 2008,
    ID_2009 = 2009,
    ID_2010 = 2010,
}

--[[ 提示配置，部分内容会放到远端
    TOP: 顶部提示相关配置，roundCnt：每小局显示次数，dayCnt：每个提示当天不弹出提示的控制值，cdJuNum：不使用（关闭或超时）后再次弹出的冷却小局数，showTime：展示时长，tip：显示文案，某些需要根据游戏id配，所以可能是个table，可按场景特判
    DISCOUNT：dayCnt：每日弹出最大次数，cdJuNum：弹出后冷却X小局弹出，showTime：触发后，如果玩家使用之后激活实效倒计时，倒计时结束，折扣恢复。单位：秒，prob：概率*100，discount：折扣*100，disLimit：档位最低限制，服务会下发该玩家的档位值，然后倒叙与这个值比较，>= disLimit就属于该档位
]]
Shuffle4Config.TIP_CONFIG = {
    TOP = {
        [Shuffle4Config.TIP_SCENE.SCENE_0] = { roundCnt = 1, dayCnt = 2, cdJuNum = 8, showTime = 5, tip = "玩家【%s】本局使用了洗牌,您要体验吗？" },
        [Shuffle4Config.TIP_SCENE.SCENE_1] = { roundCnt = 1, dayCnt = 2, cdJuNum = 8, showTime = 5, tip = "玩家【%s】已预约下局使用洗牌,您要预约吗？" },
        [Shuffle4Config.TIP_SCENE.SCENE_2] = { roundCnt = 1, dayCnt = 2, cdJuNum = 6, showTime = 5, tip = "是否试试洗牌，换换手气！" },
        [Shuffle4Config.TIP_SCENE.SCENE_3] = { roundCnt = 1, dayCnt = 2, cdJuNum = 4, showTime = 5, tip = "恭喜您，获得本局胜利，是否再用一次洗牌！" },
        [Shuffle4Config.TIP_SCENE.SCENE_4] = { roundCnt = 1, dayCnt = 2, cdJuNum = 6, showTime = 5, tip = "被点炮啦！洗洗牌，好运来！" },
        [Shuffle4Config.TIP_SCENE.SCENE_5] = { roundCnt = 1, dayCnt = 2, cdJuNum = 6, showTime = 5, tip = "被春天啦！洗洗牌，好运来！" },
        [Shuffle4Config.TIP_SCENE.SCENE_6] = { roundCnt = 1, dayCnt = 2, cdJuNum = 6, showTime = 5, tip = "牌运差！试试洗牌，换换手气！" },
        [Shuffle4Config.TIP_SCENE.SCENE_7] = { roundCnt = 1, dayCnt = 2, cdJuNum = 5, showTime = 5, tip = "摸不到财神？试试洗牌下一局换换手气 ！" },
        [Shuffle4Config.TIP_SCENE.SCENE_8] = { roundCnt = 1, dayCnt = 2, cdJuNum = 5, showTime = 5, tip = "全是小牌？试试洗牌换换手气！" },
    }
    -- 折扣走远端配置，如果未配置，则不开启
}

-- 洗牌5.0请求类型
Shuffle4Config.ReqOptsType = {
    OPTS_TYPE_GET = 0, -- 获取
    OPTS_TYPE_SET = 1, -- 设置
    OPTS_TYPE_DEL = 2, -- 清除整个
    OPTS_TYPE_REM = 3, -- 清除单个玩家
}

Shuffle4Config.ShuffleOpt = {
    Get = 0, -- 0 获取信息
    Set = 1, -- 1 触发策略
    Free = 2 -- 2 免费使用
}

function Shuffle4Config:isSupport()
    local lobbyID = CF.areaData:getLobbyID()
    local configModule = CF.getLobbyModule("Configuration")
    if not configModule then
        return false
    end
    local allJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    if not allJsonData or not allJsonData.Shuffle4LobbyID then
        return false
    end
    for _,lobbyid in pairs(allJsonData.Shuffle4LobbyID) do
        if lobbyID == lobbyid then
            return true
        end
    end
    return false
end

-- 获取远端配置的折扣配置
function Shuffle4Config:getDiscountCfg()
    local lobbyID = CF.areaData:getLobbyID()
    local configModule = CF.getLobbyModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    if configJsonData then
        return configJsonData.ShuffleDiscountInfo
    end
end

return Shuffle4Config�