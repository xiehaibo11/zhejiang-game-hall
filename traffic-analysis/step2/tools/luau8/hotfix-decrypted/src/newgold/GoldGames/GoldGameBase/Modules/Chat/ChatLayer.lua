local ChatLayer = class("ChatLayer", NG.ViewBase)

function ChatLayer:ctor(isMah)
    ChatLayer.super.ctor(self)
    self._chatlist = {}
    self._isMah = isMah
    self:initView()
end

function ChatLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/GameBase/CSB/Chat/ChatLayer.csb"
end

function ChatLayer:getBindingInfo()
    return {
        --
        ["_KW_PANEL_BG"] = {varName = "_panelBg"},
        ["_KW_CHAT_BG"] = {varName = "_chatBg"},
        ["_KW_CHAT_LIST_VIEW"] = {varName = "_chatListView"},
        ["_KW_CHAT_ITEM"] = {varName = "_chatItem"}
    }
end

function ChatLayer:initView()
    self._panelBg:setTouchEnabled(true)
    self._chatListView:setItemModel(self._chatItem)
    self:updateChatList()
    self._panelBg:addTouchEventListener(handler(self, self.onTouchExit))
    if self._isMah then
        self._chatBg:setPositionX(self._chatBg:getPositionX() - 140)
        self._chatBg:setPositionY(self._chatBg:getPositionY() - 100)
    end
end

function ChatLayer:updateChatList()
    self._chatListView:removeAllChildren()
    for k, v in ipairs(self._chatlist) do
        self._chatListView:pushBackDefaultItem()
        local items = self._chatListView:getItems()
        local newitem = items[#items]
        local text = newitem:getChildByName("_KW_CHAT_TEXT")
        text:setString(v)
        newitem:setTag(k)
        newitem:addClickEventListener(handler(self, self.onChatItemClicked))
        newitem:setVisible(true)
        newitem:setTouchEnabled(true)
    end
end

function ChatLayer:onChatItemClicked(sender)
    local tag = sender:getTag()
    print("send chat:" .. self._chatlist[tag])
    NG.msgManager:sendGameSpeak(tag)
end

function ChatLayer:onTouchExit(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function ChatLayer:showSelf(chatlist)
    if not chatlist then
        chatlist = {}
    end
    self._chatlist = chatlist
    self:updateChatList()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
end

return ChatLayer
g