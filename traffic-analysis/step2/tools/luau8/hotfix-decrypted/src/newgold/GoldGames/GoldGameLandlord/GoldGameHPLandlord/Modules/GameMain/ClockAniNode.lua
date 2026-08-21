local ClockAniNode = NG.GAME.gameClass("ClockAniNode", NG.ViewBase)

function ClockAniNode.create(time, parentNode, callBack, everySecondCallBack)
    local node = ClockAniNode.new()
    node:startTime(time)
    node:setCallBack(callBack)
    node:setEverySecondCallBack(everySecondCallBack)
    if parentNode then
        parentNode:addChild(node)
    end
    return node
end

function ClockAniNode:ctor()
    ClockAniNode.super.ctor(self)

    self._leftTime = 0
    self._listener = nil
    self._callBack = nil
    self._everySecondCallBack = nil
    self:initView()
end

function ClockAniNode:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/GameMain/ClockAniNode.csb"
end

function ClockAniNode:getBindingInfo()
    return {
        ["_KW_CLOCK_ANI"] = {varName = "_clockAniNode"},
        ["_KW_CLOCK_TEXT"] = {varName = "_clockText"},
    }
end

function ClockAniNode:initView()
    local params = {path = "NewGoldRes/Spine/HPLandlord/GameMain/", tex = "Hp_nz.json", ske = "Hp_nz.atlas", armatureName = "animation1"}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        spineNode:setScale(1.44)
        self._clockAniNode:addChild(spineNode)
    end
end

function ClockAniNode:setCallBack(callBack)
    self._callBack = callBack
end

function ClockAniNode:setEverySecondCallBack(callBack)
    self._everySecondCallBack = callBack
end

function ClockAniNode:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function ClockAniNode:startTime(time)
    self:removeSchedule()
    self._leftTime = time
    self._clockText:setString(self._leftTime)
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self._leftTime = self._leftTime - 1
        self._clockText:setString(self._leftTime)
        if self._everySecondCallBack then
            self._everySecondCallBack(self._leftTime)
        end
        if self._leftTime == 0 then
            if self._callBack then
                self._callBack()
            end
            self:removeSchedule()
        end
    end, 1, false)
end

function ClockAniNode:onCleanup()
    self:removeSchedule()
    ClockAniNode.super.onCleanup(self)
end

return ClockAniNodek	