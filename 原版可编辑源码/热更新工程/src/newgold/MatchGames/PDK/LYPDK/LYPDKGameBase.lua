local baseLayer     = require("newgold.MatchGames.PDK.LYPDK.common.baseLayer")
local LYPDKGameBase = class("LYPDKGameBase", baseLayer)

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

function LYPDKGameBase:setPlayerInfos()
    local info = NG.goldLobby:getModule("PeakRaceDispatch"):getAHPlayers()
    for i, v in pairs(info) do    
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        if posState and posState >=1 and posState <=4 then
            self.tablePlayerInfoTable[posState] = v
            self.tablePlayerHeadImgTable[posState]:updateTablePlayerInfo(v)
        end
    end
end

function LYPDKGameBase:ctor(...)
    self.tablePlayerInfoTable = {0,0,0,0}          --麻将中最多4个人，初始值都为0，如果有人数加进来就替换0，存放每个玩家详细信息，从左到右依次为自己，下家，对家，上家。
    self.tablePlayerHeadImgTable = {0,0,0,0}       --哪个位置坐的有人，
    self.tablePlayers = {nil, nil, nil, nil}               --各个玩家的手牌，出牌
    self.playerOperationTime = 15               --玩家操作时间
    self.startDaoJiShi = false

    self._voiceMsgQueue = {} --语音播放队列

    LYPDKGameBase.super.ctor(self, ...)

    -- LYPDKGameBase.instance = self

    self.gameMainView = nil

    self.isGameResultShow = false
    self.tablePlayers = {}
    self.curJuShu = 0;
    self.totalJuShu = 0;
    self.curGameModle = g_gameConstant.GOLD_GAME_MODEL;
    self.wfTipsString = "";
    self.myZhunbei = false
end

function LYPDKGameBase:initDispatch()
    self.panelDispath = self.resourceNode_:getChildByName("Panel_Dispatch")
    self.btnLeaveDispatch = self.panelDispath:getChildByName("Btn_leaveDispatch")
    self.tuoguanBtn = self.bgPanel:getChildByName("tuoguanBtn")
    self.btnLeaveDispatch:onTouch(handler(self, self.leaveDisptch))
    self.tuoguanBtn:onTouch(handler(self, self.sendTuoGuan))
    self:flushDispatchPanel(true)
end

function LYPDKGameBase:sendTuoGuan(send)
    if send.name ~= "ended" then
        return
    end
    local tuoguanState = 1
    if self.tablePlayers[1].btnPanel.tuoGuanNode:isVisible() then
        tuoguanState = 0
    end
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
    playerGameOpertaionMsg.opValue = tuoguanState
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
end

function LYPDKGameBase:leaveDisptch(send)
    if send.name ~= "ended" then
        return
    end
    NG.goldLobby:getModule("PeakRaceDispatch"):reqLeaveDispatchQueue()
end

function LYPDKGameBase:flushDispatchPanel(isShow)
    NG.goldLobby:getModule("PeakRace"):reqPeakCount(ccui.Helper:seekNodeByName(self.bgPanel, "Text_Cnt"), self.resourceNode_)
    ccui.Helper:seekNodeByName(self.bgPanel, "Text_Cnt"):setVisible(not isShow)
    self.panelDispath:setVisible(isShow)
end

function LYPDKGameBase:getInstance()
    return LYPDKGameBase.instance
end

function LYPDKGameBase:onCreate()
    LYPDKGameBase.super.onCreate(self)
    self:createPDKResoueceNode(LYPDKResource.ResPath .. "LYPDKGameBaseView.csb")

    release_print("------LYPDKGameBase------onCreate------")

    local bgPanel = self.resourceNode_:getChildByName("bgPanel")

    bgPanel.noClickAudio = true
    
    self.bgPanel = bgPanel
    self:initDispatch()
    self.bgImgaction = self.resourceNode_:getChildByName("Image_1")
    self.bgImgaction:hide()

    bgPanel:onClick(function() 
        GlobalEventManager:onEvent("resetHandCard")
    end)


    self:refreshBackGround()

    --操作按钮父节点
    self.Panel_operator = self:findChildWithName(self.resourceNode_, "Panel_operator");
    if self.Panel_operator then
        self.Panel_operator:setVisible(false);
    end

    -- 房间号
    self.roomIdLabel = ccui.Helper:seekNodeByName(bgPanel, "roomId")
    self.roomIdLabel:setString("")

    -- 时间
    self.timeLabel = ccui.Helper:seekNodeByName(bgPanel, "timeLabel")

    -- 网络类型
    self.netTypeMark = ccui.Helper:seekNodeByName(bgPanel, "netTypeMark")

    -- 电量
    self.batteryLvMark = ccui.Helper:seekNodeByName(bgPanel, "batteryLvMark")

    -- 玩法
    -- self.wanfaBg = ccui.Helper:seekNodeByName(bgPanel, "wanfaBg")
    -- self.wanfaBg:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER + 1)

    -- 聊天按钮
    self.chatBtn = bgPanel:getChildByName("chatBtn")
    self.chatBtn:setPressedActionEnabled(true)
    self.chatBtn:onClick(handler(self, self.btnEventFunc))
    self.chatBtn:setVisible(false)

    self.speakerBtn = bgPanel:getChildByName("speakerBtn")
    if self.speakerBtn then
        self.speakerBtn:setVisible(false)
        self.speakerBtn:onClick(function()
             self:onSpeakerOpen()
        end)
    end

    -- 语音按钮
    self.voiceBtn = bgPanel:getChildByName("voiceBtn")
    self.voiceBtn:setPressedActionEnabled(true)
    self.voiceBtn:setVisible(false)
    local gameScene = g_gameGlobal:getGameScene()

    self.voiceBtn:onTouch(function(event)
        
    end)

    --GPS按钮
    --TODO预加载处理一下资源

    --TODO预加载处理一下资源


    self.gpsBtn = ccui.Helper:seekNodeByName(bgPanel, "gpsBtn")
    self.gpsBtn:onClick(handler(self, self.btnEventFunc))
    self.gpsBtn:setPressedActionEnabled(true)

    -- 时间
    self:timeSchedule()
    
    -- 方位
    self.fangweiBg = bgPanel:getChildByName("fangweiBg")
    self.fangweiBg:setVisible(false)

    -- 剩余时间
    self.leftTime = self.fangweiBg:getChildByName("leftTime")
    self.leftTime:setString("")


    self.actionNode = display.newNode():addTo(self)
    self.backGroundMusicNode = display.newNode():addTo(self)

    -- 局数 
    self.jushu = ccui.Helper:seekNodeByName(bgPanel, "jushu")
    self.jushu:setString(0)
    


    self.replayCode = bgPanel:getChildByName("replayCode")
    if self.replayCode then self.replayCode:hide() end

    self:netEvent()

    --刷一次时间，电量，网络类型
    self:refreshExpandInfo();

     --获取互动表情
    g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU,{
        itemID = g_msgDefinitions.PLAYER_GET_EMOJI_DATAS,
    })


    self:setCurrentMainWanFa(g_gameConstant.GAME_PDK);
end

function LYPDKGameBase:testChuPai()
    -- body
    for k, v_player in pairs(self.tablePlayers) do
        if v_player then
            v_player:createOutCard({2, 3, 4, 5, 2, 3, 4, 5, 2, 3, 4, 5});
            v_player:setDelegate(self);
            v_player:updateOutCards();
        end
    end
end

function LYPDKGameBase:chuCardsCallBack( target )
    -- body
end

function LYPDKGameBase:yaoBuQiCallBack( target )
    -- body
end

function LYPDKGameBase:chongXuanCardsCallBack( target )
    -- body
end

function LYPDKGameBase:tiShiCardsCallBack( target )
    -- body
end

function LYPDKGameBase:buChuCardsCallBack( target )
    -- body
end

local imgCfg = {
    "bigImg/pz_bj1.jpg",
    "bigImg/pdk_bj2.jpg",
    "bigImg/pdk_bj3.jpg",
}

function LYPDKGameBase:refreshBackGround()
    local bgPanel = self.resourceNode_:getChildByName("bgPanel")

    local index =  tonumber(g_UserDataTable.gameBgColorType)

    if index and imgCfg[index] then 
        bgPanel:setBackGroundImage( imgCfg[index] , ccui.TextureResType.localType)
        self.bgImgaction:loadTexture(imgCfg[index], ccui.TextureResType.localType)
    else
        bgPanel:setBackGroundImage("bigImg/pz_bj1.jpg", ccui.TextureResType.localType)
        self.bgImgaction:loadTexture("bigImg/pz_bj1.jpg", ccui.TextureResType.localType)
    end
end


function LYPDKGameBase:playVoiceWith(audioContent)
    release_print('receive voice msg...')
        --将语音数据保存进队列
        table.insert(self._voiceMsgQueue,audioContent)
        self:playVocie()
end

function LYPDKGameBase:refreshTooNearMark()
    
end

function LYPDKGameBase:netEvent()
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    
    self:addChild(netObj.new(g_msgDefinitions.MSG_TALKING_IN_GAME, function (event, msg)
        --dump(msg)
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.playerPos)
        if msg.msgType == 0 then --系统自带聊天文本
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                local cfg = g_PuKe_gameLanguageCfg[g_UserDataTable.gameLanguageCfgIndex]
                local number =cfg.ordinal[msg.msgNo+1]
                local text = Language[string.format(cfg.prefix.."%d",number)]
                --方言和普通话互发语言，兼容处理
                if text then
                    if self.tablePlayerHeadImgTable[posState] ~= 0 then
                        self.tablePlayerHeadImgTable[posState]:showChatText(text)
                        local url = string.format("sound/%s/%s/%d.mp3",cfg.name,msg.playerSex == 1 and "man" or "female",number+1)
                        NG.soundManager:playMatchEffect(url)
                    end
                end
            end
        elseif msg.msgType == 1 then --表情
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showChatFace(msg.msgNo)--(string.format("chat/chat_%d.png",msg.msgNo))
            end
        elseif msg.msgType == 2 then --用户输入文本
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showChatText(msg.msgText)
            end
        elseif msg.msgType == 3 then --语音消息
            local time = msg.unused0/100
            local audioContent = {
                content={
                    msg=msg.audio,--音频数据
                    time=time--音频时长(秒)
                },
                sender=posState--发送的玩家的客户端逻辑椅子号
            }
            self:playVoiceWith(audioContent)
        elseif msg.msgType == 4 then --互动表情
            if msg.unused1 == 1 then
                ShowToastMsg("房卡不足，请到商城购买房卡！")
                return
            elseif msg.unused1 == 2 then
                ShowToastMsg("金币不足")
                return
            end
            local fromPlayer = posState --发送者的客户端逻辑椅子号

            local toPlayer = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)   --对方客户端逻辑椅子号

            local index = msg.msgNo --互动表情索引 从1开始
            if toPlayer == fromPlayer then
                local first = true
                if self.tablePlayerHeadImgTable[fromPlayer] ~= 0 then
                    for i,v in ipairs(self.tablePlayerHeadImgTable) do
                        if i ~= fromPlayer and v ~= 0 then
                            local toPIcon = v.aniNode
                            local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                            if index == 201 then
                                if fromPlayer == 1 then
                                    self.tablePlayerHeadImgTable[toPlayer]:hurryupOutCard()
                                    ShowToastMsg("催牌成功")
                                end
                                --self.tablePlayerHeadImgTable[toPlayer]:Pushcardanimation()
                                if toPlayer == 1 then
                                    self:cuipaiShakeAnimation()
                                end

                            else
                                if index >=30 and index < 40 then
                                    -- 十连发
                                    self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace10(endPos,index, fromPlayer == 1,toPlayer)
                                else
                                    self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1,toPlayer)
                                end
                                -- self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1,toPlayer)
                            end
                            --self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1,toPlayer)
                            if fromPlayer == 1 then
                                self.tablePlayerHeadImgTable[toPlayer]:hudongMaskVisible()
                            end
                            first = false
                        end
                    end
                end
            else
                if self.tablePlayerHeadImgTable[fromPlayer] ~= 0 and self.tablePlayerHeadImgTable[toPlayer] ~= 0 then
                    local toPIcon = self.tablePlayerHeadImgTable[toPlayer].aniNode
                    local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                    
                    local isOpen = g_UserDataTable.gameFaceCfgIndex == 1
                    if index == 201 then
                        isOpen = true
                    end
                    if isOpen or fromPlayer == 1 then 
                        --self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1,toPlayer)
                        if index == 201 then
                            if fromPlayer == 1 then
                                self.tablePlayerHeadImgTable[toPlayer]:hurryupOutCard()
                                ShowToastMsg("催牌成功")
                            end
                            --self.tablePlayerHeadImgTable[toPlayer]:Pushcardanimation()
                            if toPlayer == 1 then
                                self:cuipaiShakeAnimation()
                            end

                        else
                            if index >=30 and index < 40 then
                                -- 十连发
                                self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace10(endPos,index, fromPlayer == 1,toPlayer)
                            else
                                self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1,toPlayer)
                            end
                            -- self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1,toPlayer)
                        end
                        if fromPlayer == 1 then
                            self.tablePlayerHeadImgTable[toPlayer]:hudongMaskVisible()
                        end
                    end
                end
            end
        elseif msg.msgType == 5 then --转运表情
            local fromPlayer = posState --发送者的客户端逻辑椅子号
            if msg.unused1 == 1 then
                ShowToastMsg("房卡不足，请到商城购买房卡！")
                return
            elseif msg.unused1 == 2 then
                ShowToastMsg("金币不足")
                return
            end

            local index = msg.msgNo --互动表情索引 从1开始
            if fromPlayer == 1 and self.tablePlayerHeadImgTable[fromPlayer] ~= 0 then
                --self.tablePlayerHeadImgTable[fromPlayer]:showTransportFaceCache(index)
                self.tablePlayerHeadImgTable[fromPlayer]:createTransportFace(index)
            end
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:zhuanyunbiaoqingZuanquan()
            end
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GET_PLAYER_EMOJIDATA_ACK, function (event, msg)
        local data = {}
        data.EmojiDataVo = msg.EmojiDataVo
        data.diamond = msg.diamond
        data.gold = msg.gold
        data.vipFreeNum = msg.VipFreeNum
        g_gameGlobal:setExpressionData(data)
        -- 
        if self.isBuyZyOk then
            -- 通知转运UI展开
            self.isBuyZyOk = false
            GlobalEventManager:onEvent("onBuyZhuanYunOk")
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_UPDATE_GPS_POSITION, function (event, msg)
    end))


    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_PLAYER_OPERATION_NOTIFY_TUOGUAN, function (event, msg)
        
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end

        local player_table_pos = msg.player_table_pos
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(player_table_pos)
        local type  = msg.type  --1:托管出牌  2：超时开始托管 3:托管取消
        
        if self.tablePlayerHeadImgTable[posState] == 0 then 
            return 
        end
        if type == 1 then 
            if posState == 1 then 
                self.tablePlayers[1]:setTuoGuanStatus(true)
            end
            self.tablePlayerHeadImgTable[posState]:setTuoGuanState(true)
        elseif type == 3 then 
            self.tablePlayerHeadImgTable[posState]:setTuoGuanState(false)
            if posState == 1 then 
                GlobalEventManager:onEvent("cancelTuoguan")
            end
        end
        
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU_ACK, function (event, msg)
        if msg.result==g_gameConstant.SEND_CLIENT_IP then
            --unused0为tablePos,otherstr为ip+地理位置信息
            local pos = msg.unused0
            local ip = msg.otherstr
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(pos)
            if self.tablePlayerHeadImgTable and self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:updateIpInfo(ip)
            end
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE, function (event, msg)

        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end

        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:setVipTableID(nil)
        CloseAllPopMsgView()

        if  self.tablePlayers[1] ~= 0 then
            self.tablePlayers[1]:setTuoGuanStatus(false)
        end


        local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
        local player = g_gameGlobal:getMyselfInfo()
        
        if startGameRequestAck and player then 
            if msg.unused0 == 1  then 
                local function callback()
                    g_gameGlobal:backToLobby()
                end

                local tableID = startGameRequestAck.vipTableID
                local isDaikai = false
                if tableID >= 300000 then 
                    isDaikai = true
                end

                if startGameRequestAck.createPlayerID == player.playerID  and not isDaikai then 
                    callback()
                else
                    ShowConfirmBox("你所在的房间已经被"  ..  (isDaikai and "管理员" or "房主") .. "解散！", callback , true)
                end
                g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
            else    
                -- package.loaded["newgold.MatchGames.PDK.GameBigResultLayer"] = nil

                local function callback()
                    local gameBigResultLayer = require("newgold.MatchGames.PDK.GameBigResultLayer"):create({gameType = 1})
                    if gameBigResultLayer ~= nil and g_gameGlobal:getGameScene() then
                        g_gameGlobal:getGameScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
                    end

                    --清理掉创建游戏的 返回数据
                    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
                end

                local tuoGuanJieSan = msg.tuoGuanJieSan
                tuoGuanJieSan = g_gameGlobal:xpcallDecodeJson(tuoGuanJieSan)

                if next(tuoGuanJieSan) ~= nil  then
                    local str = ""
                    local players = msg.players
                    for i,v in ipairs(players) do
                        for plindex,time in pairs(tuoGuanJieSan) do
                            if v.palyerIndex == tonumber(plindex)  then 
                                str = str .. "玩家【"..  g_gameGlobal:cutStringLength(v.playerName).."】目前处于托管状态，本局累计托管时间"..g_gameGlobal:timeConvert(time) .."，\n"
                                break
                            end
                        end
                    end
                    str = str .."本场牌局提前结束 "
                    local box = ShowConfirmBox(str, callback, true , true)
                    box.tipLabel:setFontSize(26)
                    box.tipLabel:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
                    box.confirmBtn:setPositionY(54)
                else
                    callback()
                end

                
            end

            
        end
    end))
    
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK, function (event, msg)
        release_print("LYPDKGameBase work with MSG_GAME_GAME_OVER_ACK")
        
        if  self.tablePlayers[1] ~= 0 then
            self.tablePlayers[1]:setTuoGuanStatus(false)
        end
    
        CloseAllPopMsgView()


        -- 显示小局计分之前还要先显示没打完的玩家的牌，及总分        
        for i, v in pairs(msg.players) do
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
            local player = self.tablePlayers[posState]
            if player ~= 0 then 
                local handData = msg["player"..tostring(v.tablePos).."HandCards"] or {}
                if posState ~= 1 and handData and #handData >0  then
                    -- 更新手牌
                    player:showHandCardOnGameOver(handData);
                end
            end
        end


        local time = 3

        if g_gameGlobal:isZYPDK() then 
            time = 1.5
        end

        self:runAction(cc.Sequence:create(cc.DelayTime:create( time ),cc.CallFunc:create(function()
            --- 计分界面(小计分)
            -- local gameResultLayer = LYPDKSmallResult_createLYPDKSmallResult(self.curGameModle);
            
            local gameResultLayer = require("newgold.MatchGames.PDK.LYPDK.LYPDKResultLayer"):create()
            if g_gameGlobal:getGameScene() then
                gameResultLayer:setName("gameResultLayer")
                g_gameGlobal:getGameScene():add(gameResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
            end
            self.isGameResultShow = true

        end),nil))
        

        
    end))    

    self:addChild(eventObj.new("gameBgChanged", function (event, msg)        
        self:refreshBackGround()
    end))


    self:addChild(eventObj.new("pdkCardChanged", function (event, msg)        
        self:refreshCardFrame()
    end))

    self:addChild(eventObj.new("onSexChange", function (event, msg)        
        local pos = msg.tablePos
        local myself = g_gameGlobal:getMyselfInfo()

        if myself.tablePos == pos then 
            myself.sex = msg.sex
        end
        local myself1 = g_gameGlobal:getMyselfInfo()

        if self.tablePlayerInfoTable then 
            for i, v in pairs(self.tablePlayerInfoTable) do
                if v ~= 0 then
                    local tablePos = v.tablePos
                    if pos == tablePos then 
                        v.sex = msg.sex
                        if self.tablePlayers[i] and self.tablePlayers[i] ~= 0 then 
                            self.tablePlayers[i]:setSex( v.sex)
                        end
                        break
                    end
                end
            end
        end
    end))

    -- 充值返回
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_GAME_OPERTAION_ACK, function (event, msg)
        -- release_print("==========msg.opertaionID====="..msg.opertaionID)
        if msg.result == g_gameConstant.CMD_EXE_OK then
            --  现金购买房卡并自动兑换成对应道具
            if msg.opertaionID == 11011 then 
                ShowConfirmBox("转运道具购买成功")
                self.isBuyZyOk = true
                --获取互动表情数据(刷新道具数，收到返回后展开转运表情 )
                g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU,{
                    itemID = g_msgDefinitions.PLAYER_GET_EMOJI_DATAS,
                })
            elseif msg.opertaionID == 11012 then 
                local box = nil
                box = ShowConfirmBox("洗牌卡购买成功", function ( )
                    GlobalEventManager:onEvent("fresh_result_layer_wash_btn")
                    box:removeSelf()
                    box = nil
                end, true)
            end
        end
    end))
end




function LYPDKGameBase:checkForceGpsWarning()
end


function LYPDKGameBase:refreshCardFrame()

    for i,player in ipairs(self.tablePlayers) do
        if player ~= 0 then 
            player:refreshCardFrame()
        end
    end

end


function LYPDKGameBase:playVocie()
    
end

function LYPDKGameBase:update(dt)
    --TODO 使用原生平台播放完毕接口判断播放完成
    if self._lastPlayTime then
        if g_gameGlobal:getTime() > self._lastPlayTime + 0.2 then
            self:onPlayVoiceOver()
            self._lastPlayTime = nil
        end
    else
        self:playVocie()
    end

end

function LYPDKGameBase:onPlayVoiceOver()
    --隐藏当前位置播放语音消息的动画
    if self.tablePlayerHeadImgTable[self._playingSeat] ~= 0 then
        self.tablePlayerHeadImgTable[self._playingSeat]:showChatVoice(false)
    end
    self._playingSeat = nil
end

function LYPDKGameBase:uploadGpsData()
    g_gameGlobal:uploadGpsData()
end

function LYPDKGameBase:sendPlayerGpsData()
    
end


function LYPDKGameBase:onEnter()

    release_print("------LYPDKGameBase------onEnter------")

    LYPDKGameBase.instance = self

    self:showMarqueeView()

    g_gameGlobal:uploadGpsData(true)

    self:onUpdate(handler(self,self.update))

    --if self.tableID then
        local playerGameOpertaionMsg = {}
        playerGameOpertaionMsg.opertaionID= g_gameConstant.GAME_OPERTAION_QUERY_TABLE_DISMISS    --是否有人解散桌子
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    --end

    local function callback()
    end
    performWithDelay(self , callback , 0)
end

function LYPDKGameBase:onExit()
    LYPDKGameBase.instance = nil

    self:hideMarqueeView()
    self.gpsBtn:stopAllActions()
end

function LYPDKGameBase:btnEventFunc(sender)
    if sender == self.chatBtn and g_gameGlobal:getGameScene() ~= nil then
    elseif sender == self.gpsBtn then
        g_gameGlobal:switchLobbyScene()
    end
end

function LYPDKGameBase:refreshGpsLayer(needCreate)
    
end

function LYPDKGameBase:getCurrentPlayerNum()
    local ret = 0;
    for k,v in pairs(self.tablePlayerInfoTable) do
        if v ~= 0 then
            ret = ret + 1
        end
    end

    return ret
end

function LYPDKGameBase:setBtnEnable( btn, enable )
    -- body
    if not btn then
        return;
    end

    btn:setVisible(enable);
    btn:setTouchEnabled(enable);
end

function LYPDKGameBase:createPlayersTables()
    -- body
    local count = g_gameGlobal:getMaxPlayerNum()

    --当前玩家自己手牌位置
    local posNode = self:findChildWithName(self.resourceNode_, "player1HandCardsStarts")
    local startx, starty = posNode:getPosition()
    local outNode = self:findChildWithName(self.resourceNode_, "player1OutCardsStarts")
    local outx, outy = outNode:getPosition()
    local fangweiBg  = self:findChildWithName(self.resourceNode_, "fangweiBg")
    local a_x, a_y   = fangweiBg:getPosition();
    
    local handCardsPos   = {x = startx, y = starty - 87}; -- 手牌开始位置
    local outCardPos     = {x = outx,   y = outy-50};        --出牌位置
    local alaramClockPos = {x = display.cx,    y = 385}; --闹钟位置
    local zhadan_Pos     = {x = outx,   y = outy-30}                   --炸弹位置
    local playerHead     = self.tablePlayerHeadImgTable[1];
    local headsize       = self:findChildWithName(playerHead, "headFrame"):getContentSize();
    local headInfo       = {size = headsize, pos = g_gameGlobal.gamePlayHeadPosTbl[1].head};
    local myPos          = {handp = handCardsPos,  outp = outCardPos, endp = alaramClockPos, head_info = headInfo,zhadanPos = zhadan_Pos};
    self.tablePlayers[1] = pukeTableMy_createMyTable(myPos);

    --其他玩家牌位置信息
    local pos_data = {}
    local playerIndex = 2;
    for i = 2, #self.tablePlayerHeadImgTable do
        local playerHead = self.tablePlayerHeadImgTable[i];
        local tableType = type(playerHead);
        if playerHead and tableType == "userdata" then
            -- 打牌界面头像位置
            local headsize     = self:findChildWithName(playerHead, "headFrame"):getContentSize();
            --手牌位置
            handCardsPos = {x = g_gameGlobal.tableWaitingHeadPosTbl[i].head.x + headsize.width * 2 / 3  , y = g_gameGlobal.tableWaitingHeadPosTbl[i].head.y - headsize.height / 2 };
            outNode = self:findChildWithName(self.resourceNode_, "player" .. i.."OutCardsStarts")
            outx, outy = outNode:getPosition()

            
            zhadan_Pos = {x = outx,   y = outy}
            --打牌手牌位置
            if count == 2 then
                if playerIndex == 2 then
                    handCardsPos   = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x - headsize.width * 3 / 4, y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y - headsize.height / 2};
                    alaramClockPos = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x - headsize.width * 1.2, y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y - (3.5 * headsize.height / 3) };
                    --出牌位置
                    outCardPos     = {x = outx,   y = display.height-100}; 
                    headInfo       = {size = headsize, pos = g_gameGlobal.gamePlayHeadPosTbl[i].head};
                    zhadan_Pos = {x = outx,   y = outy-20}
                end
            elseif count == 3 then
                --出牌位置
                outCardPos   = {x = outx-50,   y = display.height-230}; 
                if playerIndex == 2 then
                    handCardsPos   = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x - headsize.width * 3 / 4, y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y};
                    alaramClockPos = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x - headsize.width * 3 / 4-100, y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y};
                    outCardPos      = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x - headsize.width * 3 / 4,   y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y-10};
                    headInfo       = {size = headsize, pos = g_gameGlobal.gamePlayHeadPosTbl[i].head};
                    zhadan_Pos = {x = outx-50,   y = outy-130}
                elseif playerIndex == 3 then
                    handCardsPos    = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x + headsize.width * 3 / 4, y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y};
                    alaramClockPos  = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x + headsize.width * 3 / 4 + 100, y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y};
                    outCardPos      = {x = g_gameGlobal.gamePlayHeadPosTbl[i].head.x + headsize.width * 3 / 4,   y = g_gameGlobal.gamePlayHeadPosTbl[i].head.y-10};
                    headInfo        = {size = headsize, pos = g_gameGlobal.gamePlayHeadPosTbl[i].head};
                    zhadan_Pos = {x = outx+50,   y = outy-130}
                end
            end


            local t = {handp = handCardsPos,  outp = outCardPos, endp = alaramClockPos, head_info = headInfo,zhadanPos = zhadan_Pos};
            table.insert(pos_data, t);
            playerIndex = playerIndex + 1;
        end
    end

    if count == 2 then
        local top_pos = pos_data[1];
        if top_pos then
            self.tablePlayers[3] = pukeTableOpp_createOppTable(top_pos);
        end

    elseif count == 3 then
        local right_pos = pos_data[1];
        if right_pos then
            self.tablePlayers[2] = pukeTableRight_createRightTable(right_pos);
        end

        local left_pos = pos_data[2];
        if left_pos then
            self.tablePlayers[4] = pukeTableLeft_createLeftTable(left_pos);
        end
    end

    --初始化桌面
    for k,v in pairs(self.tablePlayers) do
        if v and v ~= 0 then
            self.bgPanel:addChild(v, g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER - 1 + 4 - k );
            v:setDelegate(self);

            if k == 1 then 
                local playerInfo = self.tablePlayerInfoTable[k]
                if playerInfo ~= 0 then
                    self.tablePlayers[1]:setTuoGuanStatus(playerInfo.canFriend == 1)
                end
            end
        end
    end
end

function LYPDKGameBase:initRoomInfo( msgAck )
    --增加时效道具属性
    for i = 0,3 do
        local key = string.format("player%dTimeItem",i)
    end
    if msgAck == nil then
        return;
    end

    release_print("------LYPDKGameBase------initRoomInfo------")

    self.gameRequestData = msgAck
    

    

    local wanfa=msgAck.newPlayWay;
    
    -- 设置最大人数
    g_gameGlobal:setMaxPlayerNum( msgAck.unused1 )
    
    -- 设置是否房卡均摊
    g_gameGlobal:setFangFeiJunTan(msgAck.unused2)
    -- 解析具体玩法
    g_gameGlobal:setCurrentWanFa(msgAck.newPlayWay)
    g_gameGlobal:setWanfa2(msgAck.unused0)

    local way, wanfa2 = msgAck.newPlayWay, msgAck.unused0
    local playerNum = msgAck.unused1
    local wanfaInfo = g_gameGlobal.getWanfaString(way, wanfa2)

    local playerNum = msgAck.unused1
    local isJuntan = bit._and(way, g_gameConstant.GAME_FANG_FEI_JUN_TAN) == g_gameConstant.GAME_FANG_FEI_JUN_TAN
    local str = ""
    for i,v in ipairs(wanfaInfo) do
        if not str then
            str = v
        else
            str = str..'\n'..v
        end
    end
    str = str..'\n'..playerNum.."人场"
    if isJuntan then
        str = str.."\n房卡均摊"
    end


    -- 加载设置等,vip场不是第一局的话，在第二局等待界面要把等待界面删了，返回大厅和解散房间按钮，用游戏界面按钮点击
    self.wanfaInfo = wanfaInfo;
    local gameMainView = require("newgold.MatchGames.PDK.GameMainView"):create({gameType = 1})
    gameMainView:setName("gameMainView")
    gameMainView:setWanfaLayer(str)

    self.gameMainView = gameMainView
    g_gameGlobal:getGameScene():addChild(gameMainView, g_gameConstant.GAMEMAINVIEW_ZORDER)
    
    local tableWaitView = g_gameGlobal:getGameScene():getChildByName("tableWait")
    if tableWaitView then
        tableWaitView:setWanfaLayer(str)
        local wx_invite_btn = self:findChildWithName(tableWaitView, "inviteBtn");
        if wx_invite_btn then
            wx_invite_btn:setVisible(false);
        end
    end

    self.vipTableID = msgAck.vipTableID

    if msgAck.vipTableID > 0 then    --VIP场
        -- 显示房间号
        self.tableID = msgAck.vipTableID
        g_gameGlobal:setVipTableID(msgAck.vipTableID)
        self.roomIdLabel:setString("")

        -- 总局数
        self.totalJuShu = msgAck.totalHand  
        g_gameGlobal:setCurTotalJuShu(msgAck.totalHand)
        -- 当前局数
        self.curJuShu = msgAck.currentHand

        g_gameGlobal:setCurrentJushu(msgAck.currentHand)

        if self.curJuShu == 0 then
            self.gameMainView:setInGame(false)
            g_UserDataTable.gameEmojCount = 0
        else
            self.gameMainView:setInGame(true)
        end
        -- 房主信息
        self.vipCreaterName=msgAck.creatorName
        self.createPlayerID = msgAck.createPlayerID
        
        gameMainView:modifyGameState(g_gameConstant.VIP_GAME_MODEL)
        self.curGameModle = g_gameConstant.VIP_GAME_MODEL;
        if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JIAN_TING) then
            self.isJianting = true
            self.voiceBtn:setVisible(false)
            self.speakerBtn:setVisible(false)
        else
            self.voiceBtn:setVisible(false)
            self.speakerBtn:setVisible(false)
        end
    else
        -- 金币场
        g_gameGlobal:setCurTotalJuShu(0)
        tableWaitView:setGameModel(g_gameConstant.GOLD_GAME_MODEL)
        gameMainView:modifyGameState(g_gameConstant.GOLD_GAME_MODEL)     --金币场
        self.curGameModle = g_gameConstant.GOLD_GAME_MODEL;
        self.gameMainView:setInGame(false)
    end

    -- 保存我的座位号
    g_gameGlobal:setMyTablePos(msgAck.tablePos)
    
    -- 保存玩家信息，可能有多人,玩家信息根据座位号算出实际位置放到self.tablePlayerInfoTable中
    for i, v in pairs(msgAck.players) do    
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        if posState and posState >=1 and posState <=4 then
            if posState == 1 then
                g_gameGlobal:setIsMyFangZhu((v.playerID == self.createPlayerID) and true or false)
                if msgAck.vipTableID > 0 then
                    self.gameMainView:setSelfIsReady(v.gameState ~= g_gameConstant.PALYER_GAME_STATE_WAITING_CLICK_READY)
                end                
            end
            self.tablePlayerInfoTable[posState] = v
        end
    end

    --根据玩家人数，创建玩家初始头像，并摆放位置
    local posState = 1
    local fangweiValueTable = {false, false, false, false}
    if g_gameGlobal:getMaxPlayerNum() > 0 then
        for i = 1, g_gameGlobal:getMaxPlayerNum() do
            local headImgView = require("newgold.MatchGames.PDK.HeadImgView"):create()
            g_gameGlobal:getGameScene():addChild(headImgView, g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)

            if g_gameGlobal:getMaxPlayerNum() == 2 then
                if i == 2 then
                    posState = 3
                end
            elseif g_gameGlobal:getMaxPlayerNum() == 3 then
                if i == 2 then
                    posState = 2
                elseif i == 3 then
                    posState = 4
                end
            elseif g_gameGlobal:getMaxPlayerNum() == 4 then
                posState = i
            end
            headImgView:initHeadImgPos(posState)

            self.tablePlayerHeadImgTable[posState] = headImgView
            
            -- 更新头像数据 
            local  playerInfo = self.tablePlayerInfoTable[posState]
            if playerInfo ~= 0 then
                headImgView:updateTablePlayerInfo(playerInfo)
                headImgView:setTuoGuanState(playerInfo.canFriend == 1)
                if self.tableID then
                    headImgView:fangzhuVisible(playerInfo.playerID == self.createPlayerID)
                end
            end
            fangweiValueTable[posState] = (g_gameGlobal:getMyTablePos()+i-1)%g_gameGlobal:getMaxPlayerNum() + 1
            --头像框
            if playerInfo ~= 0 and self.tablePlayerHeadImgTable[posState]~= 0 then
            end
        end
    end

    if msgAck.currentHand == 0 then 
        local isReady0 = msgAck.isReady0
        local isReady1 = msgAck.isReady1
        local isReady2 = msgAck.isReady2
        local isReady3 = msgAck.isReady3
        
        local enterTime0 = msgAck.enterTime0
        local enterTime1 = msgAck.enterTime1
        local enterTime2 = msgAck.enterTime2
        local enterTime3 = msgAck.enterTime3
        local data = { 
            ["0"] = {isReady0,enterTime0},
            ["1"] = {isReady1,enterTime1},
            ["2"] = {isReady2,enterTime2},
            ["3"] = {isReady3,enterTime3},
        }

        self:onReadyStateChange(data)
    end

    self:updateGameUIs();

    --创建桌子
    self:createPlayersTables();

    --如果是3人场，方位节点往上移动一点点
    if g_gameGlobal:getMaxPlayerNum() == 3 then
        self.fangweiBg:setPositionY(self.fangweiBg:getPositionY() + g_gameConstant.THREE_PLAYER_MY_CHUCARD_OFFSET_Y)
    end
end


function LYPDKGameBase:onReadyStateChange(data)
    if self.tableID and self.curJuShu and self.curJuShu == 0 then 
        for tpos,v in pairs(data) do
            local tpos = tonumber(tpos)
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tpos)
            if self.tablePlayerHeadImgTable[posState] ~= 0 and self.tablePlayerInfoTable[posState] ~= 0 then 

                local player = g_gameGlobal:getMyselfInfo()
                local tablePos = player.tablePos

                local isReady = (v[1] == 1)

                if posState == 1 then 
                    GlobalEventManager:onEvent("readyStateChange" , {isReady = isReady,enterTime =v[2] } )
                    if isReady then
                        for i, v in pairs(self.tablePlayerHeadImgTable) do
                            if v ~= 0 and self.tablePlayerInfoTable[i] ~= 0 then 
                                v:zhunbeiButton(true,self.createPlayerID)
                            end
                        end
                        self.myZhunbei = true
                    else
                        for i, v in pairs(self.tablePlayerHeadImgTable) do
                            if v ~= 0 and  self.tablePlayerInfoTable[i] ~= 0 then
                                v:zhunbeiButton(false,self.createPlayerID)
                            end
                        end
                        self.myZhunbei = false
                    end
                end
                self.tablePlayerHeadImgTable[posState]:zhunbeiButton(self.myZhunbei,self.createPlayerID)
                self.tablePlayerHeadImgTable[posState]:setReadyState( isReady ,v[2],self.createPlayerID)
            end
        end
    end

end


function LYPDKGameBase:updateSpeakerBtnState(  )
    if self.speakerOpen then
        self.speakerBtn:loadTextures("MatchAH/".."nozip/speaker_on.png","MatchAH/".. "nozip/speaker_on.png", "",ccui.TextureResType.plistType)
    else
        self.speakerBtn:loadTextures("MatchAH/".."nozip/speaker_off.png", "MatchAH/".."nozip/speaker_off.png", "",ccui.TextureResType.plistType)
    end
end

function LYPDKGameBase:onSpeakerOpen()
    
end

function LYPDKGameBase:updateJuShu( n )


    g_gameGlobal:setCurrentJushu(n)

    -- body
    if self.jushu then
        if n < 1 or self.vipTableID == 0 then
            self.jushu:setVisible(false);
        else
            self.jushu:setVisible(true);
        end

        self.jushu:setString("")
    end
end

function LYPDKGameBase:updateGameUIs( ... )
    -- body
    if self.jushu then
        local current_j_s = self.curJuShu or 0;
        if self.curJuShu < 1 then
            -- current_j_s = 1 
        end
        self:updateJuShu(current_j_s);
    end

    -- if self.wanfaText then
    --     self.wanfaInfo = self.wanfaInfo or {}
    --     local infos = self.wanfaInfo;
    --     local w_string = table.remove(infos, 2);
    --     self.wfTipsString = w_string;
    --     self.wanfaText:setString(w_string);
    --     self.wanfaText:setVisible(false);
    -- end
end

-- --设置玩法配置参数
-- function LYPDKGameBase:setWanFaConfig()
--     local wanfalist = self.MinorGamePlayRuleList or {}
--     local config = {}
--     local pdkData = {};
--     for i,v in ipairs(g_WanfaNameTable) do
--         if v[1] and v[1][1] and v[1][1][1] == self.MainGamePlayRule then
--             pdkData = clone(v)
--             break
--         end
--     end
--     self.wanfaConfig = {}
--     for k, v in pairs(wanfalist) do
--         if v and v >= 0 then
--             for bk, bv in pairs(pdkData) do
--                 for ck, cv in pairs(bv) do
--                     if v == cv[1] and cv[1] then
--                         cv[3] = true;
--                         table.insert(self.wanfaConfig, cv);
--                         break;
--                     end
--                 end
--             end
--         end
--     end
-- end

--玩法对应描述数据
function LYPDKGameBase:getWanFaConfig()
    -- body
    return self.wanfaConfig or {};
end

function LYPDKGameBase:refreshExpandInfo()
    if self.timeLabel then
        self.timeLabel:setString(os.date("%Y-%m-%d   %X"))
    end


    -- if self.netTypeMark then
    --     -- 网络类型
    --     local networkSpf = {"game/netMarkUnconnect.png","game/netMarkWifi.png","game/netMarkMobile.png"}
    --     local spf = networkSpf[Platform.getInternetConnectionStatus()+1]
    --     if spf then
    --         self.netTypeMark:loadTexture("MatchAH/"..spf, ccui.TextureResType.plistType)
    --     end
    -- end

    -- if self.batteryLvMark then
    --     local battery = Platform.getBatteryInfo()
    --     if type(battery) == "number" then
    --         if battery > 75 then
    --             self.batteryLvMark:loadTexture("MatchAH/".."game/batterySt_4.png", ccui.TextureResType.plistType)
    --         elseif battery > 40 then
    --             self.batteryLvMark:loadTexture("MatchAH/".."game/batterySt_3.png", ccui.TextureResType.plistType)
    --         elseif battery > 15 then
    --             self.batteryLvMark:loadTexture("MatchAH/".."game/batterySt_2.png", ccui.TextureResType.plistType)
    --         else
    --             self.batteryLvMark:loadTexture("MatchAH/".."game/batterySt_1.png", ccui.TextureResType.plistType)
    --         end
    --     end
    -- end
end

function LYPDKGameBase:timeSchedule()
    local scheduler = cc.Director:getInstance():getScheduler()
    local function scheduleFunc(dt)
        if g_gameGlobal:getIsPlayingGameLog() then
            return
        end
        self:refreshExpandInfo()

        if self.startDaoJiShi then
            local leftTime = tonumber(self.leftTime:getString())

            if leftTime > 11 then 
                leftTime = 11
            end

            if leftTime > 0 then
                leftTime = leftTime - 1
            else
                leftTime = 0
                self.startDaoJiShi = false
            end
            self.leftTime:setString(leftTime)
        end
    end
    schedule(self, scheduleFunc, 1)
    --self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, 1 , false)
end

function LYPDKGameBase:gameOperation(msg)
    if g_gameGlobal:getIsPlayingGameLog() then
        return 
    end

    release_print("LYPDKGameBase:gameOperation operation: " .. tostring(msg.opertaionID))


    if msg.opertaionID==g_gameConstant.GAME_OPERTAION_PLAYER_LEFT_TABLE then
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
        -- self:refreshTooNearMark()
        -- 移除player
        if type(self.tablePlayerInfoTable[posState]) == "table" then
            self.tablePlayerInfoTable[posState] = 0
        end
        if type(self.tablePlayerHeadImgTable[posState]) == "userdata" then
            self.tablePlayerHeadImgTable[posState]:initHeadImgPos(posState)
        end
        --移除玩家头像框
        if self.tablePlayerHeadImgTable[posState] ~= 0 then
        end
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_TABLE_ADD_NEW_PLAYER then 


        -- 添加新用户
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
        if posState and (posState >= 1 and posState <= 4) then
            local simplePlayer = {}
            simplePlayer.playerID = msg.playerID
            simplePlayer.playerName = msg.playerName
            simplePlayer.headImg = msg.headImg
            simplePlayer.headImgUrl = msg.targetPlayerName
            simplePlayer.sex = msg.sex
            simplePlayer.palyerIndex = msg.playerIndex
            simplePlayer.gold = msg.gold
            simplePlayer.tablePos = msg.tablePos
            simplePlayer.canFriend = msg.canFriend
            simplePlayer.inTable = 1
            simplePlayer.zhuangCount = 0
            simplePlayer.winCount = 0
            simplePlayer.dianpaoCount = 0
            simplePlayer.hitHorseCount = 0

            simplePlayer.gangCount = 0
            simplePlayer.ip = msg.ip
            simplePlayer.gameState = g_gameConstant.PALYER_GAME_STATE_IN_TABLE_READY
            self.tablePlayerInfoTable[posState] = simplePlayer
            if type(self.tablePlayerHeadImgTable[posState]) == "userdata" then
                self.tablePlayerHeadImgTable[posState]:updateTablePlayerInfo(simplePlayer)
                if self.tableID then
                    self.tablePlayerHeadImgTable[posState]:fangzhuVisible(simplePlayer.playerID == self.createPlayerID)
                    self.tablePlayerHeadImgTable[posState]:setTuoGuanState(msg.canFriend == 1)
                end
            end
            
            if self.tablePlayers[posState] ~= 0 then
                self.tablePlayers[posState]:setSex(simplePlayer.sex)
            end


            local isReady = msg.isReady
            local tablePos = msg.tablePos
            local enterTime = msg.enterTime
            print("------------这里走的2")
            self:onReadyStateChange({ [tablePos..""] = {isReady,enterTime}})
            --入场动画
            performWithDelay(self, function() 
                if self.tablePlayerHeadImgTable[posState] and not tolua.isnull(self.tablePlayerHeadImgTable[posState]) then
                    local isReverse = false
                    if posState == 1 or posState == 4 then
                        isReverse = true
                    end
                    local aniParent = self.tablePlayerHeadImgTable[posState]     
                end
            end, 0.2)
            --显示头像框
            if self.tablePlayerHeadImgTable[posState]~= 0 then
            end
        end
        --新玩家加入上报一次自己的gps数据，不然新玩家没我的gps数据
        self:uploadGpsData()
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_ROOM_DISMISS then 
        ShowConfirmBox("房主已经离开，房间自动解散。", handler(self, g_gameGlobal.backToLobby), true)
    elseif msg.opertaionID==g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then 
        CloseAllPopMsgView()
        -- 解散房间同意框
        if self.jiesanView then
            self.jiesanView:removeSelf()
        end
        self.jiesanView = require("newgold.MatchGames.PDK.JieSanView"):create()
        self.jiesanView:setName("jiesanView")
        g_gameGlobal:getGameScene():addChild(self.jiesanView, g_gameConstant.JIESANROOMVIEW_ZORDER)
        self.jiesanView:updateJieSanInfo(msg, self.tablePlayerInfoTable)
        

    elseif msg.opertaionID == g_gameConstant.GAME_OPERATION_DO_READY_GO then 

        local isReady = msg.isReady
        local tablePos = msg.tablePos

        local enterTime = msg.enterTime
        self:onReadyStateChange({ [tablePos..""] = {isReady,enterTime}})

    end
end

    -- 根据人数创建对应的牌布局
function LYPDKGameBase:refreshTablePlayerWithMaxNum( maxNum )
    if maxNum == 2 then
        if iskindof(self.tablePlayers[4], "cc.Node") then
            self.tablePlayers[4]:removeFromParent()
        end
        self.tablePlayers[4] = 0
        
        if iskindof(self.tablePlayers[2], "cc.Node") then
            self.tablePlayers[2]:removeFromParent()
        end
        self.tablePlayers[2] = 0
    elseif maxNum == 3 then
        if iskindof(self.tablePlayers[3], "cc.Node") then
            self.tablePlayers[3]:removeFromParent()
        end
        self.tablePlayers[3] = 0
    elseif maxNum == 4 then

    end
end

function LYPDKGameBase:updatePlayersHandCards(mustOutCard,isReConnect)
    -- body
    if not self.playerHandsCards then
        return;
    end


    for k, v in pairs(self.playerHandsCards) do
        local item_play = self.tablePlayers[k];
        if item_play and v then
            if k == 1 then
                if isReConnect == 0 and self.vipTableID ~= 0 then 
                    item_play:playStartCardsAnimation(v,mustOutCard);
                else
                    --item_play:playStartCardsAnimation(v,mustOutCard);
                    item_play:updateHandCardUI(v , nil , mustOutCard)
                end
            else
                -- 非第一视图玩家都填充假的扑克数据
                local handData = {}
                -- 构造假牌数据
                for i=1, v do table.insert(handData,0) end
                if isReConnect == 0 and self.vipTableID ~= 0 then 
                    --item_play:playStartCardsAnimation(handData,mustOutCard);
                    item_play:updateHandCardUI(handData)
                else
                    item_play:updateHandCardUI(handData)
                end
            end
        end
    end
end

-- 更新玩家出牌数据（断线重连用）
function LYPDKGameBase:updatePlayersOutCards(msg)
    
    local maxPlayer = g_gameGlobal:getMaxPlayerNum()
    local info = {}
    for i=0, maxPlayer-1 do 
        if i == 0 then 
            info[0] = msg.player0Cards
        elseif i == 1 then
            info[1] = msg.player1Cards
        elseif i == 2 then 
            info[2] = msg.player2Cards
        elseif i == 3 then 
            info[3] = msg.player3Cards
        end       
    end 

    
    -- 获取最大人数
    local maxPlayer = g_gameGlobal:getMaxPlayerNum()

    local handNum = 0 
    for i=0, #msg.playersCardsNum-1 do 
        self:playerIsWarning(i,msg.playersCardsNum[i+1])
    end 

    local index = {
        [0] = {-3,-2,-1},
        [1] = { 1,-2,-1},
        [2] = { 1, 2,-1},
        [3] = { 1, 2, 3}
    }

    local valid = {
        [0] = { 3, 2, 1},
        [1] = { 0, 3, 2},
        [2] = { 1, 0, 3},
        [3] = { 2, 1, 0}
    }

    -- 玩家状态：0、不显示玩家状态；1、玩家出牌；2、玩家不出；
    local status = {}
    -- 初始玩家状态
    for i=0, maxPlayer-1 do  status[i] = 0 end 

    local currentID = msg.currentOpPlayerPos
    local cloesIndex = 100          
    local validPlayerID = -1            -- 有效出牌玩家
    local tmp = index[currentID]
    -- 查找有效出牌玩家
    for i=0, maxPlayer-1 do 
        if i ~= currentID and next(info[i]) ~= nil then 
            status[i] = 1
            local value = currentID - i
            for k,v in ipairs(tmp) do 
                if v == value and cloesIndex > k then 
                    cloesIndex = k 
                    validPlayerID = valid[currentID][cloesIndex]
                end 
            end 
        end 
    end 

    -- 获取有效出牌数据，并刷新玩家上轮出牌数据
    local validOutData = info[validPlayerID] or {}

    local myID = g_gameGlobal:getMyTablePos()
    local myVID = g_gameGlobal:getTablePlayerPosWithTablePos(myID)

    if self.tablePlayers[myVID] ~= nil and self.tablePlayers[myVID] ~= 0 then
        local handCount,mustOutCard = 0,0
        for k, v in pairs(self.playerHandsCards) do 
            if k == 1 then 
                handCount = handCount + #v
            else
                handCount = handCount + v 
            end 
        end 

        if GameCMD.MAX_HANDCOUNT*maxPlayer == handCount then mustOutCard = msg.firstCard end 
        
        self.tablePlayers[myVID]:setReconnectData(validOutData,mustOutCard)
    end 

    local isFristA = msg.unused1 == 1

    -- 确定不出牌玩家，该玩家应该处于有效出牌玩家和当前牌权玩家之间
    if validPlayerID ~= -1 then
        for i=0, maxPlayer-1 do 
            if i~= currentID and i ~= validPlayerID then 
                local value = currentID-i 
                for k, v in ipairs(tmp) do 
                    if v == value and k < cloesIndex then 
                        local passIndex = valid[currentID][k]
                        status[passIndex] = 2
                    end
                end 
            end 
        end 

        -- 根据status显示UI
        for i=0, maxPlayer-1 do 
            local VID = g_gameGlobal:getTablePlayerPosWithTablePos(i)
            if status[i] == 1 then 
                -- 显示出牌数据
                if self.tablePlayers[VID] ~= nil then 
                    self.tablePlayers[VID]:updateOutCardUI(info[i] , isFristA)
                end 
            elseif status[i] == 2 then 
                -- 显示不出
                if self.tablePlayers[VID] ~= nil then 
                    self.tablePlayers[VID]:showPassStatus(true)
                end 
            end 
        end 
    end
end

function LYPDKGameBase:gameStart( msg )
    self:flushDispatchPanel(false)
    --播放背景音乐
    self.backGroundMusicNode:stopAllActions()
    self.audio:playPlayingGameSound();
    --self.gpsBtn:setVisible(true)
    g_gameGlobal:setIsPlayingGameLog(false)
    local maxNum = msg.unused1
    
    self.gameMainView:setInGame(true)

    -- 删除等待界面
    local tableWait = g_gameGlobal:getGameScene():getChildByName("tableWait")
    if tableWait then
        tableWait:closeView()
    end

    
    self:updateJuShu(msg.quanNum);
    -- 更新头像位置以及更新金币和房卡数
    for i, v in pairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            -- 将新头像位置从等待界面切换为游戏界面
            v:updateHeadImgPosWithTablePos(maxNum, g_gameConstant.GAME_PDK)
            if self.tablePlayerInfoTable[i] ~= 0 then
                -- 更新金币数和房卡数
                local tablePos = self.tablePlayerInfoTable[i].tablePos
                local goldNum = msg["player" .. tablePos .. "Gold"]
                local diamondNum = msg["player" .. tablePos .. "Win"]
                v:refreshGoldNum(goldNum, diamondNum)

                if bit._and(msg.OffLinePlayers * (2^ (-tablePos*8)), 0xff) > 0 then
                    -- 显示离线图标
                    v:visibleOffline(true , self.tablePlayerInfoTable[i].gameResult)
                end

            end
        end
    end

    -- 庄位置
    local zhuangPos = msg.dealerPos
    -- local posState = g_gameGlobal:getTablePlayerPosWithTablePos(zhuangPos)
    -- self.tablePlayerHeadImgTable[posState]:zhuangVisible(false)
    
    -- 房主位置
    -- local fangzhuPos = bit._and( bit._rshift(msg.baoCard,8) , 0xff)
    -- if self.tableID then
    --     posState = g_gameGlobal:getTablePlayerPosWithTablePos(fangzhuPos)
    --     self.tablePlayerHeadImgTable[posState]:fangzhuVisible(true)
    -- end

    g_gameGlobal:setPDKFirstChuPos(zhuangPos)

    self.playerOperationTime = msg.playerOperationTime
    if self.playerOperationTime < 5 then
        self.playerOperationTime = 5
    end

    g_gameConstant.XIPAI_ANIMATION_TIME = 3
    self:xipaiFinishShowCard(msg)
    
    if self.tablePlayers[1] ~= 0 and  self.tablePlayers[1] ~= nil then
        -- 初始化游戏规则
        local params = {}
        params.isBomb333 = false

        local firstCard = msg.firstCard
        local hasSige3 = msg.unused0 == 1

        -- local logic1 = PublicFunc.getCardLogicValue(firstCard)

        local vipTableID = self.vipTableID
        local quanNum = msg.quanNum

        if vipTableID > 0 then 
            BOMB_333_TABLES = BOMB_333_TABLES or {}
            BOMB_333_TABLES[vipTableID] = BOMB_333_TABLES[vipTableID] or {}
            BOMB_333_TABLES[vipTableID][quanNum] = BOMB_333_TABLES[vipTableID][quanNum] or hasSige3
            params.isBomb333 = BOMB_333_TABLES[vipTableID][quanNum]
        else
            params.isBomb333 = hasSige3
        end
        
        local zhuangPos = msg.dealerPos

        -- if hasSige3 then 
        --     params.isBomb333 = true
        -- end

        params.firstCard = firstCard

        self.tablePlayers[1]:initGameRuleInfo(params)

    end
end

-- 报警
function LYPDKGameBase:playerIsWarning(chairID,num)
    -- 获取最大人数
    local maxPlayer = g_gameGlobal:getMaxPlayerNum()
    -- 获取上一家的
    local lastID = chairID - 1
    if lastID < 0 then 
        lastID = maxPlayer - 1 
    end 

    local VID = g_gameGlobal:getTablePlayerPosWithTablePos(lastID)

    if self.tablePlayers[VID] == nil or self.tablePlayers[VID] == 0 then return end

    self.tablePlayers[VID]:setWarnInfo(num)
end 

-------------------------------------------------    Hown 龙岩跑得快 消息模块   ------------------------------------------------------------
function LYPDKGameBase:playerOperation(msg)
    -- 获取对应玩家状态
    local myVID = g_gameGlobal:getTablePlayerPosWithTablePos(g_gameGlobal:getMyTablePos())
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)

    if self.tablePlayerInfoTable[posState] == 0 then 
        return 
    end

    local sex = self.tablePlayerInfoTable[posState].sex

    if self.tablePlayers[myVID] == nil or self.tablePlayers[myVID] == 0 then return end

    self.tablePlayers[posState]:setSex(sex);
    
    --打补丁， 有时候服务器 玩家是否在牌桌数据 intable 数据会出错
    --vip场次只要玩家出牌就把 玩家弄成在线状态
    if g_gameGlobal:getVipTableID() and not g_gameGlobal:hasWanfa2( g_gameConstant.GR2_OPTION_TUOGUAN_DAIDA ) then 
        self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
    end

    -- 操作解析
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        print("________________________________收到出牌消息222222222222222222222222222222")
        for k, v in pairs(msg.playersPos) do 
            local pos = g_gameGlobal:getTablePlayerPosWithTablePos(v)
            local handData = {}
            local handCount = 0
            if pos == myVID then 
                handData = msg.handCards
                handCount = #handData
            else
                local num = msg.playersCardsNum[k]
                handCount = num
                for i=1, num do 
                    table.insert(handData,0)
                end 
            end



            local isNew = msg.isNext == 1 and true or false --判断是否是当局首次出牌
            self.tablePlayers[pos]:outCardAction(pos==posState,msg.putOutCards,handData,posState, isNew )

            self:playerIsWarning(v,handCount)
        end 

        
       
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_YAO_BU_QI) == g_gameConstant.MAHJONG_OPERTAION_YAO_BU_QI then 
        -- 处理玩家不要（或要不起）
        for k, v in pairs(self.tablePlayers) do 
            if v ~= nil then 
                v:passCardAction(k==posState)
            end 
        end 
        self.audio:playYaoBuQiSound(sex);
    end 
end 






-- 玩家出牌、吃牌、碰牌、听牌等消息
function LYPDKGameBase:playerOperation1(msg)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    if self.tablePlayers[posState] == 0 then
        return 
    end

    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        if posState == 1 then
            --self.tablePlayers[posState]:refreshPlayerCards(msg.card_value, msg.handCards, msg.beforeCards, msg.downCards)
        else
            --打补丁， 有时候服务器 玩家是否在牌桌数据 intable 数据会出错
            --vip场次只要玩家出牌就把 玩家弄成在线状态
            if g_gameGlobal:getVipTableID() and not g_gameGlobal:hasWanfa2( g_gameConstant.GR2_OPTION_TUOGUAN_DAIDA ) and type(self.tablePlayerHeadImgTable[posState]) == "userdata" then 
                self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
            end
            
            
            --self.tablePlayers[posState]:setIsMyFangwei(false)
            --self.tablePlayers[posState]:chuOperation(msg.card_value, true)
            self:showLeftCards(msg.cardLeftNum)
        end
        self.tablePlayers[posState]:btnChuPai(msg.card_value);

        NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForCardValue(bit._and(msg.card_value, 0xff), self.tablePlayerInfoTable[posState].sex))
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_HUA) == g_gameConstant.MAHJONG_OPERTAION_BU_HUA  then
        release_print("MAHJONG_OPERTAION_BU_HUA")
        --self.tablePlayers[posState]:addBuhuaCard(msg.card_value, true, true)
    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG)   then
        -- for i, v in pairs(self.tablePlayers) do
        --     if v ~= 0 then
        --         v:removeChuCard()
        --     end
        -- end
        --self.tablePlayers[posState]:chiPengGangOperation(msg, true)
        if self.gameMainView then
            self.gameMainView:hideMarker()
        end
        -- 播放音效
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
            NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForOperation(g_gameConstant.OPERATION_CHI, self.tablePlayerInfoTable[posState].sex))
        elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
            NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForOperation(g_gameConstant.OPERATION_PENG, self.tablePlayerInfoTable[posState].sex))
        end

    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)   then
        if msg.opValue ~= g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
            -- for i, v in pairs(self.tablePlayers) do
            --     if v ~= 0 then
            --         v:removeChuCard()
            --     end
            -- end
        end
        --self.tablePlayers[posState]:chiPengGangOperation(msg, true)
        if self.gameMainView then
            self.gameMainView:hideMarker()
        end
    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING) then        
        --self.tablePlayers[posState]:tingOperation(msg, true)
    else
        if msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_1_YOU] then
            --self.tablePlayers[posState]:youjinNotify(g_gameConstant.MAHJONG_NEW_OPERTAION_1_YOU)
        elseif msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_2_YOU] then
            --self.tablePlayers[posState]:youjinNotify(g_gameConstant.MAHJONG_NEW_OPERTAION_2_YOU)
        elseif msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_3_YOU] then
            --self.tablePlayers[posState]:youjinNotify(g_gameConstant.MAHJONG_NEW_OPERTAION_3_YOU)
        end
    end
end

function LYPDKGameBase:playerOperationNotify(msg)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    -- local showLaizi = false
    release_print("LYPDKGameBase:playerOperationNotify operation: " .. tostring(msg.operation))
    if msg.operation == g_gameConstant.MAHJONG_OPERTAION_GAME_OVER then
        -- 游戏结束
        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:backToLobby()
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OFFLINE then
        -- 玩家离线
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(true)
            self.tablePlayerInfoTable[posState].offline = true
            ShowToastMsg(self.tablePlayerInfoTable[posState].playerName .. "暂时离开了")
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU_CARD_LIST_UPDATE then
        -- 胡牌列表更新
        if type(self.tablePlayers[1]) == "userdata" then
            -- self.tablePlayers[1]:showHuCardList(msg.tingList, msg.singleNumList)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLINE then
        -- 玩家返回桌子
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
            self.tablePlayerInfoTable[posState].offline = false
            ShowToastMsg(self.tablePlayerInfoTable[posState].playerName .. "回来了")

            self.tablePlayerHeadImgTable[posState]:setTuoGuanState(msg.unused0 == 1)

        end
        --玩家返回桌子就上报一次自己的GPS
        self:uploadGpsData()

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_REMOE_CHU_CARD then
        -- 移除最后一张出的牌
        if type(self.tablePlayers[posState]) == "userdata" then
            --self.tablePlayers[posState]:removeLastChuCard()
        end
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        self.actionNode:stopAllActions()

        -- Hown 根据该消息，判断哪个玩家出牌，并刷新出牌UI状态
        release_print("LYPDKGameBase:playerOperationNotify MAHJONG_OPERTAION_CHU")
        local outPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        local isNew = msg.isNext == 1 and true or false

        local lastOutCardData = msg.lastPutOutCards or {}

        if self.vipTableID ~= 0 then 
            if self.tablePlayers[outPos] ~= nil then 
                -- 若为新的一轮，则停顿0.7秒，否则直接弹出按钮
                local time = 0
                -- if isNew == true  and msg.isRecover ~= 1 then time = 0.7 end 
                -- if msg.lastOpPos == -1 and msg.isRecover ~= 1 then 
                --     if g_gameGlobal:isZYPDK() and false then 
                --         time = 0.7
                --     else
                --         time = 1.5
                --     end 
                -- end--time = 3.1 end 

                

                local callBack = function()
                    g_gameGlobal:setPDKCurChuPos( msg.player_table_pos )
                    g_gameGlobal:setPDKLastChuPos( msg.lastOpPos )
                    self.tablePlayers[outPos]:showOutCardStatus(outPos == posState,isNew , msg.lastOpPos , lastOutCardData , msg )
                end 

                -- if time == 0 then 
                --     callBack()
                -- else
                --     performWithDelay(self.actionNode,callBack,time)
                -- end
                performWithDelay(self.actionNode,callBack,time)
                
            end
        else
            -- 金币场
            if self.tablePlayers[outPos] ~= nil then 
                if self.xipaiAnimationDelay then
                    performWithDelay(self, function()
                        self.xipaiAnimationDelay = false
                        self.tablePlayers[outPos]:showOutCardStatus(outPos == posState,isNew , msg.lastOpPos  , lastOutCardData , msg)
                    end , 1.5)
                else
                    self.tablePlayers[outPos]:showOutCardStatus(outPos == posState,isNew , msg.lastOpPos  , lastOutCardData , msg)
                end    
            end 
        end

    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_HUA) == g_gameConstant.MAHJONG_OPERTAION_BU_HUA  then
        if posState == 1 then
            --self.tablePlayers[posState]:buhuaNotify(msg.tingList, true)--, msg.handCards, msg.beforeCards, msg.downCards)
        else
            --self.tablePlayers[posState]:setIsMyFangwei(false)
            --self.tablePlayers[posState]:addBuhuaCard(msg.tingList, true, true)
        end
        -- showLaizi = true
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_AUTO_CHU then
        if  self.tablePlayers[1] ~= 0 then
           --self.tablePlayers[posState][1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_CHU)
            if msg.chi_card_value ~= 0 then
               --self.tablePlayers[posState][1]:moCard(bit._and(msg.chi_card_value, 0xff))
            end
           --self.tablePlayers[posState][1]:autoChu()
            self:showLeftCards(msg.cardLeftNum)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OVERTIME_AUTO_CHU then
        -- 超时自动出
        if  self.tablePlayers[1] ~= 0 then
            self.tablePlayers[1]:setTuoGuanStatus(true)
        end
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG  then
        if  self.tablePlayers[1] ~= 0 then
           -- self.tablePlayers[1]:setCurOperationState(msg.operation)
           -- self.tablePlayers[1]:chiPengGangNotify(msg, false)
            self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
        end
        -- showLaizi = true
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU then
    --     if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
    --        -- self.tablePlayers[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_HU)
    --     end
    --    -- self.tablePlayers[1]:chiPengGangNotify(msg)
    --     showLaizi = true
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED then
        local operatorList = msg.operationList or {};
        local isHasFUJI = false
        

        --宣城八大对
        if msg.unused0 == 1 and g_gameGlobal:isXuanChengPDK() then 
            if self.tablePlayers[posState] then
                self.tablePlayers[posState]:showFuJiAnimation(GameCMD.PLAYER_BADADUI);
            end
        else
            for k, v in pairs(operatorList) do
                local item_pos_value = v;
                local item_key = k
                if item_pos_value == true then
                    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(item_key)
                    if self.tablePlayers[posState] then
                        self.tablePlayers[posState]:showFuJiAnimation();
                        isHasFUJI = true;
                    end
                end
            end
            
            --春天,
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
            local sex      = self.tablePlayerInfoTable[posState].sex
            if self.tablePlayers[posState] and self.tablePlayers[posState] ~= 0 and isHasFUJI == true then
                self.audio:playCardsSound(sex, GameCMD.PLAYER_FUJI)
            end
        end
        

        

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD then
        if  self.tablePlayers[1] ~= 0 then
           -- self.tablePlayers[1]:removeChuCard()
            --self.tablePlayers[posState]:refreshChuCards(msg.tingList)
            self:showLeftCards(msg.cardLeftNum)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_TIP then
        -- Hown 
        local isNew = msg.isNext == 1 and true or false
        local flg = false
        if posState == 1 then
            flg = true
        end
        for k, v in pairs(self.tablePlayers) do 
            if v ~= nil and v ~= 0 then
                -- if self.vipTableID ~= 0 then 
                --     local time = 0
                --     if isNew == true  and msg.isRecover ~= 1 then time = 0.7 end 
                --     if msg.lastOpPos == -1 and msg.isRecover ~= 1 then time = 1.5 end --time = 3.1 end
                --     local callBack = function() 
                --         v:respondTipMsg(11,k == posState,isNew,flg)
                --     end 

                --     if time == 0 then 
                --         callBack()
                --     else
                --         performWithDelay(self,callBack,time)
                --     end
                -- else
                    v:respondTipMsg(11,k == posState,isNew,flg)
                -- end 
            end
        end 
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SHOW_TABLE_TIPS then
        if self.gameMainView then
            if msg.target_card == 1 then
                self.gameMainView:showTableTips("最后四张")
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_CANCEL then
        if  self.tablePlayers[1] ~= 0 then
           -- self.tablePlayers[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
            if msg.target_card == 0 then --为0才进托管 不然只进取消按钮那些
               -- self.tablePlayers[1]:cancelSelectionOperation(true)
            else
               -- self.tablePlayers[1]:cancelSelectionOperation(false)
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND then
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_SUCCESSFULLY then
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_FAILED then
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_NO_START_CLOSE_VIP then
        g_gameGlobal:setIsInPaiZhuo(false)
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLY_ZIMO_TIME then
        if (msg.chi_card_value ~= 0) and (msg.player_table_pos == g_gameGlobal:getMyTablePos()) then
           -- self.tablePlayers[1]:moCard(bit._and(msg.chi_card_value, 0xff))
        end
        self:showLeftCards(msg.cardLeftNum)
    end
end

function LYPDKGameBase:startGameViewCheck()    
    self.gameMainView:setInGame(true)
    -- 删除等待界面
    local tableWait = g_gameGlobal:getGameScene():getChildByName("tableWait")
    if tableWait then
        tableWait:closeView()
    end
    -- 加载方位，设置等
    self.fangweiBg:setVisible(true)
    -- 更新头像位置以及更新金币和房卡数
    for i, v in pairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            -- 将新头像位置从等待界面切换为游戏界面
            v:updateHeadImgPosWithTablePos(g_gameGlobal:getMaxPlayerNum(), g_gameConstant.GAME_PDK)
        end
    end
end

--异常处理函数
function LYPDKGameBase:playerOperationEx(msg)
    if #msg.operationList == 0 then
        return
    end

    if msg.operationList[1] == g_gameConstant.GAME_OPERATION_SHOW_CARDS_ACK then
        --通知客户端决定要不要明牌
       -- self.tablePlayers[1]:mingpaiOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DA_SHAI_ZI then
        --通知客户端决定要不要打骰子
       -- self.tablePlayers[1]:daTouZiOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG then
        --通知客户端决定要不要放冲 --放冲也代表游戏开始了。。
        self:startGameViewCheck()
       -- self.tablePlayers[1]:fangChongOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_MO_CARD_AT_LAST_4_CARDS then
        --通知客户端通可以决定是是否看牌
       -- self.tablePlayers[1]:kanGuoOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_COULD_SHOW_CARDS then
        --通知客户端通可以把隐藏的手牌亮出来开始打牌了
        for i,v in ipairs(self.tablePlayers) do
            if v~= 0 then
                v:showHandCards(true)
            end
        end        
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS then
        --GAME_OPERATION_PLAYER_SHOW_CARDS 通知有玩家亮牌
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        --self.tablePlayers[posState]:mingpaiOperation(msg.valueList, msg.value)
        if self.gameMainView then
            self.gameMainView:hideMarker()
        end
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE then
        --GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE 通知有玩家打骰子
        self:startGameViewCheck()
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        --骰子丢出去动画
        local CrapsAniNode = require("app.global.CrapsAni").new(msg.valueList, posState, true)
        g_gameGlobal:getGameScene():add(CrapsAniNode, g_gameConstant.TABLEPLAYERSELECT_ZORDER)
        if self.gameMainView then
            self.gameMainView:hideMarker()
        end
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG_VALUE then
        self:startGameViewCheck()
        local isWaitOtherPlayerFangchong = false
        for i,tablePos in ipairs(msg.keyList) do
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)            
            if self.tablePlayers[posState] ~= 0 then
                if posState ~= 1 then
                    isWaitOtherPlayerFangchong = msg.valueList[i] == -1 or isWaitOtherPlayerFangchong
                end
                --self.tablePlayers[posState]:setFangChongState(msg.valueList[i])
                if self.tablePlayerHeadImgTable[posState] ~= 0 then
                    self.tablePlayerHeadImgTable[posState]:xzScore(msg.valueList[i])
                end
            end
        end
       -- self.tablePlayers[1]:setWaitOtherFangChongState(isWaitOtherPlayerFangchong)
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_CARD_INVALID then
        
        local myId = g_gameGlobal:getMyTablePos()
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(myId)
        if self.tablePlayers[posState] ~= 0 and self.tablePlayers[posState] ~= nil then 
            self.tablePlayers[posState]:outErorrCard()
        end

    elseif msg.operationList[1] == g_gameConstant.MSG_NOTIFY_PLAYER_OPERATION then
        release_print("LYPDKGameBase:playerOperationEx MSG_NOTIFY_PLAYER_OPERATION 操作不合法")
        
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_CARD_NOT_EXIST then
        ShowToastMsg("牌不存在")

    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_PLAYER_CLICK_READY then

        for i,tablePos in ipairs(msg.keyList) do
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)       
            if type(self.tablePlayers[posState]) == "userdata" then     
                if self.tablePlayerHeadImgTable[posState] ~= 0 then
                    self.tablePlayerHeadImgTable[posState]:refreshReadyState(msg.valueList[i])
                end
            end
        end
    else
        release_print("操作  ---msg.operationList[1] --" .. msg.operationList[1] .. "  ， 没有处理")
    end
end

function LYPDKGameBase:showLeftTimeAndFangWei(tablePos, leftTime)
    self.leftTime:setString(leftTime)
    self.startDaoJiShi = true

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
    -- if self.tablePlayers[posState] ~= 0 then
    --     -- 当前玩家头像转圈显示，其它不显示
    --     for i, v in pairs(self.tablePlayers) do
    --         if type(v) == "userdata" then                
    --             v:setIsMyFangwei(posState == i)
    --             if i == posState then
    --                 v:touxiangSkeletonVisible(true)
    --             else
    --                 v:touxiangSkeletonVisible(false)
    --             end
    --         end
    --     end
    -- end
end

function LYPDKGameBase:showLeftCards(cardNum)
    -- if cardNum >= 0  then
    --     local oldLeftCardNum = tonumber(self.wanfaText:getString())
    --     if (oldLeftCardNum - cardNum > 3) and (num == 0) then
    --         return 
    --     end
    --     self.wanfaText:setString(cardNum)
    -- end
end

function LYPDKGameBase:closeVipRoomRuquest(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_msgDefinitions.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
        playerTableOperationMsg.opValue = 2     --1是请求解散，2是同意解散
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end

-- 续卡
function LYPDKGameBase:extendRoom(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.opertaion = g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end

-- 不续卡
function LYPDKGameBase:noExtendRoom(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.opertaion = g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND
        playerTableOperationMsg.opValue = 1
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end

function LYPDKGameBase:checkWarningTip()

end

function LYPDKGameBase:doExitGameLogic()
    -- body
    LYPDKResource.removeLYPDKRes();
end

function LYPDKGameBase:zhuanyunbiaoqing()
    
end
--洗牌完成显示手牌
function LYPDKGameBase:xipaiFinishShowCard(msg)
    --更新手牌
    self.playerHandsCards = {}
    self.playerHandsCards[1] = msg.mycards
    for k, v in pairs(msg.playersPos) do
        local index = g_gameGlobal:getTablePlayerPosWithTablePos(v);
        if v and index ~= 1 then --除去自己坐标
            self.playerHandsCards[index] = msg.playersCardsNum[k]
        end
    end

    self:updatePlayersHandCards(msg.firstCard,msg.isRecover) 

    -- 更新上轮出牌数据
    if msg.isRecover == 1 then 
        self:updatePlayersOutCards(msg)
    end 

    if msg.chuCard ~= 0 then
        isGameGone = true
        posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.chuCardPlayerIndex)
        if self.tablePlayers[posState] ~= 0 then
            --self.tablePlayers[posState]:chuOperation(msg.chuCard, true)
        end
    end

    -- 显示连庄提示
    if msg.isDealerAgain == 1 then
        if self.gameMainView then
            self.gameMainView:showTableTips("恭喜庄家连庄！")
        end
    end

    performWithDelay(self, function()
        self:checkWarningTip()
    end , 1)
end

--洗牌动画
function LYPDKGameBase:xipaiAnimation(data)
    local dateimg = {}
    local posx,posy, ani
    local pos = {
    {posx = display.cx,posy = 200,ani = "xia"},
    {posx = display.width-250,posy = display.cy,ani = "zuo"},
    {posx = display.cx,posy = display.height-200,ani = "shang"},
    {posx = 250,posy = display.cy,ani = "you"},
}
    
end

--催牌抖动动画
function LYPDKGameBase:cuipaiShakeAnimation()
    
end

------------------------------------------------------------------------
--------------------------转运表情+听牌+免费赠送的begin
--添加转运道具的icon
function LYPDKGameBase:addChangeLuckIcon()
    
end
-- 显示‘赠送道具界面’
function LYPDKGameBase:showGetPropView(propData, activityTip)
    
end
-- 设置现金购买的物品id
function LYPDKGameBase:setCashBuyItemId( itemId )
    self.selectedItemID = itemId
end

-- 调用实时语音的enterroom
function LYPDKGameBase:callVoiceEnterRoom()
    
end

--回归系统UIbegin
function LYPDKGameBase:showGuidePanel()
    
end

function LYPDKGameBase:showMarqueeView()
    
end

function LYPDKGameBase:hideMarqueeView()
    
end

return LYPDKGameBase