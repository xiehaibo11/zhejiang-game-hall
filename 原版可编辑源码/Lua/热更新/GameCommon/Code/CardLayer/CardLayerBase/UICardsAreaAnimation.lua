local UICardsArea = class("UICardsArea")
local CURRENT_MOUDLE_NAME = ...
local UICard = import(".UICard",CURRENT_MOUDLE_NAME)

UICardsArea.AniTime =
{
    --横排动画时间设置
    LeftOrRightDelayTime = 0.03,
    LeftOrRightDownTime = 0.3,
    HyorizontalCenterTime = 0.1,
    VerticalCenterLineDownTime = 0.3,
    
    --竖排动画时间设置
    UpOrDownDelayTime = 0.06,
    UpOrDownFadeInTime = 0.3,
    VerticalCenterTime = 0.06
}
UICardsArea.CardAniType =
{
    None = 0,
    FirstDealHandCardRightIn = 1,
    FirstDealHandCardLeftIn = 2,
}

function UICardsArea:firstDealHandCardAni(aniType)
    --先保存设置的增长方向和起始点位置，用于在动画播放完成后恢复
    self._originStartPosX = self._startPosX
    self._originIncreaseDirectionX = self._increaseDirectionX

    --临时修改对齐方式和起始点位置用于播放动画，播放完成后，还原成初始设置
    local cardsCount = #self._cards
    if self._originIncreaseDirectionX == self.CardIncreaseDirectionX.Right
        or self._originIncreaseDirectionX == self.CardIncreaseDirectionX.HorizontalCenter then
        --加上 self._distanceX 这个距离是因为修复左右出牌不对称问题后开始位置计算时有点不一样，
        --原先坐标计算方式是（n * distance）现在改为（（n-1）*distance）[UICardsAreaInterface.lua:line:228]
        --为了保持动画正常所以这里补上一个长度，只是用于动画而已
        self._startPosX = -(cardsCount+1) * self._distanceX /2 + self._distanceX
        self._increaseDirectionX = self.CardIncreaseDirectionX.Right
    else
        self._startPosX = (cardsCount+1) * self._distanceX /2 + self._distanceX
        self._increaseDirectionX = self.CardIncreaseDirectionX.Left
    end

    for index = 1 , #self._cards do
        self._cards[index]:setOpacity(0)
    end
    self:arrangeCards()
    local aniList = self:createAniList(aniType)
    self:playAni(aniList,aniType)
end

--创建动画播放列表
function UICardsArea:createAniList(aniType)
    local tmpTable ={}
    local line = self._lineCount
    for i = 1,line do
        local currentLine = i
        local currentList = self:createLineAniList(currentLine,aniType)
        for i,v in ipairs(currentList) do
            table.insert(tmpTable,v)
        end
    end
    return tmpTable
end

--创建每一行的动画播放列表
function UICardsArea:createLineAniList(line,aniType)
    local tmpTable ={}
    local maxLineCards = self._maxCardsCount
    if line == self._lineCount then
        maxLineCards = #self._cards - (self._lineCount - 1) * maxLineCards
    end
    for i = 1,maxLineCards do
        local cardIndex = (line - 1) * self._maxCardsCount + i
        local tAni = {}
        tAni.index = cardIndex
        tAni.line = line
        tAni.order = i
        
        if (self._arrangement == self.CardArrangement.Horizontal and self._increaseDirectionX == self.CardIncreaseDirectionX.Right) or (self._arrangement == self.CardArrangement.Vertical and self._increaseDirectionY == self.CardIncreaseDirectionY.Down) then
            table.insert(tmpTable,1,tAni)
        else
            table.insert(tmpTable,tAni)
        end
        if self._arrangement == self.CardArrangement.Horizontal then
            if self._increaseDirectionX == self.CardIncreaseDirectionX.HorizontalCenter then
                self._cards[cardIndex]:setPositionX(self._startPosX - (i - 1) * self._distanceX / 2)
            end
            if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
                self._cards[cardIndex]:setPositionY(self._startPosY + (line - 1)*self._distanceY /2 + self._checkDistance)
            else
                self._cards[cardIndex]:setPositionY(self._cards[cardIndex]:getPositionY() + self._checkDistance)
            end
        else --当为竖排时
            if aniType == self.CardAniType.FirstDealHandCardRightIn then
                self._cards[cardIndex]:setPositionX(self._cards[cardIndex]:getPositionX() + self._distanceX)
            else
                self._cards[cardIndex]:setPositionX(self._cards[cardIndex]:getPositionX() - self._distanceX)
            end
            if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
                self._cards[cardIndex]:setPositionY(self._startPosY + (i - 1) * self._distanceY / 2)
            end
        end
    end
    return tmpTable
end

--播放动画
function UICardsArea:playAni(aniList,aniType)
    if aniList == nil or next(aniList) == nil then
        return
    end
    
    local delayTime = 0
    local fadeInTime = 0
    local moveTime = 0
    local lineDownTime = 0
    --配置动画的时间参数
    if self._arrangement == self.CardArrangement.Horizontal then
        if self._increaseDirectionX == self.CardIncreaseDirectionX.HorizontalCenter then
            delayTime = self.AniTime.HyorizontalCenterTime
            fadeInTime = self.AniTime.HyorizontalCenterTime
            moveTime = self.AniTime.HyorizontalCenterTime
            if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
                lineDownTime = self.AniTime.HyorizontalCenterTime
            end
        else
            delayTime = self.AniTime.LeftOrRightDelayTime
            fadeInTime = self.AniTime.LeftOrRightDownTime
            if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
                lineDownTime = self.AniTime.VerticalCenterLineDownTime
            end
        end
    else --当为竖排时
        if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter then
            delayTime = self.AniTime.VerticalCenterTime
            fadeInTime = self.AniTime.VerticalCenterTime
            moveTime = self.AniTime.VerticalCenterTime
        else
            delayTime = self.AniTime.UpOrDownDelayTime
            fadeInTime = self.AniTime.UpOrDownFadeInTime
        end
    end
    
    --处理一行牌动画的函数（移动，下移）
    local function playLineAni(cardTable,lastLine)
        return function()
            if cardTable == nil then
                return
            end
            if self._arrangement == self.CardArrangement.Horizontal then
                if self._increaseDirectionX == self.CardIncreaseDirectionX.HorizontalCenter and cardTable.order > 1 then
                    for i = cardTable.order - 1,1,-1 do
                        local moveRight = cc.MoveBy:create(moveTime,cc.p(self._distanceX / 2,0))
                        local index = i + (cardTable.line - 1) * self._maxCardsCount
                        self._cards[index]:runAction(moveRight)
                    end  
                end

                if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter and cardTable.line ~= lastLine then
                    for i =1,lastLine * self._maxCardsCount do
                        local lineMoveDown = cc.MoveBy:create(lineDownTime,cc.p(0,-self._distanceY / 2))
                        self._cards[i]:runAction(lineMoveDown)
                    end
                end
            else --当为竖排时
                if self._increaseDirectionY == self.CardIncreaseDirectionY.VerticalCenter and cardTable.order > 1 then
                    for i = cardTable.order - 1,1,-1 do
                        local moveRight = cc.MoveBy:create(moveTime,cc.p(0,-self._distanceY / 2))
                        local index = i + (cardTable.line - 1) * self._maxCardsCount
                        self._cards[index]:runAction(moveRight)
                    end  
                end
            end
        end
    end

    local playSequence = 1
    --按照生成的动画列表播放动画的函数
    local function playAinByTable()
        --动画播放结束后的刷新
        if playSequence == #aniList then
            local lineDownResidueTime = lineDownTime - (#aniList - (self._lineCount - 1) * self._maxCardsCount - 1) * delayTime
            if lineDownResidueTime < 0 then
                lineDownResidueTime = 0
            end
            local handle
            handle = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(handle)
                --动画播放完毕，恢复之前对开始位置和对齐方式的修改
                self._startPosX = self._originStartPosX
                self._increaseDirectionX = self._originIncreaseDirectionX
                
                for i = 1,#self._cards do
                    self._cards[i]:stopAllActions()
                    self._cards[i]:setOpacity(255)
                    self._cards[i]:setState(UICard.State.Normal)
                    self._cards[i]:setColor(UICard.Color.Normal)
                end
                self:arrangeCards()
            end,fadeInTime + moveTime + lineDownResidueTime + cc.Director:getInstance():getAnimationInterval(), false)
        end
        
        if playSequence <= #aniList then
            playSequence = playSequence + 1
            local move = nil
            if self._arrangement == self.CardArrangement.Horizontal then
                move =  cc.MoveBy:create(fadeInTime,cc.p(0,-self._checkDistance))
            else--当为竖排时
                if aniType == self.CardAniType.FirstDealHandCardRightIn then
                    move =  cc.MoveBy:create(fadeInTime,cc.p(-self._distanceX,0))
                else
                    move =  cc.MoveBy:create(fadeInTime,cc.p(self._distanceX,0))
                end
            end
            local easeOut1 = cc.EaseOut:create(move,1)
            local fadeIn = cc.FadeIn:create(fadeInTime)
            local line = 1
            if playSequence - 2 >= 1 then
                line = aniList[playSequence - 2].line
            end
            if self._cards[aniList[playSequence - 1].index] then
                self._cards[aniList[playSequence - 1].index]:runAction(cc.Sequence:create(
                    cc.Spawn:create(easeOut1,fadeIn),
                    cc.CallFunc:create(playLineAni(aniList[playSequence - 1],line))
                ))
            end
            
            local handle
            handle = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(handle)
                playAinByTable()
            end,delayTime, false)
        end
    end
    playAinByTable()
end

return UICardsArea