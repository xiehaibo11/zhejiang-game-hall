----create by lcy 2017.12.1
local UICardsLayer = class("UICardsLayer")
local CURRENT_MOUDLE_NAME = ...

--牌层点击事件
function UICardsLayer:onTouchEventTouchLayer(send,eventType)
    if eventType ~= ccui.TouchEventType.began then
        return
    end
    self:clearCheckedCards(self.CardLocalSeat.Bottom)
    
    --通知所有牌放下
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UICardLayer.UICardArea.onEventCheckedCard")
    event.checkedCardIDs = {}
    event.checkedCardIDIndexes = {}
    eventDispatcher:dispatchEvent(event)  
end

return UICardsLayer�