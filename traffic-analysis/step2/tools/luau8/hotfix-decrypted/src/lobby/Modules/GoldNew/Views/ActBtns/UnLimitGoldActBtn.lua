local BtnBase = import("..BtnBase")
local UnLimitGoldActBtn = class("UnLimitGoldActBtn", BtnBase)
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local Utils = import("...Tool.Utils")

function UnLimitGoldActBtn:getCSBPath()
    return "cocosStudio/hall/CSB/NewGoldHall/UnLimitGoldActBtn.csb"
end

function UnLimitGoldActBtn:onInitCSB(csbPath)
    self:initCSB(self:getCSBPath())
end

function UnLimitGoldActBtn:getBindingInfo()
    return {
        ["_panel"] = { varName = "_panel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick" },
        ["_txtTime"] = { varName = "_txtTime" }
    }
end

function UnLimitGoldActBtn:ctor(id, areaId, cfg)
    UnLimitGoldActBtn.super.ctor(self, id, areaId, cfg)
end

function UnLimitGoldActBtn:checkShow(isFromGroup)
    self:setVisible(false)
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
    self:startSchedule()
end

function UnLimitGoldActBtn:onClick()
    self:throwClickData()
    XH.Bridge.viewManager:openView("UnLimitGoldActView", nil, {})
end

function UnLimitGoldActBtn:flushLeftTime()
    local leftTime = XH.lobby:getModule("UnlimitGoldAct"):getRemainTime(2)
    local quickStartInfo = XH.Bridge:getModule("GoldNew"):getQuickStartRoomInfo()
    if quickStartInfo then
        local roomConf = XH.Bridge:getModule("GoldNew"):getGoldRoomInfoByLeisureID(quickStartInfo.ConfID)
        if roomConf then
            self:setVisible(leftTime > 0 and XH.lobby:getModule("UnlimitGoldAct"):isSupportUse(roomConf, 1, quickStartInfo.ConfID))
            if self._isReport == nil and leftTime > 0 and XH.lobby:getModule("UnlimitGoldAct"):isSupportUse(roomConf, 1, quickStartInfo.ConfID) then
                self._isReport = true
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050703, { page = "房间列表" })
            end
            local hour = math.floor(leftTime / 3600)
            local min = math.floor((leftTime - hour * 3600) / 60)
            local sec = leftTime % 60
            self._txtTime:setString(string.format("%02d", hour) .. ":" .. string.format("%02d", min) .. ":" .. string.format("%02d", sec))
        end
    end
end

function UnLimitGoldActBtn:startSchedule()
    self:removeSchedule()
    local leftTime = XH.lobby:getModule("UnlimitGoldAct"):getRemainTime(2)
    if leftTime <= 0 then
        return
    end
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function UnLimitGoldActBtn:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function UnLimitGoldActBtn:onCleanup()
    self:removeSchedule()
    UnLimitGoldActBtn.super.onCleanup(self)
end

return UnLimitGoldActBtn�