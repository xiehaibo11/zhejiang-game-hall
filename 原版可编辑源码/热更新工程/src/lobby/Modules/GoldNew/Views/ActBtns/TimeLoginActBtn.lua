local BtnBase = import("..BtnBase")
local TimeLoginActBtn = class("TimeLoginActBtn", BtnBase)
local LocalConfig = import("...Configs.LocalConfig")

function TimeLoginActBtn:getCSBPath()
    return "hall/CSB/NewGoldHall/TimeLoginActBtn.csb"
end

function TimeLoginActBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function TimeLoginActBtn:ctor(id, areaId, cfg)
    TimeLoginActBtn.super.ctor(self, id, areaId, cfg)
end

-- 获取代理事件列表
function TimeLoginActBtn:getProxyEvents()
    local e = TimeLoginActBtn.super.getProxyEvents(self)
    table.insert(e, {module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "FLUSH_TIMELOGIN_ACT_INFO", callBack = "onUpdateRedPoint"})
    table.insert(e, {module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "FLUSH_TIMELOGIN_ACT_INFO", callBack = "checkShow"})
    return e
end

function TimeLoginActBtn:onCleanup()
    TimeLoginActBtn.super.onCleanup(self)
end

function TimeLoginActBtn:getBindingInfo()
    return {
        ["_panel"] = {varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick"},
        ["_imgRedPoint"] = {varName = "_imgRedPoint"},
        ["_aniNode"] = {varName = "_aniNode"}
    }
end

function TimeLoginActBtn:checkShow(isFromGroup)
    local isOpen = XH.lobby:getModule("TimeLoginAct"):isValid()
    self:setVisible(isOpen)
    self:onUpdateRedPoint()
    if isOpen then
        XH.Bridge:throwData("zjq25042710")
    end
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function TimeLoginActBtn:onClick()
    XH.viewManager:openView("TimeLoginActView")
end

function TimeLoginActBtn:onUpdateRedPoint()
    self._imgRedPoint:setVisible(XH.lobby:getModule("TimeLoginAct"):checkShowRedPoint())
end

return TimeLoginActBtn
