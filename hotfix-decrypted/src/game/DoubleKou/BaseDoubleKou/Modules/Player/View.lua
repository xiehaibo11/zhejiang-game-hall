local PlayerView = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")
local CardLogic = CF.gameRequire("Logic.CardLogic")

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
    eventTable[#eventTable + 1] = {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "updatePlayerHeadsPos"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer")._gameData, eventKeyName = "EVENT_HANDCARD_UPDATE", callBack = "onHandCardUpdate"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer")._gameData, eventKeyName = "EVENT_GONGXIAN_CHANGED", callBack = "onGameGongXianChanged"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_WIN_ORDER", callBack = "onGameWinOrder"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ALL_PLAYER_HANDCARDS", callBack = "onShowAllPlayerHandCard"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_SHOW_CHANGE_BTN", callBack = "onGameShowChangeSeatBtn"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer")._gameData, eventKeyName = "EVENT_PLAYER_SEAT_CHANGED", callBack = "onPlayerSeatChanged"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_SHOW_LEFTTIME_TIP", callBack = "onShowLeftTimeTip"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("Player"), eventKeyName = "EVENT_CLEAR_LEFTTIME_TIP", callBack = "onClearLeftTimeTip"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_SHOWWATCHHAND", callBack = "onHandCardChanged"}
    eventTable[#eventTable + 1] = {module = CF.game:getModule("GameLayer")._gameData, eventKeyName = "EVENT_GONGXIAN_CHANGED_NEW", callBack = "onGameGongXianChangedNew"}
    return eventTable
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

function PlayerView:getHeadPosByLocalSeat(localSeat)
    local headPos = {}
    if self["_headOpenCardPos" .. localSeat] and self._playerHandCardOpen[localSeat] then
        headPos.x, headPos.y = self["_headOpenCardPos" .. localSeat]:getPosition()
    else
        headPos.x, headPos.y = self["_headPos" .. localSeat]:getPosition()
    end
    return headPos, self._playerHandCardOpen[localSeat]
end

function PlayerView:updatePlayerHeadsPos()
    if not self._playerHandCardOpen then
        self._playerHandCardOpen = {}
    end
    for localSeat = 1, CF.roomData:getMaxPlayer() do
        if localSeat ~= CF.roomData:getSelfLocalSeat() then
            self._playerHandCardOpen[localSeat] = false
        end
        if self._playerHeads[localSeat] then
            local headPos = self:getHeadPosByLocalSeat(localSeat)
            self._playerHeads[localSeat]:setPosition(headPos)
            self._playerHeads[localSeat]:moveLeftCardNumOpenCard(false)
        end
    end
end

function PlayerView:moveHeadWithOpenHand(localSeat)
    local playerHead = self._playerHeads[localSeat]
    local headOpenCardPos = self["_headOpenCardPos" .. localSeat]
    if not playerHead or not headOpenCardPos then
        return
    end
    local moveToPos = {}
    moveToPos.x, moveToPos.y = headOpenCardPos:getPosition()
    playerHead:stopAllActions()
    playerHead:moveLeftCardNumOpenCard(true)
    self._playerHandCardOpen[localSeat] = true

    if localSeat == CF.roomData:getSelfLocalSeat() then
        local panelPlayerHead = self["_head_panel_" .. localSeat]
        local caishenAni = panelPlayerHead:getChildByName("PROP_GUIDE_ANI")
        if caishenAni then
            caishenAni:setPosition(headOpenCardPos:getPosition())
        end
        playerHead:setPosition(headOpenCardPos:getPosition())
    else
        playerHead:runAction(cc.EaseExponentialIn:create(cc.MoveTo:create(10/30, moveToPos)))
    end
end

function PlayerView:resetHeadPos(localSeat)
    local playerHead = self._playerHeads[localSeat]
    local headPos = self["_headPos" .. localSeat]
    if not playerHead or not headPos then
        return
    end
    local pos = {}
    pos.x, pos.y = headPos:getPosition()
    playerHead:stopAllActions()
    playerHead:moveLeftCardNumOpenCard(false)
    playerHead:setPosition(pos)
    self._playerHandCardOpen[localSeat] = false
end

function PlayerView:onHandCardChanged(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    if not self._playerHeads or not self._playerHeads[localSeat] then
        return
    end
    if localSeat ~= CF.roomData:getSelfLocalSeat() then
        local isOpenHand = false
        if msg.bIsShow then
            local cardIDs = self._gameData:getHandCardIDs(msg.seat)
            if CardLogic.isBackHandCards(cardIDs) then
                isOpenHand = false
            else
                isOpenHand = true
            end
        end
        if isOpenHand then
            self:moveHeadWithOpenHand(localSeat) --播放头像移动动画
        else
            self:resetHeadPos(localSeat)
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

function PlayerView:createPlayerHead(seatId)
    local playerHead = PlayerView.super.createPlayerHead(self, seatId)
    local localSeat = CF.roomData:seatToLocal(seatId)
    local headPos, bOpen = self:getHeadPosByLocalSeat(localSeat)
    playerHead:setPosition(headPos)
    if bOpen then
        --如果已经显示牌，将剩余牌图标移动相应位置
        playerHead:moveLeftCardNumOpenCard(true)
    end
    if self._playerHeadersHide[localSeat] then
        --播放换位动画时使用
        playerHead:setVisible(false)
    end
    local cardCount = self._gameData:getHandCardNum(seatId)
    playerHead:setLeftCardNum(cardCount)
    local nowGongXian = self._gameData:getGongXianFen(seatId)
    playerHead:setGongXian(nowGongXian)
    if seatId == CF.roomData:getSelfSeat() and CF.roomData:isNewUI() then
        CF.game:getModule("RoomInfo"):onUpdateGongScore(nowGongXian)
    end
    return playerHead
end

function PlayerView:removePlayerHead(seatId)
    -- local localSeat = CF.roomData:seatToLocal(seatId)
    PlayerView.super.removePlayerHead(self, seatId)
    --TODO
    -- self:stopOutCardClock(localSeat)
end

--隐藏报警动画
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
end

function PlayerView:onGameGongXianChanged(event)
    local msg = event.msg
    local seat = msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    if not self._playerHeads or not self._playerHeads[localSeat] then
        return
    end

    local gongxianChange = msg.changedGong
    local allChangeGong = msg.allChangeGong
    local gameData = self._gameData
    local nowGongXian = gameData:getGongXianFen(seat)
    local winLostData = gameData:getWinLostData()
    if winLostData:getIsNoOutZhaDan() then
        self._playerHeads[localSeat]:setGongXian(nowGongXian)
        return
    end

    local gongMoveDistance = {
        {["x"] = 120, ["y"] = 0},
        {["x"] = 0, ["y"] = 120},
        {["x"] = -120, ["y"] = 0},
        {["x"] = 120, ["y"] = 0}
    }

    local function contrbutionFlyAni(targetWidget, sourceWidget, flyWidget, sourceSeat, gongxianScore)
        if targetWidget == nil then
            return
        end
        if sourceWidget == nil then
            return
        end
        if flyWidget == nil then
            return
        end
        flyWidget:setOpacity(0)
        flyWidget:setVisible(true)
        flyWidget:setString("+" .. gongxianScore)
        local posBeginWorld = sourceWidget:convertToWorldSpace(cc.p(0, 0))
        local posBeginToNode = targetWidget:convertToNodeSpace(posBeginWorld)
        local posEnd = {}
        posEnd.x, posEnd.y = flyWidget:getPosition()
        local posBegin = {}
        posBegin.x = posBeginToNode.x + sourceWidget:getPositionX()
        posBegin.y = posBeginToNode.y + sourceWidget:getPositionY()
        flyWidget:setPosition(posBegin.x, posBegin.y)
        targetWidget:getParent():addChild(flyWidget)
        local delayTimeBeforeMove = cc.DelayTime:create(0.6 + sourceSeat * 0.05)
        local moveOutAction = cc.Spawn:create(cc.EaseIn:create(cc.MoveBy:create(0.2, cc.p(gongMoveDistance[sourceSeat])), 0.3), cc.FadeIn:create(0.2))
        local moveToGongAction = cc.Spawn:create(cc.EaseOut:create(cc.MoveTo:create(0.5, posEnd), 0.3), cc.ScaleTo:create(0.5, 2))
        local moveScaleAction = cc.ScaleTo:create(0.2, 1.5)
        flyWidget:runAction(
            cc.Sequence:create(
                delayTimeBeforeMove,
                moveOutAction,
                moveToGongAction,
                moveScaleAction,
                cc.CallFunc:create(
                    function()
                        flyWidget:removeFromParent(true)
                    end
                )
            )
        )
    end

    local function reduceContributionAni(lostWidget, aniWidget, reduceGong)
        if lostWidget == nil then
            return
        end
        if aniWidget == nil then
            return
        end
        reduceGong = reduceGong or ""
        lostWidget:setVisible(false)
        lostWidget:getParent():addChild(aniWidget)
        aniWidget:runAction(
            cc.Sequence:create(
                cc.ScaleTo:create(0.3, 0.5),
                cc.ScaleTo:create(0.3, 1),
                cc.CallFunc:create(
                    function()
                        lostWidget:setVisible(true)
                        aniWidget:setScale(2, 2)
                        aniWidget:setOpacity(255)
                        aniWidget:setString(reduceGong)
                    end
                ),
                cc.Spawn:create(cc.ScaleTo:create(0.3, 2.5), cc.FadeOut:create(0.3)),
                cc.CallFunc:create(
                    function()
                        aniWidget:removeFromParent(true)
                    end
                )
            )
        )
    end

    --控制动画的播放
    if gongxianChange > 0 then
        local targetContribution = self._playerHeads[localSeat]:getGongXianText()
        for i = 0, CF.roomData:getChairs() - 1 do
            if i ~= seat then
                local localLostSeat = CF.roomData:seatToLocal(i)
                local sourceContribution = nil
                if self._playerHeads and self._playerHeads[localLostSeat] then
                    sourceContribution = self._playerHeads[localLostSeat]:getGongXianText()
                end
                local flyContribution = nil
                if targetContribution then
                    flyContribution = targetContribution:clone()
                end
                local gongxianScore = math.floor(gongxianChange / (CF.roomData:getChairs() - 1))
                if allChangeGong and #allChangeGong > 0 then
                    gongxianScore = math.abs(allChangeGong[i])
                end
                contrbutionFlyAni(targetContribution, sourceContribution, flyContribution, localLostSeat, gongxianScore)
                targetContribution:runAction(
                    cc.Sequence:create(
                        cc.DelayTime:create(1.8),
                        cc.CallFunc:create(
                            function()
                                self._playerHeads[localSeat]:setGongXian(nowGongXian)
                            end
                        )
                    )
                )
            end
        end
    elseif gongxianChange < 0 then
        local lostContribution = self._playerHeads[localSeat]:getGongXianText()
        if lostContribution then
            self._playerHeads[localSeat]:setGongXian(nowGongXian)
            if localSeat == CF.roomData:getSelfLocalSeat() then
                local aniContribution = lostContribution:clone()
                reduceContributionAni(lostContribution, aniContribution, gongxianChange)
            end
        end
    else
        self._playerHeads[localSeat]:setGongXian(nowGongXian)
    end
end

function PlayerView:onGameGongXianChangedNew(event)
    local msg = event.msg
    local seat = msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    if not self._playerHeads or not self._playerHeads[localSeat] then
        return
    end

    local gongxianChange = msg.changedGong
    local allChangeGong = msg.allChangeGong
    local gameData = self._gameData
    local nowGongXian = gameData:getGongXianFen(seat)
    local winLostData = gameData:getWinLostData()
    if winLostData:getIsNoOutZhaDan() then
        self._playerHeads[localSeat]:setGongXian(nowGongXian)
        if seat == CF.roomData:getSelfSeat() then
            CF.game:getModule("RoomInfo"):onUpdateGongScore(nowGongXian)
        end
        return
    end

    local gongMoveDistance = {
        {["x"] = -40, ["y"] = -100},
        {["x"] = -40, ["y"] = 100},
        {["x"] = -70, ["y"] = -100},
        {["x"] = -40, ["y"] = -100}
    }

    local function contrbutionFlyAni(targetWidget, sourceWidget, flyWidget, sourceSeat)
        if targetWidget == nil then
            return
        end
        if sourceWidget == nil then
            return
        end
        if flyWidget == nil then
            return
        end
        local TIME_SCALE = 1.0 / 30
        flyWidget:setVisible(true)
        flyWidget:setAnchorPoint(0.5, 0.5)
        local posBeginWorld = sourceWidget:convertToWorldSpace(cc.p(0, 0))
        local posBeginToNode = targetWidget:convertToNodeSpace(posBeginWorld)
        local posEnd = {}
        posEnd.x, posEnd.y = flyWidget:getPosition()
        local posBegin = {}
        posBegin.x = posBeginToNode.x + sourceWidget:getPositionX()
        posBegin.y = posBeginToNode.y + sourceWidget:getPositionY()
        flyWidget:setPosition(posBegin.x + gongMoveDistance[sourceSeat].x, posBegin.y + gongMoveDistance[sourceSeat].y)
        targetWidget:addChild(flyWidget)
        flyWidget:setScale(0)
        local delayTimeBeforeMove = cc.DelayTime:create(0.6)
        local scaleAction = cc.ScaleTo:create(5 * TIME_SCALE, 1)
        local stayDelayTime = cc.DelayTime:create(13 * TIME_SCALE)
        local moveToGongAction = cc.MoveTo:create(10 * TIME_SCALE, posEnd)
        flyWidget:runAction(
            cc.Sequence:create(
                delayTimeBeforeMove,
                scaleAction,
                stayDelayTime,
                moveToGongAction,
                cc.CallFunc:create(
                    function()
                        flyWidget:removeFromParent(true)
                    end
                )
            )
        )
    end
    -- 减分不播放动画了
    local function reduceContributionAni(lostWidget, aniWidget, reduceGong)
        if lostWidget == nil then
            return
        end
        if aniWidget == nil then
            return
        end
        reduceGong = reduceGong or ""
        lostWidget:setVisible(false)
        lostWidget:getParent():addChild(aniWidget)
        aniWidget:runAction(
            cc.Sequence:create(
                cc.ScaleTo:create(0.3, 0.5),
                cc.ScaleTo:create(0.3, 1),
                cc.CallFunc:create(
                    function()
                        lostWidget:setVisible(true)
                        aniWidget:setScale(2, 2)
                        aniWidget:setOpacity(255)
                        aniWidget:setString(reduceGong)
                    end
                ),
                cc.Spawn:create(cc.ScaleTo:create(0.3, 2.5), cc.FadeOut:create(0.3)),
                cc.CallFunc:create(
                    function()
                        aniWidget:removeFromParent(true)
                    end
                )
            )
        )
    end

    --控制动画的播放
    if gongxianChange > 0 then
        -- local targetContribution = self._playerHeads[localSeat]:getGongXianText()
        local targetContribution = self._playerHeads[localSeat]:getGondXianNewNode()
        if seat == CF.roomData:getSelfSeat() then
            local gameScene = display.getRunningScene()
            local roomInfoView
            if gameScene and gameScene.getViewByName then
                roomInfoView = gameScene:getViewByName("RoomInfoView")
            end
            targetContribution = self._playerHeads[localSeat]:getGongXianText()
            if roomInfoView then
                targetContribution = roomInfoView:getInfoNodeByName("gongScore")
            end
        end
        for i = 0, CF.roomData:getChairs() - 1 do
            if i ~= seat then
                local localLostSeat = CF.roomData:seatToLocal(i)
                local sourceContribution = nil
                if self._playerHeads and self._playerHeads[localLostSeat] then
                    sourceContribution = self._playerHeads[localLostSeat]:getGongXianText()
                end
                local gongxianScore = math.floor(gongxianChange / (CF.roomData:getChairs() - 1))
                if allChangeGong and #allChangeGong > 0 then
                    gongxianScore = math.abs(allChangeGong[i])
                end
                local strScore = "+" .. gongxianScore
                local flyContribution = cc.LabelBMFont:create(strScore, "cocosStudio/DoubleKou/Font/sk/Txt_df-export.fnt")
                contrbutionFlyAni(targetContribution, sourceContribution, flyContribution, localLostSeat, seat)
            else
                local TIME_SCALE = 1.0 / 30
                local scaleAction1 = cc.ScaleTo:create(4 * TIME_SCALE, 1.6)
                local scaleAction2 = cc.ScaleTo:create(4 * TIME_SCALE, 1)
                targetContribution:runAction(
                    cc.Sequence:create(
                        cc.DelayTime:create(1.6),
                        scaleAction1,
                        scaleAction2,
                        cc.CallFunc:create(
                            function()
                                if self._playerHeads[localSeat] and not tolua.isnull(self._playerHeads[localSeat]) then
                                    self._playerHeads[localSeat]:setGongXian(nowGongXian)
                                end
                                if seat == CF.roomData:getSelfSeat() then
                                    CF.game:getModule("RoomInfo"):onUpdateGongScore(nowGongXian)
                                end
                            end
                        )
                    )
                )
            end
        end
    elseif gongxianChange < 0 then
        local lostContribution = self._playerHeads[localSeat]:getGongXianText()
        if lostContribution then
            self._playerHeads[localSeat]:setGongXian(nowGongXian)
            if localSeat == CF.roomData:getSelfLocalSeat() then
                CF.game:getModule("RoomInfo"):onUpdateGongScore(nowGongXian)
                -- local aniContribution = lostContribution:clone()
                -- reduceContributionAni(lostContribution, aniContribution, gongxianChange)
            end
        end
    else
        self._playerHeads[localSeat]:setGongXian(nowGongXian)
        if localSeat == CF.roomData:getSelfLocalSeat() then
            CF.game:getModule("RoomInfo"):onUpdateGongScore(nowGongXian)
        end
    end
end

function PlayerView:onPlayerSeatChanged(event)
    local msg = event.msg
    --获取换位后亮牌位置
    -- local function getOpenCardLocalSeat(firstSeat, secondSeat)
    --     local afterLocalSeat = {1, 2, 3, 4}
    --     local localFirst = CF.roomData:seatToLocal(firstSeat)
    --     local localSecond = CF.roomData:seatToLocal(secondSeat)
    --     if localFirst == CF.roomData:getSelfLocalSeat() or localSecond == CF.roomData:getSelfLocalSeat() then
    --         local notSelfLocal = localFirst
    --         if localFirst == CF.roomData:getSelfLocalSeat() then
    --             notSelfLocal = localSecond
    --         end
    --         afterLocalSeat[4] = (notSelfLocal + 2) % CF.roomData:getMaxPlayer()
    --         afterLocalSeat[(notSelfLocal + 2) % CF.roomData:getMaxPlayer()] = notSelfLocal
    --         afterLocalSeat[notSelfLocal] = 4
    --     else
    --         afterLocalSeat[localFirst] = localSecond
    --         afterLocalSeat[localSecond] = localFirst
    --     end

    --     local bigCardLocalSeat
    --     local smallCardLocalSeat = 0
    --     for k, v in ipairs(afterLocalSeat) do
    --         if v == localFirst then
    --             smallCardLocalSeat = k
    --         end
    --     end
    --     local smallSeat = CF.roomData:localToSeat(smallCardLocalSeat)
    --     bigCardLocalSeat = CF.roomData:seatToLocal((smallSeat + 2) % CF.roomData:getMaxPlayer())
    --     return bigCardLocalSeat, smallCardLocalSeat
    -- end

    --克隆头像背景面板
    local function cloneAllHeadBG(cloneNodeTable)
        for i = 0, CF.roomData:getChairs() - 1 do
            local localSeat = CF.roomData:seatToLocal(i)
            local headPanel = self._playerHeads[localSeat]
            if headPanel then
                if localSeat ~= CF.roomData:getSelfLocalSeat() then
                    local PlayerHeadView = CF.gameRequire("Modules.Player.HeadNode")
                    local playerHead = PlayerHeadView.new({seatId = i})
                    local headPos = {}
                    headPos.x, headPos.y = headPanel:getPosition()
                    playerHead:setPosition(headPos)
                    
                    self["_head_panel_" .. (localSeat)]:addChild(playerHead)
                    cloneNodeTable[localSeat] = playerHead
                    local addMultipleType = CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE
                    cloneNodeTable[localSeat]:showAddMultiple(addMultipleType)
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
                if localSeat ~= CF.roomData:getSelfLocalSeat() then
                    local headPanel = self._playerHeads[localSeat]
                    headPanel:setVisible(bShow)
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

    -- local bigOpenCardLocalSeat, smallOpenCardLocalSeat = getOpenCardLocalSeat(msg.otherseat, msg.nowseat)
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

        --##重发位置
        -- self:changePlayerAmapMsg()
    end

    local function refreshAddMultiple()
        for i = 0, CF.roomData:getChairs() - 1 do
            local localSeat = CF.roomData:seatToLocal(i)
            local addMultipleType = CF.game:getModule("AddMultiple"):getAddMultipleType(i)
            local headPanels = self._playerHeads[localSeat]
            if headPanels then 
                headPanels:showAddMultiple(addMultipleType)
            end 
        end
    end 

    --左右两座位位移(第二次座位交换)
    local function secondMoveSeatAni(cloneNodeTable, swapSeatOrder)
        if not next(swapSeatOrder) then
            endMoveSeat(cloneNodeTable)
            refreshAddMultiple()
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
                        refreshAddMultiple()
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
            for i = 0, CF.roomData:getChairs() - 1 do
                local localSeat = CF.roomData:seatToLocal(i)
                local addMultipleType = CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE
                local headPanels = self._playerHeads[localSeat]
                if headPanels then 
                    headPanels:showAddMultiple(addMultipleType)
                end 
            end
            local firstNodeNum = swapSeatOrder[1][1]
            local firstNode = cloneNodeTable[firstNodeNum]
            local secondNodeNum = swapSeatOrder[1][2]
            local secondNode = cloneNodeTable[secondNodeNum]
            if not firstNode or not secondNode then
                if endMoveSeat then
                    endMoveSeat(cloneNodeTable)
                    refreshAddMultiple()
                end
                return
            end

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

function PlayerView:onGameWinOrder(event)
    local msg = event.msg
    local localSeat = CF.roomData:seatToLocal(msg.seat)
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:showWinOrderImg(true, msg.order)
        playerHead:setLeftCardNum(0)
    end
    self._gameData:setShowWinOrder(localSeat, msg.order)
end

function PlayerView:onShowAllPlayerHandCard(event)
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        --隐藏剩余牌数
        local localSeat = CF.roomData:seatToLocal(seat)
        --显示手牌
        local cardIDs = self._gameData:getHandCardIDs(seat)
        if cardIDs ~= nil then
            if not CardLogic.isBackHandCards(cardIDs) then
                self:moveHeadWithOpenHand(localSeat)
            --播放头像移动动画
            end
        end
    end
end

--续桌
function PlayerView:onGameContinue(event)
    local msg = event.msg
    if msg.bSuccess then
        self:updatePlayerHeadsPos()
    end
end

function PlayerView:onGameShowChangeSeatBtn(event)
    local msg = event.msg
    for _, playerHead in pairs(self._playerHeads) do
        playerHead:showSwapSeatBtn(msg.bShow)
    end
end

function PlayerView:clearPlayerHead(localSeat) 
    local playerHead = self._playerHeads[localSeat]
    if playerHead then
        playerHead:setLeftCardNum(0)    --剩余牌数清零
        playerHead:showWinOrderImg(false)
        playerHead:setGongXian(0)
        CF.game:getModule("RoomInfo"):onUpdateGongScore(0)
    end
end

return PlayerView
   ��  