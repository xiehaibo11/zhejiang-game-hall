local LoadingManager = class("LoadingManager")

local LoadingState = {
    default = 1,
    add = 2,
    remove = 3
}
function LoadingManager:getInstance()
    if not LoadingManager._instance then
        LoadingManager._instance = LoadingManager.new()
    end
    return LoadingManager._instance
end

function LoadingManager:ctor()
    self._loadingCount = 0
    self._loadingState = LoadingState.default

    local customListener = cc.EventListenerCustom:create("director_before_update", handler(self, self.onDirectorBeforeUpdate))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(customListener, 1)
end

function LoadingManager:onDirectorBeforeUpdate(sender)
    if self._loadingState == LoadingState.add then
        if not self._loadingLayer or tolua.isnull(self._loadingLayer) then
            self._loadingLayer = require("app.Tip.LoadingLayer").new()
            local scene = XH.SceneManager:getInstance():getTopScene()
            if scene then
                scene:addChild(self._loadingLayer, XH.ZORDER.LOADING)
            end
        end
        self._loadingState = LoadingState.default
    elseif self._loadingState == LoadingState.remove then
        if self._loadingLayer and not tolua.isnull(self._loadingLayer) then
            self._loadingLayer:removeSelf()
            self._loadingLayer = nil
        end
        self._loadingState = LoadingState.default
    end
end

function LoadingManager:addOnce(hideTime)
    hideTime = hideTime or 15
    self._loadingCount = self._loadingCount + 1
    self:updateLoadingVisible()
    if type(hideTime) == "number" and hideTime > 0 then
        self:updateHideTime(hideTime)
    end
end

function LoadingManager:minusOnce()
    self._loadingCount = self._loadingCount - 1
    self._loadingCount = self._loadingCount >= 0 and self._loadingCount or 0
    self:updateLoadingVisible()
end

function LoadingManager:updateLoadingVisible()
    if self._loadingCount <= 0 then
        self:hideLoadingLayer()
    else
        self:showLoadingLayer()
    end
end

function LoadingManager:updateHideTime(hideTime)
    self:startDelay(hideTime)
end

function LoadingManager:startDelay(time)
    self:clearDelay()
    self._hideScheduleID = XH.SysTool.performDelayOnce(function()
        self:hideLoadingLayer()
    end, time)
end

function LoadingManager:clearDelay()
    if not self._hideScheduleID then
        return
    end
    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._hideScheduleID)
    self._hideScheduleID = nil
end

function LoadingManager:showLoadingLayer()
    self._loadingState = LoadingState.add
end

function LoadingManager:hideLoadingLayer()
    self._loadingState = LoadingState.remove
    self._loadingCount = 0
end

function LoadingManager:reset()
    self:hideLoadingLayer()
end

return LoadingManager