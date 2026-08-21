local NotifyView = class("NotifyView",XH.ViewBase)
local KW_TEXT_NAME = "_KW_TEXT_NAME"

function NotifyView:getCSBPath()
    return "cocosStudio/hall/CSB/NotifyLayer.csb"
end

function NotifyView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_SCROLLVIEW_NOTIFY"] = {varName="_scrollviewNotify"},
        ["_KW_ANNOUNCE_ITEM"] = {varName="_itemAnnounce"},
        ["_KW_LV_SELECT_BTNS"] = {varName="_btnLVSelect"},
        ["_KW_PANEL_GAME_RULE"] = {varName="_panelgamerule"},
        ["_KW_BTNS_1"] = {varName="_btn1"},
        ["_KW_ANNOUNCE_TITLE_E"] = {varName="KW_ANNOUNCE_TITLE"},
        ["_KW_ANNOUNCE_CONTENT_E"] = {varName="KW_ANNOUNCE_CONTENT"},
    }
end

function NotifyView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Notify"), eventKeyName = "ENENT_NOTIFY_CHANGED_MSG", callBack = "onRefresh" },
    }
end

function NotifyView:ctor(param)
    param = param or {}
	NotifyView.super.ctor(self,param)
    self._webView = nil
    self:initUI()
end

function NotifyView:initUI()
    XH.lobby:getModule("Notify"):reqNotifyInfo()
end

function NotifyView:onRefresh(event)
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

function NotifyView:onTouchChangeTab(send, event)
    if event ~= ccui.TouchEventType.ended then
        return
    end
    local curSelect = send:getTag()
    local childrens = send:getParent():getChildren()
    for i,btn in pairs(childrens) do
        local isSelect = i == curSelect
        local color = isSelect and cc.c3b(255, 255, 255) or cc.c3b(146, 74, 27)
        btn:setTitleColor(color)
        btn:setEnabled(not isSelect)
    end
    local notifyList = XH.lobby:getModule("Notify"):getNotifyList()
    self:showAnnounceContantSelect(notifyList[curSelect])
end

function NotifyView:showAnnounceContant(notifyList)
    self._btnLVSelect:removeAllChildren()      
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
        local btnTab = self._btn1:clone()
        XH.UITool.setText(btnTab, KW_TEXT_NAME, tostring(data.title))
        self._btnLVSelect:pushBackCustomItem(btnTab)
        btnTab:addTouchEventListener(handler(self,self.onTouchChangeTab))
        btnTab:setTag(i)
    end
    local childrens = self._btnLVSelect:getChildren()
    self:onTouchChangeTab(childrens[1], ccui.TouchEventType.ended)
end

function NotifyView:showAnnounceContantSelect(notify)
    if notify.sub_title then
        self.KW_ANNOUNCE_TITLE:setString(notify.sub_title)
    end
    if notify.content then
        self.KW_ANNOUNCE_CONTENT:setString(notify.content)
    end
    
    local notifyTitleHeight = self.KW_ANNOUNCE_TITLE:getContentSize().height
    local notifyContentHeight = self.KW_ANNOUNCE_CONTENT:getContentSize().height
    local getScrollHeight =  notifyTitleHeight*2 + notifyContentHeight
    local tempscrollViewHeight = self._scrollviewNotify:getInnerContainerSize()
    if getScrollHeight < tempscrollViewHeight.height then
        self._scrollviewNotify:setTouchEnabled(false)
    else
        self._scrollviewNotify:setTouchEnabled(true)
    end

    if self._webView  then
        if notify.page_url then
            self._webView:loadURL(notify.page_url)
            self._webView:setVisible(true)
            self.KW_ANNOUNCE_TITLE:setString("")
            self.KW_ANNOUNCE_CONTENT:setString("")
        else
            self._webView:setVisible(false)
        end
    end
end

function NotifyView:onTouchEventClose(send, event)
    self:close()
end

function NotifyView:initWebView()
    local sz = self._panelgamerule
    sz:setVisible(false)
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        --local screenSize = cc.Director:getInstance():getWinSize()
        --if screenSize.width > 1920 then
        --    webView:setContentSize(cc.size(sz:getContentSize().width * screenSize.width/1920 ,sz:getContentSize().height))
        --else
        webView:setContentSize(sz:getContentSize())
        --end
        webView:setScalesPageToFit(false)
        webView:setPosition(sz:getPosition())
        webView:setAnchorPoint(sz:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        self:addChild(webView)
        self._webView = webView
        webView:setOnShouldStartLoading(function(sender,url)
            self._webView:setVisible(false)
            return true
        end)
        webView:setOnDidFinishLoading(function(sender,url)
            self._webView:setVisible(true)  
        end)
    end
end

return NotifyView