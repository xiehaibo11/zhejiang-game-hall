local PlayerView    = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")
local CardLogic     = CF.gameRequire("Logic.CardLogic")

function PlayerView:getCSBPath()
    return "cocosStudio/DaTong/GameLayer/CSB/PlayerLayer.csb"
end

function PlayerView:getBindingInfo()
   local uiList = PlayerView.super.getBindingInfo(self)
   uiList["_KW_PLAYER_HEAD_POS_"] = { varName = "_headPos", beginIndex = 1, endIndex = 4 }
   uiList["_KW_PLAYER_HEAD_POSEX_"] = { varName = "_headPosEx", beginIndex = 1, endIndex = 6 }
   uiList["_KW_IMG_READY_"] = { varName = "_readySp_", beginIndex = 1, endIndex = 4 }
   uiList["_KW_IMG_READY_EX_"] = { varName = "_readySpEx_", beginIndex = 1, endIndex = 6 }
   uiList["_KW_PANEL_PLAYER_HEADEX_"] = { varName = "_head_panel_ex_", beginIndex = 1, endIndex = 6 }
   uiList["_KW_PLAYER_OPENCARD_HEAD_POS_4"] = { varName = "_headOpenCardPos4"}
   uiList["_KW_PLAYER_OPENCARD_HEAD_POSEX_5"] = { varName="_headOpenCardPosEx5"}
   return uiList
end

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    self._playerHandCardOpen = {}
    self._playerHeadersHide = {}
    self:updatePlayerHeadsPos()
end

function PlayerView:getProxyEvents()
    local eventTable = PlayerView.super.getProxyEvents(self)
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HAND_CARD_CHANGED", callBack = "onHandCardChanged"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_SHOW_OUT_CARD", callBack = "onHideCardNumAlarm"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_WIN_ORDER", callBack = "onGameWinOrder"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCard"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"):getGameData(), eventKeyName = "EVENT_PLAYER_SEAT_CHANGED", callBack = "onPlayerSeatChanged"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"):getGameData(), eventKeyName = "EVENT_HANDCARD_UPDATE", callBack = "onHandCardUpdate"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_TABLE_INFO", callBack = "onEventTableInfo"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_SHOW_LEFTTIME_TIP", callBack = "onShowLeftTimeTip"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_CLEAR_LEFTTIME_TIP", callBack = "onClearLeftTimeTip"}
    eventTable[#eventTable + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "updatePlayerHeadsPos"}
    return eventTable
end

function PlayerView:getAdaptationConfig()
    local adaptConfig = PlayerView.super.getAdaptationConfig(self)
    adaptConfig[#adaptConfig+1] = {node = self._readySpEx_6, bRight = false, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._readySpEx_1, bRight = false, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._readySpEx_3, bRight = true, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._readySpEx_4, bRight = true, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._headPosEx1, bRight = false, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._headPosEx6, bRight = false, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._headPosEx3, bRight = true, bHalf = false}
    adaptConfig[#adaptConfig+1] ={node = self._headPosEx4, bRight = true, bHalf = false}
    return adaptConfig
end

function PlayerView:updatePlayerHeadsPos()
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        if localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
            self._playerHandCardOpen[localSeat] = false
        end
        if self._playerHeads[localSeat] then
            local headPos = self:getHeadPosByLocalSeat(localSeat)
            self._playerHeads[localSeat]:setPosition(headPos)
            self._playerHeads[localSeat]:moveLeftCardNumOpenCard(false)
        end
    end
end

function PlayerView:getHeadPosByLocalSeat(localSeat)
    local headPos = {}
    if CF.roomData:isSixPlayer() then
        if self["_headOpenCardPosEx"..localSeat] and self._playerHandCardOpen[localSeat] then
            headPos.x,headPos.y = self["_headOpenCardPosEx"..localSeat]:getPosition()
        else
            headPos.x,headPos.y = self["_headPosEx"..localSeat]:getPosition()
        end
    else
        headPos.x,headPos.y = self["_headPos"..localSeat]:getPosition()
    end
    return headPos, self._playerHandCardOpen[localSeat]
end

function PlayerView:resetPlayerHead(seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    self:removePlayerHead(seatId)
    local playerHead = self:createPlayerHead(seatId)
    local plyaerHeadPanel = CF.roomData:isSixPlayer() and self["_head_panel_ex_"..localSeat] or self["_head_panel_"..localSeat]
    if plyaerHeadPanel then
        plyaerHeadPanel:addChild(playerHead)
        self._playerHeads[localSeat] = playerHead
        self:updateReadyState(seatId)
    end
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        self:showCaiShenIcon()
        self:addJuBaoPenJiView()
    end
end

function PlayerView:createPlayerHead(seatId)
    local playerHead = PlayerView.super.createPlayerHead(self, seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    local headPos, bOpen = self:getHeadPosByLocalSeat(localSeat)
    playerHead:setPosition(headPos)
    if bOpen then
        --如果已经显示牌，将剩余牌图标移动相应位置
        playerHead:moveLeftCardNumOpenCard(true)
        if CF.roomData:isSixPlayer() then
            if localSeat == CF.GameDefine.LOCAL_SEAT.TOPMID then
                local headOpenCardPos = CF.roomData:isSixPlayer() and self["_headOpenCardPosEx"..localSeat] or self["_headOpenCardPos"..localSeat]
                if headOpenCardPos then
                    playerHead:setPosition(cc.p(headOpenCardPos:getPositionX()-80,headOpenCardPos:getPositionY()))
                end
            end
        else
            if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                local headOpenCardPos = CF.roomData:isSixPlayer() and self["_headOpenCardPosEx"..localSeat] or self["_headOpenCardPos"..localSeat]
                if headOpenCardPos then
                    playerHead:setPosition(cc.p(headOpenCardPos:getPositionX()-80,headOpenCardPos:getPositionY()))
                end
            end
        end
    end
    if self._playerHeadersHide[localSeat] then
        --播放换位动画时使用
        playerHead:setVisible(false)
    end
    local cardCount = self._gameData:getHandCardNum(seatId)
    playerHead:setLeftCardNum(cardCount)
    return playerHead
end


function PlayerView:onHandCardChanged(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if not self._playerHeads[localSeat] then
        return
    end

    if localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
        local isOpenHand = false
        if msg.bIsShow then
            local cardIDs = self._gameData:getHandCardIDs(msg.seat)
            if CardLogic.isBackHandCards(cardIDs) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end

        if CF.roomData:getIsFFZ() and (not CF.roomData:isPlayBack()) then
			isOpenHand = false
        end

        if isOpenHand then
            self:moveHeadWithOpenHand(localSeat) --播放头像移动动画
        end
        if not isOpenHand then
            self._playerHeads[localSeat]:hideLeftCardNum()
        end
        local cardCount = self._gameData:getHandCardNum(msg.seat)
        self._playerHeads[localSeat]:setLeftCardNum(cardCount)
    else
        self:moveHeadWithOpenHand(localSeat) --播放头像移动动画
        local cardCount = self._gameData:getHandCardNum(msg.seat)
        self._playerHeads[localSeat]:setLeftCardNum(cardCount)
    end
end

function PlayerView:onHideCardNumAlarm(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if self._playerHeads[localSeat] and self._playerHeads[localSeat].showAlarmAni then
        self._playerHeads[localSeat]:showAlarmAni(false)
    end
end


function PlayerView:onHandCardUpdate(event)
    --有座位号表示只更新一个人手牌
    if event.msg ~= nil and event.msg.seat ~= nil then
        local cardCount = self._gameData:getHandCardNum(event.msg.seat)
        local localSeat = CF.roomData:seatToLocal(event.msg.seat)
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:setLeftCardNum(cardCount)
        end
    else
        for seat = 0, CF.roomData:getMaxPlayer() - 1 do
            local cardIDs = self._gameData:getHandCardIDs(seat)
            if cardIDs ~= nil then
                local localSeat = CF.roomData:seatToLocal(seat)
                local cardCount = self._gameData:getHandCardNum(seat)
                if self._playerHeads[localSeat] then
                    self._playerHeads[localSeat]:setLeftCardNum(cardCount)
                end
            end
        end
    end

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if cardIDs ~= nil then
            local localSeat = CF.roomData:seatToLocal(seat)

            if not CardLogic.isBackHandCards(cardIDs) then
                if CF.roomData:isSixPlayer() then
                    if localSeat == CF.GameDefine.LOCAL_SEAT.TOPMID then
                        self:moveHeadWithOpenHand(CF.GameDefine.LOCAL_SEAT.TOPMID)
                    end
                else
                    if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                        self:moveHeadWithOpenHand(CF.GameDefine.LOCAL_SEAT.TOP)
                    end
                end
            end
        end
    end

end

function PlayerView:onGameWinOrder(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:showWinOrderImg(true, msg.order)
        playerHead:setLeftCardNum(0)
    end
end

function PlayerView:onShowAllPlayerHandCard(event)
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local localSeat = CF.roomData:seatToLocal(seat)
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:hideLeftCardNum()
        end
        
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if CF.roomData:isSixPlayer() and cardIDs ~= nil and not CardLogic.isBackHandCards(cardIDs) then
            if localSeat == CF.GameDefine.LOCAL_SEAT.TOPMID then
                self:moveHeadWithOpenHand(CF.GameDefine.LOCAL_SEAT.TOPMID)
            end
        else
            if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self:moveHeadWithOpenHand(CF.GameDefine.LOCAL_SEAT.TOP)
            end
        end
    end
end

function PlayerView:showSwapSeatSix(firstSeat, secondSeat)
     CF.SysTool.performWithDelayGlobal(function() 
        CF.msgManager:sendWaitSwapSeat()
        if CF.roomData:getIsFFZ() and CF.roomData:isPlayBack()  then
            self:moveHeadWithOpenHand(CF.GameDefine.LOCAL_SEAT.TOPMID)
        end
    end, 1.0)
end

function PlayerView:onPlayerSeatChanged(event)
    local msg = event.msg
    if CF.roomData:isSixPlayer() then
        self:showSwapSeatSix(msg.nowseat, msg.otherseat)
        return
    end
    --克隆头像背景面板
    local function cloneAllHeadBG(cloneNodeTable)
        for i = 0, CF.roomData:getChairs() - 1 do
            local localSeat = CF.roomData:seatToLocal(i)
            local headPanel = self._playerHeads[localSeat]
            if headPanel then
                if localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
                    local PlayerHeadView = CF.gameRequire("Modules.Player.HeadNode")
                    local playerHead = PlayerHeadView.new({seatId = i})
                    local headPos = {}
                    headPos.x, headPos.y = headPanel:getPosition()
                    playerHead:setPosition(headPos)
                    local panelPlayerHead = CF.roomData:isSixPlayer() and self["_head_panel_ex_"..localSeat] or self["_head_panel_"..localSeat]
                    if panelPlayerHead then
                        panelPlayerHead:addChild(playerHead)
                    end
                    cloneNodeTable[localSeat] = playerHead
                end
            end
        end
        return cloneNodeTable
    end

    --控制 除自己外的 头像背景面板的显示
    local function showHeadBG(bShow)
        for i = 0, CF.roomData:getChairs() - 1 do
            local localSeat = CF.roomData:seatToLocal(i)
            local headPanels = self._playerHeads[localSeat]
            if headPanels then
                if localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
                    local headPanel = self._playerHeads[localSeat]
                    if headPanel then
                        headPanel:setVisible(bShow)
                    end
                    self._playerHeadersHide[localSeat] = not bShow
                end
            end
        end
    end

    --获取两座位的相对坐标
    local function getRelativeEndPos(sourceNode, targetNode)
        local targetPosWorld = targetNode:getParent():convertToWorldSpace(cc.p(0, 0))
        local targetPosToSourceNode = sourceNode:getParent():convertToNodeSpace(targetPosWorld)
        local endPos = {}
        endPos.x = targetPosToSourceNode.x + targetNode:getPositionX()
        endPos.y = targetPosToSourceNode.y + targetNode:getPositionY()
        return endPos
    end

    --座位交换结束
    local function endMoveSeat(cloneNodeTable)
        for i = 0, CF.roomData:getChairs() - 1 do
            local localSeat = CF.roomData:seatToLocal(i)
            if cloneNodeTable[localSeat] then
                cloneNodeTable[localSeat]:removeSelf()
            end
        end
        CF.game:getModule("Player"):endMoveSeat()
        showHeadBG(true)
        if CF.roomData:isPlayBack() then
            self:moveHeadWithOpenHand(CF.GameDefine.LOCAL_SEAT.TOP)   
        end
    end

    --左右两座位位移(第二次座位交换)
    local function secondMoveSeatAni(cloneNodeTable, swapSeatOrder)
        if not next(swapSeatOrder) then
            endMoveSeat(cloneNodeTable)
        else
            local firstNodeNum = swapSeatOrder[1][1]
            local firstNode = cloneNodeTable[firstNodeNum]
            local secondNodeNum = swapSeatOrder[1][2]
            local secondNode = cloneNodeTable[secondNodeNum]

            local moveDis = -200
            local firstEndPos = getRelativeEndPos(firstNode, secondNode)
            local firstMoveOut = cc.MoveBy:create(0.5, cc.p(moveDis, 0))
            local firstChangePosition =
                cc.CallFunc:create(
                function()
                    firstNode:setPosition(firstEndPos.x - moveDis, firstEndPos.y)
                end
            )
            local firstMoveIn = cc.MoveBy:create(0.5, cc.p(moveDis, 0))
            local firstMoveAction = cc.Sequence:create(firstMoveOut, firstChangePosition, firstMoveIn)
            firstNode:runAction(firstMoveAction)

            local secondEndPos = getRelativeEndPos(secondNode, firstNode)
            local secondMoveOut = cc.MoveBy:create(0.5, cc.p(-moveDis, 0))
            local secondChangePosition =
                cc.CallFunc:create(
                function()
                    secondNode:setPosition(secondEndPos.x + moveDis, secondEndPos.y)
                end
            )
            local secondMoveIn = cc.MoveBy:create(0.5, cc.p(-moveDis, 0))
            local secondMoveAction = cc.Sequence:create(secondMoveOut, secondChangePosition, secondMoveIn)
            if endMoveSeat then
                local endFunction =
                    cc.CallFunc:create(
                    function()
                        endMoveSeat(cloneNodeTable)
                    end
                )
                secondMoveAction = cc.Sequence:create(secondMoveOut, secondChangePosition, secondMoveIn, endFunction)
            end
            secondNode:runAction(secondMoveAction)
        end
    end

    --上左 或 上右 座位位移(第一次座位交换)
    local function firstMoveSeatAni(cloneNodeTable, swapSeatOrder)
        if next(swapSeatOrder) then
            local firstNodeNum = swapSeatOrder[1][1]
            local firstNode = cloneNodeTable[firstNodeNum]
            local secondNodeNum = swapSeatOrder[1][2]
            local secondNode = cloneNodeTable[secondNodeNum]

            local firstEndPos = getRelativeEndPos(firstNode, secondNode)
            local firstMove = cc.MoveTo:create(0.5, firstEndPos)
            local firstMoveAction = firstMove
            firstNode:runAction(firstMoveAction)

            local secondEndPos = getRelativeEndPos(secondNode, firstNode)
            local secondMove = cc.MoveTo:create(0.5, secondEndPos)
            local secondMoveAction = secondMove
            if secondMoveSeatAni then
                local functionCall =
                    cc.CallFunc:create(
                    function()
                        table.remove(swapSeatOrder, 1)
                        secondMoveSeatAni(cloneNodeTable, swapSeatOrder)
                    end
                )
                secondMoveAction = cc.Sequence:create(secondMove, functionCall)
            end
            secondNode:runAction(secondMoveAction)
        end
    end

    --获取换位顺序
    local function getSwapSeatOrder(firstSeat, secondSeat)
        local swapSeatOrder = {}
        if firstSeat % 2 == secondSeat % 2 then
            return swapSeatOrder
        end

        local needSecondSwap = false
        if firstSeat == CF.roomData:getSelfSeat() or secondSeat == CF.roomData:getSelfSeat() then
            needSecondSwap = true
        end

        if needSecondSwap then
            local oneOrder = {}
            oneOrder[1] = CF.roomData:seatToLocal((firstSeat + 2) % CF.roomData:getChairs())
            oneOrder[2] = CF.roomData:seatToLocal((secondSeat + 2) % CF.roomData:getChairs())
            table.insert(swapSeatOrder, clone(oneOrder))

            local list = {1, 2, 3, 4}
            local first = oneOrder[1]
            local second = oneOrder[2]
            list[first], list[second] = second, first

            oneOrder = {}
            oneOrder[1] = list[1]
            oneOrder[2] = list[3]
            table.insert(swapSeatOrder, clone(oneOrder))
        else
            local oneOrder = {}
            oneOrder[1] = CF.roomData:seatToLocal(firstSeat)
            oneOrder[2] = CF.roomData:seatToLocal(secondSeat)
            table.insert(swapSeatOrder, clone(oneOrder))
        end
        return swapSeatOrder
    end

    local swapSeatOrder = getSwapSeatOrder(msg.nowseat, msg.otherseat)
    local cloneHeadBG = {}
    cloneHeadBG = cloneAllHeadBG(cloneHeadBG)
    showHeadBG(false)
    firstMoveSeatAni(cloneHeadBG, swapSeatOrder)
end

function PlayerView:onClearLeftTimeTip(event)
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        if self._playerHeads[localSeat] then
            self._playerHeads[localSeat]:clearGuideTip()
        end
    end
end

function PlayerView:onShowLeftTimeTip(event)
    local localSeat = event.msg.localSeat
    if self._playerHeads[localSeat] then
        self._playerHeads[localSeat]:showGuideTip()
    end
end

function PlayerView:moveHeadWithOpenHand(localSeat)
    local playerHead = self._playerHeads[localSeat]
    local headOpenCardPos = CF.roomData:isSixPlayer() and self["_headOpenCardPosEx"..localSeat] or self["_headOpenCardPos"..localSeat]
    if not playerHead or not headOpenCardPos then
        return
    end
    local moveToPos = {}
    moveToPos.x, moveToPos.y = headOpenCardPos:getPosition()

    if CF.roomData:isSixPlayer() then
        if localSeat == CF.GameDefine.LOCAL_SEAT.TOPMID then
            moveToPos.x = moveToPos.x
        end
    else
        if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            moveToPos.x = moveToPos.x - 80
        end
    end

    playerHead:stopAllActions()
    playerHead:moveLeftCardNumOpenCard(true)
    playerHead:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(1, moveToPos)))
    self._playerHandCardOpen[localSeat] = true
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        local panelPlayerHead = CF.roomData:isSixPlayer() and self["_head_panel_ex_"..localSeat] or self["_head_panel_"..localSeat]
        local caishenAni = panelPlayerHead:getChildByName("PROP_GUIDE_ANI")
        if caishenAni then
            caishenAni:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(1, moveToPos)))
        end
    end
end

function PlayerView:resetHeadPos(localSeat)
    local playerHead = self._playerHeads[localSeat]
    local headPos = CF.roomData:isSixPlayer() and self["_headPosEx"..localSeat] or self["_headPos"..localSeat]
    if not playerHead or not headPos then
        return
    end
    local pos = {}
    pos.x,pos.y = headPos:getPosition()
    playerHead:stopAllActions()
    playerHead:setPosition(pos)
    playerHead:moveLeftCardNumOpenCard(false)
end

function PlayerView:showCaiShenAni(isgameend)
    if not CF.roomData:judgeSupportThrowProp() then
        return
    end
    isgameend = isgameend or false
    local showGuide = false
    local localSeat = CF.GameDefine.LOCAL_SEAT.BOTTOM
    if not self._playerHeads[localSeat] then
        return 
    end
    local playCount = CF.roomData:getPlayCount()
    local bStart = CF.roomData:isStartGame()
    if isgameend and CF.roomData:isGoldRoom() then
        showGuide = true
    end
    if (not bStart and (not (playCount > 0) or CF.roomData:isGoldRoom())) then
        showGuide = true
    end

    local panelPlayerHead = CF.roomData:isSixPlayer() and self["_head_panel_ex_"..localSeat] or self["_head_panel_"..localSeat]
    if showGuide then
        -- local selfSeat = CF.roomData:getSelfSeat()
        -- local GuideUILogic = CF.gameRequire("Modules.Guide.UILogic")
        -- local caishenAni = GuideUILogic.showCaiShenAni(panelPlayerHead,selfSeat)
        -- local offSetX, offSetY = 20, 50
        -- caishenAni:setPosition(cc.p(self._playerHeads[localSeat]:getPositionX() + offSetX,self._playerHeads[localSeat]:getPositionY() + offSetY))
    end
end

function PlayerView:showReadyIcon(localSeat, bShow)
    local isSixPlayer = CF.roomData:isSixPlayer()
    if isSixPlayer then
        if self["_readySpEx_" .. localSeat] then
            self["_readySpEx_" .. localSeat]:setVisible(bShow)
        end
    else
        if self["_readySp_" .. localSeat] then
            self["_readySp_" .. localSeat]:setVisible(bShow)
        end
    end
end

function PlayerView:onGameStart(event)
    self:initReadyFlagUI()
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        self._playerHandCardOpen[localSeat] = false
    end
end

function PlayerView:onEventTableInfo(event)
    self:initReadyFlagUI()
end

return PlayerView   �]  