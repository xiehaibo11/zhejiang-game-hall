---@class TeaHouseMemberLogItem : View
local TeaHouseMemberLogItem = class("TeaHouseMemberLogItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

TeaHouseMemberLogItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberLogItem.csb",
    binding = {
        ["_KW_IMG_LOG_ITEM"] = { tag = "_KW_IMG_LOG_ITEM", name = "_imgLogItem", class = "img" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_TIME"] = { tag = "_KW_TEXT_TIME", name = "_textTime", class = "text" },
        ["_KW_TEXT_JOIN_TIP"] = { tag = "_KW_TEXT_JOIN_TIP", name = "_textJoinTip", class = "text" },
        ["_KW_TEXT_QUIT_TIP"] = { tag = "_KW_TEXT_QUIT_TIP", name = "_textQuitTip", class = "text" },
        ["_KW_TEXT_KICK_TIP"] = { tag = "_KW_TEXT_KICK_TIP", name = "_textKickTip", class = "text" },
        ["_KW_TEXT_OP_NAME"] = { tag = "_KW_TEXT_OP_NAME", name = "_textOpName", class = "text" },
        ["_KW_PANEL_FRIEND"] = { tag = "_KW_PANEL_FRIEND", name = "_panelFriend", class = "panel" },
        ["_KW_ITEM_HEAD"] = { tag = "_KW_ITEM_HEAD", name = "_itemHead", class = "panel" },
    }
}

function TeaHouseMemberLogItem:ctor()
    TeaHouseMemberLogItem.super.ctor(self)

    self._info = nil

    self:initUI()
end

function TeaHouseMemberLogItem:initUI()
    if self._imgLogItem then
        self._imgLogItem:removeFromParent()
        self:addChild(self._imgLogItem)
    end
end

function TeaHouseMemberLogItem:getSize()
    if self._imgLogItem ~= nil then
        return self._imgLogItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberLogItem:updateInfo(info)
    self._info = info
    -- info.acExtraData = "system=1"--测试代码
    if self._panelHead then
        if not self._remoteImage then
            local size = self._panelHead:getContentSize()
            self._remoteImage = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 5, size.height - 5)
            :addTo(self._panelHead)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
            self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        end
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.acUrl, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(info.acNickName, 12))
    end
    if self._textIndex then
        self._textIndex:setString("序号:" .. info.nPlayerNumId)
    end
    if self._textTime then
        self._textTime:setString(os.date("%Y.%m.%d %H:%M:%S", info.nTime))
    end
    if self._textJoinTip then
        self._textJoinTip:setVisible(info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.JOIN)
    end
    if self._textQuitTip then
        self._textQuitTip:setVisible(info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.QUIT or
         info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.MQUIT )
         if string.match(info.acExtraData, "system=1") then
            self._textQuitTip:setString("请出不活跃成员")
         else
            self._textQuitTip:setString("离开了比赛场")
         end
    end
    if self._textKickTip then
        self._textKickTip:setVisible(info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.INVITE )
    end

    if self._textOpName then
        if string.match(info.acExtraData, "system=1") then
            self._textOpName:setString("系统")
        else
            local name = string.gsub(info.acOperNickName, "\n", "")
            self._textOpName:setString(TeaHouse.StringTool.getTrimName(name, 12))
        end
    end
    local friendPanel = self._panelFriend
    if friendPanel then
        local friendsInfo = XH.lobby:getModule("FriendTea"):getApplyFriendsInfo(TeaHouse.manager.teahouseData:getTeaNumber(), info.nPlayerNumId).users -- info.friendInfo
        local isShowFriend = info.cOperType == TeaHouse.manager.teahouseMember.LOG_TYPE.JOIN and friendsInfo and #friendsInfo > 0
        friendPanel:setVisible(isShowFriend)
        if isShowFriend then
            local friendList = friendPanel:getChildByName("KW_LIST_FRIEND")
            friendList:removeAllChildren()
            friendList:setScrollBarEnabled(false)
            friendList:setSwallowTouches(false)
            for i,v in ipairs(friendsInfo or {}) do
                local head = self._itemHead:clone()
                head:setVisible(true)
                friendList:pushBackCustomItem(head)
                local headImg = head:getChildByName("KW_PANEL_HEAD")
                local name = head:getChildByName("KW_TEXT_NAME")
                local id = head:getChildByName("KW_TEXT_ID")
                name:setString(XH.StringTool.getTrimName(v.nick, 8))
                id:setString(""..v.userId)
                local size = headImg:getContentSize()
                local imgHead = XH.RemoteImage.new()
                imgHead:setPosition(size.width/2, size.height/2)
                imgHead:ignoreContentAdaptWithSize(false)
                imgHead:setContentSize(size.width, size.height)
                imgHead:addTo(headImg)
                imgHead:setUrl(v.head)
            end
        end
    end
end

return TeaHouseMemberLogItem