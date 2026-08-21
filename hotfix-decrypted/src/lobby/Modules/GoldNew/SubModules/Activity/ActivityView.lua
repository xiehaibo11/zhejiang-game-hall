local ActivityView = class("ActivityView", XH.Bridge.ViewBase)
local TabsActivityConfig = require("lobby.Modules.TabsActivity.Config")
local Utils = import("...Tool.Utils")
local LocalConfig = import("...Configs.LocalConfig")
local ActionUtils = import("...Tool.ActionUtils")
local LobbyConfig = require("lobby.Modules.Lobby.Config")

local KW_UI_ROOT_LAYER = "_KW_UI_ROOT_LAYER"

local KW_FIRST_TAB_CNT = 2
local KW_FIRST_TAB_TYPE = {NOTIFY = 0, ACTIVITY = 1}
local KW_IMG_BG_ACT = {
    DAILYSIGN = "Img_beijing_sign.jpg",
    NEWUSERSIGN = "Img_beijing_sign.jpg",
    FREEDRAW = "Img_beijing_kgg.jpg",
    GONG_GAO = "Img_beijing_gg.jpg",
    GAMECENTER = "Img_beijing_sign.jpg",
    default = "Img_beijing_sign.jpg"
}

function ActivityView:getCSBPath()
    return XH.Bridge:getCCSResPath("Act/ActivityLayer.csb")
end

function ActivityView:getBindingInfo()
    return {
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_AWARD_CENTER"] = {varName = "_btnAwardCenter", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAwardCenter"},
        ["_KW_BTN_ITEM"] = {varName = "_btnItem", type = XH.UI_TYPE.BUTTON},
        ["_KW_ACT_LIST_VIEW"] = {varName = "_actListView"},
        ["_KW_PANEL_ACT"] = {varName = "_actPanel"},
        ["_KW_BTN_ACTIVITY"] = {varName = "_btnActivity", onTouchEnded = "onTouchEventTitle"},
        ["_KW_BTN_NOTIFY"] = {varName = "_btnNotify", onTouchEnded = "onTouchEventTitle"},
        ["_KW_PANEL_NOTIFY"] = {varName = "_scrollviewNotify"},
        ["_panelWebView"] = {varName = "_panelWebView"},
        ["_announceTitle"] = {varName = "_announceTitle"},
        ["_announceContent"] = {varName = "_announceContent"},
        ["_announceTitleTop"] = {varName = "_announceTitleTop"},
        ["_panelTop"] = {varName = "_panelTop"},
        ["_panelLT"] = {varName = "_panelLT"},
        ["_panelLeft"] = {varName = "_panelLeft"},
        ["_panelRight"] = {varName = "_panelRight"},
        ["_imgBg"] = {varName = "_imgBg"},
        ["_txtActTip"] = {varName = "_txtActTip"},
        ["_imgLB"] = {varName = "_imgLB"},
        ["_imgRT"] = {varName = "_imgRT"}
    }
end

function ActivityView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_CHANGE_TAB", callBack = "onChangeTab"},
        {module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_CLOSE_TAB_VIEW", callBack = "onCloseView"},
        {module = XH.lobby:getModule("TabsActivity"), eventKeyName = "EVENT_BTN_RED_POS", callBack = "flushBtnRedPos"},
        {module = XH.lobby:getModule("Notify"), eventKeyName = "ENENT_NOTIFY_CHANGED_MSG", callBack = "onRefreshNotify"}
    }
end

function ActivityView:ctor(param)
    param = param or {}
    ActivityView.super.ctor(self, param)
    self:adaptForLiuHai()
    self:initData(param)
    self:setCascadeOpacityEnabled(true)
    if self._btnItem then
        self._btnItem:setVisible(false)
    end
    self:startHide()
    self:startShow()
end

function ActivityView:close(notSend)
    ActivityView.super.close(self)
    if not notSend then
        XH.Bridge:getModule("GoldNew"):closeFullView("GoldHallActivityView", true)
    end
end

function ActivityView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLeft, self._panelLT})
        end
        -- local rightWidth = display.width - self._panelLeft:getPositionX() - self._panelLeft:getContentSize().width
        -- self._panelRight:setContentSize(cc.size(rightWidth, self._panelRight:getContentSize().height))
        -- self._posRightBody:setPositionX(rightWidth / 2)
        if display.width / display.height <= 16 / 9 then
            for i, v in ipairs({self._imgLB, self._imgRT, self._panelRight}) do
                v:setScale(0.86)
            end
        else
            self._panelRight:setPositionX(self._panelLeft:getPositionX() + 160 + 1124)
        end
    end
end

function ActivityView:initData(param)
    self._webView = nil
    self._acts = {}
    self._firstTab = param.firstTab or KW_FIRST_TAB_TYPE.ACTIVITY
    self._defultActTab = self._firstTab == KW_FIRST_TAB_TYPE.ACTIVITY and param.tab or nil
    if not self._defultActTab then
        self._defultActTab = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ACT_ICON_DEFULt, "")
    end
    self._defultNotifyTab = self._firstTab == KW_FIRST_TAB_TYPE.NOTIFY and param.tab or nil
    self:initFirstTab()
end

function ActivityView:dealSpecialTab()
    local showActs = {"DAILYSIGN", "NEWUSERSIGN", "FREEDRAW", "GAMECENTER"}
    for i = #self._acts, 1, -1 do
        if not table.indexof(showActs, self._acts[i].icon_code) then
            table.remove(self._acts, i)
        end
    end
    -- 签到
    self:dealDailySignTab()
    -- 免费抽奖
    self:dealFreeDrawGiftTab()
    -- 联运游戏
    self:dealUniunGameTab()
end

function ActivityView:dealUniunGameTab()
    for i = #self._acts, 1, -1 do
        if not self:checkPlatform(self._acts[i].platform) then
            table.remove(self._acts, i)
        end
    end
end

function ActivityView:checkPlatform(devicePlatform)
    if not devicePlatform or devicePlatform == LobbyConfig.DEVICE_PLATFORM.ALL then
        return true
    end
    if device.platform == "android" or device.platform == "windows" then
        return devicePlatform == LobbyConfig.DEVICE_PLATFORM.ANDROID
    else
        return devicePlatform ~= LobbyConfig.DEVICE_PLATFORM.ANDROID
    end
end

function ActivityView:dealDailySignTab()
    local bNewUser = XH.playerData:getIsDisplayNewUser()
    local lobbyID = XH.areaData:getLobbyID()
    if bNewUser and TabsActivityConfig.NewUserSignInActConfig and TabsActivityConfig.NewUserSignInActConfig[lobbyID] == 1 and
        XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEWUSER_ACT_HAVE_PERMISSION, true) then
        bNewUser = true
    else
        bNewUser = false
    end
    for i = #self._acts, 1, -1 do
        if (not bNewUser and self._acts[i].icon_code == "NEWUSERSIGN") or (bNewUser and self._acts[i].icon_code == "DAILYSIGN") then
            table.remove(self._acts, i)
        elseif self._acts[i].icon_code == "DAILYSIGN" and XH.lobby:getModule("ToponAct"):getSignActId() == nil then
            -- 如果没有签到actid也移除
            table.remove(self._acts, i)
        end
    end
end

function ActivityView:dealFreeDrawGiftTab()
    local bShow = XH.lobby:getModule("TabsActivity"):getShowFreeDrawAct()
    for i = #self._acts, 1, -1 do
        if (not bShow or XH.playerData:isRechargePlayer()) and self._acts[i].icon_code == "FREEDRAW" then
            table.remove(self._acts, i)
        end
    end
end

function ActivityView:initFirstTab()
    self:initTitleUI()
    self:updateDetailPanel()
end

function ActivityView:initTitleUI()
    if not self._btnActivity or not self._btnNotify then
        return
    end
    local isAct = self._firstTab == KW_FIRST_TAB_TYPE.ACTIVITY
    XH.UITool.setVisible(self._btnActivity, "KW_IMG_SELECT", isAct)
    XH.UITool.setVisible(self._btnNotify, "KW_IMG_SELECT", not isAct)
    self._btnActivity:setTouchEnabled(not isAct)
    self._btnNotify:setTouchEnabled(isAct)
    self._txtActTip:setVisible(isAct)
    self._imgLB:setVisible(not isAct)
    self._imgRT:setVisible(not isAct)

    local a = {b = false}
    local a1 = a and a.b or "dd"
    if self._firstTab == KW_FIRST_TAB_TYPE.ACTIVITY then
        self._btnActivity:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. "Btn_hdl.png", ccui.TextureResType.plistType)
        self._btnNotify:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. "Btn_gg.png", ccui.TextureResType.plistType)
        self._imgBg:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. KW_IMG_BG_ACT.default, ccui.TextureResType.localType)
    else
        self._btnActivity:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. "Btn_hd.png", ccui.TextureResType.plistType)
        self._btnNotify:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. "Btn_ggl.png", ccui.TextureResType.plistType)
        self._imgBg:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. KW_IMG_BG_ACT.GONG_GAO, ccui.TextureResType.localType)
    end
end

function ActivityView:updateDetailPanel()
    if self._firstTab == KW_FIRST_TAB_TYPE.ACTIVITY then
        self._scrollviewNotify:setVisible(false)
        if self._webView then
            self._webView:setVisible(false)
        end
        self._actPanel:setVisible(true)
        self._acts = clone(XH.lobby:getModule("TabsActivity"):getActsByLobbyID())
        self:dealSpecialTab()
        self:initUI(self._defultActTab)
    else
        self._actPanel:setVisible(false)
        self._scrollviewNotify:setVisible(true)
        XH.lobby:getModule("Notify"):reqNotifyInfo()
    end
    self:updateRedPoint()
end

function ActivityView:setTabBtnText(newItem, text)
    local text = XH.StringTool.cutStringByLength(text, 15)
    XH.UITool.setText(newItem, "KW_TXT_ACT_NAME", text)
    XH.UITool.setVisible(newItem, "KW_TXT_ACT_NAME", true)
end

function ActivityView:initUI(selectTab)
    if not self._actListView or not self._btnItem then
        return
    end
    self._actListView:removeAllItems()
    self._actListView:setScrollBarEnabled(false)
    self._actListView:setItemModel(self._btnItem:clone())
    self._actListView:setBounceEnabled(false)
    self._btnItem:setVisible(false)
    local defultBtn
    local index
    if selectTab and selectTab == "DAILYSIGN" then
        local lobbyID = XH.areaData:getLobbyID()
        if XH.playerData:getIsDisplayNewUser() and TabsActivityConfig.NewUserSignInActConfig and TabsActivityConfig.NewUserSignInActConfig[lobbyID] ==
            1 and XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEWUSER_ACT_HAVE_PERMISSION, true) then
            selectTab = "NEWUSERSIGN"
        end
    end
    for i = 1, #(self._acts) do
        self._actListView:pushBackDefaultItem()
        local items = self._actListView:getItems()
        local newItem = items[#items]
        local ani = Utils:addSpine(newItem:getChildByName("KW_ANI_LIGHT_POS"), "Activity", "zzb_hdzx_lxjb", "animation")
        newItem.ani = ani
        ani:setVisible(false)
        newItem:setName(self._acts[i].icon_code)
        self:setTabBtnText(newItem, self._acts[i].icon_name)
        if self._acts[i].tag_name and self._acts[i].tag_name ~= "" then
            XH.UITool.setText(newItem, "KW_TXT_CORNER", self._acts[i].tag_name)
            XH.UITool.setVisible(newItem, "KW_FLAG_CORNER", true)
        else
            XH.UITool.setVisible(newItem, "KW_FLAG_CORNER", false)
        end
        newItem[".data"] = self._acts[i]
        newItem:addTouchEventListener(handler(self, self.onTouchEvnetTab))
        newItem:setVisible(true)
        if not selectTab or selectTab == "" or selectTab == self._acts[i].icon_code then
            defultBtn = newItem
            index = self._actListView:getIndex(newItem)
            selectTab = self._acts[i].icon_code
        end
        if not defultBtn and self._acts[i].icon_code == "TASKSYS" then
            defultBtn = newItem
            index = self._actListView:getIndex(newItem)
        end
    end
    if defultBtn and index then
        self:onTouchEvnetTab(defultBtn, ccui.TouchEventType.ended)
        self._actListView:jumpToItem(index, cc.p(0, 0), cc.p(0, 0))
    else
        local items = self._actListView:getItems()
        if #items > 0 then
            defultBtn = items[1]
            index = self._actListView:getIndex(items[1])
            self:onTouchEvnetTab(defultBtn, ccui.TouchEventType.ended)
            self._actListView:jumpToItem(index, cc.p(0, 0), cc.p(0, 0))
        end
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_OPEN)

    local m = XH.lobby:getModule("TabsActivity")
    -- m:showIconRedPoint("RRBY", cc.UserDefault:getInstance():getBoolForKey("RedPointActivityRRBY", true))
    m:showIconRedPoint("LUCKYTASK", XH.lobby:getModule("LuckyTask"):isHaveAward())
end

function ActivityView:onRefreshNotify(event)
    if event.data.type == XH.Req.TYPE.SUCCESS then
        local notifyList = XH.lobby:getModule("Notify"):getNotifyList()
        if next(notifyList) then
            local function cmpFunc(a, b)
                return a.weight < b.weight
            end
            table.sort(notifyList, cmpFunc)
        end
        self:showAnnounceContant(notifyList)
    end
end

function ActivityView:showAnnounceContant(notifyList)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_ACTIVITY_ANNOUNCE)
    if not self._actListView or not self._btnItem then
        return
    end
    self._actListView:removeAllItems()
    self._actListView:setScrollBarEnabled(false)
    self._actListView:setBounceEnabled(false)
    local lobbyId = XH.areaData:getLobbyID()
    for i = 1, #notifyList do
        if notifyList[i].page_url then
            if device.platform == "windows" then
                break
            end
            self:initWebView()
            self._webView:setVisible(false)
        end
    end
    for i, data in ipairs(notifyList) do
        local btnTab = self._btnItem:clone()
        local ani = Utils:addSpine(btnTab:getChildByName("KW_ANI_LIGHT_POS"), "Activity", "zzb_hdzx_lxjb", "animation")
        btnTab.ani = ani
        ani:setVisible(false)

        self:setTabBtnText(btnTab, tostring(data.title))
        self._actListView:pushBackCustomItem(btnTab)
        btnTab:setVisible(true)
        btnTab:setTag(i)
        btnTab:setName("_KW_BTN_ITEM_OFF" .. i)
        local IsNeedRed = true -- 取消公告红点 jlw self:GetIsRed("_KW_BTN_ITEM_OFF"..i..lobbyId)
        if IsNeedRed == false then
            XH.lobby:getModule("TabsActivity"):showIconRedPoint("_KW_BTN_ITEM_OFF" .. i, true)
        end
        btnTab:addTouchEventListener(handler(self, self.onTouchChangeNotifyTab))
    end
    local childrens = self._actListView:getChildren()
    self:onTouchChangeNotifyTab(childrens[1], ccui.TouchEventType.ended)
end

function ActivityView:GetIsRed(name)
    local isneedRed = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_ANNOUNCE, false, {key = name})
    return isneedRed
end

function ActivityView:showAnnounceContantSelect(notify)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.tx24060401, {block_label = notify.title or ""})
    -- 有WebView的页面，隐藏awardCenter按钮
    self._btnAwardCenter:setVisible(true)
    if notify.page_url then
        self._btnAwardCenter:setVisible(false)
    end
    if notify.sub_title then
        self._announceTitle:setString(notify.sub_title)
    end
    if notify.content then
        self._announceContent:setString(notify.content)
    end
    self._announceTitleTop:setString(notify.title)

    if self._webView then
        if notify.page_url then
            self._webView:loadURL(notify.page_url)
            self._webView:setVisible(true)
            self._announceTitle:setString("")
            self._announceContent:setString("")
        else
            self._webView:setVisible(false)
        end
    end
end

function ActivityView:initWebView()
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(self._panelWebView:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(0, self._panelWebView:getContentSize().height)
        webView:setAnchorPoint(cc.p(0, 1))
        webView:setBounces(false)
        webView:setVisible(false)
        self._panelWebView:addChild(webView)
        self._webView = webView
        webView:setOnShouldStartLoading(function(sender, url)
            self._webView:setVisible(false)
            return true
        end)
        webView:setOnDidFinishLoading(function(sender, url)
            self._webView:setVisible(true)
        end)
    end
end

function ActivityView:updateRedPoint()
    local activityRed = XH.lobby:getModule("TabsActivity"):getHuoDongRedShow()
    for activity, isShowRed in pairs(activityRed) do
        if isShowRed then
            self:showBtnRedPos(activity, isShowRed)
        end
    end
end

-- 刷新小红点
function ActivityView:flushBtnRedPos(msg)
    if msg then
        local activity = msg.data.activity
        local showRed = msg.data.showRed
        if self.showBtnRedPos then
            self:showBtnRedPos(activity, showRed)
        end
    end
end

function ActivityView:showBtnRedPos(activity, showRed)
    local items = self._actListView:getItems()
    for _, v in pairs(items) do
        if v:getName() == activity then
            if showRed then
                XH.UITool.setVisible(v, "KW_RED_POS", true)
            else
                XH.UITool.setVisible(v, "KW_RED_POS", false)
            end
            break
        end
    end
end

-- 复原活动展示主界面
function ActivityView:restoreActPanel()
    if not self._actPanel then
        return
    end
    local view = self._actPanel:getChildren()[1]
    if view and view.close then
        view:close()
    end
    self._actPanel:removeAllChildren()
end

-- 刷新页签状态
function ActivityView:updateTabStatus(selectedTab)
    if not selectedTab or not self._actListView then
        return
    end
    local items = self._actListView:getItems()
    for _, v in pairs(items) do
        v:setEnabled(v ~= selectedTab)
        XH.UITool.setTextColor(v, "KW_TXT_ACT_NAME", v == selectedTab and cc.c3b(0x9d, 0x46, 0) or cc.c3b(0xec, 254, 255))
        XH.UITool.setFontSize(v, "KW_TXT_ACT_NAME", v == selectedTab and 50 or 46)
        XH.UITool.setVisible(v, "KW_IMG_SELECT", v == selectedTab)
        XH.UITool.setVisible(v, "KW_IMG_UNSELECT", v ~= selectedTab)
        if v.ani then
            v.ani:setVisible(v == selectedTab)
        end

        local aniNode = v:getChildByName("KW_ANI_POS")
        aniNode:removeAllChildren()
        if v == selectedTab then
            Utils:addSpine(aniNode, "Activity", "zzb_hdzx_cbl", "animation", 1, false)
        end
    end
end

function ActivityView:adaptActSize(node, scale)
    scale = 1
    node:setAnchorPoint(0.5, 0.5)
    local panelSize = self._actPanel:getContentSize()
    local nodeSize = XH.UITool.getContentSize(node, KW_UI_ROOT_LAYER) or node:getContentSize()
    node:setPosition(panelSize.width / 2, panelSize.height / 2)
    if scale then
        node:setScale(scale)
    else
        if nodeSize.width > panelSize.width or nodeSize.height > panelSize.height then
            local scaleTmp = math.min(panelSize.width / nodeSize.width, panelSize.height / nodeSize.height)
            node:setScale(scaleTmp)
        end
    end
    self._actPanel:addChild(node)
end

function ActivityView:onChangeTab(event)
    if not event or not event.data then
        return
    end
    local tabTmp = event.data
    local items = self._actListView:getItems()
    for _, v in pairs(items) do
        if tabTmp == v:getName() then
            self:onTouchEvnetTab(v, ccui.TouchEventType.ended)
            break
        end
    end
end

function ActivityView:onCloseView(event)
    self:onTouchEventClose(self._btnClose, ccui.TouchEventType.ended)
end

function ActivityView:onTouchEvnetTab(send, event)
    if event ~= ccui.TouchEventType.ended then
        return
    end
    self:restoreActPanel()
    self:updateTabStatus(send)
    self._tabInfo = send[".data"]
    local tabName = send:getName()
    if self._firstTab == KW_FIRST_TAB_TYPE.ACTIVITY then
        local viewTmp = XH.lobby:getModule("TabsActivity"):getActsViewPathByKey(tabName)
        if viewTmp then
            local node = require(viewTmp.path).new(nil, {enterAni = false})
            if node then
                node:setCascadeOpacityEnabled(true)
            end
            if node.updateWithWebCfg and send[".data"] then
                node:updateWithWebCfg(send[".data"])
            end
            if node.setInsertMode then
                node:setInsertMode("GoldLobby")
            end
            self:adaptActSize(node)
            ActionUtils:runTopFadeIn(node, true, 0, 15 / 30)
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ACTIVITYLAYER_ACT_PUSH, {label = tabName, block_label = tabName, item_id = tabName})
        end
        self._defultActTab = tabName
        -- 有WebView的页面，隐藏awardCenter按钮
        self._btnAwardCenter:setVisible(true)
        if self._defultActTab == "FANZHA" then
            self._btnAwardCenter:setVisible(false)
        end
        local bgImgPath = KW_IMG_BG_ACT[(self._tabInfo and self._tabInfo.icon_code) or "default"]
        self._imgBg:loadTexture(LocalConfig.IMG_PATH.ACTIVITY .. bgImgPath, ccui.TextureResType.localType)

        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_ACT_ICON_DEFULt, self._defultActTab)
    else
        XH.lobby:getModule("Notify"):reqNotifyInfo()
        self._defultNotifyTab = tabName
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_TAB, {tabName = tabName})
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.TABS_ACTIVITY_TAB, {label = tabName})
end

function ActivityView:onTouchEventAct(view, send, event)
    if event ~= ccui.TouchEventType.ended then
        return
    end
    if not view or not view.viewName then
        return
    end
    XH.viewManager:openView(view.viewName)
end

function ActivityView:onTouchEventAwardCenter(send, event)
    XH.viewManager:openView("AwardCenterView")
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_AWARD_CENTER)
end

function ActivityView:onTouchEventClose(send, event)
    XH.lobby:getModule("H5GameWidget"):close5GameWidget("activity")
    self:restoreActPanel()
    self:close()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_CLOSE)
end

function ActivityView:onTouchEventTitle(send, event)
    if self._firstTab == KW_FIRST_TAB_TYPE.ACTIVITY and send == self._btnActivity then
        return
    end
    if self._firstTab == KW_FIRST_TAB_TYPE.NOTIFY and send == self._btnNotify then
        return
    end
    self:restoreActPanel()
    self._firstTab = math.fmod(self._firstTab + 1, KW_FIRST_TAB_CNT)
    self:initFirstTab()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_FIRST_TAB, {tabType = self._firstTab})
end

function ActivityView:onTouchChangeNotifyTab(send, event)
    if event ~= ccui.TouchEventType.ended then
        return
    end
    if not send then
        return
    end
    local curSelect = send:getTag()
    local lobbyId = XH.areaData:getLobbyID()
    local name = send:getName() .. lobbyId
    self:updateTabStatus(send)
    local notifyList = XH.lobby:getModule("Notify"):getNotifyList()
    self:showAnnounceContantSelect(notifyList[curSelect])
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_ANNOUNCE, true, {key = name})
    XH.lobby:getModule("TabsActivity"):showIconRedPoint("_KW_BTN_ITEM_OFF" .. curSelect, false)
end

-----------转场动效-----------
function ActivityView:startShow()
    ActionUtils:runTopFadeIn(self._panelTop, true, 15 / 30)
    ActionUtils:runTopFadeIn(self, true, 0, 15 / 30)
    ActionUtils:runLeftMoveOut(self._panelLeft, true, nil, 2 / 30)
    ActionUtils:runLeftMoveOut(self._panelLT, true, nil, 2 / 30)
end

function ActivityView:startHide()
    ActionUtils:runLeftMoveOut(self._panelLeft, false, true, 0, 0.25)
    ActionUtils:runLeftMoveOut(self._panelLT, false, true, 0, 0.25)
end
return ActivityView
  �^  