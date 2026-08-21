---@class TeaHouseBatchInviteView : View
local TeaHouseBatchInviteView = class("TeaHouseBatchInviteView", TeaHouse.View)
local TeaHouseMemberMutexHeadListItem = require("src.teahouse.View.TeaHouseMemberItem.TeaHouseMemberMutexHeadListItem")
local UrlConf = require("app.Config.UrlConf")

local ONE_PAGE_SHOW_ITEM = 15 -- 一页显示15个

TeaHouseBatchInviteView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInvitePlayerView.csb",
    binding = {
        ["_KW_PANEL_HEAD_LIST"] = { tag = "_KW_PANEL_HEAD_LIST", name = "_panelList", class = "panel" },
        ["_KW_PANEL_HEAD_LIST_ITEM"] = { tag = "_KW_PANEL_HEAD_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_BTN_SURE"] = { tag = "_KW_BTN_SURE", name = "_btnSure", class = "btn", events = "onBtnEventSure" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onBtnEventClose" },
        ["_KW_NO_PLAYER_TIP"] = { tag = "_KW_NO_PLAYER_TIP", name = "_noPlayerTextTip" },
        ["_KW_PAGE_LEFT"] = { tag = "_KW_PAGE_LEFT", name = "_btnPageLeft", class = "btn", events = "onBtnEventPagePre" },
        ["_KW_PAGE_RIGHT"] = { tag = "_KW_PAGE_RIGHT", name = "_btnPageRight", class = "btn", events = "onBtnEventPageNext" },
        ["_KW_ACTIVITY_TIP"] = { tag = "_KW_ACTIVITY_TIP", name = "_btnActivityTip", class = "btn", events = "onBtnEventShowTips" },
        ["_KW_WEB_BTN_CLOSE"] = { tag = "_KW_WEB_BTN_CLOSE", name = "_btnWebClose", class = "btn", events = "onBtnEventHideTips" },
        ["_KW_PAGE_TEXT_NUM"] = {tag = "_KW_PAGE_TEXT_NUM",name = "_pageNumText" , class = "text" },
        ["_KW_RULE_WEB_VIEW"] = {tag = "_KW_RULE_WEB_VIEW",name = "_ruleWebView" , class = "panel" },
        ["_KW_ACTIVITY_TIP_PANEL"] = { tag = "_KW_ACTIVITY_TIP_PANEL", name = "_tipPanel", class = "panel" },
        ["_KW_ACTIVITY_TIP_PANEL_BG"] = { tag = "_KW_ACTIVITY_TIP_PANEL_BG", name = "_tipPanelBg", class = "panel" }
    }
}

TeaHouseBatchInviteView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT = "KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT"

function TeaHouseBatchInviteView:ctor(param)
    TeaHouseBatchInviteView.super.ctor(self)
    self:initEvents()
    self:initData()
end

function TeaHouseBatchInviteView:initEvents()
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain):addEventListener(teahouseMain.EVENT_SHOW_INVITE_ACTIVITY_LIST, handler(self, self.onUpdateInvitePlayerList))
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    self._headSelectListener = cc.EventListenerCustom:create(TeaHouseBatchInviteView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT,handler(self, self.onHeadSelect))
    eventDispatcher:addEventListenerWithSceneGraphPriority(self._headSelectListener,self.resourceNode_)
end

function TeaHouseBatchInviteView:removeAllEvents()
    if self._headSelectListener then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        eventDispatcher:removeEventListener(self._headSelectListener)
    end
end

function TeaHouseBatchInviteView:initData()
    self._infoList = {}
    self._showInfoList = {}
    self._unSelectInfoList = {}
    self._pageIndex = 0
    TeaHouse.manager.teahouseMain:onReqTeaInviteActivityPlayerList()
end

function TeaHouseBatchInviteView:onUpdateInvitePlayerList(event)
    if event and event.msg and event.msg.playerInfo then
        self._infoList = event.msg.playerInfo or {}
        -- self._infoList = self:createTestData()
        self:updateShowInfoList()
    end
end

function TeaHouseBatchInviteView:updateShowInfoList()
    self._noPlayerTextTip:setVisible(#self._infoList == 0)
    self._btnSure:setEnabled(#self._infoList > 0)
    self._btnPageLeft:setEnabled(self._pageIndex > 0)
    local max_page = math.ceil(#self._infoList/ONE_PAGE_SHOW_ITEM)
    self._btnPageRight:setEnabled(self._pageIndex < max_page - 1) 
    self._pageNumText:setString(self._pageIndex + 1 .. "/" .. max_page)
    self:updateShowInfoListData()
    self:refreshTableView()
end

function TeaHouseBatchInviteView:onHeadSelect(event)
    if event.playerID == nil or event.bSelected == nil then
        return 
    end
    if event.bSelected then
        self._unSelectInfoList[event.playerID] = nil
    else
        self._unSelectInfoList[event.playerID] = true
    end
end

function TeaHouseBatchInviteView:onBtnEventSure(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- 向服务发送数据
    local exceptnumidTab = {}
    for k,v in pairs(self._unSelectInfoList) do
        table.insert( exceptnumidTab,k)
    end
    TeaHouse.manager.teahouseMain:onReqSendRecomendInvite(exceptnumidTab,0)
    --发起微信邀请
    local teahouseData = TeaHouse.manager.teahouseData
    local name = teahouseData:getOwnerName()
    local nameExt = teahouseData:getTeaHouseNameExt()
    local title = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(name, 12))
    if nameExt and #nameExt > 0 then
        title = title .. string.format("(%s)", nameExt)
    end
    self:doBatchInviteShare(teahouseData:getTeaHousePwd(), title)
    TeaHouse.manager.teahouseMain:hideInviteActivityIcon()
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_97)
end

function TeaHouseBatchInviteView:onBtnEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_99)
end

function TeaHouseBatchInviteView:refreshTableView(isCleanup)
    if not self._panelList then
        return
    end
    if self._tvOnlineList ~= nil and isCleanup then
        self._tvOnlineList:removeFromParent()
        self._tvOnlineList = nil
    end
    if self._tvOnlineList == nil then
        self._tvOnlineList = cc.TableView:create(self._panelList:getContentSize())
        self._tvOnlineList:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
        self._tvOnlineList:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
        self._tvOnlineList:setIgnoreAnchorPointForPosition(false)
        self._tvOnlineList:setAnchorPoint(cc.p(0, 0))
        self._tvOnlineList:setPosition(cc.p(0, 0))
        self._panelList:addChild(self._tvOnlineList)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onTableCellTouched), cc.TABLECELL_TOUCHED)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onCellSizeForTable), cc.TABLECELL_SIZE_FOR_INDEX)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onTableCellAtIndex), cc.TABLECELL_SIZE_AT_INDEX)
        self._tvOnlineList:registerScriptHandler(handler(self, self.onNumberOfCellsInTableView), cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
    end
    if self._tvOnlineList ~= nil then
        self._tvOnlineList:reloadData()
    end
end

function TeaHouseBatchInviteView:onTableCellTouched(tableView, cell)

end

function TeaHouseBatchInviteView:onCellSizeForTable(tableView, index)
    if self._panelListItem then
        local size = self._panelListItem:getContentSize()
        return size.width, size.height
    end
    return 1246, 270
end

function TeaHouseBatchInviteView:onTableCellAtIndex(tableView, index)
    local cell = tableView:dequeueCell()
    if not cell then
        cell = cc.TableViewCell:new()
        local listItem = TeaHouse.manager.viewManager:createView("TeaHouseMemberItem.TeaHouseMemberMutexHeadListItem")
        if listItem ~= nil then
            listItem:setAnchorPoint(cc.p(0, 0))
            listItem:setPosition(0, 0)
            listItem:setName("MutexListItem")
            if self._panelListItem then
                listItem:setContentSize(self._panelListItem:getContentSize())
                ccui.Helper:doLayout(listItem)
            end
            cell:addChild(listItem)
        end
    end
    local listItem = cell:getChildByName("MutexListItem")
    if listItem ~= nil then
        local singleLineHeadCount = TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT
        local tempPlayerInfos = {}
        for i = index*singleLineHeadCount + 1, index*singleLineHeadCount + singleLineHeadCount do
            local tempInfo = self._showInfoList[i]
            if not tempInfo then
                break
            end
            tempInfo.bSelected = true
            if self._unSelectInfoList[tempInfo.numid] then
                tempInfo.bSelected = false
            end
            table.insert(tempPlayerInfos, tempInfo)
        end
        listItem:updateInfo(tempPlayerInfos, TeaHouseBatchInviteView.KW_EVENT_NAME_TEAHOUSE_MUTEX_HEADSELECT)
    end
    return cell
end

function TeaHouseBatchInviteView:onNumberOfCellsInTableView(tableView)
    local singleLineHeadCount = TeaHouseMemberMutexHeadListItem.KW_PLAYER_MAX_COUNT
    return math.ceil( #self._showInfoList / singleLineHeadCount )
end

function TeaHouseBatchInviteView:updateShowInfoListData()
    self._showInfoList = {}
    for i = self._pageIndex * ONE_PAGE_SHOW_ITEM + 1,  (self._pageIndex + 1) * ONE_PAGE_SHOW_ITEM do
        if self._infoList[i] then
            table.insert(self._showInfoList,self._infoList[i])
        end
    end
end

function TeaHouseBatchInviteView:onBtnEventPagePre(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._pageIndex =  self._pageIndex -1 
    if self._pageIndex < 0 then
        self._pageIndex = 0
    end
    self:updateShowInfoList()
end

function TeaHouseBatchInviteView:onBtnEventPageNext(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._pageIndex = self._pageIndex + 1
    if self._pageIndex >= math.ceil(#self._infoList/ONE_PAGE_SHOW_ITEM) then
        self._pageIndex = math.ceil(#self._infoList/ONE_PAGE_SHOW_ITEM) - 1 
    end
    self:updateShowInfoList()
end

function TeaHouseBatchInviteView:onBtnEventShowTips(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:initWebView()
    self._tipPanel:setVisible(true)
    self._tipPanelBg:setVisible(true)
    if self._webView then
        self._webView:setVisible(true)
    end
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_98)
end

function TeaHouseBatchInviteView:onBtnEventHideTips(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._tipPanel:setVisible(false)
    self._tipPanelBg:setVisible(false)
    if self._webView then
        self._webView:setVisible(false)
    end
end


function TeaHouseBatchInviteView:initWebView()
    if device.platform == "windows" then
        return
    end
    local sz = self._ruleWebView
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(cc.p(sz:getContentSize().width/2, sz:getContentSize().height/2))
        webView:setAnchorPoint(cc.p(0.5, 0.5))
        webView:setBounces(false)
        webView:setVisible(false)
        sz:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender,url)
            self._webView:setVisible(false)
            return true
        end)
        webView:setOnDidFinishLoading(function(sender,url)
            self._webView:setVisible(true)
        end)

        local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), XH.areaData:getAreaID(),20211230)
        if url then
            self._webView:loadURL(url)
        end
    end
end

function TeaHouseBatchInviteView:doBatchInviteShare(teaHousePwd,teaHouseTitle)
    local text = string.format("比赛场口令：%06d", teaHousePwd)
    local url = UrlConf.DOWNLOAD_ADDRESS_IOS
    if device.platform == "android" then
        url = UrlConf.DOWNLOAD_ADDRESS_ANDROID
    end
    local title = string.format("快来加入%s吧!", teaHouseTitle)
    if TeaHouse.getIsWXBanUrl() then
        TeaHouse.SysTool.copyClipboard(title .. text)
        TeaHouse.TipTool.showToast("邀请信息已复制成功，粘贴分享给您的好友吧！")
        TeaHouse.SysTool.openWeChat()
    else
        local shareInfo = {
            textTitle = title, --分享标题
            textTitleUrl = "", --微信不用
            site = "", --微信不用
            siteUrl = "", --微信不用
            imagePath = "", --微信不用
            url = url, --微信网页模式分享的链接
            type = "url", --word是文字分享，url网页模式分享，pic分享图片
            scene = "0", --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "com.xm.zjgamecenter", --分享图片地址（分享网页模式，需要传安卓包名）
            text = text, ---分享内容
            comment = "", --微信不用
            copyTextWhenNoWX = title .. text
        }
        TeaHouse.SysTool.share(shareInfo)
    end
end

function TeaHouseBatchInviteView:createTestData()
    local testPlayerData = {}
    for i =1 ,50 do
        local tem  = {}
        tem.numid = 10000000 + i
        tem.nickName = "00" .. i 
        tem.url = ""
        table.insert(testPlayerData,tem)
    end
    return testPlayerData
end

function  TeaHouseBatchInviteView:close()
    TeaHouse.manager.teahouseMain:isNeedShowGuideAwardTip()
    TeaHouseBatchInviteView.super.close(self)
end

return TeaHouseBatchInviteView