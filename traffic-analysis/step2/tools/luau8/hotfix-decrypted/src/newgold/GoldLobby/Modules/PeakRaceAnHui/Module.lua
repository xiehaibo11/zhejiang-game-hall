local PeakRaceAnHuiModule = class("PeakRaceAnHuiModule", NG.ModuleBase)
local PeakRaceDispatchConfig = require("newgold.GoldLobby.Modules.PeakRaceDispatch.Define")

function PeakRaceAnHuiModule:delSToCMessage(subXYID, subBuff, subLen)
    for k, v in pairs(PeakRaceDispatchConfig.AH_XY_Defines) do
        if v == subXYID then
            local msg = NG.StringTool.protobufDataToLuaData50("TTIAHProtols", subBuff, k, "ah.TTIProtols")
            local cmd = PeakRaceDispatchConfig.AH_XY_TO_CMD[subXYID]
            if cmd == g_msgDefinitions.MSG_GAME_GAME_OVER_ACK then
                if g_gameGlobal:getIsPlayingGameLog() then
                    --回放 不派发 小计分 事件
                    return
                end
                if g_gameGlobal:getGameScene() then
                    local gameResultLayer = g_gameGlobal:getGameScene():getChildByName("gameResultLayer")
                    if not tolua.isnull(gameResultLayer) then
                        gameResultLayer:removeSelf()
                    end
                end
            end
            if g_msgCache:needCache(cmd) then
                --回放码为0的时候，  为 提示错误 不 缓存消息
                if cmd == g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG and msg.unused1 == 0 then
                else
                    g_msgCache:addOneMsg(cmd, msg)
                end
            end

            if cmd == g_msgDefinitions.MSG_LINK_VALIDATION_ACK then
                cc.cppTime:getInstance():setServerTime(msg.linkName)
                g_longConnect:sendMsg(g_msgDefinitions.MSG_HEART_BEATING_ACK)
                GlobalEventManager:onEvent("game_link_ack")
            end

            g_longConnect:Dispatch(cmd, msg)

            if cmd == g_msgDefinitions.MSG_HEART_BEATING then
                g_longConnect:sendMsg(g_msgDefinitions.MSG_HEART_BEATING_ACK)
                if msg.unused0 then
                    local time = os.time() - msg.unused0
                    g_gameGlobal:setTimeDifference(time)
                end
            elseif cmd == g_msgDefinitions.MSG_SYSTEM_NOTIFY_MSG then
                if msg.type == 0 then
                    ShowToastMsg(msg.content)
                elseif msg.type == 1 then
                    ShowConfirmBox(msg.content)
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_LOGIN_ACK then
                print("登录返回")
                loginBackMsg(msg)
                if msg.clientParma and next(msg.clientParma) then
                    NFrame.Commons.ParamsFuncs:initParamInfos(msg.clientParma)
                end
                --用于进行热更 白名单 判断
                if msg and msg.player then
                    local playerIndex = msg.player.playerIndex or 0
                    g_UserDataTable.playerIndex = playerIndex
                    cc.UserDefault:getInstance():setStringForKey("_playerIndex", playerIndex)
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK then
                --这里是金币场创建后返回的判断
                if (msg.result >= 11001 and msg.result <= 11009) then
                    local _backid = msg.result
                    g_gameGlobal:showGoldHallDialog(_backid)

                    --这里因为是有涉及到救济金的问题，所以要更新数据
                    local player = g_gameGlobal:getMyselfInfo()
                    if player then
                        player.gold = msg.gold
                    end
                    if g_gameGlobal:getLobbyView() then
                        g_gameGlobal:getLobbyView():updatePlayerData()
                    end
                end

                if msg.result == 1400 then
                    if g_gameGlobal:getGameScene() and not g_gameGlobal:getIsPlayingGameLog() then
                        local bigReulst = g_gameGlobal:getGameScene():getChildByName("GameBigResultLayer")
                        --战绩回放显示小计分的时候  不返回到大厅
                        local gameResultLayer = g_gameGlobal:getGameScene():getChildByName("gameResultLayer")
                        if msg.vipTableID == 0 or (not bigReulst and not gameResultLayer) then
                            g_gameGlobal:setIsInPaiZhuo(false)
                            g_gameGlobal:backToLobby()
                        end
                    end
                elseif msg.result == 1600 then
                    local clubName = msg.creatorName
                    local clubId = msg.createPlayerID
                    ShowConfirmBox("您已被亲友圈(名称:" .. clubName .. ",账号:" .. clubId .. ")的管理员禁赛，请联系亲友圈管理员进行解除!")
                    return
                elseif msg.result == 1601 then  --玩家乐卡不足
                    ShowToastMsg("乐卡不足，无法进入牌桌")
                    return
                elseif msg.result == 1700 then
                    ShowConfirmBox(msg.extJson)
                    return

                elseif msg.result == 1401 then
                    -- ShowConfirmBox("该房间需开启定位才可进入，请至设置-隐私权限中开启，点击确认前往该页面")
                    local PermissionConfig = require("Business.Modules.Permission.PermissionConfig")
                    ShowConfirmBoxAndTip("该房间需开启定位才可进入，请至设置-隐私权限中开启，点击确认前往该页面。", PermissionConfig.PERMISSION_TIP_1, function()
                        --跳转本地的设置
                        local layer = require("app.lobby.PermissionSetLayer"):create(2)
                        layer:setName("PermissionSetLayer")
                        layer:setLocalZOrder(g_gameConstant.POPUP_SHOW_TIPS)
                        display.getRunningScene():addChild(layer)
                    end)
                    return
                elseif msg.result == 1402 then
                    ShowConfirmBox("与房间内玩家距离在100米以内,无法进入房间")
                    return
                elseif msg.result == 1213 then
                    ShowConfirmBox("账号已注销，加入房间失败")
                    return
                elseif msg.result == 1214 then
                    ShowConfirmBox("账户已注销，创建房间失败")
                    return
                else
                    print("创建vip房返回")
                    local function callback()
                        enterGameRoomResponse(msg)
                    end
                    callback()
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_GAME_OPERTAION_ACK then
                if msg.opertaionID == g_gameConstant.GAME_OPERTAION_CHANGE_HEAD then
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_GEM_EXCHANGE_GOLD then
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_GOT_GOLD_AUTO_SAVE then
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_BUY_ITEM then
                    if msg.desc and msg.desc ~= "" then
                        local data = json.decode(msg.desc)
                        if data.tablePos and data.index then
                            TalkingInGameMsg = {
                                playerPos = g_gameGlobal:getMyTablePos(),
                                playerSex = g_gameGlobal:getMyselfInfo().sex,
                                msgType = 4, --自带互动表情
                                msgNo = data.index, --与C++的索引保持一致
                                unused0 = data.tablePos --发送给谁,这里用的客户端椅子号
                            }
                            g_longConnect:sendMsg(g_msgDefinitions.MSG_TALKING_IN_GAME, TalkingInGameMsg)
                            GlobalEventManager:onEvent("closeHudongbiaoqingView")
                        end
                    end
                elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_REJECT_TABLE then

                    g_gameGlobal:setIsInPaiZhuo(false)
                    g_gameGlobal:setVipTableID(nil)
                    CloseAllPopMsgView()
                    g_gameGlobal:backToLobby()

                    --清理掉创建游戏的 返回数据
                    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

                    if msg.playerIndex > 0 then
                        local function callback()
                            ShowConfirmBox("你已经被踢出牌局（进入房间后，超过15秒没有点击准备，其他玩家可以踢人）！")
                        end

                        scheduler.performWithDelayGlobal(callback, 0)
                    else
                        local function callback()
                            ShowConfirmBox("您已被管理员移出房间！")
                        end

                        scheduler.performWithDelayGlobal(callback, 0)
                    end
                elseif msg.opertaionID == g_gameConstant.GAME_OPERATION_DO_SET_SEX then
                    GlobalEventManager:onEvent("onSexChange", msg)
                else
                    if g_gameGlobal:getGameScene() ~= nil then
                        local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                        if gameBase ~= nil then
                            gameBase:gameOperation(msg)

                            if msg.opertaionID == g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then
                                local forceTipView = display.getRunningScene():getChildByName("forceTipView")
                                if forceTipView then
                                    forceTipView:removeSelf()
                                end
                            end

                        else
                            FixGlobal:saveNoEnterMsg(cmd, msg)
                        end
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_START_GAME then
                if msg.isRecover == 0 then
                    g_UserDataTable.gameEmojCountTotal = 0
                    g_UserDataTable.gameEmojCount = 0
                end
                local function callback()
                    if g_gameGlobal:getGameScene() ~= nil then
                        local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                        local instance = gameBase
                        if gameBase ~= nil then
                            gameBase:gameStart(msg)
                            gameBase:checkForceGpsWarning()
                        else
                            FixGlobal:saveNoEnterMsg(cmd, msg)
                        end
                    end
                end
                callback()
            elseif cmd == g_msgDefinitions.MSG_GAME_PLAYER_OPERATION_NOTIFY then
                if g_gameGlobal:getGameScene() ~= nil then
                    local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                    if gameBase ~= nil then
                        gameBase:playerOperationNotify(msg)
                    else
                        FixGlobal:saveNoEnterMsg(cmd, msg)
                    end
                else
                    if msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND then
                        if msg.target_card == 0 then --房主
                            if g_gameGlobal:getLobbyView() then
                                ShowConfirmCancelBox("是否续房？", handler(g_gameGlobal:getLobbyView(), g_gameGlobal:getLobbyView().extendRoom))
                            end
                        else
                            ShowConfirmBox("请等待房主续房。")
                        end
                    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND then
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_NOTIFY_PLAYER_TABLE_OPERATION_EX then
                if g_gameGlobal:getGameScene() ~= nil then
                    local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                    if gameBase ~= nil then
                        gameBase:playerOperationEx(msg)
                    else
                        FixGlobal:saveNoEnterMsg(cmd, msg)
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_INGAME_CAI_CARDS_ACK then
                if g_gameGlobal:getGameScene() ~= nil then
                    local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                    if gameBase ~= nil then
                        gameBase:showChapaiView(msg)
                    else
                        FixGlobal:saveNoEnterMsg(cmd, msg)
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_UPDATE_PLAYER_PROPERTY then
                print("MSG_GAME_UPDATE_PLAYER_PROPERTY")
                local player = g_gameGlobal:getMyselfInfo()
                if player then
                    player.gold = msg.gold
                    -- player.newDiamond = msg.newDiamond
                    player.diamond = msg.diamond
                    player.score = msg.score
                    player.wons = msg.wons
                    player.loses = msg.loses
                    player.playerType = msg.playerType
                    player.parentIndex = msg.parentIndex
                    player.payBack = msg.payBack
                    player.superDiamond = msg.superDiamond
                    player.point = msg.point

                    eventMgr:dispatch(eventType.ON_PLAYER_INFO_CHANGED, nil)
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION or
            cmd == g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION_FU or
            cmd == g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION_PDK then
                if g_gameGlobal:getGameScene() ~= nil and not tolua.isnull(g_gameGlobal:getGameScene()) then
                    local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
                    if gameBase ~= nil then
                        gameBase:playerOperation(msg)
                    else
                        FixGlobal:saveNoEnterMsg(cmd, msg)
                    end
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_GAME_OVER_ACK then
            elseif cmd == g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE then
                -- -- 关闭vip房间返回（大计分）
                g_gameGlobal:setIsInPaiZhuo(false)
                g_gameGlobal:setVipTableID(nil)
            elseif cmd == g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG then
                require("app.lobby.LobbyScene").playGameRecord(msg)
            elseif cmd == g_msgDefinitions.MSG_UPDATE_GPS_POSITION then
                local myIndex = g_gameGlobal:getMyIndex()
                if myIndex == msg.unused2 then
                    local gpsInfo = {
                        latitude = msg.px,
                        longitude = msg.py,
                        isOpenGps = msg.unused1 == 1,
                    }

                    g_GpsData.setPreGpsData(gpsInfo)
                end
            elseif cmd == g_msgDefinitions.MSG_GAME_REQ_DO_CARD_ACK then
                g_gameGlobal:updateSpecfLayer(msg)
            end
        end
    end
end

return PeakRaceAnHuiModule>