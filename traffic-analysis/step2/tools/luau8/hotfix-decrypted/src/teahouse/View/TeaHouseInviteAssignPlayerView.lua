-- 选择需要创建的比赛场
local TeaHouseInviteAssignPlayerView = class("TeaHouseInviteAssignPlayerView",TeaHouse.View)
local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"
TeaHouseInviteAssignPlayerView.RAW_RES_BINDING_CSB =
{
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInviteAssignPlayerView.csb",
    binding = {
        ["_KW_BTN_INVITE_PLAYER_CLOSE"] = {tag = "_KW_BTN_INVITE_PLAYER_CLOSE",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_INVITE_NOW"] = {tag = "_KW_INVITE_NOW",name = "_btnSure",class = "btn",events = "onSureClicked"},
        ["_KW_PLAYER_IMG"] = {tag = "_KW_PLAYER_IMG",name = "_playerImg"},
        ["_KW_PLAYER_NAME"] = {tag = "_KW_PLAYER_NAME",name = "_playerName"},
        ["_KW_PLAYER_NUMBER"] = {tag = "_KW_PLAYER_NUMBER",name = "_playerMember"},
    }
}

function TeaHouseInviteAssignPlayerView:ctor(userInfo)
    TeaHouseInviteAssignPlayerView.super.ctor(self)
    
    self._numId = userInfo.nNumid 
    self._userName = userInfo.nNickname 
    self._url = userInfo.nHeadurl
    self:init(userInfo)
end

function TeaHouseInviteAssignPlayerView:init(userInfo) 
    if self._playerImg and self._url ~= "" then
        if not self._remoteImage then
            local size = self._playerImg:getContentSize()
            self._remoteImage = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 5, size.height - 5)
            :addTo(self._playerImg)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
            self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        end
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, self._url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    self._playerName:setString("昵称："..TeaHouse.StringTool.getTrimName(self._userName, 12))
    if self._playerMember then
        self._playerMember:setString("序号：" .. self._numId)
    end
end

function TeaHouseInviteAssignPlayerView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self:close()
end

function TeaHouseInviteAssignPlayerView:onSureClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData:getMaxPlayerCount() > 0 and teahouseData:getPlayerCount() >= teahouseData:getMaxPlayerCount() then
        TeaHouse.TipTool.showToast("TEAHOUSE_REACH_MAX_NUMBER")
    else
        local tempList = {}
        table.insert(tempList,self._numId)
        TeaHouse.manager.teahouseMain:onReqSendRecomendInvite(tempList,1)
    end

    self:close()
end



return TeaHouseInviteAssignPlayerView
