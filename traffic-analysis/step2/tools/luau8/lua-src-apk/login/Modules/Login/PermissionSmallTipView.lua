local PermissionSmallTipView = class("PermissionSmallTipView", XH.ViewBase)

function PermissionSmallTipView:getCSBPath()
    return "cocosStudio/hall/CSB/window/YinSiCeLue/PermissionSmallTipView.csb"
end

function PermissionSmallTipView:getBindingInfo()
    return {
        ["_KW_BUTTON_HINT_OK"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onOkClicked" },
        ["_KW_BUTTON_HINT_CANCEL"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onCancelClicked" },
        ["_KW_TXT_HYXY"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onHYXYClicked" },
        ["_KW_TXT_JZJHGC"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onJZJHGCClicked" },
        ["_KW_TXT_YSZC"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onYSZCClicked" },
        ["_KW_BUTTON_HINT_CLOSE"] = { varName = "_userService", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onCloseClicked" },
    }
end

function PermissionSmallTipView:ctor(params)
    PermissionSmallTipView.super.ctor(self)

    self._params = params
    self:initUI()
end

function PermissionSmallTipView:initUI()

end

function PermissionSmallTipView:onOkClicked()
    if self._params and self._params.onOkClicked then
        self._params.onOkClicked()
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xy24082601, {page_item_id = '同意'})
    self:close()
end
function PermissionSmallTipView:onCancelClicked()
    if self._params and self._params.onCancelClicked then
        self._params.onCancelClicked()
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xy24082601, {page_item_id = '不同意'})
    self:close()
end
function PermissionSmallTipView:onCloseClicked()
    if self._params and self._params.onCloseClicked then
        self._params.onCloseClicked()
    end
    self:close()
end
function PermissionSmallTipView:onHYXYClicked()
    if self._params and self._params.onHYXYClicked then
        self._params.onHYXYClicked()
    end
end
function PermissionSmallTipView:onJZJHGCClicked()
    if self._params and self._params.onJZJHGCClicked then
        self._params.onJZJHGCClicked()
    end
end
function PermissionSmallTipView:onYSZCClicked()
    if self._params and self._params.onYSZCClicked then
        self._params.onYSZCClicked()
    end
end

return PermissionSmallTipView�	