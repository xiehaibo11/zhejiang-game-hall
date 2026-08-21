local CutCardsView = CF.gameClass("CutCardsView", CF.ViewBase)
local CutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine")

CutCardsView.ClassName = "CutCardsView"

function CutCardsView:ctor(param)
    CutCardsView.super.ctor(self)
    self._param = param or {}
    self._isCostCut = false -- 是否已经提前扣费
    self._isFree = CF.roomData._bIsFreeCut -- 是否免费
    if type(self._param) == "string" then
        if string.find(self._param, "shufflecut=1") or string.find(self._param, "preCutCost=1") then
            self._isCostCut = true
        end
    end
    self:setName(self.ClassName)
    -- 判断游戏类型显示对应张数
    self.cardsNum = 54 -- 张数
    self.cardDiff = 15 -- 间距
    self.cardYDiff = 50 -- 上下间距
    if CF.gameSub:isDoubleKou(CF.roomData:getGameID()) then
        self.cardsNum = self.cardsNum * 2
        self.cardDiff = self.cardDiff * 0.5
    end
    self:reloadTexture()
    self:reloadTextureChangeCard()
    self:initUI()
end

function CutCardsView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CutCardsAniLayer.csb"
end

function CutCardsView:getBindingInfo()
    return {
        --
        ["_KW_CLOSE"] = {varName = "_close", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCloseEx"},
        ["_CARD_CUT_BTN"] = {varName = "_cutBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCut"},
        ["_CARD_DEMO"] = {varName = "_cardDemo"},
        ["_KW_PANEL_ANI"] = {varName = "_panelAni"},
        ["_KW_ROOT_PANEL"] = {varName = "_rootPanel"},
        ["_KW_PANEL_CUT"] = {varName = "_cutPanel"},
        ["_KW_TIP_TEXT"] = {varName = "_text"},
        ["_KW_PANEL_ANI_2"] = {varName = "_panelAniEx"},
        ["_KW_PANEL_COST"] = {varName = "_panelCost"},
        ["_KW_TXT_FREE"] = {varName = "_txtFree"},
        ["_KW_IMG_CARD"] = {varName = "_imgCard"},
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_TXT_COST"] = {varName = "_txtCost"},
        ["_KW_REDDI"] = {varName = "_redDi"},
        ["_KW_PANEL_IMGCUT"] = {varName = "_imgCut"},
        ["_KW_FINGER"] = {varName = "_finger"},
        ["_KW_IMG_CARD_QUAN"] = {varName = "_imgCardQuan"}
    }
end

function CutCardsView:getProxyEvents()
    return { --
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_CLOSE_VIEW", callBack = "onCloseView"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseProps.event_key, callBack = "onRespUseProp"}
    }
end

-- 展示手指动画
function CutCardsView:showGuideFinger(node, posX, posY)
    local pos = cc.p(node:getContentSize().width + posX, node:getContentSize().height + posY)
    CF.UITool.showFingerAni(node, -1, pos)
end

-- 使用道具
function CutCardsView:onRespUseProp(event)
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

function CutCardsView:reloadTexture()
    if not CF.game:getModule("PropUse"):isSupportNewAni() then
        return
    end
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_26", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_2", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_1", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D25", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_0", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_CUT_BTN", "game_cut_cards_new.png", ccui.TextureResType.plistType)
    self._cardDemo:loadTexture("game_cut_cards_new.png", ccui.TextureResType.plistType)
end

function CutCardsView:reloadTextureChangeCard()
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if not isChanged then
        return
    end
    self:flushCards("doublekou_back_1.png")
end

function CutCardsView:flushCards(path)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("res/tex/plist/doublekou_change_card.plist")
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_26", path, ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_2", path, ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_1", path, ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D25", path, ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2_0", path, ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_D2", path, ccui.TextureResType.plistType)
    CF.UITool.loadTexture(self._cutPanel, "_CARD_CUT_BTN", path, ccui.TextureResType.plistType)
    self._cardDemo:loadTexture(path, ccui.TextureResType.plistType)
end

function CutCardsView:initUI()
    self._cutPanel:setVisible(not self._isCostCut)
    self._close:setVisible(not self._isCostCut)
    self._panelCost:setVisible(not self._isCostCut)
    self._redDi:setVisible(not self._isCostCut)
    self._imgCut:setVisible(not self._isCostCut)
    if self._isCostCut then
        CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_SUCCESS)
        self:initCardLayer()
    else
        self:showGuideFinger(self._cutPanel, 35, -40)
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
        self._txtCost:setText(tostring(shuffleInfo.cost))
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

function CutCardsView:initCardLayer()
    self._finger:setVisible(true)
    local actionTime = 1.55
    local posX = self._finger:getPositionX()
    local actSequence = cc.Sequence:create(cc.MoveTo:create(actionTime, cc.p(posX + 300, self._finger:getPositionY())), cc.MoveTo:create(actionTime, cc.p(posX - 300, self._finger:getPositionY())))
    self._finger:runAction(actSequence)
    self._text:setText("点击扑克，选择你要切牌的位置（3S）")
    self._timeEx = 4
    local repeatAct2 = cc.RepeatForever:create(cc.Sequence:create(cc.CallFunc:create(function()
        self._timeEx = self._timeEx - 1
        self._text:setText("点击扑克，选择你要切牌的位置（" .. self._timeEx .. "S）")
        if self._timeEx <= 0 then
            self._panelAniEx:stopAllActions()
            self:onTouchEventCard(self._rootPanel:getChildByName(self.cardsNum * 0.5), ccui.TouchEventType.ended)
        end
    end), cc.DelayTime:create(1)))
    self._panelAniEx:runAction(repeatAct2)

    local startPosX, startPosY = self._cardDemo:getPosition()
    for i = 1, self.cardsNum do
        local temp = self._cardDemo:clone()
        temp:setName(i)
        temp:setPosition(startPosX + (i - 1 - self.cardsNum * 0.5) * self.cardDiff, startPosY)
        temp:setVisible(true)
        temp:addTouchEventListener(handler(self, self.onTouchEventCard))
        self._rootPanel:addChild(temp)
    end
end

function CutCardsView:onTouchEventCard(send, eventType)
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
    local index = tonumber(send:getName())
    if index == self.cardsNum then
        index = index - 1
    end
    self:onAniFirst(index)
end

function CutCardsView:onTouchEventCut()
    if self._isClick then
        return
    end
    self._isClick = true
    local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CutCardsDefine.QuanId)
    if not shuffleInfo or not shuffleInfo.cost == nil then
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

-- 阶段1 分牌
function CutCardsView:onAniFirst(cardNum)
    self.startIndex = cardNum
    self._panelAni:stopAllActions()
    local actSequence = cc.Sequence:create(cc.CallFunc:create(function()
        self._text:setText("切牌中")
        for i = 1, self.startIndex do
            self:moveActionX(i, -self._cardDemo:getContentSize().width / 2, 0.5)
        end
        for i = self.startIndex + 1, self.cardsNum do
            self:moveActionX(i, self._cardDemo:getContentSize().width / 2, 0.5)
        end
    end), cc.DelayTime:create(0.55), cc.CallFunc:create(function()
        self._text:setText("")
        for i = 1, self.startIndex do
            local temp = self._rootPanel:getChildByName(i)
            if temp ~= nil then
                temp:setLocalZOrder(999)
            end
        end
        for i = 1, self.startIndex do
            self:moveActionY(i, self.cardYDiff, 0.2)
        end
        for i = self.startIndex + 1, self.cardsNum do
            self:moveActionY(i, -self.cardYDiff, 0.2)
        end
    end), cc.DelayTime:create(0.25), cc.CallFunc:create(function()
        for i = 1, self.startIndex do
            self:moveActionX(i, (self.cardsNum - self.startIndex) * self.cardDiff + self._cardDemo:getContentSize().width, 0.3)
        end
        for i = self.startIndex + 1, self.cardsNum do
            self:moveActionX(i, -self.startIndex * self.cardDiff - self._cardDemo:getContentSize().width, 0.3)
        end
    end), cc.DelayTime:create(0.35), cc.CallFunc:create(function()
        for i = 1, self.startIndex do
            self:moveActionY(i, -self.cardYDiff, 0.2)
        end
        for i = self.startIndex + 1, self.cardsNum do
            self:moveActionY(i, self.cardYDiff, 0.2)
        end
    end), cc.DelayTime:create(0.25), cc.CallFunc:create(function()
        for i = 1, self.startIndex do
            self:moveActionX(i, (self.startIndex - self.cardsNum * 0.5 - i) * self.cardDiff - self._cardDemo:getContentSize().width * 0.5, 0.3)
        end
        for i = self.startIndex + 1, self.cardsNum do
            self:moveActionX(i, (self.startIndex + self.cardsNum * 0.5 - i) * self.cardDiff + self._cardDemo:getContentSize().width * 0.5, 0.3)
        end
    end), cc.DelayTime:create(0.35), cc.CallFunc:create(function()
        for i = 1, 12 do
            local temp = self._rootPanel:getChildByName(i)
            if temp ~= nil then
                temp:setLocalZOrder(999)
            end
        end
        for i = 1, 10 do
            self:moveActionY(i, (11 - i) * 6, 0.7)
        end
    end), cc.DelayTime:create(0.75), cc.CallFunc:create(function()
        self:onTouchEventClose()
    end))
    self._panelAni:runAction(actSequence)
end

-- 移动动画X
function CutCardsView:moveActionX(index, posX, time)
    local temp = self._rootPanel:getChildByName(index)
    if temp ~= nil then
        temp:stopAllActions()
        local moveAction = cc.MoveTo:create(time, cc.p(temp:getPositionX() + posX, temp:getPositionY()))
        temp:runAction(cc.Sequence:create(moveAction))
    end
end

-- 移动动画Y
function CutCardsView:moveActionY(index, posY, time)
    local temp = self._rootPanel:getChildByName(index)
    if temp ~= nil then
        temp:stopAllActions()
        local moveAction = cc.MoveTo:create(time, cc.p(temp:getPositionX(), temp:getPositionY() + posY))
        temp:runAction(cc.Sequence:create(moveAction))
    end
end

function CutCardsView:onTouchEventCloseEx()
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.CUT_CARDS_TIP_CLOSE)
    self:onTouchEventClose()
end

function CutCardsView:onTouchEventClose()
    self:startNextGame()
end

function CutCardsView:startNextGame()
    if CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() then
        CF.game:getModule("PropUse"):shuffleFinished()
    else
        CF.game:getModule("CenterBtns"):onStartGameEvent()
    end
    self:close()
end

function CutCardsView:onCloseView()
    self:close()
end

-- 将窗体显示到屏幕
function CutCardsView:showSelf(zOrder)
    zOrder = zOrder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zOrder)
    end
    return self
end

return CutCardsView
2;