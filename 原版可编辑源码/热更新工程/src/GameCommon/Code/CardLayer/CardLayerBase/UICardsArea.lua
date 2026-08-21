----create by lcy 2017.12.1
local UICardsArea = class("UICardsArea")
local CURRENT_MOUDLE_NAME = ...
local UICard = import(".UICard",CURRENT_MOUDLE_NAME)

local scriptPath = {}
table.insert(scriptPath,".UICardsAreaInterface")
table.insert(scriptPath,".UICardsAreaAnimation")
table.insert(scriptPath,".UICardsAreaFunction")
local tmpmetatable = {}
for i,v in ipairs(scriptPath) do
    local script = import(v,CURRENT_MOUDLE_NAME)
    local object = script.new()
    local objectemetatable = getmetatable(object)
    for scripti,scriptv in pairs(objectemetatable.__index) do
        tmpmetatable[scripti] = scriptv
    end
end
local metatable = UICardsArea
for i,v in pairs(metatable) do
    tmpmetatable[i] = v
end
setmetatable(UICardsArea, {__index = tmpmetatable})

local KW_DRADNODE = "DragCards"
local KW_DISTANCE_LIMIT_OUTCARD = 200

--排列方式
UICardsArea.CardArrangement =
{
    Horizontal = 1,
    Vertical = 2,
}

--X轴增长方向
UICardsArea.CardIncreaseDirectionX =
{
    HorizontalCenter = 0,
    Left = 1,
    Right = 2,
}

--Y轴增长方向
UICardsArea.CardIncreaseDirectionY =
{
    VerticalCenter = 0,
    Up = 1,
    Down = 2,
}

--对牌操作状态
UICardsArea.MoveState =
{
    None = 0,
    Normal = 1,
    Slide = 2,
    Drag = 3,
}

function UICardsArea:ctor()
    self._rootNode = nil
    
    self._cards = {}
    self._cardLines = {}
    
    --增长方式
    self._increaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left
    self._increaseDirectionY = UICardsArea.CardIncreaseDirectionY.Up
    
    --纵横排列
    self._arrangement = UICardsArea.CardArrangement.Horizontal
    
    --间距
    self._distanceX = 0
    self._distanceY = 0
    
    self._distanceMax = 0
    self._distanceMin = 0
    
    --起始点
    self._startPosX = 0
    self._startPosY = 0
    
    --每排/每列最大张数
    self._maxCardsCount = 1
    --一共几排
    self._lineCount = 1
    
    --是否可点击
    self._canTouch = false
    self._canDrag = false
    --选中提起距离
    self._checkDistance = 0
    
    --拖拽限制角度、距离
    self._dragAngelLimit = 45
    self._dragDistanceLimit = 40
    
    self._dragCards = {}
    
    --是否在拖拽中
    self._isDraging = false
    self._dragNode = nil
    self._currentState = UICardsArea.MoveState.None
    
    --保存的状态和颜色
    self._saveState = {}
    self._saveColor = {}
    self._saveVisible = {}


    self._originStartPosX = 0
    self._originIncreaseDirectionX = 0
end

function UICardsArea:init(node)
    self._rootNode = node
end

--设置世界坐标
function UICardsArea:setWorldPosition(movePos)
    local parentNode = self._rootNode:getParent()
    if parentNode then
        movePos = parentNode:convertToNodeSpace(movePos)
        self._rootNode:setPosition(movePos)
    end
end

--设置拖拽牌以及参数
function UICardsArea:setDragCards(cardIDs,dragCrads)
    local node = ccui.Helper:seekWidgetByName(self._rootNode, KW_DRADNODE)
    if node == nil then
        node = ccui.Widget:create()
    	node:setName(KW_DRADNODE)
    	node:setAnchorPoint(0.5,0.5)
        self._rootNode:addChild(node,200)
    end
    self._dragCards = UICardsArea:new()
    self._dragCards:init(node)
    self._dragCards:setMaxCardsCount(self._maxCardsCount)
    self._dragCards:setCardsIncreaseDirection(UICardsArea.CardIncreaseDirectionX.HorizontalCenter,UICardsArea.CardIncreaseDirectionY.VerticalCenter)
    self._dragCards:setCardsDistance(self._distanceX,self._distanceY)
    self._dragCards:setCards(cardIDs)
    self._dragCards:arrangeCards()
end

--点击事件
function UICardsArea:onTouchEventCard(send,eventType)
    if self._isDraging and send ~= self._dragNode then
        return 
    end
    if eventType == ccui.TouchEventType.began then 
        self:saveCardsState()
        self:saveCardsColor()
        self:saveCardsVisible()
        
        self._startMovePos = send:getTouchBeganPosition()
        self._endMovePos = self._startMovePos
        self._startTouchIndex = self.getNumberSuffixByString(send:getName())
        self._currentTouchIndex = self._startTouchIndex 
        self._endTouchIndex = 0

        if send:getState() == UICard.State.Normal then
            send:setColor(UICard.Color.Select)
        end

    elseif eventType == ccui.TouchEventType.moved then
        local movePos = send:getTouchMovePosition()
        
        if self._isDraging then
            self._dragCards:setWorldPosition(movePos)
        else
            local moveState = self:getMoveState(send,movePos)
            if moveState == UICardsArea.MoveState.None then
                --暂时无需处理
            elseif moveState == UICardsArea.MoveState.Normal then
                self:dealSlideState(movePos)
            elseif moveState == UICardsArea.MoveState.Slide then
                self:dealSlideState(movePos)
            elseif moveState == UICardsArea.MoveState.Drag then
                self:dealDragState(send,movePos)
            end
        end
        
    elseif eventType == ccui.TouchEventType.canceled or eventType == ccui.TouchEventType.ended then 
        self._endMovePos = send:getTouchEndPosition()
        if self._isDraging then
            local disY = self._endMovePos.y - self._startMovePos.y
            if disY >= KW_DISTANCE_LIMIT_OUTCARD then
                self:dealOutCardEvent()
            else
                self:dealRecoverCards()
            end
            self._isDraging = false
            self._dragNode = nil
            self._currentState = UICardsArea.MoveState.None
        else
            self:dealCheckState()
            self:dealCheckedCardEvent()
        end
    end
end

--获取当前对牌操作状态
function UICardsArea:getMoveState(send,movePos)
    if movePos.x - self._startMovePos.x == 0 then
        return self._currentState
    end
    --判断角度和距离
    local angel = self.getTwoPosAngel(self._startMovePos,movePos)
    if math.abs(angel) >= self._dragAngelLimit then
        local distance = self.getTwoPosDistance(self._startMovePos,movePos)
        if distance <= self._dragDistanceLimit then
            self._currentState = UICardsArea.MoveState.Normal
        else
            if self._currentState ~= UICardsArea.MoveState.Slide then
                self._currentState = UICardsArea.MoveState.Drag
            end
        end
    else
        local tmpHitCard = self:getCardUIByPosition(movePos)
        if tmpHitCard then
            if tmpHitCard == send then
                self._currentState = UICardsArea.MoveState.Normal
            else
                self._currentState = UICardsArea.MoveState.Slide
            end
        end
    end
    return self._currentState
end

--处理滑选状态
function UICardsArea:dealSlideState(movePos)
    local tmpHitCard = self:getCardUIByPosition(movePos)
    if tmpHitCard then
        self._currentTouchIndex = self.getNumberSuffixByString(tmpHitCard:getName())
        local tmpStartIndex = self._startTouchIndex
        local tmpEndIndex = self._currentTouchIndex
        if tmpEndIndex < tmpStartIndex then
            local tmpIndex = tmpEndIndex
            tmpEndIndex = tmpStartIndex
            tmpStartIndex = tmpIndex
        end
        self:clearSelectCards()
        for i = tmpStartIndex,tmpEndIndex do
            self._cards[i]:setColor(UICard.Color.Select)
        end  
    end
end

--处理拖拽状态
function UICardsArea:dealDragState(send,movePos)
    local checkedCards = self:getCheckedCards()
    local moveCardIDs = {}
    local dragCards = {}
    if #checkedCards ~= 0 then
        if send:getState() == UICard.State.Check then
            for i = 1 , #checkedCards do
                checkedCards[i]:setState(UICard.State.Drag)
                table.insert(moveCardIDs,checkedCards[i]:getID())
            end
            dragCards = checkedCards
        end
    else
        send:setState(UICard.State.Drag)
        moveCardIDs = {send:getID()}
        dragCards = {send}
    end
    if #dragCards ~= 0 then
	    self._isDraging = true
        self._dragNode = send
        self:setDragCards(moveCardIDs)
        self:showDragCards(false)
        self._dragCards:setWorldPosition(movePos)
    end
end

function UICardsArea:dealCheckState()
    local tmpStartIndex = self._startTouchIndex
    local tmpEndIndex = self._currentTouchIndex
    if tmpEndIndex < tmpStartIndex then
        local tmpIndex = tmpEndIndex
        tmpEndIndex = tmpStartIndex
        tmpStartIndex = tmpIndex
    end
    local haveUnChecked = false
    for i = tmpStartIndex,tmpEndIndex do
        if self._cards[i]:getState() ~= UICard.State.Check then
            haveUnChecked = true
            self:setCheck(self._cards[i],true)
            self._cards[i]:setState(UICard.State.Check)
        end
    end
    if haveUnChecked == false then
        for i = tmpStartIndex,tmpEndIndex do
            if self._cards[i]:getState() == UICard.State.Check then
                self:setCheck(self._cards[i],false)
                self._cards[i]:setState(UICard.State.Normal)
                self._cards[i]:setColor(UICard.Color.Normal)
            end
        end
    end
end

function UICardsArea:dealRecoverCards()
    --销毁拖拽  显示手牌 回复状态颜色
    self._dragCards:destroyCards()
    self:recoverCardsState()
    self:recoverCardsColor()
    self:recoverCardsVisible()
end

--保存牌状态
function UICardsArea:saveCardsState()
    for index = 1 , #self._cards do
        self._saveState[index] = self._cards[index]:getState()
    end
end

--恢复牌状态
function UICardsArea:recoverCardsState()
    for index = 1 , #self._cards do
        if self._saveState[index] ~= UICard.State.Drag then
            self._cards[index]:setVisible(true)
        end
        self._cards[index]:setState(self._saveState[index])
    end
end

--保存牌颜色
function UICardsArea:saveCardsColor()
    for index = 1 , #self._cards do
        self._saveColor[index] = self._cards[index]:getColor()
    end
end

--恢复牌颜色
function UICardsArea:recoverCardsColor()
    for index = 1 , #self._cards do
        self._cards[index]:setColor(self._saveColor[index])
    end
end

--保存牌可见性
function UICardsArea:saveCardsVisible()
    for index = 1 , #self._cards do
        self._saveVisible[index] = self._cards[index]:isVisible()
    end
end

--恢复牌可见性
function UICardsArea:recoverCardsVisible()
    for index = 1 , #self._cards do
        self._cards[index]:setVisible(self._saveVisible[index])
    end
end

--清除选中的牌
function UICardsArea:clearSelectCards()
    for index = 1 , #self._cards do
        if self._cards[index]:getState() ~= UICard.State.Check then
            self._cards[index]:setColor(UICard.Color.Normal)
        end
    end
end

--设置牌选中
function UICardsArea:setCheck(cardNode,check)
    if check then
        cardNode:setPositionY(cardNode:getPositionY()+self._checkDistance)
    else
        cardNode:setPositionY(cardNode:getPositionY()-self._checkDistance)
    end
end

--显示隐藏拖拽出去后手牌中的牌
function UICardsArea:showDragCards(bshow)
    if self._rootNode == nil then
        return
    end
    local dragCrads = self:getDragCards()
    if #dragCrads == 0 then
        return
    end
    for key, var in pairs(dragCrads) do
        dragCrads[key]:setVisible(bshow)
    end
end

--获取拖拽出去后手牌中的牌
function UICardsArea:getDragCards()
    local checkedCards = {}
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Drag then
            table.insert(checkedCards,self._cards[index])
        end
    end
    return checkedCards
end

--获取选中的牌
function UICardsArea:getCheckedCards()
    local checkedCards = {}
    for index = 1 , #self._cards do
        if self._cards[index]:getState() == UICard.State.Check then
            table.insert(checkedCards,self._cards[index])
        end
    end
    return checkedCards
end

--通过位置找牌UI
function UICardsArea:getCardUIByPosition(pos)
    for index = 1, #self._cards do
        local areatBoundingBox = self._cards[index]:getBoundingBox()
        local parentNode = self._cards[index]:getParent()
        local localPos = pos
        if parentNode then 
            localPos = parentNode:convertToNodeSpace(pos)
        end
        if cc.rectContainsPoint(areatBoundingBox, localPos) then
            return self._cards[index]
        end
        -- if self._cards[index]:hitTest(pos) then
        --     return self._cards[index]
        -- end
    end
    return nil
end

return UICardsArea