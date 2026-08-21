local GoldConfigManager = class("GoldConfigManager", XH.ModuleBase)

--发送事件
GoldConfigManager.GOLD_EVENT_CONFIG = "GOLD_EVENT_CONFIG"
GoldConfigManager.GOLD_EVENT_ROOMINFO = "GOLD_EVENT_ROOMINFO"
GoldConfigManager.GOLD_EVENT_SHOWPLAYER_COUNT = "GOLD_EVENT_SHOWPLAYER_COUNT"
GoldConfigManager.GOLD_EVENT_REQ_PLAYER_CNT = "GOLD_EVENT_REQ_PLAYER_CNT"
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local GlobalCfg = require("app.Config.GlobalConfig")
local DEBUG = GlobalCfg.IsDebug

function GoldConfigManager:ctor() 
    GoldConfigManager.super.ctor(self)
    self._srsGroupID = XH.areaData:getGoldSrsGroupID()
    self._maxDownloadCount = 3
    self._failDownloadCount = 0
end

function GoldConfigManager:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.RoomProtocol.RespGetGoldRoomInfo.event_key, callBack = "onRespGetGoldRoomInfo" },
    }
end

function GoldConfigManager:clearGoldConfig()
    self._goldRoomDetailInfos = nil
    self._goldPlayerCountInfos = nil
    self._failDownloadCount = 0
end

function GoldConfigManager:resetGoldConfig()
    self:clearGoldConfig()
    local filename = "GoldRoomListNew_" .. XH.areaData:getLobbyID() .. ".json"
    self:loadConfig(filename)
    self:reqConfigData()
end

--请求金币场配置信息
function GoldConfigManager:reqConfigData()
    local filename = "GoldRoomListNew_" .. XH.areaData:getLobbyID()
    local ReqConfigData = require("app.Req.ReqConfigData")
    local reqConfigData = ReqConfigData:new()
    reqConfigData:addReqCallBack(self, self.onConfigDataCallback)
    reqConfigData:start(filename,XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function GoldConfigManager:onConfigDataCallback(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data and data ~= "" then
            local jsonData
            local ok, msg = pcall(function()
                jsonData = cjson.decode(data)
            end)
        
            if not ok then
                print("GoldConfigManager:onConfigDataCallback cjson failed: " .. msg)
                return
            end
            local fileName = jsonData.filename
            local fileUrl = jsonData.url
            local fileMD5 = jsonData.md5
            self:reqDownFile(fileUrl,fileName,fileMD5)
        end
    end
end

function GoldConfigManager:reqDownFile(fileUrl,fileName,fileMD5)
    if DEBUG then
        return 
    end
    local filePath = cc.FileUtils:getInstance():getWritablePath() .. fileName
    local isFileEXist = cc.FileUtils:getInstance():isFileExist(filePath)
    if isFileEXist and fileMD5 == un.getMd5OfFile(filePath) then
        return
    end

    self:startDownFile(fileUrl,fileName,filePath)
end

function GoldConfigManager:startDownFile(fileUrl,fileName,filePath)
    if self._failDownloadCount >= self._maxDownloadCount then
        local func = function()
            self._failDownloadCount = 0
            self:startDownFile(fileUrl,fileName,filePath)
        end
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = func
        }, "获取信息失败，请重试！")
        return 
    end
    local downloader = un.Downloader.new()

    downloader:setProgressListener(function (tag, progress)
        print("downFile fileUrl progress:" .. progress .. " tag:" .. tag)
    end)

    downloader:setListener(function (tag, costTime, errCode, errMsg)
        if errCode == 0 then
            self._failDownloadCount = 0
            self:loadConfig(fileName)
        else
            self._failDownloadCount = self._failDownloadCount + 1
            self:startDownFile(fileUrl,fileName,filePath)
        end
        print("downFile fileUrl errCode:" .. errCode .. " tag:" .. tag)
    end)
    downloader:add(fileUrl, filePath, "", fileUrl)
    downloader:removeWhenAllTaskComplete()
end

function GoldConfigManager:loadConfig(fileName)
    local filePath = cc.FileUtils:getInstance():getWritablePath() .. fileName
    local isFileEXist = cc.FileUtils:getInstance():isFileExist(filePath)
    if not isFileEXist then
        return
    end
    local jsonData = {}
    local gameListJson = cc.FileUtils:getInstance():getStringFromFile(filePath)
	if gameListJson ~= nil and gameListJson ~= "" then	
        local ok, msg = pcall(function()
            jsonData = cjson.decode(gameListJson)
        end)
        if not ok then
            print("GoldConfigManager:onConfigDataCallback cjson failed: " .. msg)
            return
        end
    end
    
    --外省竞品包-丽水区游戏大厅页面游戏改变顺序
    if XH.ChannelTool.checkIsWaishengChannel() and XH.areaData:getLobbyID()== XH.LOBBY_ID.LISHUI then 

        local GameIDList = {30310,30421,30386,30116,30312,30379}

        local finalList = {}
        for _, gameID in ipairs(GameIDList) do
            for _, info in pairs(jsonData.roomlist) do
                if info.GameID == gameID then
                    table.insert(finalList, info)
                    break
                end
            end
        end

        for i, _ in ipairs(finalList) do
             jsonData.roomlist[i] = finalList[i]
        end

        for _, info in pairs(jsonData.roomlist) do
            if info.GameTitle == "丽水跑得快" then
                info.GameTitle = "跑得快"
                break
            end
        end
        --广式麻将 斗地主 跑得快
        jsonData.LobbyGoldGameList = {2,5,6 }

    end

    self:dispatchEvent({name = GoldConfigManager.GOLD_EVENT_CONFIG})
    --self:changeGroupLogin()
end

function GoldConfigManager:onLoginCallback()
    if not self._goldRoomDetailInfos then
        self:reqGoldRoomInfo()
    end
end

-- 请求房间信息
function GoldConfigManager:reqGoldRoomInfo(reqIndex)
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    if not normalGames then
        return
    end
    local gameids = {}
    for i = 1, #normalGames do
        gameids[i] = normalGames[i].GameID
    end 
    gameids = table.unique(gameids,true)
    
    self._totalGameCnt = #gameids
    self._reqIndex = reqIndex or 1
    local tmpGameID = gameids[self._reqIndex] and {gameids[self._reqIndex]} or {}
    
    local reqModel = XH.RoomProtocol.ReqGetGoldRoomInfo:new()
    reqModel.askid = self._reqIndex
    reqModel.size = #tmpGameID
    reqModel.gameids = tmpGameID
    local srslobby = 0
    XH.netEngine:sendProtocol(reqModel, XH.RoomProtocol.ReqGetGoldRoomInfo.processid, srslobby, self._srsGroupID, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function GoldConfigManager:changeGroupLogin()
    if XH.isEmbeddedApp() then
        return
    end
    local srs = XH.netEngine:getSRSBySRSGroupID(self._srsGroupID)
    if srs == nil or (srs and srs:getLinkState() ~= XH.SRS_LINK_STATE.LINK_STATE_SUCCESS)  then
        XH.login:getModule("Login"):changeGroupSessionLogin(self._srsGroupID)
        return
    end
    if self._goldRoomDetailInfos then
        return
    end
    self:reqGoldRoomInfo()
end

function GoldConfigManager:onRespGetGoldRoomInfo(event)
    local resp =  XH.RoomProtocol.RespGetGoldRoomInfo:new()
    resp:bistream(event.msg.buff, event.msg.len)
    if resp.askid == self._reqIndex then
        if self._reqIndex <= self._totalGameCnt then
            if not self._goldRoomDetailInfos then
                self._goldRoomDetailInfos = { }
            end
            if resp.roomInfos then
                for _, v in pairs(resp.roomInfos) do
                    table.insert(self._goldRoomDetailInfos, v)
                end
            end
            self._goldRoomDetailInfos = table.unique(self._goldRoomDetailInfos, true)
            self._reqIndex = self._reqIndex + 1
            self:reqGoldRoomInfo(self._reqIndex)
        else
            self:dispatchEvent({name = GoldConfigManager.GOLD_EVENT_ROOMINFO})
            print("GoldConfigManager:RespGetGoldRoomInfo...")
        end
    end
end

function GoldConfigManager:getGoldRoomlist()
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    if normalGames then
        return clone(normalGames)
    end
    return {}
end

function GoldConfigManager:getConfIDByGameID(gameId, playerCount, roomlevel)
    if not gameId then
        return
    end
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    if normalGames then
        for i = 1, #normalGames do
            if playerCount then
                if gameId == normalGames[i].GameID and playerCount == normalGames[i].PlayerCount then
                    if not roomlevel then
                        return normalGames[i].LeisureID
                    else
                        for _, v in pairs(normalGames[i].roomFlag) do
                            if v == roomlevel then
                                return normalGames[i].LeisureID
                            end
                        end
                    end
                end
            else
                if gameId == normalGames[i].GameID then
                    if not roomlevel then
                        return normalGames[i].LeisureID
                    else
                        for _, v in pairs(normalGames[i].roomFlag) do
                            if v == roomlevel then
                                return normalGames[i].LeisureID
                            end
                        end
                    end
                end
            end
        end
    end
    return
end

function GoldConfigManager:getGoldRoomInfoByIndex(index, games)
    local gameID = 0
    local playerCount = 0
    local roomInfo = {}
    local normalGames = games or XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    if normalGames then
        for i = 1, #normalGames do
            if index == normalGames[i].LeisureID then
                gameID = normalGames[i].GameID
                playerCount = normalGames[i].PlayerCount
                roomInfo = normalGames[i]
            end
        end
    end

    
    local goldRoomDetailInfos = clone(self._goldRoomDetailInfos) or {}
    local roomLevelInfos = {}
    if goldRoomDetailInfos then
        --除了前面拿的配置，还要去配置中心拿一下，覆盖或者补进来
        local levelCfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "LevelInfo")
        if levelCfg and levelCfg.LevelInfo then 
            local levelInfoArray = levelCfg.LevelInfo
            for _, info in ipairs(levelInfoArray) do
                --table.insert(goldRoomDetailInfos, info)--这种写法是优先树列表的
                table.insert(goldRoomDetailInfos, 1, info)--这种写法是配置中心覆盖树列表
            end
        end

        for i = 1, #goldRoomDetailInfos do
            local tempRoomInfo = goldRoomDetailInfos[i]
            -- if gameID == tempRoomInfo.gameid and tempRoomInfo.roomnameflag == 0 then
            --     tempRoomInfo.roomnameflag = 1
            --     print(tempRoomInfo.gameid .. " roomnameflag == 0")
            -- end
            if (gameID == tempRoomInfo.belonggameid or gameID == tempRoomInfo.gameid) and tempRoomInfo.roomnameflag > 0 then
                if roomInfo.SpecialPlayer and roomInfo.SpecialPlayer == 1 then
                    if not self:isExistRoomInfo(roomLevelInfos,tempRoomInfo.roomnameflag,tempRoomInfo.chaircnt) then
                        roomLevelInfos[#roomLevelInfos + 1] = tempRoomInfo
                    end
                else
                    if playerCount == tempRoomInfo.chaircnt and not self:isExistRoomInfo(roomLevelInfos,tempRoomInfo.roomnameflag) then
                        roomLevelInfos[#roomLevelInfos + 1] = tempRoomInfo
                    end
                end
            end
        end
    end

    if roomInfo.SpecialPlayer and roomInfo.SpecialPlayer == 1 then
        table.sort(roomLevelInfos, function(a, b)
            return a.chaircnt < b.chaircnt
        end)
    end

    local roomLevelInfosFinal = {}
    for index2, tempRoomnameflag in ipairs(roomInfo.roomFlag or {}) do
        local tempInfo 
        if roomInfo.SpecialPlayer and roomInfo.SpecialPlayer == 1 then
            tempInfo = roomLevelInfos[index2]
        else 
            tempInfo = self:getInfoFromLevelInfos(roomLevelInfos, tempRoomnameflag)
        end
        if tempInfo then
            roomLevelInfosFinal[#roomLevelInfosFinal + 1] = tempInfo
        end
    end

    

    self._lastGoldRoomInfo = {}
    self._lastGoldRoomInfo.roomInfo = roomInfo
    self._lastGoldRoomInfo.roomLevelInfos = roomLevelInfosFinal
    return self._lastGoldRoomInfo
end

function GoldConfigManager:getInfoFromLevelInfos(roomLevelInfos, roomnameflag)
    for _, info in pairs(roomLevelInfos) do
        if roomnameflag == -1 or (info.roomnameflag and roomnameflag == info.roomnameflag) then
            return info
        end
    end
end

function GoldConfigManager:isExistRoomInfo(roomLevelInfos,roomnameflag,chaircnt)
    print("GoldConfigManager:isExistRoomInfo...")
    if roomLevelInfos and #roomLevelInfos > 0 then
        for i = 1, #roomLevelInfos do
            if chaircnt then
                if roomLevelInfos[i].roomnameflag == roomnameflag and roomLevelInfos[i].chaircnt == chaircnt then
                    return true
                end
            else 
                if roomLevelInfos[i].roomnameflag == roomnameflag then
                    return true
                end
            end
        end
    end
    return false
end

function GoldConfigManager:getLastGoldRoomInfo()
    return self._lastGoldRoomInfo or nil
end

function GoldConfigManager:getGoldRoomDetailInfos()
    if XH.isEmbeddedApp() then
        return {}
    end
    return self._goldRoomDetailInfos or nil
end

function GoldConfigManager:getIndexByGameid(gameid)
    if not gameid then
        return
    end
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    if normalGames then
        for i = 1, #normalGames do
            if gameid == normalGames[i].GameID then
                return normalGames[i].LeisureID
            end
        end
    end
end

function GoldConfigManager:getGoldModeByGameid(gameid)
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType()
    if not normalGames then
        return
    end
    for _, v in pairs(normalGames) do
        if gameid == v.GameID then
            return v.GoldMode
        end
    end
end

function GoldConfigManager:getPlayerCountByGameid(gameid)
    if not gameid then
        return
    end
    local normalGames = XH.lobby:getModule("Lobby"):getEntranceByType(XH.lobby:getModule("Lobby").KW_QUICK_ENTRANCE_TYPE.RELAXED)
    if normalGames then
        for i = 1, #normalGames do
            if gameid == normalGames[i].GameID then
                return normalGames[i].PlayerCount
            end
        end
    end
end

function GoldConfigManager:getRoomPlayerCount()
    return self._goldPlayerCountInfos or nil
end


--请求金币场人数信息
function GoldConfigManager:reqRoomPlayerCount(reqData)
    if not reqData or #reqData == 0 or true then
        return
    end
    local gameid = reqData[1].gameID
    local level = reqData[1].level
    if not level and self._goldPlayerCountInfos and self._goldPlayerCountInfos[gameid] then
        self:dispatchEvent({name = GoldConfigManager.GOLD_EVENT_SHOWPLAYER_COUNT, data = self._goldPlayerCountInfos, gameID = gameid, level = level})
        table.remove(reqData, 1)
        self:reqRoomPlayerCount(reqData)
        return
    end
    if level and self._goldPlayerCountInfos and self._goldPlayerCountInfos[gameid] and self._goldPlayerCountInfos[gameid].level and self._goldPlayerCountInfos[gameid].level[level] then
        self:dispatchEvent({name = GoldConfigManager.GOLD_EVENT_SHOWPLAYER_COUNT, data = self._goldPlayerCountInfos, gameID = gameid, level = level})
        table.remove(reqData, 1)
        self:reqRoomPlayerCount(reqData)
        return
    end
    local ReqRoomPlayerCount = require("src.lobby.Req.Room.reqRoomPlayerCount")
    local reqRoomPlayerCount = ReqRoomPlayerCount:new()
    reqRoomPlayerCount:addReqCallBack(self, self.onRoomPlayerCountCallback)
    reqRoomPlayerCount:start(reqData)
end

function GoldConfigManager:onRoomPlayerCountCallback(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data then
            self._goldPlayerCountInfos = self._goldPlayerCountInfos or {}
            self._goldPlayerCountInfos[data.gameid] = self._goldPlayerCountInfos[data.gameid] or {}     
            self._goldPlayerCountInfos[data.gameid].askid                   =    data.askid      
            self._goldPlayerCountInfos[data.gameid].playtype                =    data.playtype   
            self._goldPlayerCountInfos[data.gameid].level = self._goldPlayerCountInfos[data.gameid].level or {}
            self._goldPlayerCountInfos[data.gameid].level[data.level]       =    data.playercount
            self._goldPlayerCountInfos[data.gameid].appid                   =    data.appid      
            self:dispatchEvent({name = GoldConfigManager.GOLD_EVENT_SHOWPLAYER_COUNT, data = self._goldPlayerCountInfos, gameID = data.gameid, level = data.level})
        end
        if data.detail then
            self:dispatchEvent({name = GoldConfigManager.GOLD_EVENT_REQ_PLAYER_CNT, data = data.detail})
        end
    end
end

function GoldConfigManager:getLevelInfo(gameid, roomflag)
    local newgameid = gameid
    if gameid == 30116 then
        newgameid = 42038
    end
    local levelCfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "LevelInfo")
    if levelCfg and levelCfg.LevelInfo then
        for _, v in pairs(levelCfg.LevelInfo) do
            if (v.gameid == gameid or v.gameid == newgameid) and v.roomnameflag == roomflag then
                return v
            end
        end
    end
    return nil
end

-- 更新金币场配置(底分，门槛配置)
function GoldConfigManager:onUpdateGoldGameConf(data)
    if not data or not data.gameid or not data.infos or #data.infos == 0 then
        return
    end
    local levelCfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "LevelInfo")
    if not levelCfg or not levelCfg.LevelInfo then
        return
    end
    -- 更新配置中心的数据
    for _, v in pairs(levelCfg.LevelInfo) do
        if v.gameid == data.gameid then
            for _, v2 in pairs(data.infos) do
                if v2.session_id == v.roomnameflag and v.chaircnt == v2.chair_cnt then
                    v.minrich = v2.big_min_score
                    v.maxrich = v2.big_max_score
                    v.basescore = v2.base_score
                    v.dynamic_cost = v2.dynamic_cost
                    break
                end
            end
        end
    end
    XH.lobby:getModule("Configuration"):saveConfigJsonData(ConfigurationDefine.Config.GOLD, "LevelInfo", levelCfg)
end

return GoldConfigManager