local UserDefault = {}
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

local KEY_TYPE = { BOOL = 1, INT = 2, STRING = 3, JSON = 4 }

UserDefault.KEY_ID = {
    --
    KW_ACT_CZCW_TIMES = 1, -- 超值畅玩
    KW_LOCAL_TOKEN_50 = 2, -- 50本地缓存的token
    KW_LOCAL_TOKEN_TIME_50 = 3,
    KW_LOCAL_GOLD_USER_ID = 4,
    KW_ACT_COMEBACK_TIMES = 5,
    KW_ACT_IS_BROKEN = 6, --是否破产过
    KW_TIP_SHOW_TIMES = 7, --显示提示
    KW_ACT_EXCHANGE_SUCCESS_TIMES = 8, --翻本-兑换成功次数
    KW_ACT_BUY_SUCCESS_TIMES = 9, --翻本-购买成功次数
    KW_ACT_SHOW_STATE = 10, --翻本-活动显示状态
    KW_LAST_GOLD_LEVEL = 11, --上一次金币场场次
    KW_TIP_SHOW_BBXL_GUIDE = 12, --显示血流引导
}

function UserDefault:getKeyInfoTable()
    return {
        --
        [UserDefault.KEY_ID.KW_ACT_CZCW_TIMES] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_ACT_CZCW_TIMES_%s_%d_%d", getFullKeyFunc = "getFullKeyTodayLobbyidAndNumid" },
        [UserDefault.KEY_ID.KW_LOCAL_TOKEN_50] = { keyType = KEY_TYPE.STRING, mainKey = "GOLDNEW_KW_LOCAL_TOKEN_50_%d_%d", getFullKeyFunc = "getFullKeyByMainKeyAndNumidAreaid" },
        [UserDefault.KEY_ID.KW_LOCAL_TOKEN_TIME_50] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_LOCAL_TOKEN_TIME_50_%d_%d", getFullKeyFunc = "getFullKeyByMainKeyAndNumidAreaid" },
        [UserDefault.KEY_ID.KW_LOCAL_GOLD_USER_ID] = { keyType = KEY_TYPE.INT, mainKey = "KW_LOCAL_GOLD_USER_ID" },
        [UserDefault.KEY_ID.KW_ACT_COMEBACK_TIMES] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_ACT_COMEBACK_TIMES_%s_%d_%d", getFullKeyFunc = "getFullKeyTodayLobbyidAndNumid" },
        [UserDefault.KEY_ID.KW_ACT_IS_BROKEN] = { keyType = KEY_TYPE.BOOL, mainKey = "GOLDNEW_KW_ACT_IS_BROKEN_%d_%d", getFullKeyFunc = "getFullKeyByMainKeyAndNumidAreaid" },
        [UserDefault.KEY_ID.KW_TIP_SHOW_TIMES] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_TIP_SHOW_TIMES_%s_%d_%d", getFullKeyFunc = "getFullKeyTodayLobbyidAndNumid" },
        [UserDefault.KEY_ID.KW_ACT_EXCHANGE_SUCCESS_TIMES] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_ACT_EXCHANGE_SUCCESS_TIMES_%s_%d_%d", getFullKeyFunc = "getFullKeyTodayLobbyidAndNumid" },
        [UserDefault.KEY_ID.KW_ACT_BUY_SUCCESS_TIMES] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_ACT_BUY_SUCCESS_TIMES_TIMES_%s_%d_%d", getFullKeyFunc = "getFullKeyTodayLobbyidAndNumid" },
        [UserDefault.KEY_ID.KW_ACT_SHOW_STATE] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_ACT_SHOW_STATE_%s_%d_%d", getFullKeyFunc = "getFullKeyTodayLobbyidAndNumid" },
        [UserDefault.KEY_ID.KW_LAST_GOLD_LEVEL] = { keyType = KEY_TYPE.INT, mainKey = "GOLDNEW_KW_LAST_GOLD_LEVEL" },
        [UserDefault.KEY_ID.KW_TIP_SHOW_BBXL_GUIDE] = { keyType = KEY_TYPE.INT, mainKey = "KW_TIP_SHOW_BBXL_GUIDE" },
    }
end

function UserDefault:getWholeInfoByKey(key, Value, extraParam)
    local ret = {}
    local keyInfo = self:getKeyInfoTable()[key] or {}
    if keyInfo.getFullKeyFunc then
        ret.fullKey = self[keyInfo.getFullKeyFunc](self, keyInfo.mainKey, extraParam)
    else
        ret.fullKey = keyInfo.mainKey
    end
    ret.Value = Value or keyInfo.defaultValue
    ret.keyType = keyInfo.keyType
    return ret
end

---------------------------------------------------------
-- @brief 设置本地缓存
-- @param key 对应UserDefault.KEY_ID的成员， Value 存入值， extraParam额外参数，用于拼 fullKey的参数拓展
-- @return nil
---------------------------------------------------------
function UserDefault:setValue(key, Value, extraParam)
    local wholeInfo = self:getWholeInfoByKey(key, Value, extraParam)
    local keyType = wholeInfo.keyType or 0
    local fullKey = wholeInfo.fullKey
    Value = wholeInfo.Value
    if keyType == KEY_TYPE.BOOL then
        cc.UserDefault:getInstance():setBoolForKey(fullKey, Value or false)
    elseif keyType == KEY_TYPE.INT then
        cc.UserDefault:getInstance():setIntegerForKey(fullKey, Value or 0)
    elseif keyType == KEY_TYPE.STRING then
        cc.UserDefault:getInstance():setStringForKey(fullKey, Value or "")
    elseif keyType == KEY_TYPE.JSON then
        cc.UserDefault:getInstance():setStringForKey(fullKey, json.encode(Value) or "")
    end
end

function UserDefault:getValue(key, Value, extraParam)
    local wholeInfo = self:getWholeInfoByKey(key, Value, extraParam)
    local keyType = wholeInfo.keyType or 0
    local fullKey = wholeInfo.fullKey
    Value = wholeInfo.Value
    if keyType == KEY_TYPE.BOOL then
        return cc.UserDefault:getInstance():getBoolForKey(fullKey, Value or false)
    elseif keyType == KEY_TYPE.INT then
        return cc.UserDefault:getInstance():getIntegerForKey(fullKey, Value or 0)
    elseif keyType == KEY_TYPE.STRING then
        return cc.UserDefault:getInstance():getStringForKey(fullKey, Value or "")
    elseif keyType == KEY_TYPE.JSON then
        local jsonInfo = cc.UserDefault:getInstance():getStringForKey(fullKey, json.encode(Value) or "")
        return json.decode(jsonInfo)
    end
end

-- 全key 由主key 和 当前 areaid、自身numid 组成
function UserDefault:getFullKeyByMainKeyAndNumidAreaid(mainKey)
    return string.format(mainKey, GoldAreaConfig.AreaID, GoldPlayerData.NumId)
end

-- 全key 由主key 和 当前Lobbyid、自身numid 组成
function UserDefault:getFullKeyByMainKeyAndNumidLobbyid(mainKey)
    return string.format(mainKey, GoldAreaConfig.AreaID, GoldPlayerData.NumId)
end

-- 全key 由主key 和 当前Lobbyid 组成
function UserDefault:getFullKeyByMainKeyAndLobbyid(mainKey)
    return string.format(mainKey, GoldAreaConfig.AreaID)
end

-- 全key 由主key 和 自身numid 组成
function UserDefault:getFullKeyByMainKeyAndNumid(mainKey)
    return string.format(mainKey, GoldPlayerData.NumId)
end

-- 全key 由主key和后缀拼接而成
function UserDefault:getFullKeyByMainKeyAndSufKey(mainKey, extraParam)
    local key = extraParam.key or ""
    return mainKey .. key
end

-- 全key 由主key和前缀拼接而成
function UserDefault:getFullKeyByMainKeyAndPreKey(mainKey, extraParam)
    local key = extraParam.key or ""
    return key .. mainKey
end

-- 全key 由主key和 当天时间、lobbyid组成
function UserDefault:getFullKeyTodayLobbyid(mainKey)
    return string.format(mainKey, os.date("%Y-%m-%d"), GoldAreaConfig.AreaID)
end

-- 全key 由主key和 当天时间、lobbyid 和自身numid组成
function UserDefault:getFullKeyTodayLobbyidAndNumid(mainKey)
    return string.format(mainKey, os.date("%Y-%m-%d"), GoldAreaConfig.AreaID, GoldPlayerData.NumId)
end

---------------------------------------------------------
-- @brief 设置玩家的邮寄奖励地址
-- @param table，包含玩家真实姓名手机号地址
-- @return nil
---------------------------------------------------------
function UserDefault:setUserPostInfo(param)
    param = param or {}
    param.realname = param.realname or ""
    param.mobile = param.mobile or ""
    param.addr = param.addr or ""
    param.province = param.province or ""
    param.city = param.city or ""
    param.area = param.area or ""

    self:setValue(UserDefault.KEY_ID.PLAYER_REAL_NAME, param.realname)
    self:setValue(UserDefault.KEY_ID.PLAYER_MOBILE, param.mobile)
    self:setValue(UserDefault.KEY_ID.PLAYER_ADDRESS, param.addr)
end

---------------------------------------------------------
-- @brief 获取玩家的邮寄奖励地址
-- @param table，包含玩家真实姓名手机号地址等默认值
-- @return table,包含玩家真实姓名手机号地址等信息
---------------------------------------------------------
function UserDefault:getUserPostInfo(param)
    param = param or {}
    param.realname = param.realname or ""
    param.mobile = param.mobile or ""
    param.addr = param.addr or ""
    param.province = param.province or ""
    param.city = param.city or ""
    param.area = param.area or ""

    param.realname = self:getValue(UserDefault.KEY_ID.PLAYER_REAL_NAME, param.realname)
    param.mobile = self:getValue(UserDefault.KEY_ID.PLAYER_MOBILE, param.mobile)
    param.addr = self:getValue(UserDefault.KEY_ID.PLAYER_ADDRESS, param.addr)
    return param
end

function UserDefault:getFullKey_GAMERULE_CACHE_BUTTON_STATE(mainKey, extraParam)
    local gameID = extraParam.gameID or ""
    local categoriesIndex = extraParam.categoriesIndex
    local nodeName = extraParam.nodeName or ""
    local keyCacheInfo = extraParam.keyCacheInfo or ""

    local keyString = "gameRule" .. gameID .. "_" .. nodeName .. "_1"
    if categoriesIndex then
        keyString = "gameRule" .. gameID .. "_" .. nodeName .. "_" .. categoriesIndex
    end
    keyString = string.gsub(keyString, "=", "")
    keyString = string.gsub(keyString, "'", "")
    keyString = string.gsub(keyString, ";", "")
    return keyString .. keyCacheInfo
end

function UserDefault:getFullKey_GAMERULE_CATEGORIE_SELECT(mainKey, extraParam)
    local gameID = extraParam.gameID or 0
    local keyCacheInfo = extraParam.keyCacheInfo or ""
    return "gameRule" .. gameID .. "_categorieSelect" .. keyCacheInfo
end

function UserDefault:getFullKey_GAMERULE_CACHE_EXIST(mainKey, extraParam)
    local gameID = extraParam.gameID
    local categoriesIndex = extraParam.categoriesIndex
    local keyCacheInfo = extraParam.keyCacheInfo or ""
    local key = "gameRule" .. gameID .. "cache_1"
    if categoriesIndex then
        key = "gameRule" .. gameID .. "cache_" .. categoriesIndex
    end
    return key .. keyCacheInfo
end

function UserDefault:getFullKey_GAMERULE_VERSION(mainKey, extraParam)
    local gameID = extraParam.gameID or 0
    local keyCacheInfo = extraParam.keyCacheInfo or ""
    return "gameRule" .. gameID .. "_gameRuleVersion" .. keyCacheInfo
end

function UserDefault:getFullKey_KW_DATA_REQ_PLAYER_BILL_HALL(mainKey, extraParam)
    local date = extraParam.date or ""
    return string.format(mainKey, date, GoldPlayerData.NumId)
end

function UserDefault:getFullKey_TeaHouseStorageTool(mainKey, extraParam)
    local numid = extraParam.numid or ""
    return string.format(mainKey, GoldAreaConfig.AreaID, numid)
end

function UserDefault:getFullKey_LAST_CHOOSE_GAME_ID(mainKey, extraParam)
    extraParam = extraParam or {}
    local keyCacheInfo = extraParam.keyCacheInfo or ""
    return "LAST_CHOOSE_GAME_ID" .. GoldAreaConfig.AreaID .. keyCacheInfo
end

function UserDefault:getFullKey_TABLE_BILL_DOWNLOAD_FINISH(mainKey, extraParam)
    local date = extraParam.date or ""
    local teaid = extraParam.teaid or ""
    local key = "TABLE_BILL_DOWNLOAD_FINISH_" .. teaid .. "_" .. GoldAreaConfig.AreaID .. "_" .. GoldPlayerData.NumId .. "_" .. date
    return key
end

function UserDefault:getFullKey_KW_DATA_REQ_PLAYER_BILL(mainKey, extraParam)
    local date = extraParam.date or ""
    local teaNumber = extraParam.teaNumber or ""
    return "KW_DATA_REQ_PLAYER_BILL" .. date .. GoldPlayerData.NumId .. teaNumber
end

return UserDefault�+  