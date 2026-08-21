local DarkShuangKouChallengeView = class("DarkShuangKouChallengeView", XH.ViewBase)
local LocalConfig = require("lobby.Modules.GoldNew.Configs.LocalConfig")
local ViewAniConfig = require("app.Base.ViewAniConfig")

local tabs = {
    {name = "局数挑战", pageFile = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.GameRoundChallengeView"},
    {name = "每日答题", pageFile = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.DailyQuizChallengeView"},
    {name = "牌技挑战", pageFile = XH.goldLobbyRootPath .. ".Modules.DarkShuangKouChallenge.CardSkillChallengeView"}
}

function DarkShuangKouChallengeView:getCSBPath()
    return "hall/CSB/DarkShuangKouChallenge/MainLayer.csb"
end

function DarkShuangKouChallengeView:getBindingInfo()
    return {
        ["_KW_UI_ROOT_PANEL"] = {varName = "_rootPanel"},
        ["_KW_TAB_ITEM_"] = {varName = "_tabItem", beginIndex = 1, endIndex = 3},
        ["_KW_PANEL_PAGE_"] = {varName = "_panelPage", beginIndex = 1, endIndex = 3},
        ["_KW_PROCENT"] = {varName = "_procent"},
        ["_KW_PROGRESS_ITEM"] = {varName = "_processItem"},
        ["_KW_POS_ANI"] = {varName = "_posAni"},
        ["_KW_POS_TITLE_ANI"] = {varName = "_posTitleAni"},
        ["_KW_ANI_PANEL"] = {varName = "_aniPanel"},
        ["_KW_UI_PROGRESS_PANEL"] = {varName = "_panelProcess"},
        ["_KW_LIGHT_"] = {varName = "_posLight", beginIndex = 1, endIndex = 2},
        ["_KW_BTN_HELP"] = {varName = "_btnHelp", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventHelp"},
        ["_KW_BTN_BACK"] = {varName = "_btnBack", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"}
    }
end

function DarkShuangKouChallengeView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_GAME_ROUND_INFO", callBack = "initUI"},
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_DAILY_QUIZ_INFO", callBack = "initUI"},
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_CARD_SKILL_INFO", callBack = "initUI"},
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "KW_EVENT_DARK_SHUANG_KOU_CHANGE_TO_TAB", callBack = "changeToTab"}
    }
end

function DarkShuangKouChallengeView:ctor(areaId)
    DarkShuangKouChallengeView.super.ctor(self)
    self._areaId = areaId
    self._tabIndex = 0
    self:flushTabItems()
    self:flushTabRedPoint()

    -- 打开时再请求数据
    XH.lobby:getModule("DarkShuangKouChallenge"):reqGameRoundChallengeInfo()
    XH.lobby:getModule("DarkShuangKouChallenge"):reqDailyQuizChallengeInfo()
    XH.lobby:getModule("DarkShuangKouChallenge"):reqCardSkillChallengeInfo()

    local path = "hall/CSB/DarkShuangKouChallenge/spine/"
    XH.SpineManager:playAni(self._posAni, path, "zzb_ad_pjdtz", "loop", true)
    self:clickTabEnd(1, true)
    local path2 = "animation/Common/"
    for i = 1, 2 do
        XH.SpineManager:playAni(self["_posLight" .. i], path2, "zzb_ty_taiyangguang", "animation", true)
    end
    XH.SpineManager:playAni(self._posTitleAni, path2, "zzb_ty_btgx2", "animation")
end

function DarkShuangKouChallengeView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootPanel}
end

function DarkShuangKouChallengeView:initUI()
    self:flushTabRedPoint()
end

-- 增加标签节点
function DarkShuangKouChallengeView:flushTabItems()
    for i = 1, 3 do
        local item = self["_tabItem" .. i]
        item:addTouchEventListener(handler(self, self.onClickItem))
        item:setTag(i)
    end
end

function DarkShuangKouChallengeView:flushTabRedPoint()
    for index = 1, 3 do
        local item = self["_tabItem" .. index]
        local redPoint = false
        local module = XH.lobby:getModule("DarkShuangKouChallenge")
        if module["checkRedPoint" .. index] then
            redPoint = module["checkRedPoint" .. index](module)
        end
        item:getChildByName("_KW_TAB_ITEM_RED_POINT"):setVisible(redPoint)
    end
end

function DarkShuangKouChallengeView:onClickItem(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local selectIndex = send:getTag()
    -- XH.lobby:getModule("LuckyTask"):reqGetContent(tempTask, not isInGame)
    self:clickTabEnd(tonumber(selectIndex))
end

function DarkShuangKouChallengeView:changeToTab(event)
    self:clickTabEnd(event.msg.index)
end

function DarkShuangKouChallengeView:clickTabEnd(selectIndex, first)
    self._tabIndex = selectIndex
    for index = 1, 3 do
        local item = self["_tabItem" .. index]
        self["_panelPage" .. index]:setVisible(index == selectIndex)
        item:getChildByName("_KW_TAB_ITEM_UNCLICK"):setVisible(index ~= selectIndex)
        item:getChildByName("_KW_TAB_ITEM_CLICK"):setVisible(index == selectIndex)
        local textNode = item:getChildByName("_KW_TAB_ITEM_TEXT")
        if index == selectIndex then
            textNode:setTextColor(cc.c3b(0x9d, 0x46, 0x00))
            textNode:setFontSize(50)
        else
            textNode:setTextColor(cc.c3b(0x48, 0x45, 0x81))
            textNode:setFontSize(36)
        end
    end

    if self["_panelPage" .. self._tabIndex]:getChildrenCount() <= 0 then
        local pageFile = tabs[self._tabIndex].pageFile
        local node = require(pageFile).new(self._areaId)
        if node then
            node:setCascadeOpacityEnabled(true)
            self["_panelPage" .. self._tabIndex]:addChild(node)
        end
    end
    if not first then
        if selectIndex == 1 then
            self:throwClickEvent("局数挑战")
        elseif selectIndex == 2 then
            self:throwClickEvent("每日答题")
        elseif selectIndex == 3 then
            self:throwClickEvent("牌技挑战")
        end
    end
end

function DarkShuangKouChallengeView:onTouchEventHelp(send, event)
    XH.viewManager:openView("DarkShuangKouChallengeRuleView")
    self:throwClickEvent("规则")
end

function DarkShuangKouChallengeView:throwClickEvent(btnName)
    local page = "金币游戏结算"
    if self._areaId == LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT then
        page = "新金币大厅"
    elseif self._areaId == LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT then
        page = "选场大厅"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040302, {page = page, block_label = btnName})
end

function DarkShuangKouChallengeView:onTouchEventClose(send, event)
    self:close()
end

return DarkShuangKouChallengeView
o