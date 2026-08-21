--[[
    玩法触达（GamePlayReach）配置
    IOP 运营后台下发玩法/功能更新内容，客户端在创建面板、比赛场设置等场景展示红点与标准弹窗。
]]
local GlobalConfig = require("app.Config.GlobalConfig")

local GamePlayReachConfig = {}

-- 更新类型：与 IOP 后台 update_type 字段对应
GamePlayReachConfig.UPDATE_TYPE = {
    GAME_RULE = 1, -- 玩法更新：匹配 gameid，展示玩法列表/规则项红点
    FEATURE = 2,   -- 功能更新（预留，固定玩法页签红点走 GAME_RULE）
}

-- 埋点 location 字段，标识红点/弹窗触达场景
GamePlayReachConfig.LOCATION = {
    BOX_CREATE_GAME = "box_create_game",
    BOX_CREATE_RULE = "box_create_rule",
    TEA_CREATE_GAME = "tea_create_game",
    TEA_CREATE_RULE = "tea_create_rule",
    TEA_SETUP_PLAYMODE = "tea_setup_playmode",
    TEA_PLAYMODE_CREATE = "tea_playmode_create",
    TEA_PLAYMODE_DETAIL = "tea_playmode_detail",
}

GamePlayReachConfig.LOCATION_NAME = {
    [GamePlayReachConfig.LOCATION.BOX_CREATE_GAME]="包厢面板",
    [GamePlayReachConfig.LOCATION.BOX_CREATE_RULE]="包厢规则",
    [GamePlayReachConfig.LOCATION.TEA_CREATE_GAME]="比赛场面板",
    [GamePlayReachConfig.LOCATION.TEA_CREATE_RULE]="比赛场规则",
    [GamePlayReachConfig.LOCATION.TEA_SETUP_PLAYMODE]="比赛玩法设置",
    [GamePlayReachConfig.LOCATION.TEA_PLAYMODE_CREATE]="玩法创建",
    [GamePlayReachConfig.LOCATION.TEA_PLAYMODE_DETAIL]="玩法详情",
}

GamePlayReachConfig.MAX_RULE_RED_DOT = 3       -- 同面板规则项红点上限
GamePlayReachConfig.TRACK_EXPIRE_DAYS = 7      -- 埋点上报有效期（天）
GamePlayReachConfig.RED_DOT_NODE_NAME = "_KW_GAMEPLAY_REACH_RED"
GamePlayReachConfig.RED_DOT_RES = "#hall/Image/lobbyNew/Img_redpoint.png"

-- Debug/Test 环境走本地 mock，用于接口未就绪时校验参数与流程
GamePlayReachConfig.USE_LOCAL_MOCK = false --GlobalConfig.IsDebug or GlobalConfig.IsTest

-- IOP 接口返回单条配置的必填字段，缺失则本地丢弃该条
GamePlayReachConfig.REQUIRED_FIELDS = {
    "id", "title", "content", "update_type", "effective_time", "valid_days", "show_count",
}

return GamePlayReachConfig
