local ToponPhoneFeeView = class(" ToponPhoneFeeView", XH.ViewBase)
local ToponActConfig = require("lobby.Modules.ToponAct.Config")
local UrlConf = require("app.Config.UrlConf")
local KW_ACT_RULE_ID = 20220815

function ToponPhoneFeeView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/ToponAct/ToponPhoneFeeView.csb"
end

function ToponPhoneFeeView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = { varName = "_panelBg", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "close" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "close" },
        ["_KW_TEXT_MAX_YUAN"] = { varName = "_textMaxYuan" },
        ["_KW_BTN_WATCH_ADDS"] = { varName = "_btnWatchAdds", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "goToWatchAdds" },
        ["_KW_TEXT_TIMES"] = { varName = "_textLeftTimes" },
        ["_KW_BTN_HELP"] = { varName = "_btnHelp", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnHelp" },
        ["_KW_PANEL_HELP"] = { varName = "_panelHelp", onTouchEnded = "onBtnCloseHelp" },
        ["_KW_BTN_CLOSE_HELP"] = { varName = "_btnCloseHelp", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseHelp" },
        ["_KW_PANEL_GAME_RULE"] = { varName = "_panelGameRule" },
        ["_KW_PANEL_LOADING"] = { varName = "_panelLoading" },
        ["_KW_GO_CHANGE_BTN"] = { varName = "_btnChange", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "goToChange" },
        ["_KW_BTN_TIMELIMITS"] = { varName = "_btnTimelimits" },
        ["_KW_TEXT_TIMELIMITS"] = { varName = "_kwTime" },
        ["_KW_BTN_NOCHANCE"] = { varName = "_btnNoTimes" },
        ["_KW_TEXT_FUKA_NUM"] = { varName = "_textFuKaNum" },
    }
end

function ToponPhoneFeeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("ToponAct"), eventKeyName = XH.lobby:getModule("ToponAct").KW_TOPON_ACT_FULSH_CNT, callBack = "flushCnt" },
        { module = XH.lobby:getModule("ToponAct"), eventKeyName = XH.lobby:getModule("ToponAct").KW_TOPON_ACT_PHONE_FEE_INFO, callBack = "flushAct" },
        { module = XH.lobby:getModule("ToponAct"), eventKeyName = "EVENT_NEED_TIME", callBack = "onTimeRefreshSuccess" },
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "flushPropInfo" },
    }
end

function ToponPhoneFeeView:ctor(actInfo)
    ToponPhoneFeeView.super.ctor(self)
    self._actInfo = actInfo
    if self._actInfo then
        self:initUI()
        XH.lobby:getModule("BackActivity"):fulshPlayerProp()
    else
        XH.lobby:getModule("ToponAct"):showPhoneFeeLayer()
    end
end

function ToponPhoneFeeView:flushAct(event)
    if event then
        self._actInfo = event.data
        self:initUI()
        XH.lobby:getModule("BackActivity"):fulshPlayerProp()
    end
end

function ToponPhoneFeeView:initUI()
    self._textFuKaNum:setString(XH.playerData:getHuaFei() or 0)

    self._textLeftTimes:setString("今日剩余抽取次数:" .. self._actInfo.maxLimtCnt - self._actInfo.limitCnt)
    if XH.lobby:getModule("ToponAct"):onGetTimeLimits() > 1 then
        self._btnTimelimits:setVisible(true)
        self._btnWatchAdds:setVisible(false)
        self._kwTime:setText(":" .. XH.lobby:getModule("ToponAct"):onGetTimeLimits() .. "秒")
    end
    if self._actInfo.maxLimtCnt - self._actInfo.limitCnt == 0 then
        self._btnNoTimes:setVisible(true)
        self._btnWatchAdds:setVisible(false)
    end
    self:initWebView()
end

function ToponPhoneFeeView:flushPropInfo(event)
    self._textFuKaNum:setString(XH.playerData:getHuaFei() or 0)
end

function ToponPhoneFeeView:goToWatchAdds()
    XH.lobby:getModule("ToponAct"):getToponActAward(self._actInfo.webType, self._actInfo.actInfo.poolid )
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_GET_PHONE_PAY)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_JOINACT)
end

-- 视频播放完成
function ToponPhoneFeeView:onToponAdsShowCallBack(event)
    --    local code = event.data.code
    --    if (code == XH.ThirdDefine.TOPONSDK_CALLBACK_CODE.TOPON_FLAG_SDK_VIDEOSUCCESS) then
    --        if device.platform == "ios" then
    --            XH.lobby:getModule("ToponAct"):setClickState()
    --        end
    --        XH.lobby:getModule("ToponAct"):reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_DAILY_LUCKY_DROP, DailyLuckyDrawConfig.GetTaskConfig.getPrize, "getPrizeCallBack")
    --    end
end

function ToponPhoneFeeView:flushCnt(event)
    local data = event.data
    if data and data.webType == ToponActConfig.PhoneFee then
        self._textLeftTimes:setString("今日剩余抽取次数:" .. data.maxLimtCnt - data.limitCnt)
        if (data.maxLimtCnt - data.limitCnt) == 0 then
            self._btnNoTimes:setVisible(true)
            self._btnWatchAdds:setVisible(false)
        end
    end
end

-- 打开帮助界面
function ToponPhoneFeeView:onBtnHelp(send, eventType)
    self._panelHelp:setVisible(true)
    if self._webView then
        self._webView:setVisible(true)
    end
end

-- 关闭帮助界面
function ToponPhoneFeeView:onBtnCloseHelp(send, eventType)
    self._panelHelp:setVisible(false)
    if self._webView then
        self._webView:setVisible(false)
    end
end

function ToponPhoneFeeView:initWebView()
    if device.platform == "windows" then
        return
    end
    local sz = self._panelGameRule
    if self._webView == nil then
        local webView = ccexp.WebView:create()
        webView:setContentSize(sz:getContentSize())
        webView:setScalesPageToFit(false)
        webView:setPosition(cc.p(sz:getContentSize().width/2, sz:getContentSize().height))
        webView:setAnchorPoint(sz:getAnchorPoint())
        webView:setBounces(false)
        webView:setVisible(false)
        sz:addChild(webView)
        self._webView = webView

        webView:setOnShouldStartLoading(function(sender,url)
            self._panelLoading:setVisible(true)
            self._webView:setVisible(false)
            return true
        end)

        webView:setOnDidFinishLoading(function(sender,url)
            self._panelLoading:setVisible(false)
        end)
        local url = string.format(UrlConf.GAME_RULE_HTML_ADDR .. "/%d/%d/%d.html", XH.SysTool:getChannelID(), XH.areaData:getAreaID(), KW_ACT_RULE_ID)
        if url then
            self._webView:loadURL(url)
        end
        self._webView:setVisible(false)
    end
end

function ToponPhoneFeeView:goToChange()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_GO_TO_CHANGE)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.TABS_ACTIVITY_JOINACT)
    local feesPropId = XH.areaData:getPropList().spendFeeID
    local feeNums = XH.lobby:getModule("TicketShop"):getCurHuaFei() or 0
    local getLastPhone = XH.userDefault:getValue(XH.userDefault.KEY_ID.EXCHANGE_FEE_PHONE, "")
    local sysTime = XH.lobby:getModule("TicketShop"):getSysTime()
    if feesPropId then
        XH.viewManager:openView("TicketFeesExchangeView", nil, { productid = feesPropId, feeNums = feeNums, getLastPhone = getLastPhone ,sysTime = sysTime })
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, "该大区暂不支持福卡兑换，敬请期待~")
        return
    end
end

function ToponPhoneFeeView:onTimeRefreshSuccess(event)
    local data = event.data
    if data then
        if data == 0 then
            self._btnTimelimits:setVisible(false)
            self._btnWatchAdds:setVisible(true)
        else
            self._kwTime:setString(":" .. data .. "秒")
            self._btnTimelimits:setVisible(true)
            self._btnWatchAdds:setVisible(false)
        end
    end
end

return ToponPhoneFeeView