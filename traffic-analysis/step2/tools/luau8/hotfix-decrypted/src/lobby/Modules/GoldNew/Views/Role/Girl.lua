local Girl = class("Girl", XH.Bridge.ViewBase)
local LocalConfig = import("...Configs.LocalConfig")
local RemoteConfig = import("...Configs.RemoteConfig")
local Utils = import("...Tool.Utils")

function Girl:getCSBPath()
    return nil
end

function Girl:onInitCSB(csbPath)
    self._csbRoot = ccui.Layout:create()
    self:setAnchorPoint(cc.p(0.5, 0.5))
    self:addChild(self._csbRoot)
end

function Girl:getBindingInfo()
    return {}
end

function Girl:getProxyEvents()
    return {}
end

function Girl:ctor(param)
    Girl.super.ctor(self, param)
    self._waitNum = 0
    self:setCascadeOpacityEnabled(true)
    self._ani = Utils:addSpine(self, "Role", "zzb_ty_renwu", "animation1", 1, false)
    if self._ani then
        self._ani:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                self._waitNum = self._waitNum + 1
                self:showAction()
            end
        end, sp.EventType.ANIMATION_COMPLETE)
    end
end

function Girl:showAction()
    if self._waitNum == 3 or (self._waitNum == 2 and math.random() < 0.5) then
        self._ani:setAnimation(0, math.random() < 0.5 and "animation2" or "animation3", false)
        self._waitNum = -1
    else
        self._ani:setAnimation(0, "animation1", false)
    end
end

function Girl:onEnter()
end

function Girl:startShow()
end

function Girl:startHide()
end
function Girl:onClick()
    -- self._ani:setAnimation(0, math.random() < 0.5 and "animation2" or "animation3", false)
    -- self._waitNum = -1
end
return Girl
@