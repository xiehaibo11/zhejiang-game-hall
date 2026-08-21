local BtnBase = import("..BtnBase")
local BankruptGiftBtn = class("BankruptGiftBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function BankruptGiftBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("BankruptGiftBtn.csb")
end

function BankruptGiftBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function BankruptGiftBtn:ctor(id, areaId, cfg)
    BankruptGiftBtn.super.ctor(self, id, areaId, cfg)
    self:startSchedule()
end

function BankruptGiftBtn:onCleanup()
    BankruptGiftBtn.super.onCleanup(self)
end

function BankruptGiftBtn:startSchedule()
    self:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
        self:checkShow()
    end))))
end

function BankruptGiftBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}}
end

-- 获取代理事件列表
function BankruptGiftBtn:getProxyEvents()
    local e = BankruptGiftBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("YGiftBankruptcy"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateBankruptcyStatus"})
    return e
end

function BankruptGiftBtn:checkShow(...)
    local vBefore = self:isVisible()
    BankruptGiftBtn.super.checkShow(self, ...)
    if not vBefore and self:isVisible() then
        XH.Bridge:throwData("jblb2024052901", {page_label = "破产礼包", page = "新金币场大厅"})
    end
end

function BankruptGiftBtn:getLogicShow()
    local info = XH.Bridge:getModule("YGiftBankruptcy"):getPlayerActInfo()
    if not info then
        return false
    end
    local left = 0
    for i = 1, #info do
        left = tonumber(info[i].period) - XH.Bridge:getModule("GoldNew"):getServerTime()
    end
    if left <= 0 then
        if self:isVisible() then
            XH.Bridge.viewManager:closeView("GoldBaseLiveView")
            XH.Bridge.viewManager:closeView("GoldBankruptcyView")
        end
        return false
    end
    XH.UITool.setText(self, "_txtTime", self:getLeftTimeStr(left))
    return true
end

function BankruptGiftBtn:onClick()
    self:throwClickData()
    XH.Bridge:getModule("YGiftBankruptcy"):showBankruptcy(2)
end

-- 刷新破产按钮
function BankruptGiftBtn:onUpdateBankruptcyStatus()
    self:checkShow()
end

function BankruptGiftBtn:getLeftTimeStr(time)
    return string.format("%02d", math.floor(time / 60)) .. ":" .. string.format("%02d", math.floor(time % 60))
end

return BankruptGiftBtn

