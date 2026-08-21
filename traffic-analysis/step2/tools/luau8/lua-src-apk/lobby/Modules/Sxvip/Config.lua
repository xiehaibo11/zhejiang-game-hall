local SxvipConfig = {}

local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

SxvipConfig.PROP_ID = 150725 --会员道具ID
SxvipConfig.PROP_ID_SJ = 150735 --审计会员道具ID

SxvipConfig.BURSE_TYPE = 7   --会员道具类型

SxvipConfig.PROP_CONFIG_NAME = {
    [101488] = '聚宝盆',
    [150697] = '洗手' ,
    [150699] = '烧香' ,
    [101622] = '貔貅' ,
    [150698] = '移桌' ,
    [150293] = '大吉大利' ,
    [101489] = '妈祖',
    [101490] = "海底捞鱼",
    [101482] = "洗手",
    [101484] = "烧香",
    [101487] = "祛霉符",
    [101485] = "招财树",
    [101483] = "八卦",
    [101519] = "招财猫",
    [101775] = "金龙",
    [101787] = "金龙祈福",
    [150289] = "洗手",
    [101481] = "财神",
    [150700] = "财神供奉",
    [150703] = "招财树",
    [150704] = "拜财神",
    [101486] = "金蟾纳福",
    [150702] = "福禄",
    [150701] = "财神头像框"
}

-- 标签配置
SxvipConfig.TAG = {
    [1] = {
        ["icon"]  = "Sxvip_ImgCm01.png",
        ["desc"]  = "最多人买",
        ["tag"]   = "hot",
        ["value"] = 1,
    } ,
    [2] = {
        ["icon"]  = "Sxvip_ImgCm03.png",
        ["desc"]  = "新",
        ["tag"]   = "zx",
        ["value"] = 2,
    } , 
    [5] = {
        ["icon"]  = "Sxvip_ImgCm02.png",
        ["desc"]  = "特惠",
        ["tag"]   = "th",
        ["value"] = 5,
    } , 
    [7] = {
        ["icon"]  = "Sxvip_ImgCm04.png",
        ["desc"]  = "限量",
        ["tag"]   = "xl",
        ["value"] = 7,
    } , 
}

-- 菜单定义
SxvipConfig.MENU_DEFINE = {
    BUY_VIP = 1,
    VIP_PRIVILEGE = 2,
    STAITISTICS = 3,
    FRIEND_INFO = 4,
    FEED_BACK = 5,
}

-- 权限定义
SxvipConfig.SXVIP_POWER = {
    NETWORK_FIRST = 1, -- 网络专线
    WATCH = 2, -- 观战
    GET_PROPS = 3, -- 周期性领取道具
    FREE_PROPS = 4, -- 互动道具全免
    STATISTICS = 5,    --牌局统计
    FRIEND_INFO = 6,    --牌友信息
}

-- 菜单配置
SxvipConfig.MENU = {
     {
        name  = "购买会员",
        txt_normal_img  = "Sxvip_imgText01.png",
        txt_selectl_img  = "Sxvip_imgText02.png",
        item_path = "lobby.Modules.Sxvip.SxvipShopItem",
        value = SxvipConfig.MENU_DEFINE.BUY_VIP
    } ,
     {
        name  = "会员特权",
        txt_normal_img  = "Sxvip_imgText03.png",
        txt_selectl_img  = "Sxvip_imgText04.png",
        item_path = "lobby.Modules.Sxvip.SxvipPrivilegeItem",
        value = SxvipConfig.MENU_DEFINE.VIP_PRIVILEGE
    } ,
     {
        name  = "牌局统计",
        txt_normal_img  = "Sxvip_imgText05.png",
        txt_selectl_img  = "Sxvip_imgText06.png",
        item_path = "lobby.Modules.Sxvip.SxvipStatisticsItem",
        value = SxvipConfig.MENU_DEFINE.STAITISTICS
    } ,
     {
        name  = "牌友信息",
        txt_normal_img  = "Sxvip_imgText07.png",
        txt_selectl_img  = "Sxvip_imgText08.png",
        item_path = "lobby.Modules.Sxvip.SxvipFriendInfoItem",
        value = SxvipConfig.MENU_DEFINE.FRIEND_INFO
    } ,
    {
        name  = "意见反馈",
        txt_normal_img  = "Sxvip_imgText11.png",
        txt_selectl_img  = "Sxvip_imgText12.png",
        item_path = "lobby.Modules.Sxvip.SxvipFeedbackItem",
        value = SxvipConfig.MENU_DEFINE.FEED_BACK
    } ,
}

-- 会员赠送请求类型
SxvipConfig.OPT = {
    NONE = -1,
    log_send = 0, -- 赠送收礼 日志记录 opt_user_id>0搜索
    log_wait = 1, -- 索要消息 日志记录 opt_user_id>0搜索
    Send = 2, -- 赠送
    Get = 3, -- 索要
    Refuse = 4, -- 拒绝
    Agree = 5, -- 同意
}

-- 会员赠送请求类型
SxvipConfig.LOGSELECT = {
    None = 0, -- 全部
    Handler = 1, -- 可进行 赠送/拒绝操作
    SendOk = 2, -- 已送达
    GetOK = 3, -- 已领取
    Wait = 4, -- 等待同意
}

SxvipConfig.RecordState = {
    send = 0, --已赠送
    Received = 1, --已领取
    Waiting = 2, --等待对方同意
    sendOrRefuse = 3, --赠送/拒绝
    refuse = 4, --已经拒绝
    beRefused = 5, --被拒绝
    all = 6, --全部状态
}

SxvipConfig.ServerReplyRecordState = {
    WaitingOrsendOrRefuse = 1, --等待对方同意 或者 按钮显示 根据玩家id和操作的玩家id区分
    Agree = 2, --索要结果 同意
    Refuse = 3, --索要结果 拒绝 服务不下发数据
    send = 4, --赠送结果 据玩家id和操作的玩家id区分
}

SxvipConfig.SEND_ERRORCODE = {
    ERROR_NOT_ENOUGH = 1009, -- 会员天数不足
    ERROR_GET_ONE = 15025, -- 个人索要限制
    ERROR_GET_ALL = 15026, -- 所有人索要限制
    ERROR_SEND_ONE = 15027, -- 个人赠送限制
    ERROR_SEND_ALL = 15028, --所有人赠送限制
}

-- 获取远端配置的时效会员系统
function SxvipConfig:geSxvipLobby()
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    if configJsonData then
        return configJsonData.Sxvip
    end
end

-- 获取远端配置的时效会员系统是否显示
function SxvipConfig:getSxvipShow()
    local config = self:getSxvipAll()
    if config and config.openSxvip then
        local lobbyid = XH.areaData:getLobbyID()
        return config.openSxvip[tostring(XH.areaData:getLobbyID())]
    end
    return false
end

-- 获取远端配置的时效会员系统的商城道具类型
-- 基本应该废弃
function SxvipConfig:getSxvipShopId()
    local config = self:getSxvipAll()
    if config then
        local lobbyid = XH.areaData:getLobbyID()
        local proptype = config.prop_type[tostring(lobbyid)]
        if proptype then
            return proptype
        end
    end
end

function SxvipConfig:getFeedbackUrl()
    local config = self:getSxvipAll()
    if config then
        return config.feedback_url
    end
end

-- 获取提示语
function SxvipConfig:getOpenTips()
    local config = self:getSxvipAll()
    if config then
        return config.open_tips
    end
end

-- 获取公用配置
function SxvipConfig:getSxvipAll()
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        return configJsonData.Sxvip
    end
end

-- 获取权限静态文件URL
function SxvipConfig:getPrivilegeUrl()
    local config = self:getSxvipAll()
    if config then
        return config.privilege_url
    end
end

return SxvipConfig�