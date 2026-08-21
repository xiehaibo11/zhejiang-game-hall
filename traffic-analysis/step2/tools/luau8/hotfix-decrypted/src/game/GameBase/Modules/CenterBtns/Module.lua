local CenterBtnsModule = CF.gameClass("CenterBtnsModule", CF.ModuleBase)
CenterBtnsModule.EVENT_GAME_JOIN_50_MATCH_LIST = "EVENT_GAME_JOIN_50_MATCH_LIST"
CenterBtnsModule.EVENT_UPDATE_CHANGESEAT = "EVENT_UPDATE_CHANGESEAT"

function CenterBtnsModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgGameRuleUser),msgClass = CF.GameProtocol.msgGameRuleUser},
    }
end

function CenterBtnsModule:onMsgGameRuleUser(msgData)
    local luaString = "return {" .. msgData.strRule .. "}"
    local tempFunc = loadstring(luaString)
    local rule = nil
    if tempFunc then
        rule = tempFunc()
        if rule.AutoReady then
            self:onStartGameEvent()
        end
    end
    return rule
end
function CenterBtnsModule:onStartGameEvent(addLevel)
    if CF.roomData:is50Match() then 
        local gameLayer = CF.game:getModule("GameLayer")
        if gameLayer.initEveryTime then 
            gameLayer:initEveryTime()
        end
        self:reqJoin50MatchList(addLevel)
    elseif CF.roomData:is220Model() then
        local selfPlayerData = CF.roomData:getSelfPlayerData()
        local gameLayer = CF.game:getModule("GameLayer")
        if gameLayer.initEveryTime then 
            gameLayer:initEveryTime()
        end
        if selfPlayerData then
            CF.msgManager:sendGameStart()
        else
            CF.msgManager:sendPlayerAct(CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT)
        end
    else
        CF.msgManager:sendGameStart()
    end
    CF.msgManager:sendRoomNumber()
    CF.TipTool.clearScrollTip()
    CF.game:getModule("ReadyTip"):showReadyTip()
end

function CenterBtnsModule:onInviteEvent()
    CF.getLobbyModule("Share"):setShareScene(CF.teaHouseManager:isInTeaHouse() and "比赛场" or "包厢", "房间邀请好友")
    CF.shareManager:startUrlShare()
end

function CenterBtnsModule:onCopyEvent()
    CF.getLobbyModule("Share"):setShareScene(CF.teaHouseManager:isInTeaHouse() and "比赛场" or "包厢", "房间复制房间号")
    local str = CF.shareManager:createNormalCopyInfo()
    CF.SysTool.copyString(str)
    CF.TipTool.showToast("邀请信息已复制成功，粘贴分享给您的好友吧！", 2)

    if CF.sdkManager:isInstallWeChat() then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.SHARE_WECHAT}) 
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function () 
            --跳转到微信
            if CF.sdkManager:isInstallWeChat() then
                cc.Application:getInstance():openURL("weixin://")
            end
            CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_FRIEND_WECHAT_SHARE)
        end)
    end
end

function CenterBtnsModule:reqJoin50MatchList(addLevel,isCheckInRoom)
    local param = {}
    param.gameID = CF.roomData:getGameID()
    if addLevel and (addLevel > 0 or addLevel < 0) then 
        param.sessionID = CF.roomData:getRoomLevel() + addLevel
    else
        param.sessionID = CF.roomData:getRoomLevel()
    end
    param.roomID = CF.roomData:getRoomID()
    param.chairCount = CF.roomData:getChairs()
    param.isCheckInRoom50 = isCheckInRoom
    local srsGroupID = CF.roomData:getSRSGroupID()
    -- -- 解决报错，SRS已经断开，又发起了请求，此时返回了大厅，会导致在回调里没有CF.goldManager报错，不会清空req和callback
    local srs = CF.netEngine:getSRSBySRSGroupID(srsGroupID)
    if srs == nil or (srs and srs:getLinkState() ~= XH.SRS_LINK_STATE.LINK_STATE_SUCCESS)  then
        return
    end
    CF.reqJoin50MatchList(param,srsGroupID, self, self.onReqJoin50MatchListCallBack)
    self:dispatchEvent({name = self.EVENT_GAME_JOIN_50_MATCH_LIST})
end

local reducingLevel = 0 --是否正在降场，用于连续降场多级
local addLevel = 0
function CenterBtnsModule:onReqJoin50MatchListCallBack(reqJoin, type, data)
    if type == CF.REQ_TYPE_SUCCESS  then
        if data.code == "GOLD_SUCCESS" then 
            CF.roomData:clearTable()
            CF.roomData:clearAllPlayerData(true)
            local roomData = {}
            roomData.appID = 88888888
            roomData.gameID = data.game_id
            roomData.roomID = data.room_id
            roomData.srsGroupID = CF.roomData:getSRSGroupID()
            roomData.roomMode = 2
            roomData.roomflag = data.session_id
            roomData.chaircnt = data.chair_cnt
            roomData.sRoomMode = CF.ROOM_TYPE.DISPATCH_QUEUE 
            CF.roomData:setRoomData(roomData)
            CF.goldManager:dispatchEvent({name = CF.goldManager.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
        end
    elseif type == CF.REQ_TYPE_FAIL then
        if reqJoin:isIn50() then 
            return
        end
        if data.code == "GOLD_QUEUING" then 
            CF.TipTool.showTip(
                {
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        local param = {}
                        param.gameID = data.game_id
                        param.sessionID = data.session_id
                        param.roomID = 0
                        param.chairCount = data.chairCount
                        local srsGoupID = CF.roomData:getSRSGroupID()
                        CF.reqJoin50MatchList(param,srsGoupID, self, self.onReqJoin50MatchListCallBack)
                    end
                },
                "已在匹配队列中,点击确认返场"
            )
        else
            local msg = reqJoin:getMessage()
            if data.code == "GOLD_HIGH_LIMIT" then 
                if addLevel == 0 then 
                    CF.TipTool.showTip({
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        -- 目前仅新手场50，先不转升场
                        if CF.roomData:getGameID() == 42038 and CF.roomData:is50() then
                            CF.game:leaveGame()
                        else
                            addLevel = addLevel + 1
                            CF.SysTool.performDelayOnce(function() 
                                CF.game:getModule("CenterBtns"):onStartGameEvent(addLevel)
                            end, 0.01)
                        end
                    end,
                    funcClose = function()
                        CF.game:leaveGame()
                    end}, "金币满载，请前往更高级房间，体验更丰富的游戏乐趣!"
                    )
                elseif addLevel < 10 then 
                    addLevel = addLevel + 1
                    CF.SysTool.performDelayOnce(function() 
                        CF.game:getModule("CenterBtns"):onStartGameEvent(addLevel)
                    end, 0.01)
                    return 
                else
                    CF.TipTool.showTip({
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        CF.game:leaveGame()
                    end,
                    funcClose = function()
                        CF.game:leaveGame()
                    end}, msg
                    )
                end 
            elseif data.code == "GOLD_LOW_LIMIT" then 
                local confId = XH.goldConfigManager:getConfIDByGameID(CF.roomData:getGameID(),CF.roomData:getChairs(), CF.roomData:getRoomLevel())
                local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confId)
                local session_id = CF.roomData:getRoomLevel() % 10 --经典干瞪眼要对10取模
                local hasEnterCard = false
                if roominfo and roominfo.roomInfo and roominfo.roomLevelInfos and roominfo.roomLevelInfos[session_id] and roominfo.roomLevelInfos[session_id].minrich > 0 then
                    hasEnterCard = XH.lobby:getModule("UnlimitGoldAct"):judgeIsFullGold(roominfo, session_id, confId)
                    if roominfo.roomInfo.checkEnterCard and not hasEnterCard then
                        hasEnterCard = XH.lobby:getModule("GoldEnterCard"):checkUseGoldEnterCard(roominfo, session_id, confId)
                    end
                end
                if not hasEnterCard then
                    local playerSR = XH.playerData:getSR()
                    local roomlevel = -1
                    if roominfo.roomLevelInfos and #roominfo.roomLevelInfos > 0 then
                        for i = #roominfo.roomLevelInfos, 1, -1 do
                            if playerSR >= roominfo.roomLevelInfos[i].minrich then
                                roomlevel = roominfo.roomLevelInfos[i].roomnameflag
                                break
                            end
                        end
                    end
                    if roomlevel ~= -1 then
                        CF.TipTool.showTip({
                            type = CF.TIP_LAYER_TYPE.OK,
                            funcOK = function()
                                CF.game:getModule("CenterBtns"):onStartGameEvent(roomlevel - CF.roomData:getRoomLevel())
                            end,
                            funcClose = function()
                                CF.game:leaveGame()
                            end}, "金币低于当前房间准入门槛！您可以前往更低场进行游戏"
                            )
                    else
                        CF.TipTool.showTip({
                        type = CF.TIP_LAYER_TYPE.OK,
                        funcOK = function()
                            CF.game:leaveGame()
                        end,
                        funcClose = function()
                            CF.game:leaveGame()
                        end}, msg
                        )
                    end
                end
            else
                CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    CF.game:leaveGame()
                end}, msg
                )
            end 
        end
    elseif type == CF.REQ_TYPE_TIMEOUT then
        CF.TipTool.showTip({
                type = CF.TIP_LAYER_TYPE.OK,
                funcOK = function()
                    CF.game:leaveGame()
                end}, "请求匹配玩家超时，请稍后尝试！"
                )
    end
    reducingLevel = 0
    addLevel = 0
end

function CenterBtnsModule:onUpdateChangeSeat()
    self:dispatchEvent({name = self.EVENT_UPDATE_CHANGESEAT})
end

return CenterBtnsModule�)