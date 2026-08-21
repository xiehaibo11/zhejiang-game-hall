local TablePlayerBase = import(".TablePlayerBase")
local TablePlayerMy = class("TablePlayerMy", require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.TablePlayerMy"))
local ExternalFunc = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")

--用这种方式去通过TablePlayerBase重写TablePlayerBase的接口
local ignore = {}
local UPPOS = 30           -- 摸到牌的时候上升的高度

if type(TablePlayerBase.ignore) == "table" then
    ignore = TablePlayerBase.ignore
end
for k,v in pairs(TablePlayerBase) do
    if not ignore[k] then
        TablePlayerMy[k] = v
    end
end

function TablePlayerMy:showXZHuCard(cardValue,dianPaoPos)
    if not g_gameGlobal:getIsPlayingGameLog() then 
        self.isHuEnd = true
        self:moCard(cardValue,nil,nil,dianPaoPos)
    else     
        -- 清除摸的牌
        if not tolua.isnull(self.newCardInLog) then 
            self.newCardInLog:removeSelf()
            self.newCardInLog = nil 
        end 
        self:playLogMoCard(cardValue)
    end 
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
    
    if self.huanpaiFlag then
        return
    end
    
    
    if self.isPlayingHuanCard then
        return false
    end

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

        --血战癞子特殊判断，如果单放+ 手牌中只剩下癞子则可以打出
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
            if isOnlyJoker then
                g_gameGlobal:setLaiZiCouldPutOut(1)
            else
                g_gameGlobal:setLaiZiCouldPutOut(0)
            end
        end
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
                        if self.touchObj ~= v and not tolua.isnull(self.touchObj) then
                            -- 重置上一张选中牌位置
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
                        self:showTingCardList(prommptInfo.tingList, prommptInfo.singleNumList, prommptInfo.multipleList, prommptInfo.cardFanNumList)
                    else
                        self:clearHuCardList()
                    end
                    ExternalFunc.sendHandCardSelectEvt(self.touchObj:getTag())
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
                    self.touchObj:setLocalZOrder(10000)
                    return true
                end
            end
        end
    elseif self.curOperationState == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 
        -- 交换手牌
        local location = touch:getLocation()
        -- 手牌检测
        for i, v in pairs(self.inhandCards) do
            local color = v:getColor()
            if not (color.r == 166 and color.g == 166 and color.b == 166)
                and not (not g_gameGlobal:isLaiZiCouldPutOut() and g_gameGlobal:isLaiZi(v:getTag()))
                and (not hasQueCardInHand or self:isQueCard(v:getTag())) then
                local locationInNode = v:convertToNodeSpace(location)
                local rect = cc.rect(0,0,v:getBoundingBox().width, v:getBoundingBox().height)
                if cc.rectContainsPoint(rect, locationInNode) then
                    self.touchObj = v 
                    do return true end

                    if self.touchObj and self.touchObjOriginPos then
                        if self.touchObj ~= v then
                            ExternalFunc.sendHandCardSelectEvt()
                        end
                    end
                    self.touchObj = v
                    self.touchObjOriginPos = cc.p(v:getPosition())
                    self.touchObjOriginZOrder = v:getLocalZOrder()
                   NG.soundManager:playMatchEffect("sound/dianpai.mp3")
                    
                    local prommptInfo = self.promptTingList[self.touchObj:getTag()]
                    if prommptInfo then
                        self:showTingCardList(prommptInfo.tingList, prommptInfo.singleNumList, prommptInfo.multipleList, prommptInfo.cardFanNumList)
                    else
                        self:clearHuCardList()
                    end
                    ExternalFunc.sendHandCardSelectEvt(self.touchObj:getTag())
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
                    self.touchObj = self.newCard 
                    do return true end 
                    if self.touchObj and self.touchObjOriginPos then
                        if self.touchObj ~= self.newCard then
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
        if not self.touchObj.prePos or cc.pGetDistance(self.touchObj.prePos, location) > 1 then
            local moevPos = cc.pSub(location, self.startPos)
            local targetPos = cc.pAdd(cc.p(self.touchObj:getPositionX(), self.touchObj:getPositionY()), moevPos)
            self.startPos = location
            self.touchObj:move(targetPos)
            self.touchObj.prePos = location
        end
        self.touchObj:setLocalZOrder(10000)

        --local distance = cc.pGetDistance(cc.p(self.touchObj:getPosition()), self.touchObjOriginPos)
        local distance = cc.pGetDistance(startLocation, location)
        if distance > 20 then
            self.touchObjMoved = true
        end
    elseif self.curOperationState == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 


    end
end

function TablePlayerMy:onTouchEnded( touch, event )
    local location = touch:getLocation()
    self.isControl = false
    if self.touchObj and not tolua.isnull(self.touchObj) and self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
        if self.touchObjMoved then
            -- 滑动出牌判断
            self.touchObj.touchMode = "select"
            if self.touchObj:getPositionY() > self.handCardStartPosY + 80
                and self:checkCardCanChu(self.touchObj:getTag()) then
                -- 发送出牌命令
                self:sendChuPaiOrder()
            else
                -- 拖动未打出 则选中此牌
                self.touchObj:move(cc.p(self.touchObjOriginPos.x, self.handCardStartPosY + 20))
                self.touchObj:setLocalZOrder(self.touchObjOriginZOrder)
                self.touchObjMoved = false
 --                self:clearHuCardList()
            end
            return
        end

        self.touchObj:move(self.touchObjOriginPos)
        self.touchObj:setLocalZOrder(self.touchObjOriginZOrder)
        if self.touchObj and self.curOperationState == g_gameConstant.MAHJONG_OPERTAION_CHU then
            self:chuClick()
        end
    elseif self.touchObj and not tolua.isnull(self.touchObj) and self.curOperationState == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then

        if  self.touchObjMoved then 

        else
            local function checkXZJokerNoSpecial()
                if  g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER and self.queNum == 4 then
                    for k, v in ipairs(self.selectQueObjs or {}) do
                        local tag = v:getTag()
                        if tag == g_gameConstant.XZ_MAH_JOKERVAL then
                            return false
                        end
                    end 
                end
                return true
            end
            local isXZJokerNoSpecial =  checkXZJokerNoSpecial()
            local function upAndDownSelectQueCard(obj,isSelected)
                if tolua.isnull(obj) then
                    return
                end               
                if not isXZJokerNoSpecial then return end
                if isSelected then
                    table.insert(self.selectQueObjs,obj)
                    -- 检测是否多于选缺数量，若有，则按优先顺序来下降，少了不予理会
                    if #self.selectQueObjs > self.queNum then 
                        for k, v in ipairs(self.selectQueObjs or {}) do
                            if not tolua.isnull(v) then
                                table.remove(self.selectQueObjs,k)
                                local downAction = cc.MoveTo:create(0.2,cc.p(v:getPositionX(),self.firstYPos))
                                v:stopAllActions()
                                v.isSelected = false 
                                v:runAction(downAction)
                                break
                            end
                        end 
                    end
                    local upAction = cc.MoveTo:create(0.2,cc.p(obj:getPositionX(),self.firstYPos + UPPOS))
                    obj:stopAllActions()
                    obj:runAction(upAction)
                else 
                    for k, v in ipairs(self.selectQueObjs or {}) do 
                        if v == obj then 
                            table.remove(self.selectQueObjs,k)
                            local downAction = cc.MoveTo:create(0.2,cc.p(v:getPositionX(),self.firstYPos))
                            v:stopAllActions()
                            v.isSelected = false 
                            v:runAction(downAction)
                            break 
                        end 
                    end 
                end 
            end 

            self.touchObj.isSelected = not self.touchObj.isSelected 

            upAndDownSelectQueCard(self.touchObj,self.touchObj.isSelected)

            -- if self.touchObj.isSelected then 
            --     -- 若为已选中状态，则将该牌该设置为未选中状态
            --     self.touchObj.isSelected = false 
            --     -- 同时，将该牌下降
            --     -- local downYPos = self.touchObj:getPositionY() - UPPOS
            --     -- self.touchObj:setPositionY(downYPos)
            -- else
            --     -- 若为已选中状态，则将该牌该设置为选中状态
            --     self.touchObj.isSelected = true
            --     -- 上升 
            --     -- local upYPos = self.touchObj:getPositionY() + UPPOS
            --     -- self.touchObj:setPositionY(upYPos)
            -- end 
        end
        -- 检测选缺
        self:checkSelectedIsLegal()
    end
end

function TablePlayerMy:onTouchCancelled( touch, event )
    self:onTouchEnded(touch,event)
end

-- 用于选缺时
function TablePlayerMy:getCurrSelectedCards(state, callback, optCards)
    optCards = optCards or {}
    local selectedData = {}
    local selecteCard = {}
    state = state or false
    for k, v  in pairs(self.inhandCards or {}) do 
        if v.isSelected then 
            local value = v:getTag()
            table.insert(selectedData,value)
            table.insert(optCards, value)
            
            if state then
                local tCard = self:getNormalCard(value)
                tCard:setPosition(v:getPosition())
                tCard:setScale(v:getScale())
                tCard:addTo(v:getParent())
                
                table.insert(selecteCard,tCard)
            end
        end 
    end 

    if self.newCard then 
        local value = self.newCard:getTag()
        if self.newCard.isSelected then 
            table.insert(selectedData,value)
            table.insert(optCards, value)
            
            if state then
                local tCard = self:getNormalCard(value)
                tCard:setPosition(self.newCard:getPosition())
                tCard:setScale(self.newCard:getScale())
                tCard:addTo(self.newCard:getParent())
                
                table.insert(selecteCard,tCard)
            end
        end 
    end
    
    if state then
        for i,v in ipairs(selecteCard or {}) do
            if v and not tolua.isnull(v) then
                local moveAct = cc.MoveTo:create(0.3,cc.p(display.cx,display.cy))
                local scaleAct = cc.ScaleTo:create(0.3,0)
                local spawnAct = cc.Spawn:create(moveAct, scaleAct)
                if i == #selecteCard then
                    local seqAct = cc.Sequence:create(spawnAct,cc.CallFunc:create(function ( ... )
                    if callback then
                        v:removeSelf()
                        callback(selectedData)
                    end
                    end))
                    v:runAction(seqAct)
                else
                    v:runAction(spawnAct)
                end

            end
        end
    
    else
        return selectedData 
    end
end 



-- 检查所选花色
function TablePlayerMy:checkSelectedIsLegal()
    local selectedData = self:getCurrSelectedCards()
    local isLegal = true 
    -- 首先检查数量
    if #selectedData == self.queNum then 
        -- 再检查花色
        local wanfainfo = g_gameGlobal:getCurrentWanFa()
        local rules = wanfainfo.ruleList
        local isNewHuanCards = false   --任意换三张
        for k, v in ipairs(rules) do
            if v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW or v == g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW then
                isNewHuanCards = true
                break
            end
        end
        if not isNewHuanCards then
            local isSameColour = true 
            local data1 = selectedData[1]
            if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
                local index = 1
                while(data1 == g_gameConstant.XZ_MAH_JOKERVAL and  index <=  self.queNum) do
                    index = index + 1
                    data1 = selectedData[index]
                end
            end
            for i=2, #selectedData do
                if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
                    if selectedData[i] ~= g_gameConstant.XZ_MAH_JOKERVAL and bit._and(0xf0,selectedData[i]) ~= bit._and(0xf0,data1) then
                        isLegal = false 
                        break 
                    end
                else
                    if bit._and(0xf0,selectedData[i]) ~= bit._and(0xf0,data1) then 
                        isLegal = false 
                        break 
                    end 
                end
            end 
        end 
    else
        isLegal = false 
    end 
    
    -- 执行回调函数
    if self.queBtnFunc then
        self.queBtnFunc(isLegal)
    end
end 

function TablePlayerMy:xuanQueAiTip()

    if not self.firstYPos and self.inhandCards and self.inhandCards[1] then 
        self.firstYPos = self.inhandCards[1]:getPositionY()
    end 
    
    performWithDelay(self,function()
        if self.queNum > 0 and self.curOperationState == g_gameConstant.GAME_OPERATION_EXCHANGE_CARDS then 
            
            self.selectQueObjs = {}
            self:repositionAllCards()
            local miniColourTable = {{},{},{}}
            local xzJokerCards = {}
            for k, v in ipairs(self.inhandCards or {}) do 
                local tag = v:getTag()
                if bit._and(0xf0,tag) == 0 then 
                    table.insert(miniColourTable[1],v)
                elseif bit._and(0xf0,tag) == 0x10 then 
                    table.insert(miniColourTable[2],v)
                elseif bit._and(0xf0,tag) == 0x20 then 
                    table.insert(miniColourTable[3],v)
                elseif g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
                    if tag == g_gameConstant.XZ_MAH_JOKERVAL then
                        table.insert(xzJokerCards,v)
                    end
                end 
            end 
    
            if not tolua.isnull(self.newCard) then 
                local tag = self.newCard:getTag()
                if bit._and(0xf0,tag) == 0 then 
                    table.insert(miniColourTable[1],self.newCard)
                elseif bit._and(0xf0,tag) == 0x10 then 
                    table.insert(miniColourTable[2],self.newCard)
                elseif bit._and(0xf0,tag) == 0x20 then 
                    table.insert(miniColourTable[3],self.newCard)
                elseif g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER then
                    if tag == g_gameConstant.XZ_MAH_JOKERVAL then
                        table.insert(xzJokerCards,v)
                    end
                end 
            end 
            -- 取数量最少的
            local t_num = #miniColourTable[1] + #miniColourTable[2] + #miniColourTable[3]
            local t_indexes = {}
            local tmp_index = 0
            for k, v in ipairs(miniColourTable) do 
                if #v ~= 0 and #v <= t_num and  #v >= self.queNum then
                    t_num = #v
                    tmp_index = k
                end
            end 
    
            if #t_indexes == 1 then 
                -- 后续优化————同样花色情况可能某种花色更适合换
    
            end 
    
            -- 从中选取选定张数
            local selects = {}
            --处理血战癞子的四张财神牌换牌
            if g_gameGlobal:getCurrentWanFa().wanfa == g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER and tmp_index == 0 then
                local colorIndex = 1
                local minNum = #xzJokerCards
                for k, v in ipairs(miniColourTable) do
                    if #v < minNum then
                        minNum = #v
                        colorIndex = k
                    end
                end 
                selects = clone(miniColourTable[colorIndex])
                for i = #miniColourTable[colorIndex] + 1,self.queNum do
                    local index = i -  #miniColourTable[colorIndex]
                    local target = xzJokerCards[index]
                    table.insert(selects,target)
                end
            else
                for i=1, self.queNum do 
                    local t = miniColourTable[tmp_index][i]
                    table.insert(selects,t)
                end
            end
    
            for k, v in ipairs(selects or {}) do 
                -- 若为已选中状态，则将该牌该设置为选中状态
                v.isSelected = true
                -- 上升 
                -- local upYPos = v:getPositionY() + UPPOS
                -- v:setPositionY(upYPos)
                table.insert(self.selectQueObjs,v)
            end
            -- 封装动画————上升动画
            for k, v in ipairs(self.selectQueObjs or {}) do
                local upAction = cc.MoveBy:create(0.5,cc.p(0,UPPOS)) 
                v:runAction(upAction)
            end 
            --回调
              -- 执行回调函数
            if self.queBtnFunc then
                self.queBtnFunc(true)
            end
        end 
    end, 0) -- 修改为0，避免延时中的意外，不可预见的玩家操作等，见禅道#38389 date:20191126 _HL
end 


-- 换三张时，从手牌删除数据
function TablePlayerMy:huanCardReduceCards(removeCards)
    for k, v in ipairs(removeCards or {}) do 
        self:removeOneCard(v)
    end 
    self:repositionAllCards()
end

function TablePlayerMy:getBestQueColourIndexes()

    local handData = {}
    for k,v in ipairs(self.inhandCards or {}) do 
        local value = v:getTag()
        table.insert(handData,value)
    end 

    if not tolua.isnull(self.newCard) then 
        local value = self.newCard:getTag()
        table.insert(handData,value)
    end     

    local miniColourTable = {{},{},{}}
    for k, v in ipairs( handData ) do 
        if bit._and(0xf0,v) == 0 then 
            table.insert(miniColourTable[1],v)
        elseif bit._and(0xf0,v) == 0x10 then 
            table.insert(miniColourTable[2],v)
        elseif bit._and(0xf0,v) == 0x20 then 
            table.insert(miniColourTable[3],v)
        end 
    end 

    -- 取数量最少的
    local t_num = #handData
    local t_indexes = {}
    local tmp_index = 0
    for k, v in ipairs(miniColourTable or {}) do 
        if #v < t_num then
            t_num = #v
        end
    end 

    for k, v in ipairs(miniColourTable or {}) do 
        if #v == t_num then 
            table.insert(t_indexes,k)
        end 
    end 

    return t_indexes
end 

return TablePlayerMy
�h