-- 包厢创建面板「十三张」跳转微信小程序：all-total-AllConfig
-- "BoxRoomShiSanZhangMini": [7128, 7115] — 开放地区 id 列表

local ShiSanZhangMiniUtil = {}

local DEFAULT_GAME_ID = 30580
ShiSanZhangMiniUtil.BTN_TAG = DEFAULT_GAME_ID

local DEFAULT_APPID = "wx5273ca61ed6c3ede"
local DEFAULT_ENV_VERSION = "release"

-- 包厢列表按钮文案：茶苑系 / 边锋系（与运营「浙江包_xxx」包体对应，运行时以 areaID 判定）
-- 茶苑：浙江包_温州茶苑、丽水茶苑、温州熟客麻将、瑞安茶苑、乐清茶苑、青田茶苑
-- 边锋：浙江包_边锋杭麻圈、边锋台州麻将、边锋陕西、衢州麻友圈、湖州麻将、绍兴麻将、
--       浙中麻将、舟山棋牌、嘉兴麻将、宝宝杭州麻将、新余姚棋牌、边锋宁波、边锋越牌圈
local CHAYUAN_AREA_IDS = {
    [7127] = true, -- 温州茶苑
    [7128] = true, -- 丽水茶苑
    [7105] = true, -- 温州熟客麻将
    [7126] = true, -- 瑞安茶苑
    [7121] = true, -- 乐清茶苑
    [7129] = true, -- 青田茶苑
}

function ShiSanZhangMiniUtil.getListBtnDisplayText()
    local areaId = XH.areaData:getAreaID()
    if CHAYUAN_AREA_IDS[areaId] then
        return "茶苑十三张"
    end
    return "边锋十三水"
end

function ShiSanZhangMiniUtil.getConfig()
    return XH.lobby:getModule("Configuration"):getAllConfigData("BoxRoomShiSanZhangMini")
end

function ShiSanZhangMiniUtil.isAreaEnabled()
    local list = ShiSanZhangMiniUtil.getConfig()
    if type(list) ~= "table" then
        return false
    end
    local aid = tostring(XH.areaData:getAreaID())
    for _, areaId in ipairs(list) do
        if tostring(areaId) == aid then
            return true
        end
    end
    return false
end

function ShiSanZhangMiniUtil.openMiniProgram()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq26040201, { page = "创房面板" })

    local areaId = XH.areaData:getAreaID()
    local query = string.format(
        "sessionFrom=1&gameId=%s&lcc=zjb_%s_boxroom_%s&lwccss=zjb_%s_boxroom",
        tostring(DEFAULT_GAME_ID),
        tostring(areaId),
        tostring(XH.playerData:getNumberID()),
        tostring(areaId)
    )
    local queryEnc = string.urlencode(query)
    local url = string.format(
        "weixin://dl/business/?appid=%s&path=&query=%s&env_version=%s",
        DEFAULT_APPID,
        queryEnc,
        DEFAULT_ENV_VERSION
    )
    cc.Application:getInstance():openURL(url)
end

return ShiSanZhangMiniUtil

