---@class TeaHouseMemberApplyItem : View
local TeaHouseMemberApplyItem = class("TeaHouseMemberApplyItem", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

TeaHouseMemberApplyItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberApplyItem.csb",
    binding = {
        ["_KW_IMG_APPLY_ITEM"] = { tag = "_KW_IMG_APPLY_ITEM", name = "_imgApplyItem", class = "img" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_INDEX"] = { tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text" },
        ["_KW_TEXT_TIME"] = { tag = "_KW_TEXT_TIME", name = "_textTime", class = "text" },
        ["_KW_TEXT_JOIN_TIP"] = { tag = "_KW_TEXT_JOIN_TIP", name = "_textJoinTip", class = "text" },
        ["_KW_TEXT_QUIT_TIP"] = { tag = "_KW_TEXT_QUIT_TIP", name = "_textQuitTip", class = "text" },
        ["_KW_BTN_REFUSE"] = { tag = "_KW_BTN_REFUSE", name = "_btnRefuse", class = "btn", events = "onRefuseClicked" },
        ["_KW_BTN_AGREE"] = { tag = "_KW_BTN_AGREE", name = "_btnAgree", class = "btn", events = "onAgreeClicked" },
        ["_KW_PANEL_FRIEND"] = { tag = "_KW_PANEL_FRIEND", name = "_panelFriend", class = "panel" },
        ["_KW_ITEM_HEAD"] = { tag = "_KW_ITEM_HEAD", name = "_itemHead", class = "panel" },
    }
}

function TeaHouseMemberApplyItem:ctor()
    TeaHouseMemberApplyItem.super.ctor(self)

    self._info = nil

    self:initUI()
end

function TeaHouseMemberApplyItem:initUI()
    if self._imgApplyItem then
        self._imgApplyItem:removeFromParent()
        self:addChild(self._imgApplyItem)
    end
    if self._btnRefuse then
        self._btnRefuse:setSwallowTouches(false)
    end
    if self._btnAgree then
        self._btnAgree:setSwallowTouches(false)
    end
end

function TeaHouseMemberApplyItem:getSize()
    if self._imgApplyItem ~= nil then
        return self._imgApplyItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseMemberApplyItem:updateInfo(info)
    self._info = info
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
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, info.url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(info.nickName, 12))
    end
    if self._textIndex then
        self._textIndex:setString("序号:" .. info.numid)
    end
    if self._textTime then
        self._textTime:setString("" .. os.date("%Y.%m.%d", info.nAskTime))
    end
    if self._textJoinTip then
        self._textJoinTip:setVisible(false)
    end
    if self._textQuitTip then
        self._textQuitTip:setVisible(false)
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:isMemberInJoin(info) then
        if self._textJoinTip then
            self._textJoinTip:setVisible(true)
        end
    elseif teahouseData:isMemberInQuit(info) then
        if self._textQuitTip then
            self._textQuitTip:setVisible(true)
        end
    end

    local friendPanel = self._panelFriend
    if friendPanel then
        local friendsInfo = info.friendInfo
        friendPanel:setVisible(friendsInfo and #friendsInfo > 0)
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

function TeaHouseMemberApplyItem:onRefuseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teahouseMember = TeaHouse.manager.teahouseMember
    teahouseMember:dealPower(self._info.areaid, self._info.numid, teahouseMember.APPLY_FLAG.REFUSE)
    if self._info.isFromFriend then
        XH.lobby:getModule("FriendTea"):reqBBDealJoinClub({clubId=TeaHouse.manager.teahouseData:getTeaNumber(), userIds={self._info.numid}, agree=false})
        self:throwFriendTeaData(0, self._info, self._info.friendInfo)
    end
end

function TeaHouseMemberApplyItem:onAgreeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local teahouseMember = TeaHouse.manager.teahouseMember
    teahouseMember:dealPower(self._info.areaid, self._info.numid, teahouseMember.APPLY_FLAG.AGREE)
    if self._info.isFromFriend then
        XH.lobby:getModule("FriendTea"):reqBBDealJoinClub({clubId=TeaHouse.manager.teahouseData:getTeaNumber(), userIds={self._info.numid}, agree=true})
        self:throwFriendTeaData(1, self._info, self._info.friendInfo)
    end
end

function TeaHouseMemberApplyItem:getGuideTipNode()
    return self._btnAgree
end

function TeaHouseMemberApplyItem:getGuideTipItemNode()
    return self._imgApplyItem
end

-- type:1同意,2拒绝
function TeaHouseMemberApplyItem:throwFriendTeaData(type, data, friendsInfo)
	if not data or not friendsInfo or #friendsInfo == 0 then
		return
	end
	local conventionData = {
		block_item_id = type == 1 and "同意" or "拒绝"
	}
    local isLeader = TeaHouse.manager.teahouseData:isOwner()
	local extraData = {
		choice = friendsInfo[1].userId,	-- 牌友id，选第一个玩家ID
		click_source = data.numid,	-- 申请人id
		club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),	-- 比赛场id
		role = isLeader and "领队" or "副领队",	-- 领队/副领队
	}
	XH.NewThrowDataManager:throwData("hgsc24112713", conventionData, extraData)
end
return TeaHouseMemberApplyItem�