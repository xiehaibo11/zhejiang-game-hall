--关于玩家吃碰杠等牌权的ui操作
local UIMahComb = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahComb")
local UIMahLayerAction = {}

function UIMahLayerAction.extend(object)
    ---------------------------------------------------------
    --@brief 展示所有的吃碰杠牌权
    --@param 所有的吃碰杠类型
    --@param 是需要展示，还是需要隐藏
    --@return nil
    ---------------------------------------------------------
    function object:showAction(actionTypes, isShow)
        if self._actionBtnPos == nil then
            self._actionBtnPos = {}
            for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                self._actionBtnPos[i] = {x = self["_actionButton" .. i]:getPositionX(), y = self["_actionButton" .. i]:getPositionY()}
            end
        end
        actionTypes = actionTypes or {}
        if #actionTypes > 0 then
            --初始化
            for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                self["_actionButton" .. i]:setVisible(false)
            end
            for i = 1, #actionTypes do
                if self["_actionButton" .. actionTypes[i]] then
                    self["_actionButton" .. actionTypes[i]]:setPosition(cc.p(self._actionBtnPos[i].x, self._actionBtnPos[i].y))
                    self["_actionButton" .. actionTypes[i]]:setVisible(true)
                    if actionTypes[i] == NG.GAME.GameDefine.ACTION.HU then
                        local x = self["_actionButton" .. actionTypes[i]]:getContentSize().width
                        local y = self["_actionButton" .. actionTypes[i]]:getContentSize().height
                        NG.UITool.playJsonAnimation(self["_actionButton" .. actionTypes[i]], "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
                    end
                end
            end
        end
        self._actionMovePanel:stopAllActions()
        if isShow then
            if self._showActionPoint then
                if #actionTypes > 0 then
                    self._actionHideTargetIndex = #actionTypes
                else
                    self._actionHideTargetIndex = 0
                end
                if self["_hideActionPoint"..self._actionHideTargetIndex] then
                    local x = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionX()
                    local y = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionY()
                    self._actionMovePanel:setPosition(x, y)
                    local outTime = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
                    self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                        cc.MoveTo:create(outTime, cc.p(self._showActionPoint:getPositionX(),self._showActionPoint:getPositionY()))))
                end
            end
        else
            if self._actionButton5 then
                local childNode = self._actionButton5:getChildByName("hu_ani")
                if childNode then
                    childNode:removeSelf()
                end
            end
            self._actionHideTargetIndex = self._actionHideTargetIndex or 0
            if self["_hideActionPoint"..self._actionHideTargetIndex] then
                local time = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
                local x = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionX()
                local y = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionY()
                self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                    cc.MoveTo:create(time, cc.p(x, y))))
            end
        end
    end

    ---------------------------------------------------------
    --@brief 展示非自己玩家所有的吃碰杠牌权
    --@param 需要展示牌权的玩家客户端位置
    --@param 所有的吃碰杠类型
    --@param 是需要展示，还是需要隐藏
    --@return nil
    ---------------------------------------------------------
    function object:showOthersAction(localSeat, actionTypes, isShow)
        if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM or localSeat < NG.GAME.GameDefine.LOCAL_SEAT.LEFT or localSeat > NG.GAME.GameDefine.LOCAL_SEAT.TOP then
            return
        end
        if not self._actionPanelOther[localSeat] then 
            return
        end
	    if not self._actionBtnPosOtherTmp[localSeat] then
            return
        end

        self._actionPanelOther[localSeat]:setVisible(isShow)

        actionTypes = actionTypes or {}
        if #actionTypes > 0 then
            --初始化
            for i = NG.GAME.GameDefine.ACTION.PASS, NG.GAME.GameDefine.ACTION.TING do
                local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_BTN_" .. i)
                if actionBtn then
                    actionBtn:setVisible(false) --先全部隐藏
                end
            end
            for i = 1, #actionTypes do
                local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_BTN_" .. actionTypes[i])
                if actionBtn then
                    actionBtn:setPosition(cc.p(self._actionBtnPosOtherTmp[localSeat][i].x, self._actionBtnPosOtherTmp[localSeat][i].y))
                    actionBtn:setVisible(true)
                    if actionTypes[i] == NG.GAME.GameDefine.ACTION.HU then
                        local x = actionBtn:getContentSize().width
                        local y = actionBtn:getContentSize().height
                        NG.UITool.playJsonAnimation(actionBtn, "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
                    end
                end
            end
        end
        local actionOutTargetIndex = 0
        local backPanel = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_MOVE_PANEL")
        if backPanel then
            backPanel:stopAllActions()
            if isShow then --是否显示
                local nodeIn = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_IN_TARGET_POS")
                if nodeIn then
                    if #actionTypes > 0 then
                        actionOutTargetIndex = #actionTypes
                    end
                    local nodeOut = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_OUT_TARGET_POS_" .. actionOutTargetIndex)
                    if nodeOut then
                        backPanel:setPosition(nodeOut:getPositionX(), nodeOut:getPositionY())
                    end
                    --进来（显示）
                    backPanel:setPosition(cc.p(nodeIn:getPositionX(),nodeIn:getPositionY()))  
                end
            else
                local nodeOut = ccui.Helper:seekWidgetByName(self._actionPanelOther[localSeat],"_KW_ACTION_OUT_TARGET_POS_" .. actionOutTargetIndex)
                if nodeOut then
                    --出去（消失）
                    backPanel:setPosition(cc.p(nodeOut:getPositionX(),nodeOut:getPositionY())) 
                end
            end
        end
    end

    function object:showBtnOperatePlayback(localSeat)
	    local actionPanel = localSeat == NG.GAME.roomTableData:getSelfLocalSeat() and self._actionPanel or self._actionPanelOther[localSeat]
	    if not actionPanel then return end
	    local actionBtn = ccui.Helper:seekWidgetByName(actionPanel,"_KW_ACTION_BTN_1")
        if actionBtn then
		    local orignScale = actionBtn:getScale()
		    local actionScale1 = cc.EaseQuarticActionOut:create(cc.ScaleTo:create(0.2,orignScale * 0.6))
		    local action = cc.Sequence:create(
				    actionScale1,
				    cc.DelayTime:create(0.15),
				    cc.CallFunc:create(function()
					    actionBtn:setScale(orignScale)
					    if localSeat == NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM then
						    self:showAction({},false)
					    else
						    self:showOthersAction(localSeat,{},false)
					    end

				    end)
		    )

		    actionBtn:runAction(action)
	    end
    end

    ---------------------------------------------------------
    --@brief 获取所有关于Action的按钮个数
    --@return 个数
    ---------------------------------------------------------
    function object:getActionButtonCount()
        local sum = 1
        while true do
            if self["_actionButton"..sum] == nil then
                break
            end
            sum = sum + 1
        end
        return sum - 1
    end

    ---------------------------------------------------------
    --@brief 展示所有的可以吃碰杠组成的牌型
    --@param 所有的可以形成的combs
    --@param 是需要展示，还是需要隐藏
    --@return nil
    ---------------------------------------------------------
    function object:showActionCombs(combs, isShow)
        self:cleanActionCombPanel()
        self._mahActionCombsData = clone(combs) or {}
        self:createActionCombPanel(combs)
        if self._actionCombsMovePanel then
            self._actionCombsMovePanel:stopAllActions()
            if isShow then
                if self._showActionCombsPoint then
                    self._actionCombsHideTargetIndex = #combs
                    if self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex] then
                        local x = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionX()
                        local y = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionY()
                        self._actionCombsMovePanel:setPosition(x, y)
                    end
                    local time = 0.28 - (self:getMaxActionCombsCount() - self._actionCombsHideTargetIndex) * 0.04
                    self._actionCombsMovePanel:runAction(cc.EaseQuarticActionOut:create(
                        cc.MoveTo:create(time, cc.p(self._showActionCombsPoint:getPositionX(),self._showActionCombsPoint:getPositionY()))))
                end
            else
                self._actionCombsHideTargetIndex = self._actionCombsHideTargetIndex or 0
                local time = 0.28 - (self:getMaxActionCombsCount() - self._actionCombsHideTargetIndex) * 0.04
                if self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex] then
                    local x = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionX()
                    local y = self["_hideActionCombsPoint"..self._actionCombsHideTargetIndex]:getPositionY()
                    self._actionCombsMovePanel:runAction(cc.EaseQuarticActionOut:create(
                        cc.MoveTo:create(time, cc.p(x, y))))
                end
            end
        end
    end

    ---------------------------------------------------------
    --@brief 创建所有的可以吃碰杠组成的牌型
    --@param 所有的可以形成的combs
    --@return nil
    ---------------------------------------------------------
    function object:createActionComb(combMahValues)
        local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
        local combData = {}
        combData.mahValues = combMahValues
        local comb = UIMahComb.new(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM, combData, config)
        comb:setAnchorPoint(display.LEFT_BOTTOM)
        comb:setScale(0.7)
        comb:setTouchEnabled(true)
        comb:addTouchEventListener(handler(self,self.onTouchEventActionComb))
        return comb
    end

    local combPanelMargin = 25
    local combDisX = 20
    local combDisY = 20
    function object:createActionCombPanel(combs)
        self:cleanActionCombPanel()
        if #combs <= 0 then
            return
        end

        self._combMahsData = combs

        local totalCombsCount = #combs
        local singleLineMaxCount = self:getMaxActionCombsCount()
        local combSize = cc.size(0,0)
        for combIndex, combMahValues in ipairs(combs) do
            local comb = self:createActionComb(combMahValues)
            comb:setTag(combIndex)
            comb:setLocalZOrder(totalCombsCount - combIndex)
            comb:setContentSize(comb:getContentSize().width, comb:getRealHeight())
            if combSize.width == 0 or combSize.height == 0 then
                combSize.width = comb:getBoundingBox().width
                combSize.height = comb:getBoundingBox().height
            end
            self._actionCombsBack:addChild(comb)

            local lineIndex = math.ceil(combIndex / singleLineMaxCount)
            local combIndexInThisLine = combIndex % singleLineMaxCount
            if combIndexInThisLine == 0 then
                combIndexInThisLine = singleLineMaxCount
            end
            comb:setPositionX(combPanelMargin + (combIndexInThisLine - 1) * (combSize.width + combDisX))
            comb:setPositionY(combPanelMargin + (lineIndex - 1) * (combSize.height + combDisY))
        end

        local totalLineCount = math.ceil(totalCombsCount / singleLineMaxCount)
        local panelSize = cc.size(0,0)
        if totalCombsCount > singleLineMaxCount then
            panelSize.width = combPanelMargin * 2 + combSize.width * singleLineMaxCount + combDisX * (singleLineMaxCount - 1)
        else
            panelSize.width = combPanelMargin * 2 + combSize.width * totalCombsCount + combDisX * (totalCombsCount - 1)
        end
        panelSize.height = combPanelMargin * 2 + combSize.height * totalLineCount + combDisY * (totalLineCount - 1)
        self._actionCombsBack:setContentSize(panelSize)
    end

    ---------------------------------------------------------
    --@brief 单行最大comb数量
    --@return 4
    ---------------------------------------------------------
    function object:getMaxActionCombsCount()
        return 4
    end

    ---------------------------------------------------------
    --@brief 清除所有的麻将子
    --@return 4
    ---------------------------------------------------------
    function object:cleanActionCombPanel()
        self._combMahsData = {}
        self._actionCombsBack:removeAllChildren()
    end

    ---------------------------------------------------------
    --@brief actionComb点击事件
    --@return nil
    ---------------------------------------------------------
    function object:onTouchEventActionComb(send, eventType)
        local index = send:getTag()
        if not self._combMahsData[index] then
            print("出错了！！！")
            return
        end
        local gameData = NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
        gameData:setPlayPower(false)
        local tmpCombs = self._combMahsData[index]
        local tmpFlag = 0
        local tmpInMahs = {}
        local tmpFromSeat = NG.GAME.roomTableData:getMaxPlayer()
        if tmpCombs == nil then
            return 
        end
        if #tmpCombs == 3 then
            tmpFlag = NG.GAME.GameDefine.COMB_TYPE.CHOW
            tmpInMahs = {gameData:getLastPlayMah()}
            tmpFromSeat = gameData:getLastPlaySeat()
        elseif #tmpCombs == 4 then
            if tmpCombs[1] == NG.GAME.GameDefine.MAH_VALUE.BACK then
                for i = 1,#tmpCombs do
                    tmpCombs[i] = tmpCombs[4]
                end
                tmpInMahs = {}
                tmpFlag = NG.GAME.GameDefine.COMB_TYPE.CONCEALED_KONG
                tmpFromSeat = NG.GAME.roomTableData:getSelfSeat()
            else
                for i = 1, 3 do
                    tmpInMahs[i] = tmpCombs[1]
                end
                tmpFlag = NG.GAME.GameDefine.COMB_TYPE.FILL_KONG
                local selfSeat = NG.GAME.roomTableData:getSelfSeat()
                local selfCombs = self:getGameData():getAllCombMahData(selfSeat)
                for i = 1,#selfCombs do
                    if selfCombs[i].nInMahs[1] == tmpCombs[1] then
                        tmpFromSeat = selfCombs[i].nFromSeat
                    end
                end
            end
        end
    
        local msgCombs = {}
        msgCombs.mahs = tmpCombs
        msgCombs.ins = tmpInMahs
        msgCombs.from = tmpFromSeat
        msgCombs.flag = tmpFlag
        NG.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
        self:showActionCombs({}, false)
    end
end

return UIMahLayerAction