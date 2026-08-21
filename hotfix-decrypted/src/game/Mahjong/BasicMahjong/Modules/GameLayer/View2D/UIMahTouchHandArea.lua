local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

local UIMahTouchHandArea = CF.gameClass("UIMahTouchHandArea", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahHandArea")

function UIMahTouchHandArea:ctor(localSeat, config)
    UIMahTouchHandArea.super.ctor(self, localSeat, config)
end

function UIMahTouchHandArea:_createMah(mahValue, bStand)
    local mah = UIMahTouchHandArea.super._createMah(self, mahValue, bStand)
    if mah then
        mah:setTouchEnabled(true)
        mah:addTouchEventListener(handler(self,self._onTouchEventMah))
    end
    return mah
end

function UIMahTouchHandArea:_hideDragingMah()
    if not self._dragingMah then
        return
    end
    self._dragingMah:setVisible(false)
end

function UIMahTouchHandArea:_showDragingMah(mah)
    if not mah then
        return
    end

    if not self._dragingMah then
        self._dragingMah = self:_createMah(mah:getMahValue(), true)
        self._dragingMah:setAnchorPoint(mah:getAnchorPoint())
        self:addChild(self._dragingMah, UIMahConfig.HandAreaPlayConf.DragZorder)
    else
        self._dragingMah:setMahValue(mah:getMahValue())
        self:updateMahJokerIcon(self._dragingMah)
    end
    self._dragingMah:setPosition(mah:getPositionX() ,mah:getPositionY()+50)
    self._dragingMah:setVisible(true)
end

function UIMahTouchHandArea:_isSingleClick(touchMah)
    if not CF.GameDefine then
        return false
    end
    if self:_getConfigValueByKey(UIMahConfig.MahSettingKey.PlayType) ~= CF.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK then
        return false
    end
    if touchMah and touchMah.isTing and type(touchMah.isTing) == "function" and touchMah:isTing() then
        return false
    end
    return true
end

function UIMahTouchHandArea:_setMahSelected(mah, bSelected)
    if not mah or bSelected == nil then
        return
    end
    if bSelected then
        self:_setAllMahsUnSelected()
    end
    if bSelected and self._selectedMahCallBack then
        self._selectedMahCallBack(mah:getMahValue())
    end
    mah:setSelected(bSelected)
end

function UIMahTouchHandArea:_setAllMahsUnSelected()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        self:_setMahSelected(mah, false)
        self:_setMahDraging(mah, false)
    end
end

function UIMahTouchHandArea:_unSelectAllMahs()
    if self._selectedMahCallBack then
        self._selectedMahCallBack()
    end
    self:_setAllMahsUnSelected()
end

function UIMahTouchHandArea:_getSelectedMah()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        if mah:isSelected() then
            return mah
        end
    end
    return nil
end

-- 刷新是否正在执行动作的状态
function UIMahTouchHandArea:_updateHandMahsRunningActionState()
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in pairs(allStandMahs) do
        if mah:getNumberOfRunningActions() >0 then
            self._isRunningAction = true
            return
        end
    end
    self._isRunningAction = false
end

function UIMahTouchHandArea:_updateHandMahsPosition(bShowAction)
    UIMahTouchHandArea.super._updateHandMahsPosition(self, bShowAction)
    self:_updateHandMahsRunningActionState()
end

function UIMahTouchHandArea:_onFinishAllMahsAction()
    UIMahTouchHandArea.super._onFinishAllMahsAction(self)
    self:_updateHandMahsRunningActionState()
end

function UIMahTouchHandArea:_onTouchEventMah(send, eventType)
    if self._isRunningAction then
        return
    end
    if eventType == ccui.TouchEventType.began then
        self._isDraging = false
        self._touchBeginPos = send:getTouchBeganPosition()
        self._touchMahStartPos = cc.p(send:getPosition())
        self._movePointCount = 1

        if self:_isSingleClick(send) then
            self:_setMahSelected(send, true)
        else
            if send:isSelected() then
                self:_unSelectAllMahs()
                self:_dispatchPlayMahEvent(send)
            else
                self:_setMahSelected(send, true)
            end
        end
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        if self._isDraging and self._dragingMah and self._dragingMah:isVisible() then
            self:_setMahDraging(send, false)
            self:_hideDragingMah()
            if self._dragingMah:getPositionY() > send:getPositionY() + send:getContentSize().height * 3/4 then
                self:_dispatchPlayMahEvent(send)
            end
            self._touchBeginPos = nil
            self._isDraging = false
            return
        end

        local touchEndPos = send:getTouchEndPosition()
        local curSelectedMah = self:_getSelectedMah()
         --下滑取消出牌
        if self._touchBeginPos and curSelectedMah and curSelectedMah:isVisible() then
            if self._touchBeginPos.y - touchEndPos.y >= 20  then
                self:_setMahSelected(curSelectedMah, false)
            end
        end
        local selectedMah = self:_getSelectedMah()
        if self:_isSingleClick(send) then
            self:_unSelectAllMahs()
            if selectedMah and MahLogic.isPositionInArea(selectedMah, touchEndPos) and selectedMah:isVisible() then
                self:_dispatchPlayMahEvent(selectedMah)
            end
        else
            if not selectedMah or not MahLogic.isPositionInArea(selectedMah, touchEndPos) or not selectedMah:isVisible() then
                self:_unSelectAllMahs()
            end
        end
    elseif eventType == ccui.TouchEventType.moved then
        local touchMovePos = send:getTouchMovePosition()
        if self._touchBeginPos then
            local touchBeganPos = self._touchBeginPos
            self._movePointCount = self._movePointCount + 1
            if not self._isDraging and MahLogic.getMoveAngleByPosition(touchBeganPos, touchMovePos) > 40 and self._movePointCount < 6 then
                self._isDraging = true
                self:_unSelectAllMahs()
                self:_setMahDraging(send, true)
                self:_showDragingMah(send)
            end
            if self._isDraging and self._dragingMah and self._dragingMah:isVisible() then
                self._dragingMah:setPositionX(touchMovePos.x - touchBeganPos.x + self._touchMahStartPos.x)
                self._dragingMah:setPositionY(touchMovePos.y - touchBeganPos.y + self._touchMahStartPos.y)
            end
        end

        if not self._isDraging then
            local allStandMahs = self:_getAllStandMahs()
            for _, mah in ipairs(allStandMahs) do
                if MahLogic.isPositionInArea(mah, touchMovePos) 
                and mah:isVisible() 
                and mah:isTouchEnabled() 
                and not mah:isSelected() then
                    self:_setMahSelected(mah, true)
                end
            end
        end
    end
end

function UIMahTouchHandArea:_setMahDraging(mah, isDraging)
    if not mah then
        return
    end
    if mah:isMahTouchLimit() or mah:isMahActionMask() or mah:isMahPreBao() then
        return
    end
    if isDraging then
        mah:setColor(UIMahConfig.MahColor.Drag)
    else
        mah:setColor(UIMahConfig.MahColor.Normal)
    end
end

function UIMahTouchHandArea:_dispatchPlayMahEvent(playMah)
    -- if not self._isCanPlayMah then
    --     return
    -- end
    local mahIndex = self:_getMahIndexInHandMahs(playMah)
    if self._playMahCallBack then
        self._playMahCallBack(mahIndex, playMah:getMahValue())
    end
end

function UIMahTouchHandArea:setLimitHandMahs(limitMahValues)
    limitMahValues = limitMahValues or {}
    local templimitMahValues = clone(limitMahValues)
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in ipairs(allStandMahs) do
        local isLimit, index = MahLogic.checkMahValueIsInTable(mah:getMahValue(), templimitMahValues)
        mah:setMahTouchLimit(isLimit)
        if isLimit then
            table.remove(templimitMahValues, index)
        end
    end
end

function UIMahTouchHandArea:setCanPlayMah(isCanPlayMah)
    self._isCanPlayMah = isCanPlayMah
end

function UIMahTouchHandArea:addPlayMahCallBack(playMahCallBack)
    self._playMahCallBack = playMahCallBack
end

function UIMahTouchHandArea:addSelectedMahCallBack(selectedMahCallBack)
    self._selectedMahCallBack = selectedMahCallBack
end

function UIMahTouchHandArea:lightActionMahs(mahValue)
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in ipairs(allStandMahs) do
        mah:setMahActionMask(mah:getMahValue() == mahValue)
    end
end

function UIMahTouchHandArea:setPreBaoHandMahs(mahValues)
    mahValues = mahValues or {}
    local tempPreBaoMahValues = clone(mahValues)
    local allStandMahs = self:_getAllStandMahs()
    for _, mah in ipairs(allStandMahs) do
        local isPreBao, _ = MahLogic.checkMahValueIsInTable(mah:getMahValue(), tempPreBaoMahValues)
        mah:setMahPreBao(isPreBao)
    end
end

return UIMahTouchHandArea $  