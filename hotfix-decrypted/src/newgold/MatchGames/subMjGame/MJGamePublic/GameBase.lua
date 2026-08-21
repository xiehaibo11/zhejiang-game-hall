local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local ShareFlaunt = import(".ShareFlaunt")
local GameTool = import(".GameTool")
local GameBase = class("GameBase", cc.load("mvc").ViewBase)
local GameAudioParser = import("newgold.MatchGames.GamePublic.GameAudioParser")
local GameConfig = require("newgold.MatchGames.subMjGame.MJGamePublic.GameConfig")
local HuanPaiClass = require("newgold.MatchGames.subMjGame.MJGamePublic.GameHuanPai")
local GameBaseConfig = require("newgold.MatchGames.GamePublic.GameBaseConfig")
local GamePublic = require("newgold.MatchGames.GamePublic.GamePublic")

-- local Platform = require("app.platform.Platform")
-- local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

local huanPaiObj = nil

local OderIndex = 0
-- 过胡提示key
local KEY_USERDEFAULT_GUOHU = "mj_gh_tip_able"

--幸运表情动画名
local luckAnimationName = {
    [1] = "caishend",
    [2] = "xishou",
    [3] = "zhaocm",
}

--幸运表情提示名字
local luckName = {
    [1] = "财神爷",
    [2] = "洗手",
    [3] = "招财猫",
}

--幸运表情偏移量，让其居中
local luckOffset = {
    [1] = cc.p(-15, -280),
    [2] = cc.p(-50, -120),
    [3] = cc.p(-15, -140),
}

--幸运表情持续时间
local luckTime = {
    3.0,
    5.9,
    4.2,
}

local posDirection = {
    [1] = "xia",
    [2] = "you",
    [3] = "shang",
    [4] = "zuo",
}

local cardBackColor = {
    [1] = "xipailv", --深绿
    [2] = "xipaichen",
    [3] = "xipaihuang",
    [4] = "xipailv1",
    [5] = "xipailan",
    [6] = "xipaihuang1",
}

local shuffleErrorCode = {
    [0] = "请求成功，下一局开始前将为你洗牌",
    [1] = "对不起，您的房卡不足，请稍后重试",
    [2] = "已经请求成功了，请不要重复请求",
    [3] = "对不起，当前不能洗牌",
}

local shuffleAnimationPos = {
    ["xia"] = cc.p(g_gameGlobal:getDisplayWidth() / 2, 150),
    ["you"] = cc.p(g_gameGlobal:getDisplayWidth() - 200, g_gameGlobal:getDisplayHeight() / 2 - 30),
    ["shang"] = cc.p(g_gameGlobal:getDisplayWidth() / 2, g_gameGlobal:getDisplayHeight() - 160),
    ["zuo"] = cc.p(200, g_gameGlobal:getDisplayHeight() / 2 - 30),
}

local luckData = {}

local function canQuickStartFor2or3Player(gameKind)
    return gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_QMXZ
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SC_LSMJ
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SC_MJ_NANCHONG
--        or gameKind == g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ
        or (gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R and g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_2_REN_WAN))
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH
        or gameKind == g_gameConstant.GAME_PLAY_RULE_SC_MJ_MIANYANG
end

function GameBase:canQuickStart()
    return canQuickStartFor2or3Player(self.mainRuler)
end

local GameBaseExpendInfoNode = import(".GameBaseExpendInfoNode")


GameBase.srcGameResultLyr = "newgold.MatchGames.subMjGame.MJGamePublic.GameResultLayer"
GameBase.srcTingCardListNode = "newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.TingCardListNode"
GameBase.srcGameAnimation = "newgold.MatchGames.subMjGame.MJGamePublic.GameAnimations"
GameBase.srcHeadImgView = "newgold.MatchGames.GamePublic.HeadImgView"
GameBase.srcGameSet = "newgold.MatchGames.subMjGame.MJGamePublic.GameSetLayer"

GameBase.srcGameMainView = "newgold.MatchGames.subMjGame.MJGamePublic.GameMainView"

function GameBase:ctor(mainRuler,playerNum, ...)
    
    huanPaiObj = HuanPaiClass.new()
    self.huanPaiObj = huanPaiObj

    -- todo
    -- if mainRuler and g_GameBaseCover[mainRuler] then
    --     for k,v in pairs(require(g_GameBaseCover[mainRuler])) do
    --         if self[k] then
    --             self["___Overlay_hide_" .. k] = self[k]
    --         end
    --         self[k] = v
    --     end
    -- end

    self.mainRuler = mainRuler
    self.playerNum = g_gameGlobal:getMaxPlayerNum() or 4
    self.showLianZhuang = false
    self.fixScaleX = 1
    self.gameAudioParser = GameAudioParser.new(mainRuler)
    local viewScaleX = cc.Director:getInstance():getOpenGLView():getScaleX()
    local viewScaleY = cc.Director:getInstance():getOpenGLView():getScaleY()
    if viewScaleX > viewScaleY and display.sizeInPixels.width/display.sizeInPixels.height>=2 then
        self.fixScaleX = 1/(viewScaleX/viewScaleY)
        self.fixScaleX = (1-self.fixScaleX)*0.8 + self.fixScaleX
    end

    self.tablePlayerInfoTable = {0,0,0,0}          --麻将中最多4个人，初始值都为0，如果有人数加进来就替换0，存放每个玩家详细信息，从左到右依次为自己，下家，对家，上家。
    self.tablePlayerHeadImgTable = {0,0,0,0}       --哪个位置坐的有人，
    self.tablePlayerTable = {0,0,0,0}               --各个玩家的手牌，出牌
    self.playerOperationTime = 15               --玩家操作时间
    self.startDaoJiShi = false
    self.warnDaoJiShi = false
    
    self.tablePlayerScores = {}

    self._const_hu_small_result_delay = 1.2
    self.smallResultDelay = 1.2

    self.isClub = false       --是否是亲友圈开房

    self.is_have_change_action = false -- 是否带有换三张动画

    self.curJuShu = 0

    self.isFangzhu = false 

    self.djsSchedle = nil

    self.tingShow = false

    self._voiceMsgQueue = {} --语音播放队列

    GameBase.super.ctor(self, ...)

    -- GameBase.instance = self
    self.curGameModle = g_gameConstant.GOLD_GAME_MODEL
    self.gameMainView = nil

    self.isGameResultShow = false

    self.isGameBigResultCanShow = false

    self.isChooseRealTimeVoice = false --是否勾选了实时语音

    self.isVipSupportTuoguan = false -- 是否支持托管

    self.isSupportSlowChuAni = false -- 是否支持慢速出牌动画
    
    self.isSceneReady2PlayEnterFx = false  -- 是否完成了场景切换
    self.enterRoomFxCache   = {}

    self.deskRoundInfo = {}  --key,v 

    self.chatFaceType = 1
    -- 玩家选缺的数据
    self.playerQueIndexList = {g_gameConstant.GAME_QUE_COLOUR_INVALID,g_gameConstant.GAME_QUE_COLOUR_INVALID,g_gameConstant.GAME_QUE_COLOUR_INVALID,g_gameConstant.GAME_QUE_COLOUR_INVALID}

    self.bigResultInfoType = 1
    
    if type(self.__subCoverCtorFunc) == "function" then
        self:__subCoverCtorFunc()
    end

    if G_TEEST_HELP_TOOL_CHU then
        local btnAuto = ccui.Button:create()
        btnAuto:setPosition(cc.p(200, 400))
        btnAuto:ignoreContentAdaptWithSize(false)
        btnAuto:setContentSize(cc.size(120, 40))
        btnAuto:addChild(cc.LayerColor:create(cc.c4b(137, 255, 39, 255), 120, 40), -1)
        btnAuto:setTitleText(G_TEEST_AUTO_CHU and "关闭自动" or "开启自动")
        btnAuto:setTitleColor(cc.c3b(0, 0, 0))
        btnAuto:setTitleFontSize(28)
        btnAuto:addTo(self,1000)
        btnAuto:setTag(-1)
        btnAuto:addTouchEventListener(function(ref, eventType)
            if eventType == ccui.TouchEventType.ended then
                G_TEEST_AUTO_CHU = not G_TEEST_AUTO_CHU
                btnAuto:setTitleText(G_TEEST_AUTO_CHU and "关闭自动" or "开启自动")
            end
        end
        )
    end
    
    -- 记录玩家是否已选缺
    self.playerHasXuanQue = {}
    
    self.selQueScheId = nil
    self.cacheScheIds = {}

    self.luckStatus = 0
    self.luckTipStatus = 0
    self.luckAnimationCache = {}
    self.shuffleData = {} --储存洗牌玩家座位数据
    self.msgCache = {} --洗牌期间消息缓存
    local d = g_gameGlobal:getLuckExpressionData()
    for k, v in pairs(d) do
        luckData[tonumber(k)] = v
        luckData[tonumber(k)]["initFreeNum"] = v["freeTimes"]
    end
    
    -- 简单处理下预加载
    GamePublic:loadItemFxPool()
end


function GameBase:getInstance()
    return GameBase.instance
end

function GameBase:onCreate(baseCsb)

    local gameBaseCsb = baseCsb or "GameBaseView.csb"

    self:createResoueceNode(gameBaseCsb)

    cc.SpriteFrameCache:getInstance():addSpriteFrames("nozip/nozip0.plist")
    display.loadSpriteFrames("game/game0.plist", "game/game0.png")

    local bgPanel = self.resourceNode_:getChildByName("bgPanel")
    self.bgPanel = bgPanel
    self.bgPanel:setScaleX(self.fixScaleX)

    self:refreshBackGround()

    self.marker = self.bgPanel:getChildByName("marker")
    self.marker:setLocalZOrder(g_gameConstant.TABLE_CARD_MARK_ZORDER)
    self.marker:setVisible(false)
    
    self.AtlasLabel_CRoomId = g_gameGlobal:findChildWithName(bgPanel, "AtlasLabel_CRoomId")
    self.AtlasLabel_CRoomId:setString("")

    -- 断勾卡不需要设置方位位置
    if g_gameGlobal:getCurrentWanFa().wanfa ~= g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ then 
        self.fangweiBg = self.bgPanel:getChildByName("fangweiBg")
        self.fangweiBg:setPositionY(g_gameGlobal:getDisplayHeight()/2)
    end 

    local TingCardListNode = require(self.srcTingCardListNode)
    --听牌提示
    self.tingCardListNode = TingCardListNode:create()
    self.tingCardListNode:setPosition(cc.p(g_gameConstant.TING_LIST_POS_X, g_gameConstant.TING_LIST_POS_Y))
    self.tingCardListNode:hide()
    self.bgPanel:addChild(self.tingCardListNode,g_gameConstant.TABLE_CARD_MARK_ZORDER + 2)
    --self.roomIDCBg = g_gameGlobal:findChildWithName(bgPanel, "roomIDCBg")

    -- 房间号
    self.expendInfoNode = GameBaseExpendInfoNode:create():addTo(self.bgPanel,g_gameConstant.TABLEPLAYERSELECT_ZORDER+1):move(0, g_gameGlobal:getDisplayHeight())

    -- 延时图片和文字
    self.img_delay_2 = self.bgPanel:getChildByName("Image_delay_2"):setVisible(false)
    self.img_delay_3 = self.bgPanel:getChildByName("Image_delay_3"):setVisible(false)
    self.img_delay_4 = self.bgPanel:getChildByName("Image_delay_4"):setVisible(false)

    -- 玩法
    self.wanfaBg = g_gameGlobal:findChildWithName(bgPanel, "wanfaBg")
    self.wanfaBg:setLocalZOrder(g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER + 1)

    self.Panel_InGameBtns = bgPanel:getChildByName("Panel_InGameBtns")
    -- 聊天按钮
    self.chatBtn = self.Panel_InGameBtns:getChildByName("chatBtn")
    self.chatBtn:setVisible(false)

    self.chatBtn:onClick(handler(self, self.btnEventFunc))

    -- 设置按钮
    self.setBtn = self.Panel_InGameBtns:getChildByName("setBtn")
    self.setBtn:onClick(handler(self, self.btnEventFunc))

    --战绩按钮
    self.zhanjiBtn = self.Panel_InGameBtns:getChildByName("zhanjiBtn")
    self.zhanjiBtn:onClick(handler(self, self.btnEventFunc))
    self.zhanjiBtn:hide()

    --听牌按钮
    self.tingpaiBtn = self.Panel_InGameBtns:getChildByName("tingpaiBtn")
    g_gameGlobal:adapteIponeXNode(self.tingpaiBtn,false)
    self.tingpaiBtn:onClick(handler(self, self.btnEventFunc))
    self.tingpaiBtn:hide()
    -- 语音按钮
    self.realTimeMicSwitch = true
    self.voiceBtn = self.Panel_InGameBtns:getChildByName("voiceBtn")
    g_gameGlobal:adapteIponeXNode(self.voiceBtn,false)
    self.voiceBtn:setVisible(false)
    self.voiceBtn:onTouch(function(event)
        if voice and not tolua.isnull(voice) then
            voice:on_outside_btn_touch(event)
            -- Platform.requestPermissions({g_gameGlobal.Permission.RECORD_AUDIO })
        end
    end)

    self.luckBtn = g_gameGlobal:findChildWithName(bgPanel, "luckBtn")
    self.luckBtn:onClick(handler(self, self.btnEventFunc))
    self.luckBtn:setLocalZOrder(666)
    self.luckBtn:setVisible(false)

    if g_gameGlobal:getCurrentWanFa().wanfa ~= g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ then
        g_gameGlobal:adapteIponeXNode(self.chatBtn,false)
        g_gameGlobal:adapteIponeXNode(self.setBtn,false)
        --g_gameGlobal:adapteIponeXNode(self.zhanjiBtn,true)
        g_gameGlobal:adapteIponeXNode(self.luckBtn,true)
    end 

    --实时语音
    self.realTimeVoiceBtn = self.Panel_InGameBtns:getChildByName("realTimeVoiceBtn")
    self.realTimeVoiceSwitch = true
    g_gameGlobal:adapteIponeXNode(self.realTimeVoiceBtn,false)
    if self.realTimeVoiceBtn then
        self.realTimeVoiceBtn:hide()
        self.realTimeVoiceBtn:onTouch(handler(self, self.realTimeVoiceFunc))
    end
    
    --退出观战
    self.leaveWatchWarBtn = self.Panel_InGameBtns:getChildByName("leaveWatchWarBtn")
    if self.leaveWatchWarBtn then
        self.leaveWatchWarBtn:hide()
        self.leaveWatchWarBtn:onTouch(handler(self, self.leaveWatchWar))
    end
    self.Image_watchWarFlag = self.Panel_InGameBtns:getChildByName("Image_watchWarFlag")
    self.Image_watchWarFlag:hide()

    --GPS按钮
    --TODO预加载处理一下资源
    self.gpsBtn = g_gameGlobal:findChildWithName(bgPanel, "gpsBtn")
    self.gpsBtn:onClick(handler(self, self.btnEventFunc))
    self.gpsBtn:setVisible(false)

    --规则按钮
    self.ruleBtn = self.Panel_InGameBtns:getChildByName("ruleBtn")
    if not tolua.isnull(self.ruleBtn) then
        self.ruleBtn:onClick(handler(self, self.ruleBtnFunc))
    end
    
    -- 时间
    --self:timeSchedule()

    --otherBg
    self.otherBg = bgPanel:getChildByName("otherBg")
    
    -- 方位
    self.fangweiBg = bgPanel:getChildByName("fangweiBg")
    self.fangweiBg:setVisible(false)
    local fangweiForm = self.fangweiBg:getChildByName("fangweiForm")
    self.leftCardBg = fangweiForm:getChildByName("Image_1")
    self.fangweiTable = {}
    for i=1,4 do
        self.fangweiTable[i] = fangweiForm:getChildByName("fangwei_"..i)
        self.fangweiTable[i].flashImg = self.fangweiTable[i]:getChildByName("flashImg")
        self.fangweiTable[i]:setVisible(false)
        self.fangweiTable[i].flashImg:setVisible(false)
        local fadeOut = cc.FadeOut:create(1)
        local fadeIn = cc.FadeIn:create(0.5)
        local seq = cc.Sequence:create(fadeOut, fadeIn)
        self.fangweiTable[i].flashImg:runAction(cc.RepeatForever:create(seq))
    end
    -- 剩余时间
    self.leftTime = self.fangweiBg:getChildByName("leftTime")
    self.leftTime:setString("")
    
    -- 玩家标题背景
    local gameRuleObj = self.bgPanel:getChildByName("btn_RuleDesc")
    if not tolua.isnull(gameRuleObj) then
--        if g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ == self.mainRuler then
            
        -- 为了控制层级 将此obj clone后单独添加到节点
--            self.gameRuleImgBg = gameRuleObj:clone()
--            local gameScene = g_gameGlobal:getGameScene() or display.getRunningScene()
--            gameScene:addChild(self.gameRuleImgBg, g_gameConstant.JIESANROOMVIEW_ZORDER - 5)
            
--            self.textGameRuleDesc = self.gameRuleImgBg:getChildByName("textGameRuleDesc")
            
--            self.textGameRuleDesc:setString("")
        
--        else
            gameRuleObj:removeFromParent()
--        end
    end
    
    

    -- 局数 
    self.leftRoundBg = g_gameGlobal:findChildWithName(self.fangweiBg, "leftRoundBg")

    self.jushu = fangweiForm:getChildByName("Image_3"):getChildByName("jushu")
    self.jushu:setString(0)

    -- 剩余牌数量 
    --self.leftCardBg = g_gameGlobal:findChildWithName(self.fangweiForm, "leftCardBg")


    self.leftCardNum = fangweiForm:getChildByName("Image_1"):getChildByName("leftCardNum")
    self.leftCardNum:setString(0)
    
    -- 连庄 
    self.lianzhuangBg = g_gameGlobal:findChildWithName(self.fangweiBg, "lianzhuangBg")
    self.lianzhuangBg:setVisible(false)
    self.lianzhuangText = self.lianzhuangBg:getChildByName("lianzhuangText")
    self.lianzhuangText:setString(0)

    -- 底分
    self.difengBg = g_gameGlobal:findChildWithName(self.fangweiBg, "difengBg")
    self.difengBg:setVisible(false)
    self.difengText = self.difengBg:getChildByName("difengText")
    self.difengText:setString(0)

    -- 叫令
    self.jiaolingBg = g_gameGlobal:findChildWithName(self.fangweiBg, "jiaolingBg")
    self.jiaolingBg:setVisible(false)
    self.lingText = self.jiaolingBg:getChildByName("lingText")
    self.lingText:setString(0)

    --roundInfoListView
    self.roundInfoListView = g_gameGlobal:findChildWithName(self.fangweiBg, "listView_roundInfo")
    self.roundInfoListView:setTouchEnabled(false)
    self.roundInfoListView:setScrollBarEnabled(false)

    self:netEvent()

    self:refreshExpandInfo();

    self.laiziBg = g_gameGlobal:findChildWithName(bgPanel, "laiziBg")
    self.laiziBg:setVisible(false)
    
    local laiziDesc = g_gameGlobal:findChildWithName(self.resourceNode_, "laiziDesc")
    if laiziDesc then laiziDesc:setString("") end  

    -- local gpsLayer = self:getGpsLayer()
    -- if g_gameGlobal:getIsPlayingGameLog() then
    --     if gpsLayer then
    --         gpsLayer:removeFromParent()
    --     end
    -- else
    --     gpsLayer:refreshLayer(self.playerNum)
    -- end
    local panelGuohu = self.fangweiBg:getChildByName("Panel_guohu")
    
    if not tolua.isnull(panelGuohu) then
        panelGuohu:setVisible(false)
        -- 过胡提示移到了设置中
        if false then
            self.isGuohuNotice = cc.UserDefault:getInstance():getBoolForKey(KEY_USERDEFAULT_GUOHU, false)
            
            if not g_gameGlobal:getIsPlayingGameLog() then
                local checkBoxGuohu = panelGuohu:getChildByName("CheckBox")
                checkBoxGuohu:setTouchEnabled(false)
                checkBoxGuohu:setSelected(self.isGuohuNotice)
                panelGuohu:setTouchEnabled(true)
                panelGuohu:onClick(function ()
                    local isSelected = checkBoxGuohu:isSelected()
                    checkBoxGuohu:setSelected(not isSelected)
                    
                    self.isGuohuNotice = not isSelected
                    cc.UserDefault:getInstance():setBoolForKey(KEY_USERDEFAULT_GUOHU, self.isGuohuNotice)
                end)
                
                panelGuohu:setVisible(true)
            else
                panelGuohu:setVisible(false)
            end
            self.panelGuohu = panelGuohu
        end
    end
    
    -- 添加一个换牌事件节点
    self.actionNodeHuanpai = display.newNode()
        :addTo(self)
    
    
    -----
    -- 创建个玩法名称节点
    self:genRoomNameNode()
end

-- 创建个玩法名称节点
function GameBase:genRoomNameNode()
    -- 创建个玩法名称节点
    -- local bgPanel = self.resourceNode_:getChildByName("deskBackGround")
    -- if not tolua.isnull(bgPanel) then
    --     local roomNameNode = GamePublic:genRoomNameNode(self.mainRuler)
    --     -- 给层级2，防万一被背景icon遮挡
    --     bgPanel:addChild(roomNameNode, 2)
    --         roomNameNode:setPosition(cc.p(display.cx, g_gameGlobal:getDisplayHeight() * 0.54444 + 120))
    -- end
end

function GameBase:hideMarker()
    self.marker:setVisible(false)
    self.marker:stopAllActions()
end

-- 延时选项———
function GameBase:respondDelayIconAndTime(posState,isShow,times,isAllClose)
    -- 获取时间格式
    local function timeFormat(time)
        local s_format = "拖延:%s%s:%s"
        local h_str = ""
        local m_str = ""
        local s_str = ""
        if time > 59 then 
            local min = math.floor(time/60)
            local hours = math.floor(min/60)
            local sec = time%60

            if sec > 9 then 
                s_str = tostring(sec)
            else 
                s_str = tostring("0"..sec)
            end 

            if min > 59 then
                h_str = string.format("%s:",hours)
                min = min%60
                if min > 9 then 
                    m_str = tostring(min)
                else 
                    m_str = tostring("0"..min)
                end 
            else 
                if min > 9 then 
                    m_str = tostring(min)
                else 
                    m_str = tostring("0"..min)
                end 
            end 
        else 
            m_str = "00"
            if time < 10 then 
                s_str = tostring("0"..time)
            else 
                s_str = tostring(time)
            end 
        end 

        local str = string.format(s_format,h_str,m_str,s_str)
        return str 
    end 
    -- 停止定时器
    local function stopSchedule(obj)
        if tolua.isnull(obj) or obj.schedule == nil then 
            return
        end 

        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(obj.schedule)
    end 
    -- 开始定时器
    local function startSchedule(obj,time)
        if tolua.isnull(obj) then 
            return
        end 

        local txtNode = obj:getChildByName("Text_Time")
        local startTime = time
        obj.schedule = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function ()
            startTime = startTime + 1
            local str = timeFormat(startTime)
            txtNode:setString(str)
        end, 1, false)

    end
    -- 全关
    if isAllClose then 
        self.img_delay_2:setVisible(false)
        self.img_delay_3:setVisible(false)
        self.img_delay_4:setVisible(false)
        stopSchedule(self.img_delay_2)
        stopSchedule(self.img_delay_3)
        stopSchedule(self.img_delay_4)
        return 
    end 
    -- 单个操作
    local objNode = self["img_delay_"..tostring(posState)]
    if not tolua.isnull(objNode)then 
        objNode:setVisible(isShow)
        if isShow then 
            local txtNode = objNode:getChildByName("Text_Time")
            local txtTime = timeFormat(times)
            txtNode:setString(txtTime)
            startSchedule(objNode,times)
        else
            stopSchedule(objNode)
        end 
    end 
end

function GameBase:updateMarkerPosAndAnimal(pos, offsetPos, delay)
    self.marker:stopAllActions()
    self.marker:setAnchorPoint(cc.p(0.5, 0))
    self.marker:move(pos.x + offsetPos.x, pos.y + offsetPos.y)

    local sequence = cc.Sequence:create(cc.MoveBy:create(0.4, cc.p(0, 15)), cc.MoveBy:create(0.4, cc.p(0, -15)))
    local action = cc.RepeatForever:create(sequence)
    self.marker:runAction(cc.RepeatForever:create(action))

    --直接显示，不做延时
    self.marker:setVisible(true)
    -- if type(delay) == "number" and delay > 0 then
    --     self.marker:setVisible(false)
    --     performWithDelay(self.marker, function() self.marker:setVisible(true) end, 0)
    -- else
    --     self.marker:setVisible(true)
    -- end
end

local tableBkgSrc = {
    {src = "bigImg/pz_bj5.png", marker = "bigImg/pz_bj5_panda.png"},
    {src = "bigImg/pz_bj4.png", marker = "bigImg/pz_bj4_panda.png"},
    {src = "bigImg/pz_bj7.jpg",},
    {src = "bigImg/pz_bj6.jpg",},
}

function GameBase:refreshBackGround()

    local bgPanel = self.resourceNode_:getChildByName("deskBackGround")
    local bkgType = g_UserDataTable.gameBgColorTypeMJ
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
                :move(cc.p(display.cx + 2.5, g_gameGlobal:getDisplayHeight() * 0.5444))
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


function GameBase:playVoiceWith(audioContent)
    print('receive voice msg...')
    if tolua.isnull(self) then
        return
    end
    --if device.platform == "android" or device.platform == "ios" then
        --将语音数据保存进队列
        table.insert(self._voiceMsgQueue,audioContent)
        self:playVocie()
    --end
end

function GameBase:refreshTooNearMark()
    
    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then 
        local distanceDesc,toNearStr
        for i,v in ipairs(self.tablePlayerHeadImgTable) do
            if type(v) == "userdata" and not tolua.isnull(v) then
                v:visibleToNear(false)
                
                v:updateDistanceDesc(distanceDesc)
            end
        end

        -- 游戏后续需要有每局开始检测一次距离过近判断，暂时先屏蔽
        if type(toNearStr) == "string" and string.len(toNearStr) > 5 then 
            --ShowConfirmBox(toNearStr)
        end 
        
        local needShowGpsWarning = false
        self:refreshGpsLayer(needShowGpsWarning and g_UserDataTable.gpsWarningSwitch == 1)
    end 
end

function GameBase:netEvent()
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    
    self:addChild(netObj.new(g_msgDefinitions.MSG_TALKING_IN_GAME, function (event, msg)
        --dump(msg)
        if g_gameGlobal:getIsPlayingGameLog() then
            return 
        end
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.playerPos)
        if msg.msgType == 0 then --系统自带聊天文本
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                local cfg = g_quickChatCfg[self.MainGamePlayRule][msg.unused0 or g_UserDataTable.gameLanguageCfgIndex]
                if cfg then
                    local text = Language[string.format(cfg.prefix.."%d",msg.msgNo)]
                    --方言和普通话互发语言，兼容处理
                    if text then
                        self.tablePlayerHeadImgTable[posState]:showChatText(text)
                        local url = string.format("sound/%s/%s/%d.mp3",cfg.name,msg.playerSex == 1 and "man" or "female",msg.msgNo+1)
                        if cfg.fileSubPath and #cfg.fileSubPath>0 then
                            url = string.format("sound/%s/%s/%s/%d.mp3",cfg.name,msg.playerSex == 1 and "man" or "female", cfg.fileSubPath, msg.msgNo+1)                            
                        end
                        NG.soundManager:playMatchEffect(url)
                    end
                end
            end
        elseif msg.msgType == 1 then --表情
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showChatFace(self.chatFaceType, msg.msgNo)
            end
        elseif msg.msgType == 2 then --用户输入文本
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:showChatText(msg.msgText)
            end
        elseif msg.msgType == 3 then --语音消息
            if not ((G_IS_INTEGRATE_REALTIMEVOICE or RealTimeVoice) and self.isChooseRealTimeVoice) then
                local time = msg.unused0/100
                local audioContent = {
                    content={
                        msg=msg.audio,--音频数据
                        time=time--音频时长(秒)
                    },
                    sender=posState--发送的玩家的客户端逻辑椅子号
                }
                self:playVoiceWith(audioContent)
            end
        elseif msg.msgType == 4 then --互动表情
            local fromPlayer = posState --发送者的客户端逻辑椅子号

            local toPlayer = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)   --对方客户端逻辑椅子号
            local isVip = (not g_gameGlobal:getVipTableID() or g_gameGlobal:getVipTableID()==0)
            if self.tablePlayerHeadImgTable[fromPlayer] ~= 0 and isVip then
                self.tablePlayerHeadImgTable[fromPlayer]:refreshGoldNum(msg.unused1)
            end
            local index = msg.msgNo --互动表情索引 从1开始
            if toPlayer == fromPlayer then
                local first = true
                if self.tablePlayerHeadImgTable[fromPlayer] ~= 0 then
                    for i,v in ipairs(self.tablePlayerHeadImgTable) do
                        if i ~= fromPlayer and v ~= 0 and self.tablePlayerInfoTable[i]~=0 then
                            local toPIcon = v.headFrame
                            local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                            self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1, first)
                            first = false
                        end
                    end
                end
            else
                if self.tablePlayerHeadImgTable[fromPlayer] ~= 0 and self.tablePlayerHeadImgTable[toPlayer] ~= 0 and self.tablePlayerInfoTable[toPlayer]~=0 then
                    local toPIcon = self.tablePlayerHeadImgTable[toPlayer].headFrame
                    local endPos = toPIcon:getParent():convertToWorldSpace(cc.p(toPIcon:getPosition()))
                    self.tablePlayerHeadImgTable[fromPlayer]:showInteractiveFace(endPos,index, fromPlayer == 1, true)
                end
            end
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_UPDATE_GPS_POSITION, function (event, msg)
        --dump(msg , "msg")
        local tablepos = msg.playerTablePos
        self:refreshTooNearMark()

        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablepos)
        if self.tablePlayerHeadImgTable and self.tablePlayerHeadImgTable[posState] ~= 0 and msg.playerPostion ~= "" then
            self.tablePlayerHeadImgTable[posState]:updateIpInfo(msg.playerPostion)
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
            -- 若处于回放中接收到该消息，不予处理
            return 
        end 
        
        -- bugly 24312 添加判断gameScene是否为空
        local gameScene = g_gameGlobal:getGameScene()
        -- 清除一键开房界面
        local LiJiKaiJuLayer = gameScene and gameScene:getChildByName("LiJiKaiJuLayer")
        if not tolua.isnull(gameScene) then 
            -- 清除一键开房界面
            local LiJiKaiJuLayer = gameScene:getChildByName("LiJiKaiJuLayer")
            if not tolua.isnull(LiJiKaiJuLayer) then 
                LiJiKaiJuLayer:removeSelf()
            end 
        end 

        if not tolua.isnull(self.jiesanView) then
            self.jiesanView:removeSelf()
        end
        
        -- 等待界面房间被解散直接回大厅
        if self.curJuShu < 1 then-- not self.isGameStart then
            g_gameGlobal:setIsInPaiZhuo(false)
            g_gameGlobal:backToLobby()
            return
        end
        
        -- 清理掉延时提醒的定时器
        self:respondDelayIconAndTime(nil,nil,nil,true)

        local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
        if vipRoomClose and not self.isGameResultShow then   
            self:endGameTime()         
            CloseAllPopMsgView()
            if self.curJuShu == 0 then
                g_gameGlobal:setIsInPaiZhuo(false)
                g_gameGlobal:backToLobby()
                return
            end
            if g_gameGlobal:getGameScene() ~= nil then
                
                local gameBigResultSrc = GameBaseConfig.getGameBigResultPath(self.mainRuler)
                    or "newgold.MatchGames.subMjGame.MJGamePublic.GameBigResultLayer"
                local gameBigResultLayer = require(gameBigResultSrc):create()
                if gameBigResultLayer ~= nil then
                    g_gameGlobal:getGameScene():add(gameBigResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
                end
            end
            --清理掉创建游戏的 返回数据
            g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
        end
        self.isGameBigResultCanShow = true
    end))
    
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK, function (event, msg)
        print("gamebase work with MSG_GAME_GAME_OVER_ACK")
        
        -- 清理掉延时提醒的定时器
        self:respondDelayIconAndTime(nil,nil,nil,true)

        self:onGameOver(msg)
        
    end))

    --通知玩家去选择上噶
    self:addChild(netObj.new(g_msgDefinitions.MSG_NOTIFY_SHANG_GA, function (event, msg)
        local function progress(cmd, msg)
            if self.instance then
                if self.tablePlayerTable[1] ~= 0 then
                    self.tablePlayerTable[1]:notifyShangGa(msg.minNum, msg.maxNum)
                    --上噶倒计时 不管是否开启自动托管,都走倒计时
                    -- if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN) then
                        self.leftTime:setString(15)
                        self.warnDaoJiShi = true
                        self.startDaoJiShi = true
                    -- end
                end
            end
        end
        if self.instance then
            progress(g_msgDefinitions.MSG_NOTIFY_SHANG_GA, msg)
        else
            FixGlobal:saveNoEnterMsg(g_msgDefinitions.MSG_NOTIFY_SHANG_GA, msg, self, progress)
        end
    end))

    --广播有玩家做了上噶操作
    self:addChild(netObj.new(g_msgDefinitions.MSG_SHANG_GA, function (event, msg)
        local function progress(cmd, msg)
            if self.instance then
                local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
                if self.tablePlayerTable[posState] ~= 0 then
                    self.tablePlayerTable[posState]:shangGa(msg.gaScore)
                end
                if type(self.tablePlayerHeadImgTable[posState])=="userdata" and not tolua.isnull(self.tablePlayerHeadImgTable[posState]) then
                    self.tablePlayerHeadImgTable[posState]:xzScore(msg.gaScore)
                end
                if posState == 1 then
                    self.leftTime:setString(15)
                    self.warnDaoJiShi = false
                    if self.warningLight then
                        self.warningLight:setVisible(false)
                    end
                    if msg.unused0 == 1 then
                        local tuoguanAutoShangga = cc.CSLoader:createNode("Match/gameModel/tuoguanAutoShangga.csb")
                        local tipTxt = g_gameGlobal:findChildWithName(tuoguanAutoShangga, "autoGaTip")
                        tipTxt:setString(string.format( "系统为你自动选择了%d噶", msg.gaScore))
                        display.getRunningScene():add(tuoguanAutoShangga, 901)
                        tuoguanAutoShangga:move(display.cx, display.cy-30)
    
                        tuoguanAutoShangga:runAction(cc.Sequence:create(
                            cc.MoveBy:create(2, cc.p(0, 100)),
                            cc.CallFunc:create(function()
                                tuoguanAutoShangga:removeSelf()
                            end),
                        nil))
                    end
                end
            end
        end
        if self.instance then
            progress(g_msgDefinitions.MSG_SHANG_GA, msg)
        else
            FixGlobal:saveNoEnterMsg(g_msgDefinitions.MSG_SHANG_GA, msg, self, progress)
        end
    end))

    -- --广播有玩家N道包牌
    -- self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_NOTIFY_N_DAO, function (event, msg)
    --     local function progress(cmd, msg)
    --         if self.instance then
    --             local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.playerPos)
    --             if self.tablePlayerTable[posState] ~= 0 then
    --                 self.tablePlayerTable[posState]:notifyNDao(msg.num)
    --             end
    --         end
    --     end
    --     if self.instance then
    --         progress(g_msgDefinitions.MSG_GAME_NOTIFY_N_DAO, msg)
    --     else
    --         FixGlobal:saveNoEnterMsg(g_msgDefinitions.MSG_GAME_NOTIFY_N_DAO, msg, self, progress)
    --     end
    -- end))

    --广播有玩家首张被跟
    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_NOTIFY_FIRST_CARD_EFFECT, function (event, msg)
        local function progress(cmd, msg)
            if self.instance then
                local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
                if self.tablePlayerTable[posState] ~= 0 then
                    self.tablePlayerTable[posState]:notifyFirstCardEffect(msg.operationId)
                end
            end
        end
        if self.instance then
            progress(g_msgDefinitions.MSG_GAME_NOTIFY_FIRST_CARD_EFFECT, msg)
        else
            FixGlobal:saveNoEnterMsg(g_msgDefinitions.MSG_GAME_NOTIFY_FIRST_CARD_EFFECT, msg, self, progress)
        end
    end))

    self:addChild(netObj.new(g_msgDefinitions.MSG_GAME_REFRESH_ITEM_BASE_ACK, function (event, msg)
        local itemList =  msg.itemList
        local gameCost = {}
        for _,v in pairs(itemList) do
            if v.base_id > 7000 and v.base_id < 8000 then
                gameCost[v.base_id] = v.price
            end
            if v.base_id > 3000 and v.base_id < 4000 then
                local diamondInfo = g_gameGlobal:getMinDiamondInfo()
                if not next(diamondInfo) then 
                    g_gameGlobal:setMinDiamondInfo(v)
                end
            elseif v.base_id >5000 and v.base_id < 6000 then
                local goldInfo = g_gameGlobal:getMinGlodInfo()
                if not next(goldInfo) then 
                    g_gameGlobal:setMinGlodInfo(v)
                end
            end
        end
        g_gameGlobal:setGameCostData(gameCost)
        self:updateLuckView()
        self:updateResultShuffleCost()
    end))
    
    
    -- 转运卡数据
    self:addChild(netObj.new(g_msgDefinitions.MSG_GET_PLAYER_GOOD_LIST_ACK, function (event, msg)
        -- 转运道具
        if msg.goodsType ~= 2 then
            print("bag donot listen this...\n" .. debug.traceback())
            return
        end
        
        self.luckItemList = {}
        
        for k, item in ipairs(msg.playerGoodList) do
            
            self.luckItemList[item.baseID] = item
        end
        
        -- 尝试刷新view
        self:updateLuckView()
    end))
end

function GameBase:flushScoreFromSmallResult(msg)
    if g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_CALCULATE_SCORE_AT_ONCE) then
        return
    end
    
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

function GameBase:onGameOver(msg)
    GlobalEventManager:onEvent(eventType.GAME_GAMEOVER)
    
    self:flushScoreFromSmallResult(msg)
    
    -- 清除规则页面
    if not tolua.isnull(self.layerRuleDialog) then
        self.layerRuleDialog:removeSelf()
        self.layerRuleDialog = nil
    end
    
    if g_gameGlobal:getIsPlayingGameLog() then 
        -- 若处于回放中接收到该消息，不予处理
        return 
    end 
    
    local gameScene = g_gameGlobal:getGameScene()

    if not tolua.isnull(gameScene) then 
        -- 清除一键开房界面
        local LiJiKaiJuLayer = gameScene:getChildByName("LiJiKaiJuLayer")
        if not tolua.isnull(LiJiKaiJuLayer) then 
            LiJiKaiJuLayer:removeSelf()
        end  
    else 
        return 
    end 

    CloseAllPopMsgView()
    self:endGameTime()
    if not tolua.isnull(self.jiesanView) then
        self.jiesanView:removeSelf()
    end
    
    local resultSrc = self.srcGameResultLyr or "newgold.MatchGames.subMjGame.MJGamePublic.GameResultLayer"

    -- 计分界面(小计分)
    local gameResultLayer = require(resultSrc):create(self.curGameModle)
    if g_gameGlobal:getGameScene() then
        -- eventMgr:dispatch(eventType.GAME_RESULT_ON_SHOW, nil)
        --雨部分
        self:showRedPacketLayer(msg.unused5, self.smallResultDelay)
        g_gameGlobal:getGameScene():add(gameResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER+1)
        gameResultLayer:setVisible(false)
        gameResultLayer:setName("GameResultLayer")
        performWithDelay(gameResultLayer,function()
            gameResultLayer:setVisible(true)
        end, self.smallResultDelay)

        if self.tablePlayerTable[1] ~= 0 then
            local cardType, huType, moreCardType = GameTool.transResultHuType(self.tablePlayerTable[1]:getHuResultTypes())
            if (cardType or huType) and not g_gameGlobal:getIsPlayingGameLog() then
                local shareLayout = ShareFlaunt:create(cardType, huType, msg, moreCardType)
                g_gameGlobal:getGameScene():add(shareLayout, g_gameConstant.ROOMCLOSEVIEW_ZORDER + 2)
                shareLayout:setVisible(false)
                performWithDelay(shareLayout,function()                        
                    shareLayout:setVisible(shareLayout.needShow)
                end, self.smallResultDelay)
            end
        end
    end
    self.isGameResultShow = true
end

function GameBase:notifyShangGa()
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

    if self.luckStatus and self.luckStatus == 2 then
        self.luckStatus = 0
        local m_LuckNode = g_gameGlobal:getGameScene():getChildByName("luck_animation")
        if m_LuckNode and not tolua.isnull(m_LuckNode) then
            m_LuckNode:removeFromParent()
        end
        if table.nums(self.luckAnimationCache) > 0 then
            self:playLuckAnimation(self.luckAnimationCache[1],true)
        else
            if self.chatBtn and not tolua.isnull(self.chatBtn) then
                self.chatBtn:setTouchEnabled(true)
                for k, v in pairs(self.tablePlayerHeadImgTable) do
                    if v and v ~= 0 then
                        v:setHudongEnable(true)
                    end
                end
            end
        end
    end
    if self.luckTipStatus and self.luckTipStatus == 1 then
        self.luckTipStatus = 0
        local tipAction = self.luckBtn:getChildByName("luck_action_tip")
        if tipAction and not tolua.isnull(tipAction) then
            tipAction:removeFromParent();
        end
    end

    if self.shuffleNode and self.shuffleStatus then
        for k, v in pairs(self.shuffleStatus) do
            if v then
                self.shuffleStatus[k] = false
                self.shuffleNode[k]:removeFromParent()
                self.shuffleNode[k] = 0
            end
        end
        local isAllRemove = 1
        for k, v in pairs(self.shuffleNode) do
            if type(v) == "userdata" then
                isAllRemove = 0
                break
            end
        end
        if isAllRemove == 1 then
            self:clearShuffleAnimation()
        end
    end

end

function GameBase:onPlayVoiceOver()
    --隐藏当前位置播放语音消息的动画
    if self.tablePlayerHeadImgTable[self._playingSeat] ~= 0 then
        self.tablePlayerHeadImgTable[self._playingSeat]:showChatVoice(false)
    end
    self._playingSeat = nil
end

function GameBase:uploadGpsData()
    
end

function GameBase:sendPlayerGpsData()
    
end

-- 场景切换完成
function GameBase:onEnterTransitionFinish()
    
    performWithDelay(self, function ()
        -- 
        self.isSceneReady2PlayEnterFx = true
        
        -- check enterRoomFx 记录的动画逐个播放
        for k = #self.enterRoomFxCache, 1, -1 do
            local itemFx = self.enterRoomFxCache[k]
                self:addEnterRoomFx(itemFx.roomFlashID, itemFx.posState)
            
            table.remove(self.enterRoomFxCache, k)
        end
    end, g_gameConstant.ENTER_ROOM_FX_DELAY or 0.5)
end

function GameBase:onEnter()

    GameBase.instance = self

    self:onUpdate(handler(self,self.update))

    --if self.tableID then
        local playerGameOpertaionMsg = {}
        playerGameOpertaionMsg.opertaionID= g_gameConstant.GAME_OPERTAION_QUERY_TABLE_DISMISS    --是否有人解散桌子
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    --end

    self:refreshPrice()
end

function GameBase:onExit()
    -- 清理掉延时提醒的定时器
    self:respondDelayIconAndTime(nil,nil,nil,true)

    -- 清除一键开房界面
    performWithDelay(self,function()
        local LiJiKaiJuLayer = g_gameGlobal:getGameScene():getChildByName("LiJiKaiJuLayer")
        if not tolua.isnull(LiJiKaiJuLayer) then 
            LiJiKaiJuLayer:removeSelf() 
        end 
    end, 0)

    self.gpsBtn:stopAllActions()
    g_gameGlobal:setGameStart(false)
    self:endGameTime()
    GameBase.instance = nil
    
    -- 释放缓存的定时器
    if self.cacheScheIds and next(self.cacheScheIds) then
        for k, v in pairs(self.cacheScheIds) do
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(k)
        end
    end
    g_gameGlobal:setPlayerShuffleData({})
end

function GameBase:updateRealTimeMicState()
    if self.realTimeMicSwitch then
        self.voiceBtn:loadTextures("noplist/mic_on.png", "noplist/mic_on.png", "",ccui.TextureResType.localType)
    else
        self.voiceBtn:loadTextures("noplist/mic_off.png", "noplist/mic_off.png", "",ccui.TextureResType.localType)
    end
end

function GameBase:updateRealTimeSpeakerState()
    if not self.realTimeVoiceBtn then
        return
    end

    if self.realTimeVoiceSwitch then
        self.realTimeVoiceBtn:loadTextures("noplist/speaker_on.png", "noplist/speaker_on.png", "",ccui.TextureResType.localType)
    else
        self.realTimeVoiceBtn:loadTextures("noplist/speaker_off.png", "noplist/speaker_off.png", "",ccui.TextureResType.localType)
    end
end

function GameBase:realTimeVoiceFunc(event)
    if event.name == "ended" then
        self.realTimeVoiceSwitch = not self.realTimeVoiceSwitch
        g_UserDataTable.realTimeVoiceSwitchOn = self.realTimeVoiceSwitch
        self:updateRealTimeSpeakerState()
    end
end

function GameBase:getTablePlayerHeadIcons()
    local tb = {}
    for i,v in ipairs(self.tablePlayerHeadImgTable) do
        if type(v)=="userdata" and not tolua.isnull(v) then
            tb[i] = v:getHeadIcon()
        end
    end
    return tb
end

function GameBase:updateSetLayer()
    
    local setLayer = g_gameGlobal:getGameScene():getChildByName("GameSetLayer")
    if not tolua.isnull(setLayer) then
        setLayer:updateGameWanFaSetting(self.isFangzhu, self.isGameStart)
    end
end

function GameBase:btnEventFunc(sender)
    if sender == self.chatBtn and g_gameGlobal:getGameScene() ~= nil then
        
    elseif sender == self.gpsBtn then
        --self:refreshGpsLayer(true)
    elseif sender == self.setBtn then
        g_gameGlobal:backToLobby()
    elseif  sender == self.zhanjiBtn then
        
    elseif sender == self.tingpaiBtn then
        if self.tablePlayerTable[1] ~= 0 then
            local doShow = not self.tablePlayerTable[1]:isTingListShow()
            self.tablePlayerTable[1]:showTingList(doShow)
        end
       -- self:setMarkerZorder(g_gameConstant.TABLE_CARD_MARK_ZORDER - 2)
    elseif sender == self.luckBtn then
        local gameScene = g_gameGlobal:getGameScene()
        if gameScene and not tolua.isnull(gameScene) then
            local m_LuckAnimation = gameScene:getChildByName("luck_animation")
            if (not m_LuckAnimation or tolua.isnull(m_LuckAnimation)) then
                local tipAction = self.luckBtn:getChildByName("luck_action_tip")
                if tipAction and not tolua.isnull(tipAction) then
                    self.luckTipStatus = 1
                end
                if (not g_gameGlobal:getGameScene():getChildByName("luck_view")) then
                    self:setLuckViewVisible(true)
                else
                    self:setLuckViewVisible(false)
                end
            end
        end
    end
end

function GameBase:getTingNode(  )
    if self.tingCardListNode then
        return self.tingCardListNode
    end
end
function GameBase:refreshGpsLayer(needCreate)
    if g_gameGlobal:getGameScene() ~= nil and g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 and g_UserDataTable.gameGPSSetState then
        if not (self.curJuShu > 1) then
            local person = g_gameGlobal:getMaxPlayerNum()
            local gpsLayer = self:getGpsLayer()
            if not gpsLayer then
                if needCreate then
                    gpsLayer = require("app.gps.GpsNewLayer"):create(person):addTo(self.bgPanel, g_gameConstant.HEADIMGVIEW_OPEN_ZORDER+1)
                    gpsLayer:setName("fullview_gpsLayer")
                    
                    -- 重设头像信息
                    for k, v in ipairs(self.tablePlayerInfoTable or {}) do
                        if v and v ~= 0 then
                            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
                            self:loadGpsHead(v, posState)
                        end 
                    end
                end
            else
                gpsLayer:refreshLayer(person)
            end
        end
    end
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

function GameBase:getGpsLayer(isShow,pos)

    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 and g_UserDataTable.gameGPSSetState and not g_gameGlobal:getIsPlayingGameLog() then
        local gpsLayer = self.bgPanel:getChildByName("fullview_gpsLayer")
        if not gpsLayer then
            gpsLayer = require("app.gps.GpsNewLayer"):create(self.playerNum):addTo(self.bgPanel, g_gameConstant.HEADIMGVIEW_OPEN_ZORDER+1)
            gpsLayer:setName("fullview_gpsLayer")
            
            -- 设头像信息
            for k, v in ipairs(self.tablePlayerInfoTable or {}) do
                if v and v ~= 0 then
                    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
                    self:loadGpsHead(v, posState)
                end 
            end
            gpsLayer:closeGPSPanel()
        else
            gpsLayer:updateGpsInfo()
        end

        if isShow then 
            if self.isGameStart then
                gpsLayer:setZOrder(g_gameConstant.HEADIMGVIEW_OPEN_ZORDER + 1)
            end
            gpsLayer:showGPSPanel()
        end 
        return gpsLayer
    end 
end

function GameBase:getCurrentPlayerNum()
    local ret = 0;
    for k,v in pairs(self.tablePlayerInfoTable) do
        if v ~= 0 then
            ret = ret + 1
        end
    end

    return ret
end

function GameBase:isHasMinorRule(gameRule)
    if type(self.MinorGamePlayRuleList) == "table" then
        for i,v in ipairs(self.MinorGamePlayRuleList) do
            if v == gameRule then
                return true
            end
        end
    end

    return false
end

function GameBase:getHeadPosByLocalPos(localPos)
    local headConfig = g_gameGlobal:getHeadPosConfig()
    return headConfig[localPos].head
end

function GameBase:getInGame()
    return self.isGameStart
end

function GameBase:setInGame(value)
    self.isGameStart = value 
    --self.Panel_InGameBtns:setVisible(value)
    self.gameMainView:setInGame(value)

    if self.tableID and self.tableID>0 then
        --self.roomIDCBg:setVisible(not value)
    else
        --self.roomIDCBg:setVisible(false)
        self.voiceBtn:setVisible(false)
    end
end

function GameBase:initRoomInfo( msgAck )
    if (msgAck == nil) then
        return
    end
    
    -- 直接缓存此数据
    self.requestStartGameAckCache = msgAck
    
    -- 观战标识
    self.isWatchWar = (msgAck.unused5 and msgAck.unused5 == 1)
    
    -- 禁止查看id
    self.playerIndexVisible = msgAck and (msgAck.unused3 ~= 1) or false
    
    local headFrameFxInfo = {}
    local tData
    local ok = pcall(function()
        tData = cjson.decode(msgAck.headFrame)
    end)

    if ok then
        headFrameFxInfo = tData
    end
    
    -- 初始化阶段状态
    g_gameGlobal:setLijiKaiJuState(false)
    
    self.goldLevel = msgAck.roomID
    -- 保存我的座位号
    g_gameGlobal:setMyTablePos(msgAck.tablePos)

    msgAck.__bigResultInfoType = self.bigResultInfoType
    -- 等待界面
    self.expendInfoNode:setMode(true)
    local wanfa=msgAck.newPlayWay;
    ---结束
    self.MainGamePlayRule = msgAck.MainGamePlayRule
    self.MinorGamePlayRuleList = msgAck.MinorGamePlayRuleList       
    
    --先创建四个玩家，因为有些麻将游戏开始前有操作
    self:createAllTablePlayer(self.MainGamePlayRule)

    --g_gameGlobal:setCurrentWanFa(msgAck.newPlayWay)
    --self.wanfa:setString(wanfaInfo)

    -- 加载设置等,vip场不是第一局的话，在第二局等待界面要把等待界面删了，返回大厅和解散房间按钮，用游戏界面按钮点击
    self:setWanfaLayer(wanfaInfo, true)
    local curPlayerCount = #msgAck.players
    local gameMainView = require(GameBase.srcGameMainView):create(self.MainGamePlayRule, msgAck.clubId, curPlayerCount)
    gameMainView:setName("gameMainView")
    gameMainView:setDelegate(self);

    self.gameMainView = gameMainView
    self.gameMainView:setScaleX(self.fixScaleX)
    self.gameMainView:setPositionX(self.gameMainView:getContentSize().width*(1-self.fixScaleX)*0.5)
    self.bgPanel:addChild(gameMainView, g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER-1)
    
    if msgAck.vipTableID > 0 then    --VIP场
        -- 显示房间号
        self.tableID = msgAck.vipTableID
        g_gameGlobal:setVipTableID(msgAck.vipTableID)
        if (not msgAck.clubId or msgAck.clubId==0) then
            self.expendInfoNode:setRoomId("")
        else
            self.isClub = true
            self.expendInfoNode:setRoomId("")
        end
        self.AtlasLabel_CRoomId:setString(tostring(self.tableID))

        -- 总局数
        self.totalJuShu = msgAck.totalHand  
        g_gameGlobal:setCurTotalJuShu(msgAck.totalHand)
        -- 当前局数
        self.curJuShu = msgAck.currentHand
        if self.curJuShu == 0 then
            self:setInGame(false)
            g_UserDataTable.gameEmojCount = 0
        else
            --非第一局之前，幸运按钮直接显示
            self:setLuckBtnVisible(true)
            self:setInGame(true)
        end
        -- 房主信息
        self.vipCreaterName= msgAck.creatorName or ""
        self.createPlayerID = msgAck.createPlayerID or 0
        printf("self.createPlayerID: %s", tostring(self.createPlayerID))
        
        gameMainView:modifyGameState(g_gameConstant.VIP_GAME_MODEL)
        self.leftRoundBg:setVisible(true)
        self.curGameModle = g_gameConstant.VIP_GAME_MODEL;
        
        --禁用文字
        self.isForbidText = self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_FORBID_TEXT)

        if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_REAL_TIME_SPEECH) then
            self.isChooseRealTimeVoice = true --勾选了实时语音
            self.realTimeVoiceBtn:hide()
            self.voiceBtn:show()
        else
            self.isChooseRealTimeVoice = false --没有勾选实时语音
            self.realTimeVoiceBtn:setVisible(false)
            self.voiceBtn:hide()
        end
        
        -- --自动超时托管部分
        if self.curJuShu==0 then
            if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN) then                    
                performWithDelay(self, function() ShowConfirmBox("超过15秒未操作将进入托管状态，系统将自动为你摸牌打牌。",nil,nil,nil,true) 
                end, 0.1)                    
            end
            if msgAck.unused4 == 1 then
                performWithDelay(self, function()
                    ShowToastMsg("所有玩家已同意开局！")
                end, 0.1) 
            end
        end

        if not (self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P) then
            if not (msgAck.currentHand > 0) then
                local gpsLayer = self:getGpsLayer(true)
                if gpsLayer then
                    for k , v in ipairs(msgAck.players) do 
                        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
                        self:loadGpsHead(v,posState)
                    end 
                end
            end
        end
        -- if gpsLayer then
        --     gpsLayer:removeFromParent()
        -- end
        -- if test then
        --     self:showRedPacketLayer(1)
        --     test = false
        -- end
    else
        --金币场幸运按钮直接显示
        self:setLuckBtnVisible(true)
        g_gameGlobal:setVipTableID(0)
        g_UserDataTable.lastRoomId = nil
        g_UserDataTable.realTimeVoiceSwitchOn = true

        local levelStr = {
            [2004] = "初级",
            [2005] = "中级",
            [2006] = "高级",
        }

        self.expendInfoNode:setRoomId("金币场： "..levelStr[self.goldLevel])

        self.leftRoundBg:setVisible(false)
        gameMainView:modifyGameState(g_gameConstant.GOLD_GAME_MODEL)     --金币场
        self.curGameModle = g_gameConstant.GOLD_GAME_MODEL;
        self:setInGame(false)
    end 

    -- 保存玩家信息，可能有多人,玩家信息根据座位号算出实际位置放到self.tablePlayerInfoTable中
    for i, v in pairs(msgAck.players) do
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v.tablePos)
        if posState and posState >=1 and posState <=4 then
            if posState == 1 then
                self.isFangzhu = (v.playerID == self.createPlayerID) and true or false
                g_gameGlobal:setIsMyFangZhu(self.isFangzhu)
            end
            v.headFrameFx = headFrameFxInfo and headFrameFxInfo[tostring(v.tablePos)]
            self.tablePlayerInfoTable[posState] = v
            
            if self.tablePlayerTable[posState] ~= 0 then
                self.tablePlayerTable[posState]:init(v.sex)
            end
            
            -----
            -- 记录前几局的总分
            local sum = g_gameGlobal:getTableSum(v.tableScoreList)
            
            -- 计算当前局的分
            local curRoundFen = v.gold - sum
            local tableScoreList = clone(v.tableScoreList)
            -- if not tableScoreList[self.curJuShu] then
            --     tableScoreList[self.curJuShu] = curRoundFen
            -- end
            
            self.tablePlayerScores[posState] = {
                tableScoreList = tableScoreList,
                roundBeginScore = sum,
            }
            
        end
    end

    if self.tableID and self.tableID > 0 and msgAck.currentHand == 0 then
        local canWanfaQuickStart = canQuickStartFor2or3Player(self.MainGamePlayRule)
        if canWanfaQuickStart and (msgAck.unused1 == 4 or self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R) then
            local tableWait = self.bgPanel:getChildByName("tableWait")
            if tableWait then
                tableWait:setApplayBtn()
            end
        end
    end
    
    --根据玩家人数，创建玩家初始头像，并摆放位置
    local posState = 1
    local fangweiValueTable = {false, false, false, false}
    if g_gameGlobal:getMaxPlayerNum() > 0 then
        for i = 1, g_gameGlobal:getMaxPlayerNum() do
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

            local headImgView = require(self.srcHeadImgView):create(posState,function()
                g_UserDataTable.gameGPSSetState = true
                self:getGpsLayer(true)
            end,self.curGameModle,self.mainRuler,self.isForbidVoice or self.isForbidText)
            self.bgPanel:addChild(headImgView, g_gameConstant.HEADIMGVIEW_CLOSE_ZORDER)

            headImgView:initHeadImgPos(self:getHeadPosByLocalPos(posState))
            self.tablePlayerHeadImgTable[posState] = headImgView
            -- 更新头像数据 
            if self.tablePlayerInfoTable[posState] ~= 0 then
                headImgView:updateTablePlayerInfo(self.tablePlayerInfoTable[posState])
                if self.tableID then
                    if not self.isClub then
                        headImgView:fangzhuVisible(self.tablePlayerInfoTable[posState].playerID == self.createPlayerID)
                    end                        
                end
            end
            fangweiValueTable[posState] = (g_gameGlobal:getMyTablePos()+i-1)%g_gameGlobal:getMaxPlayerNum() + 1
        end
    end
    
    --如果是3人场，方位节点往上移动一点点
    if g_gameGlobal:getMaxPlayerNum() == 3 then
        self.fangweiBg:setPositionY(self.fangweiBg:getPositionY() + g_gameConstant.THREE_PLAYER_MY_CHUCARD_OFFSET_Y)
        self.otherBg:setPositionY(self.otherBg:getPositionY() + g_gameConstant.THREE_PLAYER_MY_CHUCARD_OFFSET_Y)
    end
    
    if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ then 
        for i,v in ipairs(self.fangweiTable) do
            if not fangweiValueTable[i] then
                v:setVisible(false)
            else
                v:setVisible(true)
            end
        end
        
    else
        for i,v in ipairs(self.fangweiTable) do
            if not fangweiValueTable[i] then
                v:setVisible(false)
            else
                v:loadTexture("Match/".."nozip/fangwei_un_" .. fangweiValueTable[i] .. ".png", ccui.TextureResType.plistType)
                v.flashImg:loadTexture("Match/".."xuezhanGame/GameScene/n_play_label_" .. i .. ".png", ccui.TextureResType.plistType)
                v:setVisible(true)
            end
        end
    end 
    
    self:adjustLuckBtnPos()

    --要放到g_gameGlobal:setIsMyFangZhu之后

    -- 血战玩法
    self:judgeIsXZDDGame(msgAck)
    
    self:initUINodeState()
    
    self:initWatchWarUI()
    
    -- 入场动画
    self:addEnterRoomFx(msgAck.enterRoomFlash, 1)
end

function GameBase:initUINodeState()
    if tolua.isnull(self.gameMainView) or g_gameGlobal:getIsPlayingGameLog() then
        return
    end
    self.gameMainView:setSelfIsReady(true)
end

function GameBase:refreshExpandInfo()
end

function GameBase:timeSchedule()
    local scheduler = cc.Director:getInstance():getScheduler()
    local expandInfoTimeTick = 0
    if self.djsSchedle then
        self:endGameTime()
    end
    self.djsSchedle = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            
        if g_gameGlobal:getIsPlayingGameLog() then
            return
        end
        expandInfoTimeTick = (expandInfoTimeTick + 1)%20
        if expandInfoTimeTick == 0 then
            --self:refreshExpandInfo()
        end

        if self.startDaoJiShi then
            local leftTime = tonumber(self.leftTime:getString())
            if leftTime > 0 then
                leftTime = leftTime - 1
            else
                leftTime = 0
                self.startDaoJiShi = false
            end

            local leftTimeStr = tostring(leftTime)
            if leftTime < 10 then 
                leftTimeStr = tostring("0"..leftTime)
            end 

            self.leftTime:setString(leftTimeStr)
            if leftTime == 3 and self.warnDaoJiShi then
               self.djsId =  NG.soundManager:playMatchEffect("sound/timeup_alarm.mp3")
            end
            
            if leftTime > 0 and leftTime <= 3 and (self:isSelfOpRound() or self:isWaitOp()) then
                g_gameGlobal:vibrate(0.5)
            end

            if leftTime == 5 and self.warnDaoJiShi then
                if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN) then
                    if self.warningLight == nil then
                        local csbPath = "Match/animation/warningNode.csb"
                        local aniName = "animation0"

                        self.warningLight = cc.CSLoader:createNode(csbPath)
                        local actTimeLine = cc.CSLoader:createTimeline(csbPath)
                        self.warningLight:runAction(actTimeLine)
                        actTimeLine:play(aniName, true)                         
                        self:addChild(self.warningLight)

                        self.warningLight:setPosition(g_gameGlobal:getDisplayWidth()*0.5 + 360, 160)
                    end
                    self.warningLight:setVisible(true)
                end
            end
        end
    end,1,false)
end

-- 结束倒计时定时器
function GameBase:endGameTime()
    if self.djsSchedle ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.djsSchedle)
        if self.djsId then
            self.djsId = nil
        end
        self.djsSchedle = nil 
    end
end 

function GameBase:gameOperation(msg)
    if g_gameGlobal:getIsPlayingGameLog() and not self.instance then
        return 
    end

    if msg.opertaionID==g_gameConstant.GAME_OPERTAION_PLAYER_LEFT_TABLE then
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
        local gameBase = display.getRunningScene():getChildByName("gameBase")
        if gameBase then
            local lijikaijuLayer = gameBase:getChildByName("LiJiKaiJuLayer")
            if lijikaijuLayer then
                lijikaijuLayer:onExitLayer()
            end
        end

        -- 移除player
        if type(self.tablePlayerInfoTable[posState]) == "table" then
            self.tablePlayerInfoTable[posState] = 0
        end
        if type(self.tablePlayerHeadImgTable[posState])=="userdata" and not tolua.isnull(self.tablePlayerHeadImgTable[posState]) then
            self.tablePlayerHeadImgTable[posState]:initHeadImgPos(self:getHeadPosByLocalPos(posState))
        end
        self:refreshTooNearMark()

        local canWanfaQuickStart = canQuickStartFor2or3Player(self.MainGamePlayRule)
        --首先刷新等待界面的切换按钮的状态
        if self.tableID and self.tableID > 0 and canWanfaQuickStart and (g_gameGlobal:getMaxPlayerNum() == 4 or self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R) then
            local tableWait = self.bgPanel:getChildByName("tableWait")
            if tableWait then
                tableWait:setApplayBtn()
                tableWait:closeChangeView()
            end            
        end

        if not self.isGameStart then 
            if self.curJuShu and not (self.curJuShu > 1 )then
                local gpsLalyer = self:getGpsLayer(true)
                if gpsLalyer then
                    gpsLalyer:cleanPlayerHead(posState)
                end
            end
        end 
        
        -- 广播成员离开房间事件
        GlobalEventManager:onEvent(eventType.GAME_PLAYER_EXIT_ROOM, {})
    
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_TABLE_ADD_NEW_PLAYER then 
        local LastPlayerCount = 0
        for i,v in ipairs(self.tablePlayerInfoTable) do
            if v~=0 then
                LastPlayerCount = LastPlayerCount + 1
            end
        end
        
        local headFrameInfo = json.decode(msg.headFrame)
        
        -- 添加新用户
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.tablePos)
        if posState and (posState >= 1 and posState <= 4) then
            local simplePlayer = {}
            simplePlayer.playerID = msg.playerID
            simplePlayer.playerName = msg.playerName
            simplePlayer.headImg = msg.headImg
            simplePlayer.headImgUrl = msg.targetPlayerName
            simplePlayer.sex = msg.sex
            simplePlayer.playerIndex = msg.playerIndex
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
            simplePlayer.gameState = msg.gameState
            simplePlayer.headFrameFx = headFrameInfo and headFrameInfo[tostring(msg.tablePos)]
            self.tablePlayerInfoTable[posState] = simplePlayer
            if type(self.tablePlayerHeadImgTable[posState]) == "userdata" then
                if not self.isGameResultShow then
                    self.tablePlayerHeadImgTable[posState]:updateTablePlayerInfo(simplePlayer)
                end
                
                if self.tableID then
                    if not self.isClub then
                        self.tablePlayerHeadImgTable[posState]:fangzhuVisible(simplePlayer.playerID == self.createPlayerID)
                    end                    
                end
            end
            
            if self.tablePlayerTable[posState] ~= 0 then
                self.tablePlayerTable[posState]:init(simplePlayer.sex)
            end
            self:loadGpsHead(self.tablePlayerInfoTable[posState],posState)
        end
        --新玩家加入上报一次自己的gps数据，不然新玩家没我的gps数据
        local curPlayerCount = 0
        for i,v in ipairs(self.tablePlayerInfoTable) do
            if v~=0 then
                curPlayerCount = curPlayerCount + 1
            end
        end
        
        local canWanfaQuickStart = canQuickStartFor2or3Player(self.MainGamePlayRule)
        if self.tableID and self.tableID > 0 and canWanfaQuickStart and (g_gameGlobal:getMaxPlayerNum() == 4 or self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R) and 
        LastPlayerCount < curPlayerCount then
            local tableWait = self.bgPanel:getChildByName("tableWait")
            if tableWait then
                tableWait:setApplayBtn()
                tableWait:closeChangeView() --有新玩家加入，当前申请的切换要去掉
            end            
        end
        -- if self.curJuShu==0 and curPlayerCount>0 and curPlayerCount == g_gameGlobal:getMaxPlayerNum() then
            -- if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN) then                    
            --     performWithDelay(self, function() ShowConfirmBox("超过15秒未操作将进入托管状态，系统将自动为你摸牌打牌。",nil,nil,nil,true) end, 0.1)                    
            -- end
        -- end
        
        if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then
            if not (self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P) then
                self:uploadGpsData()

                if not self.isGameStart then 
                    if self.curJuShu and not (self.curJuShu > 1 )then
                        self:getGpsLayer(true)
                    end
                end 
            end
        end
        
        -- 广播玩家加入房间
        GlobalEventManager:onEvent(eventType.GAME_PLAYER_JOIN_ROOM, {
            playerInfo = self.tablePlayerInfoTable,
        })
        
        -----
        -- 入场动画
        self:addEnterRoomFx(msg.enterRoomFlash, posState)
        
    elseif msg.opertaionID==g_gameConstant.GAME_OPERTAION_ROOM_DISMISS then 
        ShowConfirmBox("房主已经离开，房间自动解散。", handler(g_gameGlobal, g_gameGlobal.backToLobby), true)
    elseif msg.opertaionID==g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP then 
        CloseAllPopMsgView()
        
        -- 解散房间同意框
        if not tolua.isnull(self.jiesanView) then
            self.jiesanView:removeSelf()
        end
        self.jiesanView = require("newgold.MatchGames.GamePublic.JieSanView"):create()
        g_gameGlobal:getGameScene():addChild(self.jiesanView, g_gameConstant.JIESANROOMVIEW_ZORDER)
        
        self.jiesanView:updateJieSanInfo(msg, self.tablePlayerInfoTable)
    elseif msg.opertaionID == g_gameConstant.GAME_OPERTAION_BUY_ITEM then
        
    end
end

function GameBase:createAllTablePlayer( mainRuler )
    self.tablePlayerTable = {0,0,0,0}
    
    local tmpPath = "newgold.MatchGames.subMjGame.xzddMjGame.game.tablePlayer."
    self.tablePlayerTable[1] = require(tmpPath .. "TablePlayerMy").new(mainRuler) --require(g_MjTablePlayerCover[mainRuler][1]).new(mainRuler)
    self.tablePlayerTable[2] = require(tmpPath .. "TablePlayerRight").new(mainRuler) --require(g_MjTablePlayerCover[mainRuler][2]).new(mainRuler)
    self.tablePlayerTable[3] = require(tmpPath .. "TablePlayerOpp").new(mainRuler) --require(g_MjTablePlayerCover[mainRuler][3]).new(mainRuler)
    self.tablePlayerTable[4] = require(tmpPath .. "TablePlayerLeft").new(mainRuler) --require(g_MjTablePlayerCover[mainRuler][4]).new(mainRuler)
    for i, v in pairs(self.tablePlayerTable) do
        self.bgPanel:add(v)
        v.isSupportSlowChuAni = self.isSupportSlowChuAni
        if i == 1 then
            v:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER)
            
        else
            v:setLocalZOrder(g_gameConstant.TABLEPLAYERBASE_ZORDER)
        end
    end
end

function GameBase:setTablePlayerOrder(currTopPos)
    for i, v in pairs(self.tablePlayerTable) do
        if v ~= 0 then 
            if i == 1 then
                v:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER)
            else
                v:setLocalZOrder(g_gameConstant.TABLEPLAYERBASE_ZORDER)
            end
        end 
    end
end 

    -- 根据人数创建对应的牌布局
function GameBase:refreshTablePlayerWithMaxNum( maxNum )
    if maxNum == 2 then
        if iskindof(self.tablePlayerTable[4], "cc.Node") then
            self.tablePlayerTable[4]:removeFromParent()
        end
        self.tablePlayerTable[4] = 0
        
        if iskindof(self.tablePlayerTable[2], "cc.Node") then
            self.tablePlayerTable[2]:removeFromParent()
        end
        self.tablePlayerTable[2] = 0
    elseif maxNum == 3 then
        if iskindof(self.tablePlayerTable[3], "cc.Node") then
            self.tablePlayerTable[3]:removeFromParent()
        end
        self.tablePlayerTable[3] = 0
    elseif maxNum == 4 then
    end
end

function GameBase:showLaiziInDesk(LaiZiList)
    local lzIdx = 0
    local totalWidth = g_gameConstant.LAIZI_START_POS_X * 2 - g_gameConstant.LAIZI_OFFSET_X
    self.laiziBg:setVisible(false)
    local laiziNodeBase = self.laiziBg:getChildByName("Node_laiziBase")
    laiziNodeBase:removeAllChildren()
    if self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_ZHUANG_ZHUANG or
       self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER  then
        return
    end
    for i,v in ipairs(LaiZiList) do
        local obj = nil
        if v ~= 0 then
            obj = g_gameGlobal:getNormalCard(v):setAnchorPoint(cc.p(0,0.5))
        end
        if obj then
            obj:setScale(g_gameConstant.LAIZI_SCALE)
            local posX = g_gameConstant.LAIZI_START_POS_X + lzIdx*(obj:getContentSize().width*g_gameConstant.LAIZI_SCALE + g_gameConstant.LAIZI_OFFSET_X)
            obj:setPosition(cc.p(posX, g_gameConstant.LAIZI_START_POS_Y))
            GameTool.addLaiziMarkInCardNode(obj)
            totalWidth = totalWidth + obj:getContentSize().width*g_gameConstant.LAIZI_SCALE + g_gameConstant.LAIZI_OFFSET_X
            self.laiziBg:setVisible(true)
            laiziNodeBase:addChild(obj)
            lzIdx = lzIdx + 1
        end
    end
    self.laiziBg:setContentSize(cc.size(totalWidth, self.laiziBg:getContentSize().height))
    ccui.Helper:doLayout(self.laiziBg); 
end

function GameBase:resetRoundInfo()
    if self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LING] then
        local linV = self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LING]
        local lingDesc = {
            [0] = "东令",
            [1] = "南令",
            [2] = "西令",
            [3] = "北令",
        }
        if lingDesc[linV] then
            self.jiaolingBg:setVisible(true)
            self.lingText:setString(lingDesc[linV])
        end
    end

    local dizhuNum = self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_DI_ZHU]
    if not self.tableID and dizhuNum and dizhuNum>0 then
        self.difengBg:setVisible(true)
        self.difengText:setString(tostring(dizhuNum))
        local dfbgSz = self.difengBg:getContentSize()
        local dfTextSz = self.difengText:getContentSize()
        self.difengBg:setContentSize(cc.size(dfbgSz.width+dfTextSz.width, dfbgSz.height))
    else
        self.difengBg:setVisible(false)
    end

    if self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LIAN_ZHUANG] then
        local lzv = self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LIAN_ZHUANG]
        self.lianzhuangBg:setVisible(true)
        self.lianzhuangText:setString(lzv)
    end

    local tsw = 0
    local itemMg = self.roundInfoListView:getItemsMargin()
    local passedNum = 0
    for i,v in ipairs(self.roundInfoListView:getItems()) do
        if not v:isVisible() then
            v:setContentSize(cc.size(0, 0))
            passedNum = passedNum + 1
        else
            tsw = v:getContentSize().width + tsw + itemMg*passedNum
            passedNum = 1
        end
    end
    self.roundInfoListView:setContentSize(cc.size(tsw, self.roundInfoListView:getContentSize().height))
end

-- Howns 2019-11-27 打补丁，修复天胡时断线重连不显示胡类型图片
function GameBase:tianHuRemoveHuCardFromHandCard( msg, posState )
    -- 天胡时，只有为自己的时候才删除
    if posState == 1 and type(self.tablePlayerInfoTable[posState]) == "table" and self.tablePlayerInfoTable[posState].huType == g_gameConstant.MAHJONG_HU_CODE_TIAN_HU and type(msg.mycards) == "table" and #msg.mycards == 14 then 
        if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG) or self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG) 
        or self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW) or self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW)
        then
            for k, v in pairs(msg.mycards or {}) do 
                if v == self.tablePlayerInfoTable[posState].huCard then 
                    table.remove(msg.mycards,k)
                    return 
                end
            end 
        end 
    end 
end

function GameBase:gameStart( msg )
    -- 观战等待状态， 其他玩家还未发牌
    local isWatchWait = msg.unused4 == 999
    self.isWatchWarWait = isWatchWait
    
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    g_msgCache:cleanMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    -- local msg = event._usedata
    g_gameGlobal:setIsPlayingGameLog(false)
    g_gameGlobal:setLaiZiCouldPutOut(msg.isLaiZiCouldPutOut)
    g_gameGlobal:setGameStart(true)
    g_gameGlobal:setLijiKaiJuState(false)
    if self.gameMainView then
        self.gameMainView:flushDispatchPanel(false)
    end
    -- 清除文字消息
    --self:clearTxtActionNodes()
    if not (msg.quanNum > 1) then
        if not (self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P) then
            performWithDelay(self, function ()
                local gpsLayer = self:getGpsLayer()
                if gpsLayer then
                    gpsLayer:setVisible(false)
                    gpsLayer:removeFromParent()
                end
            end, 1.2)
        end
    end

    -- Howns 增加一个字段表示自己是否托管
    if msg.isRecover == 2 and self.tablePlayerTable[1] then 
        self.tablePlayerTable[1]:setTuoGuanState(true)
    end 

    local inviteLayer = display.getRunningScene():getChildByName("ClubInvitePlayerLayer")
    if inviteLayer then
        inviteLayer:removeFromParent()
    end

    if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_JIAO_LING) then
        self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LING] = msg.unused5
    end
    if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LIAN_ZHUANG) or self.showLianZhuang then
        self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_LIAN_ZHUANG] = msg.isDealerAgain
    end

    self.deskRoundInfo[g_gameConstant.DESK_LOCAL_ROUND_TYPE_DI_ZHU] = msg.dizhu

    self:resetRoundInfo()

    local maxNum = msg.unused1

    self:setInGame(true)
    -- 观战等待状态不显示
    self.fangweiBg:setVisible(not isWatchWait)
    -- 删除等待界面
    local tableWait = self.bgPanel:getChildByName("tableWait")
    if tableWait then
        tableWait:closeView()
    end
    
    local yapaiqiData = {
        msg.yapaiqi,
    }
    
    -- 庄位置
    local zhuangPos = msg.dealerPos
    self.zhuangTablePos = zhuangPos
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(zhuangPos)
    
    -- 更新头像位置以及更新金币和钻数
    for i, v in pairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            -- 将新头像位置从等待界面切换为游戏界面
            v:updateHeadImgPosWithTablePos(self:getHeadPosByLocalPos(i))
            if self.tablePlayerInfoTable[i] ~= 0 then
                -- 更新金币数和钻数
                local tablePos = self.tablePlayerInfoTable[i].tablePos
                local goldNum = msg["player" .. tablePos .. "Gold"]
                local diamondNum = msg["player" .. tablePos .. "Win"]
                v:refreshGoldNum(goldNum, diamondNum)
            end
            
            if not isWatchWait then
                v:refreshReadyState(false)
            else
                v:refreshReadyState(self.tablePlayerInfoTable[i].gameState)
            end
            
            v:zhuangVisible(i == posState and not isWatchWait)
            
            -- 显示压牌器
            v:showCardPressure(yapaiqiData[i])
        end
    end
    
    
    -- 设置局数
    local jushu = bit._and(msg.baoCard, 0xff) - msg.quanNum
    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then 
        self.jushu:setString(msg.quanNum.."/"..bit._and(msg.baoCard, 0xff))
    else
        --self.jushu:setString(msg.quanNum)
        self.jushu:getParent():setVisible(false)
    end 
    self.curJuShu = msg.quanNum

    if self.curGameModle ~= g_gameConstant.GOLD_GAME_MODEL then
        if self.curJuShu <= 1 or self.isWatchWar then
            self.zhanjiBtn:hide()
        else
            self.zhanjiBtn:show()
        end
    end
    self:setLuckBtnVisible(true)
    self.playerOperationTime = msg.playerOperationTime
    if self.playerOperationTime < 5 then
        self.playerOperationTime = 5
    end

    self:refreshTablePlayerWithMaxNum(maxNum)

    -- 根据哪些牌是花牌，没有则代表这个麻将没有花牌
    g_gameGlobal:setCurrentHuaList(msg.huaList)

    if self:checkShuffleState() then
        table.insert(self.msgCache, {"start", msg})     
    else
        self:initGameInfo(msg)
    end
    
    -----
    -- 刷新设置界面
    self:updateSetLayer()
end

function GameBase:initGameInfo(msg)
    local posState = nil
    -- 设置定缺
    if msg.myDingQueValue ~= g_gameConstant.GAME_QUE_COLOUR_INVALID then 
        if self.tablePlayerTable[1] ~= nil and self.tablePlayerTable[1] ~= 0 then 
            self.tablePlayerTable[1]:setQueValue(msg.myDingQueValue,true)
        end 
    end 

    if msg.zhuangMoCard and msg.zhuangMoCard ~= 0 and not self.isWatchWar then 
        self.tablePlayerTable[1]:moCard(bit._and(msg.zhuangMoCard, 0xff))
    end 

    --龙岩的特殊要求，开局要求先补花再显示金牌 所以这里通过各种数据判断下gamestart是开局还是断线重连之后的
    g_gameGlobal:setCurrentLaiziList(msg.LaiZiList, true)
    local isGameGone = false
    local chuCardPlayerIndex = msg.chuCardPlayerIndex
    -- 初始化牌面值
    for i, v in pairs(self.tablePlayerTable) do
        if v ~= 0 then            
            v:setBuhuaListShow(false)--(#g_gameGlobal:getCurrentHuaList() ~= 0)
            -- 999 为观战时小局过度等待阶段，不创建手牌
            if not self.isWatchWarWait then
                self:tianHuRemoveHuCardFromHandCard(msg,i)
                v:initPaiMianValue(msg)
            end
            v:showTableCards(msg.isHideHandCards == 0)
            --这里是不走上噶操作，托管按钮在显示牌之后显示
            if i == 1 and msg.isHideHandCards == 0 then
                self.gameMainView:setSupportTuoguan(self.isVipSupportTuoguan)
            end
            -- 显示胡牌列表
            if self.tablePlayerInfoTable[i] ~= 0 then
                local tablePos = self.tablePlayerInfoTable[i].tablePos
                local isChuCard = false
                if tablePos == chuCardPlayerIndex then
                    isChuCard = true
                end
                if #msg["player" .. tablePos .. "Cards"] > 0 then
                    local chuRet = v:showChuCards(msg["player" .. tablePos .. "Cards"],isChuCard)
                    isGameGone = chuRet or isGameGone 
                    local pos  = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
                    if pos == 1 then
                        local chuCards = msg["player" .. tablePos .. "Cards"]
                        if chuCards[#chuCards] then
                            self.tablePlayerTable[1]:setChuCardValue(chuCards[#chuCards])
                        end
                    end
                    -- if tablePos == chuCardPlayerIndex then
                    --     self:updateMarkerPosAndAnimal()
                    -- end
                end
                if #msg["player" .. tablePos .. "CardsDown"] > 0 then
                    local showRet = v:showChiPengGangCards(msg["player" .. tablePos .. "CardsDown"])
                    isGameGone = showRet or isGameGone 
                end

                if msg["player" .. tablePos .. "WinLoseEqual"] and msg["player" .. tablePos .. "WinLoseEqual"] > 0 then
                    -- v:showHuCard(msg["player" .. tablePos .. "WinLoseEqual"])
                    local huCard = self.tablePlayerInfoTable[i].huCard 
                    local huKind = GameConfig.XZHUINDEX
                    if self.tablePlayerInfoTable[i].huType == g_gameConstant.MAHJONG_HU_CODE_ZI_MO then 
                        huKind = GameConfig.XZZIMOINDEX
                    elseif self.tablePlayerInfoTable[i].huType == g_gameConstant.MAHJONG_HU_CODE_TIAN_HU then
                        huKind = GameConfig.XZZIMOINDEX
                    end 
                    local huIndex = self.tablePlayerInfoTable[i].huNum 
                    local dianPaoPos = self.tablePlayerInfoTable[i].youJiaoNum
                    if i == 1 then 
                        self.tablePlayerTable[1]:moCard(bit._and(huCard, 0xff),nil,nil,dianPaoPos)
                    else 
                        v:showXZHuCard(huCard,dianPaoPos)
                    end
                    -- 显示胡的图片
                    v:playXZHuAction(huKind,huIndex, false)
                end

                if not self.isWatchWarWait then 
                    if bit._and(msg.tingPlayers * (2^ (-tablePos*8)), 0xff) > 0 then
                        v:setTingState(true)
                    end
                end 

                self.tablePlayerHeadImgTable[i]:visibleOffline(false)
                -- if bit._and(msg.OffLinePlayers * (2^ (-tablePos*8)), 0xff) > 0 then
                --     -- 显示离线图标
                --     if self.tablePlayerHeadImgTable[i] ~= 0 and (i ~= 1 or self.isWatchWar) then
                --         self.tablePlayerHeadImgTable[i]:visibleOffline(true)
                --     end
                -- end
            end
        end
    end

    --倒计时
    if msg.currentOpPlayerPos == -1 then
        self:showLeftTimeAndFangWei(msg.chuCardPlayerIndex,msg.playerOperationTime)
    else
        self:showLeftTimeAndFangWei(msg.currentOpPlayerPos,msg.playerOperationTime)
    end
   -- if self.tablePlayerInfoTable[currentOpPlayerPos] ~= 0 then

    if msg.chuCard ~= 0 then
        isGameGone = true
        posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.chuCardPlayerIndex)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:chuOperation(msg.chuCard, false)
        end
    end

    --龙岩的特殊要求，开局要求先补花再显示金牌 所以这里特殊处理一下
    if self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_LONG_YAN then
        if isGameGone then
            g_gameGlobal:setCurrentLaiziList(msg.LaiZiList)
            self:showLaiziInDesk( g_gameGlobal:getCurrentLaiziList() )
            if #g_gameGlobal:getCurrentLaiziList() >  0 then
                for i, v in pairs(self.tablePlayerTable) do
                    if v ~= 0 then            
                        v:setCardSortValues({[0x37] = g_gameGlobal:getCurrentLaiziList()[1]})
                    end
                end
            end
        else
            g_gameGlobal:setCurrentLaiziList(msg.LaiZiList, true)

            local function showLaizi()
                if self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_LONG_YAN and g_gameGlobal:getCurrentLaiziHide() then
                    g_gameGlobal:setCurrentLaiziList(g_gameGlobal:getCurrentLaiziList())
                    self:showLaiziInDesk(g_gameGlobal:getCurrentLaiziList())
                    if #g_gameGlobal:getCurrentLaiziList() >  0 then
                        for i,v in ipairs(self.tablePlayerTable) do
                            if v~= 0 then
                                v:setCardSortValues({[0x37] = g_gameGlobal:getCurrentLaiziList()[1]})
                            end
                        end
                    end
                    if self.tablePlayerTable[1] ~= 0 then
                        self.tablePlayerTable[1]:repositionAllCards()
                    end
                end
            end
            if self.tablePlayerTable[1] ~= 0 then
                performWithDelay(self.tablePlayerTable[1], showLaizi, 1)
            end
        end
    elseif self.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
        g_gameGlobal:setCurrentLaiziList(msg.LaiZiList)
    else
        g_gameGlobal:setCurrentLaiziList(msg.LaiZiList)
        self:showLaiziInDesk( g_gameGlobal:getCurrentLaiziList() )
    end
    
    if self.tablePlayerTable[1] ~= 0 then
        self.tablePlayerTable[1]:repositionAllCards()
    end

    -- 显示扣了多少服务费
    if msg.serviceGold > 0 then
        ShowToastMsg("每局收取服务费" .. msg.serviceGold .. "金币")
    end

    -- 显示连庄提示
    if msg.isDealerAgain > 0 then
        if self.gameMainView then
            self.gameMainView:showTableTips("恭喜庄家连庄！")
        end
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(zhuangPos)
        self.tablePlayerHeadImgTable[posState]:setLianzCount(msg.isDealerAgain)
    end
end


-- 玩家操作返回(出牌、吃牌、碰牌、听牌等)消息
function GameBase:playerOperation(msg)
    
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    if self.tablePlayerTable[posState] == 0 and not self.instance  then
        return 
    end
    
    -- if posState == 1 then
    --     self.tingpaiBtn:hide()
    -- end
    if msg.operation == g_gameConstant.GAME_PLAY_RULE_SC_OPERATION_BAO_HU  then 
        -- 报牌
        if posState == 1 then
            self.tablePlayerTable[1]:hideOperationMenu()
        end
        self.tablePlayerTable[posState]:playChiPengGangAnimation(msg)
        self.tablePlayerTable[posState]:setTingState(true)
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then		
        self:hideShuffleAnimation()
        if posState == 1 then
            -- 自动出牌时需要播放音效
            local opList = msg.operationList
            
            -- 托管状态时不会播放声音，故在此添加一个判断
            if self.isWatchWar or self.tablePlayerTable[1]:getTuoGuanState() or (opList and opList[g_gameConstant.MAHJONG_OPERTAION_AUTO_CHU]) then 
                NG.soundManager:playMatchEffect("sound/outpai.mp3")
                NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForCardValue(bit._and(msg.card_value, 0xff), self.tablePlayerTable[1].sex))
            end 
            
            if not g_gameGlobal:getIsPlayingGameLog() then
                table.insert( msg.beforeCards, #msg.beforeCards+1, msg.card_value)
                if self.isWatchWar then
                    self.tablePlayerTable[posState]:chuOperation(msg.card_value, true, 0)
                else
                    self.tablePlayerTable[posState]:refreshChuCards(msg.beforeCards)
                end
                
                local isTwiceAct = false
                
                if self.tablePlayerTable[1].playChuAnim and not isTwiceAct then
                    self.tablePlayerTable[1]:playChuAnim(msg.card_value)
                end
            end
            self.tablePlayerTable[posState]:refreshPlayerCards(msg.card_value, msg.handCards, msg.beforeCards, msg.downCards)
            self:setTingPaiBtnVisible(self.tablePlayerTable[posState]:getTingCard())
            self.tablePlayerTable[1]:setTingCardNodeState(true)
            
            if self.tablePlayerTable[1].setLastOutCard then
                self.tablePlayerTable[1]:setLastOutCard(bit._and(msg.card_value, 0xff))
            end
        else
            --打补丁， 有时候服务器 玩家是否在牌桌数据 intable 数据会出错
            --vip场次只要玩家出牌就把 玩家弄成在线状态
            -- if g_gameGlobal:getVipTableID() and type(self.tablePlayerHeadImgTable[posState]) == "userdata" then 
            --     self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
            -- end
            
            if not g_gameGlobal:getIsPlayingGameLog() then
                self.tablePlayerTable[posState]:refreshChuCards(msg.beforeCards)
            end
            self.tablePlayerTable[posState]:chuOperation(msg.card_value, true, 0)
            self:showLeftCards(msg.cardLeftNum)
            
            -- 通知刷新听牌提示的剩余牌
            GlobalEventManager:onEvent(eventType.GAME_CARD_LEFT_NUM_CHANGED, {posState = posState, changeNum = -1, cardValue = msg.card_value})
        end
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_HUA) == g_gameConstant.MAHJONG_OPERTAION_BU_HUA  then
        print("MAHJONG_OPERTAION_BU_HUA")
        self.tablePlayerTable[posState]:buhuaOperation(msg.card_value, true, true)
    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG)   then
        self:setTablePlayerOrder(posState)
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then
                v:removeChuCard()
            end
        end
        self.tablePlayerTable[posState]:chiPengGangOperation(msg, true)
        self.tablePlayerTable[1]:hideOperationMenu()
        self:hideMarker()
        
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
            GlobalEventManager:onEvent(eventType.GAME_CARD_LEFT_NUM_CHANGED, {
                posState = posState,
                changeNum = -2,
                cardValue = bit._and(msg.opValue, 0xff),
            })
        end
        
        if msg.unused1 and msg.unused1 > 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)
            if type(self.tablePlayerTable[rmPos]) == "userdata" then
                self.tablePlayerTable[rmPos]:removeLastChuCard()
            end
        end
        
        -- self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
        -- 播放音效
        if type(self.tablePlayerInfoTable[posState]) == "table" then
            if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
                NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_CHI, self.tablePlayerInfoTable[posState].sex))
            elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
                NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_PENG, self.tablePlayerInfoTable[posState].sex))
            end    
        end
    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG) or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)   then
        if msg.opValue ~= g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
            for i, v in pairs(self.tablePlayerTable) do
                if v ~= 0 then
                    v:removeChuCard()
                end
            end
        end
        self.tablePlayerTable[posState]:chiPengGangOperation(msg, true)
        self.tablePlayerTable[1]:hideOperationMenu()
        self:hideMarker()
        if msg.unused1 and msg.unused1 > 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.unused0)
            if type(self.tablePlayerTable[rmPos]) == "userdata" then
                self.tablePlayerTable[rmPos]:removeLastChuCard()
            end
        end
        
        -----
        local changeNum = 0
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
            changeNum = -4
        elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
            changeNum = -3
        else --if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
            changeNum = -1
        end
        GlobalEventManager:onEvent(eventType.GAME_CARD_LEFT_NUM_CHANGED, {
            posState = posState,
            changeNum = changeNum,
            cardValue = bit._and(msg.opValue, 0xff),
        })
        
    elseif (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_TING) == g_gameConstant.MAHJONG_OPERTAION_TING) then        
        self.tablePlayerTable[posState]:tingOperation(msg, true)
    else
        if msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_1_YOU] then
            self.tablePlayerTable[posState]:youjinNotify(g_gameConstant.MAHJONG_NEW_OPERTAION_1_YOU)
        elseif msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_2_YOU] then
            self.tablePlayerTable[posState]:youjinNotify(g_gameConstant.MAHJONG_NEW_OPERTAION_2_YOU)
        elseif msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_3_YOU] then
            self.tablePlayerTable[posState]:youjinNotify(g_gameConstant.MAHJONG_NEW_OPERTAION_3_YOU)
        end
    end
end

function GameBase:onNotifyOfflineTime(info)
    if not info then
        return
    end
    
    for k, v in pairs(info) do
        if v ~= -1 then
            local svrPos = k - 1
            local cltPos = g_gameGlobal:getTablePlayerPosWithTablePos(svrPos)
            if self.tablePlayerHeadImgTable[cltPos] ~= 0 then
                -- 重置离线秒数
                self.tablePlayerHeadImgTable[cltPos]:visibleOffline(true, v)
            end
        end
    end
end

function GameBase:getPlayersScore()
    return self.tablePlayerScores
end

function GameBase:getPlayersCurroundScore(posState)
    return (self.tablePlayerScores and self.tablePlayerScores[posState]
--        and self.tablePlayerScores[posState][self.curJuShu]
        and self.tablePlayerScores[posState].roundBeginScore)
        or 0
end

function GameBase:onScoreUpdate(descList, doAnim)
    if not descList then
        return
    end
    
    for k, v in pairs(descList) do
        if v and string.len(v) > 5 then
            
            local player = nil
            
            player = json.decode(v)
            
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(player.tablePos)
            
            local tPlayerHeadView = self.tablePlayerHeadImgTable[posState]
            
            if tPlayerHeadView ~= 0 then
                
                local curGoldNum = tPlayerHeadView:getGoldNum()
                
                local goldNum = player.dingQueValue or 0
                tPlayerHeadView:refreshGoldNum(goldNum, 0)
                local scoreAddVal = goldNum - curGoldNum
                
                if doAnim and scoreAddVal ~= 0 then
                    local tipStr = tostring(scoreAddVal)
                    if scoreAddVal > 0 then
                        tipStr = "+ " .. tipStr
                    end
                    g_gameGlobal:playUpTipAtPos(tipStr, self:getHeadPosByLocalPos(posState))
                end
                
                self.tablePlayerScores[posState] = self.tablePlayerScores[posState] or {}
                
                local roundIncScore = goldNum - self:getPlayersCurroundScore(posState)
                self.tablePlayerScores[posState].tableScoreList = self.tablePlayerScores[posState].tableScoreList or {}
                self.tablePlayerScores[posState].tableScoreList[self.curJuShu] = roundIncScore
            end
        end
    end
end

-- 轮到自己操作通知
function GameBase:playerOperationNotify(msg)
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    
    if self.tablePlayerTable[posState]==0 and not self.instance then
        return 
    end
    
    
    local showLaizi = false
    
    local opList = msg.operationList

    -- dump(msg)
    
    -- 刷新牌桌得分
    if opList and opList[g_gameConstant.GAME_OPERTAION_REFRESH_VIP_GOLD] then
        self:onScoreUpdate(msg.playerDesc, true)
    elseif opList and opList[g_gameConstant.MAHJONG_OPERATION_OTHER_LEFT_TABLE_TIME] then
        local offlineTimes = msg.valueList
        self:onNotifyOfflineTime(offlineTimes)  
    elseif msg.operation == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 
        if self:checkShuffleState() then
            table.insert(self.msgCache, {"notify", msg})
        else
            self:xuanqueTip(msg)
        end
    
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_PLAYER_AUTO_OP then 
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setTuoGuanState(true)
        end 
    elseif msg.operation == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS_RESULT then 
        -- 定缺结束了要停掉前面挂的延迟事件
        if not tolua.isnull(self.actionNodeHuanpai) then
            self.actionNodeHuanpai:stopAllActions()
        end
        
        local function huanCardFunc()
            
            self:setHuanPaiState(false)
            -- 告知换3张后的手牌
            if self.tablePlayerTable[1] ~= nil and self.tablePlayerTable[1] ~= 0 then 
                self.tablePlayerTable[1]:playHuanCardAction(msg.tingList,msg.singleNumList)
            end  
        end 

        self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)

        self.isInHuanCard = true
        -- 清除所有文字动画
        self:clearTxtActionNodes()
        self:onHuanPaiFinish(huanKind)
        local huanKind = msg.chi_flag

        if g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM) then
            self.is_have_change_action = true
            performWithDelay(self,function()
                self.is_have_change_action = false 
            end,2)
        end

        self:playHuanPaiAction(huanKind, huanCardFunc)

    elseif msg.operation == g_gameConstant.GAME_OPERTAION_DING_QUE then
        if self:checkShuffleState() then
            table.insert(self.msgCache, {"notify", msg})
        else
            self:dingqueTip(msg)
        end

    elseif msg.operation == g_gameConstant.GAME_OPERATION_DING_QUE_RESULT  then 
        if self.isWatchWarWait then
            return
        end
        
        -- 29是一个场景状态标识：等于29就处于未定缺完成的一个状态，不等于，说明定缺已经完成了。针对断线重连来做
        if msg.chi_flag == 29 then 
            if not tolua.isnull(self.queBtnPanel) then
                self.queBtnPanel:stopAllActions()
            end
            
            if self.selQueScheId then
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.selQueScheId)
                self.cacheScheIds[self.selQueScheId] = nil
                self.selQueScheId = nil
            end
            
            local myTablePos = g_gameGlobal:getMyTablePos()
            local queList = {0,0,0,0}
            for k,v in ipairs(msg.keyList or {}) do 
                local VID = g_gameGlobal:getTablePlayerPosWithTablePos(v)
                if v ~= myTablePos or self.isWatchWar then 
                    -- if v ~= myTablePos or self.isWatchWar or self.tablePlayerTable[1].isTuoGuan then 
                    queList[VID] = msg.valueList[k]  
                end 
                self.tablePlayerTable[VID]:setQueValue(msg.valueList[k])
            end 
            self:playDingQueFlyAction(queList,true)
            
            if not self.isWatchWar then
                -- 显示等待选缺
                self:showWaitXuanque(false)
            end
            
            -- 清除所有文字动画
            self:clearTxtActionNodes()
            
            self:onDingQueFinish(false)

             -- Hown 以防万一，在这定一个计时器，再次关闭文字显示
             performWithDelay(self,function()
                -- 清除所有文字动画
                self:clearTxtActionNodes()
            end,2.3)
        else
            -- 该状态已经完成了，直接在各个玩家上显示对应缺的icon
            for k, v in ipairs(msg.keyList or {}) do 
                local VID = g_gameGlobal:getTablePlayerPosWithTablePos(v)
                if self.tablePlayerHeadImgTable[VID] ~= nil and self.tablePlayerHeadImgTable[VID] ~= 0 then 
                    self.tablePlayerHeadImgTable[VID]:showHeadQueIconAction(msg.valueList[k] )
                end 
            end 
            
            self:onDingQueFinish(true)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_GAME_OVER then
        -- 游戏结束
        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:backToLobby()
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OFFLINE then
        -- 玩家离线
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) and (posState ~= 1 or self.isWatchWar) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(true)
        end
    elseif msg.operation == g_gameConstant.GAME_OPERTAION_GAME_DELAY_OP then -- 延时
        local isShow =  msg.unused1 == 1 
        local time = msg.unused0
        self:respondDelayIconAndTime(posState,isShow,time)
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU_CARD_LIST_UPDATE then
        -- 胡牌列表更新
        if type(self.tablePlayerTable[1]) == "userdata" then
            self.tablePlayerTable[1]:setPrommptInfo(msg.tingList, msg.singleNumList ,msg.cardFanNumList)
            self:setTingPaiBtnVisible(self.tablePlayerTable[1]:getTingCard())
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLINE then
        -- 玩家返回桌子
        if (self.tablePlayerHeadImgTable[posState] ~= 0) and (self.tablePlayerInfoTable[posState] ~= 0) then
            self.tablePlayerHeadImgTable[posState]:visibleOffline(false)
        end
        --玩家返回桌子就上报一次自己的GPS
        self:uploadGpsData()
        
        self:addEnterRoomFx(msg.unused1, posState)
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHU) == g_gameConstant.MAHJONG_OPERTAION_CHU then
        -- 服务器通知轮到玩家出牌(吃听、碰听之后也是走这里出牌)
        showLaizi = self:onNotifyChu(msg)
        
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_HUA) == g_gameConstant.MAHJONG_OPERTAION_BU_HUA  then
        if posState == 1 then
            self.tablePlayerTable[posState]:buhuaNotify(msg.tingList, true)--, msg.handCards, msg.beforeCards, msg.downCards)
        else
            self.tablePlayerTable[posState]:setIsMyFangwei(false)
            self.tablePlayerTable[posState]:buhuaListOperation(msg.tingList, true, true)
        end
        showLaizi = true
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_AUTO_CHU then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_CHU)
            if msg.chi_card_value ~= 0 then
                self.tablePlayerTable[1]:moCard(bit._and(msg.chi_card_value, 0xff))
            end
            self.tablePlayerTable[1]:autoChu()
            self:showLeftCards(msg.cardLeftNum)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_OVERTIME_AUTO_CHU then
        -- 超时自动出
        if  self.tablePlayerTable[1] ~= 0 then
            if msg.opValue == 1 then
                self.tablePlayerTable[1]:setTuoGuanState(true)
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
                self.tablePlayerTable[1]:overTimeAutoChu(msg.target_card)
                self:showLeftCards(msg.cardLeftNum)
                self.tablePlayerTable[1]:cancelSelectionOperation(false)
                self:hideShuffleAnimation()
            else
                self.tablePlayerTable[1]:setTuoGuanState(false)
                -- self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
            end
        end
    elseif bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG  then
        if self:checkShuffleState() then
            table.insert(self.msgCache, {"notify", msg})
        else
            showLaizi = self:chipenggangTip(posState, msg)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_HU then
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_HU)
        end
        self.tablePlayerTable[1]:chiPengGangNotify(msg, false)
        showLaizi = true
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_PLAYER_HU_CONFIRMED then

        self.smallResultDelay = self._const_hu_small_result_delay
        self:setTablePlayerOrder(posState)
        for i, v in pairs(self.tablePlayerTable) do
            if v ~= 0 then                
                v:setIsMyFangwei(false)
                v:removeChuCard()
            end
        end

        if not g_gameGlobal:getIsPlayingGameLog() and self.tablePlayerTable[1] ~= 0 then 
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
        end 

        self:hideMarker()

        local huConfirmData = {
            cardValue = bit._and(msg.target_card, 0xff),
            gameResult = msg.chi_card_value,
            huTypes = 0,
            handCards = msg.lastPutOutCards,
            isjiehu = msg.isCouldGetReward == 1,
            unused_5 = msg.unused5 or 0,
            huIndex = msg.huNum,
            huKind = GameConfig.XZHUINDEX,
        }
        
        local isZiMo = false 
        local isYPDX = false
        local isQGH = false
        for k, v in ipairs(msg.tingList or {}) do 
            if v == g_gameConstant.MAHJONG_HU_CODE_YI_PAO_DUO_XIANG then 
                isYPDX = true 
            elseif v ==  g_gameConstant.MAHJONG_HU_CODE_ZI_MO then 
                isZiMo = true 
                huConfirmData.huKind = GameConfig.XZZIMOINDEX 
            elseif v == g_gameConstant.MAHJONG_HU_CODE_HU_JIAO_ZHUAN_YI then 
                -- 播放呼叫转移动画
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.dianPaoPos)
                if self.tablePlayerTable[rmPos] and self.tablePlayerTable[rmPos] ~= 0 then 
                    self.tablePlayerTable[rmPos]:playXZHuAction(GameConfig.XZHUJIAOZHUANGYIINDEX,nil,true)
                end 
            elseif v == g_gameConstant.MAHJONG_HU_CODE_XZ_QIANG_GANG_HU then 
                -- 移除被抢杠胡人的手牌数据
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.dianPaoPos)
                if self.tablePlayerTable[rmPos] and self.tablePlayerTable[rmPos] ~= 0 then
                    isQGH = true
                    self.tablePlayerTable[rmPos]:redrawQGHHandCards(huConfirmData.cardValue)
                end 
                huConfirmData.huKind = GameConfig.XZQIANGGANGHUINDEX
            end 
        end 

        if not isZiMo and not isYPDX and not isQGH then 
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(msg.dianPaoPos)
            if type(self.tablePlayerTable[rmPos]) == "userdata" then
                self.tablePlayerTable[rmPos]:removeLastChuCard()
            end
        end 
        if GameConfig.XZZIMOINDEX == huConfirmData.huKind then
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_ZIMO, self.tablePlayerInfoTable[posState].sex))
        else
            NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForOperation(g_gameConstant.OPERATION_HU, self.tablePlayerInfoTable[posState].sex))
        end
        self.tablePlayerTable[posState]:huOperation(huConfirmData,msg.dianPaoPos)
        self.tablePlayerTable[1]:hideOperationMenu(g_gameConstant.MAHJONG_OPERTAION_HU)
        
        -----
        -- 处理听牌提示
        if isQGH then
            -- 抢杠胡这张牌需要额外计算一下
            GlobalEventManager:onEvent(eventType.GAME_CARD_LEFT_NUM_CHANGED, {
                posState = posState, -- 所有人抢杠胡都需要这个处理
                changeNum = -1,
                cardValue = huConfirmData.cardValue,
                isQiang = true,
            })
        end

    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ADD_CHU_CARD then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:removeChuCard()
            self.tablePlayerTable[posState]:refreshChuCards(msg.tingList)
            self:showLeftCards(msg.cardLeftNum)
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_TIP then
        self:showLeftCards(msg.cardLeftNum)
        if msg.player_table_pos and msg.player_table_pos >= 0 then
            self:showLeftTimeAndFangWei(msg.player_table_pos, msg.unused0)
            showLaizi = true            
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_SHOW_TABLE_TIPS then
        if self.gameMainView then
            if msg.target_card == 4 then
                self.gameMainView:showLastCardTip(g_gameConstant.MAHJONG_LAST_TYPE_4)
            elseif msg.target_card == 3 then                
                self.gameMainView:showLastCardTip(g_gameConstant.MAHJONG_LAST_TYPE_3)
            elseif msg.target_card == 5 then                
                self.gameMainView:showLastCardTip(g_gameConstant.MAHJONG_LAST_TYPE_5)
            end
        end
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_CANCEL then
        if  self.tablePlayerTable[1] ~= 0 then
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
            if msg.target_card == 0 then --为0才进托管 不然只进取消按钮那些
                self.tablePlayerTable[1]:cancelSelectionOperation(false)
                self.tablePlayerTable[1]:setTuoGuanState(true)
            else
                self.tablePlayerTable[1]:cancelSelectionOperation(false)
            end
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
        ShowConfirmBox("超时自动解散房间", handler(g_gameGlobal, g_gameGlobal.backToLobby), true)
    elseif msg.operation == g_gameConstant.MAHJONG_OPERTAION_ONLY_ZIMO_TIME then
        if (msg.chi_card_value ~= 0) and (msg.player_table_pos == g_gameGlobal:getMyTablePos()) then
            ShowText("最后一张")
            self.tablePlayerTable[1]:moCard(bit._and(msg.chi_card_value, 0xff))
        end
        self:showLeftCards(msg.cardLeftNum)
    else        
        if msg.operationList[g_gameConstant.MAHJONG_NEW_OPERATION_NOTIFY_SHOW_MA] then
            self.tablePlayerTable[posState]:showMaOperation(msg.tingList, msg.unused0, msg.zhongMaNum)
            self.smallResultDelay = self.smallResultDelay + self._const_hu_small_result_delay
        end
    end
end

function GameBase:onNotifyChu(msg)
    if self:checkShuffleState() then
        --self.chuMsg = msg
        table.insert(self.msgCache, {"notify", msg})
        return
    end
    -- hown 若有
    if self.is_have_change_action then 
        performWithDelay(self,function()
            self.is_have_change_action = false 
            self:onNotifyChu(msg)
        end,1.6)
        return 
    end 

    
    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
    if self.tablePlayerTable[posState]==0 and not self.instance then
        return 
    end

    print("MAHJONG_OPERTAION_CHU")
    if g_gameGlobal:getVipTableID() then
        --金币场永远不关闭胡牌提示
        self.tablePlayerTable[1]:setIsCloseTishiHupai(not self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_LOCAL_HU_PAI_TISHI))
    end
    
    self.tablePlayerTable[1]:clearHuCardList()

    self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
    
    local function setChuPower()
        if self.tablePlayerTable[1]:getCurOperationState() ~= g_gameConstant.MAHJONG_OPERTAION_NONE then
            return
        end
        
        self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_CHU)
    end 

    if msg.chi_card_value ~= 0 then
        self.tablePlayerTable[1]:moCard(bit._and(msg.chi_card_value, 0xff),true,setChuPower)
        if g_gameGlobal:isHuaCard(bit._and(msg.chi_card_value, 0xff)) then --摸上来的是花牌 则不是出牌状态
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
        end
    else 
        setChuPower()
    end

    local showMenu = false
    local hasHu = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
        self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_HU)
        showMenu = true
        hasHu = true
    end
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then
        self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_AN_GANG)
        showMenu = true
    end
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_BU_GANG)
        showMenu = true
    end

    if msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_1_YOU] or
        msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_2_YOU] or
        msg.operationList[g_gameConstant.MAHJONG_NEW_OPERTAION_3_YOU] then
        -- body
        showMenu = true
    end

    self.tablePlayerTable[1]:setPromptTingList(msg.promptTingList, false, not hasHu)
    if posState == 1 then
        self.tingpaiBtn:hide()
        self.tablePlayerTable[1]:setTingCardNodeState(false)
    end

    if showMenu then
        self.tablePlayerTable[1]:chiPengGangNotify(msg, true)
    end

    --更新当前操作玩家和时间（指向自己）
    -- self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
    self:showLeftCards(msg.cardLeftNum)

    self.tablePlayerTable[1]:updateCardColor(msg.chi_flag)
    
    if G_TEEST_AUTO_CHU then
        if self.tablePlayerTable[1].curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
            self.tablePlayerTable[1].touchObj = self.tablePlayerTable[1].inhandCards[1]
            performWithDelay(self.tablePlayerTable[1], function() self.tablePlayerTable[1]:sendChuPaiOrder() end, 0.5)      
        end  
    end
    
    return true
end

function GameBase:showRedPacketLayer(cardType, delay)
    
end

function GameBase:startGameViewCheck()    
    self:setInGame(true)
    self.fangweiBg:setVisible(true)
    -- 删除等待界面
    local tableWait = self.bgPanel:getChildByName("tableWait")
    if tableWait then
        tableWait:closeView()
    end
    -- 更新头像位置以及更新金币和钻数
    for i, v in pairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            -- 将新头像位置从等待界面切换为游戏界面
            v:updateHeadImgPosWithTablePos(self:getHeadPosByLocalPos(i))
        end
    end
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
                v:showTableCards(true)
            end
        end
        --自动超时托管部分，放到上噶结束提示
        -- if self.curJuShu==0 then
        --     if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_OVER_TIME_AUTO_TUOGUAN) then                    
        --         performWithDelay(self, function() ShowConfirmBox("超过15秒未操作将进入托管状态，系统将自动为你摸牌打牌。") end, 0.1)                    
        --     end
        -- end
        --发牌之后显示托管按钮    
        self.gameMainView:setSupportTuoguan(self.isVipSupportTuoguan)    
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS then
        --GAME_OPERATION_PLAYER_SHOW_CARDS 通知有玩家亮牌
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        self.tablePlayerTable[posState]:mingpaiOperation(msg.valueList, msg.value)
        self:hideMarker()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE then
        --GAME_OPERTAION_NOTIFY_PLAYER_SHAI_ZI_VALUE 通知有玩家打骰子
        self:startGameViewCheck()
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        --骰子丢出去动画
        local CrapsAniNode = require("app.global.CrapsAni").new(msg.valueList, posState, true)
        g_gameGlobal:getGameScene():add(CrapsAniNode, g_gameConstant.TABLEPLAYERSELECT_ZORDER)
        self:hideMarker()
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG_VALUE or msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_SHANG_GA_VALUE then
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
    elseif msg.operationList[1] == g_gameConstant.MAHJONG_OPERATION_NOTIFY_FOLLOW_CARD then
        --服务器广播玩家被跟牌成功/漏跟
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        if msg.unused0 == 0 then --跟牌成功
            local noSound = false
            for i,v in ipairs(self.tablePlayerTable) do
                if v~= 0 and i ~= posState then
                    v:notifyFllowEffect(g_gameConstant.GEN_TYPE_GEN_SUCCESS, noSound)
                    noSound = true
                end
            end
            if type(self.tablePlayerInfoTable[posState]) == "table" then
                ShowToastMsg(tostring(self.tablePlayerInfoTable[posState].playerName).." 被跟")
            end
        elseif msg.unused0 == 1 then --玩家漏跟
            if self.tablePlayerTable[posState] ~= 0 then
                self.tablePlayerTable[posState]:notifyFllowEffect(g_gameConstant.GEN_TYPE_GEN_LOU)
            end
            if type(self.tablePlayerInfoTable[posState]) == "table" then
                ShowToastMsg(tostring(self.tablePlayerInfoTable[posState].playerName).." 漏跟")
            end
        end
    elseif msg.operationList[1] == g_gameConstant.MAHJONG_OPERATION_NOTIFY_FOLLOWED then
        --服务广播玩家跟上
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:notifyFllowEffect(g_gameConstant.GEN_TYPE_GEN_SHANG)
        end
    elseif msg.operationList[1] == g_gameConstant.MAHJONG_OPERATION_NOTIFY_HUA_HU then
        --服务广播玩家花胡
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        if self.tablePlayerTable[posState] ~= 0 then
            self.tablePlayerTable[posState]:notifyHuaHuEffect()
        end
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_WASH_CARD_NOTIFY then
        --服务端通知选择是否需要洗牌
        self.tablePlayerTable[1]:washCardOperationNotify(msg.unused0)
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_CHOOSE_ABSENT_CARD_COLOR then
        --服务端通知去选择缺一门
        self.tablePlayerTable[1]:dingqueOperationNotify()
        for i, v in pairs(self.tablePlayerTable) do
            if type(v) == "userdata" and i~=1 then
                v:setQueState(nil, false)
            end
        end
        self.isInDingQueLogic = true
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DO_WASH_CARD then
        --服务端广播有玩家洗牌
        -- local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
        -- if self.tablePlayerTable[posState] ~= 0 and msg.value == 1 then
        --     self.tablePlayerTable[posState]:playWashCarsAni()
        --     if type(self.tablePlayerInfoTable[posState]) == "table" then
        --         ShowToastMsg(tostring(self.tablePlayerInfoTable[posState].playerName).." 选择洗牌")
        --     end
        -- end
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_NOTIFY_SHOW_CHOOSE_ABSENT_CARD_COLOR then
        --服务器广播所有玩家的定缺数据
        self:startGameViewCheck()
        local isWaitOtherPlayerDingque = false
        local isAllDingque = true
        local queData = {}
        local isSelfDingEnd = false
        for i,tablePos in ipairs(msg.keyList) do
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)            
            if self.tablePlayerTable[posState] ~= 0 then
                if posState ~= 1 then
                    isWaitOtherPlayerDingque = msg.valueList[i] == -1 or isWaitOtherPlayerDingque
                else
                    isSelfDingEnd = msg.valueList[i] ~= -1
                end
                queData[posState] = msg.valueList[i]
                isAllDingque = msg.valueList[i]~=-1 and isAllDingque
            end
        end

        if isAllDingque then
            self.isInDingQueLogic = false
        else
            if isSelfDingEnd then
                self.isInDingQueLogic = true
            end
        end
        
        local needShowAni = self.lastAllDingFinished~=nil and not self.lastAllDingFinished and isAllDingque
        for posState, queValue in pairs(queData) do
            local aniPos = nil
            if self.tablePlayerTable[posState] ~= 0 then
                self.tablePlayerTable[posState]:setQueState(queValue, isAllDingque, not self.isInDingQueLogic)
                aniPos = self.tablePlayerTable[posState]:convertToWorldSpace(self.tablePlayerTable[posState]:getSmallAniPos())
            end            
            if self.tablePlayerHeadImgTable[posState] ~= 0 then
                self.tablePlayerHeadImgTable[posState]:setQueState(queValue, isAllDingque, needShowAni, aniPos)
            end
        end

        self.lastAllDingFinished = isAllDingque
    
    -- 准备
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERTAION_PLAYER_CLICK_READY then
        
        self:onPlayerReady(msg)
        return
        
    -- 房主变更了
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_NOTIFY_CHANGE_CREATOR then
        local tablePos = msg.player_table_pos
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
        
        self.isFangzhu = posState == 1
        
        if self.tablePlayerInfoTable[posState] ~= 0 then
            self.createPlayerID = self.tablePlayerInfoTable[posState].playerID
        end
    elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_WASH_CARD then
        --洗牌
        print("洗牌了。。。。。。。。。。。。。。。。。。。。。")
        self.shuffleData = {}
        for k, v in pairs(msg.keyList) do
            local realPos = g_gameGlobal:getTablePlayerPosWithTablePos(v)
            if msg.valueList[k] and msg.valueList[k] == 2 then
                self.shuffleData[realPos] = 1
            end
        end 
    end
end

function GameBase:onPlayerReady(msg)
    local posInfo = msg.keyList
    local valueInfo = msg.valueList
    
    for k = 1, #posInfo do
        local iPos = posInfo[k]
        local iState = valueInfo[k]
        
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(iPos)
        print(iPos, iState)
        -- bugly 异常容错
        if self.tablePlayerInfoTable[posState] ~= 0 then
            self.tablePlayerInfoTable[posState].gameState = iState
            self.tablePlayerHeadImgTable[posState]:refreshReadyState(iState)
        else
            print("err..\n" .. debug.traceback())
        end
    end
    
end

function GameBase:showLeftTimeAndFangWei(svrTablePos, leftTime)
    if self.isWatchWarWait then
        return
    end
    
    self:timeSchedule()
    local timeStr = leftTime
    if leftTime < 10 then 
        timeStr = string.format("0%s",leftTime)
    end
    self.leftTime:setString(timeStr)

    self.startDaoJiShi = true
    self.curActionFangwei = svrTablePos
    
    if self.warningLight ~= nil then
        self.warningLight:setVisible(false)
    end

    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(svrTablePos)
    self.warnDaoJiShi = posState == 1
    for i,v in ipairs(self.fangweiTable) do
        v.flashImg:setVisible(i == posState)
    end
    if self.tablePlayerTable[posState] ~= 0 then
        -- 当前玩家头像转圈显示，其它不显示
        for i, v in pairs(self.tablePlayerTable) do
            if type(v) == "userdata" then
                print("\nsetIsMyFangwei:", posState, i)
                --洗牌的时候别显示摸的牌
                if not self.shuffleData or table.nums(self.shuffleData) == 0 then
                    v:setIsMyFangwei(posState == i)
                end
                if i == posState then
                    v:touxiangSkeletonVisible(true)
                else
                    v:touxiangSkeletonVisible(false)
                end
            end
        end
    end
end

function GameBase:showLeftCards(cardNum)
    if cardNum >= 0  then
        local oldLeftCardNum = tonumber(self.leftCardNum:getString())
        if (oldLeftCardNum - cardNum > 3) and (num == 0) then
            return 
        end
        self.leftCardNum:setString(cardNum)
    end
end


function GameBase:closeVipRoomRuquest(event)
    if event.name == "ended" then
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_msgDefinitions.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
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

-- returns the number of characters in a UTF-8 string
local function utf8len (s)
	-- argument checking
	if type(s) ~= "string" then
		error("bad argument #1 to 'utf8len' (string expected, got ".. type(s).. ")")
	end

	local pos = 1
	local bytes = s:len()
	local len = 0

	while pos <= bytes and len ~= chars do
		local c = s:byte(pos)
		len = len + 1

		pos = pos + utf8charbytes(s, pos)
	end

	if chars ~= nil then
		return pos - 1
	end

	return len
end

-- install in the string library
if not string.utf8len then
	string.utf8len = utf8len
end


-- functions identically to string.sub except that i and j are UTF-8 characters
-- instead of bytes
function GameBase:utf8sub (s, i, j)
	-- argument defaults
	j = j or -1

	-- argument checking
	if type(s) ~= "string" then
		error("bad argument #1 to 'utf8sub' (string expected, got ".. type(s).. ")")
	end
	if type(i) ~= "number" then
		error("bad argument #2 to 'utf8sub' (number expected, got ".. type(i).. ")")
	end
	if type(j) ~= "number" then
		error("bad argument #3 to 'utf8sub' (number expected, got ".. type(j).. ")")
	end

	local pos = 1
	local bytes = s:len()
	local len = 0

	-- only set l if i or j is negative
	local l = (i >= 0 and j >= 0) or s:utf8len()
	local startChar = (i >= 0) and i or l + i + 1
	local endChar   = (j >= 0) and j or l + j + 1

	-- can't have start before end!
	if startChar > endChar then
		return ""
	end

	-- byte offsets to pass to string.sub
	local startByte, endByte = 1, bytes

	while pos <= bytes do
		len = len + 1

		if len == startChar then
			startByte = pos
		end

		pos = pos + utf8charbytes(s, pos)

		if len == endChar then
			endByte = pos - 1
			break
		end
	end

	return s:sub(startByte, endByte)
end

-- 玩家说明信息
function GameBase:initGameRuleDescBtn()
    if not tolua.isnull(self.textGameRuleDesc) then
        -- local wanfaInfo = string.trim(testStr)--g_gameGlobal:parseWanfaList(self.MainGamePlayRule, self.MinorGamePlayRuleList, " ")
        local wanfaInfo = g_gameGlobal:parseWanfaList(self.MainGamePlayRule, self.MinorGamePlayRuleList, " ",nil,nil,nil,nil,true,true, true,true)

        -- 获取背景的尺寸大小
        local bgsize = self.gameRuleImgBg:getBoundingBox()
        self.gameRuleSize = bgsize
        local newLineTxt = ""
        -- 是否超出
        local isMore = false
        
        local strVec = {}
        local cursor = 1
        
        local len2 = string.utf8len(wanfaInfo)
        for i = 1, len2 do 
            local tmpStr = newLineTxt..string.utf8sub(wanfaInfo,i,i)
            self.textGameRuleDesc:setString(tmpStr)
            local txtWidth = self.textGameRuleDesc:getBoundingBox().width
            
            local lineWidth = bgsize.width - 40
            if txtWidth >= lineWidth then
                
                isMore = true
                newLineTxt = string.utf8sub(wanfaInfo,i,i)
                
                cursor = cursor + 1
                
                if i == len2 then
                    strVec[cursor] = newLineTxt
                end
            else
                newLineTxt = tmpStr
                strVec[cursor] = tmpStr
            end
        end
        
        local expandLineCount = #strVec
        self.textGameRuleDesc.str1 = strVec[1]
        if expandLineCount > 1 then
            local str2 = ""
            local lcount = #strVec
            for k = 1, lcount do
                
                if k < lcount then
                    str2 = table.concat({str2, strVec[k], "\n"})
                else
                    str2 = table.concat({str2, strVec[k]})
                end
            end
            self.textGameRuleDesc.str2 = str2
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
                            self.gameRuleImgBg:loadTextures("Match/".."xuezhanGame/GameScene/n2_pop2back05.png","Match/".."xuezhanGame/GameScene/n2_pop2back05.png","",ccui.TextureResType.plistType)
                            self.gameRuleImgBg:setScale9Enabled(true)
                            :setCapInsets(cc.rect(10,0,6,53))
                            local txtHeight = expandLineCount * 27
                            self.gameRuleImgBg:setContentSize(self.gameRuleSize.width, txtHeight)
                            self.textGameRuleDesc:setPositionY(txtHeight - 3)
                        end 
                    else
                        self.textGameRuleDesc:setString(self.textGameRuleDesc.str1)
                        self.textGameRuleDesc:setPositionY(27)
                        self.gameRuleImgBg:loadTextures("Match/".."xuezhanGame/GameScene/n2_pop2back04.png","Match/".."xuezhanGame/GameScene/n2_pop2back04.png","",ccui.TextureResType.plistType)
                        self.gameRuleImgBg:setScale9Enabled(true)
                        :setCapInsets(cc.rect(10,0,6,30))
                        self.gameRuleImgBg:setContentSize(self.gameRuleSize)
                    end  
                else
                    self.textGameRuleDesc:setString(self.textGameRuleDesc.str1)
                    self.textGameRuleDesc:setPositionY(27)
                    self.gameRuleImgBg:loadTextures("Match/".."xuezhanGame/GameScene/n2_pop2back04.png","Match/".."xuezhanGame/GameScene/n2_pop2back04.png","",ccui.TextureResType.plistType)
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

        -- self.textGameRuleDesc:setString(self.textGameRuleDesc.str2)
    end
end     




--玩法描述
function GameBase:setWanfaLayer(wanfaStr, show)    
    if self.textGameRuleDesc then
        local wanfaInfo = g_gameGlobal:parseWanfaList(self.MainGamePlayRule, self.MinorGamePlayRuleList, "\n",nil,nil,nil,nil,true,true, true,true)
        local infos = string.split(wanfaInfo, "\n");
    
        local wfTipsString = ""
    
        for i,v in ipairs(infos) do
            if i ~= 1 and (i-1) % 7 == 0 then
                wfTipsString = wfTipsString .. "\n" .. v
            elseif i ~= 1 then
                wfTipsString = wfTipsString .. " " .. v
            else
                wfTipsString = v
            end
        end
        self.textGameRuleDesc:setString(wfTipsString);
        self:initGameRuleDescBtn()
    end
    
    local titleLabel = self.wanfaBg:getChildByName("wanfa")
    local descLayer = self.wanfaBg:getChildByName("bgImg")
    local open_mark = self.wanfaBg:getChildByName("open_mark")
    local infos = string.split(wanfaStr, "\n")
    local layerSz = descLayer:getContentSize()
    titleLabel:setString(table.remove(infos, 1))
    local hOffset = 10
    for i = 1, #infos do
        local str = infos[#infos - i + 1]
        local label = ccui.Text:create(str, "fonts/fzzhunyuanjianti.ttf", 18)        
        label:setTextAreaSize(cc.size(descLayer:getContentSize().width - 16, 0));
        label:ignoreContentAdaptWithSize(false)

        label:setAnchorPoint(0,0)
        label:setPosition(5, hOffset)
        label:addTo(descLayer)
        label:setTextColor(cc.c4b(248, 238, 185, 255))
        hOffset = hOffset + label:getContentSize().height + 4
    end
    descLayer:setContentSize(layerSz.width,hOffset + 12)
    
    local click = function(event)
        if(descLayer:isVisible()) then
            descLayer:setVisible(false)
            open_mark:setHighlighted(false)
        else
            descLayer:setVisible(true)
            open_mark:setHighlighted(true)
            self.wanfaBg:stopAllActions()
            self.wanfaBg:runAction(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function()
                descLayer:setVisible(false)
                open_mark:setHighlighted(false)
            end), nil))
        end
    end
    self.wanfaBg:onClick(click)
    if show then
        descLayer:setVisible(false)
        click()
    end
end

function GameBase:doExitGameLogic()
    -- body
end


--======================================================  血战中新增模块  ===========================================
function GameBase:judgeIsXZDDGame(msg)
    self.queNum = 0
    local isXZDDModel = false 
    if msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD  
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R 
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ  
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SC_LSMJ
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SC_MZMJ
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P1R
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_QMXZ
    or msg.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then 
        for k, v in ipairs(msg.MinorGamePlayRuleList or {}) do 
            if v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG or v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW then 
                self.queNum = 3
            elseif v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG or v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW then 
                self.queNum = 4
            end 
        end 
        isXZDDModel = true 
    end 
    --isXZDDModel = true 
    -- 回调函数
    if isXZDDModel then
        -- 
        self:initDingQuePanel()
        -- 回调函数
        local function xuanQueBtnState(isOk)
            self.confirmQueBtn:setEnabled(isOk)
        end

        for k, v in ipairs(self.tablePlayerTable or {}) do 
            if v ~= nil and v ~= 0 then 
                v:initXZDDGameData(self.queNum,xuanQueBtnState,msg.maxHandCardNum)
            end 
        end 

    else 
        local quePanel = g_gameGlobal:findChildWithName(self.resourceNode_, "Panel_ConfirmQue")
        quePanel:setVisible(false)
        return 
    end 
end 

function GameBase:showWaitXuanque(visible)
    if self.tablePlayerTable[1] ~= 0 then
        self.tablePlayerTable[1]:showWaitXuanque(visible)
    end
end

function GameBase:enabledQuePanelTouch(enable)
    if tolua.isnull(self.quePanel) or tolua.isnull(self.huanpaiPanel) then
        return
    end
    
    self.quePanel:setTouchEnabled(enable)
    self.huanpaiPanel:setTouchEnabled(enable)
end

function GameBase:initDingQuePanel()

    local gameAction = require(self.srcGameAnimation)
    self.gameActionObj = gameAction.new()

    -- 定缺面板资源初始化
    self.quePanel   = g_gameGlobal:findChildWithName(self.resourceNode_, "Panel_ConfirmQue"):setVisible(true)
    -- self.quePanel:setLocalZOrder(g_gameConstant.TABLEPLAYERSELECT_ZORDER-1)
    self.queBtnPanel= g_gameGlobal:findChildWithName(self.resourceNode_,"Panel_XuanBtns")
    self.confirmBg  = g_gameGlobal:findChildWithName(self.resourceNode_,"Confirm_Bg")
    self.Image_Que_Tip = self.confirmBg:getChildByName("Image_Que_Tip")
    self.huanpaiPanel = g_gameGlobal:findChildWithName(self.resourceNode_,"Panel_huanpai")
    -- 确定提缺按钮
    self.confirmQueBtn = g_gameGlobal:findChildWithName(self.resourceNode_,"Button_DingQue")
    self.confirmQueBtn:onClick(handler(self, self.XuanQueBtnEventFunc))

    self.queWanBtn  = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Wan")
    self.queTongBtn = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Tong")
    self.queTiaoBtn = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Tiao")
    self.queWanBtn:onClick(handler(self, self.XuanQueBtnEventFunc))
    self.queTongBtn:onClick(handler(self, self.XuanQueBtnEventFunc))
    self.queTiaoBtn:onClick(handler(self, self.XuanQueBtnEventFunc))
    -- 是否处于换牌中
    self.isInHuanCard = false 

    -- 万筒条的位置
    self.queBtnPos = {
        [g_gameConstant.GAME_QUE_COLOUR_WAN]    = self.queWanBtn:getParent():convertToWorldSpace(cc.p(self.queWanBtn:getPosition())),
        [g_gameConstant.GAME_QUE_COLOUR_TONG]   = self.queTongBtn:getParent():convertToWorldSpace(cc.p(self.queTongBtn:getPosition())),
        [g_gameConstant.GAME_QUE_COLOUR_TIAO]   = self.queTiaoBtn:getParent():convertToWorldSpace(cc.p(self.queTiaoBtn:getPosition())),
    }

    self.queColourBtns = {
        [g_gameConstant.GAME_QUE_COLOUR_WAN] = self.queWanBtn,
        [g_gameConstant.GAME_QUE_COLOUR_TONG] = self.queTongBtn,
        [g_gameConstant.GAME_QUE_COLOUR_TIAO] = self.queTiaoBtn,
    }
    
    -- 各方位动画节点
    self.playerTxtNodes = {}
    self.playerTxtNodesPos = {}
    for i=1, 4 do 
        self.playerTxtNodes[i] =  g_gameGlobal:findChildWithName(self.resourceNode_, "Node_PlayAction_"..i)
        self.playerTxtNodesPos[i] = cc.p(self.playerTxtNodes[i]:getPosition())
    end 

    -- 播放换三张的动画节点
    local playHuanCardNode = display.newNode()
    self.huanpaiPanel:addChild(playHuanCardNode,-1)
    local pos = self.huanpaiPanel:convertToNodeSpace(cc.p(display.cx,g_gameGlobal:getDisplayHeight()*0.54))
    playHuanCardNode:setPosition(pos)
    self.playHuanCardNode = playHuanCardNode

    -- 测试按钮
    self.btnTest1 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test1"):setVisible(false)
    self.btnTest2 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test2"):setVisible(false)
    self.btnTest3 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test3"):setVisible(false)
    self.btnTest4 = g_gameGlobal:findChildWithName(self.resourceNode_, "Button_Test4"):setVisible(false)
    self.btnTest1:onClick(handler(self, self.XuanQueBtnEventFunc))
    self.btnTest2:onClick(handler(self, self.XuanQueBtnEventFunc))
    self.btnTest3:onClick(handler(self, self.XuanQueBtnEventFunc))
    self.btnTest4:onClick(handler(self, self.XuanQueBtnEventFunc))

    self:initGameRuleDescBtn()
    
    self:enabledQuePanelTouch(false)
end 

function GameBase:playHuanPaiAction(kind,callback)
    
    local doAnim = g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM) or false
    if doAnim then
        
        self:setHuanPaiState(true)
        local playerNum = g_gameGlobal:getMaxPlayerNum()
        huanPaiObj:playHuanPaiAction(self.playHuanCardNode,playerNum,kind,callback)
        
    else
        -- 提示换的方位文字
        self:showExchangeCardTxtAction(kind)
        
        if callback then
            callback()
        end
    end
end

-- 交换手牌时方位文字提示
function GameBase:showExchangeCardTxtAction(kind)
    local strFormat = {
        [1] = "逆时针交换手牌",
        [0] = "顺时针交换手牌",
        [2] = "对家交换手牌",
    }

    local str = strFormat[kind] 
    if str then 
        g_gameGlobal:upTipBarLabel(str)
    end 
end 

local vid = 1
local kind_ = g_gameConstant.MAHJONG_OPERTAION_AN_GANG
local bool_value = false 

function GameBase:XuanQueBtnEventFunc(sender)
 
    if self.btnTest1 == sender then
        bool_value = not bool_value
        self.tablePlayerTable[2]:setIsMyFangwei(bool_value)
    elseif self.btnTest2 == sender then 
        local msg = {}
        msg.operation = kind_
        self.tablePlayerTable[2]:playChiPengGangAnimation(msg,true)
    elseif self.btnTest3 == sender then 
        local msg = {}
        msg.operation = kind_
        self.tablePlayerTable[4]:playChiPengGangAnimation(msg,true)
    elseif self.btnTest4 == sender then 
        if kind_ == g_gameConstant.MAHJONG_OPERTAION_AN_GANG then 
            kind_ = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
        else 
            kind_ = g_gameConstant.MAHJONG_OPERTAION_AN_GANG 
        end 
    elseif self.confirmQueBtn == sender then 
        print("-------   点击了定缺按钮 \n")
        local callback = function ( data )
            self:sendPlayerHuanCardMsg(data)
        end
        
        local optCardValue = {}
        
        local data = self.tablePlayerTable[1]:getCurrSelectedCards(true, callback, optCardValue)

        self.confirmBg:setVisible(false)

        --self:sendPlayerHuanCardMsg(data)
        for k, v in ipairs(optCardValue) do
            if v ~= 0 then
                self.tablePlayerTable[1]:removeOneCard(v)
            end
        end
        self.tablePlayerTable[1]:repositionAllCards()

    elseif self.queWanBtn == sender then
        print("-------   点击了缺万按钮 \n")
        self:sendPlayerSelectQueIndex(g_gameConstant.GAME_QUE_COLOUR_WAN)
    elseif self.queTongBtn == sender then
        print("-------   点击了缺筒按钮 \n")
        self:sendPlayerSelectQueIndex(g_gameConstant.GAME_QUE_COLOUR_TONG)
    elseif self.queTiaoBtn == sender then
        print("-------   点击了缺条按钮 \n")
        self:sendPlayerSelectQueIndex(g_gameConstant.GAME_QUE_COLOUR_TIAO)
        -- self:playDingQueFlyAction({3,2,1,1})
    end 
end 

-- 清理节点
function GameBase:clearTxtActionNodes()
    for k,v in ipairs(self.playerTxtNodes or {}) do 
        if iskindof(v,"cc.Node") then 
            -- 先移除所有附加节点
            if v:getChildrenCount() > 0 then 
                v:removeAllChildren()
            end 
        end 
    end 
end 

-- 播放定缺中的
function GameBase:showSeletingTxtAction(txtKind,playerList)
    -- 显示该面板
    if not tolua.isnull(self.quePanel) then
        self.quePanel:setVisible(true)
    end
    
    if not self.gameActionObj then
        return
    end

    for k, v in ipairs(playerList or {}) do 
        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(v)
        -- 当为自己选缺时，不要显示选缺中的动画提示
        if not (posState == 1 ) or self.isWatchWar then
            self.gameActionObj:playTxtDingQueAction(self.playerTxtNodes[posState], txtKind)
        end
    end 
end 


-- 播放定缺的飞向动画
function GameBase:playDingQueFlyAction(queLists,_isPlayAction)


    print("  ~~~~~~~~~~~~~~~~~~~~~~~~~~ 是否播放动画 ~~~~~~~~~~~~~~~~~~~~ ".. tostring(_isPlayAction))
    dump(queLists)


    local isPlayAction = _isPlayAction

    self.quePanel:setVisible(true)

    if isPlayAction then 
        for posState, queIndex in pairs(queLists or {}) do 
            if queIndex ~= 0 then 
                local endPos = self.tablePlayerHeadImgTable[posState]:getQueIconWorldPos()

                local function callBack(isMy)
                    if self.tablePlayerHeadImgTable[posState] ~= nil and self.tablePlayerHeadImgTable[posState] ~= 0 then 
                        self.tablePlayerHeadImgTable[posState]:showHeadQueIconAction(queIndex)
                        if not isMy then
                            self:clearTxtActionNodes()
                        end
                    end 
                end     

                if endPos and queIndex then 
                    -- 若是视图位置为1号视图，那么就要从缺中缺选择一个对应的位置
                    local startPos
                    local isMy = false 
                    if posState == 1 then
                        startPos = self.queBtnPos[queIndex]
                        isMy = true 
                    else
                        startPos = self.playerTxtNodesPos[posState]
                    end
                    -- 隐藏按钮面板
                    self.queBtnPanel:setVisible(false)
                    -- callBack(isMy)
                    -- 播放飞向动画
                   self.gameActionObj:playFlyToHeadIconAction(self,queIndex,startPos,endPos,isMy,callBack)
                end 
            end 
        end 
    else
        for posState, queIndex in ipairs(queLists or {}) do 
            if self.tablePlayerHeadImgTable[posState] ~= nil and self.tablePlayerHeadImgTable[posState] ~= 0 then 
                self.tablePlayerHeadImgTable[posState]:showHeadQueIconAction(queIndex,isPlayAction)
            end 
        end 
    end 
end 

-- 显示提交交换数据
function GameBase:respondExchangeCardDataMsg()
    -- 显示该面板
    self.quePanel:setVisible(true)
    -- 显示按钮面板
    self.confirmBg:setVisible(true)
    if self.queNum == 3 or self.queNum == 4 then 
        local tipImgName = string.format("xuezhanGame/Images/huan_zhang_%d.png",self.queNum)
        if self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW) or self:isHasMinorRule(g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW) then
            tipImgName = string.format("xuezhanGame/Images/huan_zhang_new_%d.png",self.queNum)
        end
        if not tolua.isnull(self.Image_Que_Tip) then 
            self.Image_Que_Tip:loadTexture("Match/" .. tipImgName,ccui.TextureResType.plistType)
        end 
    end 

    -- 不显示选缺按钮
    self.queBtnPanel:setVisible(false)
    self:enabledQuePanelTouch(true)
end 


-- 显示选缺————“万”、“筒”、“条”按钮
function GameBase:respondSelectOneColourMsg()

    -- 显示该面板
    self.quePanel:setVisible(true)
    -- 显示按钮面板
    self.confirmBg:setVisible(false)

    self.queBtnPanel:setVisible(true)
    
    self:enabledQuePanelTouch(true)

    local data = self.tablePlayerTable[1]:getBestQueColourIndexes()
    
    -- 推荐的花色按钮，就播放动画
    local createAni = function ( btn )
        if not btn then return end 
        local tip = btn:getChildByName("Text_tip")
        if tip then
             tip:setVisible(true)
        end
        local scaleBig = cc.ScaleBy:create(0.3, 1.25)
        local scale = scaleBig:reverse()
        local req = cc.Sequence:create(scaleBig, scale) 
        local rep = cc.RepeatForever:create(req)
        btn:runAction(rep)
    end
    for k, v in ipairs(data or {}) do 
        createAni(self.queColourBtns[v]) 
        -- if self.gameActionObj then 
        --     self.gameActionObj:addBtnAction(self.queColourBtns[v])
        -- end 
    end 
end 

-- 玩家执行定缺的操作（客户端->服务端）
function GameBase:sendPlayerSelectQueIndex(queIndex)
    if queIndex and queIndex >= 1 and queIndex <= 3 then 
        local sendMsgData = {}
        sendMsgData.operation = g_gameConstant.GAME_OPERTAION_DING_QUE
        sendMsgData.card_value = queIndex
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, sendMsgData)
    end 
end 

-- 玩家执行换3张的操作（客户端->服务端）
function GameBase:sendPlayerHuanCardMsg(cardData)
    if next(cardData) ~= nil then 
        local sendMsgData = {}
        sendMsgData.operation = g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS 
        sendMsgData.putOutCards = cardData
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, sendMsgData)
    end 
end 

function  GameBase:getBgPanel(  )
    if self.bgPanel then
        return self.bgPanel
    end
end

-- 定义个虚的
function GameBase:onDingQueStart()
--    self:watchFlushGameStart()
end

function GameBase:onDingQueFinish(isReconnect)
    if self.tablePlayerTable[1] ~= 0 then
        self.tablePlayerTable[1]:onTableDingQueFinish()
    end
end

function GameBase:onNotifyHuanpai()
--    self:watchFlushGameStart()
end

function GameBase:onHuanPaiFinish(kind)
    
end

function GameBase:setHuanPaiState(state)
    if self.tablePlayerTable[1] ~= 0 then
        self.tablePlayerTable[1]:setHuanPaiState(state)
    end
end

function GameBase:playHuanpaiAnim(kind)
    local function huanpaiAnimFinished()
        
    end
    
    local playerNum = g_gameGlobal:getMaxPlayerNum()
    huanPaiObj:playHuanPaiAction(self.playHuanCardNode, playerNum, kind, huanpaiAnimFinished)
end

function GameBase:getBankerTablePos()
    return self.zhuangTablePos or -1
end

function GameBase:initWatchWarUI()
    if self.isWatchWar then
        self.Image_watchWarFlag:retain()
        self.Image_watchWarFlag:removeFromParent()
        -- 比规则高一层
        self.Image_watchWarFlag:addTo(g_gameGlobal:getGameScene(), g_gameConstant.JIESANROOMVIEW_ZORDER - 4)
        self.Image_watchWarFlag:release()
        
        self.chatBtn:setVisible(false)
        self.realTimeVoiceBtn:setVisible(false)
        self.gameMainView:setVisible(false)
        self.voiceBtn:setVisible(false)
        self.setBtn:setVisible(false)
        
        self.leaveWatchWarBtn:setVisible(true)
        self.Image_watchWarFlag:setVisible(true)
        
    else
        self.leaveWatchWarBtn:setVisible(false)
        self.Image_watchWarFlag:setVisible(false)
    end
end

function GameBase:leaveWatchWar()
    ShowConfirmCancelBox("确定要退出观战？",  function ( ... )
        -- body
        if self.delegate then
            self.delegate:doExitGameLogic()
        end
        g_gameGlobal:setIsInPaiZhuo(false)
        g_gameGlobal:backToLobby()
    end)
end

function GameBase:watchFlushGameStart()
--    do return end
    if self.iswatchStartFlushed then
        return
    end
    
    self.iswatchStartFlushed = true
    
    for k, v in ipairs(self.tablePlayerHeadImgTable) do
        if v ~= 0 then
            v:refreshReadyState(false)
        end
        
        local player = self.tablePlayerTable[k]
        if player ~= 0 then
            if not player:isWatchHandCardCreated() then
                player:initPaiMianValue()
            end
        end
    end
    
    if self.curActionFangwei then
        local time = tonumber(self.leftTime:getString() or "0") or 0
        
        self:showLeftTimeAndFangWei(self.curActionFangwei or 0, time)
    end
end

function GameBase:ruleBtnFunc(sender)
    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local desc = g_gameGlobal:parseWanfaList(gameRequestAck.MainGamePlayRule, gameRequestAck.MinorGamePlayRuleList, " ", false, false, false, nil, true, true, true, true)
    local gameRuleObj = self.bgPanel:getChildByName("btn_RuleDesc_match")
    if gameRuleObj and not gameRuleObj:isVisible() then
        gameRuleObj:getChildByName("text_Rule"):setString(desc)
        gameRuleObj:setVisible(true)
        gameRuleObj:setLocalZOrder(999)
        if gameRuleObj:isVisible() then
            NG.SysTool.performDelayOnce(function()
                if self and not tolua.isnull(self) and gameRuleObj then
                    gameRuleObj:setVisible(false)
                end
            end, 3)
        end
    end
end

function GameBase:isPlayerIndexVisible()
    return self.playerIndexVisible
end

function GameBase:getTingpaiBtnRect()
    if tolua.isnull(self.tingpaiBtn) or not self.tingpaiBtn:isVisible() then
        return
    end
    
    return self.tingpaiBtn:getBoundingBox()
end

function GameBase:isSelfOpRound()
    return self.tablePlayerTable[1] ~= 0 and self.tablePlayerTable[1]:isSelfOpRound()
end

function GameBase:isWaitOp()
    return not tolua.isnull(self.queBtnPanel) and not tolua.isnull(self.confirmBg) and (self.queBtnPanel:isVisible() or self.confirmBg:isVisible())
end

--设置幸运表情界面可见性
function GameBase:setLuckViewVisible(visible)
    if self.luckBtn and not tolua.isnull(self.luckBtn) then
        self.luckBtn:setVisible(false)
    end
end

--刷新幸运表情界面
function GameBase:updateLuckView()
    
end

--播放幸运表情动画
function GameBase:playLuckAnimation(type, isCache)
    
end

--连续输了之后，幸运表情按钮动画开始播放
function GameBase:playLuckButtonAnimation(freeData, status)
    
end

--设置幸运表情按钮可见性
function GameBase:setLuckBtnVisible(visible)
    if self.luckBtn and not tolua.isnull(self.luckBtn) then
        self.luckBtn:setVisible(false)
    end
end

--隐藏洗牌动画
function GameBase:hideShuffleAnimation(sp)
    g_gameGlobal:setPlayerShuffleData({})
    if sp and not tolua.isnull(sp) then
        sp:setVisible(false)
    elseif sp == nil then
        if self.shuffleNode and self.shuffleStatus then
            for k, v in pairs(self.shuffleNode) do
                if v and not tolua.isnull(v) then
                    v:setVisible(false)
                    self.shuffleStatus[k] = true
                end
            end
        end
    end
end

--清除洗牌动画
function GameBase:clearShuffleAnimation(event)
    --if event.type == "complete" then
        self:removeChildByName("shuffle_node")
        self.shuffleNode = nil
        self.shuffleStatus = nil
        self.shuffleData = {}
        
        --洗牌动画结束后对缓存协议逐一处理
        for k, v in pairs(self.msgCache or {}) do
            if v[1] == "notify" then
                self:playerOperationNotify(v[2])
            elseif v[1] == "ex" then
                self:playerOperationEx(v[2])
            elseif v[1] == "none" then
                self:playerOperation(v[2])
            elseif v[1] == "game" then
                self:gameOperation(v[2])
            elseif v[1] == "start" then
                self:initGameInfo(v[2])
            end
        end
        self.msgCache = {}
    --end
end

function GameBase:xuanqueTip(msg)
    -- 通知玩家可以开始换3张，顺便告知全桌玩家换3张与否的结果
    local myTablePos = g_gameGlobal:getMyTablePos()
    if #msg.keyList == 0 and #msg.valueList == 0 then 
        -- 该状态表示刚开始，则将所有都置为选牌中
        local listData = {}
        for i=0, g_gameGlobal:getMaxPlayerNum() - 1 do 
            table.insert(listData,i)
        end 
        self:showSeletingTxtAction(GameConfig.SELECTINGCARD,listData)
        
        if not self.isWatchWar then
            -- 显示对应的转台：1、选牌中；2、已选牌；
            self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS)

            self.tablePlayerTable[1]:reRankHandCardsUI()
        
            -- 提示对应的选缺提示
            self.tablePlayerTable[1]:xuanQueAiTip()
            performWithDelay(self.actionNodeHuanpai, function()
                -- 显示换三张的面板
                self:respondExchangeCardDataMsg()
            end,0.1)
        end
    
    elseif #msg.keyList == 1 and #msg.valueList == 1 then 
        -- 该状态表示某个玩家已经选缺了
        if msg.valueList[1] == 1 then 
            self:showSeletingTxtAction(GameConfig.SELECTEDCARD,{msg.keyList[1]})
            if msg.keyList[1] == myTablePos then 
                -- 关闭显示选牌的按钮
                self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)
                -- 刷新手牌
                self.tablePlayerTable[1]:redrawHandCards(msg.tingList)
                -- 隐藏选牌确认按钮面板
                self.confirmBg:setVisible(false)
                
                self:enabledQuePanelTouch(false)
            end 
        end 
    elseif #msg.keyList > 1 and #msg.valueList > 1 then 
        -- 说明该情况时短线重连
        local hadXuanList = {}
        local noXuanList = {}
        self.tablePlayerTable[1]:reRankHandCardsUI()
        for k, v in ipairs(msg.keyList) do 
            -- 等于1时则表示已选了
            if msg.valueList[k] == 1 then 
                table.insert(hadXuanList,v)
            else
                if v == myTablePos and not self.isWatchWar then 
                    -- 摸牌状态
                    self.tablePlayerTable[1]:setCurOperationState(g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS)
                    -- 提示对应的选缺提示
                    self.tablePlayerTable[1]:xuanQueAiTip()
                    performWithDelay(self.actionNodeHuanpai, function()
                        -- 显示换三张的面板
                        self:respondExchangeCardDataMsg()
                    end,0.1)
                else 
                    table.insert(noXuanList,v)
                end 
            end 
        end 
        -- 显示：选牌中
        self:showSeletingTxtAction(GameConfig.SELECTINGCARD,noXuanList)
        -- 显示：已选牌
        self:showSeletingTxtAction(GameConfig.SELECTEDCARD,hadXuanList)
    end 
    
    self:onNotifyHuanpai()
end

function GameBase:dingqueTip(msg)
    self:onDingQueStart()

    -- 通知玩家可以开始定缺，顺便告知全桌玩家定缺与否的结果
    local function dingQueFunc()
        if not self.playerHasXuanQue then
            self.playerHasXuanQue = {}
        end
        local myTablePos = g_gameGlobal:getMyTablePos()
        if #msg.keyList == 0 and #msg.valueList == 0 then
            -- 选缺开始
            local listData = {}
            for i=0, g_gameGlobal:getMaxPlayerNum() - 1 do 
                table.insert(listData,i)
            end 
            self:showSeletingTxtAction(GameConfig.SELECTINGSTATE,listData)
            if not self.isWatchWar then
                -- 自己显示选缺按钮
                self:respondSelectOneColourMsg()
            end
            
            self:showLeftTimeAndFangWei(self.curActionFangwei, 15)
        
        elseif #msg.keyList == 1 and #msg.valueList == 1 then
            -- 该状态表示某个玩家已经选缺了
            if msg.valueList[1] == 1 then 
                self:showSeletingTxtAction(GameConfig.SELECTEDSTATE,{msg.keyList[1]})
                -- 记录谁定缺了
                self.playerHasXuanQue[msg.keyList[1]] = true
                if msg.keyList[1] == myTablePos then
                    -- 隐藏定缺的按钮
                    self.queBtnPanel:setVisible(false)
                    local queList = {0,0,0,0}
                    local VID = g_gameGlobal:getTablePlayerPosWithTablePos(myTablePos)
                    queList[VID] = msg.chi_card_value
                    self:playDingQueFlyAction(queList,true)
                    -- 若没有换张的话，那么就重新绘制下手牌
                    
                    self:enabledQuePanelTouch(false)
                    
                    -- 自己最后一个选就不用显示了
                    if table.nums(self.playerHasXuanQue) ~= g_gameGlobal:getMaxPlayerNum() and not self.isWatchWar then
                        -- 显示等待选缺
                        self:showWaitXuanque(true)
                    end
                end 
            end 
        elseif #msg.keyList > 1 and #msg.valueList > 1 then
            -- 说明该情况时短线重连
            local hadXuanList = {}
            local noXuanList = {}
            -- 自己是否选了
            local hadMeSelected = false

            for k, v in ipairs(msg.keyList) do 
                -- 等于1时则表示已选了
                if msg.valueList[k] == 1 then 
                    -- 记录谁定缺了
                    self.playerHasXuanQue[v] = true
                    table.insert(hadXuanList,v)
                    if v == myTablePos then 
                        -- 显示选缺Icon
                        local queList = {0,0,0,0}
                        local VID = g_gameGlobal:getTablePlayerPosWithTablePos(myTablePos)
                        queList[VID] = msg.chi_card_value
                        self:playDingQueFlyAction(queList)
                        
                        hadMeSelected = true
                    end 
                else
                    table.insert(noXuanList,v)
                    if self.queBtnPanel and v == myTablePos and not self.isWatchWar then 
                        -- 显示选缺面板
                        -- 19-10-31 Hown 该消息来的有点快，会导致选牌错误。暂时先加延时处理
                        performWithDelay(self.queBtnPanel,function()
                            self:respondSelectOneColourMsg()
                            
                            self:showLeftTimeAndFangWei(self.curActionFangwei, 15)
                        end,0.3)
                    end 
                end 
            end 
            -- 显示：选缺中
            self:showSeletingTxtAction(GameConfig.SELECTINGSTATE,noXuanList)
            -- 显示：已选缺
            self:showSeletingTxtAction(GameConfig.SELECTEDSTATE,hadXuanList)
            
            -- 所有人是否都选了
            if not self.isWatchWar and hadMeSelected and #hadXuanList ~= g_gameGlobal:getMaxPlayerNum() then
                
                -- 显示等待选缺
                self:showWaitXuanque(true)
            end
        end 
    end 
    local delayTime = 0
    if self.isInHuanCard then
        delayTime = g_gameGlobal:isRuleInRuleList(g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM) and 2 or 0.8
    end
    
    -- ret 1 通知自己选缺， 2 通知自己选缺完成了  else  nil.
    local function isNotifyMeOp()
        local myTablePos = g_gameGlobal:getMyTablePos()
        if #msg.keyList == 0 and #msg.valueList == 0 then
            
            return 1
        
        elseif #msg.keyList == 1 and #msg.valueList == 1 then
            -- 该状态表示某个玩家已经选缺了
            if msg.keyList[1] == myTablePos then
                return 2
            end
        elseif #msg.keyList > 1 and #msg.valueList > 1 then
            -- 说明该情况时短线重连
            for k, v in ipairs(msg.keyList) do 
                -- 等于1时则表示已选了
                if msg.valueList[k] == 1 then 
                    
                else
                    if v == myTablePos and not self.isWatchWar then
                        return 1
                    end 
                end 
            end
        end 
    end
    
    local scheId
    scheId = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function ()
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheId)
        self.isInHuanCard = false 
        dingQueFunc()
        
        if self.cacheScheIds[scheId] then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheId)
            self.cacheScheIds[scheId] = nil
            
            if scheId == self.selQueScheId then
                self.selQueScheId = nil
            end
        end
    end, delayTime, false)
    
    local notifyOpType = isNotifyMeOp()
    if notifyOpType == 1 then
        -- 告诉自己要选缺
        self.selQueScheId = scheId
    
    -- 
    elseif notifyOpType == 2 then
        -- 告知自己已经选缺了 -- 停掉前面显示操作按钮的定时器
        if self.selQueScheId then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.selQueScheId)
            self.selQueScheId = nil
        end
    end
    -- 缓存一下，留待清理
    self.cacheScheIds[scheId] = true
end

function GameBase:chipenggangTip(posState, msg)
    self:setTablePlayerOrder(posState)
    -- self:showLeftTimeAndFangWei(msg.player_table_pos, self.playerOperationTime)
    -- 且非处于托管状态
    if  self.tablePlayerTable[1] ~= 0 and (not self.tablePlayerTable[1]:getTuoGuanState()) then
        self.tablePlayerTable[1]:setCurOperationState(msg.operation)
        self.tablePlayerTable[1]:chiPengGangNotify(msg, false)
    end
    local showLaizi = true
end

function GameBase:adjustLuckBtnPos()
    if self.tablePlayerHeadImgTable[1] and self.tablePlayerHeadImgTable[1] ~= 0 then
        local posX = self:convertToNodeSpace(cc.p(self.tablePlayerHeadImgTable[1].headFrame:getParent():convertToWorldSpace(cc.p(self.tablePlayerHeadImgTable[1].headFrame:getPositionX(), 0)).x, 0)).x
        self.luckBtn:setPositionX(posX)
    end
    if self.tablePlayerHeadImgTable[2] and self.tablePlayerHeadImgTable[2] ~= 0 then
        local midPosY = (self.tablePlayerHeadImgTable[1].headFrame:getPositionY() + self.tablePlayerHeadImgTable[2].headFrame:getPositionY()) / 2
        midPosY = self:convertToNodeSpace(self.tablePlayerHeadImgTable[1].headFrame:getParent():convertToWorldSpace(cc.p(0, midPosY))).y
        midPosY = midPosY + 15
        self.luckBtn:setPositionY(midPosY)
        if self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ and  g_gameGlobal:getMaxPlayerNum() > 2 then
            self.luckBtn:setPositionY(self.tablePlayerHeadImgTable[2].headFrame:getPositionY() + 120)
        end
    elseif self.tablePlayerHeadImgTable[1] and self.tablePlayerHeadImgTable[1] ~= 0 then
        self.luckBtn:setPositionY(self.tablePlayerHeadImgTable[1].headFrame:getPositionY() + 120)
    end
end

function GameBase:refreshPrice()
    local RefreshItemBaseMsg = {}
    RefreshItemBaseMsg.account = g_gameGlobal:getMyselfInfo().account
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_REFRESH_ITEM_BASE, RefreshItemBaseMsg)
end

function GameBase:updateResultShuffleCost()
    local gameScene = g_gameGlobal:getGameScene()
    if gameScene and not tolua.isnull(gameScene) then
        local gameResult = gameScene:getChildByName("GameResultLayer")
        if gameResult and not tolua.isnull(gameResult) then
            gameResult:refreshShuffleCost()
        end
    end
end

function GameBase:setShuffleData(value)
    self.shuffleData = value
end


function GameBase:getEnterFlashCfg(posState)
    local paramCfg = require("newgold.MatchGames.GamePublic.Config_enterRoom")
    local m_cfg = paramCfg[self.mainRuler] or paramCfg.default
--    dump(m_cfg)
    return m_cfg[posState]
end

function GameBase:addEnterRoomFx(roomFlashID, posState)
    
    if self.isWatchWar then
        return
    end
    
    -- 场景未切换完成先缓存
    if not self.isSceneReady2PlayEnterFx then
        table.insert(self.enterRoomFxCache, {
            roomFlashID = roomFlashID,
            posState = posState,
        })
        return
    end
    
    roomFlashID = roomFlashID or (self.roomFlashCache and self.roomFlashCache[posState])
    if not roomFlashID or roomFlashID == 0 then
        return
    end
    
    -----
    -- 入场动画
    local headInst = self.tablePlayerHeadImgTable[posState]
    if headInst == 0 or tolua.isnull(headInst) then
        return
    end
    
    -- 缓存，用于其他玩家断线重连的时候
    self.roomFlashCache = self.roomFlashCache or {}
    self.roomFlashCache[posState] = roomFlashID
    
    -----
    -- pos
    local headConfig = g_gameGlobal:getHeadPosConfig()
    local posHead = headConfig[posState].head
    local fxNode = self
end

-----
-- 
function GameBase:getEnterRoomAckMsg()
    return self.requestStartGameAckCache
end

function GameBase:checkShuffleState()
    return false
end

function GameBase:setTingPaiBtnVisible(visible)
    if tolua.isnull(self.tingpaiBtn) then
        return
    end
    
    self.tingpaiBtn:setVisible(visible)
end

return GameBase � 