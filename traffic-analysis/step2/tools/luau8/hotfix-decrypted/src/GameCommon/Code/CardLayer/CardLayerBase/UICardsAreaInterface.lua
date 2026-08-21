------create by lcy 2017.12.1
local UICardsArea = class("UICardsArea")
local CURRENT_MOUDLE_NAME = ...
local UICard = import(".UICard",CURRENT_MOUDLE_NAME)

local KW_CARD_NAME = "CARD_%d"

--初始设置的一些值
function UICardsArea:setMaxCardsCount(maxCount)
    self._maxCardsCount = maxCount
end

function UICardsArea:setCardsDistance(diatanceX,diatanceY)
    self._distanceX = diatanceX
    self._distanceY = diatanceY
end

function UICardsArea:setCardsMaxDistance(diatance)
    self._distanceMax = diatance
end

function UICardsArea:setCardsMinDistance(diatance)
    self._distanceMin = diatance
end

function UICardsArea:setArrangementWay(arrangementWay)
    self._arrangement = arrangementWay
end

function UICardsArea:setCardsIncreaseDirection(increaseDirectionX,increaseDirectionY)
    self._increaseDirectionX = increaseDirectionX
    self._increaseDirectionY = increaseDirectionY
end

function UICardsArea:setStartPos(startPosX,startPosY)
    self._startPosX = startPosX
    self._startPosY = startPosY
end

function UICardsArea:setCanTouch(canTouch)
    self._canTouch = canTouch
end

function UICardsArea:setCheckDistance(checkDistance)
    self._checkDistance = checkDistance
end


--手牌相关函数
function UICardsArea:setCards(ids,aniType)
    self:destroyCards()
    if self._maxCardsCount > 0 then
        self._lineCount = math.ceil(#ids/self._maxCardsCount)
    end
    for i = 1, self._lineCount do
        self._cardLines[i] = {}
        local cardCountInLine = self._maxCardsCount
        if i == self._lineCount then
            cardCountInLine = #ids - self._maxCardsCount * (self._lineCount - 1)
        end
        for j = 1, cardCountInLine do
            local cardsIndex = j + self._maxCardsCount * (i - 1)
            self._cardLines[i][j] = UICard:new()
            self._cardLines[i][j]:setCard(ids[cardsIndex])
            self._rootNode:addChild(self._cardLines[i][j])
            self._cardLines[i][j]:setVisible(true)
            self._cardLines[i][j]:setName(string.format(KW_CARD_NAME,cardsIndex))
            if self._canTouch == true then
                self._cardLines[i][j]:setTouchEnabled(true)
                self._cardLines[i][j]:addTouchEventListener(handler(self,self.onTouchEventCard))
            end 
            self._cards[cardsIndex] = self._cardLines[i][j]
        end
    end
    
    --动画
    if aniType == self.CardAniType.FirstDealHandCardRightIn or aniType == self.CardAniType.FirstDealHandCardLeftIn then
        self:firstDealHandCardAni(aniType)
    end
end

--销毁牌
function UICardsArea:destroyCards()
    if self._rootNode == nil then
        return
    end
    for i = 1, #self._cards do
        self._rootNode:removeAllChildren()
    end
    self._cards = {}
    self._cardLines = {}
end

--调整牌位置
function UICardsArea:arrangeCards()
    local cardsInfo = self:getCardsPosAndZorder()
    for index = 1 , #self._cards do
        self._cards[index]:setPositionX(cardsInfo[index].x)
        self._cards[index]:setPositionY(cardsInfo[index].y)
        self._cards[index]:setLocalZOrder(cardsInfo[index].z)
    end
end

--获取所有牌ID
function UICardsArea:getAllCardIDs()
    local allCardIDs = {}
    for index = 1 , #self._cards do
        table.insert(allCardIDs,self._cards[index]:getID())
    end
    return allCardIDs
end

--设置牌选中
function UICardsArea:setCheckedCards(ids,indexs)
    if indexs then
        for i = 1, #indexs do
            local cardIndex = indexs[i]
            if self._cards[cardIndex]:getID() == ids[i] and self._cards[cardIndex]:getState() ~= UICard.State.Check then
                self._cards[cardIndex]:setColor(UICard.Color.Select)
                self._cards[cardIndex]:setState(UICard.State.Check)
                self:setCheck(self._cards[cardIndex],true)
            end
        end
    else
        for i = 1, #ids do
            local cardID = ids[i]
            for j = 1, #self._cards do
                if self._cards[j]:getID() == cardID and self._cards[j]:getState() ~= UICard.State.Check then
                    self._cards[j]:setColor(UICard.Color.Select)
                    self._cards[j]:setState(UICard.State.Check)
                    self:setCheck(self._cards[j],true)
                    break
                end
            end
        end
    end
end

--清除选中的牌
function UICardsArea:clearCheckedCards()
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Check then
            self._cards[index]:setColor(UICard.Color.Normal)
            self._cards[index]:setState(UICard.State.Normal)
            self:setCheck(self._cards[index],false)
        end
    end
end

--获取选中牌的ID
function UICardsArea:getCheckedCardIDs()
    local checkedCardIDs = {}
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Check then
            table.insert(checkedCardIDs,self._cards[index]:getID())
        end
    end
    return checkedCardIDs
end

--获取选中牌的ID的下标
function UICardsArea:getCheckedCardIDIndexes()
    local checkedCardIDIndexes = {}
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Check then
            table.insert(checkedCardIDIndexes,index)
        end
    end
    return checkedCardIDIndexes
end

--获取拖拽出去的牌的ID
function UICardsArea:getDragOutCardIDs()
    local dragOutCardIDs = {}
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Drag then
            table.insert(dragOutCardIDs,self._cards[index]:getID())
        end
    end
    return dragOutCardIDs
end

--获取拖拽出去的牌的ID
function UICardsArea:getDragOutCardIndexes()
    local dragOutCardIndexes = {}
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Drag then
            table.insert(dragOutCardIndexes,index)
        end
    end
    return dragOutCardIndexes
end

--事件
function UICardsArea:dealOutCardEvent()
    --出牌事件  删牌 重新设置牌
    local outCardIDs = self:getDragOutCardIDs()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventOutCards")
    event.outCardIDs = outCardIDs
    eventDispatcher:dispatchEvent(event)  
end

function UICardsArea:dealCheckedCardEvent()
    local checkedCardIDs = self:getCheckedCardIDs()
    local checkedCardIDIndexes = self:getCheckedCardIDIndexes()
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventCheckedCard")
    event.checkedCardIDs = checkedCardIDs
    event.checkedCardIDIndexes = checkedCardIDIndexes
    eventDispatcher:dispatchEvent(event)  
end

--获取计算牌的位置和层级
function UICardsArea:getCardsPosAndZorder()
    if self._arrangement == self.CardArrangement.Horizontal then
        local cardsInfo = {}
        for index = 1 , #self._cards do
            local line = math.floor((index-1)/self._maxCardsCount)
            local order = (index-1)%self._maxCardsCount
            local maxLineCards = self._maxCardsCount
            if line == (self._lineCount-1) then
                maxLineCards = #self._cards - line*self._maxCardsCount
            end
            local increaseDistanceX = 0
            if self._increaseDirectionX == self.CardIncreaseDirectionX.Right then
                increaseDistanceX = (maxLineCards - 1)*self._distanceX
            elseif self._increaseDirectionX == self.CardIncreaseDirectionX.Left then
                increaseDistanceX = 0
            elseif self._increaseDirectionX == self.CardIncreaseDirectionX.HorizontalCenter then
                increaseDistanceX =  maxLineCards*self._distanceX/2 - self._distanceX/2
            end
            local symbleY = 1
            local symbleZ = 1
            local increaseDistanceY = 0
            if self._increaseDirectionY == self.CardIncreaseDirectionY.Up then
                symbleY = 1
                symbleZ = 1
                increaseDistanceY = 0
            elseif self._increaseDirectionY == self.CardIncreaseDirectionY.Down then
                symbleY = -1
                symbleZ = -1
                increaseDistanceY = 0
            elseif self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
                symbleY = 1
                symbleZ = 1
                increaseDistanceY =  self._lineCount*self._distanceY/2 - self._distanceY/2
            end
            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX - order*self._distanceX + increaseDistanceX
            cardsInfo[index].y = self._startPosY + symbleY*line*self._distanceY - increaseDistanceY
            cardsInfo[index].z = -index - symbleZ*line*(self._maxCardsCount+1)
        end
        return cardsInfo
    elseif self._arrangement == self.CardArrangement.Vertical then
        local cardsInfo = {}
        for index = 1 , #self._cards do
            local line = math.floor((index-1)/self._maxCardsCount)
            local order = (index-1)%self._maxCardsCount
            local maxLineCards = self._maxCardsCount
            if line == (self._lineCount-1) then
                maxLineCards = #self._cards - line*self._maxCardsCount
            end
            local increaseDistanceY = 0
            if self._increaseDirectionY == self.CardIncreaseDirectionY.Up then
                increaseDistanceY = 0
            elseif self._increaseDirectionY == self.CardIncreaseDirectionY.Down then
                increaseDistanceY = maxLineCards*self._distanceY
            elseif self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
                increaseDistanceY = maxLineCards*(self._distanceY/2) - (self._distanceY/2)
            end
            local symbleX = 1
            local symbleZ = 1
            local increaseDistanceX = 0
            if self._increaseDirectionX == self.CardIncreaseDirectionX.Right then
                symbleX = 1
                symbleZ = 1
                increaseDistanceX = 0
            elseif self._increaseDirectionX == self.CardIncreaseDirectionX.Left then
                symbleX = -1
                symbleZ = -1
                increaseDistanceX = 0
            elseif self._increaseDirectionX == self.CardIncreaseDirectionX.HorizontalCenter then
                symbleX = -1
                symbleZ = -1
                increaseDistanceX = self._lineCount*self._distanceX/2 - self._distanceX/2
            end
            cardsInfo[index] = {}
            cardsInfo[index].x = self._startPosX + symbleX*line*self._distanceX + increaseDistanceX
            cardsInfo[index].y = self._startPosY + order*self._distanceY - increaseDistanceY
            cardsInfo[index].z = -index + symbleZ*line*(self._maxCardsCount+1)
        end
        return cardsInfo
    end
    return nil
end

function UICardsArea:deleteCards(delIDs,delIndexes)
    if #delIndexes > #self._cards or self._lineCount > 1 then
        return false
    end
    ---------------删除牌的数据
    self:clearCheckedCards()
    if self._dragCards._cards then
        for i = 1,#self._dragCards._cards do
            if self._dragCards._cards[i] then
                self._dragCards._cards[i]:removeFromParent(false)
            end
        end
        self._dragCards._cards = {}
    end
    --删除标记
    local delflag = {}
    for i = 1,#self._cards do
        delflag[i] = false
    end
    for i = 1,#delIndexes do
        if self._cards[delIndexes[i]]:getID() == delIDs[i] then
            self._cards[delIndexes[i]]:removeFromParent(false)
            delflag[delIndexes[i]] = true
        end
    end
    --删除后的大小
    local newSize = 0
    for i = 1,#self._cards do
        if delflag[i] == false then
            newSize = newSize + 1
            self._cards[newSize] = self._cards[i]
        end
    end
    --移除多余的元素
    while #self._cards > newSize do
        table.remove(self._cards)
    end
    
    if self._maxCardsCount > 0 then
        self._lineCount = math.ceil(#self._cards / self._maxCardsCount)
    end

    ---------------播放撑牌动画
    local afterDelCardsInfo = self:getCardsPosAndZorder()
    for index = 1,#self._cards do
        self._cards[index]:setLocalZOrder(afterDelCardsInfo[index].z)
        local endPos = {}
        endPos.x = afterDelCardsInfo[index].x
        endPos.y = afterDelCardsInfo[index].y
        local moveAction = cc.EaseIn:create(cc.MoveTo:create(0.3,endPos),0.3)
        self._cards[index]:runAction(moveAction)
    end
    ---------------重置牌的index
    for i = 1, self._lineCount do
        self._cardLines[i] = {}
        local cardCountInLine = self._maxCardsCount
        if i == self._lineCount then
            cardCountInLine = #self._cards - self._maxCardsCount * (self._lineCount - 1)
        end
        for j = 1, cardCountInLine do
            local cardsIndex = j + self._maxCardsCount * (i - 1)
            self._cards[cardsIndex]:setName(string.format(KW_CARD_NAME,cardsIndex))
        end
    end
end

function UICardsArea:refreshCardStyle()
    for i = 1, #self._cards do 
        self._cards[i]:setCard(self._cards[i]:getID())
    end
end

return UICardsAream5