local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local Config = {}

Config.GUIDE_TYPE = {
    BOX_ROOM_CREATE = 1, --好友房-创建  打开创建面板
    BOX_ROOM_JOIN = 2,   --好友房-加入  打开加入面板
    MATCH_OPEN = 3,      --比赛场  打开并进入比赛场
    PEAK_RACE_OPEN = 4,  --巅峰赛  打开并进入巅峰场
    GOLD_ROOM_JOIN = 5,  --金币房  打开并进入金币场对应游戏
    LZDDZ = 6,           --连炸斗地主 
}

Config.STYLE = {
    [1] = {textColor = cc.c3b(62,94,102)},
    [2] = {textColor = cc.c3b(0x77,0x57,049)},
    [3] = {textColor = cc.c3b(119,87,73)},
    [4] = {textColor = cc.c3b(0x48,0x4f,0x74)},
}

-- 监测金币场游戏是否需要热更
Config.isNeedHotUpdata = function(gameId)
    local LobbyConfig = require("lobby.Modules.Lobby.Config")
    if XH.configerManager:getIsIosTishen() then
        return false
    end
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    local HOTUPDATE_OPEN = false
    if device.platform == "windows" and WINDOWS_HOTUPDATE_OPEN then
        HOTUPDATE_OPEN = true
    end
    if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform  or cc.PLATFORM_OS_ANDROID == targetPlatform then 
        HOTUPDATE_OPEN = true
    end

    if HOTUPDATE_OPEN then
        local configer = require("app.Config.Parse.GameSubConfiger").new()
        local gameid = tonumber(gameId)
        local key = configer:getGameTypePathByGameId(gameid)
        if key == "" then
            return false
        end
        local key2 = key
        if key == "LiangBang" or key == "DoubleKou" or key == "ShutCards" or key == "Landlords" or key == "HongShi" or key == "DaTong" or key == "LookAnxiously" or key == "DarkShuangKou" or key == "WuLong" then
            -- 兼容，将之前的牌类游戏关键字转为Card
            key2 = "Card"
        end
        lobby = lobby or {}
        lobby._needUpdate = lobby._needUpdate or {}
        if lobby._needUpdate[key2] == nil or lobby._needUpdate[key2] == true then
            local HotUpdateThree = require('app.hotupdate.games.GameResChecker')
            HotUpdateThree._startHotFix(gameid, key2, 1)
            return true
        end
    end
    return false
end

-- 加入房间
Config.JOIN_ROOM = function()
    local position = XH.playerData:getPlayerPosition()
    if position.gameID == 0 then
        if cc.UserDefault:getInstance():getBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID()) then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,            
            }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")
        else
            XH.viewManager:openView("CreateBoxRoomView")
        end
    else
        XH.TipTool.showLoading()
        local func = function ()
            if tonumber(position.teaID) ~= 0 and not XH.lobby:getModule("Im"):checkIsGroup(position.teaID) then
                --事件分发,请求进入比赛场
                XH.teaHouseManager:joinTeaHouse(position.teaID, position.roomID)
            else
                if position.teaNumber then
                    XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(position.teaNumber)
                end
                local func = function( )
                    local param = {}
                    param.appID = position.gameAppID
                    param.gameID = position.gameID
                    param.roomMode = XH.ROOM_MODE.BOXROOM
                    param.roomID = position.roomID
                    param.srsGroupID = position.srsGroupID
                    param.sRoomMode = position.roomMode
                    XH.roomManager:gameStart(param)
                end

                if XH.lobby:getModule("Lobby"):isNeedHotUpdata(position.gameID) then
                    lobby.gameHotUpdateSuccessCallBack = func
                else
                    func()
                end
            end
            XH.TipTool.hideLoading()
        end
        local scheduleID
        scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
            func()
        end, 0.2, false)
    end
end

Config.GUIDE_DEFINE = {
    [Config.GUIDE_TYPE.BOX_ROOM_CREATE] = {
        desc = "好友房-创建",
        func = function()
            Config.JOIN_ROOM()
        end
    },
    [Config.GUIDE_TYPE.BOX_ROOM_JOIN] = {
        desc = "好友房-加入",
        func = function()
            if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
            if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
            cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/joinboxroom.plist")
            local position = XH.playerData:getPlayerPosition()
            if position.gameID ~= 0 then
                Config.JOIN_ROOM()
            else
                XH.viewManager:openView("JoinBoxRoomView")
            end
        end
    },
    [Config.GUIDE_TYPE.MATCH_OPEN] = {
        desc = "比赛场-打开",
        func = function()
            if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
            if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
            XH.teaHouseManager:openTeaHouseList()
        end
    },
    [Config.GUIDE_TYPE.PEAK_RACE_OPEN] = {
        desc = "巅峰赛-打开",
        func = function()
            local param = {
                gameid = 1 -- 巅峰赛gameid
            }
            local newGoldController = require("newgold.NewGoldController")
            newGoldController:getInstance():enter(param)
        end
    },
    [Config.GUIDE_TYPE.GOLD_ROOM_JOIN] = {
        desc = "金币场-打开",
        func = function(params)
            if params and params[1] and params[2] then
                local gameid = tonumber(params[1])
                local players = tonumber(params[2])
                if not gameid or not players then
                    return
                end
                local func = function()
                    local confID = XH.goldConfigManager:getConfIDByGameID(gameid,players)
                    if confID == nil then 
                        return 
                    end
                    local goldInfo = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
                    local roomInfo = goldInfo.roomInfo
                    local roomLevelInfos = goldInfo.roomLevelInfos
                    if not roomInfo or not roomLevelInfos then 
                        return 
                    end
                    -- 获取合适的房间加入
                    local mRroomLevelInfo = nil
                    local sr = XH.playerData:getSR()
                    for i, roomLevelInfo in ipairs(roomLevelInfos) do
                        local minrich = roomLevelInfo.minrich
                        local maxrich = roomLevelInfo.maxrich
                        if maxrich == -1 then
                            if sr >= minrich then
                                mRroomLevelInfo = roomLevelInfo
                                break
                            end
                        else
                            if sr >= minrich and sr < maxrich then
                                mRroomLevelInfo = roomLevelInfo
                                break
                            end
                        end
                    end
                    if not mRroomLevelInfo or not mRroomLevelInfo.roomnameflag then
                        XH.TipTool.showToast("加入失败，没有合适的房间")
                        return
                    end

                    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
                    local levelCfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "Level")
                    if levelCfg and levelCfg.Game then 
                        local GameDic = levelCfg.Game
                        
                        local configGameInfo2 = GameDic[tostring(gameid).."_"..tostring(players)] 
                        if configGameInfo2 and configGameInfo2.icon_params and configGameInfo2.icon_params.SrsGroupId then
                            local SrsGroupId = type(configGameInfo2.icon_params.SrsGroupId) == "table" and configGameInfo2.icon_params.SrsGroupId[mRroomLevelInfo.roomnameflag] or configGameInfo2.icon_params.SrsGroupId 
                            XH.lobby:getModule("Gold"):reqJoinGoldRoom(confID, mRroomLevelInfo.roomnameflag , SrsGroupId)
                            return
                        end

                        local configGameInfo1 = GameDic[tostring(gameid)]
                        if configGameInfo1 and configGameInfo1.icon_params and configGameInfo1.icon_params.SrsGroupId then
                            local SrsGroupId = type(configGameInfo1.icon_params.SrsGroupId) == "table" and configGameInfo1.icon_params.SrsGroupId[mRroomLevelInfo.roomnameflag] or configGameInfo1.icon_params.SrsGroupId 
                            XH.lobby:getModule("Gold"):reqJoinGoldRoom(confID, mRroomLevelInfo.roomnameflag , SrsGroupId)
                            return
                        end
                    end
                    XH.lobby:getModule("Gold"):reqJoinGoldRoom(confID, mRroomLevelInfo.roomnameflag)
                end

                if Config.isNeedHotUpdata(gameid) then
                    lobby.gameHotUpdateSuccessCallBack = func
                else
                    func()
                end
            end
        end
    },
    [Config.GUIDE_TYPE.LZDDZ] = {
        desc = "连炸斗地主-打开",
        func = function()
           XH.lobby:getModule("Lobby"):enterNewGold()
        end
    },
}

-- 获取公用配置
function Config:getGuideAll()
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return
    end
    local configJsonData = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if configJsonData then
        return configJsonData.GuideNew
    end
end

-- 获取对应区的配置
function Config:getGuideList()
    local configData = self:getGuideAll()
    if not configData and type(configData) ~= "table" then
        return
    end
    local lobbyid = XH.areaData:getLobbyID()
    if not lobbyid then
        return
    end
    -- 获取本区配置，如无则读取通用配置
    local list = configData[tostring(lobbyid)] 
    if not list then
        list = configData["general"]
    end
    return list
end

return Config+