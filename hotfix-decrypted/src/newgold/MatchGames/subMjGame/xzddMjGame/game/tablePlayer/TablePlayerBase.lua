local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")
local netObj, eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))

--client v1.07 need for hot update mark
local GameConfig = require("newgold.MatchGames.subMjGame.MJGamePublic.GameConfig")
local TablePlayerBase = {}

--需要重写TablePlayerBase的接口 直接写在这里

local huPos = {
    [1] = {
            actionPos = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.33),
            imgPos    = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.33 - 70),
    },
    [2] = {
            actionPos  = cc.p(g_gameGlobal:getDisplayWidth()*0.75,g_gameGlobal:getDisplayHeight()*0.55),
            imgPos     = cc.p(g_gameGlobal:getDisplayWidth()*0.75 + 100,g_gameGlobal:getDisplayHeight()*0.55),
    },
    [3] = {
            actionPos  = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.8),
            imgPos     = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.8 - 70),
    },
    [4] = {
            actionPos  = cc.p(g_gameGlobal:getDisplayWidth()*0.25,g_gameGlobal:getDisplayHeight()*0.55),
            imgPos     = cc.p(g_gameGlobal:getDisplayWidth()*0.25 - 100,g_gameGlobal:getDisplayHeight()*0.55),
    },
}

function TablePlayerBase:resetActionTime(time)
    -- 换取新的三张时，手牌下降的动画时间
    self.huanCardDownTime = 0.7             

end 

function TablePlayerBase:playerKaiMaAnimation()
    -- 创建第一张马
    local ma = self.winnerMa[1]
    if ma == 0 then
        return
    end

    for i,ma in ipairs(self.winnerMa) do
        if ma ~= 0 then
            
            local imageObj = nil
            if self.posState == 1 then
                imageObj = self:getMyLaydownCard(ma)
            elseif self.posState == 2 then
                
                imageObj = self:getRightLaydownCard(ma)
            elseif self.posState == 3 then
                imageObj = self:getOppLaydownCard(ma)
            elseif self.posState == 4 then
                imageObj = self:getLeftLaydownCard(ma)
            end
            if imageObj then
                imageObj:setColor(g_gameConstant.DESK_NIAO_CARD_COLOR)
                self:addChuCardNodeInDesk(imageObj)
            end
        end
    end

    
    local desPos = {cc.p(140, 240), cc.p(60, 70), cc.p(g_gameGlobal:getDisplayWidth()-150, g_gameGlobal:getDisplayHeight()-90)}

    for i,dp in ipairs(desPos) do
        local csbPath = "Match/animation/zhuaniao.csb"
        local aniName = "animation0"
        
        local effectNode = cc.CSLoader:createNode(csbPath)
        local roleAction = cc.CSLoader:createTimeline(csbPath)
        local ptc = effectNode:getChildByName("Particle_1")       
        effectNode:setPosition(display.cx, display.cy) 
        effectNode:runAction(roleAction)
        self:addChild(effectNode, 200)
        ptc:setPositionType(cc.POSITION_TYPE_FREE)

        local seq = cc.Sequence:create(
            cc.MoveTo:create(0.7, dp),
            cc.CallFunc:create(function() roleAction:play(aniName, false) end),
            cc.DelayTime:create(2),
            cc.CallFunc:create(function() effectNode:removeSelf()  end)
        )
        effectNode:runAction(seq)
    end
end

function TablePlayerBase:resetTingInfo()
    if self.posState ~= 1 or not self.svrPromptTingList then
        return
    end
    
    self:setPromptTingList(self.svrPromptTingList, false)
end

function TablePlayerBase:redrawHandCards(cards)
    for i , v in pairs(self.inhandCards) do
        v:removeSelf()
    end
    self.inhandCards = {}

    if not g_gameGlobal:getIsPlayingGameLog() then 
        if not tolua.isnull(self.newCard) then 
            self.newCard:removeSelf()
            self.newCard = nil 
        end 
    else 
        if not tolua.isnull(self.newCardInLog) then 
            self.newCardInLog:removeSelf()
            self.newCardInLog = nil 
        end 
    end 

    local msg = {}
    msg.mycards = cards
    if not g_gameGlobal:getIsPlayingGameLog() then 
        self:initPaiMianValue(msg)
        
        self:resetTingInfo()
    else 
        self:recreateAllCards(cards)
    end 
end 


function TablePlayerBase:reRankHandCardsUI()
    local msg = {}
    local cards = {}
    for k, v in ipairs(self.inhandCards or {}) do 
        if not tolua.isnull(v) then 
            local value = v:getTag()
            table.insert( cards, value )
        end 
    end 

    if not g_gameGlobal:getIsPlayingGameLog() then 
        if not tolua.isnull(self.newCard) then 
            local value =self.newCard:getTag()
            table.insert( cards, value )
            self.newCard:removeSelf()
            self.newCard = nil 
        end 
    else 
        if not tolua.isnull(self.newCardInLog) then 
            local value =self.newCardInLog:getTag()
            table.insert( cards, value )
            self.newCardInLog:removeSelf()
            self.newCardInLog = nil 
        end 
    end 

    for i , v in pairs(self.inhandCards) do
        v:removeSelf()
    end
    self.inhandCards = {}

    msg.mycards = cards
    self:initPaiMianValue(msg)

    --self:recreateAllCards(cards)

end

function TablePlayerBase:initXZDDGameData(queNum,queBtnFunc,totalHandCardsNum)
    self.queNum = queNum
    self.queBtnFunc = queBtnFunc
    self.selectQueObjs = {}             -- 选缺的牌

    if totalHandCardsNum ~= nil and totalHandCardsNum ~= 0 then 
        self.totalHandCardsNum = totalHandCardsNum 
        
        if self.onHandCardNumUpdate then
            self:onHandCardNumUpdate()
        end
    end 

    self:resetActionTime()
end 

function TablePlayerBase:setQueValue(queIndex,isReconnect)
    local queConfig = {
        [g_gameConstant.GAME_QUE_COLOUR_WAN]                         = 0x00,        -- 缺万
        [g_gameConstant.GAME_QUE_COLOUR_TIAO]                        = 0x10,        -- 缺条
        [g_gameConstant.GAME_QUE_COLOUR_TONG]                        = 0x20,        -- 缺筒
    }

    if queIndex and queConfig[queIndex] then 
        self.queValue = queConfig[queIndex]
    end 

    if isReconnect then 
        return 
    end 
    performWithDelay(self,function()
        local myCards = {}
        for k, v in ipairs(self.inhandCards) do 
            local value = v:getTag()
            table.insert(myCards,value)
        end 

        if not g_gameGlobal:getIsPlayingGameLog() then 
            if not tolua.isnull(self.newCard) then 
                local value = self.newCard:getTag()
                table.insert(myCards,value)
            end 
        else 
            if not tolua.isnull(self.newCardInLog) then 
                local value = self.newCardInLog:getTag()
                table.insert(myCards,value) 
            end 
        end 

        self:redrawHandCards(myCards)
        --self:repositionAllCards()
    end,self.huanCardDownTime)

end 

function TablePlayerBase:huOperation(huConfirmData,dianPaoPos)
    local cardValue = huConfirmData.cardValue
    local handCards = huConfirmData.handCards or {}
    local huKind = huConfirmData.huKind
    local huIndex = huConfirmData.huIndex

    if cardValue and cardValue ~= 0 then
        self:showXZHuCard(cardValue,dianPaoPos)

        if g_gameGlobal:getIsPlayingGameLog() then
            if dianPaoPos and type(dianPaoPos) == "number" and dianPaoPos >= 0 then
                local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPaoPos)
                if self.newCardInLog then
                    self:setHuPlayerFlag(self.newCardInLog, rmPos)
                end
            end
        end
    end
 
    self:playXZHuAction(huKind,huIndex,true)
    
    self.isHuEnd = true
end

function TablePlayerBase:redrawQGHHandCards(removeCard)

    if self.posState == 1 or g_gameGlobal:getIsPlayingGameLog() then 
        local myCards = {}
        for k, v in ipairs(self.inhandCards) do 
            local value = v:getTag()
            table.insert(myCards,value)
        end 

        if not g_gameGlobal:getIsPlayingGameLog() then 
            if not tolua.isnull(self.newCard) then 
                local value = self.newCard:getTag()
                table.insert(myCards,value)
            end  
        else     
            if not tolua.isnull(self.newCardInLog) then 
                local value = self.newCardInLog:getTag()
                table.insert(myCards,value)
            end  
        end
        
        for k,v in ipairs(myCards) do 
            if v == removeCard then 
                table.remove(myCards,k)
                break 
            end 
        end 

        self:redrawHandCards(myCards)
        
        -- 清除自己的听牌箭头
        if self.setPromptTingList then
            self:setPromptTingList()
        end
    else 
        self.newCardPai:setVisible(false)
    end 
end

-- 参数1：胡的视图位子；
-- 参数2：胡的类型
-- 参数3：胡的名次
function TablePlayerBase:playXZHuAction(huKind,huIndex,isPlayAction)

    if not huPos[self.posState]  then 
        return 
    end 
    
    if isPlayAction then 
        self.gameActionObj:playHuAction(self,huKind,huIndex,huPos[self.posState].actionPos)
    end 
    -- 显示对应的图片
    if huIndex and huIndex <= 3 then 
        local huImg = ccui.ImageView:create()
        -- 特殊胡牌类型：抢杠胡
        if huKind == GameConfig.XZQIANGGANGHUINDEX then 
            huKind = GameConfig.XZHUINDEX
        end 
        local imgStr =  string.format(GameConfig.XZHUCSBCONFIG[huKind].format,huIndex)
        huImg:loadTexture(imgStr,ccui.TextureResType.plistType)
        self:addChild(huImg)
        huImg:setName("name_xz_huimg")
        huImg:setPosition(huPos[self.posState].imgPos)
    end 
end 

function TablePlayerBase:removeXZHuAction()
    local huImg = self:getChildByName("name_xz_huimg")
    if not tolua.isnull(huImg) then
        huImg:removeSelf()
    end
    
    if self.gameActionObj then
        self.gameActionObj:stopHuAction()
    end
end

function TablePlayerBase:playCSBAction(actionIndex)

    self.gameActionObj:playCSBAction(self,huPos[self.posState].actionPos,actionIndex)
end 


function TablePlayerBase:playHuanCardAction(handcard,huanCards,callback)
    -- 绘制新手牌
    -- self:recreateAllCards(handcard)

    if not g_gameGlobal:getIsPlayingGameLog() then 
        self:redrawHandCards(handcard)
    else 
        self:recreateAllCards(handcard)
    end 

    if self.isTuoGuan then 
        if callback then 
            callback()
        end 
        return 
    end 

    -- 将手牌中换的牌上升一定高度
    local pos = {
        [1] = cc.p(0,80),
        [2] = cc.p(-40,0),
        [3] = cc.p(0,30),
        [4] = cc.p(40,0),
    }


    local index = 1
    local upPos = pos[self.posState]
    local upObjs = {} 
    for k, v in ipairs(self.inhandCards or {}) do  
        local value = v:getTag()
        if value == huanCards[index] then 
            v:setPositionY(v:getPositionY() + upPos.y)
            v:setPositionX(v:getPositionX() + upPos.x)
            index = index + 1
            table.insert(upObjs,v)
        end 
    end     
    
    -- 封装动画————下降动画
    for k, v in ipairs(upObjs or {}) do
        local downAction = cc.MoveBy:create(self.huanCardDownTime,cc.p(-upPos.x,-upPos.y)) 
        if g_gameGlobal:getIsPlayingGameLog() then
            local exChangeCardShowTime = 2
            local delayAction = cc.DelayTime:create(exChangeCardShowTime)
            
            v:runAction(cc.Sequence:create(delayAction, downAction,cc.CallFunc:create(function()
                if callback then 
                    callback()
                end 
            end)))
            
        else
            v:runAction(cc.Sequence:create(downAction,cc.CallFunc:create(function()
                if callback then 
                    callback()
                end 
            end)))
        end
    end 
    
    self.isPlayingHuanCard = true
    performWithDelay(self, function ()
        self.isPlayingHuanCard = false
    end, self.huanCardDownTime + 0.05)
end 

-- 回放时换张时调用
function TablePlayerBase:exchangeCardsAction(outCards,inCards,_callback)
    -- g_gameGlobal:setIsPlayingGameLog(true)
    local handCards = {}
    for k, v in ipairs(self.inhandCards or{}) do 
        local value = v:getTag()
        table.insert(handCards,value)
    end 
    
    local callback = _callback
    
    if next(handCards) == nil then 
        if callback then 
            callback()
        end 
        return 
    end 

   

    local movePos = {
        [1] = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.3),
        [2] = cc.p(g_gameGlobal:getDisplayWidth()*0.8,g_gameGlobal:getDisplayHeight()*0.55),
        [3] = cc.p(g_gameGlobal:getDisplayWidth()*0.5,g_gameGlobal:getDisplayHeight()*0.75),
        [4] = cc.p(g_gameGlobal:getDisplayWidth()*0.2,g_gameGlobal:getDisplayHeight()*0.55),
    }

    local toPos = movePos[self.posState]
    local tempHandCards = clone(handCards)
    for k, delObj in ipairs(outCards or {}) do 

        for k2, value in ipairs(tempHandCards or {}) do 
            if value == delObj then 
                table.remove(tempHandCards,k2)
                break
            end 
        end 
    end

    -- 
    local node = display.newNode():move(toPos):addTo(self)

    local outObjs = {}
    for i=1, #outCards do 
        local img = self:createOneDeskCard(outCards[i])
        
        local pos = cc.p(0,0)
        if self.posState == 1 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(0,0)
                pos.x = (i - 1 - #outCards/2) * size.width
            else 
                img:setAnchorPoint(0.5,0)
                pos.x = (i - 1 - 0.5 - (#outCards-1)/2) * size.width 
            end 

        elseif self.posState == 2 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(1,0)
                pos.y = (i - 1 - #outCards/2) * size.height
            else 
                img:setAnchorPoint(1,0.5)
                pos.y = (i - 1 - 0.5 - (#outCards-1)/2) * size.height 
            end  

        elseif self.posState == 3 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(0,0)
                pos.x = ( i - 1 - #outCards/2) * size.width
            else 
                img:setAnchorPoint(0.5,0)
                pos.x = (i - 1 - 0.5 - (#outCards-1)/2 ) * size.width 
            end   


        elseif self.posState == 4 then 
            local size = img:getBoundingBox()
            if #outCards%2 == 0 then 
                img:setAnchorPoint(1,0)
                pos.y = (i - 1 - #outCards/2) * size.height
            else 
                img:setAnchorPoint(1,0.5)
                pos.y = (i - 1 - 0.5 - (#outCards-1)/2) * size.height 
            end  
        end 
        node:addChild(img)
        img:setPosition(pos)
        img:setLocalZOrder(#outCards-i+1)
    end 

    self:recreateAllCards(tempHandCards)

    local delayActionEnabled = true
    local evtNode = display.newNode()
        :addTo(self)
    
    
    local exChangeCardShowTime = 1
    if g_gameGlobal:getIsPlayingGameLog() then
        exChangeCardShowTime = 2
    end
    
    performWithDelay(self,function()
        if not delayActionEnabled then
            return
        end
        
        if not tolua.isnull(evtNode) then
            evtNode:removeSelf()
        end
        
        node:removeSelf()
        for k, v in ipairs(inCards or {}) do 
            table.insert(tempHandCards,v)
        end 
        self:playHuanCardAction(tempHandCards,inCards,callback)
    end, exChangeCardShowTime)
    
    evtNode:addChild(eventObj.new(eventType.GAME_LOG_WILL_PLAY_NEW_OP, function (evt, msg)
        delayActionEnabled = false
        
        for k, v in ipairs(inCards or {}) do 
            
            self:addNewCard(v)
        end
        
        if not tolua.isnull(node) then
            node:removeSelf()
        end
        
        evtNode:removeSelf()
    end))
end 



function TablePlayerBase:fileAddChuAni(chuCardNode, bl, odelay)
    
    local frame = cc.SpriteFrameCache:getInstance():getSpriteFrame("game/card_b_bg.png")
    if not frame then
        cc.SpriteFrameCache:getInstance():addSpriteFrames("game/game0.plist")
    end
    
    local showPos = {
        [1] = cc.p(display.cx,g_gameGlobal:getDisplayHeight()*0.35),
        [2] = cc.p(g_gameGlobal:getDisplayWidth()*0.68,g_gameGlobal:getDisplayHeight()*0.55),
        [3] = cc.p(display.cx,g_gameGlobal:getDisplayHeight()*0.75),
        [4] = cc.p(g_gameGlobal:getDisplayWidth()*0.32,g_gameGlobal:getDisplayHeight()*0.55),
    }

    local costTime = 0
    odelay = odelay or 0
    local isQuickType = g_UserDataTable.bigHandCard==1
    if not self.isSupportSlowChuAni then
        isQuickType = true
    end
    
--    if self.posState == 1 then
        bl = false
--    end
    
    if bl then
        local cdSize = chuCardNode:getContentSize()

        local tipShowCard = self:createTipShowChuCard(chuCardNode:getTag())

        if g_UserDataTable.mjCardType == 2 then
            local cardBg =  display.newSprite("#game/card_b_bg.png"):addTo(tipShowCard,-1)
            if self.posState == 1 or self.posState == 3 then
                cardBg:setPosition(cdSize.width/2, cdSize.height/2 - 12)
            else
                cardBg:setPosition(cdSize.width/2 - 2, cdSize.height/2+4)
            end
        elseif g_UserDataTable.mjCardType == 3 then
            local cardBg =  display.newSprite("#game/card_s_bg.png"):addTo(tipShowCard,-1)
            if self.posState == 1 or self.posState == 3 then
                cardBg:setPosition(cdSize.width/2, cdSize.height/2 - 10)
            elseif self.posState == 2 or self.posState == 4 then
                cardBg:setPosition(cdSize.width/2 + 3.5, cdSize.height/2 + 7)
            end
        elseif g_UserDataTable.mjCardType == 4 then
            local cardBg =  display.newSprite("#game/card_b_bg.png"):addTo(tipShowCard,-1)
            if self.posState == 1 or self.posState == 3 then
                cardBg:setPosition(cdSize.width/2 + 1, cdSize.height/2 - 9)
            else
                cardBg:setPosition(cdSize.width/2 + 1, cdSize.height/2+7)
            end
        end
        self:setChuObjPos(tipShowCard)

        local tipStartPos = chuCardNode:convertToNodeSpace(self.handChuCardPosCache)
        local tipStayPos = chuCardNode:convertToNodeSpace(cc.p(tipShowCard:getPositionX(),tipShowCard:getPositionY()))
        local tipDesPos = cc.pMul(cc.pFromSize(cdSize),0.5)

        local tipStartScale = cdSize.width / tipShowCard:getContentSize().width *1.1
        local tipStayScale = tipShowCard:getScaleX()/chuCardNode:getScaleX()
        local tipDesScale = cdSize.width / tipShowCard:getContentSize().width

        -- tipShowCard:setPosition(tipStartPos)
        tipShowCard:setScale(tipStartScale)
        tipShowCard:setPosition(showPos[self.posState])
        self:addChild(tipShowCard, 100)

        local des1 = cc.pGetDistance(tipStartPos, tipStayPos)
        local des2 = cc.pGetDistance(tipDesPos, tipStayPos)

        local t1 = isQuickType and 0 or des1/(10700)
        local t2 = isQuickType and 0.4 or 0.7
        local t3 = isQuickType and 0 or 0.6*des2/4600
        costTime = t1 + t2 + t3 + odelay

        if chuCardNode.hideCardImg then
            -- chuCardNode:hideCardImg(true)
            -- performWithDelay(chuCardNode, function() chuCardNode:hideCardImg(false) end, costTime)
        end

        local oriZOrder = chuCardNode:getLocalZOrder()
        performWithDelay(chuCardNode, function() chuCardNode:setLocalZOrder(oriZOrder)  end, costTime)
        chuCardNode:setLocalZOrder(oriZOrder)

        local function mrs()
            local actions = {}
            -- if t1>0 then
            --     actions[#actions+1] = cc.Spawn:create(cc.MoveTo:create(t1, tipStayPos), cc.ScaleTo:create(t1, tipStayScale))
            -- else
            --     --tipShowCard:setPosition(tipStayPos)
            --     tipShowCard:setScale(tipStayScale)
            -- end
            tipShowCard:setOpacity(255)
--            actions[#actions+1] = cc.FadeIn:create(0.3)
            actions[#actions+1] = cc.DelayTime:create(0.6)

            -- if t2 > 0 then
            --     actions[#actions+1] = cc.Spawn:create(cc.MoveTo:create(t3, tipDesPos), cc.ScaleTo:create(t3, tipDesScale))
            -- end
            actions[#actions+1] = cc.FadeOut:create(0.15)

            actions[#actions+1] = cc.CallFunc:create(function() tipShowCard:removeSelf() end)
            local tipAct = cc.Sequence:create(actions)
            tipShowCard:runAction(tipAct)
        end

        if odelay > 0 then
            tipShowCard:hideCardImg(true)
            tipShowCard:runAction(
                cc.Sequence:create(
                    cc.DelayTime:create(odelay), 
                    cc.CallFunc:create(
                        function()
                            tipShowCard:hideCardImg(false) 
                        end
                    ), 
                    cc.CallFunc:create(mrs)
                )
            )
        else
            mrs()
        end
    else
        costTime = odelay

        if chuCardNode.hideCardImg then
            chuCardNode:hideCardImg(true)
            performWithDelay(chuCardNode, function() chuCardNode:hideCardImg(false) end, costTime)
        end
    end

    return costTime
end


return TablePlayerBase   �W  