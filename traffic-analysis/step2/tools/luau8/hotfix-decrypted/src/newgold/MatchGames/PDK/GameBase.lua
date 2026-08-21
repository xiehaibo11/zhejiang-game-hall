
local eventMgr = import("..global.EventMgr")
local eventType = import("..global.EventType")
local GameBase = class("GameBase", cc.load("mvc").ViewBase)

local ZORDER_ZHUANYUN_DETAIL = 999 --转运展示层
function GameBase:ctor(...)
    self.tablePlayerInfoTable = {0,0,0,0}          --麻将中最多4个人，初始值都为0，如果有人数加进来就替换0，存放每个玩家详细信息，从左到右依次为自己，下家，对家，上家。
    self.tablePlayerHeadImgTable = {0,0,0,0}       --哪个位置坐的有人，
    self.tablePlayerTable = {0,0,0,0}               --各个玩家的手牌，出牌
    self.playerOperationTime = 15               --玩家操作时间
    self.startDaoJiShi = false

    self._voiceMsgQueue = {} --语音播放队列

    self.fangWeiAnims = { 
        {"dong","nan","xi","bei"},
        {"bei","dong","nan","xi"},
        {"xi","bei","dong","nan"},
        {"nan","xi","bei","dong"},
    }

    GameBase.super.ctor(self, ...)

    GameBase.instance = self

    
    self.myZhunbei = false
    self.gameMainView = nil

end


function GameBase:getInstance()
    return GameBase.instance
end

function GameBase:onCreate()
    self:createPDKResoueceNode("GameBaseView.csb")

    self.resourceNode_:registerScriptHandler(function(state)
        if state == "enter" then
            GameBase.instance = self
        elseif state == "exit" then
            GameBase.instance = nil
        end
    end)

    local bgPanel = self.resourceNode_:getChildByName("bgPanel")
    self.bgPanel = bgPanel
    self.bgImgaction = bgPanel:getChildByName("Image_1")
    self.bgImgaction:hide()

    bgPanel.noClickAudio = true

    bgPanel:onClick(function() 
        GlobalEventManager:onEvent("resetHandCard")
    end)


    self:refreshBackGround()

    -- 房间号
    self.roomIdLabel = ccui.Helper:seekNodeByName(bgPanel, "roomId")
    self.roomIdLabel:setString("")

    -- 时间
    self.timeLabel = ccui.Helper:seekNodeByName(bgPanel, "timeLabel")
    self.timeLabel:setString(os.date("%Y-%m-%d   %X"))

    --芜湖玩法几底显示
    self.wuhudi = ccui.Helper:seekNodeByName(bgPanel, "wuhudi")
    self.wuhudi:setString("")
    self.wuhudi:hide()

    --线条
    self.line1 = ccui.Helper:seekNodeByName(bgPanel, "Image_2")
    self.line2 = ccui.Helper:seekNodeByName(bgPanel, "Image_2_0")
    self.line2:hide()

    -- 玩法
    -- self.wanfa = bgPanel:getChildByName("wanfa")
    -- self.wanfa:setString("")


    -- 聊天按钮
    self.chatBtn = bgPanel:getChildByName("chatBtn")
    self.chatBtn:setPressedActionEnabled(true)
    self.chatBtn:onClick(handler(self, self.btnEventFunc))

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
    self.voiceBtn:onTouch(function(event)
    end)

    self.voiceBtn:setVisible(false)

    --GPS按钮
    self.gpsBtn = ccui.Helper:seekNodeByName(bgPanel, "gpsBtn")
    self.gpsBtn:onClick(handler(self, self.btnEventFunc))
    self.gpsBtn:setPressedActionEnabled(true)
    --self.gpsBtn:setVisible(false)


    --芜湖玩法当前战绩
    self.wuhuResults = bgPanel:getChildByName("wuhuResults")
    self.wuhuResults:setPressedActionEnabled(true)
    self.wuhuResults:onClick(handler(self, self.btnEventFunc))
    self.wuhuResults:hide()

    -- 时间
    self:timeSchedule() 
    
    -- 方位
    self.fangweiBg = bgPanel:getChildByName("fangweiBg")
    self.fangweiBg:setVisible(false)

    self.fangwei = self.fangweiBg:getChildByName("fangwei")

    -- 剩余时间
    self.leftTime = self.fangweiBg:getChildByName("leftTime")
    self.leftTime:setLocalZOrder(1)
    self.leftTime:setStringValue("")
    -- 局数 
    self.leftCardBg = self.fangweiBg:getChildByName("leftCardBg")
    self.jushu = self.leftCardBg:getChildByName("jushu")
    self.jushu:setString(0)

    self.jushuPreLabel = self.leftCardBg:getChildByName("Text_2_1_0")
    self.jushuPreLabel:setString("剩")

    -- 剩余牌数量 
    local rightCardBg = self.fangweiBg:getChildByName("rightCardBg")
    self.rightCardNum = rightCardBg:getChildByName("rightCardNum")
    self.rightCardNum:setString(0)

    self.replayCode = bgPanel:getChildByName("replayCode")
    if self.replayCode then self.replayCode:hide() end
    


    self.actionNode = display.newNode():addTo(self)

    self:netEvent()
end

function GameBase:refreshBackGround()
    local bgPanel = self.resourceNode_:getChildByName("bgPanel")
    if g_UserDataTable.gameBgColorType and tonumber(g_UserDataTable.gameBgColorType) then
        local imgStr = "bigImg/pz_bj".. g_UserDataTable.gameBgColorType ..".jpg"
        bgPanel:setBackGroundImage(imgStr, ccui.TextureResType.localType)

       self.bgImgaction:loadTexture(imgStr, ccui.TextureResType.localType)
    else
        bgPanel:setBackGroundImage("bigImg/pz_bj2.jpg", ccui.TextureResType.localType)

        self.bgImgaction:loadTexture("bigImg/pz_bj2.jpg", ccui.TextureResType.localType)
    end
end

function GameBase:refreshCardFrameColor()
    for i,player in ipairs(self.tablePlayerTable) do
        if player ~= 0 then 
            player:refreshCardFrameColor()
        end
    end
    self.tablePlayerTable[1]:refreshHuCardFrameColor()
end

function GameBase:setDelegate( d )
    -- body
    self.delegate = d;
end



function GameBase:refreshCardFrontSize()
    for i,player in ipairs(self.tablePlayerTable) do
        if player ~= 0 then 
            player:refreshCardFrontSize()
        end
    end
end


function GameBase:playVoiceWith(audioContent)
    print('receive voice msg...')
        --将语音数据保存进队列
        table.insert(self._voiceMsgQueue,audioContent)
        self:playVocie()
end

function GameBase:netEvent()
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    self:addChild(netObj.new(g_msgDefinitions.MSG_TALKING_IN_GAME, function (event, msg)
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end

        if not self.tablePlayerHeadImgTable then 
            return 
        end

        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.playerPos)
        if msg.msgType == 0 then --系统自带聊天文本
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                local cfg = g_gameLanguageCfg[g_UserDataTable.gameLanguageCfgIndex]
                local text = Language[string.format(cfg.prefix.."%d",msg.msgNo)]
                --柳州和普通话互发语言，兼容处理
                if text then
                    if self.tablePlayerHeadImgTable[posState] ~= 0 then
                        self.tablePlayerHeadImgTable[posState]:showChatText(text)
                        local url = string.format("sound/%s/%s/%d.mp3",cfg.name,msg.playerSex == 1 and "man" or "female",msg.msgNo+1)
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
            if self.playVoiceWith then 
                self:playVoiceWith(audioContent)
            end
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
            if self.tablePlayerHeadImgTable[fromPlayer] ~= 0 and self.tablePlayerHeadImgTable[toPlayer] ~= 0 then
                local toPIcon = self.tablePlayerHeadImgTable[toPlayer].aniNode
                local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                local isOpen = g_UserDataTable.gameFaceCfgIndex == 1
                if index == 201 then
                    isOpen = true
                end
                --只屏蔽 自己以外的 互动表情
                if isOpen or fromPlayer == 1 then 
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
                    end
                    if fromPlayer == 1 then
                        self.tablePlayerHeadImgTable[toPlayer]:hudongMaskVisible()
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
                self.isZhuanyunPlaying = true
                self.tablePlayerHeadImgTable[fromPlayer]:createTransportFace(index)
                
            end
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:zhuanyunbiaoqingZuanquan(index)
            end
        elseif msg.msgType == 6 then
            if msg.unused1 == 1 then
                ShowToastMsg("房卡不足，请到商城购买房卡！")
                return
            elseif msg.unused1 == 2 then
                ShowToastMsg("金币不足")
                return
            end
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
                self.tablePlayerTable[1]:setTuoGuanState(true)
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
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:updateIpInfo(ip)
            end
        end
    end))


    -- self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK, function (event, msg)

    --     local layer = require("newgold.MatchGames.PDK.GameResultLayer"):create()
    --     cc.Director:getInstance():getRunningScene():addChild(layer, 300)

    -- end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK, function (event, msg)
        CloseAllPopMsgView()
        -- 计分界面(小计分)
        self.startDaoJiShi = false

        local gameResultLayer = require("newgold.MatchGames.PDK.GameResultLayer"):create()
        if g_gameGlobal:getGameScene() then
            gameResultLayer:setName("gameResultLayer")
            g_gameGlobal:getGameScene():add(gameResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
        end
    end))


    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE, function (event, msg)
        
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end
        
        -- 关闭vip房间返回（大计分）
        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:setVipTableID(nil)
        CloseAllPopMsgView()

        if g_gameGlobal:getGameScene() ~= nil and g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK) then
            local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
            local player = g_gameGlobal:getMyselfInfo()
            
            if msg.unused0 == 1 then 

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
                

                local function callback()
                    local gameBigResultLayer = require("newgold.MatchGames.PDK.GameBigResultLayer"):create()
                    if gameBigResultLayer ~= nil  and g_gameGlobal:getGameScene() then
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

    self:addChild(eventObj.new("gameBgChanged", function (event, msg)        
        GameBase:getInstance():refreshBackGround()
    end))

    self:addChild(eventObj.new("cardFrameColorChanged", function (event, msg)        
        GameBase:getInstance():refreshCardFrameColor()
    end))

    self:addChild(eventObj.new("cardFrontSizeChanged", function (event, msg)        
        GameBase:getInstance():refreshCardFrontSize()
    end))

    --设置指牌器道具
    self:addChild(eventObj.new("changeShowMarker", function (event, msg)
        local pos = g_gameGlobal:getServerTablePlayerPosWithPosState(msg.posState) 
        if self.gameMainView and not tolua.isnull(self.gameMainView) then               
        end 
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
                        if self.tablePlayerTable[i] and self.tablePlayerTable[i] ~= 0 then 
                            self.tablePlayerTable[i]:setSex( v.sex)
                        end
                        break
                    end
                end
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

    self:addChild(netObj.new(g_msgDefinitions.MSG_WU_HU_BAO_JING_NOTIFY_MSG, function (event, msg)
        performWithDelay(self , function() 
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.pos)
            self.tablePlayerTable[posState]:wuhuBaoJing()
        end , 0.5)
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GET_WU_HU_SCORE_MSG_ACK, function (event, msg)
        if msg.result  == 0 then
            if #msg.simplePlayer > 0 then
                require("newgold.MatchGames.PDK.wuhuGameCurrentResults"):create(msg):addTo(g_gameGlobal:getGameScene(),g_gameConstant.ROOMCLOSEVIEW_ZORDER-1)
            else
                ShowToastMsg("暂无数据")
            end
            
        elseif msg.result  == 1 then
            ShowToastMsg("房间号错误")
        elseif msg.result  == 2 then
            ShowToastMsg("游戏未开始")
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

function GameBase:checkForceGpsWarning()
    
end


function GameBase:playVocie()
    
end

function GameBase:update(dt)
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

function GameBase:onPlayVoiceOver()
    --隐藏当前位置播放语音消息的动画
    if self.tablePlayerHeadImgTable[self._playingSeat] ~= 0 then
        self.tablePlayerHeadImgTable[self._playingSeat]:showChatVoice(false)
    end
self._playingSeat = nil
end

function GameBase:sendPlayerGpsData()

end

function GameBase:sendPlayerGpsDataTimer()
    
end


local function sendGpsAndIp_()

end

function GameBase:onEnter()


    release_print("--------GameBase:onEnter -------- " )
    -- GlobalEventManager:onEvent("cardFrontSizeChanged")
    
    GameBase.instance = self

    -- self:sendPlayerGpsDataTimer()

    local player = g_gameGlobal:getMyselfInfo()

    g_gameGlobal:uploadGpsData(true)

    eventMgr:registListener(eventType.gameStart, self, self.gameStart)

    self:onUpdate(handler(self,self.update))

    
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID= g_gameConstant.GAME_OPERTAION_QUERY_TABLE_DISMISS    --是否有人解散桌子
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)

    local function callback()
    end
    performWithDelay(self , callback , 0)
    self:showMarqueeView()
end
function GameBase:onExit()

    release_print("------GameBase------onExit------")
    GameBase.instance = nil
    self:hideMarqueeView()

    eventMgr:unregistListener(eventType.gameStart, self, self.gameStart)
    package.loaded["newgold.MatchGames.PDK.GameBase"] = nil
end

function GameBase:btnEventFunc(sender)
    if sender == self.chatBtn then
    elseif sender == self.gpsBtn then
    elseif sender == self.wuhuResults then
        local tableId = g_gameGlobal:getVipTableID() or 0
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_WU_HU_SCORE_MSG, {vipTableId = tableId})
    end
end

function GameBase:initRoomInfo( msgAck )


    release_print("------GameBase------initRoomInfo------")
    --增加时效道具属性
    for i = 0,3 do
        local key = string.format("player%dTimeItem",i)
    end
    -- dump(msgAck , "msgAck")
    if (msgAck ~= nil) then

        

        -- 设置最大人数
        g_gameGlobal:setMaxPlayerNum( msgAck.unused1 )
        -- 设置是否房卡均摊
        g_gameGlobal:setFangFeiJunTan(msgAck.unused2)
        -- 解析具体玩法
        g_gameGlobal:setCurrentWanFa(msgAck.newPlayWay)
        g_gameGlobal:setWanfa2(msgAck.unused0)
        

        if g_gameGlobal:isPaofengMjDBZ() or g_gameGlobal:isWuHuMaJiang() or g_gameGlobal:isMaAnShan() then 
            self.jushuPreLabel:setString("第")
        end
        local way, wanfa2 = msgAck.newPlayWay, msgAck.unused0
        local strTable = g_gameGlobal.getWanfaString(way, wanfa2)
        local playerNum = msgAck.unused1
        local isJuntan = bit._and(way, g_gameConstant.GAME_FANG_FEI_JUN_TAN) == g_gameConstant.GAME_FANG_FEI_JUN_TAN
        local str
        for i,v in ipairs(strTable) do
            if g_gameGlobal:isPaofengMj() and msgAck.vipTableID < 10 then
                if v =="100分" then
                    --这里不知道为什么变成1000，测试反馈，先注释掉
                    --v = "1000分"
                end
            end
            if g_gameGlobal:isWuHuMaJiang() then
                if v == "三家出" then
                    if g_gameGlobal:getMaxPlayerNum() == 3 then
                        v = "两家出"
                    end
                end
            end
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
        local gameMainView = require("newgold.MatchGames.PDK.GameMainView"):create()
        gameMainView:setName("gameMainView")
        gameMainView:setWanfaLayer(str)
        gameMainView:setDelegate(self);

        self.gameMainView = gameMainView
        g_gameGlobal:getGameScene():addChild(gameMainView, g_gameConstant.GAMEMAINVIEW_ZORDER)
        
        local tableWaitView = g_gameGlobal:getGameScene():getChildByName("tableWait")
        tableWaitView:setWanfaLayer(str)

        --算嘴麻将
        if g_gameGlobal:isSuanZui() then
            self.gamePlaySuanzui = nil
        end

        if msgAck.vipTableID > 0 then    --VIP场
			-- 显示房间号
            self.tableID = msgAck.vipTableID
            g_gameGlobal:setVipTableID(msgAck.vipTableID)
			self.roomIdLabel:setString("房间号：" .. self.tableID)

            -- 总局数
			self.totalJuShu = msgAck.totalHand  
            g_gameGlobal:setCurTotalJuShu(msgAck.totalHand)
            -- 当前局数
			self.curJuShu = msgAck.currentHand
            if self.curJuShu == 0 then
                self.gameMainView:setVisible(false)
                tableWaitView:setGameModel(g_gameConstant.VIP_GAME_MODEL)
            else
                tableWaitView:hide()
                performWithDelay(self , function() 
                    tableWaitView = g_gameGlobal:getGameScene():getChildByName("tableWait")
                    if tableWaitView and not tolua.isnull(tableWaitView) then 
                        tableWaitView:removeSelf() 
                    end
                end , 0)

                self.gameMainView:setVisible(true)
               -- self.gpsBtn:setVisible(true)
            end
            -- 房主信息
			self.vipCreaterName=msgAck.creatorName
			self.createPlayerID = msgAck.createPlayerID
            
            gameMainView:modifyGameState(g_gameConstant.VIP_GAME_MODEL)
            self.leftCardBg:setVisible(true)

            if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JIAN_TING) then
                self.isJianting = true
                self.voiceBtn:setVisible(false)
                self.speakerBtn:setVisible(false)
            else
                self.voiceBtn:setVisible(false)
                self.speakerBtn:setVisible(false)
            end
            if g_gameGlobal:isXuanCheng() or g_gameGlobal:isXuanChengHongzhong() then
                if self.m_pChangeLuckIcon then
                    self.m_pChangeLuckIcon:setVisible(false)
                end
            end
            
        else
            -- 金币场
            g_gameGlobal:setCurTotalJuShu(0)
            tableWaitView:setGameModel(g_gameConstant.GOLD_GAME_MODEL)
            --这里要显示，是初中高级

            self.leftCardBg:setVisible(false)
            gameMainView:modifyGameState(g_gameConstant.GOLD_GAME_MODEL)     --金币场

            self.gameMainView:setVisible(false)
		end

        -- 保存我的座位号
        g_gameGlobal:setMyTablePos(msgAck.tablePos)

        -- 保存玩家信息，可能有多人,玩家信息根据座位号算出实际位置放到self.tablePlayerInfoTable中
        for i, v in pairs(msgAck.players) do
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
            if posState and posState >=1 and posState <=4 then
                if posState == 1 then
                    g_gameGlobal:setIsMyFangZhu((v.playerID == self.createPlayerID) and true or false)
                end
                self.tablePlayerInfoTable[posState] = v
            end
        end
        --根据玩家人数，创建玩家初始头像，并摆放位置
        if g_gameGlobal:getMaxPlayerNum() > 0 then
            for i = 1, g_gameGlobal:getMaxPlayerNum() do

                local posState = 1

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

                -- g_gameGlobal:fixPos(headImgView)

                self.tablePlayerHeadImgTable[posState] = headImgView
                
                -- 更新头像数据 
                local  playerInfo = self.tablePlayerInfoTable[posState]
                if playerInfo ~= 0 then
                    headImgView:updateTablePlayerInfo(playerInfo)
                    headImgView:setTuoGuanState(playerInfo.canFriend == 1)
                end

                headImgView:registerScriptHandler(function (event)
                    if event == "exit" then
                        headImgView:clearEventTouch()
                        self.tablePlayerHeadImgTable[posState] = 0 
                    end
                end)
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

        if g_gameGlobal:isWuHuMaJiang() then
            self.wuhudi:show()
            self.line2:show()
            self.wuhuResults:show()
            if msgAck.curDi == 0 then
                msgAck.curDi = 1
            end
            local str = ""
            if msgAck.totalHand == g_gameConstant.WUHU_JUSHU_SET[1] then
                str ="底数："..msgAck.curDi.."/1"
            elseif msgAck.totalHand == g_gameConstant.WUHU_JUSHU_SET[2] then
                str = "底数："..msgAck.curDi.."/2"
            elseif msgAck.totalHand == g_gameConstant.WUHU_JUSHU_SET[3] then
                str ="底数："..msgAck.curDi.."/3"
            end
            self.wuhudi:setString(str)
            self.wuhudi:setPositionX(310)
            self.roomIdLabel:setPositionX(150)
            self.timeLabel:setPositionX(500)
            self.line2:setPositionX(367)
            self.line1:setPositionX(255)
            
        end
      
        --入场动画
        if self.tablePlayerHeadImgTable[1] and not tolua.isnull(self.tablePlayerHeadImgTable[1]) then
        end
	end
    --召回用户添加引导界面
    self:showGuidePanel()
end

function GameBase:onReadyStateChange(data)
    if self.tableID and self.curJuShu and self.curJuShu == 0 then
        for tpos,v in pairs(data) do
            local tpos = tonumber(tpos)
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tpos)
            if self.tablePlayerHeadImgTable[posState] ~= 0 and self.tablePlayerInfoTable[posState] ~= 0 then 

                local player = g_gameGlobal:getMyselfInfo()
                local tablePos = player.tablePos

                local isReady = (v[1] == 1)

                if posState == 1  then 
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
                            if v ~= 0 and self.tablePlayerInfoTable[i] ~= 0 then
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


--得到在牌桌上显示的所有的牌
function GameBase:getAllPlayerCardsOnTable(exceptAnGang)
    local ret = {}
    for k, player in pairs(self.tablePlayerTable or {}) do
        if player ~= 0 then 
            local cards = player:getOnTableCards()
            for i,v in ipairs(cards) do

                local isExcept = false
                if exceptAnGang and v.isAnGangAllHide then 
                    isExcept = true
                end
                if not isExcept then 
                    ret[#ret+1] = v
                end
            end
        end
    end
    return ret
end

--得到在牌桌上显示的所有的牌的张数
function GameBase:getAllPlayerCardsOnTableCount(cardValue , exceptAnGang)
    local ret = self:getAllPlayerCardsOnTable(exceptAnGang)
    local count = 0
    for i,v in ipairs(ret) do
        local value = v:getTag()
        if cardValue == value then 
            count = count+ 1
        end
    end

    local fanValue = g_gameGlobal:getFanCardValue()
    if cardValue == fanValue then
        count = count+ 1
    end
    return count
end

--得到桌子上胡牌数量
function GameBase:gethucardTableCount(cardValue)
    local count = 0
    for k, player in pairs(self.tablePlayerTable or {}) do
        if player ~= 0 then 
            local card = player:getXuanchenghucard()
            if cardValue == card then
                count = count +1
            end
        end 
    end
    return count
end


function GameBase:checkWarningTip()

end

function GameBase:refreshTooNearMark()

end


function GameBase:updateSpeakerBtnState(  )
    if self.speakerOpen then
        self.speakerBtn:loadTextures("MatchAH/".."nozip/speaker_on.png", "MatchAH/".."nozip/speaker_on.png", "",ccui.TextureResType.plistType)
    else
        self.speakerBtn:loadTextures("MatchAH/".."nozip/speaker_off.png", "MatchAH/".."nozip/speaker_off.png", "",ccui.TextureResType.plistType)
    end
end

function GameBase:onSpeakerOpen()
    
end

function GameBase:timeSchedule()
    local scheduler = cc.Director:getInstance():getScheduler()
    local function scheduleFunc(dt)
        if self.timeLabel then
            self.timeLabel:setString(os.date("%Y-%m-%d   %X"))
        end
        --TODO test 测试电池电量和网络状态
        local networkStr = {"UNCONNECTED","WIFI","WWAN"}

        if self.startDaoJiShi  and  not tolua.isnull(self.leftTime) then
            local timeStr = self.leftTime:getStringValue()
            local leftTime = tonumber(timeStr) or 0
            if leftTime > 0 then
                leftTime = leftTime - 1
            else
                leftTime = 0
                self.startDaoJiShi = false
            end

            if leftTime == 2 and self.startDaoJiShi then 
                if self.myCountTime then
                    g_gameGlobal:vibrate(0.1)
                end
            end
            
            if leftTime == 1 and self.startDaoJiShi  then 
                if self.myCountTime then
                    g_gameGlobal:vibrate(0.1)
                end
            end

            self.leftTime:setStringValue(leftTime)
        
        end
    end


    schedule(self.timeLabel ,scheduleFunc , 1 )

    -- self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, 1 , false)
end

function GameBase:gameOperation(msg)
    if g_gameGlobal:getIsPlayingGameLog() then
        return 
    end

    release_print("GameBase:gameOperation operation: " .. tostring(msg.opertaionID))


    if msg.opertaionID==g_gameConstant.GAME_OPERTAION_PLAYER_LEFT_TABLE then
        -- 移除player
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
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
            self.tablePlayerHeadImgTable[posState]:updateTablePlayerInfo(simplePlayer)

            self.tablePlayerHeadImgTable[posState]:setTuoGuanState(msg.canFriend == 1)

            local isReady = msg.isReady
            local tablePos = msg.tablePos
            local enterTime = msg.enterTime
            self:onReadyStateChange({ [tablePos..""] = {isReady,enterTime}})
            --添加玩家道具属性、注意每一小局都会重新添加一次
            --入场动画
            performWithDelay(self, function() 
                if self.tablePlayerHeadImgTable[posState] and not tolua.isnull(self.tablePlayerHeadImgTable[posState]) then
                    local isReverse = false
                    if posState == 1 or posState == 4 then
                        isReverse = true
                    end
--                    g_gameGlobal.tableWaitingHeadPosTbl[posState].head,isReverse)
                    local aniParent = self.tablePlayerHeadImgTable[posState]
                    if  self.tablePlayerTable[posState]~= 0 then
                        aniParent = self.tablePlayerTable[posState]
                    end
                end
            end, 0.2)
            --显示头像框
            if self.tablePlayerHeadImgTable[posState]~= 0 then
            end
        end
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_ROOM_DISMISS then 
        ShowConfirmBox("房主已经离开，房间自动解散。")
        g_gameGlobal:backToLobby()
    elseif msg.opertaionID==g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then 
        CloseAllPopMsgView()
        -- 解散房间同意框
        if self.jiesanView and not tolua.isnull(self.jiesanView) then
            self.jiesanView:removeSelf()
        end

        local function callback()
            self.jiesanView = require("newgold.MatchGames.PDK.JieSanView"):create()
            self.jiesanView:setName("jiesanView")
            g_gameGlobal:getGameScene():addChild(self.jiesanView, g_gameConstant.JIESANROOMVIEW_ZORDER)
            self.jiesanView:updateJieSanInfo(msg, self.tablePlayerInfoTable)
        end

        performWithDelay(self ,callback , 0)
    elseif msg.opertaionID == g_gameConstant.GAME_OPERATION_DO_READY_GO then 
        local isReady = msg.isReady
        local tablePos = msg.tablePos
        local enterTime = msg.enterTime
        self:onReadyStateChange({ [tablePos..""] = {isReady,enterTime}})
    elseif msg.opertaionID == g_gameConstant.MAHJONG_OPERTAION_HUAN_SAN_ZHANG then 

        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)

        self.tablePlayerTable[posState]:setChooseCardState(1)
        -- self.tablePlayerTable[posState]:updateChooseState()
    -- elseif msg.opertaionID == g_gameConstant.MAHJONG_OPERTAION_HUAN_SAN_ZHANG_OVER then 

    --     print("d-dddd")
    --     self.tablePlayerTable[posState]:setChooseCardState(2)
    elseif msg.opertaionID == g_gameConstant.MAHJONG_OPERTAION_SET_CLEAR_COLOR_ACK_TABLE then
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)

        if self.tablePlayerTable[posState] ~= 0 then 
            self.tablePlayerTable[posState]:setChoosingState(1)
        end

    end
end

    -- 根据人数创建对应的牌布局
function GameBase:createTablePlayerWithMaxNum( maxNum )
    self.tablePlayerTable[1] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerMy").new()
    if maxNum == 2 then
        self.tablePlayerTable[3] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerOpp").new()
    elseif maxNum == 3 then
        self.tablePlayerTable[4] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerLeft").new()
        self.tablePlayerTable[2] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerRight").new()
    elseif maxNum == 4 then
        self.tablePlayerTable[4] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerLeft").new()
        self.tablePlayerTable[3] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerOpp").new()
        self.tablePlayerTable[2] = require("newgold.MatchGames.PDK.tablePlayer.TablePlayerRight").new()
    end


    for i=4,1 , -1 do
        local v = self.tablePlayerTable[i] 
        if v and v ~= 0 then
            if g_gameGlobal:iSallroundScreen() and  i == 4 then --if device.model == "iphonex" and  i == 4 then 
                local initX , initY = v:getPosition()
                v:setPosition( g_gameGlobal:getFixPosX(20) + initX , initY )
            end

            g_gameGlobal:getGameScene():add(v)
            
            if self.tablePlayerInfoTable[i] ~= 0 then 
                v:init(self.tablePlayerInfoTable[i].sex, maxNum)
            end
            
            if i == 1 then
                v:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER + 1)
            else
                v:setLocalZOrder(g_gameConstant.TABLEPLAYERBASE_ZORDER)
            end

            v:registerScriptHandler(function (event)
                if event == "exit" then
                    self.tablePlayerTable[i] = 0
                end
            end)
        end

    end

end

function GameBase:gameStart( msg )
    -- print("___________________________游戏开始的数据")
    -- dump(msg)
    -- local msg = event._usedata
    g_gameGlobal:setIsPlayingGameLog(false)
    --self.gpsBtn:setVisible(true)
    g_gameGlobal:setFanCardValue(0)
    g_gameGlobal:setCurrentWanFa(msg.newPlayWay)
    g_gameGlobal:setWanfa2(msg.wanfa2)
    g_gameGlobal:setMaxPlayerNum(msg.unused2)
    g_gameGlobal:setFanCard(msg.unused0)--设置fan

    
    --   【【【方法不管用，暂时没法解决，因为如果一个人返回大厅，另外的人也返回大厅，而服务器因为没有返回消息说牌桌结束，导致以后一直进不去牌桌了】】】
    -- if not self.tableID then
    --     -- 为了避免，金币场有两个人以上，一个人返回大厅，另外的人还在牌桌里，这时在大厅的点击加入房间，先出现加入房间界面，再进入的房间
    --     if msg.unused4 > 1 then
    --         g_gameGlobal:setIsInPaiZhuo(true)
    --     end
    -- end


    self.gameMainView:setVisible(true)
    
    if g_gameGlobal:isSuanZui()  then 
        g_gameGlobal:setFengCard(msg.unused0)
    end

    local tableWait = g_gameGlobal:getGameScene():getChildByName("tableWait")
    if tableWait and not tolua.isnull(tableWait) then
        tableWait:closeView()
    end
       
    local fangweiAni = sp.SkeletonAnimation:create("spine/zhuanpan/dnxib.json", "spine/zhuanpan/dnxib.atlas", 1)
    self.fangweiBg:addChild(fangweiAni)
    self.fangweiAni =fangweiAni

    self.fangweiAni:hide()

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.dealerPos)

    local rotation = 0
    if posState == 2 then
        rotation = 270
    elseif posState == 3 then
        rotation = 180
    elseif posState == 4 then
        rotation = 90
    elseif posState == 1 then 
        rotation = 0
    end
    self.fangwei:setRotation(rotation)

    fangweiAni:align(cc.p(0.5,0.5), self.fangweiBg:getContentSize().width/2, self.fangweiBg:getContentSize().height/2)
    
    -- self.fangweiAni:setRotation(rotation)
    self.fangweiMap = self.fangWeiAnims[posState]


    -- 加载方位，设置等
    if not (g_gameGlobal:isJinZhai() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JINZHAIMJ_PAOZUI)) then
        self.fangweiBg:setVisible(true)
    end
    -- 更新头像位置以及更新金币和房卡数
    for i, v in pairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            -- 将新头像位置从等待界面切换为游戏界面
            v:updateHeadImgPosWithTablePos()
            if self.tablePlayerInfoTable[i] ~= 0 then
                -- 更新金币数和房卡数
                local tablePos = self.tablePlayerInfoTable[i].tablePos
                local goldNum = msg["player" .. tablePos .. "Gold"]
                local diamondNum = msg["player" .. tablePos .. "Win"]
                if g_gameGlobal:isSuanZui() then
                    goldNum = goldNum / 100
                end
                v:refreshGoldNum(goldNum, diamondNum)

                if g_gameGlobal:isWuHuMaJiang() then
                    local diScore = msg["wuHuDiFen".. tablePos]
                    local jiaoScore = msg["players".. tablePos .."BombSorce"]
                    v:setWuhuScore(diScore,jiaoScore)
                elseif g_gameGlobal:isMaAnShan() then
                    local diScore = msg["wuHuDiFen".. tablePos]
                    local extraScore = msg["players".. tablePos .."BombSorce"]
                    v:setMaAnShanScore(diScore, extraScore)
                end
            end
        end
    end

    -- 庄位置
    local zhuangPos = msg.dealerPos
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(zhuangPos)
    self.tablePlayerHeadImgTable[posState]:zhuangVisible(true)


    if g_gameGlobal:isPaofengMjDBZ() and msg.isDealerAgain > 1 and self.tableID then 
        self.tablePlayerHeadImgTable[posState]:lianZhuang(msg.isDealerAgain)
    end


    -- 房主位置
    local fangzhuPos = bit._and( bit._rshift(msg.baoCard,8) , 0xff)
    if self.tableID then
        posState = g_gameGlobal:getTablePlayerPosWithTablePos(fangzhuPos)
        self.tablePlayerHeadImgTable[posState]:fangzhuVisible(true)
    end

    -- 设置局数

    if g_gameGlobal:isPaofengMjDBZ() or g_gameGlobal:isWuHuMaJiang() or g_gameGlobal:isMaAnShan() then 
        self.jushu:setString(msg.quanNum)
    else
        local jushu = bit._and(msg.baoCard, 0xff) - msg.quanNum
        self.jushu:setString(jushu)
    end

    if g_gameGlobal:isWuHuMaJiang() then
        self.wuhudi:show()
        self.line2:show()
        self.wuhudi:setString("底数："..msg.bombNum.."/"..msg.blueTeamCardValue)
        self.wuhudi:setPositionX(310)
        self.roomIdLabel:setPositionX(150)
        self.timeLabel:setPositionX(500)
        self.line2:setPositionX(367)
        self.line1:setPositionX(255)
        
    end

    

    self.playerOperationTime = msg.playerOperationTime
    if self.playerOperationTime < 5 then
        self.playerOperationTime = 5
    end

    self:showLeftTimeAndFangWei(msg.chuCardPlayerIndex,self.playerOperationTime)

    -- local isHuanSan = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_RULE_HUAN_SAN_ZHANG ) 
    -- if(isHuanSan)then
    --     g_gameConstant.XIPAI_ANIMATION_TIME = 4
    -- else
        g_gameConstant.XIPAI_ANIMATION_TIME = 3
    -- end
    -- if (g_gameGlobal:isNewTongLing() and bit._and(msg.wanfa2, g_gameConstant.GR2_TONG_LING_JIA_PEIZI) == g_gameConstant.GR2_TONG_LING_JIA_PEIZI )then
    --     g_gameConstant.XIPAI_ANIMATION_TIME = 3
    -- end
    
        if g_gameGlobal:isSuanZui() then
            local maxNum = msg.unused2
            self:createTablePlayerWithMaxNum(maxNum)
            if msg.isRecover ~= 1 then --不是重连
                self.gamePlaySuanzui:showZhiShaiZi() 
                performWithDelay(self, function()
                    self:xipaiFinishShowCard(msg)
                end ,  g_gameConstant.DICE_ANIMATION_TIME)
            else --重连
                if self.gamePlaySuanzui then
                    self.gamePlaySuanzui:initView()
                end
                self:xipaiFinishShowCard(msg)
            end
        else 
            self:xipaiFinishShowCard(msg)
        end
        

    if not g_gameGlobal:isGoldRoom() and (g_UserDataTable.m_enterType == g_gameConstant.GAME_MJ) then
        if(self.Panel_ShuffleHint) then
            self.Panel_ShuffleHint:showShuffleGuiderAni(msg.isRecover == 1)
            if msg.isRecover ~= 1 then
                self.Panel_ShuffleHint:setShuffleChooseState(false) 
            end
            if self.totalJuShu == self.curJuShu+1 then
                print("totalJuShu ="..self.totalJuShu.." - curJuShu ="..self.curJuShu)
                self.Panel_ShuffleHint:setShuffleChooseState(true)
            end
        end
    end
    if g_gameGlobal:isNewTongLing()  and bit._and(msg.wanfa2, g_gameConstant.GR2_TONG_LING_JIA_PEIZI) == g_gameConstant.GR2_TONG_LING_JIA_PEIZI then
        for i=0,3 do
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(i)
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                local isChoose = msg["players".. i .."XiSorce"]
                self.tablePlayerHeadImgTable[posState]:tonglingJiaVisible(isChoose)
--                --这里再刷新一下转运表情按钮的位置，根据自身和上家的位置
--                if(self.m_pChangeLuckIcon) then
--                    self.m_pChangeLuckIcon:updateLuckIconPosition(self.tablePlayerHeadImgTable)
--                end
            end
        end
    end   
    -- 显示扣了多少服务费
    if msg.serviceGold > 0 then
        ShowToastMsg("每局收取服务费" .. msg.serviceGold .. "金币")
    end
    if msg.BeiCuiPai == 1 then
        self:cuipaiShakeAnimation()
    end
    --加入压牌器动画
    for i = 0,3 do
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(i)
        if self.tablePlayerHeadImgTable[posState] and not tolua.isnull(self.tablePlayerHeadImgTable[posState]) then
        end
    end
    --加入步时器动画
    local clockAni = ccui.ImageView:create()
    local myTablePos = g_gameGlobal:getMyTablePos()
    if self.fangweiBg then
        self.fangweiBg:addChild(clockAni)
        --clockAni:setScale(1.5)
        clockAni:setPosition(cc.p(self.fangweiBg:getContentSize().width/2,self.fangweiBg:getContentSize().height/2))
        clockAni:setLocalZOrder(-1)
    end

    --这里刷新一下转运表情按钮的位置，根据自身和上家的位置
    if(self.m_pChangeLuckIcon) then
        self.m_pChangeLuckIcon:updateLuckIconPosition(self.tablePlayerHeadImgTable)
    end
end

function GameBase:showQueMenu(fromHuan)


    --da bu ding 
    for i,v in ipairs( self.tablePlayerTable) do
            if v~= 0 and i ~= 1 then 
                local outcards = v:getOnTableCards()
                if outcards and #outcards > 0 then 
                    return 
                end
            end
        end
    

    self.gameMainView:hideChooseCardMenu()

    local chooseType = self.tablePlayerTable[1]:getMinNumType()
    GlobalEventManager:onEvent("recommondQueType" , chooseType )

    if fromHuan then 
        for i,v in ipairs( self.tablePlayerTable) do
            if v~= 0 and i ~= 1 then 
                v:setChoosingState(0)
            end
        end
    end

    self.gameMainView:showQueMenu(function(color)
        local msg = {}
        msg.operation=g_gameConstant.MAHJONG_OPERTAION_SET_CLEAR_COLOR --设置缺门花色
        msg.player_table_pos=myTablePos;
        msg.opValue=color;
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msg)
        -- g_gameGlobal:setClearColor(color)
        -- self.tablePlayerTable[1]:resortAllCards()
        -- self.tablePlayerTable[1]:setClearColor(color)
        -- self.gameMainView:hideQueMenu()
    end)
end


function GameBase:chuZeng(score)
    local msg = {}
    msg.operation=g_gameConstant.MAHJONG_OPERTAION_KUN_FEN
    msg.player_table_pos= self.tablePlayerTable[1].tablePos
    msg.opValue=score
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msg)
    self.gameMainView:hideChuzengMenu()
end

function GameBase:xiaZhu(score)
    print("下注",score)
    local msg = {}
    msg.operation=g_gameConstant.MAHJONG_OPERTAION_KUN_FEN
    msg.opValue = score
    msg.player_table_pos = self.tablePlayerTable[1].tablePos
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msg)
    self.gameMainView:hideXiaZhuMenu()
end

function GameBase:kunFen(score)
    print(score, "捆分")
    local scores = {[0]=0, 5,10,20}
    local msg = {}
    msg.operation=g_gameConstant.MAHJONG_OPERTAION_KUN_FEN
    msg.opValue = scores[score]
    msg.player_table_pos = self.tablePlayerTable[1].tablePos
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msg)
    self.gameMainView:hideKunFenMenu()
end

function GameBase:huainingKunFen(score, wanfa)
    local valueMap = {0,1,2,1,2,3}
    local msg = {}
    msg.operation=g_gameConstant.MAHJONG_OPERTAION_KUN_FEN
    msg.opValue = valueMap[score]
    msg.card_value = valueMap[wanfa]
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msg)
    self.gameMainView:hideHuainingMenu()
end


-- 玩家出牌、吃牌、碰牌、听牌等消息
function GameBase:playerOperation(msg)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
	
	release_print("GameBase:playerOperation operation: " .. tostring(msg.operation))

    if self.tablePlayerTable[posState] == 0 then
        print("找不到这个玩家",posState)
        return 
    end


    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        self.gameMainView:hideHuainingMenu()

        -- local strs = { "自己" , "下家" , "对家" , "上家" }

        -- print("-x- = " , strs[posState]  , "出牌")
        if self.tablePlayerTable[1] ~= 0 then
            print("刷新手牌")
            self.tablePlayerTable[1]:refreshPlayerCards(msg.card_value, msg.handCards, msg.beforeCards, msg.downCards)
        end
        if posState == 1 then
            if (g_gameGlobal:isTongLing()  or g_gameGlobal:isNewTongLing() ) and msg.unused0 == g_gameConstant.MAHJONG_OPERTAION_JIA_HUN then
                if msg.card_value and msg.card_value > 0 then
                    self.tablePlayerTable[1]:chuOperation(msg.card_value)
                    NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForCardValue(bit._and(msg.card_value, 0xff), self.tablePlayerInfoTable[posState].sex))
                end
            end
            
        else
            self.tablePlayerTable[posState]:chuOperation(msg.card_value)
            self:showLeftCards(msg.cardLeftNum)
        end
        if g_gameGlobal:isNewTongLing() and msg.unused0 == g_gameConstant.MAHJONG_OPERTAION_JIA_HUN then
            if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) then
                if msg.card_value and msg.card_value > 0 then
                    self.tablePlayerHeadImgTable[posState]:tonglingJiaVisible(msg.chuOffset)
                    self.tablePlayerTable[posState]:tonglingJiaHunAnimation()
                end
            end
        end

        --打补丁， 有时候服务器 玩家是否在牌桌数据 intable 数据会出错
        --vip场次只要玩家出牌就把 玩家弄成在线状态
        if g_gameGlobal:getVipTableID() and not g_gameGlobal:hasWanfa2( g_gameConstant.GR2_OPTION_TUOGUAN_DAIDA ) then 
            self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
        end

        --扔宝
        if msg.unused0 and bit._and(msg.unused0, 0xff) == 1 then
            self.tablePlayerTable[posState]:playRenbaoAni()
        elseif g_gameGlobal:isXuanCheng() and g_gameGlobal:isLaiZi( msg.card_value) then
            self.tablePlayerTable[posState]:playRenbaoAni()
        --飞牌
        elseif (g_gameGlobal:isXiaGang() or g_gameGlobal:isSheXian()) and g_gameGlobal:isLaiZi( msg.card_value) then
            self.tablePlayerTable[posState]:playFeipaiAni()
        end

        -- 自己移动牌的时候就播放出牌声音  不用等服务器通知
        if posState ~= 1 then 
            NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForCardValue(bit._and(msg.card_value, 0xff), self.tablePlayerInfoTable[posState].sex))
        end

        if self.tablePlayerTable[1] ~= 0 then 
           self.tablePlayerTable[1]:refreshHuCardCount()
        end
    elseif  msg.operation == g_gameConstant.MAHJONG_OPERTAION_JINZHAI_JIAFAN then
        if g_gameGlobal:isJinZhai() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JINZHAIMJ_PAOZUI) then
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showJinZhaiJiaFan(true,msg.opValue)
            end
        end
    elseif  msg.operation == g_gameConstant.MAHJONG_OPERTAION_JINZHAI_JIAFAN_END then
        if g_gameGlobal:isJinZhai() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JINZHAIMJ_PAOZUI) then
            self.fangweiBg:setVisible(true)
            for i, v in pairs(self.tablePlayerTable) do
                if v ~= 0 then
                    v:showTableCards(true)
                end
            end
            if self._selectUI and not tolua.isnull(self._selectUI) then
                self._selectUI:removeFromParent()
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_TING then

        
        -- 亳州麻将，报嘴

     elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SET_BAO_TING_ACK then

        local opValue = msg.opValue
        if opValue == 1 then 
            if g_gameGlobal:isSuanZui() then
               
                self.tablePlayerTable[posState]:setTing(true) --听状态
                self.tablePlayerTable[posState]:setTingIndex(msg.unused1) --听index
                if posState == 1 then
                    self.tablePlayerTable[posState]:RefreshCardsAfterTing() --刷新手牌
                end 
                self.tablePlayerHeadImgTable[posState]:setTingIcon(msg.unused0 == 1) --更换图标
                self.tablePlayerHeadImgTable[posState]:showTingIcon(opValue == 1) --显示图标

                --声音，动画
                if msg.unused2 ~= 1 then --1是重连
                    local sexStr = self.tablePlayerInfoTable[posState].sex == 1 and "man" or "female"
                    local url = string.format( "sound/putonghua/%s/8.mp3" , sexStr )
                    if msg.unused0 == 1 then
                        url = string.format( "sound/putonghua/%s/baozui.mp3" , sexStr )
                    else
                        url = string.format( "sound/putonghua/%s/youzui.mp3" , sexStr )
                    end
                    self.tablePlayerTable[posState]:BaoZui() --动画
                    NG.soundManager:playMatchEffect(url)
                    self.tablePlayerTable[posState]:setTingIndex()
                else --重连刷新出牌，有风牌置灰 
                end   
                self.tablePlayerTable[posState]:RefreshChuCards()             
            else
                if self.tablePlayerTable[posState] ~= 0 then 
                    self.tablePlayerTable[posState]:setTing(true)
                end
                local sexStr = self.tablePlayerInfoTable[posState].sex == 1 and "man" or "female"
                local url = string.format( "sound/putonghua/%s/8.mp3" , sexStr )
                NG.soundManager:playMatchEffect(url)
                self.tablePlayerHeadImgTable[posState]:showTingIcon(opValue == 1)
            end
           
        end


    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SET_PIAO_HUA then
        self.tablePlayerHeadImgTable[posState]:setChuZeng(msg.card_value, msg.opValue)
        self.tablePlayerTable[posState]:setChuZeng(msg.card_value, msg.opValue)

    elseif msg.operation == -2147483648 then-- g_gameConstant.MAHJONG_OPERTAION_SCORE_UPDATE then
        --宣城杠牌胡牌立即减分
        self:subScoreOpertaion(msg)
        self.tablePlayerHeadImgTable[posState]:refreshGoldNum(msg.opValue, msg.cardLeftNum)
    
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SET_CLEAR_COLOR_ACK then 

        if self.tablePlayerTable[1] ~= 0 then 
            local color = msg.opValue
            g_gameGlobal:setClearColor(color)
            self.tablePlayerTable[1]:resortAllCards()
            self.tablePlayerTable[1]:setClearColor(color)
            self.gameMainView:hideQueMenu()
        end

    

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SET_CLEAR_COLOR then
    
        for i, v in pairs(self.tablePlayerInfoTable) do
            if v ~= 0 then
                local tablePos = v.tablePos
                local cc = bit._and(msg.opValue * (2^ (-tablePos*8)), 0xff)
                if self.tablePlayerTable[i] ~=0 then

                    self.tablePlayerTable[i]:setClearColor(cc ,self.tableID)
                    self.tablePlayerTable[i]:clearState()
                    if i == 1 then
                        g_gameGlobal:setClearColor(cc)
                    end
                end
            end
        end
        --隐藏定缺菜单
        self.gameMainView:hideQueMenu()

    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG)   then
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end
        self.tablePlayerTable[posState]:chiPengGangOperation(msg, true,msg.player_table_pos)
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

        -- 播放音效
        NG.soundManager:playMatchEffect(g_gameGlobal:getEffectFileForOperation(g_gameConstant.OPERATION_GANG, self.tablePlayerInfoTable[posState].sex))

        if msg.opValue ~= g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
             for i, v in pairs(self.tablePlayerTable) do
                if v ~= 0 then
                    v:removeChuCard()
                end
            end
        end
        self.tablePlayerTable[posState]:chiPengGangOperation(msg, true,msg.player_table_pos)
        if self.gameMainView then
            self.gameMainView:hideMarker()
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_HUA then
        self.tablePlayerTable[posState]:playBuhuaAni()
        self.tablePlayerTable[posState]:buHuaOperation(bit._and(msg.card_value, 0xff))
    
    --换三张  选了三张牌返回
    elseif  g_gameGlobal:isXuanCheng() and msg.operation == g_gameConstant.MAHJONG_OPERTAION_HUAN_SAN_ZHANG then 

        local handCards = msg.handCards

        self.tablePlayerTable[posState]:setChooseCardState(1)

        if posState == 1 then 
            self.gameMainView:hideChooseCardMenu()
            self.tablePlayerTable[posState]:refreshHandCard(handCards)
        end

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HUAN_SAN_ZHANG_OVER then 

        local handCards = msg.handCards

        local huancards = {}
        
        local card_value = msg.card_value

        --huanType 1顺时换，2逆时换，3对家换
        local huanType = msg.chuOffset

        for i=1,3 do
            local value = bit._and(   bit._rshift( card_value , (i-1)*8 ) ,  0xff)
            table.insert( huancards , value )
        end

        if self.gameMainView then 
            self.gameMainView:hideChooseCardMenu()
        end
        

        for i,v in ipairs(self.tablePlayerTable) do
            if v ~= 0 then 
                if i == 1 then 
                    local people_num = g_gameGlobal:getMaxPlayerNum()
                    local huanCfg = {
                        [1] = "shun",
                        [2] = "ni",
                        [3] = "duihuan",
                    }


                    local huanStrCfg = {
                        [1] = "顺时针",
                        [2] = "逆时针",
                        [3] = "对家",
                    }

                    local tipBg = display.newSprite("game/huansanzhangbg1.png"):addTo(self.fangweiBg , 10):setPosition(self.fangweiBg:getContentSize().width/2,self.fangweiBg:getContentSize().height/2 )
                    
                    display.newSprite("#game/huanpaizhong.png"):addTo(tipBg):setPosition(tipBg:getContentSize().width/2,96):anchor(0.5,0)
                    
                    local textLabel = ccui.Text:create("本局"..huanStrCfg[huanType] .."换牌", "fonts/huakangyuanti.ttf", 32)
                    textLabel:addTo(tipBg):setPosition(tipBg:getContentSize().width/2, 31):anchor(0.5,0)

                    local function callback()
                        v:hszInsertCardAni(handCards , huancards)
                        tipBg:removeSelf()
                    end

                    performWithDelay(tipBg , function()

                        local colorCfg = { [0] = "y" , [1] = "g" , [2] = "b" }

                        local index = g_UserDataTable.gamePaibeiCfgIndex or 1

                        local aniStr =  colorCfg[index] .. "_"..people_num.."ren_"..huanCfg[huanType]
                        local sp = g_gameGlobal:playSkeletonAnimationOnce( "spine/game/huanpai" , aniStr , nil ,callback)  
                        sp:addTo(self.fangweiBg,11):setPosition( self.fangweiBg:getContentSize().width/2 , self.fangweiBg:getContentSize().height/2 )
                    end , 0.7 )

                end
                v:setChooseCardState(2)
            end
        end
    elseif (bit._and(msg.unused0, g_gameConstant.MAHJONG_OPERTAION_WASH_CARD) == g_gameConstant.MAHJONG_OPERTAION_WASH_CARD) then 
        if posState == 1 then
            if msg.unused2 == 10 then
                --表示房卡不足 不能洗牌
                ShowToastMsg("房卡不够，不能洗牌")
            elseif msg.unused2 == 11 then
                ShowToastMsg("金币不够，不能洗牌")
            end
        end
    end
end

function GameBase:subScoreOpertaion(msg)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    if self.tablePlayerTable[posState] == 0 or self.tablePlayerHeadImgTable[posState] == 0 then
        return 
    end
    local startpos = self.tablePlayerHeadImgTable[posState]:getHeadIconPos()
    local opScore = msg.card_value
    local label,str
    if opScore > 0 then
        str = "+"..opScore
        label = g_gameGlobal:newLabel({fontSize = 32, fontColor = cc.c3b(0,255,0)})
    elseif opScore <0 then
        str = tonumber(opScore)
        label = g_gameGlobal:newLabel({fontSize = 32, fontColor = cc.c3b(255,0,0)})
    end
    if label then
        self.gameMainView:addChild(label,1000)
        label:setString(str)
        label:setPosition(startpos.x, startpos.y-50)
        local seq = cc.Sequence:create({cc.DelayTime:create(0.5),cc.MoveBy:create(1.5,cc.p(0,50)),cc.DelayTime:create(0.5),cc.RemoveSelf:create()})
        label:runAction(seq)
    end
    if opScore < 0 then
        local pos = msg.chuOffset
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(pos)
        if not self.tablePlayerTable[posState] then
            return
        end
        local endpos = self.tablePlayerHeadImgTable[posState]:getHeadIconPos()
        for i=1,-opScore do
            local goldSp = cc.Sprite:create("MatchAH/noplist/gold.png")
            self.gameMainView:addChild(goldSp, 1000)
            goldSp:setPosition(startpos.x, startpos.y)
            goldSp:runAction(cc.Sequence:create({cc.DelayTime:create(0.05*i),cc.MoveTo:create(0.5, cc.p(endpos.x,endpos.y)),cc.RemoveSelf:create()}))
        end
    end
end

--游戏服务器通知客户端，轮到玩家操作了
function GameBase:playerOperationNotify(msg)
    if (bit._and(msg.unused0 or 0, g_gameConstant.MAHJONG_OPERTAION_WASH_CARD_OVER) == g_gameConstant.MAHJONG_OPERTAION_WASH_CARD_OVER)  then
        --洗牌结束 
        --这时候就开始将洗牌动画停止
        if self.tablePlayerTable[1] ~= 0 then
            --self.tablePlayerTable[1]:stopAllShuffleAnimation()
        end
        return
    end
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    -- 代开房的时候可能牌桌中没有自己
    -- if self.tablePlayerTable[posState] == 0 then
    --     return 
    -- end
    release_print("GameBase:playerOperationNotify operation: " .. tostring(msg.operation))

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
        self.tablePlayerTable[1]:showHuCardList(msg.tingList  )
        self:showLeftCards(msg.cardLeftNum)
        if msg.nMoCntAfterTing and msg.nMoCntAfterTing > 0 then
            if(self.m_pChangeLuckIcon) then
                self.m_pChangeLuckIcon:randShowZhuanYunPanel(msg.nMoCntAfterTing)
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU_CARD_LIST_UPDATE_NEW then
        -- 胡牌列表更新---新的
        self.tablePlayerTable[1]:showHuCardList(msg.tingList  )
        self:showLeftCards(msg.cardLeftNum)
        if msg.nMoCntAfterTing and msg.nMoCntAfterTing > 0 then
            if(self.m_pChangeLuckIcon) then
                self.m_pChangeLuckIcon:randShowZhuanYunPanel(msg.nMoCntAfterTing)
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLINE then
        -- 玩家返回桌子
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
            self.tablePlayerInfoTable[posState].offline = false
            ShowToastMsg(self.tablePlayerInfoTable[posState].playerName .. "回来了")
            self.tablePlayerHeadImgTable[posState]:setTuoGuanState(msg.unused0 == 1)
        end


    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_REMOE_CHU_CARD then
        -- 移除最后一张出的牌
        if self.tablePlayerTable[1] == 0 then return end
        self.tablePlayerTable[posState]:removeLastChuCard()
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_JINZHAI_JIAFAN_POWER then
        if g_gameGlobal:isJinZhai() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JINZHAIMJ_PAOZUI) then
            local remainSec = msg.jinzhaiJiafanRemainTime
            local jiafanInfo = msg.jinzhaiJiafanInfo
            for i = 0,g_gameGlobal:getMaxPlayerNum() - 1 do
                local posState = g_gameGlobal:getTablePlayerPosWithTablePos(i)
                if self.tablePlayerHeadImgTable[posState] ~= 0 then
                    local rShift = bit._rshift(jiafanInfo, i * 8)
                    local jiafanFlag = bit._and(rShift,0xff)
                    if jiafanFlag ~= 0xff then 
                        self.tablePlayerHeadImgTable[posState]:showJinZhaiJiaFan(true,jiafanFlag)
                    end
                end
            end
            local selectUI = require("newgold.MatchGames.PDK.PaoZuiUI"):create(remainSec)
            self._selectUI = selectUI
            self:addChild(selectUI,999)
            selectUI:setPosition(display.width/2,display.height/2)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_DICEINFO_NTF then
        --亳州算嘴，掷色子
        if msg.isRecover == 0 and g_gameGlobal:isSuanZui() then
            if self.gamePlaySuanzui then
                self.gamePlaySuanzui:setZhiShaiZi(msg.extJson)
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_DEALERPOINT_UPDATE then
        --亳州算嘴，涨庄  1重连时，2黄庄、连庄，3色子，4第一圈相同牌
        if  self.gamePlaySuanzui and g_gameGlobal:isSuanZui() then
            self.gamePlaySuanzui:UpdateFanView(msg.unused0)
            if msg.isRecover == 0 and msg.unused1 > 3 then
                self.gamePlaySuanzui:showZhangZhuang()
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_LIANGKAI_UPDATE then
        --亳州  亮开
        if  self.gamePlaySuanzui and g_gameGlobal:isSuanZui() then
            self.gamePlaySuanzui:UpdateGangView(msg.unused1)
            
        end
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        
        if self.tablePlayerTable[1] == 0 then return end

        local s = string.sub(msg.ext1,64)

        -- 打补丁: 金币场 有人出牌就隐藏 飘花按钮 ， 服务器不会发 设置飘花协议
        if g_gameGlobal:isSuSong() and not self.tableID then 
            self.tablePlayerTable[1]:hidePiaohuaMenu()
        end

        -- if g_gameGlobal:isHuangShan() or msg.ext1low == 1 then 
        if g_gameGlobal:isHuangShan() or s == "1" then
            self.tablePlayerTable[1]:setCouldDaLaizi(true)
        else
            self.tablePlayerTable[1]:setCouldDaLaizi(false)
        end


        local function callback()
            -- 服务器通知轮到玩家出牌(吃听、碰听之后也是走这里出牌)
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_CHU)

            -- if next(msg.prompTingList) ~= nil then 
            --     self.tablePlayerTable[1]:showHuCardList( {} , msg.prompTingList )
            -- end

            local autoBuHua=false --如果自动补花的时候，不要提示杠
            --是否摸了新牌，如果是断线回来，这个通知里面没有新牌
            if msg.chi_card_value ~= 0 then 
                autoBuHua = self.tablePlayerTable[1]:moCard( bit._and( msg.chi_card_value , 0xff ) , msg.operation  )
            end
            if g_gameGlobal:isNewTongLing() and (msg.operation == bit._or(g_gameConstant.MAHJONG_OPERTAION_CHU,g_gameConstant.MAHJONG_OPERTAION_AN_GANG)
                or msg.operation == bit._or(g_gameConstant.MAHJONG_OPERTAION_CHU,g_gameConstant.MAHJONG_OPERTAION_BU_GANG) ) then
                self.tablePlayerTable[1]:setTouchRightSpecial(true)
            end
            local showMenu = false
            if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_HU)
                showMenu = true
            end

            

            if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_TING)
                showMenu = true
            end

            if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_AN_GANG)
                showMenu = true
            end
            if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_BU_GANG)
                showMenu = true
            end

            if g_gameGlobal:isPaofengMj() and  (msg.unused0 == 1 or msg.unused0 == 2) then 
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
                showMenu = true
            end
            if g_gameGlobal:isNewTongLing() and msg.unused0 == 1 then
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
                showMenu = true
            end

            local showCantChuList = g_gameGlobal:isWuWeiMj() and #msg.tingList > 0

            if autoBuHua == false and (showMenu or showCantChuList) then
            	self.gameMainView:hideQueMenu()
                self.tablePlayerTable[1]:chiPengGangNotify(msg)
            end

            --更新当前操作玩家和时间（指向自己）
            self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
            self:showLeftCards(msg.cardLeftNum)
        end

        --下面函数保护执行， 可能会导致血战某些牌不能出(宣城 setCardCouldNotChu 之前不能报错  )
        if g_gameGlobal:isXuanCheng() and self.tableID then 
            self.leftCardBg:stopAllActions()
            performWithDelay(self.leftCardBg , function() 
                xpcall(function() 
                    callback()
                    self.tablePlayerTable[1]:setCardCouldNotChu(msg.chi_flag)
                end ,  __G__TRACKBACK__ )
            end , 0.1)
            
            
        else
            callback()
            self.tablePlayerTable[1]:setCardCouldNotChu(msg.chi_flag)
        end


        -- self.tablePlayerTable[1]:updateCardColor(msg.chi_flag)
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_TING then 

        if g_gameGlobal:isWuWeiMj() then 
            local showMenu = false
            if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING then
                -- self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_START_TING)
                showMenu = true
            end

            local hadTing = self.tablePlayerTable[1]:getTing()
            if not hadTing and showMenu then
                msg.notChuPlayer = true
                self.tablePlayerTable[1]:chiPengGangNotify(msg)
            end

        end
    elseif (g_gameGlobal:isWuWeiMj() or  g_gameGlobal:isSuanZui()) and msg.operation == g_gameConstant.MAHJONG_OPERTAION_BAO_TING then 
        
        self:showTingMenu()

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_AUTO_CHU then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_CHU)
            if msg.chi_card_value ~= 0 then
                self.tablePlayerTable[1]:moCard(bit._and(msg.chi_card_value, 0xff))
            end
            self.tablePlayerTable[1]:autoChu()
            self:showLeftCards(msg.cardLeftNum)
        end

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLY_ZIMO_TIME then
        if (msg.chi_card_value ~= 0) and (msg.player_table_pos == g_gameGlobal:getMyTablePos()) then
            self.tablePlayerTable[1]:moCard(bit._and(msg.chi_card_value, 0xff))
        elseif bit._and(msg.unused0, g_gameConstant.MAHJONG_OPERTAION_JIA_HUN) == g_gameConstant.MAHJONG_OPERTAION_JIA_HUN then
            --铜陵架混
            msg.operation=msg.unused0;
            self.tablePlayerTable[1]:chiPengGangNotify(msg)

        elseif g_gameGlobal:isSuSong() then
            if msg.unused1== 0x11 then
                self.gameMainView:showChuzengMenu(handler(self, self.chuZeng))
            elseif msg.unused1==0x10 then
                self.tablePlayerHeadImgTable[posState]:setChuZeng(msg.chi_flag,msg.unused2)
                self.tablePlayerTable[1]:showAllCards()

                self.gameMainView:hideChuzengMenu()

            end
        elseif msg.unused1 ==g_gameConstant.MAHJONG_OPERTAION_KUN_FEN then
            if msg.unused2 == 0 then
                if g_gameGlobal:isDongZhi() then
                    self.gameMainView:showXiaZhuMenu(handler(self, self.xiaZhu))
                elseif g_gameGlobal:isWangJiang() then
                    self.gameMainView:showKunFenMenu(handler(self, self.kunFen))
                end
            else
                local value
                if g_gameGlobal:isHuaiNing() then
                    value = msg.peng_card_value
                end
                self.tablePlayerHeadImgTable[posState]:setKunFenText(msg.chi_flag, value)
                self.tablePlayerTable[1]:showAllCards()
                self.gameMainView:hideHuainingMenu()
                self.gameMainView:hideKunFenMenu()
                self.gameMainView:hideXiaZhuMenu()
            end
        end
        self:showLeftCards(msg.cardLeftNum)

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OVERTIME_AUTO_CHU then
        -- 超时自动出
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
            self.tablePlayerTable[1]:repositionAllCards()
            self.tablePlayerTable[1]:overTimeAutoChu(msg.target_card)
            self:showLeftCards(msg.cardLeftNum)

            -- self.tablePlayerTable[1]:cancelSelectionOperation()
            self.tablePlayerTable[1]:setTuoGuanState(true)
        end
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG  then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setCurOperationState(msg.operation)
            self.tablePlayerTable[1]:chiPengGangNotify(msg)
            self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU then
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_HU)
        end
        self.tablePlayerTable[1]:chiPengGangNotify(msg)

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED then
        
        if self.tablePlayerTable[posState] ~= 0 then 

            -- if not g_gameGlobal:isXuanCheng() then 
            --     self.tablePlayerTable[posState]:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER)
            -- end
            if g_gameGlobal:isWuHuMaJiang()  then
                self.tablePlayerTable[posState]:huOperation(bit._and(msg.target_card, 0xff), msg.chi_card_value, msg.ext1, msg.ext2,msg.peng_card_value, msg.chi_flag,msg.unused1)
                if msg.unused0 ~= -1 then
                    local dianpaoPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)
                    self.tablePlayerTable[dianpaoPos]:wuhuDianPao()
                end
            else

                local dianpaoPos = -1
                if g_gameGlobal:isZZMaJiang() then 
                    dianpaoPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)
                end
                
                self.tablePlayerTable[posState]:huOperation(bit._and(msg.target_card, 0xff), msg.chi_card_value, msg.ext1, msg.ext2,msg.peng_card_value, msg.chi_flag , dianpaoPos)
            end
            for i, v in pairs(self.tablePlayerTable) do
                if v ~= 0 then
                    v:removeChuCard()
                end
            end
			--小计分重置跑风状态
            if g_gameGlobal:isNewTongLing() then
                self._isChoosePaoFeng = false
            end
        end
        if g_gameGlobal:isXuanCheng() then
            if msg.chi_flag == 0 then   --自摸
                if self.tablePlayerTable[1] ~= 0 then
                    self.tablePlayerTable[1]:removeZimoCard() 
                    self.tablePlayerTable[1]:refreshHuCardCount()
                end
            else                    --点胡
                if self.gameMainView then
                    self.gameMainView:hideMarker()
                end
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:removeChuCard()
            if self.tablePlayerTable[posState].refreshChuCards then
                --设置指牌器道具
                self.tablePlayerTable[posState]:refreshChuCards(msg.tingList)
            end
            self:showLeftCards(msg.cardLeftNum)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_TIP then
        self:showLeftCards(msg.cardLeftNum)
        self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
    --显示宝牌
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SHOW_TABLE_TIPS then
        if self.gameMainView then
            if msg.target_card == 1 then
                if g_gameGlobal:isWuHuMaJiang() then
                    local str = "最后"..msg.cardLeftNum.."张"
                    self.gameMainView:showTableTips(str)
                else
                    self.gameMainView:showTableTips("最后四张")
                end
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_CANCEL then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
            -- self.tablePlayerTable[1]:cancelSelectionOperation()
            self.tablePlayerTable[1]:setTuoGuanState(true)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND then
        if msg.target_card == 0 then
            ShowConfirmCancelBox("是否续房？", handler(self, self.extendRoom), handler(self, self.noExtendRoom))
        else
            ShowConfirmBox("请等待房主续房。")
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_SUCCESSFULLY then
        ShowToastMsg("续房成功！")
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_FAILED then
        ShowToastMsg("房卡不足，续房失败！")
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then
        ShowConfirmCancelBox("有玩家已经离开，是否关闭本房间？", nil, handler(self, self.closeVipRoomRuquest))
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_NO_START_CLOSE_VIP then
        g_gameGlobal:setIsInPaiZhuo(false)
        ShowConfirmBox("超时自动解散房间", handler(self, g_gameGlobal.backToLobby))
    
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SET_PIAO_HUA then  --宿松飘花
        self.tablePlayerTable[1]:showPiaoHuaMenu()

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_BU_HUA then
        
        if self.tablePlayerTable[posState] ~= 0 then 
            self.tablePlayerTable[posState]:playBuhuaAni()
            if posState == 1 then 
                self.tablePlayerTable[posState]:bu_hua_at_start(msg)
            else
                for i=1,#msg.tingList do
                    local cd = msg.tingList[i]
                    self.tablePlayerTable[posState]:buHuaOperation(bit._and(cd, 0xff))
                end
            end
        end
    end
end

function GameBase:showTingMenu()

    self.gameMainView:showTingMenu(function(isBaoTing) 

        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION,{
            operation = g_gameConstant.MAHJONG_OPERTAION_BAO_TING,
            opValue = isBaoTing and 1 or 0,
        })

        self.gameMainView:hideTingMenu()
    end)

end


function GameBase:playerOperationEx(msg)
    if #msg.operationList == 0 then
        return
    end

    if msg.operationList[1] == g_gameConstant.GAME_OPERATION_SHOW_CARDS_ACK then
        --通知客户端决定要不要明牌
        self.tablePlayerTable[1]:mingpaiOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DA_SHAI_ZI then
        --通知客户端决定要不要打骰子
        self.tablePlayerTable[1]:daTouZiOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG then
        --通知客户端决定要不要放冲 --放冲也代表游戏开始了。。
        self:startGameViewCheck()
        self.tablePlayerTable[1]:fangChongOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_MO_CARD_AT_LAST_4_CARDS then
        --通知客户端通可以决定是是否看牌
        self.tablePlayerTable[1]:kanGuoOperationNotify()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_COULD_SHOW_CARDS then
        --通知客户端通可以把隐藏的手牌亮出来开始打牌了
        for i,v in ipairs(self.tablePlayerTable) do
            if v~= 0 then
                v:showHandCards(true)
            end
        end        
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS then
        --GAME_OPERATION_PLAYER_SHOW_CARDS 通知有玩家亮牌
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        self.tablePlayerTable[posState]:mingpaiOperation(msg.valueList, msg.value)
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
            if self.tablePlayerTable[posState] ~= 0 then
                if posState ~= 1 then
                    isWaitOtherPlayerFangchong = msg.valueList[i] == -1 or isWaitOtherPlayerFangchong
                end
                self.tablePlayerTable[posState]:setFangChongState(msg.valueList[i])
                if self.tablePlayerHeadImgTable[posState] ~= 0 then
                    self.tablePlayerHeadImgTable[posState]:xzScore(msg.valueList[i])
                end
            end
            
        end
        self.tablePlayerTable[1]:setWaitOtherFangChongState(isWaitOtherPlayerFangchong)
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_CARD_INVALID then

        ShowConfirmBox("此牌不可打出", function() 
            local requestStartGameMsg = {}
            requestStartGameMsg.roomID = -1
            requestStartGameMsg.unused0 = 1
            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST, requestStartGameMsg)
        end  , true)
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_CARD_XIANG_JIA_BAO_TING then

        ShowConfirmBox("等待其他玩家操作后才能出牌", function() 
            local requestStartGameMsg = {}
            requestStartGameMsg.roomID = -1
            requestStartGameMsg.unused0 = 1
            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST, requestStartGameMsg)
        end , true)
    end
end

function GameBase:showLeftTimeAndFangWei(tablePos, leftTime)

    if leftTime > 11 then 
        leftTime = 11
    end

    self.leftTimeNum = leftTime

    self.leftTime:setStringValue(leftTime)
    self.startDaoJiShi = true

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
    self.myCountTime = false

    if self.tablePlayerTable[posState] ~= 0 then
        self.myCountTime = false
        if posState == 1 then
            self.myCountTime = true
        end
        -- self.fangweiAni:setToSetupPose()
        self.fangweiAni:show()
        self.fangweiAni:setAnimation(0, "fangweiBg"..posState, true)
        self.fangweiBg:loadTexture("MatchAH/".."nozip/fangweiBg"..posState..".png",ccui.TextureResType.plistType)

        -- 当前玩家头像转圈显示，其它不显示
        -- for i, v in pairs(self.tablePlayerTable) do
        --     if i == posState then
        --         v:touxiangSkeletonVisible(true)
        --     else
        --         if v ~= 0 then
        --             v:touxiangSkeletonVisible(false)
        --         end
        --     end
        -- end

        for i, v in pairs(self.tablePlayerHeadImgTable) do
            if i == posState then

                --麻将金币场取消托管
                if posState ~= 1  and not g_gameGlobal:getVipTableID() and self.tablePlayerTable[1]~=0 then 
                    self.tablePlayerTable[1]:hideOperationMenu()
                end

                v:touxiangSkeletonVisible(true)
            else
                if v ~= 0 then
                    v:touxiangSkeletonVisible(false)
                end
            end
        end

    end
end
function GameBase:showLeftCards(cardNum)
    if cardNum >= 0  then
        local oldLeftCardNum = tonumber(self.rightCardNum:getString())
        if (oldLeftCardNum - cardNum > 3) and (num == 0) then
            return 
        end
        self.rightCardNum:setString(cardNum)
    end
end

function GameBase:closeVipRoomRuquest(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
        playerTableOperationMsg.opValue = 2     --1是请求解散，2是同意解散
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end
-- 续卡
function GameBase:extendRoom(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.opertaion = g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end
-- 不续卡
function GameBase:noExtendRoom(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.opertaion = g_gameConstant.MAHJONG_OPERTAION_EXTEND_CARD_REMIND
        playerTableOperationMsg.opValue = 1
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
    end
end

function GameBase:doExitGameLogic()
    -- body
end

function GameBase:loadGpsHead( playerinfo,postate )
    if g_gameGlobal:getGameScene() ~= nil and g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then
        if not (self.curJuShu > 1) then
            local gpsLayer = self:getGpsLayer() --g_gameGlobal:getGameScene():getChildByName("fullview_gpsLayer")
            if  gpsLayer then
                gpsLayer:loadPlayerHead(playerinfo,postate)
            end
        end
    end
end

function GameBase:zhuanyunbiaoqing()
    
end

--洗牌完成显示手牌
function GameBase:xipaiFinishShowCard(msg)

    --设置番赖子
    local fancard
    if g_gameGlobal:isLiuAn() or g_gameGlobal:isHuangShan() or g_gameGlobal:isTongChengZiMo()
        or g_gameGlobal:isDongZhi() or g_gameGlobal:isQianShan() or g_gameGlobal:isTongLing() or g_gameGlobal:isNewTongLing()
        or g_gameGlobal:isXiaGang() or g_gameGlobal:isZongYang() or g_gameGlobal:isSheXian()  or g_gameGlobal:isPaofengMj() then
        fancard = bit._and(msg.unused0, 0xff)
        if g_gameGlobal:isTongLing() and not g_gameGlobal:isNewTongLing()  and bit._and( g_gameConstant.GAME_PLAY_TONGLING_FAN_LAIZI, msg.newPlayWay)==0 then
            fancard=0--铜陵红中玩法，不需要
        end
        if fancard > 0 then
            self.gameMainView:setFanLayer({fancard})
        end
    end
   
    -- 显示连庄提示
    if msg.isDealerAgain >= 1 then
        if self.gameMainView then
            self.gameMainView:showTableTips("恭喜庄家连庄！")
        end
    end
    -- 初始化牌面值,算嘴麻将在掷骰子阶段进行了牌局创建
    if not g_gameGlobal:isSuanZui()  then
        local maxNum = msg.unused2
        self:createTablePlayerWithMaxNum(maxNum)
    end
    local myClearColor = 0xff
    for i, v in pairs(self.tablePlayerTable) do
        if v ~= 0 then
            v:initPaiMianValue(msg)
            --金寨跑嘴隐藏手牌
            --if i == 1 then
                if g_gameGlobal:isJinZhai() and g_gameGlobal:hasWanfa2(g_gameConstant.GR2_JINZHAIMJ_PAOZUI) then
                    v:showTableCards(false)
                end
            --end
            -- 显示胡牌列表
            if self.tablePlayerInfoTable[i] ~= 0 then



                if g_gameGlobal:isXuanCheng() then
                    local tablePos = self.tablePlayerInfoTable[i].tablePos
                    local huCard = bit._and(msg.unused1 * 2^(-tablePos*8), 0xff)
                    local playerFlag = msg.playerFlag
                    local ff = bit._and( bit._rshift( playerFlag ,6 * tablePos ) , 0x3f)

                    local huorder = bit._and( ff,0xf)
                    local zimoDianPao = bit._and( bit._rshift(ff,4) ,0x3)
                    
                    if huCard > 0 then
                        v:showHuCard(huCard)
                        v:showTingIcon(true , huorder , zimoDianPao)
                    end
                else

                end
                    
                local tablePos = self.tablePlayerInfoTable[i].tablePos
                if #msg["player" .. tablePos .. "Cards"] > 0 then
                    v:showChuCards(msg["player" .. tablePos .. "Cards"])
                end
                if #msg["player" .. tablePos .. "CardsDown"] > 0 then
                    v:showChiPengGangCards(msg["player" .. tablePos .. "CardsDown"],false)
                end

                if i == 1 then 
                    self.tablePlayerTable[1]:setTuoGuanState(self.tablePlayerInfoTable[i].canFriend == 1)
                end

                -- if g_gameGlobal:isWuWeiMj() then 
                --     if bit._and(msg.tingPlayers * (2^ (-tablePos*8)), 0xff) > 0 then
                --         v:setTing(true)

                --         if self.tablePlayerHeadImgTable[i] then
                --             self.tablePlayerHeadImgTable[i]:showTingIcon(true);
                --         end
                --     end
                -- end

                local isRecover = msg.isRecover == 1

                
                if bit._and(msg.OffLinePlayers * (2^ (-tablePos*8)), 0xff) > 0 then
                    -- 显示离线图标
                    if self.tablePlayerHeadImgTable[i] ~= 0 then
                        self.tablePlayerHeadImgTable[i]:visibleOffline(true , self.tablePlayerInfoTable[i].gameResult)
                    end
                end

                if g_gameGlobal:isXuanCheng() then
                    local clearColor = bit._and(msg.unused0 * (2^ (-tablePos*8)), 0xff)
                    
                    
                    v:setClearColor(clearColor)
                    
                    
                    if tablePos == msg.myTablePos then
                        myClearColor = clearColor
                    end


                    local state = msg["player"..tablePos.."IsMingPai"]
                    local hasHuan = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_RULE_HUAN_SAN_ZHANG )
                    if hasHuan then 
                        v:setChooseCardState( state , true )
                    end

                    local isAllChoose = false
                    
                    local chooseCount = 0
                    for i=0,3 do
                        local isChoose = msg["players".. i .."XiSorce"] == 1
                        if isChoose then 
                            chooseCount = chooseCount + 1
                        end
                    end

                    if chooseCount == maxNum then
                        isAllChoose = true
                    end

                    if not isAllChoose then 
                        local status = msg["players".. tablePos .."XiSorce"]
                        if hasHuan and state == 2 then 
                            v:setChoosingState( status )
                        elseif not hasHuan then 
                            v:setChoosingState( status )
                        end
                    end

                elseif g_gameGlobal:isMaAnShan() then
                    local clearColor = bit._and(msg.unused0 * (2^ (-tablePos*8)), 0xff)
                    v:setClearColor(clearColor)
                    if tablePos == msg.myTablePos then
                        myClearColor = clearColor
                    end
                elseif g_gameGlobal:isSuSong() then
                    local  chuzeng = bit._and(msg.playerFlag1 * (2^ (-tablePos*8)), 0xff)
                    if chuzeng==0xff then
                        chuzeng=-1;
                    end

                    local piaohua = bit._and(msg.playerFlag2 * (2^ (-tablePos*8)), 0xff)
                    if piaohua==0xff then
                        piaohua=-1;
                    end
                    if self.tablePlayerHeadImgTable[i] then
                        self.tablePlayerHeadImgTable[i]:setChuZeng(chuzeng,piaohua);
                    end
                elseif g_gameGlobal:isWangJiang() or g_gameGlobal:isDongZhi() or g_gameGlobal:isHuaiNing() then
                    local kunfen = 0
                    if g_gameGlobal:isDongZhi() then
                        kunfen = bit._and(msg.playerFlag2 * (2^ (-tablePos*8)), 0xff)
                    else
                        kunfen = bit._and(msg.unused0 * (2^ (-tablePos*8)), 0xff)
                    end
                    local huaining
                    if g_gameGlobal:isHuaiNing() then
                        huaining = bit._and(msg.playerFlag1 * (2^ (-tablePos*8)), 0xff)
                    end
                    if self.tablePlayerHeadImgTable[i] ~= 0 then
                        self.tablePlayerHeadImgTable[i]:setKunFenText(kunfen, huaining)
                    end
                elseif g_gameGlobal:isWuWeiMj() and isRecover then 


                    -- local status = bit._and(msg.unused0 * (2^ (-tablePos*8)), 0xff)

                    local status = msg["players"..tablePos.."XiSorce"]
                    -- local str = "players0XiSorce = " .. msg.players0XiSorce .. " ,players1XiSorce = " ..msg.players1XiSorce .. " ,\n players2XiSorce = " ..msg.players2XiSorce .. " ,players3XiSorce = " ..msg.players3XiSorce 
                    
                    if status == -1 and tablePos == msg.myTablePos then 
                        self:showTingMenu()
                    end

                    if self.tablePlayerHeadImgTable[i] and status == 1 then
                        self.tablePlayerHeadImgTable[i]:showTingIcon(true)
                    end

                    if self.tablePlayerTable[i] and status == 1 then
                        self.tablePlayerTable[i]:setTing(true)
                    end
                elseif g_gameGlobal:isWuWeiMj() and isRecover then 
                    --听牌标识
                    local status = msg["players"..tablePos.."XiSorce"]

                    if self.tablePlayerHeadImgTable[i] and (status == 1 or status == 2) then
                        self.tablePlayerTable[i]:setTing(true)
                        self.tablePlayerHeadImgTable[i]:showTingIcon(true)
                        self.tablePlayerHeadImgTable[i]:setTingIcon(status == 2)
                    end
                    --出牌风嘴

                end
            end
        end
    end

    if msg.chuCard ~= 0 then
        posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.chuCardPlayerIndex)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:chuOperation(msg.chuCard)
        end
    end

    local myTablePos = msg.myTablePos

    --宣城定缺花色
    

    if g_gameGlobal:isSuSong() then
        local flag = bit._and(msg.playerFlag, 0xff)
        if flag == 1 then
            self.tablePlayerTable[1]:hideAllCards()
            self.gameMainView:showChuzengMenu(handler(self, self.chuZeng))
        end
    elseif g_gameGlobal:isXuanCheng() then
        g_gameGlobal:setClearColor(myClearColor)

        local state = self.tablePlayerTable[1]:getChooseCardState()
        local isHuanSan = g_gameGlobal:hasWanfa2( g_gameConstant.GR2_RULE_HUAN_SAN_ZHANG ) 

        --小于2代表还没  完成选三张操作
        if isHuanSan and state < 2 then 
            --选牌
            if state == 0 then 
                self.gameMainView:showChooseCardMenu(function()
                    local handCards = self.tablePlayerTable[1]:getCardsInhand()
                    local selectCards = {}
                    for i,v in ipairs(handCards) do
                        if v.isSelected then 
                            table.insert(selectCards , v)
                        end
                    end

                    if #selectCards ~= 3 then 
                        ShowToastMsg("请选择三张同花色牌")
                        return 
                    end

                    if #selectCards == 3 then 
                        local cards = self.tablePlayerTable[1]:getCardsWithType(selectCards)
                        if table.nums(cards) ~= 1 then 
                            ShowToastMsg("请选择三张同花色牌")
                            return 
                        end
                    end


                    local values = 0
                    for i,v in ipairs(selectCards) do
                        local cardValue = v:getTag()
                        local value = bit._and( cardValue , 0xff )
                        values = bit._or( values ,  bit._lshift( value , (i-1)*8 )  )
                    end

                    local msg = {}
                    msg.operation=g_gameConstant.MAHJONG_OPERTAION_HUAN_SAN_ZHANG --换三张
                    msg.player_table_pos=myTablePos;
                    msg.opValue=values;
                    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, msg)
                    self.gameMainView:hideChooseCardMenu()
                end)

                self.tablePlayerTable[1]:setCurOperationState( g_gameConstant.MAHJONG_OPERTAION_CHOOSE_CARD )
            elseif state == 1 then 

            end
            
        elseif myClearColor == 0xff then
            self:showQueMenu()
        end
        self.tablePlayerTable[1]:resortAllCards()

    elseif g_gameGlobal:isWangJiang() or g_gameGlobal:isDongZhi() or g_gameGlobal:isHuaiNing() then
        local flag = bit._and(msg.playerFlag, 0xff)
        if flag == 1 then
            self.leftTime:setStringValue('')
           self.startDaoJiShi = false
            self.tablePlayerTable[1]:hideAllCards()
            if g_gameGlobal:isHuaiNing() then
                self.gameMainView:showHuainingMenu(handler(self, self.huainingKunFen))
            elseif g_gameGlobal:isDongZhi() then
                self.gameMainView:showXiaZhuMenu(handler(self, self.xiaZhu))
            elseif g_gameGlobal:isWangJiang() then
                self.gameMainView:showKunFenMenu(handler(self, self.kunFen))
            end
        end
    elseif g_gameGlobal:isMaAnShan() then
        g_gameGlobal:setClearColor(myClearColor)
        if myClearColor == 0xff then
            self:showQueMenu()
        end
        self.tablePlayerTable[1]:resortAllCards()
    end

    performWithDelay(self, function()
        self:checkWarningTip()
    end , 1)
end

--洗牌动画
function GameBase:xipaiAnimation(posState)
    
end

--催牌抖动动画
function GameBase:cuipaiShakeAnimation()
    
end

-- 头像点击事件
function GameBase:touxiangTouchEvent( sender , idx )
    
end

------------------------------------------------------------------------
--------------------------转运表情+听牌+免费赠送的begin
--添加转运道具的icon
function GameBase:addChangeLuckIcon()
    
end
-- 显示‘赠送道具界面’
function GameBase:showGetPropView(propData, activityTip)
    
end

function GameBase:showShopLayer( stype ,num, itemID)
    
end

-- 设置现金购买的物品id
function GameBase:setCashBuyItemId( itemId )
    self.selectedItemID = itemId
end

-- 调用实时语音的enterroom
function GameBase:callVoiceEnterRoom()
    
end

------------------------------------------------------------------------
--------------------------转运表情+听牌+免费赠送的end

--回归系统UIbegin
function GameBase:showGuidePanel()
    
end

function GameBase:showMarqueeView()
    
end

function GameBase:hideMarqueeView()
    
end


return GameBase��