--[[
请神整合界面

参考 FA 文档 3.1.2 / 3.1.3：
  · 全屏弹框，神祇横向单行 ListView（可左右滑动）
  · 默认定位到当前激活神祇，否则定位推荐神祇
  · 激活神祇卡片放大并播放循环动画，展示倒计时与祝福文案
  · 已购买未激活显示「选择庇护」，未购买显示购买按钮
  · 购买成功后关闭整合界面（赐福动画播放期间界面保持显示）

打开/关闭统一走 ViewManager：
  · 打开：XH.viewManager:openView("QingShenIntegrateView")
  · 关闭：self:close() 或 XH.viewManager:closeView("QingShenIntegrateView")
  · 配置：ViewsConfig.QingShenIntegrateView
]]
local QingShenIntegrateView = class("QingShenIntegrateView", XH.ViewBase)
local Define = require("lobby.Modules.QingShen.Define")
local PropPushDefine = require("lobby.Modules.PropPush.Define")
local Compat = require("lobby.Modules.PropPush.Compat")
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

local CARD_WIDTH = 630
local BTN_TEXT = PropPushDefine.BtnText[PropPushDefine.PushType.QingShen] or "请神"
local BUY_GLOW_ANI_DIR = "animation/GameCommon/qingshen/"
local BG_ANI_DIR = "animation/GameCommon/qingshen/Spine/"

function QingShenIntegrateView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PropPush/QingShenIntegrateLayer.csb"
end

function QingShenIntegrateView:getBindingInfo()
    return {
        ["_KW_TOUCH_LAYER"] = { varName = "_touchLayer" },
        ["_KW_ROOT_LAYER"] = { varName = "_rootNode" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "close" },
        ["_KW_BTN_PAGE_LEFT"] = { varName = "_btnPageLeft", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnPageLeft" },
        ["_KW_BTN_PAGE_RIGHT"] = { varName = "_btnPageRight", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnPageRight" },
        ["_KW_BTN_OLD_GOD"] = { varName = "_btnOldGod", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnOldGod" },
        ["_KW_BTN_KNOW"] = { varName = "_btnknow", type = XH.UI_TYPE.BUTTON, onTouchEnded = "closeOldGodGuide" },
        ["_KW_PANEL_PAGE"] = { varName = "_panelPage" },
        ["_KW_LIST_GOD"] = { varName = "_godListView" },
        ["_KW_GOD_ITEM"] = { varName = "_godItemTemplate" },
        ["_KW_PANEL_GUIDE"] = { varName = "_panelGuide" },
        ["_KW_NODE_ANI_DI"] = { varName = "_nodeAniDi" },
        ["_KW_NODE_ANI_DING"] = { varName = "_nodeAniDing" },
    }
end

function QingShenIntegrateView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("QingShen"), eventKeyName = "INTEGRATE_EVENT_REFRESH", callBack = "onIntegrateRefresh" },
        { module = XH.lobby:getModule("PropPush"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStartChanged" },
    }
end

function QingShenIntegrateView:ctor(param)
    QingShenIntegrateView.super.ctor(self)
    self._isKP = display.width / display.height >= (2340 / 1080) 
    self._param = type(param) == "table" and param or {}
    self._qingShenMod = XH.lobby:getModule("QingShen")
    self._cards = {}
    self._listFocusIndex = 0
    if self._godItemTemplate and not tolua.isnull(self._godItemTemplate) then
        self._godItemTemplate:setVisible(false)
    end
    self:_buildListView()
    if self._touchLayer and not tolua.isnull(self._touchLayer) then
        self._touchLayer:setOpacity(0)
        self._touchLayer:runAction(cc.FadeIn:create(10 / 30))
    end
    if self._qingShenMod then
        self._qingShenMod:prepareIntegrateView()
    end
    if self._btnOldGod and not tolua.isnull(self._btnOldGod) then
        local oldAni = cc.Node:create()
        oldAni:setScale(1)
        self._btnOldGod:addChild(oldAni)
        oldAni:setPosition(cc.p(75, 75))
        XH.SpineManager:playAni(oldAni,"animation/GameCommon/propPush/","bb_qcs_rukou","animation",true)
        self:setSlotAni(self._btnOldGod, "rukou")
    end
    if self._nodeAniDi and not tolua.isnull(self._nodeAniDi) then
        XH.SpineManager:playAniWithComplete(self._nodeAniDi, BG_ANI_DIR, "bb_dt_qsjh","cx", false, "loop", true)
    end
    if self._nodeAniDing and not tolua.isnull(self._nodeAniDing) then
        XH.SpineManager:playAniWithComplete(self._nodeAniDing, BG_ANI_DIR, "bb_dt_qsjh","cx_qian", false, "loop_qian", true)
    end
    self:refreshAllCards()

    if self._godListView and not tolua.isnull(self._godListView) then
        self._godListView:setScale(self._isKP and 1/0.9 or 1)
        self._godListView:setPositionY(self._isKP and 420 or 400)
    end
    -- self:_scrollToFocusProp()
    if self._btnClose and not tolua.isnull(self._btnClose) then
        self:setSlotAni(self._btnClose, "biaoti")
    end
end

function QingShenIntegrateView:setSlotAni(node, slot)
    if not node or tolua.isnull(node) or not slot then
        return
    end
    if not node.tryAddLuaComponent then
        return
    end
    node:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = BG_ANI_DIR.."bb_dt_qsjh.json", animationName = "cx", boneName = slot, slotName = slot})
end

function QingShenIntegrateView:initCodeBind()
    if not self._rootNode or tolua.isnull(self._rootNode) then
        return
    end
    -- local selfSize = self:getContentSize()
    -- local rootSize = self._rootNode:getContentSize()
    -- -- 按屏幕长宽比放大 root（至少一边大于设计稿），使 LeftEdge/RightEdge 能贴到可见区边缘
    -- local designW, designH = rootSize.width, rootSize.height
    -- if not designW or designW <= 0 or not designH or designH <= 0 then
    --     return
    -- end
    -- local screenAspect = selfSize.width / selfSize.height
    -- local designAspect = designW / designH
    -- local newW, newH = designW, designH
    -- if screenAspect > designAspect then
    --     newW = designH * screenAspect
    -- else
    --     newH = designW / screenAspect
    -- end
    -- self._rootNode:setContentSize(cc.size(newW, newH))
    -- ccui.Helper:doLayout(self._rootNode)

    -- local scaleX = selfSize.width / newW
    -- local scaleY = selfSize.height / newH
    -- self._rootScale = scaleX > scaleY and scaleY or scaleX
    -- self._rootNode:setScale(self._rootScale)
    -- self._rootNode:setPosition(selfSize.width / 2, selfSize.height / 2)
    -- if self._touchLayer and not tolua.isnull(self._touchLayer) then
    --     self._touchLayer:setPosition(selfSize.width / 2, selfSize.height / 2)
    -- end
end

function QingShenIntegrateView:onIntegrateRefresh()
    -- 装扮/时效异步回包后可能改变「第 2 位」神祇，需按最新状态重排
    self:_rebuildListIfOrderChanged()
    self:refreshAllCards()
    self:_updatePageArrows()
end

function QingShenIntegrateView:onGameStartChanged()
    -- 开局系统关闭，不计入「关闭」点击埋点
    QingShenIntegrateView.super.close(self)
end

--- 列表排序：默认妈祖放第 2 位；若有装扮且仍有效，则该装扮放第 2 位
function QingShenIntegrateView:_sortGodsForList(gods)
    local src = gods or {}
    local list = {}
    for i = 1, #src do
        list[i] = src[i]
    end
    if #list <= 1 then
        return list
    end

    local secondId = Define.QingShenPropId.MaZu
    local mod = self._qingShenMod
    if mod then
        local equipped = mod:getEquippedPropId()
        if equipped and mod:getGodPropTimeLeft(equipped) > 0 then
            secondId = equipped
        end
    end

    local others = {}
    local hasSecond = false
    for _, propId in ipairs(list) do
        if propId == secondId then
            hasSecond = true
        else
            others[#others + 1] = propId
        end
    end
    if not hasSecond then
        return list
    end

    local sorted = {}
    if #others >= 1 then
        sorted[1] = others[1]
        sorted[2] = secondId
        for i = 2, #others do
            sorted[#sorted + 1] = others[i]
        end
    else
        sorted[1] = secondId
    end
    return sorted
end

function QingShenIntegrateView:_isSameGodOrder(a, b)
    if not a or not b or #a ~= #b then
        return false
    end
    for i = 1, #a do
        if a[i] ~= b[i] then
            return false
        end
    end
    return true
end

function QingShenIntegrateView:_rebuildListIfOrderChanged()
    local mod = self._qingShenMod
    if not mod then
        return
    end
    local sorted = self:_sortGodsForList(mod:getGodList())
    if self:_isSameGodOrder(self._gods, sorted) then
        return
    end
    local focusPropId = nil
    if self._gods and self._listFocusIndex and self._gods[self._listFocusIndex + 1] then
        focusPropId = self._gods[self._listFocusIndex + 1]
    end
    self:_buildListView()
    if focusPropId then
        for i, pid in ipairs(self._gods or {}) do
            if pid == focusPropId then
                self:_scrollListToIndex(i - 1)
                break
            end
        end
    end
end

function QingShenIntegrateView:_buildListView()
    if not self._godListView or tolua.isnull(self._godListView) then
        return
    end
    if not self._qingShenMod or not self._godItemTemplate or tolua.isnull(self._godItemTemplate) then
        return
    end
    self._godListView:setScrollBarEnabled(false)
    self._godListView:removeAllItems()
    self._cards = {}
    self._listFrontSpacer = false
    self._listFrontSpacerWidth = 0

    local gods = self:_sortGodsForList(self._qingShenMod:getGodList())
    self._gods = gods
    local cardSize = self._godItemTemplate:getContentSize()
    self._propIdByIndex = {}

    -- 宽屏：ListView 宽超过 1920 时，最前插入「超出宽度一半」的占位，便于内容居中
    local listW = self._godListView:getContentSize().width
    if listW > 1920 then
        local spacerW = (listW - 1920) * 0.5
        local spacer = ccui.Widget:create()
        spacer:setContentSize(cc.size(spacerW, cardSize.height))
        self._godListView:pushBackCustomItem(spacer)
        self._listFrontSpacer = true
        self._listFrontSpacerWidth = spacerW
    end

    for i, propId in ipairs(gods) do
        self._propIdByIndex[i] = propId
        local card = self:_createGodCard(propId, i)
        self._godListView:pushBackCustomItem(card)
        self._cards[propId] = card
    end

    if not self._listScrollListenerBound then
        self._listScrollListenerBound = true
        self._godListView:addScrollViewEventListener(function(sender, eventType)
            if eventType == ccui.ScrollviewEventType.scrolling
                or eventType == ccui.ScrollviewEventType.scrollToLeft
                or eventType == ccui.ScrollviewEventType.scrollToRight
                or eventType == ccui.ScrollviewEventType.bounceLeft
                or eventType == ccui.ScrollviewEventType.bounceRight then
                self:_syncListFocusIndex()
                self:_updatePageArrows()
            end
        end)
    end
end

function QingShenIntegrateView:_createGodCard(propId, idx)
    local card = self._godItemTemplate:clone()
    card:setVisible(true)
    card._propId = propId

    local body = XH.UITool.seekNodeByName(card, "KW_BODY")
    local btnBuy = XH.UITool.seekNodeByName(card, "KW_BTN_BUY")
    local btnSwitch = XH.UITool.seekNodeByName(card, "KW_BTN_SWITCH")
    if btnBuy and not tolua.isnull(btnBuy) then
        btnBuy:addTouchEventListener(function(sender, eventType)
            if eventType == ccui.TouchEventType.ended then
                self:_onBtnBuy(propId)
            end
        end)
    end
    if btnSwitch and not tolua.isnull(btnSwitch) then
        btnSwitch:addTouchEventListener(function(sender, eventType)
            if eventType == ccui.TouchEventType.ended then
                self:_onBtnSwitch(propId)
            end
        end)
    end
    local aniName = {"guangong", "mazu", "pusa", "guanshengdijun", "wenshu"}
    self:setSlotAni(body, aniName[idx])
    self:setSlotAni(btnBuy, "btn"..idx)
    return card
end

function QingShenIntegrateView:_scrollListToIndex(index)
    if not self._godListView or tolua.isnull(self._godListView) then
        return
    end
    local gods = self._gods or {}
    if #gods == 0 then
        return
    end
    index = math.max(0, math.min(#gods - 1, index))
    self._listFocusIndex = index
    -- 有前置占位时，神祇卡片从 item 1 开始
    local itemIndex = index + (self._listFrontSpacer and 1 or 0)
    self._godListView:jumpToItem(itemIndex, cc.p(0.5, 0.5), cc.p(0.5, 0.5))
    self:_updatePageArrows()
end

function QingShenIntegrateView:_syncListFocusIndex()
    local list = self._godListView
    if not list or tolua.isnull(list) then
        return
    end
    local gods = self._gods or {}
    if #gods == 0 then
        return
    end
    local inner = list:getInnerContainer()
    local posX = inner:getPositionX()
    local viewW = list:getContentSize().width
    local centerX = viewW / 2 - posX
    local margin = list:getItemsMargin()
    local step = CARD_WIDTH + margin
    local spacerW = self._listFrontSpacerWidth or 0
    if self._listFrontSpacer and spacerW > 0 then
        spacerW = spacerW + margin
    end
    local idx = math.floor((centerX - spacerW - CARD_WIDTH / 2) / step + 0.5)
    self._listFocusIndex = math.max(0, math.min(#gods - 1, idx))
end

function QingShenIntegrateView:_getListScrollState()
    if not self._godListView or tolua.isnull(self._godListView) then
        return false, false
    end
    local inner = self._godListView:getInnerContainer()
    local posX = inner:getPositionX()
    local viewW = self._godListView:getContentSize().width
    local innerW = self._godListView:getInnerContainerSize().width
    local canLeft = posX < -1
    local canRight = posX > viewW - innerW + 1
    return canLeft, canRight
end

function QingShenIntegrateView:_scrollToFocusProp()
    if not self._qingShenMod then
        self:_updatePageArrows()
        return
    end
    local focusId = self._qingShenMod:getDefaultFocusPropId()
    if not focusId then
        self:_updatePageArrows()
        return
    end
    local gods = self._gods or {}
    local index = 0
    for i, pid in ipairs(gods) do
        if pid == focusId then
            index = i - 1
            break
        end
    end
    self:_scrollListToIndex(index)
    self:refreshAllCards()
end

function QingShenIntegrateView:_updatePageArrows()
    if not self._godListView or tolua.isnull(self._godListView) then
        return
    end
    local gods = self._gods or {}
    local showArrows = #gods > Define.GODS_PER_PAGE
    local canLeft, canRight = self:_getListScrollState()
    if self._btnPageLeft and not tolua.isnull(self._btnPageLeft) then
        self._btnPageLeft:setVisible(showArrows)
        self._btnPageLeft:setTouchEnabled(showArrows and canLeft)
    end
    if self._btnPageRight and not tolua.isnull(self._btnPageRight) then
        self._btnPageRight:setVisible(showArrows)
        self._btnPageRight:setTouchEnabled(showArrows and canRight)
    end
end

function QingShenIntegrateView:onBtnPageLeft()
    self:_scrollListToIndex((self._listFocusIndex or 0) - Define.GODS_PER_PAGE)
end

function QingShenIntegrateView:onBtnPageRight()
    self:_scrollListToIndex((self._listFocusIndex or 0) + Define.GODS_PER_PAGE)
end

function QingShenIntegrateView:close()
    local focusPropId = self._qingShenMod and self._qingShenMod.getDefaultFocusPropId and self._qingShenMod:getDefaultFocusPropId()
    if self._qingShenMod and self._qingShenMod.throwIntegrateClick then
        self._qingShenMod:throwIntegrateClick(Define.ThrowClickType.Close, focusPropId)
    end
    QingShenIntegrateView.super.close(self)
end

function QingShenIntegrateView:onBtnOldGod()
    if self._oldGodGuideShowing then
        self:closeOldGodGuide()
    end
    if self._qingShenMod and self._qingShenMod.throwIntegrateClick then
        local focusPropId = self._qingShenMod.getDefaultFocusPropId and self._qingShenMod:getDefaultFocusPropId()
        self._qingShenMod:throwIntegrateClick(Define.ThrowClickType.OldGod, focusPropId)
    end
    local scene = display.getRunningScene()
    if not scene or tolua.isnull(scene) then
        return
    end
    CF.gameRequire("Modules.CaiYunProp.View").new():showSelf()
    QingShenIntegrateView.super.close(self)
end

--- 首次进入：界面变暗，仅 _btnOldGod 高亮，并显示引导结点
function QingShenIntegrateView:showOldGodGuide()
    if self._oldGodGuideShowing then
        return false
    end
    if not self._btnOldGod or tolua.isnull(self._btnOldGod) or not self._rootNode then
        return false
    end

    self._oldGodGuideShowing = true
    self._btnOldGod:stopAllActions()
    self._btnOldGod:runAction(cc.EaseBackOut:create(cc.ScaleTo:create(0.25, 1.2)))
    if self._panelGuide and not tolua.isnull(self._panelGuide) then
        self._panelGuide:setVisible(true)
    end

    local autoSec = Define.GOD_TIPS_INTEGRATE_AUTO_CLOSE_SEC or 5
    self._oldGodGuideAction = self:runAction(cc.Sequence:create(
        cc.DelayTime:create(autoSec),
        cc.CallFunc:create(function()
            self:closeOldGodGuide()
        end)
    ))
    return true
end

function QingShenIntegrateView:closeOldGodGuide()
    if not self._oldGodGuideShowing then
        return
    end
    self._oldGodGuideShowing = false
    if self._oldGodGuideAction then
        self:stopAction(self._oldGodGuideAction)
        self._oldGodGuideAction = nil
    end
    if self._panelGuide and not tolua.isnull(self._panelGuide) then
        self._panelGuide:setVisible(false)
    end
    if self._btnOldGod and not tolua.isnull(self._btnOldGod) then
        self._btnOldGod:stopAllActions()
        self._btnOldGod:runAction(cc.EaseBackIn:create(cc.ScaleTo:create(0.2, 1)))
    end
    if self._qingShenMod and self._qingShenMod.markIntegrateGodTipsShown then
        self._qingShenMod:markIntegrateGodTipsShown()
    end
end

function QingShenIntegrateView:onEnter()
    QingShenIntegrateView.super.onEnter(self)
    self:_startCountdownSchedule()
    if self._qingShenMod and self._qingShenMod.throwData then
        self._qingShenMod:throwData(XH.NewThrowDataDefine.oh26042110)
    end
    if self._qingShenMod and self._qingShenMod.tryShowIntegrateGodTips then
        display.performWithDelay(self, function()
            if tolua.isnull(self) then
                return
            end
            self._qingShenMod:tryShowIntegrateGodTips(self)
        end, 0.25)
    end
end

function QingShenIntegrateView:onExit()
    self:closeOldGodGuide()
    self:_stopCountdownSchedule()
    QingShenIntegrateView.super.onExit(self)
end

function QingShenIntegrateView:refreshAllCards()
    for propId, card in pairs(self._cards or {}) do
        if card and not tolua.isnull(card) then
            self:_refreshGodCard(card, propId)
        end
    end
    self:_updatePageArrows()
end

function QingShenIntegrateView:_refreshGodCard(card, propId)
    local mod = self._qingShenMod
    if not mod or not card or tolua.isnull(card) then
        return
    end
    local state = mod:getGodCardState(propId)
    local curLv = mod:getGodRecommendLevel(propId) or 0
    local info = mod:getInfoForPropId(propId)

    -- XH.UITool.setText(card, "KW_NAME", name)
    local icon = XH.UITool.seekNodeByName(card, "KW_ICON")
    -- 静态立绘改为 Spine：未激活 / 已激活未装扮 / 已装扮
    if icon and not tolua.isnull(icon) then
        icon:setVisible(false)
    end

    local imgStatus = XH.UITool.seekNodeByName(card, "KW_IMG_STATUS")
    local textStatus = XH.UITool.seekNodeByName(card, "KW_TEXT_STATUS")
    local textCountdown = XH.UITool.seekNodeByName(card, "KW_TEXT_COUNTDOWN")
    local imgCountdown = XH.UITool.seekNodeByName(card, "KW_IMG_COUNTDOWN")
    local btnBuy = XH.UITool.seekNodeByName(card, "KW_BTN_BUY")
    local btnSwitch = XH.UITool.seekNodeByName(card, "KW_BTN_SWITCH")
    local panelAniGod = XH.UITool.seekNodeByName(card, "KW_PANEL_ANI_GOD")
    local panelAniGuang = XH.UITool.seekNodeByName(card, "KW_PANEL_ANI_GUANG")
    local imgIcon = XH.UITool.seekNodeByName(card, "KW_ICON")
    local imgGuang = XH.UITool.seekNodeByName(card, "KW_IMG_GUANG")
    local imgName = XH.UITool.seekNodeByName(card, "KW_NAME_BG")
    local imgBgBless = XH.UITool.seekNodeByName(card, "KW_IMG_BG_BLESS")
    local imgBless = XH.UITool.seekNodeByName(card, "KW_IMG_BLESS")

    local left = mod:getGodPropTimeLeft(propId)
    local haveTime = left > 0
    local isActive = state == Define.CardState.Active and haveTime

    local uiCfg = {
        [Define.QingShenPropId.MaZu] = {name = "Img_mzd2", status = "Img_mz1", bless = "Img_mz_txt"},
        [Define.QingShenPropId.GuanDiShengJun] = {name = "Img_mzd1", status = "Img_gg1", bless = "Img_gg_txt"},
        [Define.QingShenPropId.WenShuPuSa] = {name = "Img_mzd3", status = "Img_ps1", bless = "Img_ws_txt"},
    }
    local uiGuang = {"Img_ghuang", "Img_gl", "Img_gz"}
    local nameCfg = uiCfg[tonumber(propId)]
    if imgName and not tolua.isnull(imgName) then
        imgName:setPositionY(isActive and 670 or 580)
        imgName:loadTexture("Common/CSB/GameBase/PropPush/Image/Integrate/" .. (nameCfg and nameCfg.name or "Img_mzd1") .. ".png", ccui.TextureResType.plistType)
    end
    if imgBless and not tolua.isnull(imgBless) then
        local y = isActive and 320 or (haveTime and 320 or 230)
        imgBless:setPositionY(y)
        imgBless:ignoreContentAdaptWithSize(true)
        imgBless:setScale((not haveTime or isActive) and 1 or 0.75)
        imgBless:loadTexture("Common/CSB/GameBase/PropPush/Image/Integrate/" .. (nameCfg and nameCfg.bless or "Img_mz_txt") .. curLv .. ".png", ccui.TextureResType.plistType)
    end
    if imgBgBless and not tolua.isnull(imgBgBless) then
        local y = isActive and 360 or (haveTime and 350 or 260)
        imgBgBless:setPositionY(y)
        imgBgBless:setScale((not haveTime or isActive) and 1 or 0.75)
        local fileName = haveTime and "Img_yjh.png" or "Img_wjh.png"
        imgBgBless:loadTexture("Common/CSB/GameBase/PropPush/Image/Integrate/" .. fileName, ccui.TextureResType.plistType)
    end

    if textStatus and not tolua.isnull(textStatus) and imgStatus and not tolua.isnull(imgStatus) then
        imgStatus:setVisible(haveTime)
        textStatus:setVisible(haveTime)
        imgStatus:ignoreContentAdaptWithSize(true)
        imgStatus:loadTexture("Common/CSB/GameBase/PropPush/Image/Integrate/" .. (isActive and "Img_d2" or "Img_d1") .. ".png", ccui.TextureResType.plistType)
        local blessText = isActive and "请神祝福中..." or "请神"
        textStatus:setString(curLv .. "级" .. blessText)
    end

    local leftText = mod:formatBlessTimeLeft(left)
    if textCountdown and not tolua.isnull(textCountdown) then
        if imgCountdown and not tolua.isnull(imgCountdown) then
            imgCountdown:setVisible(haveTime)
        end
        textCountdown:setString(leftText)
    end
    if imgIcon and not tolua.isnull(imgIcon) then
        imgIcon:setVisible(not haveTime)
        local iconCfg = uiCfg[tonumber(propId)]
        local iconName = (iconCfg and iconCfg.status or "Img_mzd1")
        imgIcon:loadTexture("Common/CSB/GameBase/PropPush/Image/Integrate/" .. iconName .. ".png", ccui.TextureResType.plistType)
    end
    if imgGuang and not tolua.isnull(imgGuang) then
        imgGuang:setVisible(isActive)
        local iconName = (uiGuang[curLv] or "Img_ghuang")
        imgGuang:loadTexture("Common/CSB/GameBase/PropPush/Image/Integrate/" .. iconName .. ".png", ccui.TextureResType.localType)
    end

    if btnBuy and not tolua.isnull(btnBuy) then
        self:_refreshBuyButton(btnBuy, info)
        self:_playCardBuyGlow(btnBuy, isActive)
    end
    if btnSwitch and not tolua.isnull(btnSwitch) then
        btnSwitch:setVisible(haveTime and not isActive)
    end
    if panelAniGod and not tolua.isnull(panelAniGod) then
        panelAniGod:setScale(isActive and 1.07 or 0.85)
        local y = isActive and 228 or 225
        if propId == Define.QingShenPropId.MaZu then
            y = y + 30
        end
        panelAniGod:setPositionY(y)
    end
    self:_refreshCardPortrait(panelAniGod, panelAniGuang, propId, state, info, haveTime)
end

function QingShenIntegrateView:_hideCardBuyPanels(btnBuy)
    if not btnBuy or tolua.isnull(btnBuy) then
        return
    end
    for _, name in ipairs({ "_KW_PANEL_DISCOUNT", "_KW_PANEL_ORIGINAL" }) do
        local panel = XH.UITool.seekNodeByName(btnBuy, name)
        if panel and not tolua.isnull(panel) then
            panel:setVisible(false)
        end
    end
    local tipPanel = XH.UITool.seekNodeByName(btnBuy, "_KW_TIP")
    if tipPanel and not tolua.isnull(tipPanel) then
        tipPanel:setVisible(false)
    end
end

function QingShenIntegrateView:_setCardCostPropIcon(showPanel, costPropId)
    if not showPanel or tolua.isnull(showPanel) then
        return
    end
    local icon = XH.UITool.seekNodeByName(showPanel, "icon_cost_prop")
    if not icon or tolua.isnull(icon) then
        return
    end
    if Compat.isDiamondPropId(costPropId) then
        icon:setVisible(true)
        XH.UITool.loadTexture(showPanel, "icon_cost_prop", "Common/CSB/GameBase/PropPush/Image/PropPush_zuanshi.png", ccui.TextureResType.plistType)
    elseif Compat.isRoomCardPropId(costPropId) then
        icon:setVisible(true)
        XH.UITool.loadTexture(showPanel, "icon_cost_prop", "Common/CSB/GameBase/PropPush/Image/PropPush_fangka.png", ccui.TextureResType.plistType)
    else
        icon:setVisible(false)
    end
end

--- 购买按钮 UI（使用 _KW_BTN_BUY 同款子节点）
function QingShenIntegrateView:_refreshBuyButton(btnBuy, info)
    if not btnBuy or tolua.isnull(btnBuy) or not info then
        return
    end
    self:_hideCardBuyPanels(btnBuy)

    local tipPanel = XH.UITool.seekNodeByName(btnBuy, "_KW_TIP")
    local panelDiscount = XH.UITool.seekNodeByName(btnBuy, "_KW_PANEL_DISCOUNT")
    local panelOriginal = XH.UITool.seekNodeByName(btnBuy, "_KW_PANEL_ORIGINAL")
    local tipText = info.freeInfo and info.freeInfo.title or nil
    local text = BTN_TEXT
    local showPanel = nil

    if info.isFree then
        showPanel = panelOriginal
        text = "免费" .. text
        if tipText and tipText ~= "" and tipPanel and not tolua.isnull(tipPanel) then
            tipPanel:setVisible(true)
            XH.UITool.setText(tipPanel, "text_tip", tipText)
        end
    elseif info.costPropId == info.propId then
        showPanel = panelOriginal
        text = text .. "x" .. tostring(info.propCount or 0)
    elseif info.discount and info.discount > 0 and info.discount < 1 then
        showPanel = panelDiscount
        text = tostring(info.price or 0) .. text
        if tipText and tipPanel and not tolua.isnull(tipPanel) then
            tipPanel:setVisible(true)
            XH.UITool.setText(tipPanel, "text_tip", tipText)
        end
    else
        showPanel = panelOriginal
        text = tostring(info.originalPrice or info.price or 0) .. text
    end

    if not showPanel or tolua.isnull(showPanel) then
        return
    end
    if not tipText or tipText == "" then
        if tipPanel and not tolua.isnull(tipPanel) then
            tipPanel:setVisible(false)
        end
    end

    showPanel:setVisible(true)
    XH.UITool.setText(showPanel, "text_price", text)
    local originalPrice = XH.UITool.seekNodeByName(showPanel, "original_price")
    if originalPrice and not tolua.isnull(originalPrice) then
        if showPanel == panelDiscount then
            originalPrice:setVisible(true)
            XH.UITool.setText(showPanel, "original_price", "原价：" .. tostring(info.originalPrice or ""))
        else
            originalPrice:setVisible(false)
        end
    end

    if info.isFree or info.costPropId == info.propId then
        local icon = XH.UITool.seekNodeByName(showPanel, "icon_cost_prop")
        if icon and not tolua.isnull(icon) then
            icon:setVisible(false)
        end
    else
        self:_setCardCostPropIcon(showPanel, info.costPropId)
    end
    Utils:doLayoutHoriz({showPanel:getChildByName("icon_cost_prop"),showPanel:getChildByName("text_price")},0,3)
end

function QingShenIntegrateView:_playCardBuyGlow(btnBuy, isActive)
    if not btnBuy or tolua.isnull(btnBuy) then
        return
    end
    local aniGuang = XH.UITool.seekNodeByName(btnBuy, "_KW_ANI_GUANG")
    if not aniGuang or tolua.isnull(aniGuang) then
        return
    end
    if btnBuy._ani then
        btnBuy._ani:setVisible(isActive)
    end
    if not isActive or btnBuy._glowPlayed then
        return
    end
    btnBuy._glowPlayed = true
    btnBuy._ani = XH.SpineManager:playAni(aniGuang, BUY_GLOW_ANI_DIR, "bb_dt_anniusg", "animation", true)
end

--- 卡片立绘：json 用请神礼包 bb_dt_hylb_*，atlas/png 用 QS_STAGE2 eff_qs_*2
--- 播放：先 cx 出现，再 loop 循环（与 PropPush QingShenLiBao 一致）
function QingShenIntegrateView:_refreshCardPortrait(panelAni, panelAniGuang, propId, state, info, haveTime)
    if not panelAni or tolua.isnull(panelAni) then
        return
    end
    local animCfg = Define.QS_INTEGRATE_CARD_ANIM[propId]
    if not animCfg then
        return
    end

    panelAni:setVisible(haveTime)
    if not haveTime then
        return
    end

    local animName = animCfg.anim or "cx"
    local animLoop = animCfg.animLoop or "loop"

    if panelAniGuang and not tolua.isnull(panelAniGuang) then
        if state == Define.CardState.Active and haveTime and not panelAni._aniGuang then
            XH.SpineManager:playAni(panelAniGuang, BUY_GLOW_ANI_DIR, "bb_dt_kuosanguang","animation",true)
            panelAni._aniGuang = true
        end
        panelAniGuang:setVisible(state == Define.CardState.Active and haveTime)
    end

    -- 倒计时每秒 refresh 时：同一神祇+同一状态不重建 Spine
    local spine = panelAni._qingShenSpine
    if spine and not tolua.isnull(spine)
        and panelAni._qingShenPropId == propId
        -- and panelAni._qingShenState == state
        and panelAni._qingShenAnim == animName then
        return
    end
    if state > 1 and panelAni._qingShenState ~= nil and panelAni._qingShenState > 1 then
        return 
    end

    panelAni:removeAllChildren()
    panelAni._qingShenSpine = nil
    local mod = self._qingShenMod
    spine = mod and mod:safeCreateSpine(animCfg)
    if not spine then
        return
    end
    spine:update(0)
    if animCfg.scale then
        spine:setScale(animCfg.scale)
    end
    panelAni:addChild(spine)
    panelAni._qingShenSpine = spine
    panelAni._qingShenPropId = propId
    panelAni._qingShenState = state
    panelAni._qingShenAnim = animName

    spine:setAnimation(0, animName, false)
    spine:addAnimation(0, animLoop, true)
end

function QingShenIntegrateView:_onBtnBuy(propId)
    -- local propPush = XH.lobby:getModule("PropPush")
    -- if propPush and propPush:isGameStart() then
    --     XH.TipTool.showToast("游戏已开始", 3)
    --     return
    -- end
    if not self._qingShenMod then
        return
    end
    if self._qingShenMod.throwIntegrateClick then
        self._qingShenMod:throwIntegrateClick(Define.ThrowClickType.Buy, propId)
    end
    self._qingShenMod:purchaseGod(propId)
end

function QingShenIntegrateView:_onBtnSwitch(propId)
    if not self._qingShenMod then
        return
    end
    if self._qingShenMod.throwIntegrateClick then
        self._qingShenMod:throwIntegrateClick(Define.ThrowClickType.Switch, propId)
    end
    self._qingShenMod:wearGod(propId)
end

function QingShenIntegrateView:_startCountdownSchedule()
    self:_stopCountdownSchedule()
    local scheduler = cc.Director:getInstance():getScheduler()
    self._countdownScheduleId = scheduler:scheduleScriptFunc(function()
        if tolua.isnull(self) then
            return
        end
        self:refreshAllCards()
    end, 1.0, false)
end

function QingShenIntegrateView:_stopCountdownSchedule()
    if self._countdownScheduleId then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._countdownScheduleId)
        self._countdownScheduleId = nil
    end
end

return QingShenIntegrateView
