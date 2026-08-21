local SxvipActTipView = class("SxvipActTipView", XH.ViewBase)

function SxvipActTipView:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/Act/SxvipActTip.csb"
end

function SxvipActTipView:getBindingInfo()
    return {
        --
        ["_KW_BUTTON_HINT_CANCEL"] = { varName = "_KW_BUTTON_HINT_CANCEL", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnOK" },
        ["_KW_BUTTON_HINT_OK"] = { varName = "_KW_BUTTON_HINT_OK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCancel" },
    }
end

function SxvipActTipView:ctor()
    SxvipActTipView.super.ctor(self)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022705)
end

function SxvipActTipView:onBtnCancel()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022706, { block_item_id = "取消" })
    XH.viewManager:closeView("SxvipActView")
    self:close()
end

function SxvipActTipView:onBtnOK()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hy25022706, { block_item_id = "确认" })
    self:close()
end

return SxvipActTipView