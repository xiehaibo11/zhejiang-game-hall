---@class UITool : BridgeUI 扩展UI工具，注方法被覆盖
local UITool = TeaHouse.BridgeUI

---@param send Node
function UITool.onDefaultButtonClicked(send, eventType)
    if eventType == ccui.TouchEventType.began then
        TeaHouse.playButtonClick()
        send:setScale(0.9)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1)
        send:setColor(cc.c3b(255, 255, 255))
    end
end

function UITool.onDefaultButtonClickedWithScale(send, eventType, scale)
    local myScale = scale or 1
    if eventType == ccui.TouchEventType.began then
        TeaHouse.playButtonClick()
        send:setScale(0.9*myScale)
        send:setColor(cc.c3b(160, 160, 160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(myScale)
        send:setColor(cc.c3b(255, 255, 255))
    end
end

---@param send Node
function UITool.onNoActionButtonClicked(send, eventType)
    if eventType == ccui.TouchEventType.began then
        TeaHouse.playButtonClick()
    end
end

---@param widget Widget
function UITool.adaptTextToWidth(widget, width, maxFontSize, minFontSize)
    if widget == nil then
        return 0
    end

    local curFontSize = maxFontSize
    while curFontSize > minFontSize do
        if widget:getContentSize().width > width then
            curFontSize = curFontSize - 1
            widget:setFontSize(curFontSize)
        else
            break
        end
    end
    return curFontSize
end

function UITool.getNotchWidth()
    return display.notchWidth
end

function UITool.isLiuHaiScreen()
    return display.notchWidth > 0
end

return UITool