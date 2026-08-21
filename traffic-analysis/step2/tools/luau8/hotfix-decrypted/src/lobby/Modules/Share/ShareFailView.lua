local ShareFailView = class("ShareFailView", XH.ViewBase)

function ShareFailView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LobbyShare/ShareFailView.csb"
end

function ShareFailView:getBindingInfo()
    return {
        ["_KW_TEXT_FAIL"] = {varName = "_txtFailStr"},
        ["_KW_BTN_CANCEL"] = {varName = "_KW_BTN_CANCEL", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_RETRY"] = {varName = "_KW_BTN_RETRY", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnRetry"},
    }
end

function ShareFailView:ctor(failStr)
    ShareFailView.super.ctor(self)
    self.module = XH.lobby:getModule("Share")
    self._txtFailStr:setText(failStr)
    -- 上抛失败弹窗曝光埋点
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25112807, {page_item_id = self.module:getTodayFailCount()})
end

function ShareFailView:onBtnRetry()
    XH.lobby:getModule("Share"):retryShare(true)
    -- 上抛重试埋点
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25112808, {page_item_id = "重试"})
    self:close()
end

function ShareFailView:onBtnClose()
    -- 上抛取消埋点
    XH.lobby:getModule("Share"):retryShare(false)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25112808, {page_item_id = "取消"})
    self:close()
end

return ShareFailView
N