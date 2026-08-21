local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local UIMahLayer = CF.gameClass("UIMahLayer2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

local ActionBtnOffsetY = 240

local NodeNameArr2 = {
    HandMah2 = "KW_HAND_MAH_DOUBLE",
    FlowerMah2 = "KW_FLOWER_DOUBLE"
}

function UIMahLayer:getCSBPath()
    return "cocosStudio/MahjongNew/MahLayer/CSB/TaiZhouWaHua/MahjongLayer.csb"
end

function UIMahLayer:getBindingInfo()
    local bindingInfo = UIMahLayer.super.getBindingInfo(self)
    bindingInfo["_KW_MAH_SURPLUS_IMG"] = { varName = "_mahsSurPlusNode"}
    return bindingInfo
end

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.settingData, eventKeyName = "EVENT_SWITCH_LINE_TYPE_EVENT", callBack = "onEventSwitchLine"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_POWER_MAH", callBack = "onEventShowPowerMah"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_SONG_ZHANG", callBack = "onEventShowSongZhang"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_RESULT", callBack = "onWinlostResult"}
    return proxyEvents
end

function UIMahLayer:ctor(param, rootNode)
    param = param or {}
    UIMahLayer.super.ctor(self,param)
    self._handAreas_2 = nil
    self._flowerAreas_2 = nil
end

function UIMahLayer:initView()
    UIMahLayer.super.initView(self)
    self:onUpdateSwitchLine()
    local handAreaRootNode1 = self:_getHandAreaRootNode(CF.GameDefine.LOCAL_SEAT.LEFT)
    if handAreaRootNode1 then
        handAreaRootNode1:setPositionX(handAreaRootNode1:getPositionX() + 20)
    end
    local handAreaRootNode3 = self:_getHandAreaRootNode(CF.GameDefine.LOCAL_SEAT.RIGHT)
    if handAreaRootNode3 then
        handAreaRootNode3:setPositionX(handAreaRootNode3:getPositionX() - 20)
    end
end

function UIMahLayer:showActionCombs()

end

function UIMahLayer:onEventSetOpenMah(event)

end

function UIMahLayer:_getHandAreaScale(localSeat)
    local handAreaScale = UIMahConfig.HandAreaLayout[localSeat].HandAreaScale21
    return handAreaScale
end

function UIMahLayer:_getHandAreaScale2(localSeat)
    local handAreaScale = UIMahConfig.HandAreaLayout[localSeat].HandAreaScale
    return handAreaScale
end

function UIMahLayer:_getFlowerAreaScale(localSeat)
    local flowerAreaScale = UIMahConfig.FlowerAreaLayout[localSeat].MahScale
    return flowerAreaScale
end

function UIMahLayer:_getHandArea(localSeat)
    if not MahLogic.checkLocalSeat(localSeat) then
        return nil
    end
    if not self._handAreas[localSeat] then
        local newHandMahArea
        if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            newHandMahArea = self:_createTouchHandArea(localSeat)
            if newHandMahArea then
                -- 添加出牌回调
                newHandMahArea:addPlayMahCallBack(handler(self, self._onPlayMah))
                -- 添加选中牌回调
                newHandMahArea:addSelectedMahCallBack(handler(self, self._onSelectedMah))
            end
        else
            newHandMahArea = self:_createHandArea(localSeat)
        end

        if newHandMahArea then
            newHandMahArea:setMaxHandMahCount(CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE)
            if localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
                newHandMahArea:setMaxHandMahCount(CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN)
            end
            newHandMahArea:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
            self:_setAreaJokerData(newHandMahArea)

            local handAreaNode = self:_getHandAreaRootNode(localSeat)
            if handAreaNode then
                handAreaNode:addChild(newHandMahArea)
            end
        end
        self._handAreas[localSeat] = newHandMahArea

        if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            local newHandMahArea_2 = self:_createTouchHandArea(localSeat)
            if newHandMahArea_2 then
                newHandMahArea_2:setMaxHandMahCount(CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN)
                newHandMahArea_2:setGetCursorFunc(handler(self, self._getLastOutMahCursor))
                newHandMahArea_2:addPlayMahCallBack(handler(self, self._onPlayMah))
                newHandMahArea_2:addSelectedMahCallBack(handler(self, self._onSelectedMah))
                local handAreaNode2 = self:_getHandAreaRootNode2(localSeat)
                if handAreaNode2 then
                    handAreaNode2:addChild(newHandMahArea_2)
                end
                local handAreaScale = self:_getHandAreaScale2(localSeat)
                newHandMahArea_2:setScale(handAreaScale)
                self._handAreas_2 = newHandMahArea_2
            end
        end
    end

    local handAreaScale = self:_getHandAreaScale(localSeat)
    self._handAreas[localSeat]:setScale(handAreaScale)
    return self._handAreas[localSeat]
end

function UIMahLayer:_getFlowerArea(localSeat)
    if not MahLogic.checkLocalSeat(localSeat) then
        return nil
    end
    if not self._flowerAreas[localSeat] then
        local newFlowerMahArea = self:_createFlowerArea(localSeat)
        if newFlowerMahArea then
            local flowerAreaNode = self:_getFlowerAreaRootNode(localSeat)
            if flowerAreaNode then
                flowerAreaNode:addChild(newFlowerMahArea)
            end
            self._flowerAreas[localSeat] = newFlowerMahArea
            self:_updateBottomFlowerAreaPosition()
        end
        if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            local newFlowerMahArea_2 = self:_createFlowerArea(localSeat)
            if newFlowerMahArea_2 then
                newFlowerMahArea_2:setScale(UIMahConfig.FlowerMahScaleSize)
                newFlowerMahArea_2:setMaxFlowerMahCount(CF.GameDefine.MAX_FLOWER_COUNT_TYPE.FOUR)
                local flowerAreaNode2 = self:_getFlowerAreaRootNode2(localSeat)
                if flowerAreaNode2 then
                    flowerAreaNode2:addChild(newFlowerMahArea_2)
                end
                self._flowerAreas_2 = newFlowerMahArea_2
                self:_updateBottomFlower2AreaPosition()
            end
        end
    end
    local flowerAreaScale = self:_getFlowerAreaScale(localSeat)
    self._flowerAreas[localSeat]:setScale(flowerAreaScale)
    return self._flowerAreas[localSeat]
end

function UIMahLayer:_getHandAreaRootNode2(localSeat)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        if self._selfHandMahArea then
            return self._selfHandMahArea:getChildByName(NodeNameArr2.HandMah2)
        end
    end
    return nil
end

function UIMahLayer:_getFlowerAreaRootNode2(localSeat)
    if self["_KW_ADAPT_MAH_"..localSeat] then
        return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr2.FlowerMah2)
    end
    return nil
end

function UIMahLayer:_updateBottomFlower2AreaPosition()
    local flowerArea = self._flowerAreas_2
    if not flowerArea then
        return
    end
    local addY = 0
    local maxAddY = 25
    local selfHandAreaScale = self._selfHandMahArea:getScale()
    if selfHandAreaScale > 1 then
        addY = (selfHandAreaScale - 1) * maxAddY * 10
    end
    if addY > maxAddY then
        addY = maxAddY
    end
    flowerArea:setPositionY(addY)
end

function UIMahLayer:setSurplusMahsCounts(mahCounts, bShow)
    UIMahLayer.super.setSurplusMahsCounts(self, mahCounts, bShow)
    self._mahsSurPlusNode:setVisible(bShow or false)
    self._mahsSurPlusCounts:setVisible(bShow or false)
end

function UIMahLayer:showSurPlusMahBack()
    if self._surPlusMahBackMah then
        return
    end
    UIMahLayer.super.showSurPlusMahBack(self)
    self._surPlusMahBackMah:setScale(1)
    self._surPlusMahBackMah:setAnchorPoint(display.CENTER)
    self._surPlusMahBackMah:setPosition(self._mahsSurPlusNode:getContentSize().width / 2, self._mahsSurPlusNode:getContentSize().height / 2)
end

function UIMahLayer:onEventSwitchLine(event)
    self:onUpdateSwitchLine()
end

function UIMahLayer:onUpdateSwitchLine()
    local curLineType = CF.settingData:getLineType()
    local isSingleLine = curLineType == CF.GameDefine.LineType.Single
    local localSeat = CF.GameDefine.LOCAL_SEAT.BOTTOM
    local handAreaNode = self:_getHandAreaRootNode(localSeat)
    if handAreaNode then
        handAreaNode:setVisible(isSingleLine)
    end
    local handAreaNode2 = self:_getHandAreaRootNode2(localSeat)
    if handAreaNode2 then
        handAreaNode2:setVisible(not isSingleLine)
    end
    local flowerAreaNode = self:_getFlowerAreaRootNode(localSeat)
    if flowerAreaNode then
        flowerAreaNode:setVisible(isSingleLine)
    end
    local flowerAreaNode2 = self:_getFlowerAreaRootNode2(localSeat)
    if flowerAreaNode2 then
        flowerAreaNode2:setVisible(not isSingleLine)
    end
    self:updateActionPos(isSingleLine)
end

function UIMahLayer:updateActionPos(isSingleLine)
    local offsetY = isSingleLine and 0 or ActionBtnOffsetY
    if self._actionHideTargetIndex and self._actionHideTargetIndex > 0 then
        self._actionMovePanel:setPosition(cc.p(self._showActionPoint:getPositionX(),self._showActionPoint:getPositionY() + offsetY))
    end
end

function UIMahLayer:showAction(actionTypes, isShow)
    local curLineType = CF.settingData:getLineType()
    local offsetY = curLineType == CF.GameDefine.LineType.Single and 0 or ActionBtnOffsetY
    if self._actionBtnPos == nil then
        self._actionBtnPos = {}
        for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.HU do
            self._actionBtnPos[i] = {x = self["_actionButton" .. i]:getPositionX(), y = self["_actionButton" .. i]:getPositionY()}
        end
    end
    actionTypes = actionTypes or {}
    if #actionTypes > 0 then
        --初始化
        for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.HU do
            self["_actionButton" .. i]:setVisible(false)
        end
        for i = 1, #actionTypes do
            if self["_actionButton" .. actionTypes[i]] then
                self["_actionButton" .. actionTypes[i]]:setPosition(cc.p(self._actionBtnPos[i].x, self._actionBtnPos[i].y))
                self["_actionButton" .. actionTypes[i]]:setVisible(true)
                if actionTypes[i] == CF.GameDefine.ACTION.HU then
                    local x = self["_actionButton" .. actionTypes[i]]:getContentSize().width
                    local y = self["_actionButton" .. actionTypes[i]]:getContentSize().height
                    CF.UITool.playJsonAnimation(self["_actionButton" .. actionTypes[i]], "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
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
                local y = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionY() + offsetY
                self._actionMovePanel:setPosition(x, y)
                local outTime = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
                self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                    cc.MoveTo:create(outTime, cc.p(self._showActionPoint:getPositionX(),self._showActionPoint:getPositionY() + offsetY))))
            end
        end
    else
        self._actionHideTargetIndex = self._actionHideTargetIndex or 0
        if self["_hideActionPoint"..self._actionHideTargetIndex] then
            local time = 0.24 - (self:getActionButtonCount() - self._actionHideTargetIndex) * 0.04
            local x = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionX()
            local y = self["_hideActionPoint"..self._actionHideTargetIndex]:getPositionY() + offsetY
            self._actionMovePanel:runAction(cc.EaseQuarticActionOut:create(
                cc.MoveTo:create(time, cc.p(x, y))))
        end
        self._actionHideTargetIndex = 0
    end
end

function UIMahLayer:onTouchEventActionButton(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if send == self._actionButton1 then
        self._actionButton1:setEnabled(false)
        self:performWithDelay(function()
            self._actionButton1:setEnabled(true)
        end,1)
        CF.game:getModule("GameLayer"):doActionCancel()
    elseif send == self._actionButton2 then
        CF.game:getModule("GameLayer"):doActionTaoHua()
    elseif send == self._actionButton3 then
        CF.game:getModule("GameLayer"):doActionChow()
    elseif send == self._actionButton4 then
        CF.game:getModule("GameLayer"):doActionTi()
    elseif send == self._actionButton5 then
        CF.game:getModule("GameLayer"):doActionKong()
    elseif send == self._actionButton6 then
        CF.game:getModule("GameLayer"):doActionHu()
    end
    self:showAction({}, false)
end

function UIMahLayer:onEventShowPowerMah(event)
    if not event.msg or not event.msg.data then
        return
    end
    local nCount = event.msg.data.count
    local nPowerMahs = event.msg.data.powerMahs
    local action = event.msg.data.power

    self:showPowerMahs(nCount, nPowerMahs, action)
end

function UIMahLayer:onEventShowSongZhang(event)
    local seat = event.msg.seat
    local localSeat = CF.roomData:seatToLocal(seat)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local songZhangMahs = gameData:getSongZhangMahs(seat)
    self:setSongHandMahs(localSeat, songZhangMahs)
end

function UIMahLayer:setSongHandMahs(localSeat, songZhangMahs)
    local handArea = self:_getHandArea(localSeat)
    if handArea then
        handArea:setSongZhang(songZhangMahs)
    end
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:setSongZhang(songZhangMahs)
    end
end

------------------------------------------------------
--设置吃杠胡、替换白皮的牌
--------------------------------------------------
function UIMahLayer:showPowerMahs(nCount, nPowerMahs, action)
    if self["_actionButton" .. action] then
        local rootNode = {}
        for i = 1, nCount do
            local mahNode = ccui.Helper:seekWidgetByName(self["_actionButton" .. action], "KW_MAH_" .. i)
            if mahNode then
                mahNode:removeAllChildren()
                table.insert(rootNode, mahNode)
            end
        end
        if #rootNode == 0 then
            return
        end
        local config = CF.settingData:getDefaultData(nil, true)
        for i = 1, #nPowerMahs do
            local mahNode = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD, config)
            mahNode:setScale(UIMahConfig.ActionMahScaleSize)
            mahNode:setMahValue(nPowerMahs[i])
            mahNode:setAnchorPoint(0, 0)
            rootNode[i]:addChild(mahNode)
        end
    end
end

function UIMahLayer:setHandMahs(localSeat, handMahs, dfMahs, bShowAni)
    UIMahLayer.super.setHandMahs(self, localSeat, handMahs, dfMahs, bShowAni)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:setHandMahs(handMahs, dfMahs, bShowAni)
    end
end

function UIMahLayer:setDfMahs(localSeat, danFangMahValue)
    UIMahLayer.super.setDfMahs(self, localSeat, danFangMahValue)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:dealDanFang(danFangMahValue)
    end
end

function UIMahLayer:deleteHandMahByIndex(localSeat, delMahIndex, delMahValue)
    UIMahLayer.super.deleteHandMahByIndex(self, localSeat, delMahIndex, delMahValue)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        local bDelSuccess = self._handAreas_2:deleteMahWithIndex(delMahIndex, delMahValue)
        if not bDelSuccess then
            -- 删除手牌不成功，则刷新手牌
            self:_updateHandMahs(localSeat, false)
        else
            -- 删除手牌成功，则判定显示的手牌和手牌数据是否相等
            self:_checkShowHandMahs(localSeat)
        end
    end
end

function UIMahLayer:deleteHandMahByIDs(localSeat, mahIDs, dfMah)
    UIMahLayer.super.deleteHandMahByIDs(self, localSeat, mahIDs, dfMah)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        local bDelSuccess = self._handAreas_2:deleteMahs(mahIDs)
        if not bDelSuccess then
            -- 删除手牌不成功，则刷新手牌
            self:_updateHandMahs(localSeat, false)
        else
            -- 删除手牌成功，则判定显示的手牌和手牌数据是否相等
            self:_checkShowHandMahs(localSeat)
        end
    end
end

function UIMahLayer:_checkShowHandMahs(localSeat)
    UIMahLayer.super._checkShowHandMahs(self, localSeat)
    if not self._handAreas_2 then
        return
    end
    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end

    local seat = CF.roomData:localToSeat(localSeat)
    local handMahs = mahData:getHandMahData(seat)
    if not handMahs or #handMahs == 0 then
        return
    end
    local handAreaShowMahValues = self._handAreas_2:getAllHandMahValues()
    if not MahLogic.isTableEqual(handMahs, handAreaShowMahValues) then
        self:_updateHandMahs(localSeat, false)
    end
end

function UIMahLayer:setLimitHandMah(localSeat,limitMahIDs)
    UIMahLayer.super.setLimitHandMah(self, localSeat,limitMahIDs)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        if self._handAreas_2.setLimitHandMahs then
            self._handAreas_2:setLimitHandMahs(limitMahIDs)
        end
    end
end

function UIMahLayer:clearHandMah(localSeat)
    UIMahLayer.super.clearHandMah(self, localSeat)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:resetJokerData()
        self._handAreas_2:clearHandMahs()
    end
end

function UIMahLayer:setHuMahs(localSeat, huHandMahs, huMah)
    UIMahLayer.super.setHuMahs(self, localSeat, huHandMahs, huMah)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:setHuMahs(huHandMahs, huMah, true)
    end
end

function UIMahLayer:clearHuMahs(localSeat)
    UIMahLayer.super.clearHuMahs(self, localSeat)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:clearHandMahs()
    end
end

function UIMahLayer:addCombMahs(mahIDs, combFlag, localSeat, fromLocalSeat, formCombMahID, bAni, bMoveHand)
    UIMahLayer.super.addCombMahs(self, mahIDs, combFlag, localSeat, fromLocalSeat, formCombMahID, bAni, bMoveHand)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        local combData = {}
        combData.combFlag = combFlag
        combData.mahValues = mahIDs
        combData.inMahValue = formCombMahID
        combData.fromLocalSeat = fromLocalSeat
        combData.bShowAni = bAni
        combData.bMoveHand = bMoveHand

        if combFlag == CF.GameDefine.COMB_FLAG.TKONG then
            self._handAreas_2:addTKongComb(combData)
        elseif combFlag == CF.GameDefine.COMB_FLAG.CKONG then
            combData.showBackIndexs = self:_getCKongShowBackIndexs(clone(combData)) or {}
            self._handAreas_2:addComb(combData)
        else
            self._handAreas_2:addComb(combData)
        end
    end
end


function UIMahLayer:refreshCombMahs(mahIDs, combFlag, localSeat, formCombMahID, combIndex)
    UIMahLayer.super.refreshCombMahs(self, mahIDs, combFlag, localSeat, formCombMahID, combIndex)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        local combData = {}
        combData.combFlag = combFlag
        combData.mahValues = mahIDs
        combData.inMahValue = formCombMahID
        self._handAreas_2:resetCombMahs(combData, combIndex)
    end
end

function UIMahLayer:clearCombArea(localSeat)
    UIMahLayer.super.clearCombArea(self, localSeat)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._handAreas_2 then
        self._handAreas_2:clearCombs()
    end
end

function UIMahLayer:setFlowers(localSeat, mahValues, bAni, callBack)
    UIMahLayer.super.setFlowers(self, localSeat, mahValues, bAni, callBack)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._flowerAreas_2 then
        self._flowerAreas_2:setFlowers(mahValues)
    end
end

function UIMahLayer:addFlowers(localSeat, mahValues, bAni, callBack)
    UIMahLayer.super.addFlowers(self, localSeat, mahValues, bAni, callBack)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._flowerAreas_2 then
        self._flowerAreas_2:addFlowers(mahValues)
    end
end

function UIMahLayer:clearFlowers(localSeat)
    UIMahLayer.super.clearFlowers(self, localSeat)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and self._flowerAreas_2 then
        self._flowerAreas_2:clearFlowers()
    end
end

function UIMahLayer:_lightSameValueMahs(mahValue)
    UIMahLayer.super._lightSameValueMahs(self, mahValue)
    if self._handAreas_2 then
        self._handAreas_2:lightSameValueMahs(mahValue)
    end
end

function UIMahLayer:_clearSameValueLight()
    UIMahLayer.super._clearSameValueLight(self)
    if self._handAreas_2 then
        self._handAreas_2:clearSameValueLight()
    end
end

function UIMahLayer:_getCKongShowBackIndexs(combData)
    return {}
end

function UIMahLayer:setConfig(config)
    UIMahLayer.super.setConfig(self, config)
    if self._handAreas_2 then
        self._handAreas_2:setConfig(config)
    end
    if self._flowerAreas_2 then
        self._flowerAreas_2:setConfig(config)
    end
end

function UIMahLayer:initOthersPlayBackBtn()
    self._actionPanelOther = {}
	self._actionBtnPosOtherTmp = {}
	local LEFT_OFFSET   = {offset_x = 270, offset_y = 50, margen = 220}
    local RIGHT_OFFSET  = {offset_x = 1000, offset_y = 50, margen = 220}
    local TOP_OFFSET    = {offset_x = 500, offset_y = 100, margen = 0}
	for seat = CF.GameDefine.LOCAL_SEAT.LEFT, CF.GameDefine.LOCAL_SEAT.TOP do
		if seat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM then
			local actionBtnPosOther = {} 
			if not self._actionPanelOther[seat] then
                local tmpPanel = self._actionPanel:clone()
				self._actionPanelOther[seat] = tmpPanel
				self._actionPanel:getParent():addChild(self._actionPanelOther[seat])
				self._actionPanelOther[seat]:setVisible(false)
				if seat == CF.GameDefine.LOCAL_SEAT.LEFT then
					self._actionPanelOther[seat]:setPosition(cc.p(180,300))
				elseif seat == CF.GameDefine.LOCAL_SEAT.RIGHT then
					self._actionPanelOther[seat]:setPosition(cc.p(1200,300))
				elseif seat == CF.GameDefine.LOCAL_SEAT.TOP then
					self._actionPanelOther[seat]:setPosition(cc.p(960,440))
				end
			end
			for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.HU do
				local actionBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[seat],"_KW_ACTION_BTN_" .. i)
				if actionBtn then
					actionBtnPosOther[i] = {x = actionBtn:getPositionX(),y = actionBtn:getPositionY()}
				end
			end
			self._actionBtnPosOtherTmp[seat] = {}
			local firstBtnPosX = 0
			if seat == CF.GameDefine.LOCAL_SEAT.LEFT then
				for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.HU do
					if i == 1 then
						firstBtnPosX = actionBtnPosOther[i].x
					end
					self._actionBtnPosOtherTmp[seat][i] = {x = firstBtnPosX + LEFT_OFFSET.offset_x , y = (actionBtnPosOther[i].y - LEFT_OFFSET.offset_y) + (i-1)*LEFT_OFFSET.margen } 
				end
			elseif seat == CF.GameDefine.LOCAL_SEAT.RIGHT then
			   for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.HU do
					if i == 1 then
						firstBtnPosX = actionBtnPosOther[i].x
					end
					self._actionBtnPosOtherTmp[seat][i] = {x = firstBtnPosX + RIGHT_OFFSET.offset_x , y =  (actionBtnPosOther[i].y - RIGHT_OFFSET.offset_y) + (i-1)*RIGHT_OFFSET.margen } 
				end
			elseif seat == CF.GameDefine.LOCAL_SEAT.TOP then
				for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.HU do
					self._actionBtnPosOtherTmp[seat][i]= {x = actionBtnPosOther[i].x + TOP_OFFSET.offset_x ,y = actionBtnPosOther[i].y + TOP_OFFSET.offset_y}
				end
			end
		end
	end
end

function UIMahLayer:onWinlostResult(event)
    self._mahsSurPlusNode:setVisible(false)
    self._mahsSurPlusCounts:setVisible(false)
end

function UIMahLayer:_updateHandMahs(localSeat, bAni)
    UIMahLayer.super._updateHandMahs(self, localSeat, bAni)
    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end
    local seat = CF.roomData:localToSeat(localSeat)
    local songZhangMahs = mahData:getSongZhangMahs(seat)
    self:setSongHandMahs(localSeat, songZhangMahs)
end

---------------------------------------------------------
--@brief 展示非自己玩家所有的吃碰杠牌权
--@param 需要展示牌权的玩家客户端位置
--@param 所有的吃碰杠类型
--@param 是需要展示，还是需要隐藏
--@return nil
---------------------------------------------------------
function UIMahLayer:showOthersAction(localSeat, actionTypes, isShow)
    if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or localSeat < CF.GameDefine.LOCAL_SEAT.LEFT or localSeat > CF.GameDefine.LOCAL_SEAT.TOP then
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
        for i = CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.XIANFLOWER do
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
                if actionTypes[i] == CF.GameDefine.ACTION.HU then
                    local x = actionBtn:getContentSize().width
                    local y = actionBtn:getContentSize().height
                    CF.UITool.playJsonAnimation(actionBtn, "hu_ani", "res/animation/Mahjong/Base/hu_ani/hu_ani.ExportJson", 1, cc.p(x / 2, y / 2 + 5))
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

return UIMahLayer`r