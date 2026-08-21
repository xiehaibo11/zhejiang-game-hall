local TrustView = CF.gameClass("TrustView", CF.ViewBase)

local KW_PATH_JSON_ROBOT = "res/animation/GameCommon/tuoguan_ani/ios_tuoguan.ExportJson"
local KW_JSON_NAME_ROBOT = "ios_tuoguan"

function TrustView:ctor()
    TrustView.super.ctor(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    self._trustPunishTime = 0
    self._curTrustTime = 0
    if gameData and CF.roomData and CF.roomData:is220Model() then
        self._trustPunishTime = gameData:getTrustPunishTime()
    end
    self:showTrustPanel()
end

function TrustView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/TrustLayer.csb"
end

function TrustView:getBindingInfo()
    return {
        ["_KW_PANEL_TRUST_ANI_POS"] = {varName = "_robotAniPanel"},
        ["_KW_PANEL_ROBOT"] = {varName = "_robotPanel", onTouchEnded = "onTouchEventRobotPanel"},
        ["_KW_TRUST_TIP_BG"] = {varName = "_trustTip"},
        ["_KW_TEXT_TIME_STR"] = {varName = "_trustTimeStr"},
        ["_KW_TEXT_MAX_TIME"] = {varName = "_trustMaxTime"},
    }
end

function TrustView:getProxyEvents()
    return {
        {module = CF.game:getModule("Trust"), eventKeyName = "EVENT_HIDE_TRUST", callBack = "onHideTrust"}
    }
end

--将窗体显示到屏幕
function TrustView:showSelf(zOrder)
    zOrder = zOrder or CF.ZORDER.WINDOW
    local runningScene = display.getRunningScene()
    self:setName("TrustView")
    runningScene:addChild(self, zOrder)
    return self
end

function TrustView:onTouchEventRobotPanel(send, eventType)
    CF.game:getModule("Trust"):doSendTrust(false)
    self:close()
end

function TrustView:onHideTrust()
    self:close()
end

function TrustView:showTrustPanel()
    CF.UITool.playJsonAnimationByName(self._robotAniPanel, KW_JSON_NAME_ROBOT, KW_PATH_JSON_ROBOT, -1, "tuoguan_ani")
    if self._trustPunishTime > 0 then
        self._trustTip:setVisible(true)
        self._trustTimeStr:setString("已托管 0 秒")
        self._trustMaxTime:setString(tostring(self._trustPunishTime))
        self._curTrustTime = 0
        self:initTrustSchedule()
    end
end

function TrustView:initTrustSchedule()
    self._scheduleTrustTime =
        cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function()
            self._curTrustTime = self._curTrustTime + 1
            self._trustTimeStr:setString(string.format("已托管 %d 秒", self._curTrustTime))
        end,
        1.0,
        false
    )
end

function TrustView:onCleanup()
    if self._scheduleTrustTime then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._scheduleTrustTime)
    end
    self._scheduleTrustTime = nil
    TrustView.super.onCleanup(self)
end

return TrustView
