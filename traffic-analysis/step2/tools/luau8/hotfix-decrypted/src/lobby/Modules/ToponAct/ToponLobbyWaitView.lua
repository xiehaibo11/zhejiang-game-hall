local ToponLobbyWaitView = class(" ToponLobbyWaitView", XH.ViewBase)
local ToponActConfig = require("lobby.Modules.ToponAct.Config")

function ToponLobbyWaitView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/ToponAct/ToponActLobbyView.csb"
end

function ToponLobbyWaitView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = { varName = "_panelBg", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventCloseLayer" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventCloseLayer" },
        ["_KW_PRIZE_BG_0"] = { varName = "_panelAct0", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventGoAct0" },
        ["_KW_PRIZE_BG_1"] = { varName = "_panelAct1", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventGoAct1" },
        ["_KW_GO_ACT_0"] = { varName = "_btnAct0", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventGoAct0" },
        ["_KW_GO_ACT_1"] = { varName = "_btnAct1", type = XH.UI_TYPE.PANEL_TOBUTTON, onTouchEnded = "onTouchEventGoAct1" },
    }
end

function ToponLobbyWaitView:getProxyEvents()
    return {
        { module = XH.sdkManager, eventKeyName = "EVENT_TOPONSDK_CALLBACK", callBack = "onToponAdsShowCallBack" },
    }
end

function ToponLobbyWaitView:ctor(data)
    ToponLobbyWaitView.super.ctor(self)
    self._stopTime = 0
    self._popLimitCnt = data.limitCnt or 0
    self:initUI()
    self:statisticTime()
end

function ToponLobbyWaitView:initUI()
    local touchLayer = cc.Layer:create()
    touchLayer:registerScriptTouchHandler( function(event)
        if event == "began" then
            self._stopTime = 0
        end
    end )
    touchLayer:setPosition(self:getContentSize().width / 2, self:getContentSize().height / 2)
    touchLayer:setContentSize(self:getContentSize())
    touchLayer:setTouchEnabled(true);
    self:addChild(touchLayer)
end

function ToponLobbyWaitView:statisticTime()
    XH.SysTool.performWithDelayGlobal( function()
        if self._popLimitCnt then
            local popCnt = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_TOPON_LOBBY_WAIT_VIEW_CTN, 0)
            popCnt = popCnt or 0
            --XH.TipTool.showToast(popCnt .. "|" .. self._popLimitCnt .. "|" .. self._stopTime or "nil", 0.8)
            if self._popLimitCnt == 0 or self._popLimitCnt >= popCnt then
                if self._stopTime and self._stopTime == XH.lobby:getModule("ToponAct"):getStopTime() then
                    if XH.viewManager:isViewExistWithoutListOnLobby(ToponActConfig.OTHER_VIEW) or XH.teaHouseManager:isTeaHouseListViewExist() or XH.lobby:getModule("ToponAct"):isHotUpdata() then
                        self._stopTime = 0
                    else
                        self._panelBg:setVisible(true)
                        XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER, "show")
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TOPON_LOBBY_WAIT_VIEW_CTN, popCnt + 1)
                        XH.lobby:getModule("ToponAct"):reqSetWaitCntAndLookAd(ToponActConfig.LobbyWait)
                    end
                end
                self._stopTime = self._stopTime + 1
            end
            self:statisticTime()
        end
    end , 1)
end

function ToponLobbyWaitView:onTouchEventGoAct0(send, event)
    self:onTouchEventCloseLayer()
    XH.viewManager:openView("DailyLuckDrawMainView")
    -- XH.lobby:getModule("ToponAct"):showDailyLuckyDrawView()
end

function ToponLobbyWaitView:onTouchEventGoAct1(send, event)
    self:onTouchEventCloseLayer()
    XH.lobby:getModule("ToponAct"):showPhoneFeeLayer()
end

function ToponLobbyWaitView:onTouchEventCloseLayer(send, event)
    self._panelBg:setVisible(false)
    self._stopTime = 0
    XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER ,"close")
end

function ToponLobbyWaitView:onToponAdsShowCallBack(event)
    local code = event.data.code
    if code == XH.ThirdDefine.TOPONSDK_CALLBACK_CODE.TOPON_FLAG_SDK_JLSUCCESS then
        self:onTouchEventCloseLayer()
    end
end

function ToponLobbyWaitView:close()
    self:onTouchEventCloseLayer()
end

return ToponLobbyWaitView�