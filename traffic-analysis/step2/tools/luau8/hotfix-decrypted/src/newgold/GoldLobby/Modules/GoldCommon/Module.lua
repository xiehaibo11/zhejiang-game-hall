local GoldCommonModule = class("GoldCommonModule", NG.ModuleBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldCommonDefine = require("newgold.GoldCommon.Define.GoldCommonDefine")
local GoldRoomProtoDefine = require("newgold.GoldCommon.ProtoBuf.game_cli_define")
local RoomMatchProtoDefine = require("newgold.GoldCommon.ProtoBuf.roommatch_define")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldRoomsDefine = require("newgold.GoldCommon.Define.GoldRoomsDefine")

GoldCommonModule.KW_FLUSH_NOTIFY_PROPS = "KW_FLUSH_NOTIFY_PROPS"
GoldCommonModule.KW_NOTIFY_AUTOJOIN_ROOM = "KW_NOTIFY_AUTOJOIN_ROOM"
GoldCommonModule.KW_NOTIFY_JOIN_MATCH_SUCCESS = "KW_NOTIFY_JOIN_MATCH_SUCCESS"

function GoldCommonModule:ctor()
    GoldCommonModule.super.ctor(self)
    self._changeTable = false
    self._getXXPositionState = "null"
    self._getLZPositionState = "null"
    self._isGetPositioning = false
    self._onGetAllPositionCall = nil
    self._playerPosition = {}
    self:initMessages()
end

function GoldCommonModule:getRoomInfos()
    if self._lastRoomInfo then
        return self._lastRoomInfo
    end
    self._lastRoomInfo = GoldRoomsDefine.ROOMS
    for i = 1, #self._lastRoomInfo do
        for j = 1, #self._lastRoomInfo[i].LEVEL do
            if self._lastRoomInfo[i].LEVEL[j].appIds ~= nil then
                local index = math.floor(math.random() * #self._lastRoomInfo[i].LEVEL[j].appIds) + 1
                self._lastRoomInfo[i].LEVEL[j].appId = self._lastRoomInfo[i].LEVEL[j].appIds[index] or self._lastRoomInfo[i].LEVEL[j].appIds[1]
                self._lastRoomInfo[i].LEVEL[j].roomId = self._lastRoomInfo[i].LEVEL[j].roomIds[index] or self._lastRoomInfo[i].LEVEL[j].roomIds[1]
            end
        end
    end
    return self._lastRoomInfo
end

function GoldCommonModule:initMessages()
    NG.netEngine:addProtocolScriptFuncByObj(self, self.respStartGame, GoldRoomProtoDefine.processid, GoldAreaConfig.GroupID)
    NG.netEngine:addProtocolScriptFuncByObj(self, self.respGoldMsg, GoldRoomProtoDefine.processid50, GoldAreaConfig.GroupID)
    NG.netEngine:addProtocolScriptFuncByObj(self, self.respRoomMatchMsg, RoomMatchProtoDefine.processid, GoldAreaConfig.GroupID)
end

function GoldCommonModule:getReqConfig()
    return {
        --
        ReqJoinRoom = { reqPath = "newgold.GoldCommon.Req.Room.GoldReqJoinRoom", callBack = self.onJoinRoomCallBack },
        ReqLeaveRoom = { reqPath = "newgold.GoldCommon.Req.Room.GoldReqLeaveRoom", callBack = self.onLeaveRoomCallBack },
        ReqPlayerAct = { reqPath = "newgold.GoldCommon.Req.Room.GoldReqPlayerAct", callBack = self.onPlayerActCallBack },
        ReqPlayerProps = { reqPath = "newgold.GoldLobby.Req.Tool.GoldReqPlayerDrop", callBack = self.onPlayerPropCallBack },
        ReqPlayerCoin = { reqPath = "newgold.GoldLobby.Req.Tool.GoldReqPlayerGoldCoin", callBack = self.onPlayerCoinCallBack },
        ReqJoinRoom50 = { reqPath = "newgold.GoldCommon.Req.Room50.GoldReqJoinRoom", callBack = self.onJoinRoomCallBack50 },
        ReqLeaveRoom50 = { reqPath = "newgold.GoldCommon.Req.Room50.GoldReqLeaveRoom", callBack = self.onLeaveRoomCallBack50 },
        ReqPlayerPosition = { reqPath = "lobby.Req.Room.ReqPlayerPosition", callBack = self.onPlayerPositionCallBack },
        ReqPlayerPlace = { reqPath = "newgold.GoldCommon.Req.Room.ReqPlayerPlace", callBack = self.onPlayerPlaceCallBack },
    }
end

function GoldCommonModule:clearPropsData()
    GoldPlayerData.JoyBean = 0
    GoldPlayerData.Diamond = 0
end

-- 更新道具信息
function GoldCommonModule:flushPlayerProp()
    self:reqPlayerProp()
    self:reqPlayerCoin()
end

-- 请求道具
function GoldCommonModule:reqPlayerProp()
    self:startReq("ReqPlayerProps", GoldAreaConfig.BridgeGameID, GoldAreaConfig.BridgeGroupID)
end

-- 刷新道具
function GoldCommonModule:flushProps()
    self:dispatchEvent({ name = GoldCommonModule.KW_FLUSH_NOTIFY_PROPS })
end

function GoldCommonModule:onPlayerPropCallBack(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if #data.props > 0 then
            for i = 1, #data.props do
                if data.props[i].id == GoldAreaConfig.BridgeDiamndID then
                    GoldPlayerData.Diamond = data.props[i].count
                    break
                end
            end
        end
        self:flushProps()
    end
end

-- 请求金币
function GoldCommonModule:reqPlayerCoin()
    self:startReq("ReqPlayerCoin", GoldAreaConfig.LZDDZ, GoldAreaConfig.GroupID)
end

function GoldCommonModule:onPlayerCoinCallBack(req, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        GoldPlayerData.JoyBean = data.purse
        self:dispatchEvent({ name = GoldCommonModule.KW_FLUSH_NOTIFY_PROPS })
    end
end

function GoldCommonModule:getAutoJoin()
    return self._isAutoJoin or false
end

function GoldCommonModule:setAutoJoin(autoJoin)
    self._isAutoJoin = autoJoin or false
end

-- 请求加入房间
function GoldCommonModule:reqJoinRoom(gameid, reconnect, roomid, appid, session_id, checkGuide)
    print("我要加入房间了", gameid)
    if self:isPlaceCheck() and not self:isGetAllPosition() then
        self._onGetAllPositionCall = function()
            self:reqJoinRoom(gameid, reconnect, roomid, appid, session_id, checkGuide)
        end
        if not self:isGettingPosition() then
            self:flushPlayerPosition()
            return
        end
    end
    if gameid == GoldAreaConfig.LZDDZ then
        self:startReq("ReqJoinRoom", reconnect, roomid, appid)
    else
        self:startReq("ReqJoinRoom50", gameid, session_id, appid)
    end
end

function GoldCommonModule:onJoinRoomCallBack(reqPosition, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        if data.type == "kJoin" and GoldCommonDefine.RespJoinFlag[data.flag] == 4 then
            self:reqLeaveRoom(data.appid, data.appid)
            return
        elseif data.type == "kJoin" and data.msg_box and data.msg_box.text == "您已经在其他游戏中!" and data.msg_box.action == "kQuit" and XH.SceneManager:getInstance():getTopSceneTag() == NG.SCENE_TAG.NEWGOLD_LOBBY then
            self:reqJoinRoom(GoldAreaConfig.LZDDZ, false, NG.RoomTool.getRoomIdByAppId(data.appid), data.appid)
            return
        elseif data.type == "kJoin" and GoldCommonDefine.RespJoinFlag[data.flag] == 1 and data.msg_box and data.msg_box.action == "kQuit" then
            self:reqLeaveRoom(data.appid, data.needJoinAppid)
            return
        end
        if data.type == "kJoin" then
            GoldPlayerData.AppId = data.appid
            GoldPlayerData.RoomId = data.room_id
            self:reqPlayerAct(GoldCommonDefine.Action.kSitdown, data.appid, data.room_id)
            return
        end
        -- 请求坐下
        if GoldCommonDefine.RespJoinFlag[data.flag] == 0 then
            self:reqPlayerAct(GoldCommonDefine.Action.kSitdown, data.appid, 0)
        elseif GoldCommonDefine.RespJoinFlag[data.flag] == 1 then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, data.msg_box.text)
        elseif GoldCommonDefine.RespJoinFlag[data.flag] == 2 then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "对局已结束")
        elseif GoldCommonDefine.RespJoinFlag[data.flag] == 3 then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "再其他房间中")
        elseif GoldCommonDefine.RespJoinFlag[data.flag] == 4 then
            -- 先离开，再加入
            self:reqLeaveRoom(data.appid, data.appid)
        else
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "加入房间异常错误，请重试")
        end
    end
end

-- 请求离开房间（一般不调用，只有在异常在房间中，先退出->加入）
function GoldCommonModule:reqLeaveRoom(appid, rejoinAppid)
    if appid == nil then
        appid = GoldPlayerData.AppId
    end
    self:startReq("ReqLeaveRoom", appid, rejoinAppid)
end

function GoldCommonModule:onLeaveRoomCallBack(req, type, data)
    if data.flag == "kNormal" then
        if data.cAppId ~= nil then
            self:reqJoinRoom(GoldAreaConfig.LZDDZ, false, NG.RoomTool.getRoomIdByAppId(data.cAppId), data.cAppId)
        end
    else
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "离开房间失败，请尝试重新加入")
    end
end

function GoldCommonModule:flushPlayerPosition()
    local lobbyID = 0
    local configGameID = 0
    local srsGroupID = GoldAreaConfig.GroupID
    local areaTypeID = 0
    self:startReq("ReqPlayerPosition", configGameID, areaTypeID, lobbyID, srsGroupID, 15)
    self:startReq("ReqPlayerPlace", configGameID, srsGroupID, 15)
    self._getXXPositionState = "getting"
    self._getLZPositionState = "getting"
end

--连炸位置
function GoldCommonModule:onPlayerPlaceCallBack(reqPosition, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        self._getLZPositionState = "got"
        if #data > 0 then
            dump(data)
            if self:isNewGoldGameId(data[1].gameid) then
                -- require("newgold.NewGoldController"):getInstance():enterGame(data[1].gameid, { isRelink = true })
                -- NG.TipTool.showToast("返场中")
                local room = NG.RoomTool.getRoomInfoByAppId(data[1].appid)
                if room then
                    self:startReq("ReqJoinRoom", true, data[1].room_id, data[1].appid)
                    -- GoldPlayerData.AppId = data[1].appid
                    -- GoldPlayerData.RoomId = data[1].room_id
                    -- self:reqPlayerAct(GoldCommonDefine.Action.kSitdown, data[1].appid, data[1].room_id)
                    return
                end
            end
        end
        self:onGetPosition()
    else
        NG.TipTool.showToast("获取为位置信息失败", type)
        self._getLZPositionState = "error"
    end
end

--血流位置
function GoldCommonModule:onPlayerPositionCallBack(reqPosition, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        self._getXXPositionState = "got"
        if #data > 0 then
            dump(data)
            if self:isNewGoldGameId(data[1].gameid) then
                require("newgold.NewGoldController"):getInstance():enterGame(data[1].gameid, { isRelink = true })
                -- NG.TipTool.showToast("返场中")
                return
            end
        end
        self:onGetPosition()
    else
        NG.TipTool.showToast("获取为位置信息失败", type)
        self._getXXPositionState = "error"
    end
end

function GoldCommonModule:isGetAllPosition()
    return self._getXXPositionState == "got" and self._getLZPositionState == "got"
end

function GoldCommonModule:isGettingPosition()
    if self._getXXPositionState == "error" or self._getLZPositionState == "error" then
        return false
    end
    return self._getXXPositionState == "getting" or self._getLZPositionState == "getting"
end

function GoldCommonModule:onGetPosition()
    if self._getXXPositionState == "got" and self._getLZPositionState == "got" then
        if self._onGetAllPositionCall then
            self._onGetAllPositionCall()
            self._onGetAllPositionCall = nil
        end
    end
end

function GoldCommonModule:isNewGoldGameId(gameid)
    return gameid == GoldAreaConfig.LZDDZ or gameid == GoldAreaConfig.MAH_BBXL
end

function GoldCommonModule:onJoinRoomCallBack50(reqPosition, type, data)
    if type == NG.Req.TYPE.SUCCESS then
        GoldPlayerData.Session_id = data.session_id
        if data.code == 'GOLD_OTHERS_GAMING' then
            -- NG.TipTool.showTip({
            --     type = NG.TIP_LAYER_TYPE.OK,
            --     funcOK = function()
            --         self:flushPlayerPosition()
            --     end
            -- }, "已在游戏房间中，点击确定返场")
            if GoldPlayerData.Session_id == 0 then
                GoldPlayerData.Session_id = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_LAST_GOLD_LEVEL, 1)
            end
            self:flushPlayerPosition()
            return
        end
        if data.area_id == 0 then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "加入失败")
            return
        end
        local enterGame = function(gameID)
            NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_LAST_GOLD_LEVEL, GoldPlayerData.Session_id)
            require("newgold.NewGoldController"):getInstance():enterGame(gameID)
        end
        local enterLobby = function()
            require("newgold.NewGoldController"):getInstance():enterLobby()
        end
        if data.code == 'GOLD_SUCCESS' and data.area_id ~= 0 then
            enterGame(data.game_id)
            self:dispatchEvent({ name = GoldCommonModule.KW_NOTIFY_JOIN_MATCH_SUCCESS })
        elseif data.code == 'GOLD_FAILED' then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "加入失败")
        elseif data.code == 'GOLD_LOW_LIMIT' then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "金币不足！补充金币，再战四方！")
        elseif data.code == 'GOLD_HIGH_LIMIT' then
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "金币满载，请前往更高级房间，体验更丰富的游戏乐趣!")
        elseif data.code == 'GOLD_GAMING' then  -- 在游戏中，返场
            -- NG.TipTool.showTip({
            --     type = NG.TIP_LAYER_TYPE.OK,
            --     funcOK = function()
            --         self:flushPlayerPosition()
            --     end
            -- }, "已在游戏房间中，点击确定返场")
            self:flushPlayerPosition()
        elseif data.code == 'GOLD_QUEUING' then -- 在匹配队列中
            NG.TipTool.showTip({
                type = NG.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    require("newgold.NewGoldController"):getInstance():enterGame(data.game_id)
                end
            }, "已在匹配队列，点击确定返场")
        elseif data.code == 'GOLD_OTHERS_GAMING' then   -- 其他游戏中
            -- NG.TipTool.showTip({
            --     type = NG.TIP_LAYER_TYPE.OK,
            --     funcOK = function()
            --         self:flushPlayerPosition()
            --     end
            -- }, "已在游戏房间中，点击确定返场")
            self:flushPlayerPosition()
        elseif data.code == 'GOLD_BROKE_TIMES_LIMIT' then -- 破产补助已达上限
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "破产补助已达上限")
        elseif data.code == 'GOLD_BROKE_INTERNAL_LIMIT' then    -- 破产补助冷却中
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "破产补助冷却中")
        elseif data.code == 'GOLD_BROKE_SUPPLY' then    -- 破产补助成功
        else
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "加入房间异常错误，请重试")
        end
    end
end

-- 请求离开房间（一般不调用，只有在异常在房间中，先退出->加入）
function GoldCommonModule:reqLeaveRoom50(appid, rejoinAppid)
    if appid == nil then
        appid = GoldPlayerData.AppId
    end
    self:startReq("ReqLeaveRoom50", appid, rejoinAppid)
end

function GoldCommonModule:onLeaveRoomCallBack50(req, type, data)
    if data.code == "GOLD_SUCCESS" then
        if data.cAppId ~= nil then
            self:reqJoinRoom50(false, NG.RoomTool.getRoomIdByAppId(data.cAppId), data.cAppId)
        end
    else
        NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "离开房间失败，请尝试重新加入")
    end
end

-- 请求房间行为
function GoldCommonModule:reqPlayerAct(action, appid, tableid)
    self:startReq("ReqPlayerAct", action, appid, tableid, GoldAreaConfig.GroupID)
end

function GoldCommonModule:onPlayerActCallBack()

end

function GoldCommonModule:notifyAutoJoinRoom()
    self:dispatchEvent({ name = GoldCommonModule.KW_NOTIFY_AUTOJOIN_ROOM })
end

-- 50相关消息，直接json格式
function GoldCommonModule:respGoldMsg(XYID, buff, len, processid)
    if XYID == GoldRoomProtoDefine.xyid50.UserIdentity then
        local info = json.decode(buff)
        if info and (info.user_identity == "NewPlayer" or info.user_identity == "BackPlayer") then
            self:notifyAutoJoinRoom()
        end
    end
end

-- 处理game相关服务逻辑
function GoldCommonModule:respStartGame(XYID, buff, len, processid)
    if XYID == GoldRoomProtoDefine.xyid.kStartGame then
        local info = NG.StringTool.gameProtobufDataToLuaData(buff, "StartGame")
        if info.can_start then
            if XH.SceneManager:getInstance():getTopSceneTag() == NG.SCENE_TAG.NEWGOLD_LOBBY then
                -- 进入游戏区
                NG.viewManager:closeView("NewGold_PlayAwardView")
                require("newgold.NewGoldController"):getInstance():enterGame(NG.GameID.HPLandlord, { autoReady = self._isAutoJoin })
                self:setAutoJoin(false)
            end
        else
            NG.TipTool.showToast("加入桌子失败，请重试")
        end
    end
end

-- 50相关消息，直接json格式
function GoldCommonModule:respRoomMatchMsg(XYID, buff, len, processid)
end

function GoldCommonModule:respGoldMsg(XYID, buff, len, processid)
    if XYID == GoldRoomProtoDefine.xyid50.UserIdentity then
        local info = json.decode(buff)
        if info and (info.user_identity == GoldRoomProtoDefine.UserIdentityEnum.NewPlayer or info.user_identity == GoldRoomProtoDefine.UserIdentityEnum.BackPlayer) then
            self:dispatchEvent({ name = GoldCommonModule.KW_NOTIFY_AUTOJOIN_ROOM })
        end
    end
end

function GoldCommonModule:onDestroy()
    NG.netEngine:removeProtocolScriptFuncByObj(self, self.respStartGame, GoldAreaConfig.GroupID)
    NG.netEngine:removeProtocolScriptFuncByObj(self, self.respGoldMsg, GoldAreaConfig.GroupID)
    GoldCommonModule.super.onDestroy(self)
end

-- changetable
function GoldCommonModule:setNeedChangeTable(isChange)
    self._changeTable = isChange
end

function GoldCommonModule:getNeedChangeTable()
    local isChange = self._changeTable
    self._changeTable = false
    return isChange
end

function GoldCommonModule:isSupportGame(gameid)
    if gameid == GoldAreaConfig.MAH_BBXL then
        if not NG.remoteAllConfig or not NG.remoteAllConfig.BBXueLiu then
            return false
        end
        for _, lobbyid in pairs(NG.remoteAllConfig.BBXueLiu.switch or {}) do
            if GoldAreaConfig.BridgeLobbyID == lobbyid or lobbyid == 0 then
                return true
            end
        end
        return false
    end
    return true
end

function GoldCommonModule:isPlaceCheck()
    if not self:isSupportGame(NG.remoteAllConfig.BBXueLiu) then
        return false
    end
    if not NG.remoteAllConfig or not NG.remoteAllConfig.BBXueLiu then
        return false
    end
    for _, lobbyid in pairs(NG.remoteAllConfig.BBXueLiu.placeCheck or {}) do
        if GoldAreaConfig.BridgeLobbyID == lobbyid or lobbyid == 0 then
            return true
        end
    end
    return false
end

-- 设置场景gameid
function GoldCommonModule:setEnterGameID(gameID)
    self._gameID = gameID
end

function GoldCommonModule:getEnterGameID()
    return self._gameID
end

-- 是否为巅峰赛
function GoldCommonModule:isPeakRace()
    return self._gameID == GoldAreaConfig.PEAKRACE
end

return GoldCommonModuletM