local AniTopView = class("AniTopView", XH.ViewBase)

function AniTopView:getCSBPath()
    return "cocosStudio/hall/CSB/AniTopLayer.csb"
end

--- 获得节点的绑定信息
function AniTopView:getBindingInfo()
    return {}
end

function AniTopView:ctor(param)
    param = param or {}
    AniTopView.super.ctor(self, param)
    local listener = cc.EventListenerTouchOneByOne:create()
    listener:setSwallowTouches(false)
    listener:registerScriptHandler(function(touch, event)
        self:clickAniPreTouchEnd(touch, event)
        return true  -- 必须返回true，接下来的事件才会继续传递
    end, cc.Handler.EVENT_TOUCH_BEGAN)
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    eventDispatcher:addEventListenerWithSceneGraphPriority(listener, self._csbRoot)
end

-- 空白区域点击反馈
function AniTopView:clickAniPreTouchEnd(touch, eventType)
    -- if CF then
    --     return
    -- end
    if NG and NG.goldGame then
        return
    end
    if self._viewBaseClickAniIndex == nil then
        self._viewBaseClickAniIndex = 1
    else
        self._viewBaseClickAniIndex = self._viewBaseClickAniIndex + 1
        self._viewBaseClickAniIndex = self._viewBaseClickAniIndex > 9 and 1 or self._viewBaseClickAniIndex
    end
    if self._viewBaseEmptyClickAni == nil then
        local config = {
            path = "",
            ske = "animation/Lobby/Base/zzb_ty_djfk/zzb_ty_djfk.atlas",
            tex = "animation/Lobby/Base/zzb_ty_djfk/zzb_ty_djfk.json",
            armatureName = self._viewBaseClickAniIndex,
            scale = 1,
            loop = false,
        }
        self._viewBaseEmptyClickAni = display.playDargonBonesSpine(config)
        self._viewBaseEmptyClickAni:setPosition(cc.p(0, 0))
        self._viewBaseEmptyClickAni:setAnchorPoint(cc.p(0.5, 0.5))
        self._viewBaseEmptyClickAni:setLocalZOrder(99999)
        self._csbRoot:addChild(self._viewBaseEmptyClickAni)
    else
        self._viewBaseEmptyClickAni:setAnimation(0, self._viewBaseClickAniIndex, false)
    end
    local nodeLocation = self._csbRoot:convertToNodeSpace(touch:getLocation())
    self._viewBaseEmptyClickAni:setPosition(nodeLocation)
end

return AniTopView