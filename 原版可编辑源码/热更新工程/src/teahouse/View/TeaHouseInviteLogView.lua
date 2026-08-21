local TeaHouseInviteLogView = class("TeaHouseInviteLogView", TeaHouse.View)
local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"
local InviteUserStatus =
{
    HAD_INVITED = "已邀请",
    HAD_REFUSE = "已拒绝",
    HAD_AGREED = "已同意",
    FAILED = "邀请失败",
}

TeaHouseInviteLogView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInviteLogView.csb",
    binding = {
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_LIST_VIEW"] = { tag = "_KW_LIST_VIEW", name = "_listView", class = "panel" },
        ["_KW_ITEM_LOG"] = { tag = "_KW_ITEM_LOG", name = "_itemLog", class = "panel" },
        ["_KW_INVITE_USER_HEAD"] = {tag = "_KW_INVITE_USER_HEAD", name = "_userHeadImg"},
        ["_KW_INVITE_USER_NAME"] = {tag = "_KW_INVITE_USER_NAME", name = "_userName"},
        ["_KW_INVITE_USER_ID"] = {tag = "_KW_INVITE_USER_ID", name ="_userID"},
        ["_KW_INVITE_USER_TIME"] = {tag = "_KW_INVITE_USER_TIME", name = "_userTime"},
        ["_KW_INVITE_USER_STATUS"] = {tag = "_KW_INVITE_USER_STATUS", name = "_userStatus"},

    }
}

function TeaHouseInviteLogView:ctor()
    TeaHouseInviteLogView.super.ctor(self)
    TeaHouse.manager.teahouseMember:onReqTeaInviteLog()
    self._logList = {}
    
end

function TeaHouseInviteLogView:onEnter()
    self:initEvents()
end

function TeaHouseInviteLogView:initEvents()
    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_MEMBER_INVITE_LOG, handler(self, self.initInviteLog))
end

function TeaHouseInviteLogView:initInviteLog(event)
    if not event then
        return 
    end
    if event.msg and event.msg.playerInfo then
        self._logList = event.msg.playerInfo
    end
    local widthSize = self._itemLog:getContentSize().width
    local heightSize = self._itemLog:getContentSize().height
    self._listView:setInnerContainerSize(cc.size(widthSize,heightSize * event.msg.count))
    for _, v in ipairs(self._logList) do
        local temp =self._itemLog:clone()
        temp:getChildByName("_KW_INVITE_USER_ID"):setString("序号:" .. v.numid)
        temp:getChildByName("_KW_INVITE_USER_NAME"):setString("昵称:" .. v.nickname)
        if v.state == 0 then
            --根据服务下发的玩家状态标记颜色
            --1.已邀请
            temp:getChildByName("_KW_INVITE_USER_STATUS"):setString(InviteUserStatus.HAD_INVITED)
            temp:getChildByName("_KW_INVITE_USER_STATUS"):setColor(cc.c3b(0,255,255))
        elseif v.state == 1 then
            --2.已拒绝、邀请失败
            temp:getChildByName("_KW_INVITE_USER_STATUS"):setString(InviteUserStatus.HAD_REFUSE)
            temp:getChildByName("_KW_INVITE_USER_STATUS"):setColor(cc.c3b(128,128,128))
            --3.已同意
        elseif v.state ==2 then
            temp:getChildByName("_KW_INVITE_USER_STATUS"):setString(InviteUserStatus.HAD_AGREED)
            temp:getChildByName("_KW_INVITE_USER_STATUS"):setColor(cc.c3b(255,0,0))
        end
        if temp._userHeadImg then
            if not temp._remoteImage then
                local size = temp._userHeadImg:getContentSize()
                temp._remoteImage = TeaHouse.RemoteImage.new()
                :setPosition(size.width / 2, size.height / 2)
                :ignoreContentAdaptWithSize(false)
                :setContentSize(size.width - 5, size.height - 5)
                :addTo(temp._userHeadImg)
                cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
                temp._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
            end
            TeaHouse.SysTool.loadRemoteImage(temp._remoteImage, v.headurl, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
        end
        local inviteTime = self:formatTime(v.invitetime)
        temp:getChildByName("_KW_INVITE_USER_TIME"):setString(inviteTime)
        self._listView:addChild(temp)
        
    end
end

function TeaHouseInviteLogView:formatTime(time)
    if not time or time <= 0 then
        return ""
    end
    local month = os.date("%m", time)
    local day = os.date("%d", time)
    local hour = os.date("%H", time)
    local minute = os.date("%M", time)
    local timeStr = month .. "-" .. day .. " " .. hour .. ":" .. minute
    return timeStr
end

function TeaHouseInviteLogView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

return TeaHouseInviteLogView