local PeakRaceSiChuanModule = class("PeakRaceSiChuanModule", NG.ModuleBase)
local GameMsgManager = require("newgold.MatchGames.GamePublic.GameMsgManager").getInstance()
local PeakRaceDispatchConfig = require("newgold.GoldLobby.Modules.PeakRaceDispatch.Define")

function PeakRaceSiChuanModule:delSToCMessage(subXYID, subBuff, subLen)
    for k, v in pairs(PeakRaceDispatchConfig.SC_XY_Defines) do
        if v == subXYID then
            local msg = NG.StringTool.protobufDataToLuaData50("TTISCProtols", subBuff, k, "sc.TTIProtols")
            -- dump(info)
            --如果消息需要缓存 ， 则存起来
            local cmd = PeakRaceDispatchConfig.SC_XY_TO_CMD[subXYID]
            if g_msgCache:needCache(cmd) then
                g_msgCache:addOneMsg(cmd, msg)
            end
            g_longConnect:Dispatch(cmd, msg)
            if cmd == g_msgDefinitions.MSG_RECV_MSG_FROM_PLAYER_ACK then
                if msg.msgType == 1 and not g_gameGlobal:getIsInPaiZhuo() then
                    local ok, jsonData = pcall(function()
                        return json.decode(msg.content)
                    end)
                    if ok and type(jsonData) == "table" then
                        local otherNotifyServer = function(isAgree)

                        end
                        if type(jsonData.vipTableID) == "number" and jsonData.vipTableID > 0 then
                            g_gameGlobal:setVipTableId(jsonData.vipTableID)
                            local sendEnterRoom = function()

                                g_gameGlobal:requestVipRoomInfo(jsonData.vipTableID)

                                otherNotifyServer(true)
                            end
                            otherNotifyServer = function(isAgreeBool)
                                if not isAgreeBool then
                                    local myInfo = g_gameGlobal:getMyselfInfo()
                                    local desc = string.format("%s拒绝了您的牌桌邀请", myInfo.playerName)
                                    local needInvitePlayerIndexs = {}
                                    needInvitePlayerIndexs[1] = jsonData.playerIndex
                                    local SendMsgToPlayersMsg = {}
                                    SendMsgToPlayersMsg.desPlayerIndexList = needInvitePlayerIndexs
                                    SendMsgToPlayersMsg.msgType = 3
                                    SendMsgToPlayersMsg.content = json.encode(
                                    {
                                        vipTableID = jsonData.vipTableID,
                                        tip = desc,
                                    }
                                    )
                                    g_longConnect:sendMsg(g_msgDefinitions.MSG_SEND_MSG_TO_PLAYERS, SendMsgToPlayersMsg)
                                end
                            end

                            ShowConfirmCancelBox(jsonData.tip, sendEnterRoom, function() otherNotifyServer(false) end, true, 2, true, true)

                            if G_TEEST_AUTO_CHU then
                                performWithDelay(display.getRunningScene(), function() sendEnterRoom() end, 0.5)
                            end
                        end
                    end

                elseif msg.msgType == 2 then
                    local selfInfo = g_gameGlobal:getMyselfInfo()
                    -- 运营商不接收亲友圈房间邀请
                    if not selfInfo:isOperator()
                    -- 设置中关闭了
                    and not g_UserDataTable.ignoreClubTableInvite
                    and not g_gameGlobal:ignoreClubInvite(msg.srcPlayerIndex) then
                        g_gameGlobal:createClubInvitePopView(msg)
                    end
                elseif msg.msgType == 3 and not g_gameGlobal:getGameStart() then
                    local ok, jsonData = pcall(function()
                        return json.decode(msg.content)
                    end)
                    if ok and type(jsonData) == "table" then
                        ShowConfirmBox(jsonData.tip, nil, nil, nil, nil, true)
                    end
                elseif msg.msgType == 4 then
                    ShowCommonPopMsgView(false, { title = "提示", content = msg.content, isMiddleClose = true })
                end
            elseif cmd == g_msgDefinitions.MSG_SYSTEM_NOTIFY_MSG then
                if msg.type == 0 then
                    if string.find(msg.content, "GPSERROR") then
                        local strs = string.split(msg.content, "-")
                        msg.content = strs[2] or ""
                    end
                    ShowToastMsg(msg.content)
                elseif msg.type == 1 then
                    ShowConfirmBox(msg.content)
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_LOGIN_ACK then
                print("登录返回")
                -- 重置下进入强制定位房间的标记
                g_gameGlobal:setForceLocateResult(false)
                loginBackMsg(msg)
            elseif cmd == g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK then
                if msg.result == 1400 then
                    --表示不在牌桌里了，使用场景比如，4个人牌桌，有个人回到大厅，其它三人把牌桌解散了，这时候就会收到这个1400，更新玩家状态
                    --或者在战绩回放界面，切换到后台，再回到前台收到此消息
                    if g_gameGlobal:getGameScene() then
                        local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                        g_gameGlobal:setIsInPaiZhuo(false)
                        if gameBase ~= nil and gameBase.isGameBigResultCanShow then
                            --keep in game scene to see big result
                        elseif g_gameGlobal:getIsPlayingGameLog() then
                            --keep in game log play scene
                        else
                            g_gameGlobal:backToLobby()
                        end
                    end
                    g_gameGlobal:handlerTouchNotice()
                elseif msg.result == g_gameConstant.FORBIDDEN_CREATE_ROOM then
                    ShowToastMsg("管理员已禁止手动开房")
                else
                    print("创建vip房返回")
                    local ack = msg
                    if not ack then
                        print("创建VIP房返回为空")
                        return
                    end
                    g_gameGlobal:setRoomInfo(ack)
                    local callfuncBackToLobby = function()
                        if g_gameGlobal:getGameScene() then
                            local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                            g_gameGlobal:setIsInPaiZhuo(false)
                            g_gameGlobal:backToLobby()
                        end
                    end
                    if ack.result == g_gameConstant.SERVER_IS_MAINTAIN then
                        ShowConfirmBox("服务器正在维护，暂时关闭开启房间")
                        return
                    elseif ack.result == g_gameConstant.GOLD_LOW_THAN_MIN_LIMIT then
                        ShowConfirmBox("金币低于下限", callfuncBackToLobby, true, true)
                        return
                    elseif ack.result == g_gameConstant.GOLD_HIGH_THAN_MAX_LIMIT then
                        ShowConfirmBox("金币超上限", callfuncBackToLobby, true, true)
                        return
                    elseif ack.result == g_gameConstant.WRONG_PASSWORD then
                        ShowConfirmBox("您的密码错误")
                        return
                    elseif ack.result == g_gameConstant.FANGKIA_NOT_FOUND then
                        ShowConfirmBox("房卡不足，请充值")
                        return
                    elseif ack.result == g_gameConstant.VIP_TABLE_NOT_FOUND then
                        ShowConfirmBox("房间号错误，房间未找到")
                        return
                    elseif ack.result == g_gameConstant.CAN_ENTER_VIP_ROOM then
                        -- 可以打开vip房间创建界面
                        g_UserDataTable.gameEmojCount = 0
                        -- 保存配置
                        if g_gameGlobal:getLobbyView() then
                            g_gameGlobal:getLobbyView():enterGameType()
                        end
                        return
                    elseif ack.result == g_gameConstant.VIP_TABLE_IS_FULL then
                        ShowConfirmBox("VIP房间人数已满，请进入其他房间")
                        return
                    elseif ack.result == g_gameConstant.VIP_TABLE_IS_GAME_OVER then
                        ShowConfirmBox("VIP房间已结束，请进入其他房间")
                        return
                    elseif ack.result == g_gameConstant.IS_PLAYING_CAN_NOT_ENTER_ROOM then
                        ShowConfirmBox("正在游戏中不能进入其他房间！")
                        return
                    elseif ack.result == g_gameConstant.TODAY_GAME_RECORD_OUT_LIMIT_IN_ROOM then
                        return
                    elseif ack.result == g_gameConstant.TODAY_GAME_RECORD_OUT_LIMIT_IN_GAME then
                        return
                    elseif ack.result == g_gameConstant.VIP_TABLE_LOCKED then
                        return
                    elseif ack.result == g_gameConstant.CLUB_MEMBER_HAS_BLACK_PLAYER then
                        return
                    elseif ack.result == g_gameConstant.CREATE_ROOM_CLUB_DAYANG then               -- 打烊了
                        return
                    end
                    if ack.result ~= g_gameConstant.CMD_EXE_OK then
                        return
                    end
                    if not g_gameGlobal:checkSubGame(ack.MainGamePlayRule, false) then
                        return
                    end
                    -- 更新金币数
                    if ack.vipTableID == 0 then
                        g_gameGlobal:getMyselfInfo().gold = ack.gold
                        if g_gameGlobal:getLobbyView() then
                            g_gameGlobal:getLobbyView():updatePlayerData()
                        end
                    end
                    if ack.unused0 == g_gameConstant.AGENT_TABLE_FLAG then
                        local confirmBox = nil
                        confirmBox = ShowConfirmBox("创建成功！", function()
                            g_gameGlobal:getLobbyView():touxiangTouchEvent(nil, "doo")
                            confirmBox:removeSelf()
                        end)
                        return
                    elseif ack.unused0 == g_gameConstant.CLUB_TABLE_FLAG then
                        return
                    end
                    -- 因为全国包顺序变了,这边重新创建UI了,导致手牌清空
                    local lastGameStartMsg = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
                    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
                    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_POKER_START_GAME)
                    g_gameGlobal:setIsPlayingGameLog(false)
                    --g_gameGlobal:setCurrentWanFa(ack.newPlayWay)
                    g_gameGlobal:setMaxPlayerNum(ack.unused1)
                    g_gameGlobal:setFangFeiJunTan(ack.unused2)
                    g_gameGlobal:setVipTableID(ack.vipTableID)
                    -- 游戏界面
                    local gameBase = GameMsgManager:enterGameMsg(ack, false)
                    g_gameGlobal:setIsInPaiZhuo(true)
                    g_gameGlobal:setIsInPaiZhuoGold(true)
                    g_gameGlobal:cleanVipTableId()
                    if lastGameStartMsg ~= nil then
                        GameMsgManager:gameStartMsg(lastGameStartMsg)
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_GAME_OPERTAION_ACK then
                if msg.opertaionID == g_gameConstant.GAME_OPERTAION_CHANGE_HEAD then
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_GEM_EXCHANGE_GOLD then
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_GOT_GOLD_AUTO_SAVE then
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_REJECT_TABLE then
                    g_gameGlobal:setIsInPaiZhuo(false)
                    g_gameGlobal:setVipTableID(0)
                    CloseAllPopMsgView()
                    local box
                    box = ShowConfirmBox("您被管理员移出房间",
                    function()
                        box:removeSelf()
                        g_gameGlobal:backToLobby()
                        box = nil
                    end)
                else
                    if g_gameGlobal:getGameScene() ~= nil then
                        if not GameMsgManager:gameOperation(msg) then
                            print("MSG_GAME_GAME_OPERTAION_ACK")
                            if not g_gameGlobal:getIsPlayingGameLog() then
                                FixGlobal:saveNoEnterMsg(cmd, msg)
                            end
                        end
                    end

                end
            elseif cmd == g_msgDefinitions.MSG_GAME_START_GAME or cmd == g_msgDefinitions.MSG_GAME_POKER_START_GAME then
                local isGameStart = GameMsgManager:gameStartMsg(msg)
                --如果不在牌局场景 则发一次检查是否在牌桌，便于直接进去
                if not isGameStart then
                    local requestStartGameMsg = {}
                    requestStartGameMsg.roomID = 2002
                    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST, requestStartGameMsg)
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_PLAYER_OPERATION_NOTIFY then
                if g_gameGlobal:getGameScene() ~= nil then
                    if not GameMsgManager:playerOperationNotify(msg) then
                        if not g_gameGlobal:getIsPlayingGameLog() then
                            FixGlobal:saveNoEnterMsg(cmd, msg)
                        end
                    end
                else
                    if msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND then
                        if msg.target_card == 0 then --房主
                            if g_gameGlobal:getLobbyView() then
                                print("MAHJONG_OPERTAION_EXTEND_CARD_REMIND")
                            end
                        else
                        end
                    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND then
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_NOTIFY_PLAYER_TABLE_OPERATION_EX then
                if g_gameGlobal:getGameScene() ~= nil then
                    if not GameMsgManager:playerOperationEx(msg) then
                        if not g_gameGlobal:getIsPlayingGameLog() then
                            FixGlobal:saveNoEnterMsg(cmd, msg)
                        end
                    end
                else
                    --如果在洗牌期间被拉进游戏，是不会处理洗牌数据的，这里处理一下
                    if msg.operationList and msg.operationList[1] == g_gameConstant.GAME_OPERATION_WASH_CARD then
                        local shuffleData = {}
                        shuffleData["key"] = clone(msg.keyList) or {}
                        shuffleData["value"] = clone(msg.valueList) or {}
                        g_gameGlobal:setPlayerShuffleData(shuffleData)
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION then
                if g_gameGlobal:getGameScene() ~= nil then
                    if not GameMsgManager:playerOperation(msg) then
                        if not g_gameGlobal:getIsPlayingGameLog() then
                            FixGlobal:saveNoEnterMsg(cmd, msg)
                        end
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_GAME_OVER_ACK then
                print("MSG_GAME_GAME_OVER_ACK")
            elseif cmd == g_msgDefinitions.MSG_GAME_POKER_GAME_OVER_ACK then
                print("MSG_GAME_POKER_GAME_OVER_ACK")
            elseif cmd == g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE then
                -- 关闭vip房间返回（大计分）
                print("MSG_GAME_VIP_ROOM_CLOSE")
                g_gameGlobal:setIsInPaiZhuo(false)
                g_UserDataTable.lastRoomId = nil
                g_UserDataTable.realTimeVoiceSwitchOn = true
                g_gameGlobal:setVipTableID(0)
                if msg.unused2 == 2 then
                    pcall(function()
                        local scheduler = require("cocos.framework.scheduler")
                        scheduler.performWithDelayGlobal(function()
                            ShowCommonPopMsgView(false, { title = "提示", content = "房间已被管理员强制解散", isMiddleClose = true })
                        end, 0.03)
                    end)
                elseif msg.unused2 == g_gameConstant.GAME_ROOM_DISBAND_PLAYER_NOT_READY then
                    pcall(function()
                        local gameScene = g_gameGlobal:getGameScene()
                        local gameBase = gameScene and gameScene:getChildByName("gameBase")
                        local isFangzhu = gameBase and gameBase.isFangZhu

                        local scheduler = require("cocos.framework.scheduler")
                        scheduler.performWithDelayGlobal(function()
                            ShowCommonPopMsgView(false, {
                                title = "提示",
                                content = isFangzhu and "您超时没有准备，房间自动解散" or "房主超时没有准备，房间自动解散",
                                isMiddleClose = true,
                                middleFun = function()
                                    g_gameGlobal:backToLobby()
                                end
                            })
                        end, 0.8)
                    end)
                elseif msg.unused2 == g_gameConstant.GAME_ROOM_KNICKED_PLAYER_NOT_READY then
                    pcall(function()
                        local scheduler = require("cocos.framework.scheduler")
                        scheduler.performWithDelayGlobal(function()
                            ShowCommonPopMsgView(false, {
                                title = "提示",
                                content = "由于您超时未准备，已被自动移出房间",
                                isMiddleClose = true,
                                middleFun = function()
                                    g_gameGlobal:switchLobbyScene()
                                    g_gameGlobal:setIsInPaiZhuo(false)
                                end
                            })
                            local gameScene = g_gameGlobal:getGameScene()
                            local gameBase = gameScene and gameScene:getChildByName("gameBase")
                            local isInGame = 0
                            if gameBase and not tolua.isnull(gameBase) then
                                isInGame = 1
                            end
                            if isInGame == 0 then
                                local clubLayer = cc.Director:getInstance():getRunningScene():getChildByName("HNClubMainLayer")
                                if clubLayer and not tolua.isnull(clubLayer) then
                                    clubLayer:requestRoomInfo()
                                end
                            end
                        end, 0.8)
                    end)

                elseif msg.curHandNum > 0 then
                    local mainRule = msg.unused5
                    print("mainrule:", mainRule)
                    print("handnum:", msg.curHandNum)
                    local bigResultPath = "newgold.MatchGames.subMjGame.MJGamePublic.GameBigResultLayer"
                    if g_gameGlobal:getGameScene() == nil then
                        local gameBigResultLayer = require(bigResultPath):create({
                            --                    gameRequestAck = self.gameRequestAck,
                            isFromLobby = true,
                        })
                        if gameBigResultLayer ~= nil then
                            gameBigResultLayer:setName("gameBigResultLayer")
                            display.getRunningScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
                        end
                    end
                    --清理掉创建游戏的 返回数据
                    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
                end
            elseif cmd == g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG then
                print("MSG_GET_PLAYER_GAME_LOG")
                if not g_gameGlobal:checkSubGame(msg.MainGamePlayRule, g_gameGlobal:getLobbyView() ~= nil) then
                    return
                end
                --记录回放
                GameMsgManager:enterGameMsg(msg, true)
            elseif cmd == g_msgDefinitions.MSG_GAME_PAY_ITEM_BASE_IPA_COMPLETE then
                delLocalIapPayOrder(msg.orderno, msg.payResult)
            elseif cmd == g_msgDefinitions.MSG_AGENT_TICKET_ACK then
                local playerInfo = g_gameGlobal:getMyselfInfo()
                local index = playerInfo.playerIndex
                local headUrl = playerInfo.headImageUrl
                print("校验码", msg.ticket)
                local url = string.format(g_gameGlobal:getAgentUrl(), index, headUrl, msg.ticket)
                CCApplication:getInstance():openURL(url)
            elseif cmd == g_msgDefinitions.MSG_BIND_AGENT_MSG_ASK then
                local playerInfo = g_gameGlobal:getMyselfInfo()
                playerInfo.inviteCode = msg.inviteCode
            elseif cmd == g_msgDefinitions.MSG_REQUEST_BUY_DAOJU_ACK then
                if msg.result == g_gameConstant.SEND_PLAYER_SHARE_TO_WX_AUTH then
                    ShowConfirmBox("领取失败，请联系客服！")
                end
            elseif cmd == g_msgDefinitions.MSG_GET_GLOBAL_CONFIGS_ACK then

            elseif cmd == g_msgDefinitions.MSG_CLUB_MEMBER_BE_OPT_ACK then
                ClubUtil:setCacheData(cmd, msg)
            elseif cmd == g_msgDefinitions.MSG_CLUB_EXCHANGE_CREATOR_ACK then
                if msg.result == 0 then
                    ShowToastMsg("转让成功")
                elseif msg.result == 6 then
                    ShowToastMsg("申请退出中，不能转让")
                else
                    ShowToastMsg("转让失败")
                end
                --绑定手机号结果回调
            elseif cmd == g_msgDefinitions.MSG_CLUB_MEMBER_BE_OPT_ACK then
                if msg.optCode == 7 then
                    ShowCommonPopMsgView(false, { title = "提示", content = string.format("您在亲友圈【%s】的退出申请已经通过", msg.clubName) })
                end
            elseif cmd == g_msgDefinitions.MSG_QUERY_ROOM_INFO_ACK then
                if not g_gameGlobal:checkSubGame(msg.MainGamePlayRule, g_gameGlobal:getLobbyView() ~= nil) then
                    return
                end

                if msg.result == -1 then
                    return
                end

                local findJustLocationItem = false
                for i, v in ipairs(msg.MinorGamePlayRuleList) do
                    findJustLocationItem = findJustLocationItem or v == g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_LOCATION
                end

                if findJustLocationItem then
                    g_gameGlobal:joinVipGpsLimitCheckAndTip(msg.vipTableID)
                else
                    g_gameGlobal:requestJoinVipRoom(msg.vipTableID)
                end

            elseif cmd == g_msgDefinitions.MSG_CLUB_CHANGE_NAME_ACK then
                if msg.result == 0 then
                    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
                    if startGameRequestAck then
                        startGameRequestAck.clubName = msg.name
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GET_TOTAL_ONLINE_TIME_ACK then
                dump(msg, "超时消息")
            elseif cmd == g_msgDefinitions.MSG_GAME_REQ_DO_CARD_ACK then
                g_gameGlobal:updateSpecfLayer(msg)
            end
        end
    end
end

return PeakRaceSiChuanModule   �c  