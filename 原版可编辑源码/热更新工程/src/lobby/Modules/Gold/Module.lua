local GoldModule = class("GoldModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local ReqPlayerPlace33And50 = require("lobby.Req.Room.ReqPlayerPlace33And50")

GoldModule.EVENT_REFRESH_GOLD_SYSTEMTIME = "EVENT_REFRESH_GOLD_SYSTEMTIME"
GoldModule.EVENT_CLOSE_NEW_USER_GUIDE_VIEW = "EVENT_CLOSE_NEW_USER_GUIDE_VIEW"
local inAppID = 0
function GoldModule:ctor()
    GoldModule.super.ctor(self)
    self._confID = nil
    self._roomFlag = -1
end

function GoldModule:getProxyEvents()
    return {
        {module = XH.login:getModule("Login"), eventKeyName = "EVENT_LOGIN_SUCCESS_CHANGE_GROUP", callBack = "onLoginCallback"},
        {module = XH.netEngine, eventName = XH.DispatchProtocol.RespDispatchAppIDList.event_key, callBack = "onRespDispatchAppIDList"}
    }
end

function GoldModule:getReqConfig()
    return {
        ReqSystemTimes = {reqPath = "app.Req.Task.ReqTaskPercent", callBack = self.onReqTaskPercentCallBack},
        ReqJoinGoldRoom = {reqPath = "lobby.Req.Room.ReqJoinGoldRoom", callBack = self.onJoinGoldRoomCallBack},
        ReqJoinDispatchQueue = {reqPath = "lobby.Req.Room.ReqJoinDispatchQueue", callBack = self.onJoinDispatchQueueCallBack},
        LinkReqJoinRoomGT = {reqPath = "lobby.Req.Room.LinkReqJoinRoomGT", callBack = self.onJoinRoomGTCallBack},
        ReqJoin50MatchList = {reqPath = "lobby.Req.Room.ReqJoin50MatchList", callBack = self.onJoin50MatchList}
    }
end

function GoldModule:RequestSysTime()
    self:startReq("ReqSystemTimes", XH.playerData:getNumberID(), 0, 120, TaskDefine.KW_SYSTEM_TIME, XH.areaData:getSrsGroupID(), 10)
end

function GoldModule:onReqTaskPercentCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local timestamp = json.decode(data.acData).time
        if timestamp ~= nil then
            self:dispatchEvent({name = GoldModule.EVENT_REFRESH_GOLD_SYSTEMTIME, data = timestamp})
        end
    end
end

-- 快速进入房间，不涉及界面切换
function GoldModule:joinGoldRoomQuick(info)
    local confID = info.LeisureID
    local roomFlag = info.roomFlag
    local roomConf = self:getGoldRoomInfoByIndex(confID)
    if roomConf.roomLevelInfos and #roomConf.roomLevelInfos == 0 then
        if roomConf.roomInfo and roomConf.roomInfo.GameID then
            XH.TipTool.showToast("获取房间信息出错 - " .. roomConf.roomInfo.GameID, 2)
        end
        return
    end

    local func = function()
        XH.lobby:getModule("ToponAct"):setHotUpdata(false)
        self:reqJoinGoldRoom(confID, roomFlag)
    end
    XH.lobby:getModule("GoldNew"):isNeedHotUpdata(roomConf.roomInfo.GameID, func)
end

function GoldModule:reqJoinGoldRoom(confID, roomFlag, SrsGroupId, checkInRoom, usePropId)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_GAME_ID, confID)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL, roomFlag)
    self._confID = confID or 0
    self._roomFlag = roomFlag or -1
    self._checkInRoom = checkInRoom
    self._srsGroupID = SrsGroupId
    self._usePropId = usePropId
    if self._checkInRoom == nil then
        self._checkInRoom = true
    end
    local realRoomFlag = roomFlag
    if roomFlag and roomFlag >= 0 then
        realRoomFlag = roomFlag % 10
    end
    local roominfo = self:getGoldRoomInfoByIndex(confID)
    if roominfo and roominfo.roomInfo and type(roominfo.roomInfo.SrsGroupId) == "table" then
        SrsGroupId = SrsGroupId or roominfo.roomInfo.SrsGroupId[realRoomFlag]
    end
    local srsGroupID = SrsGroupId or XH.areaData:getGoldSrsGroupID()
    XH.TipTool.resetLoading()
    XH.TipTool.showLoading()

    if srsGroupID ~= XH.areaData:getGoldSrsGroupID() then
        local goldSRSGroupID = XH.areaData:getGoldSrsGroupID()
        local srs = XH.netEngine:getSRSBySRSGroupID(goldSRSGroupID)
        if srs == nil or (srs and srs:getLinkState() ~= XH.SRS_LINK_STATE.LINK_STATE_SUCCESS) then
            XH.login:getModule("Login"):changeGroupSessionLogin(goldSRSGroupID)
            return
        end
    end
    local srs = XH.netEngine:getSRSBySRSGroupID(srsGroupID)
    if srs == nil or (srs and srs:getLinkState() ~= XH.SRS_LINK_STATE.LINK_STATE_SUCCESS) then
        XH.login:getModule("Login"):changeGroupSessionLogin(srsGroupID)
    else
        self:startJoinGoldRoom(srsGroupID)
    end
end

function GoldModule:getGoldRoomInfoByIndex(index)
    local isNewGoldHall = XH.lobby:getModule("Lobby"):isNewGoldHall()
    if isNewGoldHall then
        return XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(index)
    else
        return XH.goldConfigManager:getGoldRoomInfoByIndex(index)
    end
end

function GoldModule:startJoinGoldRoom(srsGroupID)
    local goldRoomInfo = self:getGoldRoomInfoByIndex(self._confID)
    srsGroupID = srsGroupID or XH.areaData:getGoldSrsGroupID()
    local gameId = goldRoomInfo.roomInfo.GameID
    if self._roomFlag > 0 and goldRoomInfo.roomLevelInfos[self._roomFlag % 10] then
        gameId = goldRoomInfo.roomLevelInfos[self._roomFlag % 10].gameid
    end
    local areaTypeID = goldRoomInfo.roomInfo.AreaTypeID
    local chaircnt = goldRoomInfo.roomInfo.PlayerCount
    local goldMode = goldRoomInfo.roomInfo.GoldMode
    local roomnameflag = self._roomFlag
    if goldRoomInfo.roomInfo.SpecialPlayer and goldRoomInfo.roomInfo.SpecialPlayer == 1 and self._roomFlag > 0 and
        goldRoomInfo.roomLevelInfos[self._roomFlag % 10] then
        roomnameflag = -1
        chaircnt = goldRoomInfo.roomLevelInfos[self._roomFlag % 10].chaircnt
    end
    -- 如果SrsGroupId ~= XH.areaData:getGoldSrsGroupID()，请求一下位置信息
    -- 从这里开始写，但你好像还需要个SRS地址返回给你

    local reqPlayerPositionCallBack = function(selfTemp, req, type, data)
        if type == XH.Req.TYPE.SUCCESS then
            if self._confID == 2038 or self._confID == 2039 then -- 十三张联运不在位置上，则进入游戏
                local gameID = LobbyConfig.CARD13_GAMEID
                if self._confID == 2039 then
                    gameID = LobbyConfig.GAME_ID_APGDY
                end
                XH.TipTool.hideLoading()
                XH.netEngine:removeSRS(XH.areaData:getGoldSrsGroupID())
                self:clearLastRoomInfo()
                XH.lobby:getModule("LianYun"):enter({gameID = gameID, checkPosition = false})
                return
            end
            if goldRoomInfo.roomInfo.DispatchQueue and goldRoomInfo.roomInfo.DispatchQueue == 1 then
                self:reqDispatchAppidList(srsGroupID)
            elseif self._roomFlag > 0 and goldRoomInfo.roomLevelInfos and goldRoomInfo.roomLevelInfos[self._roomFlag % 10] and
                goldRoomInfo.roomLevelInfos[self._roomFlag % 10].area == "GameTea" then
                local rooms = {}
                for _,v in pairs(goldRoomInfo.roomLevelInfos) do
                    if v.roomnameflag == self._roomFlag then
                        -- 检测房间是否已经关闭
                        if self:checkClose(v) and self._checkInRoom then
                            local str = "本房间升级维护。\n敬请期待！如有疑问，请联系客服！"
                            if v.opentime then
                                str = string.format("本房间升级维护，预计%s重新开启。\n敬请期待！如有疑问，请联系客服！", os.date("%m月%d日", v.opentime))
                            end
                            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, str)
                            XH.TipTool.hideLoading()
                            return
                        end
                        rooms = v.room
                    end
                end
                if inAppID ~= 0 then
                    local inRoom = nil
                    for i = 1, #rooms do
                        if rooms[i].appid == inAppID then
                            inRoom = {appid = rooms[i].appid, roomid = rooms[i].roomid}
                            break
                        end
                    end
                    if inRoom then
                        rooms = {}
                        rooms[1] = inRoom
                    end
                    inAppID = 0
                end
                self:startReq("LinkReqJoinRoomGT", gameId, rooms, chaircnt, srsGroupID, 15, {roomLevel = self._roomFlag, checkInRoom = self._checkInRoom})

            elseif goldMode == 50 then
                if gameId == 30579 then
                    if CF and CF.roomData and CF.roomData.isTeaching and CF.roomData:isTeaching() then
                        XH.TipTool.hideLoading()
                        return
                    end
                    -- 暗斗教程局判断
                    local showTeaching = cc.UserDefault:getInstance():getBoolForKey("KW_TEST_DARKSHUANGKOU_SHOW_TEACHING", false)
                    local gifts = XH.lobby:getModule("TeachingGift"):getGifts()
                    local isShow = XH.lobby:getModule("TeachingGift"):getDarkShuangKouTeachingABTest()
                    if (#gifts > 0 and isShow) or showTeaching == true then
                        XH.roomManager:gameStart({gameID = 30579, appID = 1, srsGroupID = 1, roomID = 0, roomMode = XH.ROOM_MODE.MOBILE, teaching = true, is50 = true})
                        return
                    end
                end
                local param = {}
                param.gameID = gameId
                param.sessionID = self._roomFlag
                param.roomID = 0
                param.chairCount = chaircnt
                param.use_prop_id = self._usePropId
                self:startReq("ReqJoin50MatchList", param, srsGroupID, 15)
            else
                self:startReq("ReqJoinGoldRoom", gameId, areaTypeID, chaircnt, goldMode, srsGroupID, roomnameflag, 15)
            end
        elseif type == XH.Req.TYPE.FAIL then
            if req:isIn50() then
                self:onReqPlayerPlace33And50CallBack(req, type, data)
            elseif req:isIn33() then
                data[1].chaircnt = chaircnt
                if data[1].roommode == XH.ROOM_TYPE.GOLD_ROOM then
                    data[1].errorcode = XH.RoomProtocol.ERRORCODE.ERROR_INAPPID
                    self:onJoinGoldRoomCallBack(req, type, data[1])
                elseif data[1].roommode == XH.ROOM_TYPE.NEW_GOLD_ROOM or data[1].roommode == XH.ROOM_TYPE.DISPATCH_QUEUE then
                    data[1].errorcode = XH.DispatchProtocol.ERRORCODE.EXISTGAME
                    self:onJoinDispatchQueueCallBack(req, type, data[1])
                else
                    self:onJoinRoomGTCallBack(req, type, data)
                end
            end

        end
    end

    if self._checkInRoom then
        local reqPlayerPlace33And50 = ReqPlayerPlace33And50.new()
        reqPlayerPlace33And50:addReqCallBack(self, reqPlayerPositionCallBack)
        reqPlayerPlace33And50:start(5)
    else
        reqPlayerPositionCallBack(self, nil, XH.Req.TYPE.SUCCESS, nil)
    end
end

function GoldModule:onLoginCallback(event)
    if self._confID and self._confID ~= 0 then
        self:reqJoinGoldRoom(self._confID, self._roomFlag, self._srsGroupID, self._checkInRoom)
    end
    XH.goldConfigManager:onLoginCallback()
end

function GoldModule:canChangeRoomLevel()
    local confID = self._confID
    local level = self._roomFlag
    local playerSR = XH.playerData:getSR() or 0

    local goldRoomInfo = self:getGoldRoomInfoByIndex(confID)
    if #goldRoomInfo.roomLevelInfos < 2 then
        return false
    end
    local _levelRoom = goldRoomInfo.roomLevelInfos
    for _, roominfo in pairs(_levelRoom) do
        if level == roominfo.roomnameflag then
            if playerSR < roominfo.minrich then
                if self:changeRoomLevel(confID, level, true, _levelRoom, "金币过低,是否进入更低场次") then
                    return true
                end
            elseif playerSR > roominfo.maxrich then
                if self:changeRoomLevel(confID, level, false, _levelRoom, "金币满载，请前往更高级房间，体验更丰富的游戏乐趣!") then
                    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.GOLD_GAME_5)
                    return true
                end
            end
        end
    end
    return false
end

function GoldModule:changeRoomLevel(ConfID, level, bLow, _levelRoom, tipText)
    local resultLevel = self:selectMatchRoom(level, bLow, _levelRoom)
    local callFunc = function()
        self._roomFlag = resultLevel
        self:reqJoinGoldRoom(ConfID, resultLevel)
    end
    if resultLevel ~= level then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK, funcOK = callFunc}, tipText)
        return true
    end
    return false
end

function GoldModule:recordLastRoomInfo()
    if self._confID then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL_WITH_LOBBY, self._roomFlag)
        XH.userDefault:setValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX, self._confID)
        XH.lobby:getModule("GoldNew"):addRecentPlay(self._confID, self._roomFlag)
        -- 产品要求，千变和八王点击入口，是进入到上次玩过的游戏页签，玩过其他游戏，也不影响
        if self._confID == 2001 or self._confID == 2036 then
            cc.UserDefault:getInstance():setIntegerForKey("LAST_JOIN_QBGOLD_INDEX", self._confID)
        end
    end
    local goldRoomInfo = XH.goldConfigManager:getLastGoldRoomInfo()
    if goldRoomInfo then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LAST_GOLD_GAMEID, goldRoomInfo.roomInfo.GameID)
    end
end

function GoldModule:clearLastRoomInfo()
    self._confID = nil
    self._roomFlag = -1
    self._usePropId = nil
end

function GoldModule:onJoinGoldRoomCallBack(reqJoin, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE)
        self:recordLastRoomInfo()
    elseif type == XH.Req.TYPE.FAIL then
        if data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_INAPPID or data.errorcode == XH.RoomProtocol.ERRORCODE.NOT_FOUND_GAME_ID then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    if data.errorcode == XH.RoomProtocol.ERRORCODE.NOT_FOUND_GAME_ID then
                        inAppID = data.inappid
                        data = self:getRoomDataByAppid(data.inappid)
                        local index = XH.goldConfigManager:getIndexByGameid(data.belonggameid)
                        self:reqJoinGoldRoom(index, data.roomflag, data.srsgroupid, false)
                    else
                        XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE, true, true)
                    end
                end
            }, "已在游戏房间中,点击确认返场")
        elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_IN_MATCH_LIST then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE, false, true)
                end
            }, "已在匹配队列,点击确认返场")
        elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_NOT_ENOUGH_SR then
            local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._confID)
            local session_id = self._roomFlag
            local hasEnterCard = false
            if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[self._roomFlag] and roominfo.roomLevelInfos[self._roomFlag].minrich > 0 then
                hasEnterCard = XH.lobby:getModule("UnlimitGoldAct"):judgeIsFullGold(roominfo, self._roomFlag, self._confID)
                if roominfo.roomInfo.checkEnterCard and not hasEnterCard then
                    hasEnterCard = XH.lobby:getModule("GoldEnterCard"):checkUseGoldEnterCard(roominfo, self._roomFlag, self._confID)
                end
            end
            if not hasEnterCard then
                self:judgeQuickRecharge()
            end
        elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_TOO_MUCH_SR then
            -- 是否需要转场
            if not self:canChangeRoomLevel() then
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, XH.ConstString.getStr("ERROR_TOO_MUCH_SR"))
            end
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, data)
        end
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "请求超时")
    end
    self:clearLastRoomInfo()
    XH.TipTool.hideLoading()
end

function GoldModule:onJoinRoomGTCallBack(reqJoin, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        data.cellData.roomflag = self._roomFlag
        XH.roomManager:onEnterGame(data.cellData, XH.ROOM_MODE.MOBILE)
        self:recordLastRoomInfo()
    elseif type == XH.Req.TYPE.FAIL then
        if data and #data > 0 then
            local tempPlace = clone(data[1])
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    -- 这里不能直接进房间了，要把房间信息拿到
                    local inData = {}
                    local place = tempPlace
                    inData.roomid = place.roomid
                    inData.gameappid = place.gameappid
                    inData.chairid = place.chairid
                    inData.nMatchAppid = place.gameappid
                    inData.inappid = place.gameappid
                    inData.tableid = place.tableid
                    inData.state = place.state
                    inData.chaircnt = XH.goldConfigManager:getPlayerCountByGameid(place.gameid)
                    inData.srsgroupid = XH.areaData:getGoldSrsGroupID()
                    inData.askid = 0
                    inData.roommode = place.roommode
                    inData.gameid = place.gameid
                    if inData.gameid == 0 then
                        inAppID = inData.inappid
                        inData = self:getRoomDataByAppid(inData.inappid)
                        if inData then
                            local index = XH.goldConfigManager:getIndexByGameid(inData and inData.belonggameid)
                            self:reqJoinGoldRoom(inData.leisureid or index, inData.roomflag, inData.srsgroupid, false)
                            XH.GT_DK_RECONNECT = true
                        end
                    else
                        XH.roomManager:onEnterGame(inData, XH.ROOM_MODE.MOBILE, true, true)
                    end
                    -- inData.srsgoupid = 0
                end
            }, "已在游戏房间中,点击确认返场")
        else
            if self._confID and string.match(reqJoin:getMessage(), "金币过低") then
                local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._confID)
                local session_id = self._roomFlag
                local hasEnterCard = false
                if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[self._roomFlag] and roominfo.roomLevelInfos[self._roomFlag].minrich > 0 then
                    hasEnterCard = XH.lobby:getModule("UnlimitGoldAct"):judgeIsFullGold(roominfo, self._roomFlag, self._confID)
                    if roominfo.roomInfo.checkEnterCard and not hasEnterCard then
                        hasEnterCard = XH.lobby:getModule("GoldEnterCard"):checkUseGoldEnterCard(roominfo, self._roomFlag, self._confID)
                    end
                end
                if not hasEnterCard then
                    local goldRoomInfo = self:getGoldRoomInfoByIndex(self._confID)
                    if goldRoomInfo and
                        XH.lobby:getModule("YGiftBankruptcy")
                            :isShowGiftEnter(goldRoomInfo.roomLevelInfos[self._roomFlag % 10].gameid or goldRoomInfo.roomInfo.GameID, self._roomFlag) then
                    else
                        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, reqJoin:getMessage())
                    end
                end
            elseif string.match(reqJoin:getMessage(), "金币过高") or string.match(reqJoin:getMessage(), "金币高于") or
                string.match(reqJoin:getMessage(), "金币过多") then
                if not self:canChangeRoomLevel() then
                    XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, XH.ConstString.getStr("ERROR_TOO_MUCH_SR"))
                end
                -- 进房礼包逻辑
            else
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, reqJoin:getMessage())
            end
        end
        --[[if data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_INAPPID then
            XH.TipTool.showTip(
                {
                    type = XH.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE, true, true)
                    end
                },
                "已在游戏房间中,点击确认返场"
            )
        elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_IN_MATCH_LIST then
            XH.TipTool.showTip(
                {
                    type = XH.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE, false, true)
                    end
                },
                "已在匹配队列,点击确认返场"
            )
        elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_NOT_ENOUGH_SR then
            self:judgeQuickRecharge()
        elseif data.errorcode == XH.RoomProtocol.ERRORCODE.ERROR_TOO_MUCH_SR then
            -- 是否需要转场
            if not self:canChangeRoomLevel() then
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, XH.ConstString.getStr("ERROR_TOO_MUCH_SR"))
            end
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, data)
        end--]]
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "请求超时")
    end
    self:clearLastRoomInfo()
    XH.TipTool.hideLoading()
end

function GoldModule:onJoinDispatchQueueCallBack(reqJoin, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE)
        self:recordLastRoomInfo()
    elseif type == XH.Req.TYPE.FAIL then
        if data.errorcode == XH.DispatchProtocol.ERRORCODE.EXISTGAME then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    -- 这里不能直接进房间了，要把房间信息拿到
                    local inData = self:getRoomDataByAppid(data.gameappid)
                    if inData then
                        inAppID = data.gameappid
                        local index = XH.goldConfigManager:getIndexByGameid(inData.belonggameid)
                        self:reqJoinGoldRoom(index, inData.roomflag, inData.srsgroupid, false)
                    else
                        XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE, true, true)
                    end

                end
            }, "已在游戏房间中,点击确认返场")
        elseif data.errorcode == XH.DispatchProtocol.ERRORCODE.EXISTQUEUE then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    XH.roomManager:onEnterGame(data, XH.ROOM_MODE.MOBILE, false, true)
                end
            }, "已在匹配队列,点击确认返场")
        elseif data.errorcode == XH.DispatchProtocol.ERRORCODE.GOLDLOWLIMIT then
            local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._confID)
            local session_id = self._roomFlag
            local hasEnterCard = false
            if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[self._roomFlag] and roominfo.roomLevelInfos[self._roomFlag].minrich > 0 then
                hasEnterCard = XH.lobby:getModule("UnlimitGoldAct"):judgeIsFullGold(roominfo, self._roomFlag, self._confID)
                if roominfo.roomInfo.checkEnterCard and not hasEnterCard then
                    hasEnterCard = XH.lobby:getModule("GoldEnterCard"):checkUseGoldEnterCard(roominfo, self._roomFlag, self._confID)
                end
            end
            if not hasEnterCard then
                self:judgeQuickRecharge()
            end
        elseif data.errorcode == XH.DispatchProtocol.ERRORCODE.GOLDOVERLIMIT then
            -- 是否需要转场
            if not self:canChangeRoomLevel() then
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, XH.ConstString.getStr("ERROR_TOO_MUCH_SR"))
            end
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, data)
        end
        self:stopHeartBeatWithDispatchQueue()
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "请求超时")
        self:stopHeartBeatWithDispatchQueue()
    end
    self:clearLastRoomInfo()
    XH.TipTool.hideLoading()
end

function GoldModule:onJoin50MatchList(reqJoin, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local param = {}
        param.gameappid = 0
        param.gameid = data.game_id
        param.roomid = 0
        param.srsgroupid = XH.areaData:getGoldSrsGroupID()
        param.roommode = XH.ROOM_TYPE.DISPATCH_QUEUE
        param.roomflag = data.session_id
        param.chaircnt = data.chairCount
        param.is50 = true
        XH.roomManager:onEnterGame(param, XH.ROOM_MODE.MOBILE)
        self:recordLastRoomInfo()
    elseif type == XH.Req.TYPE.FAIL then
        if data.code == "GOLD_QUEUING" then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    XH.TipTool.showLoading()
                    local param = {}
                    param.gameID = data.game_id
                    param.sessionID = data.session_id
                    param.roomID = 0
                    param.chairCount = data.chairCount
                    self:startReq("ReqJoin50MatchList", param, XH.areaData:getGoldSrsGroupID(), 15)
                end
            }, "已在匹配队列中,点击确认返场")
        elseif data.code == "GOLD_GAMING" then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    XH.TipTool.showLoading()
                    local reqPlayerPlace33And50 = ReqPlayerPlace33And50.new()
                    reqPlayerPlace33And50:addReqCallBack(self, self.onReqPlayerPlace33And50CallBack)
                    reqPlayerPlace33And50:start(15)
                end
            }, "已在游戏房间中,点击确认返场")

        elseif data.code == "GOLD_LOW_LIMIT" then
            local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(self._confID)
            local session_id = self._roomFlag % 10 --经典干瞪眼要对10取模
            local hasEnterCard = false
            if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[session_id] and roominfo.roomLevelInfos[session_id].minrich > 0 then
                hasEnterCard = XH.lobby:getModule("UnlimitGoldAct"):judgeIsFullGold(roominfo, session_id, self._confID)
                if roominfo.roomInfo.checkEnterCard and not hasEnterCard then
                    hasEnterCard = XH.lobby:getModule("GoldEnterCard"):checkUseGoldEnterCard(roominfo, session_id, self._confID)
                end
            end
            if not hasEnterCard then
                self:judgeQuickRecharge()
            end
        elseif data.code == "GOLD_HIGH_LIMIT" then
            if not self:canChangeRoomLevel() then
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, XH.ConstString.getStr("ERROR_TOO_MUCH_SR"))
            end
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, reqJoin:getMessage())
        end
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "请求匹配玩家超时，请稍后尝试！")
    end
    XH.TipTool.hideLoading()
    self:clearLastRoomInfo()
end

function GoldModule:onReqPlayerPlace33And50CallBack(reqJoin, type, data)
    if type == XH.Req.TYPE.FAIL then
        local cloneData = clone(data[1])
        local peakRaceGameList = {20479, 20496, 20503}
        for i = 1, #peakRaceGameList do
            if peakRaceGameList[i] == cloneData.gameid then
                XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "您正在巅峰赛游戏中，请从巅峰赛入口返回游戏")
                XH.TipTool.hideLoading()
                self:clearLastRoomInfo()
                return
            end
        end

        local isInCard13 = false
        for _, card13GameID in ipairs(LobbyConfig.Card13GameIDList) do
            if cloneData.gameid == card13GameID then
                isInCard13 = true
                break
            end
        end

        local gameID = LobbyConfig.CARD13_GAMEID
        if self._confID == 2039 then
            gameID = LobbyConfig.GAME_ID_APGDY
        end
        if (self._confID == 2038 or self._confID == 2039) and isInCard13 then -- 十三张联运在位置上，则进入游戏 不弹框 直接进入
            XH.TipTool.hideLoading()
            XH.netEngine:removeSRS(XH.areaData:getGoldSrsGroupID())
            XH.lobby:getModule("LianYun"):enter({gameID = gameID, checkPosition = false})
        else
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    if isInCard13 then
                        XH.TipTool.hideLoading()
                        XH.netEngine:removeSRS(XH.areaData:getGoldSrsGroupID())
                        XH.lobby:getModule("LianYun"):enter({gameID = gameID})
                        return
                    end
                    local param = {}
                    param.gameappid = cloneData.roomid
                    param.gameid = cloneData.gameid
                    param.roomid = cloneData.roomid
                    param.srsgroupid = cloneData.srsgroupid or XH.areaData:getGoldSrsGroupID()
                    param.roommode = cloneData.roommode
                    param.roomflag = cloneData.sessionid
                    local playerCount = cloneData.chaircnt or 4
                    param.chaircnt = playerCount
                    param.is50 = reqJoin:isIn50()
                    XH.roomManager:onEnterGame(param, XH.ROOM_MODE.MOBILE, true)
                    self:recordLastRoomInfo()
                end
            }, "已在游戏房间中,点击确认返场")
        end

    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "请求玩家位置信息超时，请稍后尝试！")
    end
    XH.TipTool.hideLoading()
    self:clearLastRoomInfo()
end

-- 选择合适匹配的场次
function GoldModule:selectMatchRoom(level, bLow, _levelRoom)
    local resultLevel = level
    local playerSR = XH.playerData:getSR() or 0
    for _, roominfo in pairs(_levelRoom) do
        if math.floor(roominfo.roomnameflag / 10) == math.floor(level / 10) then
            repeat
                if bLow then
                    if roominfo.roomnameflag >= level then
                        break
                    end
                else
                    if roominfo.roomnameflag <= level then
                        break
                    end
                end
                if (playerSR >= roominfo.minrich) and ((playerSR <= roominfo.maxrich) or (roominfo.maxrich == -1)) then
                    resultLevel = roominfo.roomnameflag
                end
            until true
        end
    end
    return resultLevel
end

function GoldModule:reqTaskGetAward(action)
    return false
end

-- 请求队列服务Appid列表
function GoldModule:reqDispatchAppidList(srsgroupId)
    local srsGroupID = srsgroupId or XH.areaData:getSrsGroupID()
    local reqAppID = XH.DispatchProtocol.ReqDispatchAppIDList:new()
    reqAppID.askid = os.time()
    self._dispatchGroupID = srsGroupID
    XH.netEngine:sendProtocol(reqAppID, XH.DispatchProtocol.ReqDispatchAppIDList.processid, 0, srsGroupID)
end

function GoldModule:onRespDispatchAppIDList(event)
    local resp = XH.DispatchProtocol.RespDispatchAppIDList:new()
    resp:bistream(event.msg.buff, event.msg.len)
    self:startHeartBeatWithDispatchQueue(resp.appids)
    local goldRoomInfo = XH.goldConfigManager:getLastGoldRoomInfo()
    if not goldRoomInfo then
        return
    end
    local srsGroupID = XH.areaData:getGoldSrsGroupID()
    local gameId = goldRoomInfo.roomInfo.GameID
    local chaircnt = goldRoomInfo.roomInfo.PlayerCount
    local roomnameflag = self._roomFlag
    if goldRoomInfo.roomInfo.SpecialPlayer and goldRoomInfo.roomInfo.SpecialPlayer == 1 and goldRoomInfo.roomLevelInfos[self._roomFlag % 10] then
        roomnameflag = -1
        chaircnt = goldRoomInfo.roomLevelInfos[self._roomFlag % 10].chaircnt
    end
    self:startReq("ReqJoinDispatchQueue", gameId, chaircnt, srsGroupID, roomnameflag, 15)
end

-- 保持与队列服务的连接
function GoldModule:startHeartBeatWithDispatchQueue(appids)
    self:stopHeartBeatWithDispatchQueue()
    self._dispatchAppIds = appids
    self:checkActWithDispatch()
    self._heartBeatQueueScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:checkActWithDispatch()
    end, 5, false)
end

function GoldModule:checkActWithDispatch()
    print("checkActWithDispatch...........")
    local appids = self._dispatchAppIds
    for i = 1, #appids do
        local checkAction = XH.DispatchProtocol.CheckAct:new()
        XH.netEngine:sendProtocol(checkAction, checkAction.processid, appids[i], self._dispatchGroupID or 0)
    end
end

function GoldModule:stopHeartBeatWithDispatchQueue()
    if self._heartBeatQueueScheduleID ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._heartBeatQueueScheduleID)
        self._heartBeatQueueScheduleID = nil
    end
end

function GoldModule:judgeQuickRecharge()
    local goldRoomInfo = self:getGoldRoomInfoByIndex(self._confID)
    if goldRoomInfo and goldRoomInfo.roomInfo.GameID then
        local gameid = goldRoomInfo.roomInfo.GameID
        if goldRoomInfo.roomLevelInfos and self._roomFlag > 0 and goldRoomInfo.roomLevelInfos[self._roomFlag % 10] and goldRoomInfo.roomLevelInfos[self._roomFlag % 10].gameid then
            gameid = goldRoomInfo.roomLevelInfos[self._roomFlag % 10].gameid
        end
        if XH.lobby:getModule("YGiftBankruptcy"):isShowGiftEnter(gameid, self._roomFlag) then
            return
        end
    end
    local isSupport = XH.areaData:isSupportGoldQuickRecharge() or false
    if (self._roomFlag == 2 or self._roomFlag == 3) and isSupport then
        XH.viewManager:openView("GoldRechargeView", nil, {levelCharge = self._roomFlag})
    elseif self._roomFlag == 1 or self._roomFlag == 4 then
        if not XH.playerData:getIsRealNameTourist() and not XH.isEmbeddedApp() then -- 游客登陆
            XH.viewManager:openView("GoldBaseLiveView")
        else
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
                funcOK = function()

                end
            }, "您的金币不足，请进行充值")
        end
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                local ShopConfig = require("lobby.Modules.Shop.Config")
                XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.GOLD})
            end
        }, "您的金币不足，请进行充值")
    end
end

function GoldModule:closeNewUserGameGuideView()
    self:dispatchEvent({name = GoldModule.EVENT_CLOSE_NEW_USER_GUIDE_VIEW})
end

function GoldModule:getRoomDataByAppid(appid)
    local levelCfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.GOLD, "LevelInfo")
    if levelCfg and levelCfg.LevelInfo then
        local levelInfoArray = levelCfg.LevelInfo
        for index, info in ipairs(levelInfoArray) do
            if info.room then
                for _, room in ipairs(info.room) do
                    if appid == room.appid then
                        if info.roommode == XH.ROOM_TYPE.GOLD_ROOM_BW then
                            local lastRoomFlag = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_LEVEL_WITH_LOBBY)
                            if lastRoomFlag ~= info.roomnameflag then
                                break
                            end
                        end
                        local data = {}
                        data.gameid = info.gameid
                        data.roomid = room.roomid
                        data.roommode = info.roommode
                        data.gameappid = room.appid
                        data.inappid = room.appid
                        data.chaircnt = info.chaircnt
                        data.srsgroupid = XH.areaData:getGoldSrsGroupID()
                        data.nMatchAppid = room.appid
                        data.roomflag = info.roomnameflag
                        if info.leisureid then
                            data.leisureid = info.leisureid
                            local params = XH.goldConfigManager:getGoldRoomInfoByIndex(info.leisureid)
                            if params.roomInfo then
                                local tmpIndex = info.roomnameflag % 10
                                if params.roomInfo.SrsGroupId and params.roomInfo.SrsGroupId[tmpIndex] then
                                    data.srsgroupid = params.roomInfo.SrsGroupId[tmpIndex]
                                end
                            end
                        end
                        if info.belonggameid then
                            data.belonggameid = info.belonggameid
                        end
                        return data
                    end
                end
            end
        end
    end
    return nil
end

-- 获取额外拓展参数
function GoldModule:getExtDataInfo(roomID, appID)
    if self._confID then
        local data = self:getExtDataInfoByConfID(self._confID, roomID, appID)
        if data then
            return data
        end
    end
    local confID = XH.userDefault:getValue(XH.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX, -1)
    if confID ~= -1 then
        local data = self:getExtDataInfoByConfID(confID, roomID, appID)
        if data then
            return data
        end
    end
    return nil
end

function GoldModule:getExtDataInfoByConfID(confID, roomID, appID)
    local goldRoomInfo = self:getGoldRoomInfoByIndex(confID)
    if goldRoomInfo then
        local _levelRoom = goldRoomInfo.roomLevelInfos
        for _, roominfo in pairs(_levelRoom) do
            if roominfo.room and #roominfo.room > 0 then
                for j = 1, #roominfo.room do
                    if roominfo.room[j].roomid == roomID and roominfo.room[j].appid == appID then
                        local info = {minscore = roominfo.minrich, maxscore = roominfo.maxrich}
                        return json.encode(info)
                    end
                end
            end
        end
    end
    return nil
end

function GoldModule:checkClose(roominfo)
    if roominfo and roominfo.opentime and roominfo.opentime >= XH.lobby:getModule("Shop"):getServerTime() then
        return true
    end
    return false
end

return GoldModule
