local TeachingView = CF.gameClass("TeachingView", CF.ViewBase)

local cardSize = cc.size(234, 315)
local KuangRes = "DarkShuangKouTeaching_Img_mask1.png"
local Card = CF.gameRequire("Modules.CardLayer.Card")

function TeachingView:addClippingUI(node, params)
    local minX = 1000000
    local maxX = 0
    local minY = 1000000
    local maxY = 0
    for i = 1, #params do
        local param = params[i]
        minX = math.min(minX, param.pos.x - param.size.width / 2)
        maxX = math.max(maxX, param.pos.x + param.size.width / 2)
        minY = math.min(minY, param.pos.y - param.size.height / 2)
        maxY = math.max(maxY, param.pos.y + param.size.height / 2)
    end
    local paramRect = {x = minX + (maxX - minX) / 2, y = minY + (maxY - minY) / 2, width = maxX - minX, height = maxY - minY}
    local maskLayer = CF.TeachingTool:createMaskLayer(paramRect)
    node:addChild(maskLayer, 999)
end

function TeachingView:setAllowAreaFull()
    local visibleSize = cc.Director:getInstance():getVisibleSize()
    self._maskLayer:setAllowAreas({{x = 0, y = 0, width = visibleSize.width, height = visibleSize.height}})
end

function TeachingView:setAllowAreaNone()
    local params = {
        {pos = {x = 0, y = 0}, size = {width = 0, height = 0}}
    }
    self:setAllowArea(params)
end

function TeachingView:setAllowArea(params)
    if params == nil or #params == 0 then
        return
    end
    local minX = 1000000
    local maxX = 0
    local minY = 1000000
    local maxY = 0
    for i = 1, #params do
        local param = params[i]
        minX = math.min(minX, param.pos.x - param.size.width / 2)
        maxX = math.max(maxX, param.pos.x + param.size.width / 2)
        minY = math.min(minY, param.pos.y - param.size.height / 2)
        maxY = math.max(maxY, param.pos.y + param.size.height / 2)
    end
    local paramRect = {x = minX, y = minY, width = maxX - minX, height = maxY - minY}

    -- 跳过按钮
    local node = self._skipLayer
    local pos11 = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
    local pos = self._maskLayer:convertToWorldSpace(pos11)
    local contentSize = node:getContentSize()
    local skipRect = {x = pos.x - contentSize.width / 2, y = pos.y - contentSize.height / 2, width = contentSize.width, height = contentSize.height}

    local rects = {paramRect, skipRect}
    self._maskLayer:setAllowAreas(rects)
    -- self._maskLayer:showDebugFrame()
end

function TeachingView:ctor(param)
    param = param or {}
    TeachingView.super.ctor(self, param)

    self._gameScene = param
    self._cardLayer = self._gameScene._viewList["GameLayer"]._cardLayer
    self._gameLayer = self._gameScene._viewList["GameLayer"]
    self._guideStep = 0
    self._maskLayer = CF.TeachingTool:createTouchMaskLayer()
    self:addChild(self._maskLayer, 999)

    self._guideParams = {
        [1] = {layer = self._guideLayer, func = handler(self, self.showRoundGuide)},
        [2] = {layer = self._guideLayer, func = handler(self, self.showRuleGuide)},
        [3] = {layer = self._guideLayer, func = handler(self, self.showSelectCardsGuide)},
        [4] = {layer = self._guideLayer, func = handler(self, self.showPlayGuide)},
        [5] = {layer = self._guideLayer, func = handler(self, self.showCompleteGuide1)},
        [6] = {layer = self._guideLayer, func = handler(self, self.showCompleteGuide2)},
        [7] = {layer = self._guideLayer, func = handler(self, self.showSelectCardsGuide2)},
        [8] = {layer = self._guideLayer, func = handler(self, self.showPlayGuide2)},
        [9] = {layer = self._guideLayer, func = handler(self, self.showCompleteGuide3)},
        [10] = {layer = self._guideLayer, func = handler(self, self.showCompleteGuide4)},
        [11] = {layer = self._guideLayer, func = handler(self, self.showResult)},
        [12] = {layer = self._guideLayer, func = handler(self, self.showGetReward)}
    }
    self:clearPanel()
    self:showStepLayer()
end

function TeachingView:onEnter()
    TeachingView.super.onEnter(self)
    self:initListenerEvent()
    self._listenerCheckedCard = cc.EventListenerCustom:create("UICardLayer.UICardArea.onEventCheckedCard", handler(self, self.gameEventCheckedCards))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerCheckedCard, 1)
end

function TeachingView:onExit()
    TeachingView.super.onExit(self)
    self:initListenerEvent()
end

function TeachingView:onDestroy()
    TeachingView.super.onDestroy(self)
    self:initListenerEvent()
end

function TeachingView:initListenerEvent()
    if self._listenerCheckedCard then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerCheckedCard)
        self._listenerCheckedCard = nil
    end
end

function TeachingView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/Teaching.csb"
end

function TeachingView:getBindingInfo()
    return {
        ["_KW_CLIPP_LAYER"] = {varName = "_clippLayer"}, -- 挖孔层
        ["_KW_GUIDE_LAYER"] = {varName = "_guideLayer"}, -- 黑色遮罩层
        ["_KW_POS_ANI_OUT_CARD"] = {varName = "_posOutCardBtn"}, -- 出牌按钮特效层
        ["_KW_TOUCH_LAYER"] = {varName = "_touchLayer", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onClickNextStep"}, -- 点击层
        ["_KW_LAYER_SKIP"] = {varName = "_skipLayer", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onClickSkip", style = CF.UIButton.CLICK_STYLE.NOEFFECT},
        ["_KW_PANEL_ROUND_DIBAN"] = {varName = "_roundPanel"},
        ["_KW_LAYER_STEP_"] = {varName = "_stepLayer", beginIndex = 1, endIndex = 11},
        ["_KW_POS_BAOJI_ANI_"] = {varName = "_posBaojiAni", beginIndex = 1, endIndex = 3},
        ["_KW_IMG_BAOJI_"] = {varName = "_imgBaoji", beginIndex = 1, endIndex = 3},
        ["_KW_POS_ANI_FINGER"] = {varName = "_posFingerAni"},
        ["_KW_PANEL_RIGHT_TOP_BTNS"] = {varName = "_rightTopBtn"},
        ["_KW_BTN_RULE"] = {varName = "_rulePanel"}
    }
end

function TeachingView:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("Teaching"), eventKeyName = "EVENT_TEACHING_DATA", callBack = "onGuideData"},
        {module = CF.game:getModule("Teaching"), eventKeyName = "EVENT_TEACHING_NEXT_STEP", callBack = "onGuideNextStep"}
    }
    return eventTable
end

function TeachingView:getAdaptationConfig()
    return {
        {node = self._rightTopBtn, bRight = true, bHalf = false},
        {node = self._stepLayer2, bRight = true, bHalf = false}
    }
end

function TeachingView:gameEventCheckedCards(event)
    local selectCardIDs = event.selectCardIDs
    if #selectCardIDs == 2 and selectCardIDs[1] == 2 and selectCardIDs[2] == 15 and self._guideStep == 3 then
        self:onClickNextStep()
    elseif #selectCardIDs == 8 and self._guideStep == 7 then
        self:onClickNextStep()
    end
end

function TeachingView:onGuideData(event)
    if event.msg.step then
        self:updateView(event.msg.step, event.msg.stepName)
    end
end

function TeachingView:onGuideNextStep(event)
    self:clearPanel()
end

function TeachingView:showTipAni(node)
    local scaleTime = 0.2
    local resizeTime = 0.3

    local tipPanel = node:getChildByName("_KW_TIP_PANEL")
    tipPanel:setScale(0.1)
    tipPanel:runAction(cc.Sequence:create(cc.ScaleTo:create(scaleTime, 1)))

    local kuang = tipPanel:getChildByName("_KW_KUANG")
    kuang:setVisible(false)
    kuang:setScale(0.1)
    kuang:runAction(cc.Sequence:create(cc.DelayTime:create(scaleTime), cc.Show:create(), cc.ScaleTo:create(resizeTime, 1)))

    local textContent = tipPanel:getChildByName("_KW_TEXT_CONTENT")
    textContent:setVisible(false)
    textContent:runAction(cc.Sequence:create(cc.DelayTime:create(scaleTime + resizeTime), cc.Show:create()))

    local textContinue = tipPanel:getChildByName("_KW_TEXT_CONTINUE")
    textContinue:setVisible(false)
    textContinue:runAction(cc.Sequence:create(cc.DelayTime:create(scaleTime + resizeTime), cc.Show:create()))
end

function TeachingView:showStepLayer(step)
    for i = 1, 13 do
        local node = self["_stepLayer" .. i]
        if node then
            node:setVisible(i == step)
            if i == step then
                self:showTipAni(node)
            end
        end
    end
end

function TeachingView:updateView(curStep, stepName)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.yxyd25031001, {block_item_id = tostring(curStep), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
    self._guideStep = curStep
    self:showStepLayer(self._guideStep)
    local param = self._guideParams[self._guideStep]
    if param then
        param.layer:runAction(
            cc.Sequence:create(
                cc.DelayTime:create(param.delay or 0),
                cc.CallFunc:create(
                    function()
                        if param.func then
                            param.func()
                        end
                    end
                )
            )
        )
    end
end

function TeachingView:clearPanel()
    self:showStepLayer()
    self:setAllowAreaNone()
    self._rightTopBtn:setVisible(false)
    self._touchLayer:setVisible(false)
    self._guideLayer:setVisible(false)
    self._guideLayer:removeAllChildren()
    self._clippLayer:removeAllChildren()
    self._posOutCardBtn:removeAllChildren()
    self._posFingerAni:removeAllChildren()
    self._posFingerAni:stopAllActions()
    for i = 1, 3 do
        self["_imgBaoji" .. i]:setVisible(false)
    end
    for i = 1, 3 do
        self["_posBaojiAni" .. i]:removeAllChildren()
    end
end

function TeachingView:getClipShowTab()
    local clipTab = nil
    if self._guideStep == 3 then
        clipTab = {startIndex = 1, endIndex = 2}
    elseif self._guideStep == 7 then
        clipTab = {startIndex = 1, endIndex = 8}
    end
    return clipTab
end

-- 轮次信息展示
function TeachingView:showRoundGuide()
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(false)
    local params = {}
    local params1 = self:addBtnClip(self._roundPanel, KuangRes, cc.size(564, 100))
    table.insertto(params, params1, 0)
    self:addClippingUI(self._clippLayer, params)
    self:setAllowAreaFull()
end

-- 规则说明
function TeachingView:showRuleGuide()
    self._rightTopBtn:setVisible(true)
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(false)
    local params = {}
    local params1 = self:addBtnClip(self._rulePanel, KuangRes, cc.size(90, 120))
    table.insertto(params, params1, 0)
    self:addClippingUI(self._clippLayer, params)
    self:setAllowAreaFull()
end

-- 首次出牌提示
function TeachingView:showSelectCardsGuide()
    self._touchLayer:setVisible(false)
    self._guideLayer:setVisible(false)
    local clipTab = self:getClipShowTab()
    if not clipTab then
        return
    end
    local params = {}
    local params1 = self:addSelfCardClip(clipTab)
    table.insertto(params, params1, 0)
    local cnt = #params1
    CF.SpineManager:playAni(self._posFingerAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ty_xsdj", "animation2", true)
    self._posFingerAni:runAction(
        cc.RepeatForever:create(
            cc.Sequence:create(
                cc.MoveTo:create(0, cc.p(params1[1].pos.x - 50, params1[1].pos.y - 50)),
                cc.ScaleTo:create(0.2, 0.8),
                cc.MoveTo:create(0.4, cc.p(params1[cnt].pos.x, params1[cnt].pos.y - 50)),
                cc.ScaleTo:create(0.2, 1),
                cc.DelayTime:create(0.4)
            )
        )
    )
    self:addClippingUI(self._clippLayer, params)
    self:setAllowArea(params)
end

-- 首次出牌
function TeachingView:showPlayGuide()
    self._touchLayer:setVisible(false)
    self._guideLayer:setVisible(false)
    local params = {}
    local params1 = self:addBtnClip(self._gameLayer._outCardBtn, KuangRes, cc.size(340, 140))
    table.insertto(params, params1, 0)
    self._posOutCardBtn:setPosition(cc.p(params1[1].pos.x, params1[1].pos.y + 1))
    CF.SpineManager:playAni(self._posOutCardBtn, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ap_jx_angx", "animation", true, nil, nil, false)
    self._posFingerAni:setPosition(cc.p(params1[1].pos.x + 100, params1[1].pos.y - 30))
    CF.SpineManager:playAni(self._posFingerAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ty_xsdj", "animation", true, nil, nil, false)
    self:setAllowArea(params)
end

-- 第一轮比牌阶段1
function TeachingView:showCompleteGuide1()
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(true)
    local allPos = self:cloneOutCardNode({2, 4})
    local y = math.abs(allPos[2].y - allPos[1].y)
    self._posBaojiAni1:setScaleY(y / 382)
    local cb = function()
        self._imgBaoji1:setVisible(true)
    end
    CF.SpineManager:playAni(self._posBaojiAni1, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ap_jx_jt", "animation", false, cb)
    self:setAllowAreaFull()
end

-- 第一轮比牌阶段2
function TeachingView:showCompleteGuide2()
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(true)
    local allPos = self:cloneOutCardNode({1, 3})
    local x = math.abs(allPos[2].x - allPos[1].x)
    self._posBaojiAni2:setScaleX(x / 1404)
    local cb = function()
        self._imgBaoji2:setVisible(true)
    end
    CF.SpineManager:playAni(self._posBaojiAni2, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ap_jx_jt", "animation3", false, cb)
    self:setAllowAreaFull()
end

-- 第二轮补牌
function TeachingView:showSelectCardsGuide2()
    local clipTab = self:getClipShowTab()
    if not clipTab then
        return
    end
    local params = {}
    local params1 = self:addSelfCardClip(clipTab)
    table.insertto(params, params1, 0)
    local cnt = #params1
    CF.SpineManager:playAni(self._posFingerAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ty_xsdj", "animation2", true)
    self._posFingerAni:runAction(
        cc.RepeatForever:create(
            cc.Sequence:create(
                cc.MoveTo:create(0, cc.p(params1[1].pos.x - 50, params1[1].pos.y - 50)),
                cc.ScaleTo:create(0.2, 0.8),
                cc.MoveTo:create(1, cc.p(params1[cnt].pos.x, params1[cnt].pos.y - 50)),
                cc.ScaleTo:create(0.2, 1),
                cc.DelayTime:create(0.4)
            )
        )
    )
    self:addClippingUI(self._clippLayer, params)
    self:setAllowArea(params)
end

-- 第二轮出牌
function TeachingView:showPlayGuide2()
    self._touchLayer:setVisible(false)
    self._guideLayer:setVisible(false)
    local params = {}
    local params1 = self:addBtnClip(self._gameLayer._outCardBtn, KuangRes, cc.size(331, 128))
    table.insertto(params, params1, 0)
    self._posOutCardBtn:setPosition(cc.p(params1[1].pos.x, params1[1].pos.y + 1))
    CF.SpineManager:playAni(self._posOutCardBtn, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ap_jx_angx", "animation", true, nil, nil, false)
    self._posFingerAni:setPosition(cc.p(params1[1].pos.x + 100, params1[1].pos.y - 30))
    CF.SpineManager:playAni(self._posFingerAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ty_xsdj", "animation", true, nil, nil, false)
    self:setAllowArea(params)
end

-- 第二轮比牌阶段1
function TeachingView:showCompleteGuide3()
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(false)
    local allPos = self:cloneOutCardNode({1, 2})
    local x = math.abs(allPos[2].x - allPos[1].x)
    self._posBaojiAni3:setScaleX(x / 702)
    local y = math.abs(allPos[2].y - allPos[1].y)
    self._posBaojiAni3:setScaleY(y / 217)
    local cb = function()
        self._imgBaoji3:setVisible(true)
    end
    CF.SpineManager:playAni(self._posBaojiAni3, CF.gameResourceRootPath .. "DarkShuangKou/Spine/Teaching/", "zzb_ap_jx_jt", "animation2", false, cb)
    self:setAllowAreaFull()
end

-- 第二轮比牌阶段2
function TeachingView:showCompleteGuide4()
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(true)
    self:cloneOutCardNode({1, 2})
    self:setAllowAreaFull()
end

function TeachingView:showResult()
    self._touchLayer:setVisible(true)
    self._guideLayer:setVisible(true)
    self:setAllowAreaFull()
end

function TeachingView:showGetReward()
    local showReward = CF.game:getModule("Teaching"):checkCanGetReward(1)
    if not showReward then
        self:onClickNextStep()
    end
end

function TeachingView:addSelfCardClip(indexs)
    local startIndex = indexs.startIndex or 1
    local endIndex = indexs.endIndex or 1
    local params = {}
    self._selfCards = self._cardLayer._tHandCardArea[2]
    for i = 1, #(self._selfCards._cards) do
        local index = #self._selfCards._cards - i + 1
        if i < startIndex or i > endIndex then
            self._selfCards._cards[index]:setCardState(Card.STATE.DISSELECT)
        end
    end
    for i = startIndex, endIndex do
        local node = self._selfCards._cards[#self._selfCards._cards - i + 1]
        local pos11 = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
        local pos = self._clippLayer:convertToWorldSpace(pos11)
        local param = {path = KuangRes, pos = pos, size = clone(cardSize)}
        local adaptWidth = 125
        if i ~= #self._selfCards._cards then
            param.size.width = param.size.width - adaptWidth
            pos.x = pos.x - adaptWidth / 2
        end
        table.insert(params, param)
    end
    return params
end

function TeachingView:cloneOutCardNode(localSeats)
    local allPos = {}
    for n = 1, #localSeats do
        local cardAreaCards = self._cardLayer._tOutCardArea[localSeats[n]]
        local node = cardAreaCards
        local pos11 = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
        local pos = self._guideLayer:convertToWorldSpace(pos11)
        table.insert(allPos, pos)
        local cloneNode = cardAreaCards:deepCloneNode()
        self._guideLayer:addChild(cloneNode)
        cloneNode:setPosition(pos)
    end
    return allPos
end

function TeachingView:addBtnClip(node, spritePath, btnSize)
    local params = {}
    if node then
        local pos = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
        local param = {path = spritePath, pos = pos, size = btnSize}
        table.insert(params, param)
    end
    return params
end

function TeachingView:onClickNextStep()
    CF.game:getModule("Teaching"):clickNextGuide()
    self:clearPanel()
end

function TeachingView:onClickSkip()
    XH.NewThrowDataManager:throwData(
        XH.NewThrowDataDefine.yxyd25031002,
        {page_item_id = "跳过引导", block_item_id = tostring(self._guideStep), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())}
    )
    local showReward = CF.game:getModule("Teaching"):checkCanGetReward(1)
    if not showReward then
        CF.game:getModule("Teaching"):goPlay()
    end
end

return TeachingView
   �L  