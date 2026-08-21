local MatchTipView = class("MatchTipView", XH.ViewBase)

function MatchTipView:getCSBPath()
    return "cocosStudio/hall/CSB/Match/MatchTipLayer.csb"
end

function MatchTipView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClicked" },
        ["_KW_BTN_OK"] = { varName = "_KW_BTN_OK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnOKClicked" },
        ["_KW_BTN_CANCEL"] = { varName = "_KW_BTN_CANCEL", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCancelClicked" },
        ["_KW_TEXT"] = { varName = "_KW_TEXT" },
    }
end

-- 0为默认手机绑定 1为通知领队 2为比赛场设置
function MatchTipView:ctor(param)
    param = param or {}
    MatchTipView.super.ctor(self, param)
    self.type = param.type or 0
    self.funcOK = param.funcOK
    self.funcCancel = param.funcCancel
    self.funcClose = param.funcClose
    self._KW_TEXT:setString(param.tip or "")
    self:flushUI()
end

function MatchTipView:flushUI()
    local imgOK
    local imgCancel
    if self.type == 0 then
        imgOK = "Btn_lkbd_matchtip.png"
        imgCancel = "Btn_zbjb_matchtip.png"
    elseif self.type == 1 then
        imgOK = "Btn_zxtz_matchtip.png"
        imgCancel = "Btn_wx_matchtip.png"
    elseif self.type == 2 then
        imgOK = "Btn_qwsz_matchtip.png"
        imgCancel = "Btn_shsz_matchtip.png"
    end
    if imgOK then
        self._KW_BTN_OK:loadTexture(imgOK, ccui.TextureResType.plistType)
    end
    if imgCancel then
        self._KW_BTN_CANCEL:loadTexture(imgCancel, ccui.TextureResType.plistType)
    end
end

function MatchTipView:onBtnCloseClicked()
    if self.funcClose then
        self.funcClose()
        self.funcClose = nil
    end
    self:close()
end

function MatchTipView:onBtnOKClicked()
    if self.funcOK then
        self.funcOK()
        self.funcOK = nil
    end
    self:close()
end

function MatchTipView:onBtnCancelClicked()
    if self.funcCancel then
        self.funcCancel()
        self.funcCancel = nil
    end
    self:close()
end

return MatchTipView