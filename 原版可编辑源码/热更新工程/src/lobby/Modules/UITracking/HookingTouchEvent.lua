-- 拦截所有touch事件
local originalAddTouchEventListener = ccui.Widget.addTouchEventListener

function ccui.Widget:addTouchEventListener(callback)
    -- 创建一个新的回调，覆盖原始的回调
    local newCallback = function(sender, eventType)
        if eventType == ccui.TouchEventType.ended then
            if XH and XH.lobby then
                XH.lobby:getModule("UITracking"):track(self)
            end
        end
        callback(sender, eventType)
    end
    originalAddTouchEventListener(self, newCallback)
end