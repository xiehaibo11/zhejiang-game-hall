local GoldShareView = CF.gameClass("GoldShareView", CF.ViewBase)

function GoldShareView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/GoldWinLostShare.csb"
end

function GoldShareView:getBindingInfo()
    return {
        --
        ["_KW_BTN_SHARE"] = {varName = "_btnShare", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShare"},
        ["_KW_TIP"] = {varName = "_tipBg"},
        ["_KW_TIP_GOLD"] = {varName = "_KW_TIP_GOLD"},
        ["_KW_TIP_TEXT"] = {varName = "_KW_TIP_TEXT"}
    }
end

function GoldShareView:getProxyEvents()
    return {
        --
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_SHARE_AWARD_GOT", callBack = "closeTip"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_FLUSH_SHARE_AWARD_COUNT", callBack = "updateTip"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_GET_SHARE_AWARD_SUCCESS", callBack = "getAwardSuccess"}
    }

end

function GoldShareView:ctor(param)
    param = param or {}
    GoldShareView.super.ctor(self, param)
    self._tipBg:setVisible(false)
    self._canAward = false
    CF.game:getModule("Share"):setGoldScore()
    CF.game:getModule("Share"):reqShareAwardGot()
    if XH.isEmbeddedApp and XH.isEmbeddedApp() then
        self._btnShare:setVisible(false)
    end
end

function GoldShareView:getAwardSuccess()
    self._canAward = false
end

-- 复制文本
function GoldShareView:onBtnShare(send, eventType)
    self._KW_TIP_GOLD:setVisible(false)
    CF.game:getModule("Share"):captureGoldScreenShare(self._canAward)
    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.GOLD_WINLOST_SHARE_TEXT)
    self._tipBg:setVisible(false)

    local share_type = 0
    if self._canAward then
        share_type = 1
    end
    local label = "双倍胜利"
    if CF.game:getModule("Share"):getGoldScore() < 0 then
        label = "本次免败"
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_VIEW_CLICK, {label = label}, {share_type = share_type, area_id = XH.areaData:getAreaID()})
end

function GoldShareView:closeTip(event)
    -- self._tipBg:setVisible( event.isGot == 1 )
end

function GoldShareView:updateTip(event)
    self._KW_TIP_GOLD:setVisible(false)
    if CF.roomData:isDKGoldRoom() then
        return
    end
    if event and event.data and event.data.count and event.data.count > 0 then
        if CF.game:getModule("Share"):getGoldScore() > 0 then
            self._canAward = true
            self._KW_TIP_GOLD:setVisible(true)
            self._KW_TIP_TEXT:setString("领取双倍胜利金币")
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_GOLD_SHARE_PUSH, {label = "双倍胜利"}, {area_id = XH.areaData:getAreaID()})
        elseif CF.game:getModule("Share"):getGoldScore() < 0 then
            self._canAward = true
            self._KW_TIP_GOLD:setVisible(true)
            self._KW_TIP_TEXT:setString("本次免败金币全返")
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_GOLD_SHARE_PUSH, {label = "本次免败"}, {area_id = XH.areaData:getAreaID()})
        end
    end
end

return GoldShareView
�