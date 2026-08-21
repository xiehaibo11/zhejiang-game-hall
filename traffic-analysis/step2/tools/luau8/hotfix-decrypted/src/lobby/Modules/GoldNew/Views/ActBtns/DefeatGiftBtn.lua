local BtnBase = import("..BtnBase")
local DefeatGiftBtn = class("DefeatGiftBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function DefeatGiftBtn:getCSBPath()
    return XH.Bridge:getCCSResPath("DefeatGiftBtn.csb")
end

function DefeatGiftBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function DefeatGiftBtn:ctor(id, areaId, cfg)
    DefeatGiftBtn.super.ctor(self, id, areaId, cfg)
    self:startSchedule()
end

function DefeatGiftBtn:onCleanup()
    DefeatGiftBtn.super.onCleanup(self)
end

function DefeatGiftBtn:startSchedule()
    self:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
        self:checkShow()
    end))))
end

function DefeatGiftBtn:getBindingInfo()
    return {["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"}}
end

-- 获取代理事件列表
function DefeatGiftBtn:getProxyEvents()
    local e = DefeatGiftBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.Bridge:getModule("YGiftDefeat"), eventKeyName = "FLUSH_ACT_INFO", callBack = "onUpdateGiftDefeatStatus"})
    return e
end

function DefeatGiftBtn:checkShow(...)
    local vBefore = self:isVisible()
    DefeatGiftBtn.super.checkShow(self, ...)
    if not vBefore and self:isVisible() then
        XH.Bridge:throwData("jblb2024052901", {page_label = "免赔礼包", page = "新金币场大厅"})
    end
end

function DefeatGiftBtn:getLogicShow()
    local info = XH.Bridge:getModule("YGiftDefeat"):getPlayerActInfo()
    if info == nil then
        return false
    end
    local left = 0
    for i = 1, #info do
        left = tonumber(info[i].period) - XH.Bridge:getModule("GoldNew"):getServerTime()
    end
    if left <= 0 then
        if self:isVisible() then
            XH.Bridge.viewManager:closeView("YGiftDefeatView")
        end
        return false
    end
    XH.UITool.setText(self, "_txtTime", self:getLeftTimeStr(left))
    return true
end

function DefeatGiftBtn:onClick()
    self:throwClickData()
    XH.Bridge:getModule("YGiftBankruptcy"):showGiftDefeat(2)
end

function DefeatGiftBtn:onUpdateGiftDefeatStatus()
    self:checkShow()
end

function DefeatGiftBtn:getLeftTimeStr(time)
    return string.format("%02d", math.floor(time / 60)) .. ":" .. string.format("%02d", math.floor(time % 60))
end

return DefeatGiftBtn
�	