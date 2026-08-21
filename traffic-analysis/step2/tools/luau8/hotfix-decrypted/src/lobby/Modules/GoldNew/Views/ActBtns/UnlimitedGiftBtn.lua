local BtnBase = import("..BtnBase")
local UnlimitedGiftBtn = class("UnlimitedGiftBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function UnlimitedGiftBtn:getCSBPath()
    return "cocosStudio/hall/CSB/NewGoldHall/UnlimitedGiftBtn.csb"
end

function UnlimitedGiftBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function UnlimitedGiftBtn:ctor(id, areaId, cfg)
    UnlimitedGiftBtn.super.ctor(self, id, areaId, cfg)
end

function UnlimitedGiftBtn:onEnter()
    self:updateLeftTime()
    XH.lobby:getModule("UnlimitedGift"):RequestSysTime()
    self.timeScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function ()
        self:updateLeftTime()
    end, 1, false)
end

function UnlimitedGiftBtn:onExit()
    if self.timeScheduler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.timeScheduler)
        self.timeScheduler = nil
    end
end

-- 获取代理事件列表
function UnlimitedGiftBtn:getProxyEvents()
    local e = UnlimitedGiftBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.lobby:getModule("UnlimitedGift"), eventKeyName = "EVENT_UNGIFT_REFRESH_VIEW", callBack = "onUpdateRedPoint"})
    table.insert(e, {module = XH.lobby:getModule("UnlimitedGift"), eventKeyName = "EVENT_UNGIFT_BTN_STATUS", callBack = "onUpdateBtnStatus"})
    return e
end

function UnlimitedGiftBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgRed"] = {varName = "_imgRed"},
        ["_txtTime"] = {varName = "_txtTime"},
        ["_panelNew"] = {varName = "_panelNew"}
    }
end

function UnlimitedGiftBtn:checkShow(isFromGroup)
    local isOpen = XH.lobby:getModule("UnlimitedGift"):getActData() ~= nil
    self:setVisible(isOpen)
    self:onUpdateRedPoint()
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function UnlimitedGiftBtn:onClick()
    -- XH.viewManager:openView("UnlimitedGiftView", nil, self._areaId)
    XH.lobby:getModule("UnlimitedGift"):openUnlimitedGift(self._areaId)
    self:updateLeftTime()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25050602, {page = "选场大厅"})
end

function UnlimitedGiftBtn:onUpdateRedPoint()
    local isVisible = XH.lobby:getModule("UnlimitedGift"):hasReward()
    self._imgRed:setVisible(isVisible)
    self._panelNew:setVisible(isVisible)
    self._txtTime:setVisible(not isVisible)
end

function UnlimitedGiftBtn:onUpdateBtnStatus()
    self:checkShow()
end

function UnlimitedGiftBtn:updateLeftTime()
    local lefttime = XH.lobby:getModule("UnlimitedGift"):getLeftTime()
    if lefttime > 0 then
        self._txtTime:setText(XH.StringTool.getLeftTimeStr(lefttime,true))
    else
        self._txtTime:setText("")
    end
end

return UnlimitedGiftBtn
g