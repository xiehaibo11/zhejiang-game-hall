local PersonalCenterModule = class("GoldPersonalCenterModule", XH.ModuleBase)
local RedPointManager = import("...Manager.RedPointManager")
local RemoteConfig = import("...Configs.RemoteConfig")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local Config = import(".Config")
local LOCAL_SAVEINFO_KEY = "LOCAL_GOLDHALL_HEAD_URL"
PersonalCenterModule.EVENT_RECORD_INFO = "EVENT_RECORD_INFO"
PersonalCenterModule.EVENT_PLAYER_INFO = "EVENT_PLAYER_INFO"

function PersonalCenterModule:ctor()
    PersonalCenterModule.super.ctor(self)
end

-- 获取请求配置
function PersonalCenterModule:getReqConfig()
    return {
        ReqGoldRecord = {reqPath = XH.Bridge:getReqPath("ReqGoldRecord"), callBack = self.respGoldRecord},
        ReqGoldPlayerInfo = {reqPath = XH.Bridge:getReqPath("ReqGoldPlayerInfo"), callBack = self.respGoldPlayerInfo},
        ReqGoldPlayerInfoSet = {reqPath = XH.Bridge:getReqPath("ReqGoldPlayerInfoSet"), callBack = self.respGoldPlayerInfoSet}
    }
end

function PersonalCenterModule:getProxyEvents()
    return {{module = XH.Bridge:getModule("Shop"), eventKeyName = "EVNET_SHOP_PAGE_MARK_TOP", callBack = "onEventMarkTop"}}
end

function PersonalCenterModule:reqRecord(gameTypeIdx)
    self._recordInfo = {}
    self._reqState = {}
    self._curPage = 0
    self._totalPage = -1
    self._reqState[0] = true
    local gameID = self:getGameIDsByType(gameTypeIdx)
    self._curGameType = gameTypeIdx
    self._curGameID = gameID
    self:startReq("ReqGoldRecord", {gameID = gameID, pageIdx = 0})
    -- self:respGoldRecord({},XH.Req.TYPE.SUCCESS,{curr_page_idx=self._curPage, total_page_num=10, gold_record_item={1,2,3,4,5,6,7,8,9}})
end

function PersonalCenterModule:reqNextRecord(gameType)
    if self._curPage == self._totalPage and self._totalPage > 0 and self._reqState[self._curPage + 1] then
        return
    end
    self._reqState[self._curPage + 1] = true
    self:startReq("ReqGoldRecord", {gameID = self._curGameID, pageIdx = self._curPage + 1})
    -- self:respGoldRecord({},XH.Req.TYPE.SUCCESS,{curr_page_idx=self._curPage+1, total_page_num=10, gold_record_item={1,2,3,4,5,6,7,8,9}})
end

function PersonalCenterModule:respGoldRecord(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        for _, v in ipairs(data.goldRecordItem) do
            table.insert(self._recordInfo, v)
        end
        self._curPage = data.currPageIdx
        self._totalPage = data.totalPageNum
        self:dispatchEvent({
            name = self.EVENT_RECORD_INFO,
            info = self._recordInfo,
            isGetAll = self._curPage == self._totalPage - 1,
            gameType = self._curGameType,
            addNum = #data.goldRecordItem
        })
    end
end

function PersonalCenterModule:reqGoldPlayerInfo(tenatId, areaId, userId)
    self:startReq("ReqGoldPlayerInfo", {tenatId = tenatId, areaId = areaId, userId = userId})
end

function PersonalCenterModule:mergeAndSortGames(games)
    local mergedGames = {}
    local order = {}

    -- 合并游戏
    for index, game in ipairs(games) do
        local key = game.game_id .. "_" .. game.player_cnt .. "_" .. math.floor(game.room_level / 10)
        if not mergedGames[key] then
            mergedGames[key] = {
                game_id = game.game_id,
                player_cnt = game.player_cnt,
                room_level = game.room_level,
                count = 1,
                key = key,
                first_index = index -- 记录首次出现的索引
            }
            order[key] = index
        else
            mergedGames[key].count = mergedGames[key].count + 1
        end
    end

    -- 转换为数组并排序
    local result = {}
    for _, mergedGame in pairs(mergedGames) do
        table.insert(result, mergedGame)
    end

    table.sort(result, function(a, b)
        if a.count == b.count then
            return order[a.key] < order[b.key]
        end
        return a.count > b.count
    end)
    return result
end

function PersonalCenterModule:respGoldPlayerInfo(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local changWanInfo = {}
        -- data.gold_game_info = {{game_id=30116,room_level=1}}
        local gameInfo = self:mergeAndSortGames(data.gold_game_info)
        for _, v in ipairs(gameInfo) do
            local gameName = self:getGameEntrtName(v.game_id, v.room_level, v.player_cnt)
            if gameName ~= "" and not table.indexof(changWanInfo, gameName) then
                table.insert(changWanInfo, {gameName = gameName, gameId = v.game_id})
            end
        end
        data.changWanInfo = changWanInfo
        self._playerInfo = data
        self._goldHeadUrl = data.gold_head_url
        cc.UserDefault:getInstance():setStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID(), self._goldHeadUrl)
        self:dispatchEvent({name = self.EVENT_PLAYER_INFO, info = data})
    end
end

function PersonalCenterModule:getPlayerInfo()
    return self._playerInfo
end
function PersonalCenterModule:getPlayerSex()
    return self._playerInfo and self._playerInfo.gold_sex
end

function PersonalCenterModule:getGoldHeadUrl()
    if self._goldHeadUrl and self._goldHeadUrl ~= "" then
        return self._goldHeadUrl
    end
    local localInfo = cc.UserDefault:getInstance():getStringForKey(LOCAL_SAVEINFO_KEY .. XH.playerData:getNumberID())
    if localInfo and localInfo ~= "" then
        return localInfo
    end
    return nil
end

function PersonalCenterModule:reqGoldPlayerInfoSet(data)
    self:startReq("ReqGoldPlayerInfoSet", data)
end

function PersonalCenterModule:respGoldPlayerInfoSet(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        -- self:dispatchEvent({name = self.EVENT_PLAYER_INFO, info = data})
        XH.TipTool.showToast("修改成功！", 3)
        self:reqGoldPlayerInfo()
    elseif type == XH.Req.TYPE.FAIL then
        XH.TipTool.showToast("修改失败！", 3)
    end
end

function PersonalCenterModule:getRecordTag()
    local info = RemoteConfig:getConfigByName("PC") or {}
    return info.tag or {"双扣_DoubleKou", "暗斗双扣_DarkShuangKou", "麻将_Mahjong", "其他"}
end

function PersonalCenterModule:getSupportHeadIDs()
    local info = RemoteConfig:getConfigByName("PC") or {}
    return info.headIDs or Config.SupportHeadIDs
end

function PersonalCenterModule:getCDNHeadUrl()
    local info = RemoteConfig:getConfigByName("PC") or {}
    return info.headUrl or Config.AvatarURLFormat
end

function PersonalCenterModule:getAllHeadPropIDs()
    local info = RemoteConfig:getConfigByName("PC") or {}
    return info.headPropid or Config.AllHeadFramePropID
end

function PersonalCenterModule:getGameIDsByType(typeIdx)
    local configer = XH.Bridge:require("app.Config.Parse.GameSubConfiger").new()
    local allGameIds = RemoteConfig:getCurAreaGoldRoomInfo()
    local allTypes = {}
    local otherGameExpect = {"DoubleKou", "DarkShuangKou", "Mahjong"}
    local tagCfg = self:getRecordTag()[typeIdx]
    if not tagCfg then
        return {}
    end
    local nameAndtypes = string.split(tagCfg, "_")
    local allTypes = string.split(nameAndtypes[2] or "", "+")
    local isOther = nameAndtypes[1] == "其他"
    local gameIds = {}
    for _, v in ipairs(allGameIds) do
        local key = configer:getGameTypePathByGameId(v.GameID)
        if key ~= "" and (table.indexof(allTypes, key) or (isOther and not table.indexof(otherGameExpect, key))) then
            table.insert(gameIds, v.GameID)
        end
    end
    return gameIds
end

function PersonalCenterModule:isDoubleKou(gameId, type)
    type = type or XH.Bridge:getModule("GoldNew"):getGameType(gameId)
    return type == "DoubleKou"
end
function PersonalCenterModule:isDarkDoubleKou(gameId, type)
    type = type or XH.Bridge:getModule("GoldNew"):getGameType(gameId)
    return type == "DarkShuangKou"
end
function PersonalCenterModule:isMahjong(gameId, type)
    type = type or XH.Bridge:getModule("GoldNew"):getGameType(gameId)
    return type == "Mahjong"
end

function PersonalCenterModule:getGameEntrtName(gameid, roomLevel, playerCnt)
    local allGameIds = RemoteConfig:getCurAreaGoldRoomInfo()
    local name = ""
    for _, v in ipairs(allGameIds) do
        if v.roomFlag then
            if v.GameID == gameid and v.PlayerCount == playerCnt then
                if v.roomFlag[0] == -1 then
                    return v.GameTitle
                end
                if table.indexof(v.roomFlag, roomLevel + 1) then
                    return v.GameTitle
                end
                name = v.GameTitle
            end
        end
    end
    return name
end
return PersonalCenterModule
�"