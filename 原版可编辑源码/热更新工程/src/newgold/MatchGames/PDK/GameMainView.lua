local GameMainView = class("GameMainView", cc.load("mvc").ViewBase)
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

function GameMainView:ctor(params)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("common/common.plist")

    self.params = params or {}
    self.gameType = self.params.gameType

    self:createPDKResoueceNode("GameMainView.csb")
    -- 打开右上角设置和返回大厅按钮
    self.openPopbar = self.resourceNode_:getChildByName("openPopbar")
    self.openPopbar:setPressedActionEnabled(true)
    self.openPopbar:onTouch(handler(self, self.btnEventFunc))
    self.openPopbar:setVisible(false)

    -- 关闭右上角设置和返回大厅按钮
    self.closePopbar = self.resourceNode_:getChildByName("closePopbar")
    self.closePopbar:setVisible(false)
    self.closePopbar:setPressedActionEnabled(true)
    self.closePopbar:onTouch(handler(self, self.btnEventFunc))

    self.popbarBg = self.resourceNode_:getChildByName("popbarBg")
    self.popbarBg:setVisible(false)
    -- 设置按钮
    self.setBtn = self.popbarBg:getChildByName("setBtn")
    self.setBtn:setPressedActionEnabled(true)
    self.setBtn:onTouch(handler(self, self.btnEventFunc))
    -- 返回大厅按钮
    self.backLobbyBtn = self.popbarBg:getChildByName("backLobbyBtn")
    self.backLobbyBtn:setPressedActionEnabled(true)
    self.backLobbyBtn:onTouch(handler(self, self.btnEventFunc))
    -- 解散按钮
    self.jiesanBtn = self.popbarBg:getChildByName("jiesanBtn")
    self.jiesanBtn:setPressedActionEnabled(true)
    self.jiesanBtn:onTouch(handler(self, self.btnEventFunc))


    -- 投降按钮
    self.giveupBtn = self.popbarBg:getChildByName("giveupBtn")
    self.giveupBtn:setPressedActionEnabled(true)
    self.giveupBtn:onTouch(handler(self, self.btnEventFunc))
    self.giveupBtn:hide()

    self.btns = {
        self.backLobbyBtn,
        self.jiesanBtn,
        self.setBtn,
        self.giveupBtn,
    }

    -- 定位出牌位置标签
    self.marker = self.resourceNode_:getChildByName("marker")
    self.marker:setVisible(false)
    
    -- 玩法
    self.wanfaBtn = self.resourceNode_:getChildByName("wanfa_bg")
    self.wanfaBtn:setTouchEnabled(true)
    self.wanfaBtn:setScale(1.2)
  
    --转运表情
    self.luckTurn_panel = nil
    if self.gameType == 1 then
        self.luckTurn_panel = self.resourceNode_:getChildByName("luckTurn_panel_PDK")
        self.resourceNode_:getChildByName("luckTurn_panel"):setVisible(false)
        self.resourceNode_:getChildByName("luckTurn_panel_PDK"):setVisible(false)
    else
        self.luckTurn_panel = self.resourceNode_:getChildByName("luckTurn_panel")
        self.resourceNode_:getChildByName("luckTurn_panel"):setVisible(false)
        self.resourceNode_:getChildByName("luckTurn_panel_PDK"):setVisible(false)
    end
    self.luckTurn_panel:setVisible(false)
    self.luckTurn_panel:onTouch(handler(self, self.touchEventLuckTurnFunc))

    local luckListBtn = self.luckTurn_panel:getChildByName("luck_SelectBG"):getChildren()
    if luckListBtn then
        for key, var in ipairs(luckListBtn) do
            var:onClick(handler(self, self.btnEventLuckListBtn))
        end
    end

    self.fanNode = self.resourceNode_:getChildByName("fanNode")
    
    self.huainingMenu = self.resourceNode_:getChildByName("huainingMenu")
    self.huainingCheckBtns = {}
    for i=1, 6 do
        local checkPanel = self.huainingMenu:getChildByName("checkPanel_"..i)
        self.huainingCheckBtns[i] = checkPanel:getChildByName("CheckBox")
        self.huainingCheckBtns[i]:setSelected(i==2 or i== 5)
        checkPanel:onClick(function()
            if i<= 3 then
                for j=1,3 do
                    self.huainingCheckBtns[j]:setSelected(j == i)
                end
            else
                for j=4,6 do
                    self.huainingCheckBtns[j]:setSelected(j ==i)
                end
            end    
        end)
    end
    self.huainingMenu:getChildByName("confirmBtn"):onClick(function()
        local xiafen,wanfa
        for i=1,6 do
            if i<=3 and self.huainingCheckBtns[i]:isSelected() then
                xiafen = i
            elseif i>3 and self.huainingCheckBtns[i]:isSelected() then 
                wanfa = i
            end
        end
        if self.huainingCallback then
            self.huainingCallback(xiafen, wanfa)
        end
    end)

    self.kunfenMenu = self.resourceNode_:getChildByName("kunfenMenu")
    for i=0,3 do
        local btn = self.kunfenMenu:getChildByName("kunBtn_"..i)
        btn:onClick(function()
            if self.kunfenCallback then
                self.kunfenCallback(i)
            end
        end)
        -- g_gameGlobal:setGameBtnAni( btn , "huang" )
    end


    self.xiafenMenu = self.resourceNode_:getChildByName("xiafenMenu")
    for i=0,2 do
        local btn = self.xiafenMenu:getChildByName("xiafenBtn_"..i)
        btn:onClick(function()
            if self.xiazhuCallback then
                self.xiazhuCallback(i)
            end
        end)
        -- g_gameGlobal:setGameBtnAni( btn , "huang" )
    end
    self.queMenu = self.resourceNode_:getChildByName("xuezhanMenu")
    local tiaoBtn = self.queMenu:getChildByName("tiaoBtn")
    local tongBtn = self.queMenu:getChildByName("tongBtn")
    local wanBtn = self.queMenu:getChildByName("wanBtn")

    tiaoBtn:onClick(function()
        if self.queCallback then
            self.queCallback(g_gameConstant.MAHJONG_CODE_COLOR_TIAO)
        end

    end)


    tongBtn:onClick(function() 
        if self.queCallback then
            self.queCallback(g_gameConstant.MAHJONG_CODE_COLOR_TONG)
        end

    end)
    wanBtn:onClick(function() 
        if self.queCallback then
            self.queCallback(g_gameConstant.MAHJONG_CODE_COLOR_WAN)
        end

    end)

    self.queMenu:addChild(eventObj.new("recommondQueType", function (event, type)        
        if type == g_gameConstant.CARD_TYPE_BAMBOO  then
            g_gameGlobal:setGameBtnAni( tiaoBtn , "lv" )
        elseif type == g_gameConstant.CARD_TYPE_CHARACTER then 
            g_gameGlobal:setGameBtnAni( wanBtn , "hong" )
        elseif type == g_gameConstant.CARD_TYPE_DOT then 
            g_gameGlobal:setGameBtnAni( tongBtn , "huang" )
        end
    end))


    self.chooseCardMenu = self.resourceNode_:getChildByName("chooseCardMenu")
   
    local confirmBtn = self.chooseCardMenu:getChildByName("confirmBtn")
    confirmBtn:onClick(function() 
        if self.chooseCardCallback then
            self.chooseCardCallback()
        end
    end)

    self.chuzengMenu = self.resourceNode_:getChildByName("chuzengMenu")
    for i=0,5 do
        local chidName = "cuzengBtn_"..i
        local btn = self.chuzengMenu:getChildByName(chidName)
        btn:onClick(function()
            if self.chuzengCallback then
                self.chuzengCallback(i)
            end
        end)
    end


    self.tingMenu = self.resourceNode_:getChildByName("tingMenu")
    self.tingBtn = self.tingMenu:getChildByName("tingBtn")
    self.guoBtn = self.tingMenu:getChildByName("guoBtn")
    self.tingBtn:onClick(handler(self, self.tingMenuBtnEvent))
    self.guoBtn:onClick(handler(self, self.tingMenuBtnEvent))

    self:hideTingMenu()
    self:hideHuainingMenu()
    self:hideQueMenu()
    self:hideChuzengMenu()
    self:hideKunFenMenu()
    self:hideXiaZhuMenu()
    self:hideChooseCardMenu()
    -----------------亳州算嘴麻将专属----------------------
    
    -----------------------------------------------
    local recordOpBtnBg = self.resourceNode_:getChildByName("Image_2") 
    recordOpBtnBg:hide()
    self.recordOpBtnBg = recordOpBtnBg
    -- 播放战绩时使用
    self.slowBtn = recordOpBtnBg:getChildByName("slowBtn") 
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)

    self.playBtn = recordOpBtnBg:getChildByName("playBtn") 
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)
    :setVisible(false)

    self.pauseBtn = recordOpBtnBg:getChildByName("pauseBtn") 
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)

    self.fastBtn = recordOpBtnBg:getChildByName("fastBtn") 
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)


    self.preBtn = self.resourceNode_:getChildByName("preBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)


    self.showResultBtn = self.resourceNode_:getChildByName("showResultBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)

    

    self.nextBtn = self.resourceNode_:getChildByName("nextBtn") 
    :setVisible(false)
    :onClick(handler(self, self.logBtnEvent))
    :setPressedActionEnabled(true)
    ---------------------------------------------------------------

    -- 设置触摸事件，用于popbar
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(true)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
    self._touchListener = listener

    self:regEvent()

end


-- 点击某个转运按钮
function GameMainView:btnEventLuckListBtn(sender)
    local btnName = sender:getName()
    local len = string.len(btnName);
    local lastNumber = -1
    local clickIndex = 0;
    for i = 1 , len do
        local tempNumber = tonumber(string.sub(btnName,- i ))

        if tempNumber then
            lastNumber = tempNumber
        else
            clickIndex = lastNumber
        end
    end

    self:onClickLuckTurnBtn(sender, clickIndex)
end

function GameMainView:touchEventLuckTurnFunc(event)
    if event.name == "ended" then
        -- 展示/隐藏转运表情
        self.luckSelectPanel = self.luckTurn_panel:getChildByName("luck_SelectBG")
        if self.luckSelectPanel:isVisible() then
            self.luckSelectPanel:setVisible(false)
        else
            -- 请求转运表情列表 todo
            local data =  g_gameGlobal:getExpressionData()
            if data.EmojiDataVo and #data.EmojiDataVo > 0 then
                for i=1,3 do
                    local btnNode = self.luckSelectPanel:getChildByName("Button_" .. i)
                    self:zhuanyunbiaoqingImg(btnNode, i)
                end

                self.luckSelectPanel:setVisible(true)
            else
                --获取互动表情
                g_longConnect:sendMsg(g_msgDefinitions.MSG_REQUEST_BUY_DAOJU,{
                    itemID = g_msgDefinitions.PLAYER_GET_EMOJI_DATAS,
                })
            end
        end
    end
end

function GameMainView:onClickLuckTurnBtn(btnNode, index)
    
end

function GameMainView:zhuanyunbiaoqingImg(btnNode, index)
    
end


function GameMainView:regEvent()


    self:addChild(eventObj.new("playerTooclose", function (event, data)        

        local tableWaitView = g_gameGlobal:getGameScene():getChildByName("tableWait")

        local forceTipView = display.getRunningScene():getChildByName("forceTipView")
        if forceTipView then 
            forceTipView:removeSelf()
        end

        local jiesanView = g_gameGlobal:getGameScene():getChildByName("jiesanView")

        if jiesanView then 
            return 
        end

        local function yescallback()
            G_continueTables[data.vipTableID..""] = true
        end

        local closeRoomImg = "imgLabel/jiesanfangjian.png"
        if tableWaitView and tableWaitView:isVisible() then 


            local data = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
            local isClub = false
            if data.vipTableID >= 300000 and  data.vipTableID <= 600000 then
                isClub = true
            end
            if isClub or  (data.vipTableID >= 600000 and  data.vipTableID <= 900000) then
                closeRoomImg = "imgLabel/exitRoom.png"
            else
                if not g_gameGlobal:getIsMyFangZhu() or  isClub or  (data.vipTableID >= 600000 and  data.vipTableID <= 900000) then
                    closeRoomImg = "imgLabel/exitRoom.png"
                end
            end
        end 

        local function nocallback()

            G_continueTables[data.vipTableID..""] = true

            local tableWaitView = g_gameGlobal:getGameScene():getChildByName("tableWait")
            if tableWaitView and tableWaitView:isVisible() then 
                GlobalEventManager:onEvent("clickJieSanBtn")
            else
                self:closeVipRoom()
            end

            
        end
        local box = ShowConfirmCancelBox(data.str  ,  yescallback, nocallback, true  , nil , "imgLabel/jixuyouxi.png" , nil , closeRoomImg )
        box:setName("forceTipView")
        box.closeBtn:hide()
         print("x")
    end))

end

function GameMainView:onEnter()
end
function GameMainView:onExit()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end

function GameMainView:setDelegate( d )
    self.delegate = d;
end

function GameMainView:setInGame(value)
    -- self.panelInGame:setVisible(value)
    -- self.panelInPreparatory:setVisible(not value)
    self:setVisible(value)
end

function GameMainView:setSelfIsReady(value)
    -- self.readyBtn:setVisible(not value)
end

function GameMainView:openPopbarFunc()
    self.popbarBg:setVisible(true)
    self.closePopbar:setVisible(true)
    self.openPopbar:setVisible(false)
end

function GameMainView:closePopbarFunc()
    self.popbarBg:setVisible(false)
    self.closePopbar:setVisible(false)
    self.openPopbar:setVisible(true)
end


function GameMainView:btnEventFunc( event )
    if event.name == "ended" then
        if event.target == self.openPopbar then
            self:openPopbarFunc()
        elseif event.target == self.closePopbar then
            self:closePopbarFunc()
        elseif event.target == self.backLobbyBtn then
            local function callback()
                if self.delegate then
                    self.delegate:doExitGameLogic()
                end
                g_gameGlobal.backToLobby()
            end

            self:closePopbarFunc()


            ShowConfirmCancelBox("是否返回大厅？",  callback )
        elseif event.target == self.jiesanBtn then
            self.jiesanBtn:setTag(1)

            self:closePopbarFunc()

            ShowConfirmCancelBox("您是否请求解散房间？",  handler(self, self.closeVipRoom))
        elseif event.target == self.giveupBtn then

            local str = "认输计分时，对方手牌中的炸弹计入翻倍，您确定认输么？"

            local box = nil
            box = ShowConfirmCancelBox( str ,  function() 
                GlobalEventManager:onEvent("SEND_GIVE_UP_GAME")
                box:removeSelf()
            end)


        elseif event.target == self.setBtn then


            self:closePopbarFunc()

            -- package.loaded["newgold.MatchGames.PDK.GameSetLayer"] = nil
            -- package.loaded["newgold.MatchGames.PDK.GamePdkSetLayer"] = nil

            local setLayer
            if self.gameType == 1 then 
                setLayer = require("newgold.MatchGames.PDK.GamePdkSetLayer"):create()
            else
                setLayer = require("newgold.MatchGames.PDK.GameSetLayer"):create()
            end
            g_gameGlobal:getGameScene():add(setLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
        end
    end
end

function GameMainView:closeVipRoom()
    CloseAllPopMsgView()
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_WAITING_OR_CLOSE_VIP
    playerTableOperationMsg.opValue = 1     --1是请求解散，2是同意解散，3不同意
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end
function GameMainView:modifyGameState(state)

    if state == g_gameConstant.GOLD_GAME_MODEL then   --金币场,战绩回放
        self.jiesanBtn:setVisible(false)

    elseif state == g_gameConstant.VIP_GAME_MODEL  then --vip场
        self.jiesanBtn:setVisible(true)
    elseif state == g_gameConstant.PLAY_LOG_MODEL then --战绩回放
        self.jiesanBtn:setVisible(false)
        self.giveupBtn:hide()

        -- self.slowBtn:setVisible(true)
        self.playBtn:setVisible(false)
        self.pauseBtn:setVisible(true)
        self.fastBtn:setVisible(true)


        self.recordOpBtnBg:show()

        self.preBtn:show()
        self.nextBtn:show()
        self.showResultBtn:show()

    end

    local totalheight = 0
    local showCount = 0
    for i,btn in ipairs(self.btns) do
        local isShow = btn:isVisible()
        if isShow then 
            totalheight = totalheight + 115
            showCount = showCount + 1
        end

        btn:setPositionY( (showCount-1)*110 + 65)
        
    end

    self.popbarBg:setContentSize(self.popbarBg:getContentSize().width , totalheight)

end

function GameMainView:onTouchBegan(touch, event)
    if not self.popbarBg:isVisible() then
        return false
    end

    local location = touch:getLocation()
    if cc.rectContainsPoint(self.popbarBg:getBoundingBox(), location) then
        return true
    else
        self.popbarBg:setVisible(false)
        self.closePopbar:setVisible(false)
        self.openPopbar:setVisible(true)
        return false
    end
end

function GameMainView:hideMarker()
    self.marker:setVisible(false)
    self.marker:stopAllActions()
end
function GameMainView:updateMarkerPosAndAnimal(pos, offsetPos)
    self.marker:setVisible(true)
    self.marker:stopAllActions()
    self.marker:move(pos.x + offsetPos.x, pos.y + offsetPos.y)

    local sequence = cc.Sequence:create(cc.MoveBy:create(0.4, cc.p(0, -15)), cc.MoveBy:create(0.4, cc.p(0, 15)))
    local action = cc.RepeatForever:create(sequence)
    self.marker:runAction(cc.RepeatForever:create(action))
end

function GameMainView:showTableTips(text)
    local msgBg = display.newSprite(display.newSpriteFrame("#game/show_msg_bg.png"))
    local textLabel = ccui.Text:create(text, "fonts/huakangyuanti.ttf", 32)

    if msgBg and textLabel then
        msgBg:move(display.cx - 50, display.height/3)
        self:add(msgBg, 10)

        textLabel:move(msgBg:getContentSize().width/2, msgBg:getContentSize().height/2)
            :addTo(msgBg)
        transition.fadeOut(msgBg, {time=2, removeSelf = 1})
    end
end

function GameMainView:tingMenuBtnEvent(target)

    if target == self.tingBtn then 
        self.tingMenuCallback(true)
    elseif target == self.guoBtn then 
        self.tingMenuCallback(false)
    end
    
end


function GameMainView:logBtnEvent(target)
    local dataTable = {}
    if target == self.slowBtn then
        dataTable.slow = 1
    elseif target == self.playBtn then
        dataTable.play = 1
        target:setVisible(false)
        self.pauseBtn:setVisible(true)
    elseif target == self.pauseBtn then
        dataTable.pause = 1
        target:setVisible(false)
        self.playBtn:setVisible(true)
    elseif target == self.fastBtn then
        dataTable.fast = 1
    elseif target == self.preBtn then
        self.preBtn:setTouchEnabled(false)
        self.nextBtn:setTouchEnabled(false)
        performWithDelay(self,function()
             self.preBtn:setTouchEnabled(true)
             self.nextBtn:setTouchEnabled(true)
        end,1)
        local log_msg = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG)
        local replayCode = log_msg.unused1

        local last = replayCode%100
        if last - 1 == 0 then 
            ShowToastMsg("已经是第一局")
            return
        end
        
        local getPlayerGameLogMsg = {}
        getPlayerGameLogMsg.unused1 = replayCode - 1
        getPlayerGameLogMsg.unused2 = 10
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)

    elseif target == self.nextBtn then
        self.nextBtn:setTouchEnabled(false)
        self.preBtn:setTouchEnabled(false)
        performWithDelay(self,function()
             self.preBtn:setTouchEnabled(true)
             self.nextBtn:setTouchEnabled(true)
        end,1)
        self:playNextRecord()

    elseif target == self.showResultBtn then 
        
        self:showResultLayer()

    end
    if g_gameGlobal:getIsPlayingGameLog() then
        local gameLog = display.getRunningScene():getChildByName("gameLog")
        if gameLog then
            gameLog:setLogState(dataTable)
        end
    end
end

function GameMainView:showResultLayer()

    

    local log_msg = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG)

    local gameOvertAck = log_msg.gameOverMsgAck or {}
    local wanfa2 = log_msg.unused0
    local newPlayWay = log_msg.playWay
    local vipRoomIndex = log_msg.vipRoomIndex


    if next(gameOvertAck) == nil then 
        ShowToastMsg("本局回放无计分数据")
        return 
    end

    if gameOvertAck then
        gameOvertAck.dianPaoPos = log_msg.dianPaoPos or -1
        gameOvertAck.jiaoPiao = log_msg.jiaoPiao or 0
        gameOvertAck.baoPaiPos = log_msg.baoPaiPos or -1
        gameOvertAck.player0TotalScore = log_msg.player0TotalScore or 0
        gameOvertAck.player1TotalScore = log_msg.player1TotalScore or 0
        gameOvertAck.player2TotalScore = log_msg.player2TotalScore or 0
        gameOvertAck.player3TotalScore = log_msg.player3TotalScore or 0
        gameOvertAck.handsTotal = log_msg.handsTotal or 0

        gameOvertAck.tuoDi0  = log_msg.tuoDi0 or 0
        gameOvertAck.tuoDi1  = log_msg.tuoDi1 or 0
        gameOvertAck.tuoDi2  = log_msg.tuoDi2 or 0
        gameOvertAck.tuoDi3  = log_msg.tuoDi3 or 0
        gameOvertAck.tongDi  = log_msg.tongDi or 0
        
    end

    local layerName = nil


    -- if g_gameGlobal:isDDZ(playWay , wanfa2) then  
    --     enterTypeCode = g_gameConstant.GAME_DDZ
    -- elseif g_gameGlobal:isTuosanzi(playWay , wanfa2) then 
    --     enterTypeCode = g_gameConstant.GAME_TUOSANZI
    -- elseif g_gameGlobal:isPdk(playWay , wanfa2) then 
    --     enterTypeCode = g_gameConstant.GAME_PDK
    -- elseif g_gameGlobal:isSanfu(playWay , wanfa2) then 
    --     enterTypeCode = g_gameConstant.GAME_SANFU
    -- elseif g_gameGlobal:isGuandan(playWay , wanfa2) then 
    --     enterTypeCode = g_gameConstant.GAME_GUANDAN
    
    -- end

    if g_gameGlobal:isDDZ(newPlayWay) then  
        layerName = "newgold.MatchGames.PDK.LYPDK.ddz.DDZResultLayer"
    elseif g_gameGlobal:isTuosanzi(newPlayWay) then 
        layerName = "newgold.MatchGames.PDK.LYPDK.TUOSANZIResultLayer"
    elseif g_gameGlobal:isPdk(newPlayWay) then 
        layerName = "newgold.MatchGames.PDK.LYPDK.LYPDKResultLayer"
    elseif g_gameGlobal:isSanfu(newPlayWay) then 
        layerName = "newgold.MatchGames.PDK.LYPDK.SANFUResultLayer"
    elseif g_gameGlobal:isLiangfu(newPlayWay) then 
        layerName = "newgold.MatchGames.PDK.LYPDK.SANFUResultLayer"
    elseif g_gameGlobal:isGuandan(newPlayWay) then 
        layerName = "newgold.MatchGames.PDK.LYPDK.GuanDanResultLayer"
    else
        layerName = "newgold.MatchGames.PDK.GameResultLayer"
    end

    


    local gameResultLayer = require(layerName):create({
        gameOvertAck = gameOvertAck,
        wanfa2 = wanfa2,
        newPlayWay = newPlayWay,
        vipTableID = vipRoomIndex,
    })
    if g_gameGlobal:getGameScene() then
        
        local eventNode = display.newNode()
        gameResultLayer:setName("gameResultLayer")
        eventNode:addTo(gameResultLayer)


        local initPause = false
        if g_gameGlobal:getIsPlayingGameLog() then
            local gameLog = display.getRunningScene():getChildByName("gameLog")
            if gameLog then
                initPause = gameLog.isLogPaused or false
            end
        end

        eventNode:registerScriptHandler(function (event)
            local dataTable = {}
            if event == "enter" then
                dataTable.pause = 1
            elseif event == "cleanup" then 
                dataTable.play = initPause and 0 or 1
            end

            if next(dataTable) ~= nil then 
                if g_gameGlobal:getIsPlayingGameLog() then
                    local gameLog = display.getRunningScene():getChildByName("gameLog")
                    if gameLog then
                        gameLog:setLogState(dataTable)
                    end
                end
            end

        end)


        g_gameGlobal:getGameScene():add(gameResultLayer, g_gameConstant.ROOMCLOSEVIEW_ZORDER)
    end

end


function GameMainView:playNextRecord(flag)

    local log_msg = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG)
    local replayCode = log_msg.unused1

    local getPlayerGameLogMsg = {}
    getPlayerGameLogMsg.unused1 = replayCode + 1
    getPlayerGameLogMsg.unused2 = flag or 10
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GET_PLAYER_GAME_LOG, getPlayerGameLogMsg)

end




--玩法描述
function GameMainView:setWanfaLayer(wanfaStr)
    wanfaStr = "红桃三先出\n必须管\n必出四个三\n5分/喜\n四带二\n三带二"
    if wanfaStr == "" then 
        self.wanfaBtn:hide()
        return 
    end
    
    local titleLabel = ccui.Helper:seekNodeByName(self.wanfaBtn , "wanfa")
    local descLayer = ccui.Helper:seekNodeByName(self.wanfaBtn , "bgImg")

    local arrowIcon = ccui.Helper:seekNodeByName(self.wanfaBtn , "wanfaBtn")

    local descLayerGlobal = descLayer:clone()
    g_gameGlobal:getGameScene():addChild(descLayerGlobal, 9999)
    local newPos = descLayer:getParent():convertToWorldSpace(cc.p(descLayer:getPosition()))
    descLayerGlobal:setPosition(newPos)

    local infos = string.split(wanfaStr,"\n")
    local layerSz = descLayer:getContentSize()
    titleLabel:setString("跑得快")
    for i=1, #infos do
        local str = infos[#infos - i +1]
        local label = ccui.Text:create(str, "fonts/huakangyuanti.ttf", 19)
        label:setPosition(layerSz.width/2, i*20)
        label:addTo(descLayerGlobal)
    end
    descLayerGlobal:setContentSize(layerSz.width, (#infos+1) *20)
    self.wanfaBtn:onClick(function(event)
        if(descLayerGlobal:isVisible()) then

            descLayerGlobal:setVisible(false)
            arrowIcon:loadTextures("MatchAH/".."common/wanfa_down.png", "MatchAH/".."common/wanfa_down.png", "",ccui.TextureResType.plistType)
        else
            descLayerGlobal:setVisible(true)
            arrowIcon:loadTextures("MatchAH/".."common/wanfa_up.png", "MatchAH/".."common/wanfa_up.png", "",ccui.TextureResType.plistType)
        end
    end)



end

--翻牌显示
function GameMainView:setFanLayer(fanInfo)
    if not fanInfo or #fanInfo == 0 then
        self.fanNode:setVisible(false)
        return
    end
    self.fanNode:setVisible(true)
    local getNormalCard = function(value)
        local imageView = Utils.getCard(value, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Normal)
        return imageView
    end
    self.fanCards = {}
    local bg = self.fanNode:getChildByName("bg")
    bg:removeAllChildren()
    local width = 55 * #fanInfo + 4
    local height = 80
    if g_gameGlobal:isZongYang() or g_gameGlobal:isNewTongLing() then  --枞阳麻将显示癞子,翻牌
        local img
        if g_gameGlobal:isZongYang() then
            img = ccui.ImageView:create("game/zuanCard.png", ccui.TextureResType.localType):addTo(bg)
        else
            img = ccui.ImageView:create("game/new_tongling_pei.png", ccui.TextureResType.localType):addTo(bg)            
        end
        img:setPosition(27,45) 
        local value = g_gameGlobal:getFanCard()
        local card = getNormalCard(value):addTo(bg)
        card:setAnchorPoint(cc.p(0,0))
        card:setScale(0.7)
        card:setPosition(55 + 3,5)
        table.insert(self.fanCards , card)

        for i,v in ipairs(fanInfo) do
            local card = getNormalCard(v):addTo(bg)
            card:setAnchorPoint(cc.p(0,0))
            card:setScale(0.55)
            card:setPosition(118 + 3,5)
            table.insert(self.fanCards , card)
        end
        local textLabel = ccui.Text:create("翻牌", "fonts/huakangyuanti.ttf", 16)
        textLabel:addTo(bg):setPosition(140,78)
        textLabel:setColor(cc.c3b(200, 223, 202))

        width = 55 * 2 + 4 +60
        height = 90
        bg:setScale(0.9)
        bg:setPosition(20,10)
    else
        for i,v in ipairs(fanInfo) do
            local card = getNormalCard(v):addTo(bg)
            card:setAnchorPoint(cc.p(0,0))
            card:setScale(0.7)
            card:setPositionX((i-1)*55 + 3)

            table.insert(self.fanCards , card)
        end
    end
    
    bg:setContentSize(width, height)

    self.fanNode:addChild(eventObj.new("cardFrameColorChanged", function (event, msg)        
        if self.fanCards and #self.fanCards > 0 then 
            for i,cardview in ipairs(self.fanCards) do
                if cardview and cardview.refreshFrameColor then 
                    cardview.refreshFrameColor()
                end
            end
        end
    end))
end


--枞阳翻牌显示
function GameMainView:setLiaZiLayer()

end




--怀宁捆分
function GameMainView:showHuainingMenu(callback)
    self.huainingMenu:setVisible(true)
    self.huainingCallback = callback
end
function GameMainView:hideHuainingMenu()
    self.huainingMenu:setVisible(false)
    self.huainingCallback = nil
end


--定缺花色
function GameMainView:showQueMenu(callback)
    self.queMenu:setVisible(true)
    self.queCallback = callback
end
function GameMainView:hideQueMenu()
    self.queMenu:setVisible(false)
    self.queCallback = nil
end


--换三张
function GameMainView:showChooseCardMenu(callback)
    self.chooseCardMenu:setVisible(true)
    self.chooseCardCallback = callback
end
function GameMainView:hideChooseCardMenu()
    self.chooseCardMenu:setVisible(false)
    self.chooseCardCallback = nil
end


--出增
function GameMainView:showChuzengMenu(callback)
    self.chuzengMenu:setVisible(true)
    self.chuzengCallback = callback
end
function GameMainView:hideChuzengMenu()
    self.chuzengMenu:setVisible(false)
    self.chuzengCallback = nil
end


--望江捆分
function GameMainView:showKunFenMenu(callback)
    self.kunfenMenu:setVisible(true)
    self.kunfenCallback = callback
end
function GameMainView:hideKunFenMenu()
    self.kunfenMenu:setVisible(false)
    self.kunfenCallback = nil
end

--冬至下注
function GameMainView:showXiaZhuMenu(callback)
    self.xiafenMenu:setVisible(true)
    self.xiazhuCallback = callback
end
function GameMainView:hideXiaZhuMenu()
    self.xiafenMenu:setVisible(false)
    self.xiazhuCallback = nil
end


--无为听牌
function GameMainView:showTingMenu(callback)
    self.tingMenu:setVisible(true)
    self.tingMenuCallback = callback
    if g_gameGlobal:isSuanZui() then
        self.tingBtn:loadTextures("game/baozui.png","game/baozui.png","",ccui.TextureResType.localType)
    end
end
function GameMainView:hideTingMenu()
    self.tingMenu:setVisible(false)
    self.tingMenuCallback = nil
end

return GameMainView