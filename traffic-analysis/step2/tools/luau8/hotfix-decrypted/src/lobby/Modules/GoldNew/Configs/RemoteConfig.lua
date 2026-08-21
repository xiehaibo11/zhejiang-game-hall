-- RemoteConfig 类用于管理远程配置信息，包括活动按钮配置和常驻按钮配置等。
local RemoteConfig = class("RemoteConfig")
local LocalConfig = import(".LocalConfig")
local Utils = import("..Tool.Utils")
local LobbyConfig = require("lobby.Modules.Lobby.Config")

local LianYunConfig = {
    [LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI] = {
        id = LocalConfig.BTN_ID.LIANYUN_QIXINGBAOPAI, 
        GameTitle = "七星宝牌", 
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/NewGoldHall/Main/_Plist.plist",
            markResName = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
            barResName = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
            markResNameSmall = "hall/Image/NewGoldHall/Main/newgold_progress_3.png",
            barResNameSmall = "hall/Image/NewGoldHall/Main/newgold_progress_3.png",
            markResNameMore = "hall/Image/NewGoldHall/Main/newgold_progress_2.png",
            barResNameMore = "hall/Image/NewGoldHall/Main/newgold_progress_2.png",
            markOffset = cc.p(0, 2),
            barOffset = cc.p(0, 2),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 42,
            TextColor = cc.c3b(255, 255, 255),
            OutLineColor = cc.c4b(0x1c, 0x1c, 0x1c, 255),
            OutLineSize = 2,
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40),
            bgInVisible = true,
            opacity = 200,
            type = "big",
        }
    },
    [LobbyConfig.ICON_ID.LIANYUN_CARD13] = {
        id = LocalConfig.BTN_ID.LIANYUN_CARD13,
        GameTitle = "十三张",
        ProgeressInfo = {
            Plist = "cocosStudio/hall/Image/NewGoldHall/Main/_Plist.plist",
            markResName = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
            barResName = "hall/Image/NewGoldHall/Main/newgold_progress_1.png",
            markResNameSmall = "hall/Image/NewGoldHall/Main/newgold_progress_3.png",
            barResNameSmall = "hall/Image/NewGoldHall/Main/newgold_progress_3.png",
            markResNameMore = "hall/Image/NewGoldHall/Main/newgold_progress_2.png",
            barResNameMore = "hall/Image/NewGoldHall/Main/newgold_progress_2.png",
            markOffset = cc.p(0, 2),
            barOffset = cc.p(0, 2),
            bReverseDirection = true,
            TextFont = "cocosStudio/Common/Font/fangzhengcuyuan.TTF",
            TextFontSize = 42,
            TextColor = cc.c3b(255, 255, 255),
            OutLineColor = cc.c4b(0x1c, 0x1c, 0x1c, 255),
            OutLineSize = 2,
            TextAnchorPoint = cc.p(0.5, 0.5),
            TextOffset = cc.p(0, -40),
            bgInVisible = true,
            opacity = 200,
            type = "big",
        }
    }
}

-- 构造函数，初始化 RemoteConfig 对象
function RemoteConfig:init()
    -- 初始化所有层级配置为空
    self._allLevelCfg = nil
    -- 初始化所有区域配置为空
    self._allAreaCfg = nil
end

-- 根据区域ID获取对应的配置信息
function RemoteConfig:getConfigByAreaId(areaId, gameid)
    -- 根据不同的areaId返回对应的按钮配置和区域ID
    local configs = {}
    if areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        configs = {btns = self:getActConfig("top"), areaId = areaId}
    elseif areaId == LocalConfig.BTN_AREA_ID.MAIN_LEFT_ACT then
        configs = {btns = self:getActConfig("left"), areaId = areaId}
    elseif areaId == LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_RESIDENT then
        configs = {btns = self:getResidentConfig("bottom"), areaId = areaId}
    elseif areaId == LocalConfig.BTN_AREA_ID.MAIN_BOTTOM_MORE_RESIDENT then
        configs = {btns = self:getResidentConfig("bottom-more"), areaId = areaId}
    elseif areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_RESIDENT then
        configs = {btns = self:getResidentConfig("top"), areaId = areaId}
    elseif areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        configs = {btns = self:getActConfig("top-chooseroom"), areaId = areaId}
    elseif areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_BOTTOM_ACT then
        configs = {btns = self:getActConfig("bottom-chooseroom"), areaId = areaId}
    end
    if gameid then
        configs.btns = Utils:filter(configs.btns, function(x)
            return x.gameid == nil or x.gameid == gameid
        end)
    end
    return configs
end

-- 获取活动按钮配置
function RemoteConfig:getActConfig(area)
    -- 如果缓存中有对应区域的配置，则直接返回
    if self._allAreaCfg and self._allAreaCfg.btnV2 and self._allAreaCfg.btnV2.act then
        return self._allAreaCfg.btnV2.act[area] or {}
    end
    return {}
    -- 根据不同区域返回默认的活动按钮配置
    -- if area == "top" then
    --     return {
    --         {id = 2001, sortValue = {1, 1}, defaultShow = false}, {id = 2002, sortValue = {2, 2}, defaultShow = false}
    --         -- {id = 2003, name = "top3", icon = "top3.png", sortValue = {3, 3}, defaultShow = true},
    --         -- {id = 2004, name = "top4", icon = "lobby_sharte_btn.png", sortValue = {4, 4}, defaultShow = true}
    --     }
    -- end
    -- if area == "top-chooseroom" then
    --     return {
    --         -- {id = 2004, name = "top1", icon = "top1.png", sortValue = {1, 1}, defaultShow = true},
    --         {id = 2002, icon = "top2.png", sortValue = {2, 2}, defaultShow = false}, {id = 2001, sortValue = {3, 4}, defaultShow = false}
    --     }
    -- end
    -- if area == "left" then
    --     return {
    --         {
    --             id = 3001,
    --             name = "left1",
    --             icon = "left1.png",
    --             sortValue = {0, 1},
    --             defaultShow = true,
    --             actIds = {1001, 1002, 2004},
    --             urls = {
    --                 "https://img0.baidu.com/it/u=3712526919,116002892&fm=253&fmt=auto&app=120&f=JPEG?w=1655&h=500",
    --                 "https://img1.baidu.com/it/u=1801019385,2817968827&fm=253&fmt=auto&app=138&f=JPEG?w=1600&h=500",
    --                 "https://img2.baidu.com/it/u=385573436,145518598&fm=253&fmt=auto&app=138&f=JPEG?w=499&h=210"
    --             }
    --         }, {
    --             id = 2003,
    --             name = "left2",
    --             icon = "https://img0.baidu.com/it/u=3712526919,116002892&fm=253&fmt=auto&app=120&f=JPEG?w=1655&h=500",
    --             sortValue = {1, 2},
    --             defaultShow = true,
    --             script = "print('script print 2003')"
    --         }
    --         --  {id = 2003, name = "left3", icon = "left3.png", sortValue = {2, 3}, defaultShow = true},
    --         -- {id = 2004, name = "left4", icon = "left4.png", sortValue = {3, 4}, defaultShow = true}
    --     }
    -- end
end

function RemoteConfig:getPluginConfigShow(area, config)
    if area == "bottom" then
        local moreConfig = self._allAreaCfg.btnV2.resident["bottom-more"] or {}
        for i = 1, #moreConfig do
            config[#config + 1] = moreConfig[i]
        end
    end
    local resConfig = {}
    -- 需要隐藏的列表
    local list = { LocalConfig.BTN_ID.ACT, LocalConfig.BTN_ID.SHARE, LocalConfig.BTN_ID.MAIL, LocalConfig.BTN_ID.GONG_GAO, LocalConfig.BTN_ID.MORE }
    for i = 1, #config do
        for j = 1, #list do
            if list[j] == config[i].id then
                break
            end
            if j == #list then
                resConfig[#resConfig + 1] = config[i]
            end
        end
    end
    return resConfig
end

-- 获取常驻按钮配置
function RemoteConfig:getResidentConfig(area)
    -- 如果缓存中有对应区域的配置，则直接返回
    if self._allAreaCfg and self._allAreaCfg.btnV2 and self._allAreaCfg.btnV2.resident then
        local config = self._allAreaCfg.btnV2.resident[area] or {}
        -- 这些功能内嵌直接隐藏
        if XH.isEmbeddedApp() then
            return self:getPluginConfigShow(area, config)
        end
        return config
    end
    return {}
    -- 根据不同区域返回默认的常驻按钮配置
    -- if area == "bottom" then
    --     return {
    --         {id = 1001, sortValue = {1, 1}, defaultShow = true}, {id = 1002, sortValue = {1, 2}, defaultShow = true},
    --         {id = 1003, sortValue = {1, 3}, defaultShow = true}, {id = 1004, sortValue = {1, 4}, defaultShow = true},
    --         {id = 1100, sortValue = {1, 4}, defaultShow = true}
    --     }
    -- end
    -- if area == "bottom-more" then
    --     return {
    --         {id = 1010, sortValue = {1, 1}, defaultShow = true}, {id = 1011, sortValue = {2, 2}, defaultShow = true},
    --         {id = 1012, sortValue = {3, 3}, defaultShow = true}, {id = 1009, sortValue = {4, 4}, defaultShow = true}
    --     }
    -- end
    -- if area == "top" then
    --     return {
    --         {id = 1006, icon = "lobby_menu_shezhi.png", sortValue = {1, 1}, defaultShow = true},
    --         {id = 1007, icon = "lobby_bag_btn.png", sortValue = {1, 2}, defaultShow = true},
    --         {id = 1008, icon = "lobby_serviec_btn.png", sortValue = {1, 3}, defaultShow = true}
    --     }
    -- end
end

-- 初始化所有配置信息
function RemoteConfig:initAllCfg(force)
    -- 初始化金币场房间信息配置
    if force or not self._allLevelCfg then
        local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
        local levelCfg = XH.Bridge:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "GameListConfig")
        self._allLevelCfg = levelCfg
    end
    -- 初始化全区游戏配置
    if force or not self._allAreaCfg then
        local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
        local levelCfg = XH.Bridge:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "NewHall")
        self._allAreaCfg = levelCfg
    end
end

-- 根据areaID和键名获取配置信息
function RemoteConfig:getConfig(areaid, key, withChabnnelID)
    -- 获取指定区域的配置信息
    local cfg = self:getAreaConfig(areaid)
    if not cfg or not cfg[key] then
        return nil
    end
    -- 如果需要考虑渠道ID，则返回特定渠道的配置
    if not withChabnnelID then
        return cfg[key]
    end
    return cfg[key .. "_" .. device.platform] or cfg[key]
end

-- 获取当前区域的金币房信息
function RemoteConfig:getCurAreaGoldRoomInfo()
    return XH.goldConfigManager:getGoldRoomlist()
end

-- 获取指定区域的配置信息
function RemoteConfig:getAreaConfig(areaid)
    -- 获取所有区域配置
    local cfg = self:getAllAreaConfig()
    -- 获取当前区域ID
    local areaId = areaid or XH.areaData:getAreaID()
    if XH.isEmbeddedApp() then
        areaId = 0
    end
    -- 查找并返回指定区域的配置
    local idx = Utils:findIdx(cfg, function(v)
        return v.areaId == areaId
    end)
    return cfg[idx]
end

-- 获取当前区域的金币房游戏ID列表
function RemoteConfig:getGoldRoomLeisureIDs(areaid)
    -- 获取指定区域的入口配置
    local leisureIDs = clone(self:getConfig(areaid, "entry", true))
    if leisureIDs then
        -- 获取其他游戏ID并合并到gameIds中
        local other = self:getConfig(areaid, "other") or {}
        for i = 1, #other do
            local idx = Utils:findIdx(leisureIDs, function(v)
                return v == other[i]
            end)
            if idx == -1 then
                table.insert(leisureIDs, other[i])
            end
        end
        return leisureIDs
    end
    return {}
end

-- 获取当前区域的主要入口信息
function RemoteConfig:getCurAreaMainEntryInfo()
    -- 获取当前区域的金币房信息
    local gameInfo = self:getCurAreaGoldRoomInfo()
    local isSupportFish = XH.Bridge:isSupportRRBY()
    -- 获取入口配置
    local entryCfg = self:getConfig(nil, "entry", true) or {}
    local info = {}
    for i = 1, #entryCfg do
        if isSupportFish and i == 5 then
            break
        end
        local idx = Utils:findIdx(gameInfo, function(v)
            return v.LeisureID == entryCfg[i]
        end)
        if idx ~= -1 then
            -- table.insert(info, gameInfo[idx])
            info[i] = gameInfo[idx]
        end
        if entryCfg[i] == self:getLeisureIDByIconID(LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI) then
            info[i] = LianYunConfig[LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI]
        end
        if entryCfg[i] == self:getLeisureIDByIconID(LobbyConfig.ICON_ID.LIANYUN_CARD13) then
            info[i] = LianYunConfig[LobbyConfig.ICON_ID.LIANYUN_CARD13]
        end
    end
    return info
end

-- 获取当前区域的游戏信息（排除入口游戏）
function RemoteConfig:getCurAreaGameInfoExcludeEntry()
    -- 获取当前区域的金币房信息
    local gameInfo = self:getCurAreaGoldRoomInfo()
    local entryGameIds = self:getConfig(nil, "entry", true) or {}
    local otherGameIds = {}
    local isSupportFish = XH.Bridge:isSupportRRBY()
    local info = {}

    -- 第五个为捕鱼替代游戏
    if isSupportFish and entryGameIds[5] then
        if table.indexof(otherGameIds, entryGameIds[5]) == false then
            table.insert(otherGameIds, 1, entryGameIds[5])
        end
    end
    -- 第六个开始为其他更多游戏
    for i = 6, #entryGameIds do
        table.insert(otherGameIds, entryGameIds[i])
    end

    local others = self:getConfig(nil, "other") or {}
    for i = 1, #others do
        table.insert(otherGameIds, others[i])
    end

    for i = 1, #otherGameIds do
        local idx = Utils:findIdx(gameInfo, function(v)
            return v.LeisureID == otherGameIds[i]
        end)
        if idx ~= -1 then
            table.insert(info, gameInfo[idx])
        end
        if otherGameIds[i] == self:getLeisureIDByIconID(LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI) then
            info[i] = LianYunConfig[LobbyConfig.ICON_ID.LIANYUN_QIXINGBAOPAI]
        end
        if otherGameIds[i] == self:getLeisureIDByIconID(LobbyConfig.ICON_ID.LIANYUN_CARD13) then
            info[i] = LianYunConfig[LobbyConfig.ICON_ID.LIANYUN_CARD13]
        end
    end
    return info
end

-- 获取所有金币房信息
function RemoteConfig:getAllGoldRoomInfo(isOnly50)
    if XH.isEmbeddedApp() then
        if self._allLevelCfg == nil then
            return
        end
    end
    -- 克隆金币房列表，避免直接修改原始数据
    local list = clone(XH.goldConfigManager:getGoldRoomlist())

    -- 遍历等级配置中的游戏信息
    for _, v in pairs(self._allLevelCfg.LobbyGameList) do
        local gameCfg = v -- 当前游戏配置

        -- 查找当前游戏是否已在金币房列表中
        local idx = Utils:findIdx(list, function(v2)
            return v2.LeisureID == gameCfg.LeisureID
        end)

        if idx == -1 and (not isOnly50 or gameCfg.GoldMode == 50) then -- 如果未找到，则添加到金币房列表
            table.insert(list, gameCfg)
        end
    end
    return list -- 返回完整的金币房信息列表
end

-- 根据LeisureID获取房间信息
function RemoteConfig:getRoomInfoByLeisureID(leisureID)

    -- 获取金币房列表
    local list = XH.goldConfigManager:getGoldRoomlist()

    -- 在金币房列表中查找指定LeisureID的房间信息
    for _, v in pairs(list) do
        if v.LeisureID == leisureID then
            return v -- 找到匹配的房间信息则返回
        end
    end

    -- 在等级配置中查找指定LeisureID的房间信息
    for _, v in pairs(self._allLevelCfg.LobbyGameList) do
        if v.LeisureID == leisureID then
            return v -- 找到匹配的房间信息则返回
        end
    end
    return nil -- 未找到匹配的房间信息则返回nil
end

-- 根据iconID 获取 LeisureID IconID 代码维护，LeisureID 配置中心定义和维护
function RemoteConfig:getLeisureIDByIconID(iconID)
    for _, v in pairs(self._allLevelCfg.LobbyGameList) do
        if v.IconID == iconID then
            return v.LeisureID
        end
    end
    return nil -- 未找到匹配的房间信息则返回nil
end

-- 获取当前玩法混合了其他玩法的信息
function RemoteConfig:getGameMixInfo(roomConf)
    local roomInfo = roomConf.roomInfo
    local mixInfo = (self._allAreaCfg and self._allAreaCfg.mixInfo) or {["2001"] = {2004}, ["2004"] = {2001}}
    local gameMixInfo = mixInfo[tostring(roomInfo.LeisureID)]
    if gameMixInfo == nil then
        return {roomConf}
    end
    local midx = {roomConf}
    for i = 1, #gameMixInfo do
        local mixGameId = gameMixInfo[i]
        local cfg = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(mixGameId)
        table.insert(midx, cfg)
    end
    return midx
end

-- 获取游戏入口混杂着其他游戏的信息
function RemoteConfig:getOtherGameInfo(leisureID)
    local otherGameInfo = (self._allAreaCfg and self._allAreaCfg.otherGameEntrance)
    if not otherGameInfo or not otherGameInfo[tostring(leisureID)] then
        return nil
    end
    return otherGameInfo[tostring(leisureID)]
end

-- 获取游戏入口按钮的图标信息
function RemoteConfig:getEntryIconInfo(leisureID)
    local entryIconCfg = self:getConfig(nil, "entryIcon", true)
    if entryIconCfg then
        local idx = Utils:findIdx(entryIconCfg, function(v)
            return v.id == leisureID
        end)
        if idx ~= -1 then
            return entryIconCfg[idx].icon or {}
        end
    end
    local cfg = self._allAreaCfg and self._allAreaCfg.defaultIconInfo or {}
    local idx = Utils:findIdx(cfg, function(v)
        return v.id == leisureID
    end)
    if idx ~= -1 then
        return cfg[idx].icon or {}
    end
    return nil
end

-- 获取游戏入口按钮的tag信息
function RemoteConfig:getEntryTagInfo(leisureID)
    local tagCfg = self:getConfig(nil, "tag", true)
    local tags = {}
    local tagStr = ""
    if not leisureID then
        return tags
    end
    if tagCfg and tagCfg[leisureID .. ""] then
        tagStr = tagCfg[leisureID .. ""]
    else
        local cfg = self._allAreaCfg and self._allAreaCfg.defaultTagInfo or {}
        tagStr = cfg[leisureID .. ""]
    end
    if tagStr == nil or tagStr == "" then
        return tags
    end
    local tagIds = string.split(tagStr, ',')
    for _, v in ipairs(tagIds) do
        local info = string.split(v, '_')
        local num = tonumber(info[1])
        tags[math.floor(num / 100)] = {type = num % 100, txt = info[2], ex = info[3]}
    end
    return tags
end

function RemoteConfig:getShopConfig(key)
    return (self._allAreaCfg and self._allAreaCfg.shopV2 and self._allAreaCfg.shopV2[key])
end
function RemoteConfig:getShopTagConfig()
    return (self._allAreaCfg and self._allAreaCfg.shopV2 and self._allAreaCfg.shopV2.tabs)
end
function RemoteConfig:getLobbyShopTagConfig()
    return (self._allAreaCfg and self._allAreaCfg.shopV2 and self._allAreaCfg.shopV2.lobbyTabs)
end
function RemoteConfig:getShopIconRedPointVer()
    return (self._allAreaCfg and self._allAreaCfg.shopV2 and self._allAreaCfg.shopV2.iconVer)
end
function RemoteConfig:getBagTagConfig()
    return (self._allAreaCfg and self._allAreaCfg.bag and self._allAreaCfg.bag.tabs)
end
function RemoteConfig:getBagAppendPropIDConfig()
    return (self._allAreaCfg and self._allAreaCfg.bag and self._allAreaCfg.bag.appendPropid)
end
function RemoteConfig:getConfigByName(name)
    return (self._allAreaCfg and self._allAreaCfg[name])
end

-- 获取所有区域的配置信息
function RemoteConfig:getAllAreaConfig()
    -- 返回缓存的区域配置，如果不存在则返回默认配置
    return (self._allAreaCfg and self._allAreaCfg.game) or {
        {areaName = "杭州", areaId = 7111, entry = {2009, 2012, 2005, 2032}, other = {2011, 2009, 2003}},
        {areaName = "丽水", areaId = 7128, entry = {2001, 2004, 2033, 2010, 2011}, other = {}}
        -- {areaName = "杭州", areaId = 7111, entry = {}, other = {30400, 30379}},
        -- {areaName = "丽水", areaId = 7128, entry = {30116, 30578, 30421, 30579, 30134}, other = {30386, 30310, 30312, 30159, 30134}}
    }
    -- local AreaConfig = XH.Bridge:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "AreaConfig")
    -- self._allAreaCfg.gameOld = {}
    -- for i,v in ipairs(AreaConfig) do
    --     table.insert(self._allAreaCfg.gameOld, {areaName = XH.login:getModule("ChooseArea"):getAreaName(i), areaId=i, entry = v.android, other={}})
    -- end
end

RemoteConfig:init()
return RemoteConfig
�R