local ToponGoldAreaDrawView = class(" ToponGoldAreaDrawView", XH.ViewBase)
local ToponActConfig = require("lobby.Modules.ToponAct.Config")

function ToponGoldAreaDrawView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/ToponAct/ToponGoldAreaDrawView.csb"
end

function ToponGoldAreaDrawView:getBindingInfo()
    return {
        ["_KW_PANEL_PHONEFEE"] = { varName = "_panelPhoneFee" },
        ["_KW_PANEL_WIN_DRAW"] = { varName = "_panelWinDraw" },
        ["_KW_PANEL_LOST_DRAW"] = { varName = "_paneLostDraw" },
        ["_KW_PANEL_POP_LOSTWIN"] = { varName = "_paneWinLost",type = XH.UI_TYPE.NODE, onTouchEnded = "close" },
        ["_KW_PHFEE_AWD_BTN"] = { varName = "_btnAwdFee", type = XH.UI_TYPE.BUTTON, onTouchEnded = "goToWatchAdds" },
        ["_KW_WIN_DRAW_BTN"] = { varName = "_btnAwdWin", type = XH.UI_TYPE.BUTTON, onTouchEnded = "goToWatchAdds" },
        ["_KW_LOST_DRAW_BTN"] = { varName = "_btnAwdLost", type = XH.UI_TYPE.BUTTON, onTouchEnded = "goToWatchAdds" },
        ["_KW_WINLOST_BTN"] = { varName = "_btnAwdWinLost", type = XH.UI_TYPE.BUTTON, onTouchEnded = "goToWatchAdds" },
        ["_KW_WINLOST_CHECK_BOX"] = { varName = "_btnCheckShow", type = XH.UI_TYPE.CHECKBOX, onTouchEnded = "onTouchEventCheckShowPop" },
        ["_KW_PHONEFEE_CLOSE_BTN"] = { varName = "_btnPhoneFee", type = XH.UI_TYPE.BUTTON, onTouchEnded = "phoneFeeClose" },
        ["_KW_DRAW_CLOSE_BTN"] = { varName = "_btnDraw", type = XH.UI_TYPE.BUTTON, onTouchEnded = "drawClose" },
        ["_KW_LOST_DRAW_CLOSE_BTN"] = { varName = "_btnLostDraw", type = XH.UI_TYPE.BUTTON, onTouchEnded = "drawLostClose" },
    }
end

function ToponGoldAreaDrawView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("ToponAct"), eventKeyName = XH.lobby:getModule("ToponAct").KW_TOPONGOLDAREADRAW_VIEW_CLOSE, callBack = "close" },
    }
end

function ToponGoldAreaDrawView:ctor(actInfo,isWin)
    ToponGoldAreaDrawView.super.ctor(self)
    self._actInfo = actInfo
    self._panelList = { self._panelPhoneFee, self._panelWinDraw, self._paneLostDraw }
    self._isWin = isWin
    self._isShowPop = false
    self:initUI()
end

function ToponGoldAreaDrawView:initUI()
    if self._actInfo.webType == ToponActConfig.GoldPhoneFee then
        if not cc.UserDefault:getInstance():getBoolForKey("isNeedHideAdvertisement1") then
            self._panelPhoneFee:setVisible(true)
        end
        self._panelWinDraw:setVisible(false)
        self._paneLostDraw:setVisible(false)
    elseif self._actInfo.webType ~= ToponActConfig.GoldPhoneFee then
        self._panelPhoneFee:setVisible(false)
        local popCnt = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_TOPON_GOLD_AREA_DRAW_POP, 0)
        self._paneWinLost:setVisible(false)
        if not cc.UserDefault:getInstance():getBoolForKey("isNeedHideAdvertisement1") then
            self._panelWinDraw:setVisible(self._isWin == true)
            self._paneLostDraw:setVisible(self._isWin == false)
        else
            self._panelWinDraw:setVisible(false)
            self._paneLostDraw:setVisible(false)
        end
    else
        self:close()
    end
end

function ToponGoldAreaDrawView:goToWatchAdds()
    local popCnt = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_TOPON_GOLD_AREA_DRAW_POP, 0)
    if self._btnCheckShow:isSelected() then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TOPON_GOLD_AREA_DRAW_POP, popCnt + 2)
    end
    XH.lobby:getModule("ToponAct"):getToponActAward(self._actInfo.webType, self._actInfo.actInfo.poolid)
end

function ToponGoldAreaDrawView:phoneFeeClose()
    self._panelPhoneFee:setVisible(false)
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement1", true)
    XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER ,"close")
end

function ToponGoldAreaDrawView:drawClose()
    self._panelWinDraw:setVisible(false)
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement1", true)
    XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER ,"close")
end

function ToponGoldAreaDrawView:drawLostClose()
    self._paneLostDraw:setVisible(false)
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement1", true)
    XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.BANNER ,"close")
end

-- 视频播放完成
function ToponGoldAreaDrawView:onToponAdsShowCallBack(event)
    --    local code = event.data.code
    --    if (code == XH.ThirdDefine.TOPONSDK_CALLBACK_CODE.TOPON_FLAG_SDK_VIDEOSUCCESS) then
    --        if device.platform == "ios" then
    --            XH.lobby:getModule("ToponAct"):setClickState()
    --        end
    --        XH.lobby:getModule("ToponAct"):reqTaskProtol(TaskDefine.TASK_ID.TASK_TYPE_ZHEJAING_DAILY_LUCKY_DROP, DailyLuckyDrawConfig.GetTaskConfig.getPrize, "getPrizeCallBack")
    --    end
end

function ToponGoldAreaDrawView:onTouchEventCheckShowPop(send,eventType)
--    if eventType == ccui.CheckBoxEventType.selected then

--    elseif eventType == ccui.CheckBoxEventType.unselected then

--    end
end

function ToponGoldAreaDrawView:close()
    local popCnt = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_TOPON_GOLD_AREA_DRAW_POP, 0)
    if self._btnCheckShow:isSelected() then
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_TOPON_GOLD_AREA_DRAW_POP, popCnt + 2)
    end
    ToponGoldAreaDrawView.super.close(self)
end

return ToponGoldAreaDrawView�