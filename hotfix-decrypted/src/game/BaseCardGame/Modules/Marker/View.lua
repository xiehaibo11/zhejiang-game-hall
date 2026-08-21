local MarkerView = CF.gameClass("MarkerView", CF.ViewBase)

local TextTipsList = {
    {text = "帮你记牌!", font = 35},
    {text = "轻松游戏，就靠我", font = 26},
    {text = "记性不好？试试我!", font = 25},
    {text = "记牌我最行!", font = 35},
    {text = "需要我的帮助吗?", font = 27},
    {text = "我在这里！等着你!", font = 25}
}

--是否显示游戏内购商城
MarkerView.InGamePurchase = {900036, 900037, 900017, 900038, 900003}

function MarkerView:ctor(param)
    param = param or {}
    MarkerView.super.ctor(self, param)
    self.isClickIcon = false --是否点击过商城的按钮
    self:createChildren()
    local randomNum = math.random(1, 6)
    if self._qiPaoText then
        self._qiPaoText:setString(TextTipsList[randomNum].text)
        self._qiPaoText:setFontSize(TextTipsList[randomNum].font)
    end
    self:onMarkerDataChanged()
    self:onMarkerLmtChanged()
    self:initAni()
end

function MarkerView:getCSBPath()
    if CF and CF.roomData and CF.roomData:isNewUI() then
        return "cocosStudio/Common/CSB/BaseCardGame/MarkerLayerNew.csb"
    end
    return "cocosStudio/Common/CSB/BaseCardGame/MarkerLayer.csb"
end

function MarkerView:getBindingInfo()
    return {
        ["_KW_PANEL_JIPAIQI"] = {varName = "_panelRoot"},
        ["_KW_BTN_JIPAIQI_ICON"] = {varName = "_btnMarker", type = CF.UI_TYPE.BUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouch = "onMarkerBtnClick"},
        ["_KW_IMG_JIPAIQI_BG"] = {varName = "_imgMarkerBg"},
        ["_KW_IMG_JIPAIQI_LINE"] = {varName = "_imgMarkerLine"},
        ["_KW_PANEL_JIPAIQI_NUM"] = {varName = "_panelMarkerNum"},
        ["_KW_TEXT_JIPAIQI_TIME"] = {varName = "_textMarkerTime"},
        ["_KW_PANEL_JIPAIQI_BTN_BG"] = {varName = "_panelMarkerBtn", onTouch = "onMarkerBtnPanelEvent"},
        ["_KW_IMAGE_QI_PAO_ROOT"] = {varName = "_qiPaoRoot"},
        ["_KW_IMAGE_QI_PAO"] = {varName = "_qiPaoBg"},
        ["_KW_TEXT_QI_PAO"] = {varName = "_qiPaoText"},
        ["_KW_POS_JIPAIQI_ANI"] = {varName = "_posMarkerAni"},
        ["_KW_TEXT_JIPAIQI_NUM_"] = {varName = "_textMarkerNum", beginIndex = 1, endIndex = 15}
    }
end

function MarkerView:getAdaptationConfig()
    return {
        {node = self._panelMarkerBtn, bRight = true, bHalf = true},
    }
end

function MarkerView:initAni()
    local exportJsonPath = "res/animation/GameCommon/jpq-ani-2/"
    local exportJsonName = "jpq-ani-2"
    local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
    local aniName = "jpq-ani-2"
    CF.UITool.playJsonAnimation(
        self._posMarkerAni,
        aniName,
        exportJsonFilePath,
        -1,
        nil,
        nil,
        function()
        end
    )
end

function MarkerView:getProxyEvents()
    return {
        {module = CF.game:getModule("Marker"), eventKeyName = "EVENT_MARKER_DATA_CHANGE", callBack = "onMarkerDataChanged"},
        {module = CF.game:getModule("Marker"), eventKeyName = "EVENT_LMT_MARKER_CHANGE", callBack = "onMarkerLmtChanged"},
        {module = CF.game:getModule("Marker"), eventKeyName = "EVENT_MARKER_LEFTTIME_CHANGE", callBack = "onMarkerLeftTimeChanged"},
        {module = CF.game:getModule("Marker"), eventKeyName = "EVENT_UPDATE_MAKER_QI_PAO", callBack = "onMakerQiPaoEvent"},
        {module = CF.game:getModule("Marker"), eventKeyName = "EVENT_UPDATE_MAKER_SHOW", callBack = "onMakerShowEvent"},
        {module = CF.game:getModule("Marker"), eventKeyName = "EVENT_UPDATE_MAKER_LINE", callBack = "onMakerLineUpdate"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

function MarkerView:onWinSizeChange()
    local iconPos = cc.p(self._panelMarkerBtn:getPosition())
    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._panelMarkerBtn:getContentSize()
    if iconPos.x < btnSize.width/2 then
        iconPos.x = btnSize.width/2
    elseif iconPos.x > viewSize.width - btnSize.width/2 then
        iconPos.x = viewSize.width - btnSize.width/2
    end
    if iconPos.y < btnSize.height/2 then
        iconPos.y = btnSize.height/2
    elseif iconPos.y > viewSize.height - btnSize.height/2 then
        iconPos.y = viewSize.height - btnSize.height/2
    end
    self._panelMarkerBtn:setPosition(iconPos)
end

function MarkerView:onMakerShowEvent(event)
    self:showMarkerIcon(true)
end

function MarkerView:onMakerLineUpdate(event)
    self:showMarkerLine(event.isShow)
end

function MarkerView:onMakerQiPaoEvent(event)
    local show = event.isShow or false
    self._qiPaoRoot:setVisible(show)
end

function MarkerView:createChildren()
    self._panelMarkerNum:setVisible(false)
end

function MarkerView:onMarkerBtnClick(sender, eventType)
    if eventType == ccui.TouchEventType.began then
        CF.audioManager:play("BUTTON_CLICK")
        self:onMarkerBtnPanelBegan(sender)
    elseif eventType == ccui.TouchEventType.moved then
        self:onMarkerBtnPanelMoved(sender)
    elseif eventType == ccui.TouchEventType.ended then
        self:onMarkerBtnPanelEnded(sender)

        local markerBtnEndPosX = self._panelMarkerBtn:getPositionX()
        local markerBtnEndPosY = self._panelMarkerBtn:getPositionY()
        if math.abs(markerBtnEndPosX - self._markerBtnPanelStartPosX) <= 100 and math.abs(markerBtnEndPosY - self._markerBtnPanelStartPosY) <= 100 then
            local nowVisible = self._panelMarkerNum:isVisible()
            cc.UserDefault:getInstance():setBoolForKey("SAVE_MARKER_CLICK_" .. CF.roomData:getGameID(), not nowVisible)
            self:showMarkerLine(not nowVisible)
        end
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_07)
    elseif eventType == ccui.TouchEventType.canceled then
        self:onMarkerBtnPanelEnded(sender)
    end
end

function MarkerView:showMarkerLine(isShow)
    CF.game:getModule("Marker"):requestSysTime()
    local bLmt = CF.game:getModule("Marker"):getLmtMarker()
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftGoldMarker = CF.game:getModule("Marker"):getExtraAdds()
    if bLmt or (leftTime <= 0 and leftGoldMarker <= 0) then
        return
    end
    if isShow then
        local markerBtnEndPosX = self._panelMarkerBtn:getPositionX()
        local markerBtnSize = self._btnMarker:getContentSize()
        local markerBgSize = self._imgMarkerBg:getContentSize()
        local viewSize = self._panelRoot:getContentSize()
        if markerBtnEndPosX + markerBtnSize.width / 2 + markerBgSize.width > viewSize.width then
            self._imgMarkerBg:setScaleX(-1)
            self._imgMarkerLine:setPositionX(CF.roomData:isNewUI() and -332 or -468)
        else
            self._imgMarkerBg:setScaleX(1)
            self._imgMarkerLine:setPositionX(CF.roomData:isNewUI() and 300 or 473)
        end
    end
    self._panelMarkerNum:setVisible(isShow)
end

function MarkerView:onMarkerBtnPanelBegan(sender)
    self._markerBtnPanelStartPosX = self._panelMarkerBtn:getPositionX()
    self._markerBtnPanelStartPosY = self._panelMarkerBtn:getPositionY()
end

function MarkerView:onMarkerBtnPanelMoved(sender)
    local movePos = sender:getTouchMovePosition()
    local tempPos = self:convertToNodeSpace(movePos)
    self._panelMarkerBtn:setPosition(tempPos)
    self:UpdateQiPao()

    local markerBtnEndPosX = tempPos.x
    local markerBtnEndPosY = tempPos.y
    if math.abs(markerBtnEndPosX - self._markerBtnPanelStartPosX) > 10 or math.abs(markerBtnEndPosY - self._markerBtnPanelStartPosY) > 10 then
        self._panelMarkerNum:setVisible(false)
    end
end

function MarkerView:onMarkerBtnPanelEnded(sender)
    local markerBtnEndPosX = self._panelMarkerBtn:getPositionX()
    local markerBtnEndPosY = self._panelMarkerBtn:getPositionY()

    local viewSize = self._panelRoot:getContentSize()
    if markerBtnEndPosX < 80 then
        self._panelMarkerBtn:setPositionX(80)
    end
    if markerBtnEndPosY < 95 then
        self._panelMarkerBtn:setPositionY(95)
    end
    if viewSize.height - markerBtnEndPosY < 95 then
        self._panelMarkerBtn:setPositionY(viewSize.height - 95)
    end
    if viewSize.width - markerBtnEndPosX < 80 then
        self._panelMarkerBtn:setPositionX(viewSize.width - 80)
    end
    if math.abs(markerBtnEndPosX - self._markerBtnPanelStartPosX) <= 100 and math.abs(markerBtnEndPosY - self._markerBtnPanelStartPosY) <= 100 then
        --点击过商城关闭气泡
        self._qiPaoRoot:setVisible(false)
        self.isClickIcon = true
        local leftTime = CF.game:getModule("Marker"):getLeftTime()
        local bLmt = CF.game:getModule("Marker"):getLmtMarker()
        local leftGoldMarker = CF.game:getModule("Marker"):getGoldMarkerCnt()
        if not self._btnMarker:isTouchEnabled() then
            if leftTime <= 0 and leftGoldMarker <= 0 and not bLmt then
                if (not CF.game:getModule("Marker"):isOpenMarker()) or (XH.isEmbeddedApp and XH.isEmbeddedApp()) then
                    local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
                    tipLayer:setText("您记牌器未激活，请到大厅商城购买使用")
                else
                    local buyMarkerLayer = CF.gameRequire("Modules.BuyMarker.View")
                    local layer = buyMarkerLayer.new()
                    layer:showSelf()
                    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080859)
                end
            else
                if bLmt then
                    CF.TipTool.showToast("房主设置，本房间【禁用记牌器】", 2)
                end
            end
        end
    end
end

function MarkerView:onMarkerBtnPanelEvent(sender, eventType)
    if eventType == ccui.TouchEventType.began then
        self:onMarkerBtnPanelBegan(sender)
    elseif eventType == ccui.TouchEventType.moved then
        self:onMarkerBtnPanelMoved(sender)
    elseif eventType == ccui.TouchEventType.ended then
        self:onMarkerBtnPanelEnded(sender)
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_07)
    elseif eventType == ccui.TouchEventType.canceled then
        self:onMarkerBtnPanelEnded(sender)
    end
end

function MarkerView:setCardCountData(cardCountData)
    if #cardCountData <= 0 then
        return
    end
    for i = 1, 15 do
        if self["_textMarkerNum" .. i] and cardCountData[i] then
            if cardCountData[i] <= 0 then
                self["_textMarkerNum" .. i]:setColor(cc.c3b(128, 128, 128))
            elseif cardCountData[i] < 4 then
                self["_textMarkerNum" .. i]:setColor(cc.c3b(241, 104, 29))
            elseif cardCountData[i] < 6 then
                self["_textMarkerNum" .. i]:setColor(cc.c3b(132, 38, 22))
            else
                self["_textMarkerNum" .. i]:setColor(cc.c3b(212, 64, 58))
            end
            self["_textMarkerNum" .. i]:setString(cardCountData[i])
        end
    end
end

function MarkerView:onMarkerDataChanged()
    local markerData = CF.game:getModule("Marker"):getMarkerData()
    self:setCardCountData(markerData)
    self:updateMarkerBtnEnable()
end

function MarkerView:onMarkerLmtChanged()
    local bLmt = CF.game:getModule("Marker"):getLmtMarker()
    self:setVisible(not bLmt)
    self:updateMarkerBtnEnable()
end

function MarkerView:updateMarkerBtnEnable()
    local bLmt = CF.game:getModule("Marker"):getLmtMarker()
    local markData = CF.game:getModule("Marker"):getMarkerData()
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftGoldMarker = CF.game:getModule("Marker"):getGoldMarkerCnt()
    if bLmt or not markData or #markData <= 0 then
        self._btnMarker:setBright((leftGoldMarker > 0 or leftTime > 0) and not bLmt)
        self._btnMarker:setTouchEnabled(false)
        self._panelMarkerNum:setVisible(false)
    else
        self._btnMarker:setTouchEnabled(leftGoldMarker > 0 or leftTime > 0)
        self._btnMarker:setBright(leftGoldMarker > 0 or leftTime > 0)
        self.isClickIcon = true
    end
end

function MarkerView:showMarkerIcon(bShow)
    self._btnMarker:setVisible(bShow)
    if not bShow then
        self._panelMarkerNum:setVisible(false)
    end
end

function MarkerView:updateLeftTimeText()
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftGoldMarker = CF.game:getModule("Marker"):getGoldMarkerCnt()
    if leftTime <= 0 then
        if leftGoldMarker > 0 then
            self._textMarkerTime:setString(string.format("%d局", leftGoldMarker))
        else
            self._textMarkerTime:setString("00:00")
            --游戏中记牌器时间到。
            self.isClickIcon = false
            self._qiPaoRoot:setVisible(true)
            self._posMarkerAni:setVisible(false)
            CF.SysTool.performWithDelayGlobal(
                function()
                    if self and not tolua.isnull(self) then
                        self._qiPaoRoot:setVisible(false)
                        self.isClickIcon = true
                    end
                end,
                3
            )
        end
    else
        local strTime
        if leftTime >= 24 * 60 * 60 then
            strTime = string.format("%.1f天", leftTime / (24 * 60 * 60))
        else
            strTime = string.format("%02d", math.floor(leftTime / (60 * 60))) .. ":" .. string.format("%02d", math.ceil((leftTime % (60 * 60)) / 60))
        end
        if CF.roomData and CF.roomData:isNewUI() then
            self._posMarkerAni:setVisible(false)
        else
            self._posMarkerAni:setVisible(leftTime < 60)
        end
        self._textMarkerTime:setString(strTime)
    end
end

function MarkerView:onMarkerLeftTimeChanged(event)
    self:updateLeftTimeText()
    self:updateMarkerBtnEnable()
    self:UpdateQiPao()
end

function MarkerView:UpdateQiPao()
    local leftTime = CF.game:getModule("Marker"):getLeftTime()
    local leftGoldMarker = CF.game:getModule("Marker"):getGoldMarkerCnt()
    if not self.isClickIcon then
        self._qiPaoRoot:setVisible(leftTime <= 0 and leftGoldMarker == 0)
    end
    local posx = self._panelMarkerBtn:getPositionX()
    if posx > 960 then
        self._qiPaoBg:setScaleX(-1)
        self._qiPaoText:setPositionX(-115)
    else
        self._qiPaoBg:setScaleX(1)
        self._qiPaoText:setPositionX(115)
    end
end

return MarkerView
�9  