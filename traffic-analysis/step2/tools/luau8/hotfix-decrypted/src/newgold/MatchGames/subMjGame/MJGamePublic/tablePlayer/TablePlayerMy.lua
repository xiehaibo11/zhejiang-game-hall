local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerMy = class("TablePlayerMy", tablePlayerBase)
local TingCardListNode = import(".TingCardListNode")
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local GameTool = import("..GameTool")
local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

local mLogOperationVal = 0

function TablePlayerMy:ctor(...)
    self.posState = 1
    local cardNodeConfig = g_gameConstant.CARD_NODE_CONFIG[g_UserDataTable.mjCardType][self.posState]
    self.cardNodeConfig = cardNodeConfig
    
    TablePlayerMy.super.ctor(self, self.posState, ...)
    self.curOperationState = 0
    self.waitPlayerMultiGangSelect = false
    self.multiChiTable = {}          --存放多个吃碰杠的对象，比如3万碰，就有两个3万
    self.multiChiPengBtnTable = {}   --存放显示多个吃碰杠背景，背景为按钮
    self.promptTingList = {}         --选中出牌的时候显示的听list
    self.promptTingListClone = {}
    self.limitChu = false            --是否只允许出self.promptTingList中有的牌
    self.chiCardValue = 0
    self.nowMovingCard = nil
    self.operationMenuVisible = false
    self.pengCardValue = 0
    self.canTouchHandCard = true
    self.isCloseTishiHupai = false
    self.chuCardValue = 0
    self.isTingCard = false
    self.imgCardTab = {}
    self.qingBtn = nil
    self.isControl = false           --用于控制单点触摸
    self.startPos = cc.p(0, 0)       --初始触摸点
    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()

    self.chuCardLineNum = self.cardNodeConfig.chuCardLineNum[maxPlayerNum] or self.cardNodeConfig.chuCardLineNum[4]

    self.handCardSize = self:getNormalCard(0x01):getBoundingBox()
    -- 锚点x改为0 需要左移半张牌
    self.handCardStartPosX = display.cx - (self.handCardSize.width*13 + cardNodeConfig.newCardDistance)*0.5 - cardNodeConfig.handBRect.width * 0.5 
    self.handCardStartPosY = self.handCardSize.height/2 + cardNodeConfig.handPosFix.y

    if self.totalHandCardsNum == 7 or self.totalHandCardsNum == 10 then
        self.handCardStartPosX = self.handCardStartPosX + cardNodeConfig.handBRect.width*3/2
    end

    self:isSevenHandCards()

    self.laydownCardStartPosX = self.handCardStartPosX + cardNodeConfig.laydownPosFix.x
    self.laydownCardStartPosY = self.handCardStartPosY + cardNodeConfig.laydownPosFix.y

    local chuBoundSize = self:getMyLaydownCard(0x01):setScale(cardNodeConfig.chuFixScale):getBoundingBox()
    self.chuCardStartPosX = display.cx - (chuBoundSize.width*(self.chuCardLineNum-1))*0.5 + cardNodeConfig.chuStartPosFix.x     
    self.chuCardStartPosY = display.cy + cardNodeConfig.chuStartPosFix.y

    self.chuCardStartPosX = cardNodeConfig.chuCardOffsetCount[maxPlayerNum]*chuBoundSize.width + self.chuCardStartPosX

    self.tingIcon:setAnchorPoint(cc.p(0.5, 0.5))
        :move(display.cx, self.handCardStartPosY)
        :setScale(1.4)

    -- 胡牌提示
    local gameScene = g_gameGlobal:getGameScene()
    if gameScene and not tolua.isnull(gameScene) then
        local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
        if gameBase ~= nil then
            self.tingCardListNode = gameBase:getTingNode() or nil
        end
    end
    -- 过按钮
    --self.guoBtn = ccui.ImageView:create("spine/chipenggang_btn/guo.png", ccui.TextureResType.localType)
    self.guoBtn = ccui.Button:create()
    self.guoBtn:loadTextures("spine/chipenggang_btn/guo.png", "spine/chipenggang_btn/guo.png", "", ccui.TextureResType.localType)
    self.guoBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
    --:setScale(g_gameConstant.MYSELF_MENU_OPER_SPRITE_SCALE)
    :addTo(self, 10)
    :setTouchEnabled(true)
    :setVisible(false)
    :onClick(handler(self, self.guoBtnClick))
    

    -- 吃按钮
    --self.chiBtn = ccui.ImageView:create("spine/chipenggang_btn/chi.png", ccui.TextureResType.localType)
    self.chiBtn = ccui.Button:create()
    self.chiBtn:loadTextures("spine/chipenggang_btn/chi.png", "spine/chipenggang_btn/chi.png", "", ccui.TextureResType.localType)
    self.chiBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
    :addTo(self, 10)
    :setTouchEnabled(true)
    :setVisible(false)
    :onClick(handler(self, self.chiClick))
    
    self.pengBtn = ccui.Button:create()
    self.pengBtn:loadTextures("spine/chipenggang_btn/peng.png", "spine/chipenggang_btn/peng.png", "", ccui.TextureResType.localType)
    self.pengBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - 2 * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
    :addTo(self, 10)
    :setTouchEnabled(true)
    :setVisible(false)
    :onClick(handler(self, self.pengClick))
    
    self.gangBtn = ccui.Button:create()
    self.gangBtn:loadTextures("spine/chipenggang_btn/gang.png", "spine/chipenggang_btn/gang.png", "", ccui.TextureResType.localType)
    self.gangBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - 3 * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
    :addTo(self, 10)
    :setTouchEnabled(true)
    :setVisible(false)
    :onClick(handler(self, self.gangClick))
    
    self.huBtn = ccui.Button:create()
    self.huBtn:loadTextures("spine/chipenggang_btn/hu.png", "spine/chipenggang_btn/hu.png", "", ccui.TextureResType.localType)
    self.huBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - 4 * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
    :addTo(self, 10)
    :setTouchEnabled(true)
    :setVisible(false)
    :onClick(handler(self, self.huClick))
  
    function self.huBtn:setHuCode(huCode)
    end

    self.otherOpBtnBaseNode = cc.Node:create()
    :addTo(self, 10)
    :setVisible(true)


    self:createOperatorExBtns()
    -- 托管背景
    self.touGuanBg = ccui.Layout:create()
    :setVisible(false)
    :addTo(self, 200)
    self.touGuanBg:setTouchEnabled(true)
    self.touGuanBg:setContentSize(g_gameGlobal:getDisplayWidth(),g_gameGlobal:getDisplayHeight())

    local tuoguanMask = ccui.ImageView:create("noplist/mask2.png", ccui.TextureResType.localType):setAnchorPoint(cc.p(0,0))
    :setScale9Enabled(true)
    :setContentSize(g_gameGlobal:getDisplayWidth(), 150)
    :move(0, -10)
    :addTo(self.touGuanBg)

    --取消托管
    self.tuoGuanCancel = ccui.ImageView:create("Match/".."game/qxtuoguan.png", ccui.TextureResType.plistType)
    :move(tuoguanMask:getContentSize().width/2, tuoguanMask:getContentSize().height/2 + 20)
    :addTo(tuoguanMask)
    :setScale(0.8)
    :setTouchEnabled(true)
    :onClick(handler(self, self.cancelTuoGuan))

    --托管提示语
    self.tipLabel = ccui.Text:create("托管中,系统将自动摸牌、出牌、胡牌等操作", "", 22)
    :setTextColor(cc.c4b(255, 255, 255, 255))
    :move(tuoguanMask:getContentSize().width/2, tuoguanMask:getContentSize().height/2 - 30)
    :addTo(tuoguanMask)
    self.tipLabel:setFontName("fonts/fzzhunyuanjianti.ttf")
    self.tipLabel:enableOutline(cc.c4b(0,0,0,255), 1)

    -- 设置触摸事件
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(false)
    listener:registerScriptHandler(handler(self,self.onTouchBegan),cc.Handler.EVENT_TOUCH_BEGAN )
    listener:registerScriptHandler(handler(self,self.onTouchMoved),cc.Handler.EVENT_TOUCH_MOVED )
    listener:registerScriptHandler(handler(self,self.onTouchEnded),cc.Handler.EVENT_TOUCH_ENDED )
    listener:registerScriptHandler(handler(self, self.onTouchCancelled),cc.Handler.EVENT_TOUCH_CANCELLED)
    local eventDispatcher = self:getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self)
    self._touchListener = listener
    
    -----
    -- 别家出牌了 需要更新听牌列表
    self:addChild(eventObj.new(eventType.GAME_CARD_LEFT_NUM_CHANGED, function (evt, msg)
        if not self.promptTingListClone or not next(self.promptTingListClone) then
            return
        end
        
        local opPlayer = msg.posState
        -- 抢杠胡 所有人都要处理
        if opPlayer == self.posState and not msg.isQiang then
            return
        end
        
        -- 变化个数
        local changeNum = msg.changeNum
        local cardValue = msg.cardValue
        
        
        for cardVal, tingCards in pairs(self.promptTingListClone) do
            
            if tingCards.tingList and tingCards.singleNumList then
                for idx, tingValue in ipairs(tingCards.tingList) do
                    if tingValue == cardValue then
                        local newNum = tingCards.singleNumList[idx] + changeNum
                        -- 0~4
                        newNum = math.max(newNum, 0)
                        tingCards.singleNumList[idx] = math.min(newNum, 4)
                        
                        if self.tingCardListNode:isVisible() then
                            self:showTingList(true)
                        end
                        break
                    end
                end
            end
        end
    end))
end

-- 若是7张手牌的话，那就要挪动下距离，使手牌居中
function TablePlayerMy:isSevenHandCards( ... )

    if g_gameGlobal:isSevenCardGame() then 
        -- 
        self.handCardStartPosX = display.cx - (self.handCardSize.width*7 + self.cardNodeConfig.newCardDistance)*0.5 - self.cardNodeConfig.handBRect.width * 0.5

    end 
end

function TablePlayerMy:createOperatorExBtns()
    -- 扩展操作背景框 取消按钮
    display.loadSpriteFrames("others/others.plist", "others/others.png")
    self.exOpNode = cc.CSLoader:createNode("Match/others/exOpPanel.csb")

    self.exOpNode:move(display.cx, g_gameConstant.MYSELF_EX_MENU_POSITION_Y)
    :addTo(self, 10)
    :setVisible(false)

    self.exOpBg = self.exOpNode:getChildByName("exOpBg")
    self.exOpBg.originCSize = self.exOpBg:getContentSize()

    -- 扩展操作 取消按钮
    self.cancelExBtn = self.exOpBg:getChildByName("cancelExBtn")
    self.cancelExBtn:setVisible(false)

    local opExBtn = self.exOpBg:getChildByName("opExBtn")
    opExBtn:setVisible(false)
    
    local btnPosY = self.cancelExBtn:getPositionY()
    local startX = self.cancelExBtn:getPositionX()
    local xOffset = opExBtn:getPositionX() - startX
    self.exOpBg.xOffset = xOffset
    -- 扩展操作 明牌按钮
    self.mingpaiBtn = opExBtn:clone()
    :move(startX + xOffset*1, btnPosY)
    :addTo(self.exOpBg, 10)
    :setTouchEnabled(true)
    :onClick(handler(self, self.mingpaiClick))
    :setVisible(false)
    self.mingpaiBtn:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpMingPai.png", ccui.TextureResType.plistType)

    -- 扩展操作 打骰子按钮
    self.daTouZiBtn = opExBtn:clone()
    :move(startX + xOffset*1, btnPosY)
    :addTo(self.exOpBg, 10)
    :setTouchEnabled(true)
    :onClick(handler(self, self.daTouZiClick))
    :setVisible(false)
    self.daTouZiBtn:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpShaiZi.png", ccui.TextureResType.plistType)

    -- 扩展操作 放冲按钮
    self.fangChongBtn1 = opExBtn:clone()
    :move(startX + xOffset*1, btnPosY)
    :addTo(self.exOpBg, 10)
    :setTouchEnabled(true)
    :onClick(function() self:fangChongClick(1) end)
    :setVisible(false)
    self.fangChongBtn1:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpFangChong1.png", ccui.TextureResType.plistType)

    self.fangChongBtn2 = opExBtn:clone()
    :move(startX + xOffset*2, btnPosY)
    :addTo(self.exOpBg, 10)
    :setTouchEnabled(true)
    :onClick(function() self:fangChongClick(2) end)
    :setVisible(false)
    self.fangChongBtn2:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpFangChong2.png", ccui.TextureResType.plistType)

    self.fangChongBtn3 = opExBtn:clone()
    :move(startX + xOffset*3, btnPosY)
    :addTo(self.exOpBg, 10)
    :setTouchEnabled(true)
    :onClick(function() self:fangChongClick(3) end)
    :setVisible(false)
    self.fangChongBtn3:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpFangChong3.png", ccui.TextureResType.plistType)

    -- 扩展操作 看牌按钮
    self.kangBtn = opExBtn:clone()
    :move(startX + xOffset*1, btnPosY)
    :addTo(self.exOpBg, 10)
    :setTouchEnabled(true)
    :onClick(handler(self, self.kanClick))
    :setVisible(false)
    self.kangBtn:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpKan.png", ccui.TextureResType.plistType)
end

function TablePlayerMy:init(sex)
    TablePlayerMy.super.init(self, sex)
end

function TablePlayerMy:onExit()
    if self._touchListener then
        self:getEventDispatcher():removeEventListener(self._touchListener)
        self._touchListener = nil
    end
end

--初始化牌面值
function TablePlayerMy:initPaiMianValue(msg)
    for i = 1, #msg.mycards do
        local cardValue = msg.mycards[i]
        self:addNewCard(cardValue, false)
    end
    self:repositionAllCards()

    -- 根据手牌的高度设置托管背景的高度
    if #self.inhandCards > 0 then
        local height = self.handCardSize.height + 24
        self.touGuanBg:setContentSize(g_gameGlobal:getDisplayWidth(), height)
    end
end

function TablePlayerMy:showXZHuCard(cardValue)
    

end 

function TablePlayerMy:addChuCardNodeInDesk(cardNode)
    cardNode:setScale(self.cardNodeConfig.chuFixScale)
    table.insert(self.chuCards, cardNode)
    self.cardPanel:addChild(cardNode)
    local test = cardNode:getBoundingBox()

    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local chuCardLineNum = self.chuCardLineNum
    local chuNum = #self.chuCards-1
    local x = self.chuCardStartPosX +  math.mod(chuNum, chuCardLineNum) * cardNode:getBoundingBox().width

    local y = self.chuCardStartPosY + math.floor(chuNum/chuCardLineNum) * cardNode:getBoundingBox().height
    cardNode:move(x, y)
    
    -- 出的牌可能有多行，前面的行要盖住后面的行
    cardNode:setLocalZOrder((-100*math.floor(chuNum/chuCardLineNum)) - chuNum%chuCardLineNum )
end

function TablePlayerMy:addChuCard(cardValue, bNeedMarker,needSfx)
    TablePlayerMy.super.addChuCard(self,cardValue,bNeedMarker,needSfx)
    if needSfx and g_gameGlobal:getIsPlayingGameLog() then
        NG.soundManager:playMatchEffect("sound/outpai.mp3")
        NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForCardValue(bit._and(cardValue, 0xff), self.sex))
    end
    local imageView = self:getMyLaydownCard(cardValue, true)
    self:addChuCardNodeInDesk(imageView)
    self:addHandCardSelectMask(imageView)
    self.chuCardValue = cardValue
    --是否打出了听牌列表中的牌
    if next(self.promptTingListClone) ~= nil and self.promptTingListClone[cardValue] then
        self.isTingCard = true
    else
        self.isTingCard = false
    end
    local dealy = 0
    --托管模式下直接打到牌桌
    if not self.isTuoGuan then
        dealy = self:fileAddChuAni(imageView, needSfx)
    end 
    if bNeedMarker then
        self:showChuCardMarker(imageView, dealy)
    end
    
end

function TablePlayerMy:chiClick()
    local v1 = bit._and(self.chiCardValue, 0xff)
    local v2 = bit._and(self.chiCardValue * (2^(-8)), 0xff)
    local v3 = bit._and(self.chiCardValue * (2^(-16)), 0xff)
    local v4 = bit._and(self.chiCardValue * (2^(-24)), 0xff)

    local count = 0
    if v1 > 0 then
        count = count + 1
    end
    if v2 > 0 then
        count = count + 1
    end
    if v3 > 0 then
        count = count + 1
    end
    if v4 > 0 then
        count = count + 1
    end

    if count > 2 then
        if #self.multiChiPengBtnTable > 0 then
            for i, v in pairs(self.multiChiPengBtnTable) do
                v:setVisible(true)
            end
            return
        end
    end

    local target = 0
    local num = 0

    if v1 > 0 then
        target = v1
        num = num + 1
    end
    if v2 > 0 then
        target = bit._or(target, v2*(2^(num*8)))
        num = num + 1
    end
    if v3 > 0 and num < 2 then
        target = bit._or(target, v3*(2^(num*8)))
        num = num + 1
    end
    if v4 > 0 and num < 2 then
        target = bit._or(target, v4*(2^(num*8)))
        num = num + 1
    end

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CHI
    playerTableOperationMsg.card_value = target
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    self:hideOperationMenu()
end

function TablePlayerMy:pengClick(ref)
    if ref and not ref:isVisible() then
        return
    end

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_PENG
        playerTableOperationMsg.card_value = self.pengCardValue
        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

        self:clearHuCardList()
        self.operationMenuVisible = g_gameConstant.MAHJONG_OPERTAION_NONE
        self:hideOperationMenu()

end

function TablePlayerMy:gangClick(ref)
    if not ref:isVisible() then
        return
    end
--    if eventType == ccui.TouchEventType.ended then
        local peng_cd = self.pengCardValue
        local cd1 = bit._and(self.pengCardValue, 0xff)
        local cd2 = bit._and(self.pengCardValue*(2^(-8)), 0xff)
        local cd3 = bit._and(self.pengCardValue*(2^(-16)), 0xff)
        local cd4 = bit._and(self.pengCardValue*(2^(-24)), 0xff)
        -- self:setPromptTingList()
        self:clearHuCardList()
        self.operationMenuVisible = g_gameConstant.MAHJONG_OPERTAION_NONE
        self:hideOperationMenu()

        if (cd1 ~= 0) and (cd2 == 0) and (cd3 == 0) and (cd4 == 0) then
            -- 补杠
            self:playerClickGangChoiceCard(cd1)
        else
            local cardsTable = {}
            for i = 0, 3 do
                local cdx = bit._and(peng_cd*(2^(-8*i)), 0xff)
                if cdx == 0 then
                    break
                end
                table.insert( cardsTable, 1, cdx )
            end
            table.sort(cardsTable, handler(self, TablePlayerMy.handSortComFunc) )

            for i,cdx in ipairs(cardsTable) do
                local v1 = bit._or(cdx, cdx * (2^8))
                local v2 = bit._or(v1, cdx * (2^16))
                local multiGangBg = nil
                for j = 1, 4 do
                    local obj = self:getMyLaydownCard(cdx)
                    if multiGangBg == nil then
                        display.loadSpriteFrames("game/game0.plist", "game/game0.png")
                        multiGangBg = ccui.ImageView:create("Match/".."game/multiGang.png", ccui.TextureResType.plistType)
                        :setTag(v2)
                        :setTouchEnabled(true)
                        :setSwallowTouches(false)
                        :addTo(self,5)
                        :onClick(handler(self, self.chePengTipClick))
                        :setScale9Enabled(true)
                        :setCapInsets(cc.rect(20,20,5,5))
                        :setAnchorPoint(cc.p(1, 0.5))
        
                        table.insert(self.multiChiPengBtnTable, multiGangBg)

                        local width = obj:getRealBoundingBox().width*4 + 20
                        local height = obj:getRealBoundingBox().height + 10      
                        multiGangBg:setContentSize(width, height)
                        multiGangBg:move(
                            g_gameConstant.MYSELF_MENU_POSITION_END_X-10 - (width+20)*(#cardsTable-i), 
                            g_gameConstant.MYSELF_MENU_POSITION_Y+100
                        )
                    end

                    obj:addTo(multiGangBg, 10-j)
                    obj:setAnchorPoint(cc.p(0, 0.5))
                    obj:move(10 + obj:getRealBoundingBox().width*(j-1),
                        (multiGangBg:getContentSize().height-obj:getRealBoundingBox().y)/2)         
                end
                self.pengCardValue = peng_cd
            end
            
            if self.multiChiPengBtnTable and next(self.multiChiPengBtnTable) ~= false then
                g_gameGlobal:registerMoreOutsideCloseFunc(self.multiChiPengBtnTable[1],function()
                    for i, gangBg in ipairs(self.multiChiPengBtnTable or {}) do
                        if gangBg then
                            gangBg:removeSelf()
                        end
                    end
                    self.multiChiPengBtnTable = {}
                    for k, showBtn in ipairs(self.showOptBtn) do
                        if showBtn then
                            showBtn:setVisible(true)
                        end
                    end
                end,false,true,true,self.multiChiPengBtnTable)
            end
        end
end

function TablePlayerMy:huClick(ref)
    if not ref:isVisible() then
        return
    end
--    if eventType == ccui.TouchEventType.ended then
        self:hideOperationMenu()

        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_HU
        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
--    end
end

function TablePlayerMy:mingpaiClick()
    self:hideOperationMenu()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERATION_SHOW_CARDS_ACK
    playerTableOperationMsg.opValue = 1
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end

function TablePlayerMy:cancelMingPaiOperation()
    self:hideOperationMenu()
    self:repositionAllCards()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERATION_SHOW_CARDS_ACK
    playerTableOperationMsg.opValue = 0
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

function TablePlayerMy:daTouZiClick()
    self:hideOperationMenu()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DA_SHAI_ZI
    playerTableOperationMsg.opValue = 1
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end

function TablePlayerMy:cancelDaTouZiOperation()
    self:hideOperationMenu()
    self:repositionAllCards()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_DA_SHAI_ZI
    playerTableOperationMsg.opValue = 0
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

function TablePlayerMy:fangChongClick(chongValue)
    chongValue = chongValue or 1
    self:hideOperationMenu()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG
    playerTableOperationMsg.opValue = chongValue
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end

function TablePlayerMy:cancelFangChongOperation()
    self:hideOperationMenu()
    self:repositionAllCards()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_FANG_CHONG
    playerTableOperationMsg.opValue = 0
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

function TablePlayerMy:kanClick()
    self:hideOperationMenu()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_MO_CARD_AT_LAST_4_CARDS
    playerTableOperationMsg.opValue = 1
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
end

--g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
function TablePlayerMy:cancelKanOperation()
    self:hideOperationMenu()
    self:repositionAllCards()

    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.GAME_OPERTAION_NOTIFY_PLAYER_MO_CARD_AT_LAST_4_CARDS
    playerTableOperationMsg.opValue = 0
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

end

function TablePlayerMy:setWaitOtherFangChongState(value)
    --自己还没选 就当没等其他玩家
    value = self.fangChongSte ~= -1 and value
end

function TablePlayerMy:setCurOperationState(state)
    self.curOperationState = state
end

function TablePlayerMy:getCurOperationState()
    return self.curOperationState
end

function TablePlayerMy:clearHuCardList(needCheckAndFb)
    if self.tingCardListNode then
        if self.isCloseTishiHupai and self.tingCardListNode:isShowedTingList() then
            --胡牌提示只显示一次
           -- self.tingCardListNode:setDonotShow(true)
        end
        self.tingCardListNode:clearHuCardList()
    end
end

-- 当前是否显示了听牌提示
function TablePlayerMy:isTingListShow()
    return not tolua.isnull(self.tingCardListNode) and self.tingCardListNode:isVisible()
end

function TablePlayerMy:showTingList( show )
    if self.tingCardListNode then
        if not show then
            self.tingCardListNode:hide()
        else
            if self.chuCardValue then
                local prommptTingList = self.promptTingListClone
                if next(prommptTingList) ~= nil then
                    local prommptInfo = prommptTingList[self.chuCardValue]
                    if prommptInfo then
                        self:showTingCardList(prommptInfo.tingList, prommptInfo.singleNumList, prommptInfo.multipleList, prommptInfo.cardFanNumList )
                    else
                        self:clearHuCardList()
                    end
                end
            end
        end
    end
end

function TablePlayerMy:setTingCardNodeState( state )
    state = state or false
    if self.tingCardListNode then
        self.tingCardListNode:canOutSideClose(state)
    end
end
function TablePlayerMy:getTingCard(  )
   return self.isTingCard or false
end
--断线重连时用
function TablePlayerMy:setChuCardValue( cardValue )
    self.chuCardValue = cardValue or nil
end
function TablePlayerMy:getChuCardValue(  )
    return self.chuCardValue 
end
function TablePlayerMy:setPrommptInfo( tingList ,  singleNumList , cardFanNumList)
    if next(tingList) == nil then
        self.isTingCard  = false
    else
        self.isTingCard  = true
        local chuCardValue = self:getChuCardValue()
        if chuCardValue then
            self.promptTingListClone[chuCardValue] = {}
            self.promptTingListClone[chuCardValue].tingList = tingList
            self.promptTingListClone[chuCardValue].singleNumList = singleNumList
            self.promptTingListClone[chuCardValue].cardFanNumList = cardFanNumList
        end
    end
end
--设置是否关闭胡牌提示
function TablePlayerMy:setIsCloseTishiHupai(value)
    self.isCloseTishiHupai = value
end

function TablePlayerMy:showHuCardList(tingList, zsList, mutList)
    self:clearHuCardList()
    if self.tingCardListNode then
        self.tingCardListNode:showHuCardList(tingList, zsList, mutList);
    end
end

function TablePlayerMy:showTingCardList(tingList, zsList, mutList,fanList)
    self:clearHuCardList()
    if self.tingCardListNode then
        self.tingCardListNode:showTingCardList(tingList, zsList, mutList, fanList);
    end
end

function TablePlayerMy:overTimeAutoChu(cardValue)
    self.nowMovingCard = nil

    local bFind = false
    if self.newCard then
        if cardValue == self.newCard:getTag() then
            bFind = true
        end
    end

    if not bFind then
        if self.newCard then
            self:insertNewCard(self.newCard)
            self.newCard = nil
        end

        for i, v in pairs(self.inhandCards) do
            local cValue = v:getTag()
            if cValue == cardValue then
                self.newCard = v
                table.remove(self.inhandCards, i)
                break
            end
        end
    end

    if self.touchObjMoved and self.touchObj then
        if self.newCard ~=  self.touchObj then
            print("TablePlayerMy:overTimeAutoChu")
            self.touchObj:move(self.touchObjOriginPos.x, self.handCardStartPosY)
            self.touchObj:setLocalZOrder(self.touchObjOriginZOrder)
        end
    end
    self.touchObj = nil
    self:autoChu()
end
function TablePlayerMy:autoChu()
    if not self.newCard then
        return
    end

    ExternalFunc.sendHandCardSelectEvt()
    self:setPromptTingList()
    self:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)

    self:repositionAllCards()
    self:removeChuCard()


    self:tipShowChuCard(self.newCard:getTag())
    self:addChuCard(self.newCard:getTag(), true, true)

    self.newCard:removeSelf()
    self.newCard = nil

    self:hideOperationMenu()
end


function TablePlayerMy:moCard(cardValue,isPlayDownAction,_callback,dianPaoPos)

    local callback = _callback

    local handsNum = #self.inhandCards
    -- howns 不能超过14张牌，7张和10张的暂时不管了。
    if (cardValue == 0) or self.newCard or handsNum == 14 then
        if callback then 
            callback()
        end 
        return
    end
    
    local callback = _callback
    
    self.newCard = self:getNormalCard(cardValue):setAnchorPoint(cc.p(0, 0.5))
    :setTag(cardValue)
    :addTo(self.handCardPanel, 100+2)
    --癞子牌在抓到时显示癞子标识
    if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
        if g_gameGlobal:isLaiZi(cardValue) then
            GameTool.addLaiziMarkInCardNode(self.newCard, self.posState)
        end
    end
    --:setScale(1.1)

    local posx = self.handCardStartPosX
    local height = self.newCard:getBoundingBox().height

    local handCardWidth = 0
   
    if isPlayDownAction and not self.isTuoGuan then
        -- 增加血战新摸牌的位移
        local newCardYOffsetEx = 30
        local currPos = self:getNewCardPos()
        currPos.y = currPos.y + newCardYOffsetEx
        local toPos = cc.p(currPos.x,currPos.y - 30 - newCardYOffsetEx)
        self.newCard:move(currPos)
        local action = cc.MoveTo:create(0.06,toPos)
        self.newCard:runAction(cc.Sequence:create(action,cc.CallFunc:create(function()
            if callback then 
                callback()
            end 
        end)))
    else
        local pos = self:getNewCardPos()
        self.newCard:move(cc.p(pos.x,pos.y - 30))
        if callback then 
            callback()
        end 
    end

    if dianPaoPos then
        if type(dianPaoPos) == "number" and dianPaoPos >= 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPaoPos)
            if self.newCard and not tolua.isnull(self.newCard) then
                self:setHuPlayerFlag(self.newCard, rmPos)
            end
        end
    end

    self.handChuCardPosCache = cc.p(self.newCard:getPositionX(), self.newCard:getPositionY())

    local isHaveQue = self:checkHandHaveQueValue()
    self:showHaveQueCardShadow(isHaveQue)
end

function TablePlayerMy:getNewCardPos()
    local posx = self.handCardStartPosX

    local handsNum = #self.inhandCards
    return cc.p(posx + handsNum*self.handCardSize.width  + self.cardNodeConfig.newCardDistance,
                        self.handCardStartPosY + 30)
end

-- 吃碰杠时弹出是哪张牌可以吃碰杠
function TablePlayerMy:showCardOperateTip(cardValue,obj)
       --展示碰的牌
       local Value = bit._and(cardValue, 0xff)--bit._and(cardValue*(2^(-8*(4-1))), 0xff)
       if Value <= 0 then
           return 
       end
       if not obj then
          return 
       end
       local posX = obj:getPositionX()
       local imgCard = g_gameGlobal:getLaydownCard( Value, 1 )
       if imgCard then
           imgCard:addTo(self,10)
           local x = imgCard:getContentSize().width / 2 + obj:getContentSize().width/2 + 5
           imgCard:setPosition(cc.p(posX + x,g_gameConstant.MYSELF_MENU_POSITION_Y + 15))
           table.insert(self.imgCardTab,imgCard)
       end
end

function TablePlayerMy:hideOperationMenu(mode)
    if mode == g_gameConstant.MAHJONG_OPERTAION_HU and self.huBtn:isVisible() then
        return
    end

    self.chiBtn:setVisible(false)
    self.pengBtn:setVisible(false)
    self.gangBtn:setVisible(false)
    self.huBtn:setVisible(false)
    self.guoBtn:setVisible(false)

    self.exOpNode:setVisible(false)
    self.mingpaiBtn:setVisible(false)
    self.daTouZiBtn:setVisible(false)
    self.fangChongBtn1:setVisible(false)
    self.fangChongBtn2:setVisible(false)
    self.fangChongBtn3:setVisible(false)
    self.kangBtn:setVisible(false)
    self.cancelExBtn:setVisible(false)
    self.otherOpBtnBaseNode:removeAllChildren()

    self.operationMenuVisible = false
    self.chiCardValue = 0
    self.pengCardValue = 0

    self.exOpBg:setContentSize(self.exOpBg.originCSize)
    display.loadSpriteFrames("others/others.plist", "others/others.png")
    self.cancelExBtn:getChildByName("TitleImg"):loadTexture("Match/".."others/btnOpCancel.png", ccui.TextureResType.plistType)
    for i, v in pairs(self.multiChiPengBtnTable) do
        v:removeSelf()
    end
    self.multiChiPengBtnTable = {}
    -- self.multiChiTable里面的节点是上面self.multiChiPengBtnTable节点里，上面删了，下面就没有了，直接清空就行
    self.multiChiTable = {}

    -- if self.imgCard then
    --     self.imgCard:removeSelf()
    --     self.imgCard = nil
    -- end
    for i, card in pairs(self.imgCardTab or {}) do
        if card and not tolua.isnull(card) then
            card:removeSelf()
        end
    end
    self.imgCardTab = {}
end

--扩展操作 明牌操作
function TablePlayerMy:mingpaiOperationNotify()
    self.operationMenuVisible = true
    self.waitPlayerMultiGangSelect = false

    -- 之前的按钮隐藏
    self:hideOperationMenu()
    self.exOpNode:setVisible(true)
    self.cancelExBtn:setVisible(true)

    self.mingpaiBtn:setVisible(true)

    self.cancelExBtn:onClick( function()
        self:cancelMingPaiOperation()
        self.cancelExBtn:onClick(function() end)
    end)
end

--扩展操作 打骰子操作
function TablePlayerMy:daTouZiOperationNotify()
    self.operationMenuVisible = true
    self.waitPlayerMultiGangSelect = false

    -- 之前的按钮隐藏
    self:hideOperationMenu()
    self.exOpNode:setVisible(true)
    self.cancelExBtn:setVisible(true)

    self.daTouZiBtn:setVisible(true)

    self.cancelExBtn:onClick( function()
        self:cancelDaTouZiOperation()
        self.cancelExBtn:onClick(function() end)
    end)
end

--扩展操作 放冲操作
function TablePlayerMy:fangChongOperationNotify()
    self.operationMenuVisible = true
    self.waitPlayerMultiGangSelect = false
    -- 之前的按钮隐藏
    self:hideOperationMenu()

    self.exOpNode:setVisible(true)
    self.cancelExBtn:setVisible(true)
    display.loadSpriteFrames("others/others.plist", "others/others.png")
    self.cancelExBtn:getChildByName("TitleImg"):loadTexture("Match/".."others/btnCancelFangChong.png", ccui.TextureResType.plistType)

    self.fangChongBtn1:setVisible(true)
    self.fangChongBtn2:setVisible(true)
    self.fangChongBtn3:setVisible(true)

    self.exOpBg:setContentSize(cc.size(self.exOpBg.originCSize.width + self.exOpBg.xOffset*2, self.exOpBg.originCSize.height))
    self.cancelExBtn:onClick( function()
        self:cancelFangChongOperation()
        self.cancelExBtn:onClick(function() end)
    end)
end

--扩展操作 看牌
function TablePlayerMy:kanGuoOperationNotify()
    self.operationMenuVisible = true
    self.waitPlayerMultiGangSelect = false
    -- 之前的按钮隐藏
    self:hideOperationMenu()

    self.exOpNode:setVisible(true)
    self.cancelExBtn:setVisible(true)
    display.loadSpriteFrames("others/others.plist", "others/others.png")
    self.cancelExBtn:getChildByName("TitleImg"):loadTexture("Match/".."others/btnCancelGuo.png", ccui.TextureResType.plistType)

    self.kangBtn:setVisible(true)

    self.cancelExBtn:onClick( function()
        self:cancelKanOperation()
        self.cancelExBtn:onClick(function() end)
    end)
end

function TablePlayerMy:opBtnAddCard(btn, cardValue)
    do return end 
    btn:removeChildByName("c_opCard")
    if cardValue > 0 then
        local opcard = self:getMyLaydownCard(bit._and(cardValue, 0xff))
        --opcard:setScale(btn:getContentSize().height/opcard:getContentSize().height - 0.2)
        if opcard then
            opcard:setAnchorPoint(cc.p(0, 0.5))
            opcard:move(cc.p(btn:getContentSize().width + 20, btn:getContentSize().height/2+5))
            opcard:setName("c_opCard")
            btn:addChild(opcard)
        end
    end
end

function TablePlayerMy:opBtnRemoveCard(btn)
    btn:removeChildByName("c_opCard")
end

--通常操作
function TablePlayerMy:chiPengGangNotify(msg, isMySelfMo)
    if not msg then
        return
    end
    
    mLogOperationVal = msg.operation
    
    -- 打之前的按钮隐藏
    self:hideOperationMenu()
    
    self.operationMenuVisible = true
    self.waitPlayerMultiGangSelect = false
    self.showOptBtn = {}
    self.guoBtn:setVisible(true)
    table.insert( self.showOptBtn, self.guoBtn )
    local menuNum = 0
    local autoTestED = false
     --自摸
    if isMySelfMo then
        -- 胡
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
            self.huBtn:setVisible(true)
            table.insert(self.showOptBtn, self.huBtn)
        
            -- 判断是否为抢杠胡
            local huImgPath = "spine/chipenggang_btn/hu.png" 
            for k, v in ipairs(msg.tingList or {}) do 
                if v == g_gameConstant.MAHJONG_HU_CODE_XZ_QIANG_GANG_HU then 
                    huImgPath = "spine/chipenggang_btn/qianggang_btn.png"
                    break 
                end 
            end 
            self.huBtn:loadTextures(huImgPath, huImgPath, "", ccui.TextureResType.localType)

            menuNum = menuNum + 1
            self.huBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - menuNum * (g_gameGlobal:getDisplayWidth()/4), g_gameConstant.MYSELF_MENU_POSITION_Y)
          
            if G_TEEST_AUTO_CHU and not autoTestED then
                performWithDelay(
                    self,
                    function()
                        local playerTableOperationMsg = {}
                        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_HU
                        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
                        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

                        self:hideOperationMenu()
                    end, 0.5)
                autoTestED = true
            end
        end
       -- 杠
        if (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG)  or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG)  or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)  then
            self.gangBtn:setVisible(true)
            table.insert( self.showOptBtn, self.gangBtn )
            menuNum = menuNum + 1
            self.gangBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - menuNum * (g_gameGlobal:getDisplayWidth()/4 + 5), g_gameConstant.MYSELF_MENU_POSITION_Y)
            self.pengCardValue = msg.peng_card_value
            --self:showCardOperateTip(msg.peng_card_value)
            
            local count = 0
            for i = 0, 3 do
                local cdx = bit._and(msg.peng_card_value*(2^(-8*i)), 0xff)
                if cdx > 0 then
                    count = count + 1
                end
            end
            --self:opBtnAddCard(self.gangBtn, count>1 and 0 or msg.peng_card_value)
            if G_TEEST_AUTO_CHU and not autoTestED then
                erformWithDelay(
                    self,
                    function()                     
                        local playerTableOperationMsg = {}
                        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
                        playerTableOperationMsg.card_value = bit._and(self.pengCardValue, 0xff)
                        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
                        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

                        self:hideOperationMenu()
                    end, 0.5)
                utoTestED = true
            end
        end
    else
        -- 碰
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_PENG) == g_gameConstant.MAHJONG_OPERTAION_PENG then
          self.pengBtn:setVisible(true)
          table.insert( self.showOptBtn, self.pengBtn )
          menuNum = menuNum + 1.3
          self.pengBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
          self.pengCardValue = msg.peng_card_value
          self:showCardOperateTip(msg.peng_card_value,self.pengBtn)
          --self:opBtnAddCard(self.pengBtn, msg.peng_card_value)
          if G_TEEST_AUTO_CHU and not autoTestED then
              performWithDelay(
                  self,
                  function()
                      self:pengClick()
                  end, 0.5)
              autoTestED = true
          end
        end
        -- 杠
        if (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG)  or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG)  or
        (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG)  then
          self.gangBtn:setVisible(true)
          table.insert( self.showOptBtn, self.gangBtn )
          menuNum = menuNum + 1.3
          self.gangBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
          self.pengCardValue = msg.peng_card_value
          
          local count = 0
          for i = 0, 3 do
              local cdx = bit._and(msg.peng_card_value*(2^(-8*i)), 0xff)
              if cdx > 0 then
                  count = count + 1
              end
          end
          if not (count > 1) then
              self:showCardOperateTip(msg.peng_card_value,self.gangBtn)
          end

          if G_TEEST_AUTO_CHU and not autoTestED then
              performWithDelay(
                  self,
                  function()                     
                      local playerTableOperationMsg = {}
                      playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
                      playerTableOperationMsg.card_value = bit._and(self.pengCardValue, 0xff)
                      playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
                      g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

                      self:hideOperationMenu()
                  end, 0.5)
              autoTestED = true
          end
        end
        -- 胡
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_HU) == g_gameConstant.MAHJONG_OPERTAION_HU then
            self.huBtn:setVisible(true)
            table.insert( self.showOptBtn, self.huBtn )
        
                -- 判断是否为抢杠胡
            local huImgPath = "spine/chipenggang_btn/hu.png" 
            for k, v in ipairs(msg.tingList or {}) do 
                if v == g_gameConstant.MAHJONG_HU_CODE_XZ_QIANG_GANG_HU then 
                    huImgPath = "spine/chipenggang_btn/qianggang_btn.png"
                    break 
                end 
            end 
            self.huBtn:loadTextures(huImgPath, huImgPath, "", ccui.TextureResType.localType)

            if msg.target_card > 0 and not isMySelfMo then
                menuNum = menuNum + 1.3
                self:opBtnAddCard(self.huBtn, msg.target_card)
            else
                self:opBtnAddCard(self.huBtn, 0)
                menuNum = menuNum + 1
            end
            self.huBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
            self:showCardOperateTip(msg.target_card,self.huBtn)
            if G_TEEST_AUTO_CHU and not autoTestED then
                performWithDelay(
                    self,
                    function()
                        local playerTableOperationMsg = {}
                        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_HU
                        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
                        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

                        self:hideOperationMenu()
                    end, 0.5)
                autoTestED = true
            end
        end
    end

    self:multiChiPeng(msg.chi_card_value, msg.peng_card_value, msg.target_card, false, msg.chi_flag)
end

function TablePlayerMy:createYoujinBtn(type, menuNum, limitCards)    
    local youBtn = ccui.ImageView:create()
    if type == g_gameConstant.MAHJONG_NEW_OPERTAION_1_YOU then
        youBtn:loadTexture("spine/chipenggang_btn/youjin_1.png", ccui.TextureResType.localType)
    elseif type == g_gameConstant.MAHJONG_NEW_OPERTAION_2_YOU then
        youBtn:loadTexture("spine/chipenggang_btn/youjin_2.png", ccui.TextureResType.localType)
    elseif type == g_gameConstant.MAHJONG_NEW_OPERTAION_3_YOU then
        youBtn:loadTexture("spine/chipenggang_btn/youjin_3.png", ccui.TextureResType.localType)
    end
    youBtn:move(g_gameConstant.MYSELF_MENU_POSITION_END_X - menuNum * g_gameConstant.BUTTON_X, g_gameConstant.MYSELF_MENU_POSITION_Y)
    :addTo(self.otherOpBtnBaseNode, 10)
    :setTouchEnabled(true)
    :onClick( function()
        self:cancelSelectionOperation(false)
        if (math.mod(#self.inhandCards, 3) == 2) or self.newCard then
            self:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_CHU)
            self:repositionAllCards()
        end

        local newPromptTingList = {}
        for i,v in ipairs(limitCards) do
            newPromptTingList[i] = self.promptTingList[v]
            if newPromptTingList[i] == nil then
                newPromptTingList[i] = {tingCard = v, tingList = {}, singleNumList={}, multipleList = {}}
            end
        end
        self:setPromptTingList(newPromptTingList, #limitCards > 0)
    end)
    -- 胡动画
    local skeleton = sp.SkeletonAnimation:create("Match/spine/chipenggang_btn/coeanl.json", "Match/spine/chipenggang_btn/coeanl.atlas", 1)
    skeleton:move(youBtn:getContentSize().width/2, youBtn:getContentSize().height/2)
    skeleton:setAnimation(0, "hu", true)
    skeleton:setBlendFunc(cc.blendFunc(gl.ONE , gl.ONE))
    skeleton:addTo(youBtn)
end

function TablePlayerMy:playerClickGangChoiceCard(value)
    local playerTableOperationMsg = {}
    playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_MING_GANG
    playerTableOperationMsg.card_value=bit._and(value, 0xff)
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    -- self:removeOneCard(bit._and(value, 0xff))
    -- self:removeOneCard(bit._and(value, 0xff))
    -- self:removeOneCard(bit._and(value, 0xff))

end

function TablePlayerMy:chePengTipClick(target)
    local cardValue = target:getTag()

    local v1 = bit._and(cardValue, 0xff)
    local v2 = bit._and(cardValue * (2 ^ (-8)), 0xff)
    local v3 = bit._and(cardValue * (2 ^ (-16)), 0xff)

    if v1 == v2 and v2 == v3 then
        self:playerClickGangChoiceCard(v1)
        self:hideOperationMenu()
        return
    end

    local playerTableOperationMsg = {}
    if v1 == v2 then
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_PENG
    else
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CHI
    end
    playerTableOperationMsg.card_value = cardValue
    playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

    self:hideOperationMenu()
    self.showOptBtn = {}
end

function TablePlayerMy:multiChiPeng(chiCards, pengCards, targetCard, chiTingFlag, chiFlag)
    local totalCard = 0
    local chiCardsTable = {}
    local pengCardsTable = {}

    for i = 1, 4 do
        chiCardsTable[i] = bit._and(chiCards * (2^(-8*(i-1))), 0xff)
        pengCardsTable[i] = bit._and(pengCards * (2^(-8*(i-1))), 0xff)
        if chiCardsTable[i] ~= 0  then
            totalCard = totalCard + 1
        end
        if pengCardsTable[i] ~= 0  then
            totalCard = totalCard + 1
        end
    end

    if totalCard == 2 then
        -- 2张牌，不用特殊提示
        return
    end

    local target = bit._and(targetCard, 0xff)

    -- 吃可能有3组
    if (bit._and(chiFlag, 0x01) == 1) or (not chiTingFlag) then
        self:showMultiChiPeng(chiCardsTable[1], chiCardsTable[2], target)
    end
    if (bit._and((chiFlag*(2^(-1))), 0x01) == 1) or (not chiTingFlag) then
        self:showMultiChiPeng(chiCardsTable[2], chiCardsTable[3], target)
    end
    if (bit._and((chiFlag*(2^(-2))), 0x01) == 1) or (not chiTingFlag) then
        self:showMultiChiPeng(chiCardsTable[3], chiCardsTable[4], target)
    end

    -- 碰只有一组
    local imageViewBg
    for i, v in pairs(self.multiChiTable) do
        if math.mod(i-1, 3) == 0 then
            local value = v:getTag()
            local width = v:getRealBoundingBox().width*3 + 20
            local height = v:getRealBoundingBox().height + 20
            imageViewBg = ccui.ImageView:create("Match/".."game/game_common_form.png", ccui.TextureResType.plistType)
            :setAnchorPoint(cc.p(1, 0.5))
            :setScale9Enabled(true)
            :setCapInsets(cc.rect(10, 9, 13, 9))
            :setContentSize(width, height)
            :move(g_gameConstant.MYSELF_MENU_POSITION_END_X-10 - (width+20)*(math.floor((#self.multiChiTable-1)/3)-math.floor((i-1)/3)), g_gameConstant.MYSELF_MENU_POSITION_Y+100)
            :setTouchEnabled(true)
            :onClick(handler(self, self.chePengTipClick))
            :setTag(value)
            :addTo(self, 5)
            :setVisible(false) --先不显示，等玩家点了吃再显示
            table.insert(self.multiChiPengBtnTable, imageViewBg)
        end
        if imageViewBg then
            local idx = math.mod(i, 3)
            if idx == 0 then
                idx = 3
            end
            v:setAnchorPoint(cc.p(0, 0.5))
            v:move(10 + v:getRealBoundingBox().width*(idx-1),
                (imageViewBg:getContentSize().height-v:getRealBoundingBox().y)/2)
            v:addTo(imageViewBg, 100-i)
        end
    end
end

function TablePlayerMy:showMultiChiPeng(value1, value2, targetValue)
    if value1 == 0 or value2 == 0 or targetValue == 0 then
        return
    end

    local cValue = bit._or(value2*(2^8), value1)

    local imageView1 = self:getMyLaydownCard(value1)
    --:setScale(0.9)
    :setTag(cValue)
    local imageView2 = self:getMyLaydownCard(value2)
    --:setScale(0.9)
    :setTag(cValue)
    local imageView3 = self:getMyLaydownCard(targetValue)
    --:setScale(0.9)
    :setTag(cValue)

    if value1 == value2 and value2 == targetValue then
        table.insert(self.multiChiTable, imageView1)
        table.insert(self.multiChiTable, imageView2)
        table.insert(self.multiChiTable, imageView3)
    else
        imageView3:setColor(cc.c3b(120, 200, 177))
        if targetValue > value1 and targetValue > value2 then
            table.insert(self.multiChiTable, imageView1)
            table.insert(self.multiChiTable, imageView2)
            table.insert(self.multiChiTable, imageView3)
        elseif targetValue < value1 and targetValue < value2 then
            table.insert(self.multiChiTable, imageView3)
            table.insert(self.multiChiTable, imageView1)
            table.insert(self.multiChiTable, imageView2)
        else
            table.insert(self.multiChiTable, imageView1)
            table.insert(self.multiChiTable, imageView3)
            table.insert(self.multiChiTable, imageView2)
        end
    end
end
function TablePlayerMy:updateCardColor(value)
    local isHaveQue = self:checkHandHaveQueValue()
    self:showHaveQueCardShadow(isHaveQue)
end

function TablePlayerMy:guoBtnClick(ref, eventType)
    if not ref:isVisible() then
        return
    end
--    if eventType == ccui.TouchEventType.ended then
        local confirmTip = nil
         if self.huBtn:isVisible() then
            local gameBase = g_gameGlobal:getGameScene():getChildByName("gameBase")
--            if gameBase.isGuohuNotice then
            if g_UserDataTable.isGuohuNotice then
                confirmTip = "是否确定放弃本轮胡牌？"
            end
         end
        self:cancelSelectionOperation(true, confirmTip)
--    end
end

function TablePlayerMy:cancelSelectionOperation( value, confirmTip )
    local callFunc = function()
        self:removeCardOperateTip(self.pengCardValue)
        self:removeCardOperateTip(self.chiCardValue)
    
    
        if value then
            local playerTableOperationMsg = {}
            playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CANCEL
            playerTableOperationMsg.player_table_pos=g_gameGlobal:getMyTablePos()
            
            playerTableOperationMsg.operationList = {
                -mLogOperationVal,
            }
            
            if self.huBtn:isVisible() then
                -- 
                table.insert(playerTableOperationMsg.operationList, 1, g_gameConstant.GAME_OPERTAION_CANCEL_HU)
            end
            
            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)
        end
        
        self:hideOperationMenu()
        self:repositionAllCards()
    end

    if confirmTip then
        local box
        box = ShowConfirmCancelBox(confirmTip, function()
            callFunc()
            box:removeSelf()
            box = nil
        end )
    else
        callFunc()
    end    
end

function TablePlayerMy:removeCardOperateTip( cardValue )
    for i = 1, 4 do
        local value = bit._and(cardValue*(2^(-8*(i-1))), 0xff)
        if value ~= 0 then
            for j, v in pairs(self.inhandCards) do
                local cValue = v:getTag()
                if cValue == value then
                    v:setPositionY(self.handCardStartPosY)
                    break
                end
            end
        end
    end
end

function TablePlayerMy:removeMyCard( cardValue, bGang )
    if not cardValue then
        print("d")
    end
    local v1 = bit._and(cardValue, 0xff)
    local v2 = bit._and(cardValue*(2^(-8)), 0xff)
    local v3 = bit._and(cardValue*(2^(-16)), 0xff)
    local v4 = bit._and(cardValue*(2^(-24)), 0xff)

    self:removeOneCard(v1)
    self:removeOneCard(v2)

    if bGang then
        self:removeOneCard(v1)
        self:removeOneCard(v1)
    end
end

-- pengGangFx, 暂时断勾卡的时候需要用一下
function TablePlayerMy:chiPengGangOperation( msg, bPlayAnimation, pengGangFx)
    dump(msg, "------")
    if bPlayAnimation then
        self:playChiPengGangAnimation(msg)
    end

    if msg.opValue == g_gameConstant.MAHJONG_OPERTAION_GANG_NOTIFY then
        return
    end

    local isGang = false
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG or
        bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_MING_GANG) == g_gameConstant.MAHJONG_OPERTAION_MING_GANG then
        if self.newCard then
            self:insertNewCard(self.newCard)
            self.newCard = nil
        end
        self:removeMyCard(msg.card_value, true)
        isGang = true
        --杠牌成功后更新
        self:setPromptTingList()
    else
        self:removeMyCard(bit._and(msg.card_value, 0xffff), false)
    end

    local c1 = bit._and(msg.opValue, 0xff)
    local c2 = bit._and(msg.opValue*(2^-8), 0xff)
    local c3 = bit._and(msg.opValue*(2^-16), 0xff)
    local chiCard = bit._and(msg.opValue*(2^-24), 0xff)
    local opCard = 0

    if c1 == chiCard then
        opCard = bit._or(bit._or(c3*(2^8), c2*(2^16)), c1)
    elseif c3 == chiCard then
        opCard = bit._or(bit._or(c2*(2^8), c1*(2^16)), c3)
    elseif c2 == chiCard then
        opCard = bit._or(bit._or(c1*(2^16), c3*(2^8)), c2)
    else
        opCard = bit._and(msg.opValue, 0xffffff)
    end

    if isGang then
        opCard = bit._or(c2*(2^24), opCard)
    end
    
    local laydownScale = self.cardNodeConfig.laydownFixScale or 1
    local isScaleFixed = false
    
    -- 打牌特效播放的位置
    local downCardPos = nil
    
    if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_BU_GANG) == g_gameConstant.MAHJONG_OPERTAION_BU_GANG then
        local matchIdx = self:findPeng(c2)
        if matchIdx == 0 then
            return
        end

        local posx = self.laydownCards[matchIdx]:getPositionX()
        local posy = self.laydownCards[matchIdx]:getPositionY() + 15

        local imageView = self:getMyLaydownCard(c2)
        :setTag(c2)
        :setAnchorPoint(cc.p(0, 0.5))
        :move(posx, posy)
        :addTo(self.laydownCardPanel,100+5)
        :setScale(laydownScale)
        self:addHandCardSelectMask(imageView)

        table.insert(self.laydownCards, imageView)
        self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, 3)
        
        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
        
    else
        local layDownWidth = 0
        local opCards = {}
        for i=0, 3 do
            local card = bit._and(opCard*(2^(-i*8)), 0xff)
            if card ~= 0 then
                opCards[#opCards+1] = card
            end
        end
        if bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_CHI) == g_gameConstant.MAHJONG_OPERTAION_CHI then
            table.sort(opCards)
        end
        
        for idx,card in ipairs(opCards) do
            local i = idx-1
            if card ~= 0 then
                local cv = card

                -- 暗杠不显示
                if (i ~= 3) and (bit._and(msg.operation, g_gameConstant.MAHJONG_OPERTAION_AN_GANG) == g_gameConstant.MAHJONG_OPERTAION_AN_GANG) then
                    cv = 0x39
                end
                local chuNum = self.chiPengGangBlock * 3 + 1
                local imageView = self:getMyLaydownCard(cv):setAnchorPoint(cc.p(0, 0.5))
                if not isScaleFixed then
                    local origS = imageView:getScale()
                    laydownScale = origS * laydownScale
                    isScaleFixed = true
                end
                imageView:setTag(card)
                imageView:setScale(laydownScale)

                layDownWidth = imageView:getBoundingBox().width
                local startx = self.laydownCardStartPosX
                local zOrder = 3 - i
                if i == 3 then
                    imageView:move(startx + layDownWidth,
                        self.laydownCardStartPosY + 15)
                        zOrder = 3
                else
                    local posx = startx + i * layDownWidth
                    imageView:move(posx, self.laydownCardStartPosY)
                    
                    -- 取第二张的位置
                    if i == 1 then
                        downCardPos = self.laydownCardPanel:convertToWorldSpace(cc.p(imageView:getPosition()))
                    end
                end
                
                self.laydownCardPanel:add(imageView, zOrder)
                self:addHandCardSelectMask(imageView)
                table.insert(self.laydownCards, imageView)
--                self:setChuPlayerColor(imageView, msg.chuOffset, msg.operation, i, chiCard)
                self:setChuPlayerFlag(imageView, msg.chuOffset, msg.operation, i, chiCard)
                
            end
        end
        
        
        local mylayhandDist = (self.cardNodeConfig.handBRect.width * 2) - layDownWidth * 3
        
        -- print(self.cardNodeConfig.layHandDistance)
        self.laydownCardStartPosX = self.laydownCardStartPosX + layDownWidth*3 + mylayhandDist--self.cardNodeConfig.layHandDistance
        self.handCardStartPosX = self.laydownCardStartPosX-- + mylayhandDist--self.cardNodeConfig.layHandDistance
        self.chiPengGangBlock = self.chiPengGangBlock + 1
    end
    
    self:repositionAllCards()
    self:hideOperationMenu()
    
    if bPlayAnimation or pengGangFx then
        -- 碰杠打牌特效
        self:playPengGangFx(downCardPos, msg.unused3)
    end
end

function TablePlayerMy:tingOperation( msg, bPlayAnimation, bPlaySfx )
    TablePlayerMy.super.tingOperation(self, msg, bPlayAnimation, bPlaySfx )
end

function TablePlayerMy:setTingState(value)
    TablePlayerMy.super.setTingState(self, value)
    self:updateCardColor()
end

function TablePlayerMy:cancelTuoGuan( event )
    local playerGameOpertaionMsg = {}
    playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERTAION_SET_TUOGUAN
    playerGameOpertaionMsg.opValue = 0
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)
    self:setTuoGuanState(false)

    if (math.mod(#self.inhandCards, 3) == 2) or self.newCard then
        --self.curOperationState = g_gameConstant.MAHJONG_OPERTAION_CHU
        self:repositionAllCards()
    end
end

function TablePlayerMy:setTuoGuanState( state )
    self.touGuanBg:setVisible(state)
    --手牌是否可以触摸和托管状态相反
    self.canTouchHandCard = not state
    self.isTuoGuan = state
    ExternalFunc.sendCustomEvent(state and eventType.TUO_GUAN_BEGAIN or eventType.TUO_GUAN_CANCEL)
end

function TablePlayerMy:getTuoGuanState(  )
    return self.isTuoGuan
end 

function TablePlayerMy:checkCardCanChu(cardValue)
    if self.limitChu then
        if self.promptTingList[cardValue] then
            return true
        else
            return false
        end
    end

    if g_gameGlobal:isHuaCard(cardValue) then
        return false
    end
    
    -- 不满足可出牌数量  不让出
    local cardCount = self:getCardCount()
    if cardCount % 3 ~= 2 then
        return false
    end
    
    return true
end

function TablePlayerMy:getCardCount()
    local count = 0
    if self.inhandCards then
        for k, v in ipairs(self.inhandCards) do
            if not tolua.isnull(v) then
                count = count + 1
            end
        end
    end
    
    if not tolua.isnull(self.newCard) then
        count = count + 1
    end
    
    return count
end

function TablePlayerMy:hasQueCardInHand()
    local queCardCount = 0
    for i, v in pairs(self.inhandCards) do
        if self:isQueCard(v:getTag()) then
            queCardCount = queCardCount + 1
        end
    end

    if self.newCard then
        if self:isQueCard(self.newCard:getTag()) then
            queCardCount = queCardCount + 1
        end
    end
    return queCardCount>0, queCardCount
end

function TablePlayerMy:onTouchBegan( touch, event )
    if g_gameGlobal:getIsPlayingGameLog() then
        return false
    end
    if self.operationMenuVisible then
        return false
    end

    if not self.canTouchHandCard then
        return false
    end
    
    if self.isPlayingHuanCard then
        return false
    end

    -- 手里有花牌不允许点牌
    --[[
    if #g_gameGlobal:getCurrentHuaList() > 0 then
        if self.newCard then
            if g_gameGlobal:isHuaCard(self.newCard:getTag()) then
                return false
            end
        end

        for i, v in pairs(self.inhandCards) do
            if g_gameGlobal:isHuaCard(v:getTag()) then
                return false
            end
        end
    end--]]

    if self.touchObjMoved then
        return true
    end
    if self.isControl then
        return false
    end
    self.touchObjMoved = false
    self.isControl = true

    self.startPos = touch:getLocation()
    local hasQueCardInHand = self:hasQueCardInHand()
    if self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
        local location = touch:getLocation()
        -- 手牌检测

        for i, v in pairs(self.inhandCards) do
            local color = v:getColor()
            if not (color.r == 166 and color.g == 166 and color.b == 166)
                and not (not g_gameGlobal:isLaiZiCouldPutOut() and g_gameGlobal:isLaiZi(v:getTag()))
                and (not hasQueCardInHand or self:isQueCard(v:getTag()))
                and self:checkCardCanChu(v:getTag()) then
                local locationInNode = v:convertToNodeSpace(location)
                local rect = cc.rect(0,0,v:getBoundingBox().width, v:getBoundingBox().height)
                if cc.rectContainsPoint(rect, locationInNode) then
                    if self.touchObj and self.touchObjOriginPos then
                        if self.touchObj ~= v then
                            self:cardMove(self.touchObj, "back")
                            ExternalFunc.sendHandCardSelectEvt()
                        end
                    end
                    self.touchObj = v
                    self.touchObjOriginPos = cc.p(v:getPosition())
                    self.touchObjOriginZOrder = v:getLocalZOrder()
                    NG.soundManager:playMatchEffect("sound/dianpai.mp3")
                    
                    local prommptInfo = self.promptTingList[self.touchObj:getTag()]
                    if prommptInfo then
                        self:showTingCardList(prommptInfo.tingList, prommptInfo.singleNumList, prommptInfo.multipleList, prommptInfo.cardFanNumList )
                    else
                        self:clearHuCardList()
                    end
                    ExternalFunc.sendHandCardSelectEvt(self.touchObj:getTag())
                    self.touchObj:move(location)
                    self.touchObj:setLocalZOrder(10000)
                    return true
                end
            end
        end
        -- 新摸牌检测
        if self.newCard then
            local color = self.newCard:getColor()
            if not (color.r == 166 and color.g == 166 and color.b == 166)
                and not (not g_gameGlobal:isLaiZiCouldPutOut() and g_gameGlobal:isLaiZi(self.newCard:getTag()))
                and (not hasQueCardInHand or self:isQueCard(self.newCard:getTag()))
                and self:checkCardCanChu(self.newCard:getTag()) then
                local locationInNode = self.newCard:convertToNodeSpace(location)
                local rect = cc.rect(0,0,self.newCard:getBoundingBox().width, self.newCard:getBoundingBox().height)
                if cc.rectContainsPoint(rect, locationInNode) then
                    if self.touchObj and self.touchObjOriginPos then
                        if self.touchObj ~= self.newCard then
                            self:cardMove(self.touchObj, "back")
                            ExternalFunc.sendHandCardSelectEvt()
                        end
                    end
                    self.touchObj = self.newCard
                    self.touchObjOriginPos = cc.p(self.newCard:getPosition())
                    self.touchObjOriginZOrder = self.newCard:getLocalZOrder()
                    NG.soundManager:playMatchEffect("sound/dianpai.mp3")

                    local prommptInfo = self.promptTingList[self.touchObj:getTag()]
                    if prommptInfo then
                        self:showTingCardList(prommptInfo.tingList, prommptInfo.singleNumList, prommptInfo.multipleList, prommptInfo.cardFanNumList)
                    else
                        self:clearHuCardList()
                    end
                    ExternalFunc.sendHandCardSelectEvt(self.touchObj:getTag())
                    self.touchObj:move(location)
                    self.touchObj:setLocalZOrder(10000)
                    return true
                end
            end
        end
    end
    self.isControl = false
    return false
end

function TablePlayerMy:onTouchMoved( touch, event )
    if self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
        local location = touch:getLocation()
        local startLocation = touch:getStartLocation()
        if tolua.isnull( self.touchObj ) then
            return
        end
        local moevPos = cc.pSub(location, self.startPos)
        local targetPos = cc.pAdd(cc.p(self.touchObj:getPositionX(), self.touchObj:getPositionY()), moevPos)
        self.startPos = location
        self.touchObj:move(targetPos)
        self.touchObj:setLocalZOrder(10000)

        --local distance = cc.pGetDistance(cc.p(self.touchObj:getPosition()), self.touchObjOriginPos)
        local distance = cc.pGetDistance(startLocation, location)
        if distance > 20 then
            self.touchObjMoved = true
        end
    end
end

function TablePlayerMy:onTouchEnded( touch, event )
    local location = touch:getLocation()
    self.isControl = false
    if self.touchObj and self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
        if self.touchObjMoved then
            -- 滑动出牌判断
            self.touchObj.touchMode = "select"
            if self.touchObj:getPositionY() > self.handCardStartPosY + 80
                and self:checkCardCanChu(self.touchObj:getTag()) then
                -- 发送出牌命令
                self:sendChuPaiOrder()
            else
                self.touchObj:move(self.touchObjOriginPos)
                self.touchObj:setLocalZOrder(self.touchObjOriginZOrder)
                self.touchObjMoved = false
                self:clearHuCardList()
            end
            return
        end

        self.touchObj:move(self.touchObjOriginPos)
        self.touchObj:setLocalZOrder(self.touchObjOriginZOrder)
        if self.touchObj and self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
            self:chuClick()
        -- elseif self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_TING then
        --     self:tingClick()
        end
    end
end

function TablePlayerMy:onTouchCancelled( touch, event )
    self:onTouchEnded(touch,event)
end

function TablePlayerMy:isInHand()
    for i, v in pairs(self.inhandCards) do
        if v == self.touchObj then
            return true
        end
    end
    if self.newCard == self.touchObj then
        return true
    end
    return false
end

function TablePlayerMy:couldClick()
    if self.touchObj == nil then
        return false
    end
    if not self:checkCardCanChu(self.touchObj:getTag()) then
        return false
    end
    local pos = cc.p(self.touchObj:getPosition())
    if pos.y < self.handCardStartPosY + 1 or self.touchObj.touchMode ~= "select" then
        return false
    end
    return true
end

function TablePlayerMy:chuClick()

    if not self:couldClick() then
        -- 第一次点击
        -- 首先将所有节点恢复初始位置
        for i, v in pairs(self.inhandCards) do
            if v:getNumberOfRunningActions() == 0 then
                v:setPositionY(self.handCardStartPosY)
            end
        end
        if self.newCard then
            if self.newCard:getNumberOfRunningActions() == 0 then
                self.newCard:setPositionY(self.handCardStartPosY)
            end
        end
        --self.touchObj:setPositionY(self.touchObjOriginPos.y + 20)
        self:cardMove(self.touchObj, "out")
        local prommptInfo = self.promptTingList[self.touchObj:getTag()]
        if prommptInfo then
            --self:showTingCardList(prommptInfo.tingList, prommptInfo.singleNumList, prommptInfo.multipleList)
        else
            self:clearHuCardList()
        end
        ExternalFunc.sendHandCardSelectEvt(self.touchObj:getTag())
    else
        -- 第二次点击
        if self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_NONE then
            return
        end
        if not self:isInHand() then
            return
        end
        self:sendChuPaiOrder()
    end
end

function TablePlayerMy:tingClick()
    if self:couldClick() then
        self:sendChuPaiOrder()
    end
end

function TablePlayerMy:sendChuPaiOrder()
    if self.touchObj then
        if not self:checkCardCanChu(self.touchObj:getTag()) then
            return false
        end
        
        local value = self.touchObj:getTag()
       
        NG.soundManager:playMatchEffect("sound/outpai.mp3")
        NG.soundManager:playMatchEffect(self.gameAudioParser:getEffectFileForCardValue(bit._and(value, 0xff), self.sex))
        
        local playerTableOperationMsg = {}
        playerTableOperationMsg.operation = g_gameConstant.MAHJONG_OPERTAION_CHU
        playerTableOperationMsg.card_value = value
        playerTableOperationMsg.player_table_pos = g_gameGlobal:getMyTablePos()
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, playerTableOperationMsg)

        self.lastOutCard = value;

        self.handChuCardPosCache = cc.p(self.touchObj:getPositionX(), self.touchObj:getPositionY())
        self:clearHuCardList(true)
        ExternalFunc.sendHandCardSelectEvt()
        self:setPromptTingList()
        -- 增加到出牌列表
        self:addChuCard(value, true, true) --等服务器返回再出则注释
        
        self:setCurOperationState(g_gameConstant.MAHJONG_OPERTAION_NONE)

        -- 移除之前出的牌
        self:tipShowChuCard(self.touchObj:getTag())

        if self.touchObj ~= self.newCard then
            for i, v in pairs(self.inhandCards) do
                if v == self.touchObj then
                    table.remove(self.inhandCards, i)
                    break
                end
            end
            if self.newCard then
                self:insertNewCard(self.newCard, nil, true)
                self.newCard = nil
            end
        end

        self.touchObj:removeSelf()
        self.touchObj = nil
        self.newCard = nil
        self:repositionAllCards()
    end
end

function TablePlayerMy:refreshPlayerCards(chuCard, handCard, beforCard, downCard)
    if chuCard and chuCard>0 then
        self:tipShowChuCard(chuCard)
        --self:addChuCard(chuCard, true, true) --等服务器返回再出则打开
    else
        self:removeChuCard()
    end

    if (not handCard) or (#handCard == 0) then
        return
    end

    if self.newCard then
        self.newCard:removeSelf()
        self.newCard = nil
    end

    -- 判断服务器给的牌跟手牌值是否不同
    local findError = false
    if #handCard == #self.inhandCards then
        table.sort(handCard, handler(self, TablePlayerMy.handSortComFunc) )
    
        for i , v in pairs(self.inhandCards) do
            local value = v:getTag()
            if value ~= handCard[i] then
                findError = true
                break
            end
        end
    else
        findError = true
    end

    if findError then
        for i , v in pairs(self.inhandCards) do
            v:removeSelf()
        end
        self.inhandCards = {}

        for i, v in pairs(handCard) do
            self:addNewCard(v, false)
        end
        self:repositionAllCards()
    end
end

function TablePlayerMy:setPromptTingList(list, limitChu, showMark)
    if list == nil then list = {} end
    if showMark == nil then showMark = true end
    if limitChu == nil then limitChu = false end
    self.promptTingList = {}
    self.limitChu = limitChu
    
    -- 缓存一下 
    self.svrPromptTingList = list
    local function isFilterTingCard()
         --血战癞子特殊判断，如果只剩癞子牌才显示癞子牌的听牌标签
        if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
            local isOnlyJoker = true
            for i, v in pairs(self.inhandCards) do
                if not g_gameGlobal:isLaiZi(v:getTag()) then
                    isOnlyJoker = false
                    break
                end
            end
            if self.newCard then
                if not g_gameGlobal:isLaiZi(self.newCard:getTag()) then
                    isOnlyJoker = false
                end
            end
            return (not isOnlyJoker)
        else
            return false
        end      
    end
    if isFilterTingCard() then
        for k,v in pairs(list) do
            if v.tingCard ~= g_gameConstant.XZ_MAH_JOKERVAL then
                self.promptTingList[v.tingCard] = v
            end
        end
    else
        --信赖服务器的数据
        for k,v in pairs(list) do
            self.promptTingList[v.tingCard] = v
        end
    end

    --保存数据
    if next(self.promptTingList) ~= nil then
        self.promptTingListClone = clone(self.promptTingList)
    else
        self.promptTingListClone = {}
    end
    -- local hasQueCardInHand, queCardCount = self:hasQueCardInHand()
    -- --有两张缺一门的牌 想都不用想 胡不了
    -- if queCardCount<=1 then
    --     for k,v in pairs(list) do
    --         if not hasQueCardInHand --手上没缺一门的牌
    --             or self:isQueCard(v.tingCard) then --或者有缺一门的牌，但是这张牌是要缺的牌

    --             self.promptTingList[v.tingCard] = v
    --         end
    --     end    
    -- end
    
    local is_show_da_mark = false
    local is_show_duo_mark = false 
    local max_ting_num = -1
    local max_fan_num = -1
    local index_1_ = 0
    local index_2_ = 0
    for i, v in pairs(self.promptTingList) do
        if v.singleNumList and type(v.singleNumList) == "table" then
            local idx1 = 0
            for _, k in pairs(v.singleNumList) do
                idx1 = idx1 + k
            end
            if idx1 ~= max_ting_num then
                index_1_ = index_1_ + 1
            end
            if idx1 > max_ting_num then
                max_ting_num = idx1
            end
        end
        if v.cardFanNumList and type(v.cardFanNumList) == "table" then
            local idx2 = 0
            for _, k in pairs(v.cardFanNumList) do
                if k > idx2 then 
                    idx2 = k
                end
            end
            if idx2 ~= max_fan_num then
                index_2_ = index_2_ + 1
            end
            if idx2 > max_fan_num then
                max_fan_num = idx2
            end
        end
    end
    if max_ting_num > 0 and index_1_ > 1 then
        is_show_duo_mark = true
    end
    if max_fan_num > 0 and index_2_ > 1 then
        is_show_da_mark = true
    end

    display.loadSpriteFrames("game/game0.plist", "game/game0.png")

    local function checkMark(cardObj)
        local cValue = cardObj:getTag()
        if self.promptTingList[cValue] and self.tingCardListNode and not self.tingCardListNode:getDonotShow() then
            local markObj = cardObj:getChildByName("tingCardMark")
            if not markObj then
                --display.loadSpriteFrames("game/game0.plist", "game/game0.png")
                markObj = ccui.ImageView:create("Match/".."game/tingCardMark.png", ccui.TextureResType.plistType)
                markObj:setAnchorPoint(cc.p(0.5, 0))
                markObj:setPosition(cardObj:getContentSize().width/2, cardObj:getContentSize().height + 3)
                markObj:setName("tingCardMark")
                cardObj:addChild(markObj)
            else
                markObj:loadTexture("Match/".."game/tingCardMark.png",ccui.TextureResType.plistType)
            end
            if is_show_da_mark or is_show_duo_mark then
                --display.loadSpriteFrames("game/game0.plist", "game/game0.png")
                local singleNumList = self.promptTingList[cValue].singleNumList
                local cardFanNumList = self.promptTingList[cValue].cardFanNumList
                --优化显示大
                if is_show_duo_mark then
                    local num = 0
                    for i, v in pairs(singleNumList) do
                        num = num + v
                    end
                    if num >= max_ting_num and max_ting_num > 0 then
                        markObj:loadTexture("Match/".."game/TingCardDuo.png",ccui.TextureResType.plistType)
                    end
                end
                if is_show_da_mark then
                    for i, v in pairs(cardFanNumList) do
                        if v >= max_fan_num then
                            markObj:loadTexture("Match/".."game/TingCardDa.png",ccui.TextureResType.plistType)
                            break
                        end
                    end
                end
            end
            markObj:setVisible(true)
        else
            local markObj = cardObj:getChildByName("tingCardMark")
            if markObj then
                markObj:setVisible(false)
            end
        end
    end
    
    if showMark then
        if self.newCard then
            checkMark(self.newCard)
        end
    
        for i, v in pairs(self.inhandCards) do
            checkMark(v)
        end
    end
end

function TablePlayerMy:setHandCardUntouchedDelay(time)
    if type(time) ~= "number" then
        return
    end

    self.canTouchHandCard = false
    if time > 0 then
        performWithDelay(self, function() self.canTouchHandCard=true end, time)
    else
        self.canTouchHandCard = true
    end
end

function TablePlayerMy:setHandCardsLayerVisibleWithTime(time)
    if type(time) ~= "number" then
        return
    end

    self.handCardPanel:setVisible(false)
    if time > 0 then
        performWithDelay(self.handCardPanel, function() self.handCardPanel:setVisible(true) end, time)
    else
        self.handCardPanel:setVisible(true)
    end
end

function TablePlayerMy:buhuaEffectSequencePop(effectNode)
    if self.seq_buhuaActions == nil then
        self.seq_buhuaActions = {}
    end

    if self.seq_buhuaActions[#self.seq_buhuaActions] == effectNode then
        self.seq_buhuaActions[#self.seq_buhuaActions] = nil
        if #self.seq_buhuaActions > 0 then
            self.seq_buhuaActions[#self.seq_buhuaActions]:showEffect()
        end
    end
end

function TablePlayerMy:buhuaEffectSequenceAdd(effectNode)
    if self.seq_buhuaActions == nil then
        self.seq_buhuaActions = {}
    end
    if effectNode.showEffect then
        table.insert( self.seq_buhuaActions, 1, effectNode)
        if #self.seq_buhuaActions == 1 then
            effectNode:showEffect()
        end
    end
end

function TablePlayerMy:createHandCardAllBuhuaEffect(newCards, startCall)
    local costTime = 0
    if startCall == nil then startCall = function() end end
    local handEffectNode = ccui.ImageView:create("noplist/mask.png", ccui.TextureResType.localType):setAnchorPoint(cc.p(0,0))
    :setScale9Enabled(true)
    :setContentSize(g_gameGlobal:getDisplayWidth(), g_gameGlobal:getDisplayHeight())
    local tmpNewCards = clone(newCards)
    handEffectNode.effectCardNodeH = {}
    handEffectNode.effectCardNodeN = {}
    local fadeTotalTime = 0.6

    costTime = costTime + fadeTotalTime
    local function fillHuaCardEffect(card)
        card:setCascadeOpacityEnabled(true)
        local value = card:getTag()
        if g_gameGlobal:isHuaCard(value) then
            if #tmpNewCards>0 then
                local val = table.remove(tmpNewCards, 1)
                local img = g_gameGlobal:getNormalCard(val):setTag(val)
                img:setLocalZOrder(card:getLocalZOrder())
                img:setPosition(card:getPositionX(), card:getPositionY())
                handEffectNode:addChild(img)
                img:setCascadeOpacityEnabled(true)
                handEffectNode.effectCardNodeN[#handEffectNode.effectCardNodeN+1] = img
            end

            card:setCascadeOpacityEnabled(true)
            handEffectNode:addChild(card)
            handEffectNode.effectCardNodeH[#handEffectNode.effectCardNodeH+1] = card
        else
            handEffectNode:addChild(card)
        end
    end
    for i, v in pairs(self.inhandCards) do
        fillHuaCardEffect(v:clone())
    end
    for i, v in pairs(self.laydownCards) do
        handEffectNode:addChild(v:clone())
    end
    if self.newCard then
        fillHuaCardEffect(self.newCard:clone())
    end

    self.cardPanel:addChild(handEffectNode, 1000)
    handEffectNode:setVisible(false)

    local my = self
    function handEffectNode:showEffect()
        handEffectNode:setVisible(true)
        startCall()
        performWithDelay(handEffectNode,
        function()
            my:buhuaEffectSequencePop(handEffectNode)
            handEffectNode:removeSelf()
        end,
        costTime)
        my:setHandCardUntouchedDelay(costTime)
        my:setHandCardsLayerVisibleWithTime(costTime)
        
        local time = fadeTotalTime/2
        for i,v in ipairs(handEffectNode.effectCardNodeH) do
            if not tolua.isnull(v) then
                v:setOpacity(255)
                local sequence = cc.Sequence:create(
                    cc.FadeTo:create(time, 0),
                    cc.CallFunc:create(function() end)
                )
                v:runAction(sequence)
            end
        end
        for i,v in ipairs(handEffectNode.effectCardNodeN) do
            if not tolua.isnull(v) then
                v:setOpacity(0)
                local sequence = cc.Sequence:create(
                    cc.DelayTime:create(time),
                    cc.FadeTo:create(time, 255),
                    cc.CallFunc:create(function() end)
                )
                v:runAction(sequence)
            end
        end
    end

    self:buhuaEffectSequenceAdd(handEffectNode)
end

function TablePlayerMy:buhuaNotify(newCards, playAni, needSort)
    if needSort == nil then
        needSort = false
    end
    if type(newCards) == "table" then
        local newhuaList = {}
        if self.newCard then
            self:insertNewCard(self.newCard)
            self.newCard = nil
        end
        for i, v in pairs(self.inhandCards) do 
            local value = v:getTag()
            if g_gameGlobal:isHuaCard(value) then
                newhuaList[#newhuaList + 1] = value
            end
        end

        if not g_gameGlobal:getIsPlayingGameLog() and playAni then
            self:createHandCardAllBuhuaEffect(newCards, function() self:addDownHuaCard(newhuaList, playAni) end)
        else
            self:addDownHuaCard(newhuaList, playAni)
        end

        local len = #newhuaList>#newCards and #newhuaList or #newCards

        local tmp = {}
        for i=1,len do
            tmp[#tmp+1]={
                [1] = newhuaList[i],
                [2] = newCards[i],
            }
        end
        
        for i,v in ipairs(tmp) do
            self:replaceOneCard(v[1], v[2], false)
        end

        self:repositionAllCards(needSort)
    end
end

function TablePlayerMy:createHandCardMoHuaCardEffect(huaCard, startCall)  
    local costTime = 0
    if type(huaCard) == "number" then

        local fadeTotalTime = 0.3
        if startCall == nil then startCall = function() end end
        local handEffectNode = ccui.ImageView:create("noplist/mask.png", ccui.TextureResType.localType):setAnchorPoint(cc.p(0,0))
        :setScale9Enabled(true)
        :setContentSize(g_gameGlobal:getDisplayWidth(), g_gameGlobal:getDisplayHeight())

        for i, v in pairs(self.inhandCards) do
            handEffectNode:addChild(v:clone())
        end
        for i, v in pairs(self.laydownCards) do
            handEffectNode:addChild(v:clone())
        end
        local card = g_gameGlobal:getNormalCard(huaCard)
        card:setCascadeOpacityEnabled(true)
        card:move(self:getNewCardPos())
        
        costTime = costTime + fadeTotalTime
        handEffectNode:addChild(card)

        self.cardPanel:addChild(handEffectNode, 1000)
        handEffectNode:setVisible(false)
        
        local my = self
        function handEffectNode:showEffect()
            handEffectNode:setVisible(true)
            startCall()
            performWithDelay(handEffectNode,
            function()
                my:buhuaEffectSequencePop(handEffectNode)
                handEffectNode:removeSelf()
            end,
            costTime)
            my:setHandCardUntouchedDelay(costTime)
            my:setHandCardsLayerVisibleWithTime(costTime)
            
            local time = fadeTotalTime
            if not tolua.isnull(card) then
                local sequence = cc.Sequence:create(
                    cc.FadeTo:create(time, 0),
                    cc.CallFunc:create(function() end)
                )
                card:setOpacity(255)
                card:runAction(sequence)
            end
        end
        self:buhuaEffectSequenceAdd(handEffectNode)
    end
    return costTime, handEffectNode
end

function TablePlayerMy:buhuaOperation(huaCard, removeCard, playAni, needSort)
    if huaCard == nil then return end

    if needSort == nil then
        needSort = false
    end

    if removeCard then
        if self.newCard then
            self:insertNewCard(self.newCard)
            self.newCard = nil
        end
    end

    if removeCard then
        self:removeOneCard(bit._and(huaCard, 0xff))
    end

    self:repositionAllCards(needSort)
    
    if not g_gameGlobal:getIsPlayingGameLog() and playAni then
        self:createHandCardMoHuaCardEffect(huaCard, function() self:addDownHuaCard(huaCard, playAni) end)
    else
        self:addDownHuaCard(huaCard, playAni)
    end
end

function TablePlayerMy:notifyShangGa(min, max)
    local sgNode = require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.shanggaNode"):create(min, max)
    sgNode:addTo(self, 10)    
end

function TablePlayerMy:washCardOperationNotify(costValue)
    local selectWashCardNode = require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.selectWashCardNode"):create(costValue)
    selectWashCardNode:move(display.cx, display.cy)
    selectWashCardNode:addTo(self, 10)    
end

function TablePlayerMy:dingqueOperationNotify()
    local sgNode = require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.dingqueNode"):create()
    sgNode:addTo(self, 10)    
end


local waitXuanqueNodeName = "n_wait_xuan_que"
function TablePlayerMy:showWaitXuanque(visible)
    local node = self:getChildByName(waitXuanqueNodeName)
    
    -- 当前桌定缺是否结束了
    visible = visible and not self.isTableDingqueFinish
    
    if visible then
        if tolua.isnull(node) then
            node = ccui.ImageView:create("Match/".."xuezhanGame/Images/img_wait_xuanque.png", ccui.TextureResType.plistType)
            node:setName(waitXuanqueNodeName)
            node:setPosition(cc.p(display.cx, g_gameGlobal:getDisplayHeight() * 0.28))
            self:addChild(node)
        end
    else
        if not tolua.isnull(node) then
            node:removeSelf()
        end
    end
end

-- 当前桌 定缺结束了
function TablePlayerMy:onTableDingQueFinish()
    self.isTableDingqueFinish = true
end

function TablePlayerMy:cardMove(pNode, moveType)
    if pNode and not tolua.isnull(pNode) then
        if moveType == "back" then
            pNode:moveBy({
                time = 0.3,
                x = 0,
                y = -20
            })
            pNode.touchMode = "unselect"
        elseif moveType == "out" then
            pNode:moveBy({
                time = 0.3,
                x = 0,
                y = 20
            })
            self.touchObj.touchMode = "select"
        end
    end
end

function TablePlayerMy:isSelfOpRound()
    
    local cardCount = self:getCardCount()
    
    -- 轮到自己
    if not self.isHuEnd and ((cardCount % 3 == 2 and self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU)
      -- 出牌或 当前可操作
      or self.huBtn:isVisible()
      or self.pengBtn:isVisible()
      or self.gangBtn:isVisible()
      or self.guoBtn:isVisible()) then
        
        return true
    end
    
    return false
end

return TablePlayerMyAy