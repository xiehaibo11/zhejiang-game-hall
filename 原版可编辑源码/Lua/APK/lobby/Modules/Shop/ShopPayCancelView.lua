local ShopPayCancelView = class("ShopPayCancelView", XH.ViewBase)

function ShopPayCancelView:getCSBPath()
    return "cocosStudio/hall/CSB/ShopPayCancel.csb"
end

function ShopPayCancelView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_KF"] = { varName = "_btnKF", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventKF" },
        ["_KW_BTN_CANCEL"] = { varName = "_btnCancel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_REPAY"] = { varName = "_btnRePay", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEvenRePay" },
    }
end

function ShopPayCancelView:ctor(param)
    ShopPayCancelView.super.ctor(self,param)
    self._data = param
end

-- 关闭按钮
function ShopPayCancelView:onTouchEventClose(send, event)
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.SHOP_CACENL_CENCEL)
    self:close()
end

function ShopPayCancelView:onTouchEvenRePay(send, event)
    if self._data and next(self._data) then
        XH.lobby:getModule("Shop"):reqBuyDiamond(self._data.productInfo, self._data.scriptName, self._data.gifttype, self._data.autoOrder, self._data.bHideSuccessTip, self._data.propID, self._data.targetPropID)
    end
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.SHOP_CACENL_REPAY)
    self:close()
end

function ShopPayCancelView:onTouchEventKF(send, event)
    XH.lobby:getModule("CusService"):oponCusServerView(nil,"PAYCANCEL")
    self:close()
end

return ShopPayCancelView