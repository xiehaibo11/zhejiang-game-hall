local TeaHouseTablePokerItem = import(".TeaHouseTablePokerItem")
---@class TeaHouseTablePokerPlayersItem : TeaHouseTablePokerItem
local TeaHouseTablePokerPlayersItem = class("TeaHouseTablePokerPlayersItem", TeaHouseTablePokerItem)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

local KW_ICON_DEFAULT_PNG = "tea_house_main_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_main_view.plist"

function TeaHouseTablePokerPlayersItem:ctor(tableInfo)
    TeaHouseTablePokerPlayersItem.super.ctor(self)

    self._tableInfo = tableInfo

    self._remoteImages = {}

    self._playerInfos = {}
    self:initMaxPlayerCount(self._tableInfo.size)
    self:initPlayers()

    self:setRoomID(tableInfo.tableid)
    self:setRound(0, tableInfo.count)
    -- self:setBaseScore(TeaHouse.SysTool.analysisZhRule(tableInfo.data))
    self:setBaseScoreEx(TeaHouse.SysTool.analysisBaseScore(tableInfo.gameid, tableInfo.data))
    self:setPayType(TeaHouse.SysTool.analysisPayType(tableInfo.data))
    self:setGame(tableInfo.name)
    self:setIsAutoReady(TeaHouse.SysTool.analysisIsAutoReady(tableInfo.data))
    self:setQueMen(tableInfo.gameid, tableInfo.data or "")
end

function TeaHouseTablePokerPlayersItem:getTableInfo()
    return self._tableInfo
end

function TeaHouseTablePokerPlayersItem:getPlayerTableInfo(playerInfo)
    local playerCount = self._tableInfo.size
    local playerSeat = playerInfo.seat
    if self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME then
        playerCount = 0
        playerSeat = 0
        local playerNewSeat = nil
        for i = 1, #self._tableInfo.nNumid do
            local areaID = self._tableInfo.nAreaid[i]
            local numID = self._tableInfo.nNumid[i]
            if areaID ~= 0 and numID ~= 0 then
                if playerInfo.areaid == areaID and playerInfo.numid == numID then
                    playerNewSeat = playerSeat
                elseif playerNewSeat == nil then
                    playerSeat = playerSeat + 1
                end
                playerCount = playerCount + 1
            end
        end
        if playerCount == self._tableInfo.size then
            playerSeat = playerInfo.seat
        end
    end
    return playerCount, playerSeat
end

function TeaHouseTablePokerPlayersItem:addPlayerNumID(playerInfo)
    local playerCount, playerSeat = self:getPlayerTableInfo(playerInfo)
    local playerMapping = TeaHouseTablePokerItem.PlayersMapping[playerCount]
    if playerMapping == nil then
        return
    end
    local seatID = playerMapping[playerSeat + 1]
    if seatID == nil then
        return
    end
    local btnSeat = self["_btnSeat" .. seatID]
    if btnSeat then
        btnSeat:setVisible(false)
    end
    local imgPlayer = self["_imgPlayer" .. seatID]
    if imgPlayer then
        imgPlayer:setVisible(true)
    end
    local textName = self["_textName" .. seatID]
    if textName then
        textName:setString("获取中...")
    end
    local textID = self["_textID" .. seatID]
    if textID then
        textID:setString(playerInfo.numid)
    end
    local panelHead = self["_panelHead" .. seatID]
    if panelHead then
        if not self._remoteImages[seatID] then
            local size = panelHead:getContentSize()
            self._remoteImages[seatID] = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :addTo(panelHead)
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
        self._remoteImages[seatID]._remoteUrl = ""
        self._remoteImages[seatID]:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        TeaHouse.SysTool.loadHead(self._remoteImages[seatID], "", 0)
    end
    local imgOffline = self["_imgOffline" .. seatID]
    if imgOffline then
        imgOffline:setVisible(false)
    end
    self._playerInfos[seatID] = playerInfo
end

function TeaHouseTablePokerPlayersItem:initPlayers()
    local teahouseData = TeaHouse.manager.teahouseData
    for index, numID in pairs(self._tableInfo.nNumid) do
        local areaID = self._tableInfo.nAreaid[index]
        if numID ~= 0 and areaID ~= 0 then
            local playerInfo = teahouseData:getPlayerInfo(areaID, numID)
            if playerInfo then
                self:addPlayerInfo(playerInfo)
            else
                self:addPlayerNumID({
                    seat = index - 1,
                    areaid = areaID,
                    numid = numID,
                })
            end
        end
    end
end

function TeaHouseTablePokerPlayersItem:addPlayerInfo(playerInfo)
    local playerCount, playerSeat = self:getPlayerTableInfo(playerInfo)
    local playerMapping = TeaHouseTablePokerItem.PlayersMapping[playerCount]
    if playerMapping == nil then
        return
    end
    local seatID = playerMapping[playerSeat + 1]
    if seatID == nil then
        return
    end
    local btnSeat = self["_btnSeat" .. seatID]
    if btnSeat then
        btnSeat:setVisible(false)
    end
    local imgPlayer = self["_imgPlayer" .. seatID]
    if imgPlayer then
        imgPlayer:setVisible(true)
    end
    local textName = self["_textName" .. seatID]
    if textName then
        textName:setString(TeaHouse.StringTool.getTrimName(playerInfo.nickName))
    end
    local textID = self["_textID" .. seatID]
    if textID then
        textID:setString(playerInfo.numid)
    end
    local panelHead = self["_panelHead" .. seatID]
    if panelHead then
        if not self._remoteImages[seatID] then
            local size = panelHead:getContentSize()
            self._remoteImages[seatID] = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width, size.height)
            :addTo(panelHead)
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
        self._remoteImages[seatID]._remoteUrl = ""
        self._remoteImages[seatID]:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        TeaHouse.SysTool.loadHead(self._remoteImages[seatID], playerInfo.url, playerInfo.sex)
    end
    local imgOffline = self["_imgOffline" .. seatID]
    if imgOffline then
        imgOffline:setVisible(playerInfo.bOffLine)
    end
    self._playerInfos[seatID] = playerInfo
end

function TeaHouseTablePokerPlayersItem:removePlayerInfo(playerInfo)
    for seatID, info in pairs(self._playerInfos) do
        if info.areaid == playerInfo.areaid and info.numid == playerInfo.numid then
            local btnSeat = self["_btnSeat" .. seatID]
            if btnSeat then
                btnSeat:setVisible(true)
            end
            local imgPlayer = self["_imgPlayer" .. seatID]
            if imgPlayer then
                imgPlayer:setVisible(false)
            end
        end
    end
end

function TeaHouseTablePokerPlayersItem:updateState()
    -- 在房间中，不能观战
    local position = TeaHouse.BridgeData.getPlayerPosition()
    if position.gameID == 0 then
        if not TeaHouse.manager.teahouseMain:isVipExpire() then
            self._KW_BTN_WATCH:setVisible(TeaHouse.manager.teahouseMain:isSupportWatch(self._tableInfo.gameid) and self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME)
        else
            self._KW_BTN_WATCH_VIP:setVisible(TeaHouse.manager.teahouseMain:isSupportWatch(self._tableInfo.gameid) and self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME)
        end
    else
        self._KW_BTN_WATCH:setVisible(false)
        self._KW_BTN_WATCH_VIP:setVisible(false)
    end
    self:setState(self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME, self._tableInfo.size)
    self:setTableColor(self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME,TeaHouse.SysTool.analysisTableColor(self._tableInfo.data))
    if self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME and self._tableInfo.finish < self._tableInfo.count then
        self:setRound(self._tableInfo.finish + 1, self._tableInfo.count)
    end
    if self._btnClose then
        local teahouseData = TeaHouse.manager.teahouseData
        if self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME then
            local playerCount = 0
            for index, numID in pairs(self._tableInfo.nNumid) do
                if index <= self._tableInfo.size then
                    local areaID = self._tableInfo.nAreaid[index]
                    if numID ~= 0 and areaID ~= 0 then
                        playerCount = playerCount + 1
                    end
                end
            end
            local isNeedAdjust = true;
            local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
            if SwitchConfig.AlwaysJoin then
                for _, gameID in ipairs(SwitchConfig.AlwaysJoin) do
                    if gameID == self._tableInfo.gameid then
                        isNeedAdjust = false
                        break;
                    end
                end
            end
            if isNeedAdjust and playerCount ~= self._tableInfo.size then
                self._playerInfos = {}
                self:initMaxPlayerCount(playerCount)
                self:initPlayers()
            end
            self._btnClose:setVisible(teahouseData:checkSelfPower("DismissGameTable") and
            teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.DELETE_TABLE))
        else
            self._btnClose:setVisible(teahouseData:checkSelfPower("DismissTable") and
            teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.DELETE_TABLE))
        end
    end
    self:setPayType(TeaHouse.SysTool.analysisPayType(self._tableInfo.data))
end

function TeaHouseTablePokerPlayersItem:onTableClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local currPayType = nil
    if self._textRule2 then 
        currPayType = self._textRule2:getString()
    end
    local zhRule = TeaHouse.SysTool.analysisZhRuleEx(self._tableInfo.gameid, self._tableInfo.data,currPayType)
    if #zhRule > 0 then
        zhRule = zhRule .. "\n"
    end
    zhRule = zhRule .. "("
    local bFirst = true
    local playCountConf
    local bPlayModuleAreaText = false
    local curLobbyID = TeaHouse.BridgeData.getLobbyID()
    local mutiGameTable = MutiVersionGameConfig.getMutiGameTable(self._tableInfo.gameid, curLobbyID)
    local tmpLobbyid
    if mutiGameTable and mutiGameTable[self._tableInfo.gameid] then
        tmpLobbyid = mutiGameTable[self._tableInfo.gameid].lobbyid
    end
    if tmpLobbyid and tmpLobbyid ~= curLobbyID then
        playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._tableInfo.gameid, self._tableInfo.data,nil,tmpLobbyid)
        bPlayModuleAreaText = true
    else
        playCountConf = TeaHouse.SysTool.getPlayCountConfByGameID(self._tableInfo.gameid, self._tableInfo.data)
    end
    if playCountConf then
        for _, v in pairs(playCountConf.listData or {}) do
            if v.Value == self._tableInfo.count then
                zhRule = zhRule .. (bFirst and "" or ",") .. v.TextShow
                bFirst = false
            end
        end
    end
    zhRule = zhRule .. ")"
    if bPlayModuleAreaText then
        zhRule = zhRule .."\n".. mutiGameTable[self._tableInfo.gameid].areaName .. "玩法"
    end
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, zhRule)
end

function TeaHouseTablePokerPlayersItem:onSeatClicked(send, eventType, seatID)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if XH.playerData:checkNewRealName(self._tableInfo.gameid) ~= 0 then return end--实名限制
    if not TeaHouse.manager.teahouseGeneral:findGameByGameID(self._tableInfo.gameid) then
        return
    end
    if not TeaHouse.manager.teahouseData:checkSelfPower("JoinTable") then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "不能加入游戏")
        return
    end
    if TeaHouse.manager.teahouseGeneral:checkIsInGame() then
        return
    end
    if self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME then
        TeaHouse.TipTool.showTip({
            type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
            funcOK = function()
                TeaHouse.manager.teahouseMain:joinTable(self._tableInfo.tableid, seatID - 1)
            end
        }, "TEAHOUSE_MID_JOIN_TIP")
    else
        TeaHouse.manager.teahouseMain:joinTable(self._tableInfo.tableid, seatID - 1)
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.TeaCreateSelected,{time1 = os.time(),userid = XH.playerData:getNumberID()})
end

function TeaHouseTablePokerPlayersItem:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local DismissTableTips = "是否确认要解散房间("..self._tableInfo.tableid..")?"
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_CANEL,
    funcOK = function()
        local isForce = false
        local teahouseData = TeaHouse.manager.teahouseData
        if self._tableInfo.state == TeaHouse.TeaHouseProtocol.TableInfo.FLAG.ST_GAME then
            isForce = true
            if not teahouseData:checkSelfPower("DismissGameTable") or
            not teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.DELETE_TABLE) then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "HAVING_PLAYER_CANNOTDISMISS")
                return
            end
        else
            if not teahouseData:checkSelfPower("DismissTable") or
            not teahouseData:checkSelfAdminRight(teahouseData.ADMIN_RIGHT.DELETE_TABLE) then
                return
            end
        end
        -- 绍兴3D参数默认传1
    	if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D or TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.YUYAO then
        	isForce = true
    	end
        if TeaHouse.manager.teahouseMain:isSupportNewContinue(self._tableInfo.gameid) then
        	isForce = true
    	end
        TeaHouse.manager.teahouseMain:dimissTable(self._tableInfo, isForce)
    end }, DismissTableTips)
end

function TeaHouseTablePokerPlayersItem:onTableSeeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not TeaHouse.manager.teahouseMain:isVipExpire() then
        -- 请求boxdata服务新协议进入回放观战模式
        TeaHouse.reqRealtimeGameRecord(self._tableInfo.tableid, 0, self._tableInfo.gameid, self._tableInfo.nPlayerCount)
    else
        XH.TipTool.showToast("您的会员已过期")
        XH.viewManager:openView("SxvipShopView", nil, SxVipConfig.ThrowData.source.look)
    end
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090610)
end

function TeaHouseTablePokerPlayersItem:onTableVipSeeClicked()
    local data = {
        block_label = '比赛场牌桌',
        item_id = tostring(self._tableInfo.gameid)
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.g030601, data)
    XH.viewManager:openView("SxvipShopView", nil, SxVipConfig.ThrowData.source.look)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090610)
end

return TeaHouseTablePokerPlayersItemA?