local CutMahsView = CF.gameClass("CutMahsView", CF.ViewBase)
local CutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine")

CutMahsView.ClassName = "CutMahsView"

function CutMahsView:ctor(param)
    CutMahsView.super.ctor(self)
    self._param = param or {}
    self._isCostCut = false -- 是否已经提前扣费
    self._isFree = CF.roomData._bIsFreeCut -- 是否免费
    self._defaultNum = 17 -- 默认数量
    self._cardYDiff = 46 -- Y轴间距
    if type(self._param) == "string" then
        if string.find(self._param, "shufflecut=1") or string.find(self._param, "preCutCost=1") then
            self._isCostCut = true
        end
    end
    self:setName(self.ClassName)
    self:initUI()
end

function CutMahsView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CutMahsAniLayer.csb"
end

function CutMahsView:getBindingInfo()
    return {
        --
        ["_KW_LEFT"] = {varName = "_left"},
        ["_KW_RIGHT"] = {varName = "_right"},
        ["_KW_UP"] = {varName = "_up"},
        ["_KW_ROOT_PANEL"] = {varName = "_root"},
        ["_KW_DOWN"] = {varName = "_down"},
        ["_KW_TIP_TEXT"] = {varName = "_text"},
        ["_KW_FINGER"] = {varName = "_finger"},
        ["_KW_PANEL_COST"] = {varName = "_panelCost", onTouchEnded = "onTouchEventCut"},
        ["_KW_TXT_FREE"] = {varName = "_txtFree"},
        ["_KW_PANEL_ANI_2"] = {varName = "_panelAniEx"},
        ["_KW_IMG_CARD"] = {varName = "_imgCard"},
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_TXT_COST"] = {varName = "_txtCost"},
        ["_KW_TXT_LEFT"] = {varName = "_txtLeft"},
        ["_KW_TX1"] = {varName = "_tx1"},
        ["_KW_TX2"] = {varName = "_tx2"},
        ["_KW_CLOSE"] = {varName = "_close", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCloseEx"},
        ["_KW_IMG_CARD_QUAN"] = {varName = "_imgCardQuan"}
    }
end

function CutMahsView:getProxyEvents()
    return { --
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_CLOSE_VIEW", callBack = "onCloseView"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseProps.event_key, callBack = "onRespUseProp"}
    }
end

-- 使用道具
function CutMahsView:onRespUseProp(event)
    local usePropMsg = CF.GameMProtocol.RespUseProps:new()
    usePropMsg:bistream(event.msg.buff, event.msg.len)
    if usePropMsg.flag == 0 then -- 使用成功
        if string.find(usePropMsg.param, "curcard=1") then
            CF.roomData:reqCutCardsState(1)
            self._isCostCut = true
            self._panelAniEx:stopAllActions()
            self:initUI()
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080823, self._reportData)
        end
    else
        CF.TipTool.showToast("使用道具失败")
        self:onTouchEventClose()
    end
    return usePropMsg
end

function CutMahsView:replaceMah()
    for i = 1, self._defaultNum do
        local temp = self._left:getChildByName("KW_MAH_" .. i)
        if temp ~= nil then
            local mah1 = temp:getChildByName("Image_35_0")
            local mah2 = temp:getChildByName("Image_35")
            mah1:loadTexture("change_game_cut_mah_back_1.png", ccui.TextureResType.plistType)
            mah2:loadTexture("change_game_cut_mah_back_1.png", ccui.TextureResType.plistType)
        end

        local temp = self._right:getChildByName("KW_MAH_" .. i)
        if temp ~= nil then
            local mah1 = temp:getChildByName("Image_35_0")
            local mah2 = temp:getChildByName("Image_35")
            mah1:loadTexture("change_game_cut_mah_back_1.png", ccui.TextureResType.plistType)
            mah2:loadTexture("change_game_cut_mah_back_1.png", ccui.TextureResType.plistType)
        end

        local temp = self._up:getChildByName("KW_MAH_" .. i)
        if temp ~= nil then
            local mah1 = temp:getChildByName("Image_35_0")
            local mah2 = temp:getChildByName("Image_35")
            mah1:loadTexture("change_game_cut_mah_back_2.png", ccui.TextureResType.plistType)
            mah2:loadTexture("change_game_cut_mah_back_2.png", ccui.TextureResType.plistType)
        end

        local temp = self._down:getChildByName("KW_MAH_" .. i)
        if temp ~= nil then
            local mah1 = temp:getChildByName("MAH_" .. i)
            local mah2 = temp:getChildByName("SMAH_" .. i)
            mah1:loadTexture("change_game_cut_mah_back_2.png", ccui.TextureResType.plistType)
            mah2:loadTexture("change_game_cut_mah_back_2.png", ccui.TextureResType.plistType)
        end
    end
end

function CutMahsView:initUI()

    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        self:replaceMah()
    end
    
    self._close:setVisible(not self._isCostCut)
    self._panelCost:setVisible(not self._isCostCut)
    if self._isCostCut then
        CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_SUCCESS)
        self:initCardLayer()
    else
        local quanCount = CF.game:getModule("PropUse"):getPropCnt(CutCardsDefine.QuanId)
        -- self._imgCard:setVisible(not self._isFree)
        local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CutCardsDefine.QuanId)
        if not shuffleInfo or not shuffleInfo.cost then
            self:onTouchEventClose()
            return
        end
        self._txtFree:setVisible(self._isFree)
        self._txtCost:setVisible(not self._isFree)
        self._imgCardQuan:setVisible(not self._isFree and shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN)
        self._imgDiamond:setVisible(not self._isFree and (shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND or shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH))
        self._imgCard:setVisible(not self._isFree and shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.ROOMCARD)
        self._txtCost:setText("x" .. tostring(shuffleInfo.cost) .. "）")

        self._time = 4
        self._text:setText("完成洗牌，您是否切牌？（3S）")
        local repeatAct2 = cc.RepeatForever:create(cc.Sequence:create(cc.CallFunc:create(function()
            self._time = self._time - 1
            self._text:setText("完成洗牌，您是否切牌？（" .. self._time .. "S）")
            if self._time <= 0 then
                self._panelAniEx:stopAllActions()
                self:onTouchEventClose()
            end
        end), cc.DelayTime:create(1)))
        self._panelAniEx:runAction(repeatAct2)
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080807)
    end
end

function CutMahsView:initCardLayer()
    self._finger:setVisible(true)
    local actionTime = 1.55
    local posX = self._finger:getPositionX()
    local actSequence = cc.Sequence:create(cc.MoveTo:create(actionTime, cc.p(posX + 300, self._finger:getPositionY())), cc.MoveTo:create(actionTime, cc.p(posX - 300, self._finger:getPositionY())))
    self._finger:runAction(actSequence)
    self._text:setText("点击麻将，选择你要切牌的位置（3S）")
    self._timeEx = 4
    local repeatAct2 = cc.RepeatForever:create(cc.Sequence:create(cc.CallFunc:create(function()
        self._timeEx = self._timeEx - 1
        self._text:setText("点击麻将，选择你要切牌的位置（" .. self._timeEx .. "S）")
        if self._timeEx <= 0 then
            self._panelAniEx:stopAllActions()
            self:onTouchEventCard(math.floor(self._defaultNum * 0.5), ccui.TouchEventType.ended)
        end
    end), cc.DelayTime:create(1)))
    self._panelAniEx:runAction(repeatAct2)
    for i = 1, self._defaultNum do
        local temp = self._down:getChildByName("KW_MAH_" .. i)
        if temp ~= nil then
            local addMah = temp:getChildByName("SMAH_" .. i)
            if addMah ~= nil then
                addMah:addTouchEventListener(handler(self, self.onTouchEventCard))
            end
        end
    end
end

function CutMahsView:onTouchEventCard(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self.inAni then
        return
    end
    self._finger:stopAllActions()
    self._finger:setVisible(false)
    self.inAni = true
    self._panelAniEx:stopAllActions()
    local index = math.floor(self._defaultNum * 0.5)
    if type(send) == "number" then
        index = send
    else
        local splitData = string.split(send:getName(), "_")
        if #splitData > 0 and type(tonumber(splitData[#splitData])) == "number" then
            index = tonumber(splitData[#splitData])
        end
    end
    if index == self._defaultNum then
        index = index - 1
    end
    self.startIndex = index
    self:startAllAni()
end

function CutMahsView:startAllAni()
    self._leftIndex = self._defaultNum - self.startIndex
    self:startAniL()
    self:startAniR()
    self:startAniU()
    self:startAniD()
end

function CutMahsView:onTouchEventCut()
    if self._isClick then
        return
    end
    self._isClick = true
    local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CutCardsDefine.QuanId)
    if not shuffleInfo or not shuffleInfo.cost then
        self:onTouchEventClose()
        return
    end
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_TIP_DO)
    if self._isFree then
        CF.roomData:reqCutCardsState(1)
        self._isCostCut = true
        self._panelAniEx:stopAllActions()
        self:initUI()
        return
    end
    local propNum = shuffleInfo.cost
    local propID = shuffleInfo.propID
    -- 小房卡特殊处理
    local finalPropID, finalPropNum = CF.game:getModule("PropUse"):getFinalPropAndNum(propID, propNum)
    self._reportData = {costInfo={propid=CutCardsDefine.QuanId,costPropid=shuffleInfo.propID,cnt=shuffleInfo.cost}}
    CF.game:getModule("PropUse"):sendRequestUseProps(finalPropID, finalPropNum, 3, "curcard=1", 2)
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080822, self._reportData)
end

function CutMahsView:startAniD()
    self._down:stopAllActions()
    self._cardXDiff = 93
    local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
        self._text:setText('切牌中')
        for i = 1, self.startIndex do
            self:moveAction(self._down, i, -self._cardXDiff * 0.5, 0, 0.5)
        end
        for i = self.startIndex + 1, self._defaultNum do
            self:moveAction(self._down, i, self._root:getContentSize().width, 0, 0.5)
        end
    end), cc.DelayTime:create(0.55), cc.CallFunc:create(function()
        self._text:setText('')
        for i = 1, self.startIndex do
            self:moveAction(self._down, i, (self._defaultNum - self.startIndex + 0.5) * self._cardXDiff, 0, 0.5)
        end
    end), cc.DelayTime:create(0.9), cc.CallFunc:create(function()
        for i = self.startIndex + 1, self._defaultNum do
            self:updatePos(self._down, i, -self._cardXDiff * (self._defaultNum - i))
        end
        for i = self.startIndex + 1, self._defaultNum do
            self:moveAction(self._down, i, (self._defaultNum - self.startIndex - 0.5) * self._cardXDiff, 0, 0.2)
        end
    end), cc.DelayTime:create(0.25), cc.CallFunc:create(function()
        for i = 1, self._defaultNum do
            self:moveAction(self._down, i, 0, self._down:getContentSize().height * 0.5, 0.1)
        end
    end), cc.DelayTime:create(0.3), cc.CallFunc:create(function()
        for i = 1, self._defaultNum do
            self:moveAction(self._down, i, 0, -self._down:getContentSize().height * 0.5, 0.1)
        end
    end), cc.DelayTime:create(0.15), cc.CallFunc:create(function()
        self._tx1:setVisible(true)
        self._tx2:setVisible(true)
        self._tx2:stopAllActions()
        local moveAction = cc.MoveTo:create(0.3, cc.p(self._tx2:getPositionX() + self._down:getContentSize().width - self._tx2:getContentSize().width, self._tx2:getPositionY()))
        self._tx2:runAction(moveAction)
    end), cc.DelayTime:create(0.35), cc.CallFunc:create(function()
        self:onTouchEventClose()
    end))
    self._down:runAction(actSequence)
end

function CutMahsView:startAniU()
    if self._leftIndex == nil then
        return
    end
    self._cardUXDiff = 66
    self._up:stopAllActions()
    local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
        for i = 1, self._leftIndex do
            self:moveAction(self._up, i, -self._root:getContentSize().width, 0, 0.5)
        end
        for i = self._leftIndex + 1, self._defaultNum do
            self:moveAction(self._up, i, self._cardUXDiff * 0.5, 0, 0.5)
        end
    end), cc.DelayTime:create(0.55), cc.CallFunc:create(function()
        for i = self._leftIndex + 1, self._defaultNum do
            self:moveAction(self._up, i, -self._cardUXDiff * (self._leftIndex + 0.5), 0, 0.5)
        end
    end), cc.DelayTime:create(0.9), cc.CallFunc:create(function()
        for i = 1, self._leftIndex do
            self:updatePos(self._up, i, self._root:getContentSize().width + i * self._cardUXDiff)
        end
        for i = 1, self._leftIndex do
            self:moveAction(self._up, i, -self._root:getContentSize().width + (self.startIndex - 0.5) * self._cardUXDiff, 0, 0.2)
        end
    end))
    self._up:runAction(actSequence)
end

function CutMahsView:startAniR()
    if self._leftIndex == nil then
        return
    end
    self._right:stopAllActions()
    local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
        for i = 1, self._leftIndex do
            self:moveAction(self._right, i, 0, -self._root:getContentSize().height, 0.5)
        end
        for i = self._leftIndex + 1, self._defaultNum do
            self:moveAction(self._right, i, 0, self._cardYDiff * 0.5, 0.5)
        end
    end), cc.DelayTime:create(0.55), cc.CallFunc:create(function()
        for i = self._leftIndex + 1, self._defaultNum do
            self:moveAction(self._right, i, 0, -(self._leftIndex + 0.5) * self._cardYDiff, 0.5)
        end
    end), cc.DelayTime:create(0.9), cc.CallFunc:create(function()
        for i = 1, self._leftIndex do
            local temp = self._right:getChildByName('KW_MAH_' .. i)
            if temp ~= nil then
                temp:setLocalZOrder(999)
            end
        end
        for i = 1, self._leftIndex do
            self:updatePos(self._right, i, nil, -self._cardYDiff * i - self._root:getContentSize().height)
        end
        for i = 1, self._leftIndex do
            self:moveAction(self._right, i, 0, -(self._root:getContentSize().height + self._cardYDiff * (self._leftIndex + 0.5)), 0.2)
        end
    end))
    self._right:runAction(actSequence)
end

function CutMahsView:startAniL()
    self._left:stopAllActions()
    local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
        for i = 1, self.startIndex do
            self:moveAction(self._left, i, 0, -self._cardYDiff * 0.5, 0.5)
        end
        for i = self.startIndex + 1, self._defaultNum do
            self:moveAction(self._left, i, 0, self._root:getContentSize().height, 0.5)
        end
    end), cc.DelayTime:create(0.55), cc.CallFunc:create(function()
        for i = 1, self.startIndex do
            self:moveAction(self._left, i, 0, (self._defaultNum - self.startIndex + 0.5) * self._cardYDiff, 0.5)
        end
    end), cc.DelayTime:create(0.9), cc.CallFunc:create(function()
        for i = 1, self.startIndex do
            local temp = self._left:getChildByName('KW_MAH_' .. i)
            if temp ~= nil then
                temp:setLocalZOrder(999)
            end
        end
        for i = self.startIndex + 1, self._defaultNum do
            self:updatePos(self._left, i, nil, self._root:getContentSize().height + self._cardYDiff * (self._defaultNum - i + 1))
        end
        for i = self.startIndex + 1, self._defaultNum do
            self:moveAction(self._left, i, 0, self._root:getContentSize().height - self._cardYDiff * (self.startIndex - 0.5), 0.2)
        end
    end))
    self._left:runAction(actSequence)
end

function CutMahsView:updatePos(node, index, posX, posY)
    if node ~= nil then
        local temp = node:getChildByName('KW_MAH_' .. index)
        if temp ~= nil then
            if posX ~= nil then
                temp:setPositionX(posX)
            end
            if posY ~= nil then
                temp:setPositionY(posY)
            end
        end
    end
end

function CutMahsView:moveAction(node, index, posX, posY, time)
    if node ~= nil then
        local temp = node:getChildByName('KW_MAH_' .. index)
        if temp ~= nil then
            temp:stopAllActions()
            local moveAction = cc.MoveTo:create(time, cc.p(temp:getPositionX() + posX, temp:getPositionY() - posY))
            temp:runAction(moveAction)
        end
    end
end

function CutMahsView:onTouchEventCloseEx()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_TIP_CLOSE)
    self:onTouchEventClose()
end

function CutMahsView:onTouchEventClose()
    self:startNextGame()
end

function CutMahsView:startNextGame()
    if CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() then
        CF.game:getModule("PropUse"):shuffleFinished()
    else
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    end
    self:close()
end

function CutMahsView:onCloseView()
    self:close()
end

-- 将窗体显示到屏幕
function CutMahsView:showSelf(zOrder)
    zOrder = zOrder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zOrder)
    end
    return self
end

return CutMahsView
