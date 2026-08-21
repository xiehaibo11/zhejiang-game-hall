local PeakRaceDispatchModule = class("PeakRaceDispatchModule", NG.ModuleBase)
local PeakRaceDispatchConfig = require("newgold.GoldLobby.Modules.PeakRaceDispatch.Define")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local PeakRaceConfig = require("newgold.GoldLobby.Modules.PeakRace.Define")

PeakRaceDispatchModule.FguiGoldNotifyMatching = "FguiGoldNotifyMatching"

function PeakRaceDispatchModule:ctor()
    PeakRaceDispatchModule.super.ctor(self)
    self._lastGameID = 0
    self._reconnect = false
    self:initMessages()
end

function PeakRaceDispatchModule:getReqConfig()
    return {
        --
        CellReqJoinDispatchQueue = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellReqJoinDispatchQueue", callBack = self.onJoinDispatchQueueBack },
        CellReqJoinDispatchQueueGame = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellReqJoinDispatchQueue", callBack = self.onJoinDispatchQueueGameBack },
        CellReqLeaveDispatchQueue = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellReqLeaveDispatchQueue", callBack = self.onLeaveDispatchQueueBack },
        CellReqPlayerPosition = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellReqPlayerPosition", callBack = self.playerPositionCallback },
        CellReqPlayerPositionEx = { reqPath = "newgold.GoldLobby.Req.PeakRace.CellReqPlayerPosition", callBack = self.playerPositionCallbackEx },
        ReqTableMsg = { reqPath = "newgold.GoldGames.GoldGameMah.MahXueLiu.Manager.ReqTable50", callBack = self.onTableCallBack },
    }
end

function PeakRaceDispatchModule:onTableCallBack()
end

function PeakRaceDispatchModule:getCurGameID()
    return self._lastGameID
end

-- 统一发消息入口
function PeakRaceDispatchModule:sendStreamPacket(cmdid, msg)
    self:startReq("ReqTableMsg", cmdid, msg)
end

function PeakRaceDispatchModule:getAppID()
    return 88888888
end

function PeakRaceDispatchModule:initMessages()
    NG.netEngine:addProtocolScriptFuncByObj(self, self.onReciveDispatchProcessToClient, 1147, GoldAreaConfig.GroupID)
    NG.netEngine:addProtocolScriptFuncByObj(self, self.onReciveGameProcessToClient, 1, GoldAreaConfig.GroupID)
end

function PeakRaceDispatchModule:onDestroy()
    NG.netEngine:removeProtocolScriptFuncByObj(self, self.onReciveDispatchProcessToClient, GoldAreaConfig.GroupID)
    NG.netEngine:removeProtocolScriptFuncByObj(self, self.onReciveGameProcessToClient, GoldAreaConfig.GroupID)
    PeakRaceDispatchModule.super.onDestroy(self)
end

function PeakRaceDispatchModule:onReciveGameProcessToClient(XYID, buff, len, processid)
    if XYID == NG.GameMProtocol.ServerToClientMessage.XY_ID then
        local sToClientData = NG.GameMProtocol.ServerToClientMessage:new()
        sToClientData:bistream(buff, len)
        local subXYID = sToClientData.cmdid
        local subBuff = sToClientData.message
        local subLen = sToClientData.msglen
        if subXYID == 20104 then -- noticeperson
            -- todo 是否做先收到该消息在做后续
            local msg = NG.StringTool.protobufDataToLuaData50("ocean", subBuff, "notice_person", "ocean")
            if self:isRunFast() then
                local ahData = {}
                for i = 1, #msg.infos do
                    local split = string.split(msg.infos[i].uid, "#")
                    local userID = tonumber(split[2])
                    if XH.playerData:getNumberID() == userID then
                        g_gameGlobal:setMyTablePos(msg.infos[i].pos)
                    end
                    local tmpData = {
                        playerID = userID,
                        playerName = msg.infos[i].nick,
                        headImg = msg.infos[i].pic,
                        headImgUrl = msg.infos[i].pic,
                        sex = tonumber(msg.infos[i].sex),
                        palyerIndex = userID,
                        tablePos = msg.infos[i].pos,
                        canFriend = 0,
                        inTable = 1,
                        zhuangCount = 0,
                        winCount = 0,
                        dianpaoCount = 0,
                        hitHorseCount = 0,
                        gangCount = 0,
                        ip = msg.infos[i].ip,
                        gameState = g_gameConstant.PALYER_GAME_STATE_IN_TABLE_READY,
                    }
                    ahData[#ahData + 1] = tmpData
                end
                self:setAHPlayers(ahData)
            end
        else
            self:delSToCMessage(subXYID, subBuff, subLen)
        end
    end
end

function PeakRaceDispatchModule:setAHPlayers(data)
    self._players = data
    if g_gameGlobal:getGameScene() == nil then
        return
    end
    local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
    if gameBase ~= nil then
        gameBase:setPlayerInfos()
    end
end

function PeakRaceDispatchModule:getAHPlayers()
    return self._players or {}
end

-- 处理游戏区转发协议
function PeakRaceDispatchModule:delSToCMessage(subXYID, subBuff, subLen)
    if self:isXZDD() or self:isLandlord() then
        NG.goldLobby:getModule("PeakRaceSiChuan"):delSToCMessage(subXYID, subBuff, subLen)
    elseif self:isRunFast() then
        NG.goldLobby:getModule("PeakRaceAnHui"):delSToCMessage(subXYID, subBuff, subLen)
    end
end

function PeakRaceDispatchModule:onReciveDispatchProcessToClient(XYID, buff, len, processid)
    if XYID == 7 then
        local info = NG.StringTool.protobufDataToLuaData50("pyrrla", buff, "GameNotify", "Zeus.pyrrla.v1")
        self:onGameNotify(info)
    end
end

-- c->s 请求离开匹配队列
function PeakRaceDispatchModule:reqLeaveDispatchQueue()
    local data = {
        gameid = self._lastGameID,
        roomid = PeakRaceConfig.ROOM_MODE.MATCH,
    }
    self:startReq("CellReqLeaveDispatchQueue", data, 10)
end

-- s->c 请求离开匹配队列返回
function PeakRaceDispatchModule:onLeaveDispatchQueueBack(cell, type, data)
    if data == nil then
        return
    end
    if data.code == PeakRaceDispatchConfig.CODE.GOLD_SUCCESS then
        self:leaveGoldGame()
    elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_GAMING then
        NG.TipTool.showToast('匹配成功、请稍等。。。')
    end
end

function PeakRaceDispatchModule:reqPlayerPositionEx()
    NG.TipTool.showLoading()
    local lobbyID = XH.areaData:getLobbyID()
    local configGameID = XH.areaData:getConfigGameID()
    local srsGroupID = XH.areaData:getSrsGroupID()
    local areaTypeID = XH.areaData:getAreaTypeID()
    self:startReq("CellReqPlayerPositionEx", configGameID, areaTypeID, lobbyID, GoldAreaConfig.GroupID, 15)
end

function PeakRaceDispatchModule:playerPositionCallbackEx(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS and data and data[1] and data[1].gameid ~= 0 then
        return
    end
    -- 如果这时候在游戏区直接退出来
    if self:isInGame() then
        self:leaveGoldGame()
    end
end

function PeakRaceDispatchModule:reqJoinDispatchQueue(gameid, roomid, chairCnt, isInGame)
    NG.TipTool.showLoading()
    local data = {
        gameid = gameid or self._lastData.gameid,
        roomid = roomid or self._lastData.roomid,
        room_id = 0 or self._lastData.room_id,
        chairCnt = chairCnt or self._lastData.chairCnt
    }
    self._lastData = data
    if isInGame then
        self:startReq("CellReqJoinDispatchQueueGame", self._lastData, 10)
    else
        self:startReq("CellReqJoinDispatchQueue", self._lastData, 10)
    end
end

function PeakRaceDispatchModule:playerPositionCallback(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS and data and data[1] then
        self:joinGoldGame(data[1].gameid, true)
    else
        NG.TipTool.showToast('返回房间失败，请点击重试')
    end
end

function PeakRaceDispatchModule:onJoinDispatchQueueBack(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        local srsgroupid = GoldAreaConfig.GroupID
        local gameappid = 88888888
        -- 加入房间
        if data.code == PeakRaceDispatchConfig.CODE.GOLD_SUCCESS then
            self:joinGoldGame(data.game_id, false)
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_FAILED then
            NG.TipTool.showToast("加入失败")
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_LOW_LIMIT then
            NG.TipTool.showToast("金币低于下限")
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_HIGH_LIMIT then
            NG.TipTool.showToast("加入队列失败,金币限制")
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_GAMING then
            --  游戏房间返场
            self._reconnect = true
            XH.TipTool.showTip(
            {
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    self:joinGoldGame(data.game_id, true)
                end
            },
            "已在游戏房间中,点击确认返场"
            )
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_QUEUING then
            --  匹配队列返场
            XH.TipTool.showTip(
            {
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    if not self:isCanPlay(data.game_id) then
                        NG.TipTool.showToast("不支持该游戏，退出金币场队列中" .. data.game_id)
                        self:reqLeaveDispatchQueue()
                        return
                    end
                    self:joinGoldGame(data.game_id, false)
                end
            },
            "已在匹配队列,点击确认返场"
            )
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_OTHERS_GAMING then
            NG.TipTool.showLoading()
            local lobbyID = XH.areaData:getLobbyID()
            local configGameID = XH.areaData:getConfigGameID()
            local srsGroupID = XH.areaData:getSrsGroupID()
            local areaTypeID = XH.areaData:getAreaTypeID()
            self:startReq("CellReqPlayerPosition", configGameID, areaTypeID, lobbyID, GoldAreaConfig.GroupID, 15)
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_BROKE_TIMES_LIMIT then
            NG.TipTool.showToast("破产补助已达上限~")
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_BROKE_INTERNAL_LIMIT then
            NG.TipTool.showToast("破产补助冷却中")
        elseif data.code == PeakRaceDispatchConfig.CODE.GOLD_BROKE_SUPPLY then
            NG.TipTool.showToast("破产补助成功")
        elseif data.code == 13012 then
            local info = NG.goldLobby:getModule("PeakRace"):getPeakRaceInfo()
            if info and info.max then
                NG.TipTool.showToast("每个赛季队员最多进行比赛" .. info.max .. "次")
            else
                NG.TipTool.showToast("比赛场对局已达到上限")
            end
        elseif data.code == 13013 then
            NG.TipTool.showToast("没有报名，比赛场进入失败~")
        elseif data.code == 13014 then
            NG.TipTool.showToast("比赛未开始，敬请期待~")
        else
            NG.TipTool.showToast("其他原因")
        end
    else
        NG.TipTool.showToast('请求超时')
    end
end

function PeakRaceDispatchModule:onJoinDispatchQueueGameBack(cell, flag, data)
    NG.TipTool.hideLoading()
    if flag == NG.Req.TYPE.SUCCESS then
        local srsgroupid = GoldAreaConfig.GroupID
        local gameappid = 88888888
        -- 加入房间
        if data.code == PeakRaceDispatchConfig.CODE.GOLD_SUCCESS then
            self:joinGoldGame(data.game_id, false)
            return
        end
    end
    -- 失败统一离开场景
    self:leaveGameScene()
end

-- s->c 通知--匹配结果 todo
function PeakRaceDispatchModule:onGameNotify(data)
    if not self:isInGame() then
        return
    end
    if data.code == PeakRaceDispatchConfig.CODE.GOLD_SUCCESS then
        self._reconnect = true
        self:reqJoinGoldGame()
    else
        self:dealWithBackCode(data.code, data.game_app_id)
    end
    NG.TipTool.hideLoading()
end

function PeakRaceDispatchModule:linkToGame()
    print("yuhang linktogame")
    local reqPlayerConnect2Data = NG.GameMProtocol.ReqPlayerConnect2:new()
    reqPlayerConnect2Data.askid = os.time()
    NG.netEngine:sendProtocol(reqPlayerConnect2Data, reqPlayerConnect2Data.processid, self:getAppID(), GoldAreaConfig.GroupID)
end

function PeakRaceDispatchModule:reqJoinGoldGame()
    if self._reconnect then
        self:linkToGame()
        self:dispatchEvent({ name = self.FguiGoldNotifyMatching, msg = { show = false } })
    end
end

-- 是否是血战到底
function PeakRaceDispatchModule:isXZDD()
    return self._lastGameID == GoldAreaConfig.PEAKRACE_XZDD
end

-- 是否是四川斗地主
function PeakRaceDispatchModule:isLandlord()
    return self._lastGameID == GoldAreaConfig.PEAKRACE_DDZ
end

-- 是否是安庆跑得快
function PeakRaceDispatchModule:isRunFast()
    return self._lastGameID == GoldAreaConfig.PEAKRACE_PDK
end

function PeakRaceDispatchModule:isInGame()
    if g_gameGlobal == nil then
        return false
    end
    return g_gameGlobal:getGameScene() ~= nil
end

function PeakRaceDispatchModule:isCanPlay(gameID)
    return gameID == GoldAreaConfig.PEAKRACE_XZDD
end

-- 加入房间
function PeakRaceDispatchModule:joinGoldGame(gameID, isRelink)
    -- 赋值最后的场景
    local chairData = {
        [GoldAreaConfig.PEAKRACE_XZDD] = 4, -- 巅峰赛血战到底gameid
        [GoldAreaConfig.PEAKRACE_DDZ] = 3, -- 巅峰赛斗地主gameid
        [GoldAreaConfig.PEAKRACE_PDK] = 3, -- 巅峰赛跑得快gameid
    }
    local data = {
        gameid = gameID,
        roomid = PeakRaceConfig.ROOM_MODE.MATCH,
        room_id = 0 or self._lastData.room_id,
        chairCnt = chairData[gameID] or 4,
    }
    self._lastData = data

    self._lastGameID = gameID
    self:startSoundHotupdate(gameID)
    if self:isXZDD() then
        self:enterSCGame(17, 4)
    elseif self:isLandlord() then
        self:enterSCGame(27, 3)
    elseif self:isRunFast() then
        self:enterAnHuiGame()
    else
        NG.TipTool.showToast("您正在金币场游戏中，请从金币场入口返回游戏")
        return
    end
    if isRelink then
        NG.goldLobby:getModule("PeakRaceDispatch"):linkToGame()
    end
end

function PeakRaceDispatchModule:startSoundHotupdate(gameID)
    local key = "GameSound_" .. gameID
    local priority = 1
    local GameSoundResChecker = require("app.hotupdate.gamesound.GameSoundResChecker")
    GameSoundResChecker._startHotFix(gameID, key, priority)
end

function PeakRaceDispatchModule:resize()
    display.setAutoScale({
        width = 1280,
        height = 720,
        autoscale = "FIXED_WIDTH",
        callback = function(framesize)
            local ratio = framesize.width / framesize.height
            if ratio > 16 / 9 then
                return { autoscale = "FIXED_HEIGHT" }
            end
        end
    })
end

function PeakRaceDispatchModule:enterAnHuiGame()
    self:resize()
    local ack = {
        newPlayWay = 48038144, -- 主玩法
        unused1 = 3,
        unused2 = 1,
        unused3 = 1,
        unused0 = 2048, -- 子玩法
        vipTableID = 1,
        totalHand = 1,
        currentHand = 1,
        creatorName = "",
        createPlayerID = 1,
        tablePos = 1,
        players = {},
    }
    NG.goldLobby:getModule("PeakRaceGame"):reloadAnHui()
    g_UserDataTable.m_enterType = g_gameConstant.GAME_PDK
    local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config")
    if config then
        config.init_config()
    end
    g_UserDataTable.gameLanguageCfgIndex = 1
    local gamePath = "newgold.MatchGames.PDK.LYPDK.LYPDKGameBase"
    local gameScene = g_gameGlobal:getGameScene()
    if gameScene ~= nil and not tolua.isnull(gameScene) then
        cc.Director:getInstance():popScene()
    end
    local gameScene = display.newScene()
    g_gameGlobal:setGameScene(gameScene)
    g_gameGlobal:switchGameScene(gameScene)
    local gameBase = require(gamePath):create()
    gameBase:setName("gameBase")
    gameBase:addTo(gameScene)
    gameBase:initRoomInfo(ack)
    g_gameGlobal:setIsInPaiZhuo(true)
    g_gameGlobal:setIsInPaiZhuoGold(true)
end

function PeakRaceDispatchModule:enterSCGame(mainrule, maxNum)
    self:resize()
    NG.goldLobby:getModule("PeakRaceGame"):reloadXZDD()
    local GameMsgManager = require("newgold.MatchGames.GamePublic.GameMsgManager").getInstance()
    local ack = {
        MainGamePlayRule = mainrule, -- 主要规则
        vipTableID = 1,
        unused1 = maxNum,
        headFrame = json.encode({}),
        roomID = 1,
        tablePos = 1,
        newPlayWay = 1,
        MinorGamePlayRuleList = {},
        players = {},
        clubId = 0,
        totalHand = 2,
        currentHand = 1,
    }
    local gameBase = GameMsgManager:enterGameMsg(ack, false)
end

-- 调用游戏区离开房间
function PeakRaceDispatchModule:leaveGoldGame()
    NG.TipTool.showToast("退出匹配队列成功")
    self:leaveGameScene()
end

function PeakRaceDispatchModule:leaveGameScene()
    g_gameGlobal:switchLobbyScene()
end

function PeakRaceDispatchModule:dealWithBackCode(code, gameappid)
    local text = ""
    if code == PeakRaceDispatchConfig.CODE.GOLD_LOW_LIMIT then
        text = "巅峰赛游戏异常"
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_HIGH_LIMIT then
        text = "巅峰赛游戏异常"
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_GAMING then
        self._reconnect = true
        self:reqJoinGoldGame()
        return
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_FAILED then
        text = PeakRaceDispatchConfig.LEAVE_ENUM_MSG.GOLD_FAILED
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_QUEUING then
        text = PeakRaceDispatchConfig.LEAVE_ENUM_MSG.GOLD_QUEUING
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_PARAM_ERROR then
        text = PeakRaceDispatchConfig.LEAVE_ENUM_MSG.GOLD_PARAM_ERROR
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_GAME_CONFIG_NOT_FOUND then
        text = PeakRaceDispatchConfig.LEAVE_ENUM_MSG.GOLD_GAME_CONFIG_NOT_FOUND
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_GAME_MAX then
        text = "每个赛季队员最多进行比赛" .. NG.goldLobby:getModule("PeakRace"):getPeakCount() .. "次"
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_GAME_MAX_NO then
        text = PeakRaceDispatchConfig.LEAVE_ENUM_MSG.GOLD_GAME_MAX_NO
    elseif code == PeakRaceDispatchConfig.CODE.GOLD_GAME_TIME_OUT then
        text = PeakRaceDispatchConfig.LEAVE_ENUM_MSG.GOLD_GAME_TIME_OUT
    end
    if text == "" then
        print("yuhang unexit code " .. code)
        return
    end
    XH.TipTool.showTip(
    {
        type = XH.TIP_LAYER_TYPE.OK,
        funcOK = function()
            self:leaveGoldGame()
        end
    },
    text
    )
end

return PeakRaceDispatchModule'L