local ShopHintMsgView = class("ShopHintMsgView", XH.ViewBase)

function ShopHintMsgView:getCSBPath()
    return "cocosStudio/hall/CSB/ShopUsePropHint.csb"
end

function ShopHintMsgView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_PANEL_BG"] = { varName = "_btnCloseBG", onTouchEnded = "onTouchEventClose" },
        ["_KWA_BTND_CANCEL_2"] = { varName = "_btnOK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KWA_BTND_OK_2"] = { varName = "_btnUseNow", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventUseNow" },
    }
end

function ShopHintMsgView:ctor(param)
    ShopHintMsgView.super.ctor(self,param)
    self._propID = param
end

-- 关闭按钮
function ShopHintMsgView:onTouchEventClose(send, event)
    self:close()
end

-- 立即使用按钮
function ShopHintMsgView:onTouchEventUseNow(send, event)
    -- 立即使用逻辑：个数道具:转到背包界面, 时效道具:直接使用
    local bagsysModule = XH.lobby:getModule("BagSysNew")
    local isTimeProp = bagsysModule:isTimePropByPropID(self._propID)
    if isTimeProp and not bagsysModule:isJPQProp(self._propID) then
        bagsysModule:directUseProp(self._propID)
    else
        XH.viewManager:openView("BagMainViewNew")
    end
    self:close()
end

return ShopHintMsgView