local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local PokerGameBase = require("newgold.MatchGames.subPKGame.PKGamePublic.PokerGameBase")
local HeadImgView = require("newgold.MatchGames.GamePublic.HeadImgView")
local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local GameAudioParser = import("newgold.MatchGames.GamePublic.GameAudioParser")
local DDZGameBase = class("DDZGameBase",PokerGameBase)
local NewCardObj = import(".common.DDZNewCard")
local DDZCmd = require("newgold.MatchGames.subPKGame.ddzPokerGame.game.common.DDZCMD")
-- 头像层级
local HEADLAYERNUM = 10

function DDZGameBase:ctor(...)

    DDZGameBase.super.ctor(self, ...)

    self.timeNetScheduler = nil 

    self.netTypeGeted = false 

    self.logTimeStr = nil 

    self.isTipState = {} 
    
    self:initGameNode()
end 


-- 初始化游戏数据
function DDZGameBase:initGameData(msg)
    self.MainGamePlayRule = msg.MainGamePlayRule

    self.MinorGamePlayRuleList = msg.MinorGamePlayRuleList
    self.difen = 1
    for i, v in pairs(self.MinorGamePlayRuleList) do
        if v>g_gameConstant.GAME_SUB_RULE_DIFEN then 
            self.difen = v-g_gameConstant.GAME_SUB_RULE_DIFEN
            break
        end
    end

    --先创建四个玩家，因为有些麻将游戏开始前有操作
    self:createAllTablePlayer(self.MainGamePlayRule)

    if msg.vipTableID > 0 then    --VIP场
        -- 显示房间号
        self.tableID = msg.vipTableID
        -- 是否为俱乐部
        if not (not msg.clubId or msg.clubId==0) then
            self.isClub = true
            self.clubId = msg.clubId
            self.clubInviteBtn:setVisible(true)
            
            -- 人未满可换桌
            self.changeRoomBtn:setVisible(#msg.players < g_gameGlobal:getMaxPlayerNum() and g_gameConstant.CLUB_CHANGE_TABLE_ENABLED)
        else
            self.readyBtn:setPositionY(self.changeRoomBtn:getPositionY())
        end
        -- 总局数
        self.totalJuShu = msg.totalHand 
        -- 当前局数
        self.curJuShu = msg.currentHand
        -- 
        if self.curJuShu > 0 then 
            self.isGameStart = true 
        end 


        -- 房主信息
        self.vipCreaterName= msg.creatorName or ""
        self.createPlayerID = msg.createPlayerID or 0

        if self.curJuShu == 0 then
            -- 显示等待界面
            g_UserDataTable.gameEmojCount = 0

        else
            -- 隐藏等待界面
        end
        -- 刷新实时语音
        self:isOpenRealTimeVoice()
        -- 刷新雨
        self:showRedPacket()
        -- --自动超时托管部分
        if self.curJuShu==0 then
            if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN) then                    
                performWithDelay(self, function() ShowConfirmBox("超过15秒未操作将进入托管状态，系统将自动为你摸牌打牌。",nil,nil,nil,true) 
                end, 0.1)                    
            end
            if msg.unused4 == 1 then
                performWithDelay(self, function()
                    ShowToastMsg("所有玩家已同意开局！")
                end, 0.1) 
            end
        end
    else
        g_UserDataTable.lastRoomId = nil
        g_UserDataTable.realTimeVoiceSwitchOn = true

        local levelStr = {
            [2004] = "初级",
            [2005] = "中级",
            [2006] = "高级",
        }
    end

    -- 保存玩家信息，可能有多人,玩家信息根据座位号算出实际位置放到self.tablePlayerInfoTable中
    for i, v in pairs(msg.players) do
        v.headFrameFx = v.headImgUrl
        self:updatePlayerInfo(v)
    end
end 

function DDZGameBase:updatePlayerInfo(playerInfo)
    if type(playerInfo) ~= "table" and next(playerInfo) == nil then 
        return 
    end 

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(playerInfo.tablePos)
    if posState and posState >=1 and posState <=4 then

        self.tablePlayerInfoTable[posState] = playerInfo
        --房主判断
        self.tablePlayerInfoTable[posState].isFangzhu = (playerInfo.playerID == self.createPlayerID) and true or false
        if posState == 1 then 
            self.isFangzhu = self.tablePlayerInfoTable[posState].isFangzhu
            g_gameGlobal:setIsMyFangZhu(self.isFangzhu)
        end 

        if not tolua.isnull(self.tablePlayerTable[posState]) then 
            -- 初始性别
            self.tablePlayerTable[posState]:init(playerInfo.sex)
            -- 初始位置
            self.tablePlayerTable[posState]:initPosition(self:getHeadPosByLocalPos(posState))
            -- 初始时间
            self.tablePlayerTable[posState]:resetActionTime(self.currPlaySpeed)
        end 
    end
end 


function DDZGameBase:onExit()
    DDZGameBase.super.onExit(self)
end

function DDZGameBase:initDispatch()
    self.panelDispath = g_gameGlobal:findChildWithName(self.resourceNode_, "Panel_Dispatch")
    self.btnLeaveDispatch = g_gameGlobal:findChildWithName(self.resourceNode_, "Btn_leaveDispatch")
    self.btnLeaveDispatch:onTouch(handler(self, self.leaveDisptch))
    self:flushDispatchPanel(true)
end

function DDZGameBase:leaveDisptch(send)
    if send.name ~= "ended" then
        return
    end
    NG.goldLobby:getModule("PeakRaceDispatch"):reqLeaveDispatchQueue()
end

function DDZGameBase:flushDispatchPanel(isShow)
    NG.goldLobby:getModule("PeakRace"):reqPeakCount(g_gameGlobal:findChildWithName(self.resourceNode_, "Text_Cnt"), self.resourceNode_)
    g_gameGlobal:findChildWithName(self.resourceNode_, "Text_Cnt"):setVisible(not isShow)
    self.panelDispath:setVisible(isShow)
end

function DDZGameBase:initGameNode()
    -- 加载CSB
    self:createResoueceNode(self.csbRes or "poker/ddzGame/DDZGameBaseView.csb")
    self:refreshBackGround()
    self:initDispatch()
    -- 面板根节点
    self.bgPanel = self.resourceNode_:getChildByName("bgPanel")
    -- 背景图片
    self.deskBgImg = self.resourceNode_:getChildByName("deskBackGround")
    -- BtnPanel
    self.gameBtnPanel = self.bgPanel:getChildByName("Panel_InGameBtns"):setVisible(false)
    --等待界面面板
    self.GameWaitePanel = self.bgPanel:getChildByName("Panel_GameWaite"):setVisible(false)
    -- 回放面板
    self.gameLogPanel = self.resourceNode_:getChildByName("Panel_GameLog"):setVisible(false)
    self.gameLogPanel:setSwallowTouches(false)
    -- 房间规则标题
    self.gameRuleImgBg = self.bgPanel:getChildByName("btn_RuleDesc")
--        :setVisible(false)
    if not tolua.isnull(self.gameRuleImgBg) then
        self.gameRuleImgBg:removeSelf()
    end
--    self.textGameRuleDesc = self.gameRuleImgBg:getChildByName("textGameRuleDesc")
--    self.textGameRuleDesc:setString("")

    -- 时间、网络、电池
    self.StateImgBg = self.bgPanel:getChildByName("State_ImgBg"):setVisible(false)
    -- 时间标签
    self.timeLabel = self.StateImgBg:getChildByName("timeLabel")
    -- 网络标签
    self.netTypeMark = self.StateImgBg:getChildByName("netTypeMark")
    -- 电池
    self.batterySt = g_gameGlobal:findChildWithName(self.resourceNode_, "batterySt")
    -- 房间号
    self.roomIDImgBg = self.bgPanel:getChildByName("Image_RoomIDBg")
    g_gameGlobal:adapteIponeXNode(self.roomIDImgBg, false)
    self.roomIDBg = self.roomIDImgBg:setVisible(false)
    self.roomIDLabel = self.roomIDBg:getChildByName("Text_RoomId")

    ------------------------  桌面按钮  ------------------------------
    -- 设置按钮
    self.setBtn = self.gameBtnPanel:getChildByName("setBtn")
    self.setBtn:setPressedActionEnabled(true)
    g_gameGlobal:adapteIponeXNode(self.setBtn)
    self.setBtn:onClick(handler(self, self.btnEventFunc))
    -- 战绩按钮
    self.zhanjiBtn = self.gameBtnPanel:getChildByName("zhanjiBtn")
    self.zhanjiBtn:setVisible(false)
    self.zhanjiBtn:setPressedActionEnabled(true)
    g_gameGlobal:adapteIponeXNode(self.zhanjiBtn,true)
    self.zhanjiBtn:onClick(handler(self, self.btnEventFunc))
    -- 聊天按钮
    self.chatBtn = self.gameBtnPanel:getChildByName("chatBtn")
    self.chatBtn:setPressedActionEnabled(true)
    g_gameGlobal:adapteIponeXNode(self.chatBtn)
    self.chatBtn:onClick(handler(self, self.btnEventFunc))
    
    -- 规则按钮
    self.ruleBtn = self.gameBtnPanel:getChildByName("ruleBtn")
    if not tolua.isnull(self.ruleBtn) then
        self.ruleBtn:setVisible(true)
        self.ruleBtn:setPressedActionEnabled(true)
    --    g_gameGlobal:adapteIponeXNode(self.ruleBtn,true)
        self.ruleBtn:onClick(handler(self, self.btnEventFunc))
    end
    
    -- 幸运道具
    self.luckBtn = self.bgPanel:getChildByName("luckBtn")

    --实时语音
    self.realTimeVoiceBtn = self.gameBtnPanel:getChildByName("realTimeVoiceBtn")
    g_gameGlobal:adapteIponeXNode(self.realTimeVoiceBtn)
    self.realTimeVoiceSwitch = true
    if self.realTimeVoiceBtn then
        self.realTimeVoiceBtn:hide()
        self.realTimeVoiceBtn:onTouch(handler(self, self.realTimeVoiceFunc))
    end
    
    --退出观战
    self.leaveWatchWarBtn = self.gameBtnPanel:getChildByName("leaveWatchWarBtn")
    if self.leaveWatchWarBtn then
        self.leaveWatchWarBtn:hide()
        self.leaveWatchWarBtn:onTouch(handler(self, self.leaveWatchWar))
    end
    self.Image_watchWarFlag = self.gameBtnPanel:getChildByName("Image_watchWarFlag")
    self.Image_watchWarFlag:hide()

    -- 语音按钮
    self.realTimeMicSwitch = true
    self.voiceBtn = self.gameBtnPanel:getChildByName("voiceBtn")
    self.voiceBtn:setPressedActionEnabled(true)
    g_gameGlobal:adapteIponeXNode(self.voiceBtn)
    self.voiceBtn:setVisible(false)
    self.voiceBtn:onTouch(function(event)
        
    end)
    --等待界面按钮
    
    -- 托管按钮
    self.tuoguanBtn = g_gameGlobal:findChildWithName(self.resourceNode_, "tuoguanBtn")
    self.tuoguanBtn:onTouch(handler(self, self.btnTuoGuanEventFunc))
    ExternalFunc.addCustomEventListener(self, eventType.TUO_GUAN_BEGAIN, function() self.tuoguanBtn:setEnabled(false) end)
    ExternalFunc.addCustomEventListener(self, eventType.TUO_GUAN_CANCEL, function() self.tuoguanBtn:setEnabled(true) end)
    
    self.inviteBtnAll =  self.GameWaitePanel:getChildByName("inviteBtn_all")
    self.inviteBtnAll:onClick(handler(self, self.WaitbtnEventFunc))

     -- 邀请好友按钮
     self.inviteBtn =  self.GameWaitePanel:getChildByName("inviteBtn")
     self.inviteBtn:onClick(handler(self, self.WaitbtnEventFunc))
    
    self.xlInviteBtn = g_gameGlobal:findChildWithName(self.GameWaitePanel, "xlInviteBtn")
    self.xlInviteBtn:setPressedActionEnabled(true)
    self.xlInviteBtn:onClick(handler(self, self.WaitbtnEventFunc))
    self.xlInviteBtn:setVisible(false)

    self.cnInviteBtn = g_gameGlobal:findChildWithName(self.GameWaitePanel, "cnInviteBtn")
    self.cnInviteBtn:setPressedActionEnabled(true)
    self.cnInviteBtn:onClick(handler(self, self.WaitbtnEventFunc))
    self.cnInviteBtn:setVisible(false)

    -- 邀请亲友圈按钮
    self.clubInviteBtn = g_gameGlobal:findChildWithName(self.GameWaitePanel, "clubInviteBtn")
    self.clubInviteBtn:setPressedActionEnabled(true)
    self.clubInviteBtn:onClick(handler(self, self.WaitbtnEventFunc))
    self.clubInviteBtn:setVisible(self.isClub)

    -- 复制房间号
    self.copyRoomIDBtn = g_gameGlobal:findChildWithName(self.GameWaitePanel, "copyRoomIDBtn")
    self.copyRoomIDBtn:setPressedActionEnabled(true)
    self.copyRoomIDBtn:onClick(handler(self, self.WaitbtnEventFunc))
    self.copyRoomIDBtn:setVisible(false)
    
    -- 准备按钮
    self.readyBtn = self.GameWaitePanel:getChildByName("readyBtn")
    self.readyBtn:setPressedActionEnabled(true)
    self.readyBtn:onClick(handler(self, self.WaitbtnEventFunc))
    
    self.changeRoomBtn = self.GameWaitePanel:getChildByName("changeRoomBtn")
    self.changeRoomBtn:onClick(handler(self, self.changeRoomBtnEvent))
    self.changeRoomBtn:setVisible(false)

    --------------------------------- 底牌节点（用于房地主牌）----------------------------------
    self.dzCardsNode = self.bgPanel:getChildByName("Node_Dz_Cards"):setVisible(false)     -- 根节点
    self.gameScoreLabel = self.dzCardsNode:getChildByName("Image_GameScore"):getChildByName("Text_GameScore")       -- 游戏底分
    self.gameTimesLabel = self.dzCardsNode:getChildByName("Image_gameTimes"):getChildByName("Text_GameTimes")       -- 游戏倍数
    self.imgDzCards = self.dzCardsNode:getChildByName("Image_DzCards")                                              -- 地主牌
    
    
    local lzCardNode = self.dzCardsNode:getChildByName("Image_LzCardBg")  
    if lzCardNode then lzCardNode:setVisible(false) end
    local lzMidCard = self.dzCardsNode:getChildByName("Image_LzCard")
    if lzMidCard then lzMidCard:setVisible(false) end
    -------------------------------------------- 回放相关 ------------------------------------------
    self.NodeBts        = self.gameLogPanel:getChildByName("Node_Btns")
    self.replayBtn      = self.NodeBts:getChildByName("Button_Replay")   -- 重播
    self.replayBtn:setPressedActionEnabled(true)
    self.playBtn        = self.NodeBts:getChildByName("Button_Play")  
    self.playBtn:setPressedActionEnabled(true) 
    self.pauseBtn       = self.NodeBts:getChildByName("Button_Pause") 
    self.pauseBtn:setPressedActionEnabled(true)
    self.slowBtn        = self.NodeBts:getChildByName("Button_Slow") 
    self.slowBtn:setPressedActionEnabled(true)
    self.fastBtn        = self.NodeBts:getChildByName("Button_Fast") 
    self.fastBtn:setPressedActionEnabled(true)
    self.lastGameBtn    = self.NodeBts:getChildByName("Button_LastGame") 
    self.lastGameBtn:setPressedActionEnabled(true)
    self.nextGameBtn    = self.NodeBts:getChildByName("Button_NextGame") 
    self.nextGameBtn:setPressedActionEnabled(true)

    self:createGamePlayerUI()

    self:showGameUIByGameModel()

    self:testUIBtn()
    
    -----
    -- 创建个玩法名称节点
    local bgPanel = self.resourceNode_:getChildByName("deskBackGround")
    if not tolua.isnull(bgPanel) then
        local GamePublic = require("newgold.MatchGames.GamePublic.GamePublic")
        local roomNameNode = GamePublic:genRoomNameNode(self.mainRuler)
        -- 给层级2，防万一被背景icon遮挡
        bgPanel:addChild(roomNameNode, 2)
        roomNameNode:setPosition(cc.p(display.cx, display.cy + 120))
        
        if self.showJushuLable then
            -- 局数文本
            local jushuNode = GamePublic:createJushuNode()
            bgPanel:addChild(jushuNode, 2)
            jushuNode:setPosition(cc.p(display.cx, display.cy + 50))
            self.jushuLable = jushuNode
        end
    end
end

function DDZGameBase:btnTuoGuanEventFunc()
    local playerGameOpertaionMsg = {}      
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
    playerGameOpertaionMsg.opValue = 1
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    self.tuoguanBtn:setTouchEnabled(false)
    performWithDelay(self.tuoguanBtn, function() self.tuoguanBtn:setTouchEnabled(true) end, 0.2)
end

function DDZGameBase:onEnter( ... )

    DDZGameBase.super.onEnter(self)

    ExternalFunc.addCustomEventListener(self, eventType.GAME_DESK_BG_CHANGE, function() self:refreshBackGround() end)
end


function DDZGameBase:showGameUIByGameModel()
    
    local LOGMODEL  = g_gameConstant.PLAY_LOG_MODEL
    local VIPMODEL  = g_gameConstant.VIP_GAME_MODEL
    local GOLDMODEL = g_gameConstant.GOLD_GAME_MODEL

    self.gameModel = nil
    if g_gameGlobal:getIsPlayingGameLog() then 
        self.gameModel = LOGMODEL
    else
        if g_gameGlobal:getVipTableID() > 0 then 
            self.gameModel = VIPMODEL
        else 
            self.gameModel = GOLDMODEL
        end 
    end 

    self.roomIDImgBg:setVisible(self.gameModel == VIPMODEL or self.gameModel == LOGMODEL)
    self.chatBtn:setVisible(false)
    self.realTimeVoiceBtn:setVisible(false)
    self.voiceBtn:setVisible(false)

    self.GameWaitePanel:setVisible(self.gameModel == VIPMODEL)
    self.gameBtnPanel:setVisible(true)
    self.gameLogPanel:setVisible(self.gameModel == LOGMODEL)
end

local tableBkgSrc = {
    {src = "bigImg/pz_bj4.png", marker = "bigImg/pz_bj4_panda.png"},
    {src = "bigImg/pz_bj2.jpg",     },
    {src = "bigImg/pz_bj5.png", marker = "bigImg/pz_bj5_panda.png"},
    {src = "bigImg/pz_bj_lypdk.jpg",}
}

function DDZGameBase:refreshBackGround()
    local bgPanel = self.resourceNode_:getChildByName("deskBackGround")
    local bkgType = g_UserDataTable.gameBgColorType
    if not bkgType or bkgType > #tableBkgSrc or bkgType < 1 then
        bkgType = 1
    end
    
    local bkgSrc = tableBkgSrc[bkgType] and tableBkgSrc[bkgType].src
    bgPanel:setBackGroundImage(bkgSrc, ccui.TextureResType.localType)
    
    -----
    -- gen icon
    local iconImg = bgPanel:getChildByName("tbbkg_icon_img")
    
    local pzImgMarker = tableBkgSrc[bkgType] and tableBkgSrc[bkgType].marker
    if pzImgMarker then
        if tolua.isnull(iconImg) then
            iconImg = ccui.ImageView:create(pzImgMarker, ccui.TextureResType.localType)
                :addTo(bgPanel)
                :move(cc.p(display.cx + 2.5, display.height * 0.5444))
            iconImg:setName("tbbkg_icon_img")
        else
            iconImg:ignoreContentAdaptWithSize(true)
            iconImg:loadTexture(pzImgMarker, ccui.TextureResType.localType)
        end
    else
        if not tolua.isnull(iconImg) then
            iconImg:removeSelf()
        end
    end
end

function DDZGameBase:initRoomInfo(msg)
    
    if msg== nil then
        return 
    end
    
    DDZGameBase.super.initRoomInfo(self, msg)
    
    self:initGameData(msg)
    self:initGPS(msg)
    self:freshGameRuleDescBtn()
    -- 显示属性信息
    self:updatePowerAndNet()
    self:updateJushuInfo()
    -- 显示等待界面
    if msg.currentHand >= 1 then
        self.GameWaitePanel:setVisible(false)
    else
        self.GameWaitePanel:setVisible(true)
    end
   
    local model = g_gameConstant.GOLD_GAME_MODEL
    if msg.vipTableID > 0 then    --VIP场
        model = g_gameConstant.VIP_GAME_MODEL
        if self.curJuShu > 0 then
            --非第一局之前，幸运按钮直接显示
            self:setLuckBtnVisible(true)
        end
    else
        --金币场幸运按钮直接显示
        self:setLuckBtnVisible(true)
        model = g_gameConstant.GOLD_GAME_MODEL
    end
    self:setGameModel(model)
    self.curGameModle = model
    -- 加载头像数据
    self:updatePlayerHeadView()
    
    self:initUINodeState()
    
    self:initWatchWarUI()
    
    -- 入场动画
    self:addEnterRoomFx(msg.enterRoomFlash, 1)
end


function DDZGameBase:initUINodeState()
    -- 根据准备状态设置 准备按钮状态
    if not tolua.isnull(self.readyBtn) then
        self.readyBtn:setVisible(false)
    end
end

function DDZGameBase:freshGameScore(score)
    if score then 
        self.gameScoreLabel:setString(tostring(score)) 
    end
end

-- 刷新底分和倍数
function DDZGameBase:freshGameScoreAndTimes(score,times)

    -- local scoreNum = tonumber(self.gameScoreLabel:getString())
    -- local timesNum = tonumber(self.gameScoreLabel:getString())
    if score then 
        self.gameScoreLabel:setString(tostring(score)) 
    end 
    if times then 
        self.gameTimesLabel:setString(tostring(times)) 
    end 
end 

-- 显示翻牌的动画
function DDZGameBase:playDzCardsAction(dzData)

    self.dzCardsNode:setVisible(not self.isWatchWarWait)
    local childs = self.imgDzCards:getChildren()
    if dzData == nil or #dzData ~= #childs then 
        return 
    end 

    NewCardObj.loadCardRes()
    local cardScale = childs[1]:getScale()
    local delayTime = 0.3

    for k,v in ipairs(dzData) do 
        local imgBg = childs[k]
        local card = NewCardObj.newCard(v,1)
        if not tolua.isnull(imgBg) and not tolua.isnull(card) then 
            local imgPos = cc.p(imgBg:getPosition())
            imgBg:getParent():addChild(card)
            card:setPosition(imgPos)
            card:setScale(cardScale) 
            card:setVisible(false)
            local action1 = cc.OrbitCamera:create(delayTime, 1, 0, 0, -90, 0, 0)
            local action2 = cc.OrbitCamera:create(delayTime, 1, 0, 90, -90, 0, 0)

            imgBg:runAction(cc.Sequence:create(action1,cc.CallFunc:create(function()
                performWithDelay(imgBg,function()
                    imgBg:setVisible(false)
                end,0)
            end)))

            card:runAction(cc.Sequence:create(cc.DelayTime:create(delayTime),cc.CallFunc:create(function()
                card:setVisible(true)
            end),action2))
        end 
    end 
end 

-- 加载头像数据
function DDZGameBase:updatePlayerHeadView( isdaa )
    isdaa = isdaa or false
    -- 加载头像数据
    for chairId=0, g_gameGlobal:getMaxPlayerNum() - 1 do
        -- 创建
        local VID = g_gameGlobal:getTablePlayerPosWithTablePos(chairId)
        local headImgView = HeadImgView:create(VID,function()
            g_UserDataTable.gameGPSSetState = true
            self:getGpsLayer(true)
        end,self.curGameModle,self.MainGamePlayRule,self.isForbidVoice or self.isForbidText)
        self:addChild(headImgView,HEADLAYERNUM)
        headImgView:initHeadImgPos(self:getHeadPosByLocalPos(VID))
        self.tablePlayerHeadImgTable[VID] = headImgView
        -- 更新头像数据 
        if self.tablePlayerInfoTable[VID] ~= 0 then
            headImgView:updateTablePlayerInfo(self.tablePlayerInfoTable[VID],isdaa)
            if self.tableID then
                if not self.isClub then
                    headImgView:fangzhuVisible(false)
                end                        
            end
        end
    end
end

-- 显示大计分
function DDZGameBase:showBigResultLayer(  )
    self:setLuckViewVisible(false)
    if g_gameGlobal:getIsPlayingGameLog() then 
        -- 若处于回放中接收到该消息，不予处理
        return 
    end 
    
    if not tolua.isnull(self.jiesanView) then
        self.jiesanView:removeSelf()
    end
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    if vipRoomClose  then   
        --self:endGameTime()         
        CloseAllPopMsgView()
        if not self.isGameStart then
            g_gameGlobal:setIsInPaiZhuo(false)
            g_gameGlobal:backToLobby()
            return
        end
        if g_gameGlobal:getGameScene() ~= nil then
            local gameBigResultLayer = require("newgold.MatchGames.subPKGame.ddzPokerGame.game.DDZGameBigResultLayer"):create()
            
            if gameBigResultLayer ~= nil then
                gameBigResultLayer:setName("gameBigResultLayer")

                
                --local gameOverAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_POKER_GAME_OVER_ACK)
                local smallResultLyr = g_gameGlobal:getGameScene():getChildByName("DDZGameResultLayer")
                
                if smallResultLyr then
                    gameBigResultLayer:setVisible(false)
                else
                    gameBigResultLayer:setVisible(true)
                end
                g_gameGlobal:getGameScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
            end
            
        end
        --清理掉创建游戏的 返回数据
        g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    end
end

function DDZGameBase:showPlayerCards(msg)
    
    for k, v in pairs(self.tablePlayerTable) do
        local svrPos = g_gameGlobal:getServerTablePosByLocalPos(k)
        if v ~= 0 then
            local handCardData = msg[string.format("player%dHandCards", svrPos)] or {}
            local outCardData = msg[string.format("player%dPutoutCards", svrPos)] or {}
--            if handCardData then
--                v:updateHandCardUI(handCardData)
                v:showResultCardPanel(handCardData, outCardData)
--            end
            
        end
    end
    
    --[[
    for k, v in pairs(playerHandsCards) do
        local item_play = self.tablePlayerTable[k];
        if item_play and v then
            if k == 1 then
                if isReConnect == 0 and self.vipTableID ~= 0 then 
                    item_play:playStartCardsAnimation(v, mustOutCard);
                else
                    item_play:updateHandCardUI(v)
                    if #v == 1 then 
                        self:playerSingleCard(k)
                    end 
                end
            else
                -- 非第一视图玩家都填充假的扑克数据
                local handData = {}
                -- 构造假牌数据
                for i=1, v do table.insert(handData, 0) end
                if isReConnect == 0 and self.vipTableID ~= 0 then 
                    item_play:playStartCardsAnimation(handData, mustOutCard);
                else
                    item_play:updateHandCardUI(handData)
                    if #handData == 1 then 
                        self:playerSingleCard(k)
                    end 
                end
            end
        end
    end
    --]]
end

function DDZGameBase:flushScoreFromSmallResult(msg)

    for k, v in ipairs(msg.players or {}) do
        if type(v) == "table" then
            local tablePos = v.tablePos
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
            local headInst = self.tablePlayerHeadImgTable[posState]
            if headInst ~= 0 then
                local curScore = headInst:getGoldNum()
                local newAdd = v.gold
                headInst:refreshGoldNum(curScore + newAdd)
            end
        end
    end
end

function DDZGameBase:showResultLayer(msg, delayTime)
    dump(msg, "MSG_GAME_POKER_GAME_OVER_ACK showResultLayer")
    
    self:flushScoreFromSmallResult(msg)
    self:setLuckViewVisible(false)
    -- 清除规则页面
    if not tolua.isnull(self.layerRuleDialog) then
        self.layerRuleDialog:removeSelf()
        self.layerRuleDialog = nil
    end
    
    if not msg then return end
    
    self:showPlayerCards(msg)
    
    delayTime = delayTime or 2
    local gameResultLayer = require("newgold.MatchGames.subPKGame.ddzPokerGame.game.DDZGameResultLayer"):create(msg)
    if g_gameGlobal:getGameScene() then
        gameResultLayer:setName("DDZGameResultLayer")
        g_gameGlobal:getGameScene():add(gameResultLayer, g_gameConstant.JIESANROOMVIEW_ZORDER-1)
        gameResultLayer:setVisible(false)
        performWithDelay(self,function (  )
            if not tolua.isnull(gameResultLayer) then 
                gameResultLayer:setVisible(true)
            end 
        end,delayTime)
        self.isThisRoundOver = true
    end
end


function DDZGameBase:playerOperationEx(msg)
    if #msg.operationList == 0 then
        return
    end

    if msg.operationList[1] == g_gameConstant.BAO_DAN_CHU_MAX_INVALID then
        -- 报单必须出最大
        if not tolua.isnull(self.tablePlayerTable[1]) then 
            self.tablePlayerTable[1]:showCardTypeAction(-4)
        end 
    elseif  msg.operationList[1] == g_gameConstant.GAME_OPERTAION_CALL_LANDLORD_INVALID then 
        -- 三大必抓
        if not tolua.isnull(self.tablePlayerTable[1]) then 
            self.tablePlayerTable[1]:showCardTypeAction(-5)
        end
        
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_PLAYER_CLICK_READY then
        
        self:onPlayerReady(msg)
        return
        
    -- 牌不合法
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_CARD_INVALID then
        if self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:showCardTypeAction(-1)
        end
        
    else
        DDZGameBase.super.playerOperationEx(self, msg)
    end
end 

function DDZGameBase:onPlayerReady(msg)
    local posInfo = msg.keyList
    local valueInfo = msg.valueList
    
    for k = 1, #posInfo do
        local iPos = posInfo[k]
        local iState = valueInfo[k]
        
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(iPos)
        print(iPos, iState)
        self.tablePlayerInfoTable[posState].gameState = iState
        self.tablePlayerHeadImgTable[posState]:refreshReadyState(iState)
    end
    
end

function DDZGameBase:playerOperation(msg)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    print("~~~~~~~~~~~~~~  当前操作的玩家是： "..posState.."     操作的代码是： "..msg.operation)
    -- 获取对应玩家状态
    local myVID = g_gameGlobal:getTablePlayerPosWithTablePos(g_gameGlobal:getMyTablePos())
  

    if tolua.isnull(self.tablePlayerTable[posState]) then 
        return 
    end

    -- 操作解析
    if msg.operation == g_gameConstant.POKER_OPERATION_SNATCH_LANDLORD then     -- 代表抢地主操作
        local isCancel = msg.opValue == 0
        self:handleRobDzResultMsg(isCancel,posState)
        
    elseif msg.operation == g_gameConstant.POKER_OPERATION_CALL_LANDLORD then       -- 代表叫地主操作
        local isCancel = msg.opValue == 0
        self:handleCallDzResultMsg(isCancel,posState, nil, msg.unused0)
        
    elseif msg.operation == g_gameConstant.POKER_OPERATION_NOTIFY_JIA_BEI then      -- 加倍
        local isCancel = msg.opValue == 0
        self:handleJiaBeiMsg(isCancel,posState)
    
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then

        for k, v in pairs(msg.playersPos) do 
            local pos = g_gameGlobal:getTablePlayerPosWithTablePos(v)
            if posState == pos then 
                local handData = {}
                if posState == myVID and not self.isWatchWar then 
                    handData = msg.handCards
                else 
                    local num = msg.playersCardsNum[k]
                    for i=1, num do 
                        table.insert(handData,0)
                    end 
                end 
                local isNew = msg.isNext == 1 and true or false --判断是否是当局首次出牌
                self:showOutCardAction(msg.putOutCards,handData,posState, isNew)
                break 
            end 
        end 
        self:onPlayerOutCards()
        
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_YAO_BU_QI) == g_gameConstant.MAHJONG_OPERTAION_YAO_BU_QI then 
        -- 处理玩家不要（或要不起）
        self:showPassAction(posState)

    end 

end 

-- 显示闹钟
function DDZGameBase:showTimeClock(posState, secTimeLeft)
    
    if self.isWatchWar and self.isWatchWarWait then
        return
    end
    
    --print("trace:\n"..debug.traceback())
    for k, v in ipairs(self.tablePlayerTable) do 
        if not tolua.isnull(v) and self.tablePlayerInfoTable[k] ~= 0 then 
            v:showAlarmClockAnimation(false)
        end 
    end 

    self.tablePlayerTable[posState]:showAlarmClockAnimation(true, secTimeLeft)
end 

function DDZGameBase:showPassAction( posState )
    for k, v in pairs(self.tablePlayerTable) do 
        if v ~= nil and posState == k then 
            v:passCardAction(k==posState)
        end 
    end
end


function DDZGameBase:playerSingleCard(posState)

    local function myNexttPlayerPos()
        for i=2, 4 do 
            if self.tablePlayerInfoTable[i] ~= 0 then 
                return i
            end 
        end 
        return -1
    end 
    local NextVID = myNexttPlayerPos()
    if posState == NextVID then 
        self.tablePlayerTable[1]:setBaoDanState(true)
    end 

    self.tablePlayerHeadImgTable[posState]:showSibgleEnd()
    performWithDelay(self,function()
        NG.soundManager:playMatchEffect(GameAudioParser:getDdzSingleEnd(self.tablePlayerInfoTable[posState].sex))
    end,1)
end 

function DDZGameBase:showOutCardAction(outCards,handCards,posState,isNew)
    self.tablePlayerTable[posState]:showAlarmClockAnimation(false)
    self.tablePlayerTable[posState]:outCardAction(true,outCards,handCards,posState, isNew)
    if handCards and #handCards == 1 then 
        self:playerSingleCard(posState)
    elseif handCards and #handCards <= 0 then
        self.tablePlayerHeadImgTable[posState]:hideSibgleEnd()
    end
end


function DDZGameBase:playerOperationNotify(msg)

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)

    print("~~~~~~~~~~~~~~  当前操作的玩家是： "..posState.."     操作的代码是： "..msg.operation)

    if self.tablePlayerTable[posState]== 0 then
        return 
    end

    local opList = msg.operationList
    
    -- offline time
    if opList and opList[g_gameConstant.MAHJONG_OPERATION_OTHER_LEFT_TABLE_TIME] then
        local offlineTimes = msg.valueList
        self:onNotifyOfflineTime(offlineTimes)
        
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_GAME_OVER then
        -- 游戏结束
        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:backToLobby()
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OFFLINE then
        -- 玩家离线
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) and (posState ~= 1 or self.isWatchWar) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(true)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLINE then
        -- 玩家返回桌子
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
        end
        
        self:addEnterRoomFx(msg.unused1, posState)
        
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        local outPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        local isNew = msg.isNext == 1 and true or false

        if not tolua.isnull(self.tablePlayerTable[outPos]) then 
            -- 若为新的一轮，则停顿0.7秒，否则直接弹出按钮
            local time = 0
            -- if msg.lastOpPos == -1 then time = 1.5 end 

            local callBack = function()
                if not tolua.isnull(self.tablePlayerTable[outPos]) then 
                    self.tablePlayerTable[outPos]:showOutCardStatus(15,outPos == posState,isNew)
                end 
            end 
            if time > 0 then 
                performWithDelay(self,callBack,time)
            else 
                callBack()
            end 
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_AUTO_CHU then

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OVERTIME_AUTO_CHU then
        if self.tablePlayerTable[1] ~= 0 then
            if msg.opValue == 1 then
                self.tablePlayerTable[1]:setTuoGuanState(true)
            else
                self.tablePlayerTable[1]:setTuoGuanState(false)
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU then

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD then

    elseif msg.operation == g_gameConstant.POKER_OPERATION_SNATCH_LANDLORD then     -- 代表抢地主操作
        local secTimeLeft = (msg.unused1 ~= 0 and msg.unused1 or nil)
        self:handleRobDzNotifyMsg(posState, secTimeLeft)
    elseif msg.operation == g_gameConstant.POKER_OPERATION_CALL_LANDLORD then       -- 代表叫地主操作
        local secTimeLeft = (msg.unused1 ~= 0 and msg.unused1 or nil)
        --print("\n\n\n handleCallDzNotifyMsg:", secTimeLeft)
        
        self:handleCallDzNotifyMsg(posState, secTimeLeft)
    elseif msg.operation == g_gameConstant.POKER_OPERATION_SHOW_LANDLORD then       -- 展示地主，显示底牌操作
        self:handleQDZResultMsg(msg,posState)
    elseif msg.operation == g_gameConstant.POKER_OPERATION_CHANGE_MULTI then        -- 倍数改变发通知，同时将该玩家炸弹数更新出去
        -- 更新倍数
        self:freshGameScoreAndTimes(nil,msg.unused0)
    elseif msg.operation == g_gameConstant.POKER_OPERATION_GAME_RESTART then        -- 重新开始游戏
        -- 重新清理资源，好进行gamestart流程（1、手牌资源清理）
        for k, v in ipairs(self.tablePlayerTable) do 
            if not tolua.isnull(v) then 
                v:removeHandCardUI()
            end 
        end 
    elseif msg.operation == g_gameConstant.POKER_OPERATION_NOTIFY_SPRING then       -- 通知春天
        self:handleChunTianMsg()
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_TIP then
        -----
--        if posState == 1 then
            -- 屏蔽自己的tip
--            return
--        end
        
        -----
        -- 剩余可操作时间
        local secTimeLeft = nil
        if msg.unused0 ~= 0 then
            secTimeLeft = msg.unused0
        end
        
        --print("\n\n\n MAHJONG_OPERTAION_TIP:", secTimeLeft)
        
        -- Hown 
        local isNew = msg.isNext == 1 and true or false
        for k, v in pairs(self.tablePlayerInfoTable) do 
            if v ~= 0 then
                local time = 0
                -- if msg.lastOpPos == -1 then time = 1.5 end 
                
                local callBack = function() 
                    if #self.isTipState > 1 then 
                        table.remove( self.isTipState,1)
                    else 
                        self.isTipState = {}
                        -- self.tablePlayerTable[k]:showOutCardStatus(15,k == posState,isNew)
                        self:showTimeClock(posState, secTimeLeft)
                    end
                end 
                if k == posState then 
                    table.insert(self.isTipState,1)
                end 

                if time > 0 then 
                    performWithDelay(self,callBack,time)
                else 
                    callBack()
                end 
            end
        end 
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_CANCEL then

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
        ShowConfirmBox("超时自动解散房间", handler(g_gameGlobal, g_gameGlobal.backToLobby), true)
        
    elseif msg.operation == g_gameConstant.POKER_OPERATION_NOTIFY_JIA_BEI then     -- 加倍
        local secTimeLeft = (msg.unused1 ~= 0 and msg.unused1 or nil)
        --print("\n\n\n handleJiabeiNotifyMsg:", secTimeLeft)
        self:handleJiabeiNotifyMsg(posState, secTimeLeft)
    end
end

function DDZGameBase:reGameStart()
    -- body
end

-- 处理抢地主结果的消息
function DDZGameBase:handleQDZResultMsg(msg,dzPosState)
    -- 清除所有玩家的动画节点状态
    for k, v in ipairs(self.tablePlayerHeadImgTable) do 
        if v ~= 0 and not tolua.isnull(self.tablePlayerTable[k]) then 
            self.tablePlayerTable[k]:clearPlayerOutAcitonRes()
        end
    end 
    -- 显示地主icon
    if not tolua.isnull(self.tablePlayerHeadImgTable[dzPosState]) then 
        self.tablePlayerHeadImgTable[dzPosState]:isShowHeadDzIcon(true)
    end
    
    self.isSelfDZ = (dzPosState == 1)
    
    -- 翻底牌
    self:playDzCardsAction(msg.tingList)
    
    -- 刷新手牌
    self.tablePlayerTable[dzPosState]:dzCardsInsertToHandCard(msg.tingList)
end 

-- 处理抢地主通知消息
function DDZGameBase:handleJiabeiNotifyMsg(posState, secTimeLeft)

    for k, v in ipairs(self.tablePlayerInfoTable) do 
        -- 清除玩家的闹钟
        if v ~= 0 and not tolua.isnull(self.tablePlayerTable[k]) then
            self.tablePlayerTable[k]:showAlarmClockAnimation(false)
        end
    end 

    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        self.tablePlayerTable[posState]:respondJiabeiNotifyMsg(secTimeLeft)
    end 
end 

-- 处理抢地主通知消息
function DDZGameBase:handleRobDzNotifyMsg(posState)

    for k, v in ipairs(self.tablePlayerInfoTable) do 
        -- 清除玩家的闹钟
        if v ~= 0 and not tolua.isnull(self.tablePlayerTable[k]) then
            self.tablePlayerTable[k]:showAlarmClockAnimation(false)
        end
    end 

    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        self.tablePlayerTable[posState]:respondRobDzNotifyMsg()
    end 
end 

-- 处理叫地主通知消息
function DDZGameBase:handleCallDzNotifyMsg(posState, secTimeLeft)
    for k, v in ipairs(self.tablePlayerInfoTable) do 
        -- 清除玩家的闹钟
        if v ~= 0 and not tolua.isnull(self.tablePlayerTable[k]) then
            self.tablePlayerTable[k]:showAlarmClockAnimation(false)
        end
    end 

    if not tolua.isnull(self.tablePlayerTable[posState]) then
        
        if g_gameGlobal:isRuleInRuleList(g_gameConstant.DDZ_RULE_JIAO_FEN) then
            self.tablePlayerTable[posState]:setJiaofenState(self.callScore)
        end
        
        self.tablePlayerTable[posState]:respondCallDzNotifyMsg(secTimeLeft)
    end 
end 

-- 处理叫地主的结果消息
function DDZGameBase:handleRobDzResultMsg(isCancel,posState,isconnect)
    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        if not isconnect then 
            if isCancel then 
                -- 不抢
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_NO_ROB,self.tablePlayerInfoTable[posState].sex))
            else 
                -- 抢地主
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_ROB_DZ,self.tablePlayerInfoTable[posState].sex))
            end 
        end 
        self.tablePlayerTable[posState]:respondRobDzResultMsg(isCancel,isconnect)
    end 
end 

-- 处理抢地主的结果消息
function DDZGameBase:handleCallDzResultMsg(isCancel,posState,isconnect, fen)
    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        
        -- 是否包含叫分规则
        local isJiaofenInRule = g_gameGlobal:isRuleInRuleList(g_gameConstant.DDZ_RULE_JIAO_FEN)
        
        -----
        if not isconnect then 
            if isCancel then 
                -- 不叫
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_NO_CALL,self.tablePlayerInfoTable[posState].sex))
            
            elseif isJiaofenInRule then
                if fen == 1 then
                    NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIAO_FEN_1,self.tablePlayerInfoTable[posState].sex))
                elseif fen == 2 then
                    NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIAO_FEN_2,self.tablePlayerInfoTable[posState].sex))
                elseif fen == 3 then
                    NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIAO_FEN_3,self.tablePlayerInfoTable[posState].sex))
                end
                
            else 
                -- 叫地主
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_CALL_DZ,self.tablePlayerInfoTable[posState].sex))
            end 
        end 
        
        
        if isJiaofenInRule then
            self.tablePlayerTable[posState]:respondJiaoFenResultMsg(isCancel, isconnect, fen)
            if not isCancel and not isconnect then
                self.callScore = fen
            end
            if fen then
                fen = fen * self.difen
                self:freshGameScore(fen)
            end
        else
            self.tablePlayerTable[posState]:respondCallDzResultMsg(isCancel,isconnect)
        end
        
        -- 隐藏按钮
        -- self.tablePlayerTable[posState]:
    end 
end 

-- 加倍
function DDZGameBase:handleJiaBeiMsg(isCancel, posState, isconnect)
    if not tolua.isnull(self.tablePlayerTable[posState]) then 
        if not isconnect then 
            if isCancel then 
                -- 不加倍
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIA_BEI_NO,self.tablePlayerInfoTable[posState].sex))
            else 
                -- 加倍
                NG.soundManager:playMatchEffect(GameAudioParser:getDdzOp(DDZCmd.BTNOPERATE_JIA_BEI,self.tablePlayerInfoTable[posState].sex))
            end 
        end 

        self.tablePlayerTable[posState]:respondJiaBeiResultMsg(isCancel,isconnect)
        
        self.tablePlayerHeadImgTable[posState]:setJiabeiVisible(not isCancel)
    end 
end


function DDZGameBase:testUIBtn()
    -- 测试按钮
    self.btnTest1 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test1"):setVisible(false)
    self.btnTest2 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test2"):setVisible(false)
    self.btnTest3 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test3"):setVisible(false)
    self.btnTest4 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test4"):setVisible(false)
    self.btnTest1:onClick(handler(self, self.testBtnFunc))
    self.btnTest2:onClick(handler(self, self.testBtnFunc))
    self.btnTest3:onClick(handler(self, self.testBtnFunc))
    self.btnTest4:onClick(handler(self, self.testBtnFunc))
end 


local testData = {-3,-2,-1,0,3,4,6,9,10,11,12,13,203}
local index = 1
local vid  = 1
function DDZGameBase:testBtnFunc(sender)
    if self.btnTest1 == sender then
        print("-------   点击了测试按钮 1 \n")

        self:handleChunTianMsg()
    elseif self.btnTest2 == sender then 
        print("-------   点击了测试按钮 2 \n")
        local handData = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8,0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x8, 0x8, 0x8}
        self.tablePlayerTable[vid]:updateHandCardUI(handData)

        -- local outData = {0x1, 0x2}
        -- self.tablePlayerTable[vid]:updateOutCardUI(outData)
        self.tablePlayerTable[vid]:showCardTypeAction(16)
        -- self.tablePlayerTable[vid]:showCardTypeAction(5)


        -- self.tablePlayerTable[2]:showPassStatus()
        -- self.tablePlayerTable[vid]:showCardTypeAction(8)
        -- self.tablePlayerTable[vid]:showOpBtnByState(2)
    
        -- local handData = {3,4,5,6,7,8,9,10,11,12,13,1}
    --    handData = {0,0,0,0,0,0,0,0,0,0,0,0,0}
    --     --local handData = {0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d}
        -- self.tablePlayerTable[vid]:updateHandCardUI({0,0,0,0})
        -- self.tablePlayerTable[vid]:updateOutCardUI(handData)
    --     self.tablePlayerTable[2]:updateHandCardUI(handData)
    --     self.tablePlayerTable[3]:updateHandCardUI(handData)
    --     self.tablePlayerTable[4]:updateHandCardUI(handData)
    elseif self.btnTest3 == sender then 
        print("-------   点击了测试按钮 3 \n")
        local handData = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8,0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x8, 0x8}
        self.tablePlayerTable[vid]:updateHandCardUI(handData)

        -- local outData = {0x1, 0x2}
        -- self.tablePlayerTable[vid]:updateOutCardUI(outData)
        self.tablePlayerTable[vid]:showCardTypeAction(16)
        -- self.tablePlayerTable[vid]:showCardTypeAction(3)
        -- self.tablePlayerTable[4]:showPassStatus()
        -- self.tablePlayerTable[vid]:showCardTypeAction(6)

        -- self.tablePlayerTable[1]:showOpBtnByState(3)
        -- local handData = {0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d}
        -- self.tablePlayerTable[vid]:updateHandCardUI(handData)
    elseif self.btnTest4 == sender then 
        print("-------   点击了测试按钮 4 \n")
        local handData = {0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8,0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7}
        self.tablePlayerTable[vid]:updateHandCardUI(handData)
        self.tablePlayerTable[vid]:showCardTypeAction(16)
    end 
end 

function DDZGameBase:gameStart(msg)
    if msg.isRecover == 2 and self.tablePlayerTable[1] then 
        self.tablePlayerTable[1]:setTuoGuanState(true)
    end 
    self:flushDispatchPanel(false)
    self.isWatchWarWait = msg.unused4 == 999
    
    self.isGameStart = true 
    self.callScore = msg.unused0
    -- 
    self.dzCardsNode:setVisible(not self.isWatchWarWait)
    
    -- 移除换桌界面
    if not tolua.isnull(self.changeTableView) then
        self.changeTableView:removeSelf()
    end
    
    -- 刷新标题信息
    self.curJuShu = msg.quanNum
    self:freshGameRuleDescBtn()
    
    self:updatePowerAndNet()
    self:updateJushuInfo()
    
    -- 隐藏等待面板（未完成）
    self.GameWaitePanel:setVisible(false)
    if not (msg.quanNum > 1) then
        performWithDelay(self, function ()
            local gpsLayer = self:getGpsLayer()
            if gpsLayer then
                gpsLayer:setVisible(false)
                gpsLayer:removeFromParent()
            end
        end, 1.2)
    end
    
    -- 刷新局数信息
    self:freshGameRuleDescBtn()

    -- 更新头像位置以及更新金币和钻数
    for i, v in pairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            -- 将新头像位置从等待界面切换为游戏界面
            v:updateHeadImgPosWithTablePos(self:getHeadPosByLocalPos(i))
            if self.tablePlayerInfoTable[i] ~= 0 then
                -- 更新金币数和钻数
                local tablePos = self.tablePlayerInfoTable[i].tablePos
                local goldNum = msg["player" .. tablePos .. "Gold"]
                v:refreshGoldNum(goldNum, 0)
                
                -- 加倍
                local jiabei = self.tablePlayerInfoTable[i].fan
                v:setJiabeiVisible(jiabei == 2)
                
                -- 多刷一遍准备
                if self.isWatchWar and self.isWatchWarWait then
                    v:refreshReadyState(self.tablePlayerInfoTable[i].gameState)
                end
            end
        end
    end

    --战绩按钮
    if self.curGameModle ~= g_gameConstant.GOLD_GAME_MODEL then
        if self.curJuShu <= 1 or self.isWatchWar then
            self.zhanjiBtn:hide()
        else
            self.zhanjiBtn:show()
        end
    end
    -- 房主标识


    -- 房主位置
    -- local fangzhuPos = bit._and(msg.unused3, 0xff)
    -- if self.tableID > 0 then
    --     local posState = g_gameGlobal:getTablePlayerPosWithTablePos(fangzhuPos)
    --     if self.tablePlayerHeadImgTable[posState] ~= 0 then
    --         -- 游戏开始依然显示房主
    --         self.tablePlayerHeadImgTable[posState]:fangzhuVisible(not self.isClub)
    --     end
    -- end

    --更新手牌
    local playerHandsCards = {}
    if self.isWatchWar then
        playerHandsCards[1] = msg.playersCardsNum[1]
    else
        playerHandsCards[1] = msg.mycards
    end
    for k, v in pairs(msg.playersPos) do
        local index = g_gameGlobal:getTablePlayerPosWithTablePos(v);
        if v and index ~= 1 then --除去自己坐标
            playerHandsCards[index] = msg.playersCardsNum[k]
        end
    end

    self:updatePlayersHandCards(playerHandsCards, msg.firstCard, msg.isRecover)

    -- 更新底分和倍数
    self:freshGameScoreAndTimes(msg.unused0,msg.unused5)
    
     -- 更新上轮出牌数据
     if msg.isRecover == 1 then 
        if msg.dealerPos == -1 then 
            -- 叫地主阶段
            self:updateCallOrRobDzState(msg)
        else 
            -- 打牌阶段
            self:updatePlayersOutCards(msg)
            -- 刷新地主的三张牌
            self:playDzCardsAction(msg.huaList)
            -- 显示叫地主的icon
            local dzPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.dealerPos)
            -- 观战等待 先不显示地主
            if not self.isWatchWarWait then
                self.tablePlayerHeadImgTable[dzPos]:isShowHeadDzIcon(true)
            end
            self.isSelfDZ = (dzPos == 1)
        end 
        
        -- 观战需要处理一下
        if self.isWatchWar and not self.isWatchWarWait then
            local currentChuPos = msg.currentOpPlayerPos
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(currentChuPos)
            self:showTimeClock(posState)
        end
    end 
    
    -----
    -- 刷新设置界面
    self:updateSetLayer()
    self:setLuckBtnVisible(true)
end


--==============================--
--desc:更新斗地主状态（用于断线重连）
--time:2019-03-27 10:08:45
--@msg:附带消息
--@return 
--==============================--
function DDZGameBase:updateCallOrRobDzState(msg)
    local currOpPos = msg.currentOpPlayerPos
    local maxPlayer = g_gameGlobal:getMaxPlayerNum()
    local opPosState = g_gameGlobal:getTablePlayerPosWithTablePos(currOpPos)

    local isHaveOp = false
    for pos=0, maxPlayer-1 do 
        local state = msg["player"..pos.."Cards"][1]
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(pos)
        if currOpPos ~= pos and state ~= 0 then 
            if state == 1 then 
                isHaveOp = true 
                local fen = msg["player"..pos.."Cards"][2] or 0
                -- 叫过地主
                self:handleCallDzResultMsg(false,posState,true, fen)
            elseif state == 2 then 
                -- 不叫地主
                self:handleCallDzResultMsg(true,posState,true)
            elseif state == 3 then 
                isHaveOp = true 
                -- 抢地主
                self:handleRobDzResultMsg(false,posState,true)
            elseif state == 4 then 
                isHaveOp = true 
                -- 不抢地主
                self:handleRobDzResultMsg(true,posState,true)
            end 
        end 
    end 
    
    -- 叫分模式
    if opPosState == 1 or g_gameGlobal:isRuleInRuleList(g_gameConstant.DDZ_RULE_JIAO_FEN) then
        return
    end
    
    -- 是否有叫过地主，有的话，则只能抢地主
    if isHaveOp then 
        self:handleRobDzNotifyMsg(opPosState)
    else
        self:handleCallDzNotifyMsg(opPosState)
    end
end 


-- 更新玩家出牌数据（断线重连用）
function DDZGameBase:updatePlayersOutCards(msg)
    -- dump({"111updatePlayersOutCards", msg})
    local maxPlayer = g_gameGlobal:getMaxPlayerNum()

    -- 手牌数量报警
    local handNum = 0 

    -- 刷新玩家已出牌显示数据
    -- 根据当前出牌玩家位置顺位开始找，找到的第一个有出牌数据的玩家，在他之前的没有出牌数据的是未出的，在他之后的是要不起的
    local findFrst = false
    local currentChuPos = msg.currentOpPlayerPos
    local lastOtherOutCards = {} --非当前出牌玩家的最后一个玩家出的牌
    for i=0, maxPlayer-1 do
        --st:0 未出 1已出 2不出的
        local spos = (currentChuPos+i)%maxPlayer
        local chuCards = msg["player"..spos.."Cards"]
        local st = #chuCards > 0 and 1 or (findFrst and 2 or 0)
        findFrst = findFrst or st==1
        -- chuCards = {0x36,0x26,0x16,0x37,0x27,0x17,0x2,0x1}
        local VID = g_gameGlobal:getTablePlayerPosWithTablePos(spos)
        if st == 1 then 
            if self.tablePlayerTable[VID] ~= nil then
                -- chuCards = {0x35,0x25,0x15,0x5,0x3,0x2}
                self.tablePlayerTable[VID]:updateOutCardUI(chuCards)
            end
            if spos ~= currentChuPos then
                table.insert(lastOtherOutCards, chuCards)
            end
        elseif st == 2 then 
            -- 显示不出
            if self.tablePlayerTable[VID] ~= nil then 
                self.tablePlayerTable[VID]:showPassStatus(false)
            end 
        end
    end

    -- 现在没取服务器的，因为服务器没改过来，后面做新玩法这个必须取服务器的
    local mustOutCard = msg.firstCard
    self.tablePlayerTable[1]:setReconnectData(lastOtherOutCards, mustOutCard)
end


-- 根据手牌和场景来创建手牌
function DDZGameBase:updatePlayersHandCards(playerHandsCards,mustOutCard, isReConnect)
    if not playerHandsCards or next(playerHandsCards) == nil then
        return;
    end

    for k, v in pairs(playerHandsCards) do
        local item_play = self.tablePlayerTable[k];
        if item_play and v then
            if k == 1 and not self.isWatchWar then
                if isReConnect == 0 and self.vipTableID ~= 0 then 
                    item_play:playStartCardsAnimation(v, mustOutCard);
                else
                    item_play:updateHandCardUI(v)
                    if #v == 1 then 
                        self:playerSingleCard(k)
                    end 
                end
            else
                -- 非第一视图玩家都填充假的扑克数据
                local handData = {}
                if not self.isWatchWarWait then
                    -- 构造假牌数据
                    for i=1, v do table.insert(handData, 0) end
                end
                if isReConnect == 0 and self.vipTableID ~= 0 then 
                    item_play:playStartCardsAnimation(handData, mustOutCard);
                else
                    item_play:updateHandCardUI(handData)
                    if #handData == 1 then 
                        self:playerSingleCard(k)
                    end 
                end
            end
        end
    end
end

-- 根据游戏人数创建对应的牌局布局
function DDZGameBase:createGamePlayerUI()

    local mainRuler = g_gameGlobal:getCurrGameKind()
    local tmpPath = "newgold.MatchGames.subPKGame.ddzPokerGame.game.tablePlayer."
    self.tablePlayerTable[1] = require(tmpPath .. "TablePlayerMy").new(mainRuler)       --require(g_PokerTablePlayerCover[mainRuler][1]).new(mainRuler)
    self.tablePlayerTable[2] = require(tmpPath .. "TablePlayerRight").new(mainRuler)    --require(g_PokerTablePlayerCover[mainRuler][2]).new(mainRuler)
    self.tablePlayerTable[3] = require(tmpPath .. "TablePlayerOpp").new(mainRuler)      --require(g_PokerTablePlayerCover[mainRuler][3]).new(mainRuler)
    self.tablePlayerTable[4] = require(tmpPath .. "TablePlayerLeft").new(mainRuler)     --require(g_PokerTablePlayerCover[mainRuler][4]).new(mainRuler)

    -- 初始化某些数据
    for k, v in ipairs(self.tablePlayerTable or {}) do 
        if v ~= 0 and not tolua.isnull(v) and not tolua.isnull(self.bgPanel) then 
            -- 添加到手牌panel中去,并赋予层级优先级
            self.bgPanel:addChild(v,4-k)
        end 
    end 
end 

-- 是否开启实时语音
function DDZGameBase:isOpenRealTimeVoice()
    local isOpen = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_REAL_TIME_SPEECH) 
    --禁用文字
    self.isForbidText = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT)
    
    if isOpen then
        self.isChooseRealTimeVoice = true --勾选了实时语音
        --判断是否是新包
        if RealTimeVoice and G_IS_INTEGRATE_REALTIMEVOICE then
            self.realTimeVoiceBtn:show()
            self.voiceBtn:hide()
            
            local function refreshRealVoiceState()
                if self.realTimeVoiceSwitch == nil then
                    self.realTimeVoiceSwitch = true
                end
                if self.realTimeMicSwitch == nil then
                    self.realTimeMicSwitch = true
                end
                if g_UserDataTable.lastRoomId == self.tableID then
                    self.realTimeVoiceSwitch = g_UserDataTable.realTimeVoiceSwitchOn
                end
                g_UserDataTable.lastRoomId = self.tableID
                self:updateRealTimeSpeakerState()
                self:updateRealTimeMicState()
                g_RealTimeVoiceMgr:EnableSpeaker(self.realTimeVoiceSwitch)
                g_RealTimeVoiceMgr:EnableMic(self.realTimeMicSwitch and not self.isWatchWar)
            end

            if g_UserDataTable.lastRoomId ~= self.tableID then
                --退出实时语音
                if g_RealTimeVoiceMgr and g_RealTimeVoiceMgr:IsRoomEntered() then
                    g_RealTimeVoiceMgr:ExitRoom()
                end
            end
            
            if not g_RealTimeVoiceMgr:IsRoomEntered() then
                g_RealTimeVoiceMgr:EnterRoom(self.tableID, 
                function(data)
                    if tolua.isnull(self) then
                        return
                    end

                    if data.result == 0 then
                        refreshRealVoiceState()
                    else
                        ShowToastMsg("开启实时语音失败，请退出房间再重新进入。");
                    end
                end)
                
            else
                refreshRealVoiceState()
            end
        else
            self.realTimeVoiceBtn:hide()
            self.voiceBtn:hide()
            
            --退出实时语音
            if g_RealTimeVoiceMgr and g_RealTimeVoiceMgr:IsRoomEntered() then
                g_RealTimeVoiceMgr:ExitRoom()
            end
        end
        -- --禁用文字
        -- self.isForbidText = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT)
    else
        self.isChooseRealTimeVoice = false --没有勾选实时语音
        self.realTimeVoiceBtn:setVisible(false)
        self.voiceBtn:hide()
        
        --退出实时语音
        if g_RealTimeVoiceMgr and g_RealTimeVoiceMgr:IsRoomEntered() then
            g_RealTimeVoiceMgr:ExitRoom()
        end
        
        --禁止互动
        -- self.isNoInteraction = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_MUST_NO_INTERACTION)
        -- if self.isNoInteraction then
        --     self.voiceBtn:hide()
        --     self.chatBtn:hide()
        --     g_RealTimeVoiceMgr:EnableSpeaker(false)
        --     g_RealTimeVoiceMgr:EnableMic(false)
        -- end

        --禁用语音
        self.isForbidVoice = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_VOICE)
        if self.isForbidVoice then
            self.voiceBtn:hide()
            g_RealTimeVoiceMgr:EnableSpeaker(false)
            g_RealTimeVoiceMgr:EnableMic(false)
        end

        -- --禁用文字
        -- self.isForbidText = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT)
        if self.isForbidText then
            --self.chatBtn:hide()
        end
    end

end 

-- 雨
function DDZGameBase:showRedPacket()
    --切后台保留            
end 

-- 播放春天
function DDZGameBase:handleChunTianMsg()
    local path = "poker/animation/chuntian.csb"
    if cc.FileUtils:getInstance():isFileExist(path) then
        local csbNode = cc.CSLoader:createNode(path)
        local actTimeLine = cc.CSLoader:createTimeline(path)
        csbNode:runAction(actTimeLine)
        actTimeLine:play("animation0", false)  
        csbNode:setPosition(display.cx,display.height*0.55)
        csbNode:setScale(1.2)
        self.bgPanel:addChild(csbNode,50)
    end
end 

-- 玩家说明信息
function DDZGameBase:freshGameRuleDescBtn()
    if not tolua.isnull(self.textGameRuleDesc) then

        self.gameRuleImgBg:setVisible(true)

        local wanfaInfo = g_gameGlobal:parseWanfaList(self.MainGamePlayRule, self.MinorGamePlayRuleList, " ",nil,nil,nil,nil,true,true, true,true)

         -- 当前局数
        if self.curJuShu > 0 then 
            local gameCountStr = string.format("第 %d-%d 局 ",self.curJuShu,self.totalJuShu)
            wanfaInfo = gameCountStr..wanfaInfo
        end 

        -- 获取背景的尺寸大小
        local bgsize = self.gameRuleImgBg:getBoundingBox()
        self.gameRuleSize = bgsize
        local showTxt = ""
        -- 是否超出
        local isMore = false 
        local len = string.len(wanfaInfo)
        local len2 = string.utf8len(wanfaInfo)

        for i=1, string.utf8len(wanfaInfo) do 
            local tmpStr = showTxt..string.utf8sub(wanfaInfo,i,i)
            self.textGameRuleDesc:setString(tmpStr)
            local txtWidth = self.textGameRuleDesc:getBoundingBox().width
            if txtWidth >= bgsize.width - 40 then 
                isMore = true 
                self.textGameRuleDesc.str1 = showTxt
                showTxt = showTxt.."\n"..string.utf8sub(wanfaInfo,i,string.utf8len(wanfaInfo))
                self.textGameRuleDesc.str2 = showTxt
                break
            else 
                showTxt = tmpStr
            end 

            if i == string.utf8len(wanfaInfo) then 
                self.textGameRuleDesc.str1 = tmpStr
            end 
        end 

        self.gameRuleImgBg.isMore = isMore
        -- 按钮事件
        self.gameRuleImgBg.isClick = false 

        local function onClickFunc()
            if not tolua.isnull(self.gameRuleImgBg) then
                if self.gameRuleImgBg.isMore then  
                    if self.gameRuleImgBg.isClick then 
                        -- 加载对应的文字
                        if self.textGameRuleDesc.str2 then 
                            self.textGameRuleDesc:setString(self.textGameRuleDesc.str2)
                            -- 加载对应的图片
                            self.gameRuleImgBg:loadTextures("Match/poker/ddzGame/DeskUI/n2_pop2back05.png","Match/poker/ddzGame/DeskUI/n2_pop2back05.png","",ccui.TextureResType.plistType)
                            self.gameRuleImgBg:setScale9Enabled(true)
                            :setCapInsets(cc.rect(10,0,6,53))
                            self.gameRuleImgBg:setContentSize(self.gameRuleSize.width,53)
                            self.textGameRuleDesc:setPositionY(50)
                        end 
                    else
                        self.textGameRuleDesc:setString(self.textGameRuleDesc.str1)
                        self.textGameRuleDesc:setPositionY(27)
                        self.gameRuleImgBg:loadTextures("Match/poker/ddzGame/DeskUI/n2_pop2back04.png","Match/poker/ddzGame/DeskUI/n2_pop2back04.png","",ccui.TextureResType.plistType)
                        self.gameRuleImgBg:setScale9Enabled(true)
                        :setCapInsets(cc.rect(10,0,6,30))
                        self.gameRuleImgBg:setContentSize(self.gameRuleSize)
                    end  
                else
                    self.textGameRuleDesc:setString(self.textGameRuleDesc.str1)
                    self.textGameRuleDesc:setPositionY(27)
                    self.gameRuleImgBg:loadTextures("Match/poker/ddzGame/DeskUI/n2_pop2back04.png","Match/poker/ddzGame/DeskUI/n2_pop2back04.png","",ccui.TextureResType.plistType)
                    self.gameRuleImgBg:setScale9Enabled(true)
                    :setCapInsets(cc.rect(10,0,6,30))

                    self.gameRuleImgBg:setContentSize(self.gameRuleSize)
                end 
            end 
        end 

        onClickFunc()

        self.gameRuleImgBg:onClick(function()
            self.gameRuleImgBg.isClick = not self.gameRuleImgBg.isClick
            onClickFunc()
        end)

    end
end   

-- 创建对应游戏的player层
function DDZGameBase:createAllTablePlayer( mainRuler )
    
    self.tablePlayerTable = {0,0,0,0}
    local mainRuler = g_gameGlobal:getCurrGameKind()
    local tmpPath = "newgold.MatchGames.subPKGame.ddzPokerGame.game.tablePlayer."
    self.tablePlayerTable[1] = require(tmpPath .. "TablePlayerMy").new(mainRuler)       --require(g_PokerTablePlayerCover[mainRuler][1]).new(mainRuler)
    self.tablePlayerTable[2] = require(tmpPath .. "TablePlayerRight").new(mainRuler)    --require(g_PokerTablePlayerCover[mainRuler][2]).new(mainRuler)
    self.tablePlayerTable[3] = require(tmpPath .. "TablePlayerOpp").new(mainRuler)      --require(g_PokerTablePlayerCover[mainRuler][3]).new(mainRuler)
    self.tablePlayerTable[4] = require(tmpPath .. "TablePlayerLeft").new(mainRuler)     --require(g_PokerTablePlayerCover[mainRuler][4]).new(mainRuler)
    for i, v in pairs(self.tablePlayerTable) do
        self.bgPanel:addChild(v,4-i)
        if i == 1 then
            v:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER)
        else
            v:setLocalZOrder(g_gameConstant.TABLEPLAYERBASE_ZORDER)
        end
    end
end

function DDZGameBase:WaitbtnEventFunc( target )

    local data = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    if target == self.inviteBtn or target == self.xlInviteBtn or target == self.cnInviteBtn or target == self.inviteBtnAll then
        
    elseif target == self.copyRoomIDBtn then
        -- 复制房间号
    elseif target == self.clubInviteBtn then
        -- 亲友圈邀请
    -- 准备
    elseif target == self.readyBtn then
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
                operation = g_gameConstant.GAME_OPERTAION_PLAYER_CLICK_READY,
            })
        self.readyBtn:setVisible(false)
    end
end
--[[
    按钮位置调整：
        优先级：
            复制房间号
            俱乐部邀请
            邀请微信好友
            三方邀请
--]]
function DDZGameBase:fixBtnPos()
    local showNums = 0
    local showBtnList = {}

    local function isShowAddNums(btn)
      --  do return end 
        if btn and not tolua.isnull(btn) and btn:isVisible() then
            showNums = showNums + 1
            table.insert(showBtnList, btn)
        end
    end
    isShowAddNums(self.inviteBtnAll)
    isShowAddNums(self.inviteBtn)
    isShowAddNums(self.copyRoomIDBtn)
    isShowAddNums(self.clubInviteBtn)
    --isShowAddNums(self.xlInviteBtn)
    --isShowAddNums(self.cnInviteBtn)

    if showNums==0 then
        return
    end
    if showNums == 3 then
        showBtnList[1]:setPositionX(0.2*display.width)
        showBtnList[2]:setPositionX(0.5*display.width)
        showBtnList[3]:setPositionX(0.8*display.width)
    elseif showNums == 1 then
        showBtnList[1]:setPositionX(0.5*display.width)
    elseif showNums == 2 then
        showBtnList[1]:setPositionX(0.3*display.width)
        showBtnList[2]:setPositionX(0.7*display.width)
    end
--------------先注释，以后再看----
    -- if showNums<=3 then
    --     -- 第一个位置复制房间号固定，posy依次递减
    --     local posy1 = 0
    --     local size_height = 0
    --     local space = 5
    --     table.walk(showBtnList, function(btn, k)
    --             if k==1 then
    --                 posy1 = btn:getPositionY()
    --                 size_height = btn:getContentSize().height
    --             else
    --                 local cur_posy = posy1 - (k-1)*(size_height+space)
    --                 btn:setPositionY(cur_posy)
    --             end
    --         end)
    -- else
    --     -- 3个以上两列排
    --     local posx_percent1 = 0.37
    --     local posx_percent2 = 0.63
    --     local posy_percent1 = 0.65
    --     local posy_percent2 = 0.18

    --     showBtnList[1]:setPositionPercent(cc.p(posx_percent1, posy_percent1))
    --     showBtnList[2]:setPositionPercent(cc.p(posx_percent1, posy_percent2))
    --     showBtnList[3]:setPositionPercent(cc.p(posx_percent2, posy_percent1))
    --     showBtnList[4]:setPositionPercent(cc.p(posx_percent2, posy_percent2))
    -- end
----------------end----------
end

function DDZGameBase:getPlayerNumDesc()
    local curP = self:getCurrentPlayerNum()
    local maxP = g_gameGlobal:getMaxPlayerNum()

    if maxP>0 and curP>0 and curP<maxP then
        return ExternalFunc.numberToString(curP) .. "缺" .. ExternalFunc.numberToString(maxP-curP) .. ","
    end
    return ""
end

function DDZGameBase:setGameModel( model )
    if model == g_gameConstant.GOLD_GAME_MODEL then
        self.vipTableID = nil
        self.inviteBtnAll:setVisible(false)
        self.inviteBtn:setVisible(false)
        self.xlInviteBtn:setVisible(false)
        self.cnInviteBtn:setVisible(false)
        self.copyRoomIDBtn:setVisible(false)
        self.clubInviteBtn:setVisible(false)
    elseif model == g_gameConstant.VIP_GAME_MODEL then
        if g_gameGlobal:isGuestLogin() then
            self.inviteBtnAll:setVisible(false)
            self.inviteBtn:setVisible(false)
            self.xlInviteBtn:setVisible(false)
            self.cnInviteBtn:setVisible(false)
            self.copyRoomIDBtn:setVisible(false)
            self.clubInviteBtn:setVisible(false)
        end
        self:fixBtnPos()
    end
end
-- 电池、WiFi、网络状态
function DDZGameBase:updatePowerAndNet()
      
    -- 显示房间
    self.roomIDBg:setVisible(true)
--    local infoStr = string.format("第 %d/%d 局  房间号：%d", self.curJuShu or 0, self.totalJuShu or 0, self.tableID or 0)
--    self.roomIDLabel:setString(infoStr)
    self.roomIDLabel:setString(tostring(""))
    -- 显示时间、网络、等
    self.StateImgBg:setVisible(true)

    local scheduler = cc.Director:getInstance():getScheduler()
    local imgPath = "poker/ddzGame/DeskUI/"
    -- 网络类型
    local networkSpf = {imgPath.."netMarkUnconnect.png",imgPath.."netMarkWifi.png",imgPath.."netMarkMobile.png"}

    local function freshFunc(time)
        display.loadSpriteFrames(imgPath.."PDKDeskUI.plist", imgPath.."PDKDeskUI.png")     

        local currTime = time or os.date("%m-%d %H:%M")

        if not tolua.isnull(self.timeLabel)  then
            self.timeLabel:setString(currTime)
        end
    end 

    local function scheduleFunc(dt)
        freshFunc()
    end

    if not g_gameGlobal:getIsPlayingGameLog() then 
        scheduleFunc()
        schedule(self, scheduleFunc, 30)
    else 
        
        local logTime = self.logTimeStr
        local spaceIndex = string.find(logTime, " ")
        -- 日期是否带年份
        if spaceIndex > 7 then
            logTime = string.sub(logTime, 6)
        end
        freshFunc(logTime)
    end 
end 

function DDZGameBase:getPlayerJiabeiInfo()
    local ret = {}
    for k, v in ipairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            local pIndex = v.playerIndex
            if pIndex and pIndex ~= 0 then
                ret[pIndex] = v:isPlayerJiabei()
            end
        end
    end
    return ret
end


function DDZGameBase:changeRoomBtnEvent(sender)
    
end


function DDZGameBase:onPlayerJoin()
    if not self.changeRoomBtn:isVisible() then
        return
    end
    
    local playerCount = 0
    for k, v in ipairs(self.tablePlayerInfoTable) do
        if v ~= 0 then
            playerCount = playerCount + 1
        end
    end
    
    if playerCount >= g_gameGlobal:getMaxPlayerNum() then
        self.changeRoomBtn:setVisible(false)
        if not tolua.isnull(self.changeTableView) then
            self.changeTableView:removeSelf()
            self.changeTableView = nil
        end
    end
end

function DDZGameBase:onPlayerExit()
    if not self.clubId or self.clubId == 0 or self.changeRoomBtn:isVisible() or not g_gameConstant.CLUB_CHANGE_TABLE_ENABLED then
        return
    end
    
    self.changeRoomBtn:setVisible(true)
end


function DDZGameBase:updateJushuInfo()
    if tolua.isnull(self.jushuLable) then
        return
    end
    
    self.jushuLable:setString(string.format("%d/%d", self.curJuShu, self.totalJuShu))
end


function DDZGameBase:onPlayerOutCards()

end











return DDZGameBase