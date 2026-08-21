-- 选择需要创建的比赛场
local TeaHouseFAQView = class("TeaHouseFAQView",TeaHouse.View)

local KW_BG_QUESTION = "_KW_BG_QUESTION"
local KW_BG_ANSWER = "_KW_BG_ANSWER"
local KW_IMG_OPEN_TIP = "_KW_IMG_OPEN_TIP"
local KW_IMG_CLOSE_TIP = "_KW_IMG_CLOSE_TIP"
local KW_PANEL_POS = "_KW_PANEL_POS"

TeaHouseFAQView.RAW_RES_BINDING_CSB =
{
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseFAQView.csb",
    binding = {
        ["_KW_BTN_CLOSE"] = {tag = "_KW_BTN_CLOSE",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_BTN_CUSSERVICE"] = {tag = "_KW_BTN_CUSSERVICE",name = "_btnCusService",class = "btn",events = "onTouchCusService"},
        ["_KW_TEXT_LISTVIEW"] = {tag = "_KW_TEXT_LISTVIEW",name = "_textListView",class = "listview"},
        ["_KW_PANEL_Q2"] = {tag = "_KW_PANEL_Q2",name = "_panelQ2",class = "panel"},
        ["_KW_PANEL_Q3"] = {tag = "_KW_PANEL_Q3",name = "_panelQ3",class = "panel"},
        ["_KW_PANEL_Q4"] = {tag = "_KW_PANEL_Q4",name = "_panelQ4",class = "panel"},
    }
}

function TeaHouseFAQView:ctor()
    TeaHouseFAQView.super.ctor(self)
    self._qusetionPanle = {
        self._panelQ2,
        self._panelQ3,
        self._panelQ4,
    }
    self:initUI()
end

local matchPath = "res/cocosStudio/TeaHouse/Image/teahouse_FAQ_view/match_FAQ_img_Q%d.png"

function TeaHouseFAQView:initUI()
    for i, panel in pairs(self._qusetionPanle) do
        self:closePanel(panel)
        local qusBG = ccui.Helper:seekWidgetByName(panel, KW_BG_QUESTION)
        qusBG:addTouchEventListener( handler(self, self.onTouchQustionBG) )
        qusBG:setTag(i)
    end
end

function TeaHouseFAQView:closePanel(panel)
    local qusBG = ccui.Helper:seekWidgetByName(panel, KW_BG_QUESTION)
    local ansBG = ccui.Helper:seekWidgetByName(panel, KW_BG_ANSWER)
    local openTip = ccui.Helper:seekWidgetByName(panel, KW_IMG_OPEN_TIP)
    local closeTip = ccui.Helper:seekWidgetByName(panel, KW_IMG_CLOSE_TIP)
    local posPanel = ccui.Helper:seekWidgetByName(panel, KW_PANEL_POS)
    openTip:setVisible(true)
    closeTip:setVisible(false)
    ansBG:setVisible(false)
    local qusBGSize = qusBG:getContentSize()
    local ansBGSize = ansBG:getContentSize()
    panel:setContentSize(qusBGSize.width, qusBGSize.height)
    posPanel:setPositionY(qusBGSize.height)
    panel._isopen = false
end

function TeaHouseFAQView:openPanel(panel)
    local qusBG = ccui.Helper:seekWidgetByName(panel, KW_BG_QUESTION)
    local ansBG = ccui.Helper:seekWidgetByName(panel, KW_BG_ANSWER)
    local openTip = ccui.Helper:seekWidgetByName(panel, KW_IMG_OPEN_TIP)
    local closeTip = ccui.Helper:seekWidgetByName(panel, KW_IMG_CLOSE_TIP)
    local posPanel = ccui.Helper:seekWidgetByName(panel, KW_PANEL_POS)
    openTip:setVisible(false)
    closeTip:setVisible(true)
    ansBG:setVisible(true)
    local qusBGSize = qusBG:getContentSize()
    local ansBGSize = ansBG:getContentSize()
    panel:setContentSize(qusBGSize.width, qusBGSize.height + ansBGSize.height)
    posPanel:setPositionY(qusBGSize.height + ansBGSize.height)
    panel._isopen = true
end

function TeaHouseFAQView:onTouchQustionBG(send, eventType)
    if ccui.TouchEventType.ended ~= eventType then
        return
    end
    local tag = send:getTag()
    local fatherPanel = self._qusetionPanle[tag]
    if fatherPanel._isopen then
        self:closePanel(fatherPanel)
    else
        self:openPanel(fatherPanel)
    end
    self._textListView:refreshView()
    self._textListView:jumpToItem(tag, cc.p(0, 0), cc.p(0, 1))
end

function TeaHouseFAQView:onCloseClicked(send, eventType)
    if ccui.TouchEventType.ended ~= eventType then
        return
    end
    self:close()
end

function TeaHouseFAQView:onTouchCusService(send, eventType)
    if ccui.TouchEventType.ended ~= eventType then
        return
    end
    TeaHouse.showCusServiceView("QYQFAQ")
end

return TeaHouseFAQView
