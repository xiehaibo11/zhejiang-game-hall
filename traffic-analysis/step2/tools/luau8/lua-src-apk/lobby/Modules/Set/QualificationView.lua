local QualificationView = class("QualificationView", XH.ViewBase)

function QualificationView:ctor(param)
    param = param or {}
    QualificationView.super.ctor(self, param)
    self:initUI()
end

function QualificationView:getCSBPath()
    return "cocosStudio/hall/CSB/QualificationView.csb"
end

function QualificationView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON },
        ["_KW_TEXT_SCROLL"] = { varName = "_textScroll" },
        ----
        ["_KW_TEXT_CONTENT"] = { varName = "_textContent" },
        ["_KW_TEXT_LIST"] = { varName = "_textlist" },
        ["_KW_RULE_WEB_VIEW"] = { varName = "_ruleWebView" },
    }
end

function QualificationView:initUI()
    -- local lobbyID = XH.areaData:getLobbyID()
    -- local tab = XH.lobby:getModule("Set"):getQualificationConfig(lobbyID)
    -- local tempH = 250
    -- self._textlist:removeAllChildren()
    -- if self._textContent then
    --     for _, v in pairs(tab) do
    --         local context = v.Abbreviation .. "   " .. v.ApprovalNumber .. "\n" .. v.ISBN .. "\n" .. v.Author .. "\n"
    --         local addItem = self._textContent:clone()
    --         local size = self._textlist:getContentSize()
    --         addItem:setContentSize(cc.size(size.width, tempH))
    --         addItem:setString(context)
    --         self._textlist:pushBackCustomItem(addItem)
    --         self._textlist:setScrollBarEnabled(false)
    --     end
    -- end
    if device.platform == "windows" then
        return
    end
    local sz = self._ruleWebView
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(cc.p(sz:getContentSize().width / 2, sz:getContentSize().height / 2))
        webView:setAnchorPoint(cc.p(0.5, 0.5))
        webView:setBounces(false)
        webView:setVisible(false)
        sz:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender, url)
            self._webView:setVisible(false)
            return true
        end)
        webView:setOnDidFinishLoading(function(sender, url)
            self._webView:setVisible(true)
        end)
        local url = "http://hzxuanming.com/game_center/game_rule/0/7127/110111.html"
        self._webView:loadURL(url)
    end
end

function QualificationView:onTouchEventClose()
    self:close()
end

return QualificationView<
