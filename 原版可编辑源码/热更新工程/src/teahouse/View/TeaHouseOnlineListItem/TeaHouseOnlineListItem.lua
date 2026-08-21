---@class TeaHouseOnlineListItem : View
local TeaHouseOnlineListItem = class("TeaHouseOnlineListItem", TeaHouse.View)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

TeaHouseOnlineListItem.SpritePlistRes = "res/cocosStudio/TeaHouse/Image/tea_house_online_list.plist"
TeaHouseOnlineListItem.DefaultHead = "tea_house_online_head.png"

TeaHouseOnlineListItem.OnlineListType = {
    Member = 1,
    Lately = 2
}

TeaHouseOnlineListItem.OnlineState = {
    Online = 1,
    OffLine = 0,
    Gameing = 2
}

TeaHouseOnlineListItem.OnlineStateSpriteName = {
    [TeaHouseOnlineListItem.OnlineState.Online] = "friend_state_on_line.png",
    [TeaHouseOnlineListItem.OnlineState.OffLine] = "friend_state_off_line.png",
    [TeaHouseOnlineListItem.OnlineState.Gameing] = "friend_state_gaming.png",
}

TeaHouseOnlineListItem.InviteName = {
    [TeaHouseOnlineListItem.OnlineState.Online] = "friend_action_online_invite.png",
    [TeaHouseOnlineListItem.OnlineState.OffLine] = "friend_action_wechat_invite.png",
}

TeaHouseOnlineListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseOnlineListItem/TeaHouseOnlineListItem.csb",
    binding = {
        ["_KW_IMG_BG_HEAD"] = { tag = "_KW_IMG_BG_HEAD", name = "_imgHeadBg", class = "img" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_ID"] = { tag = "_KW_TEXT_ID", name = "_textID", class = "text" },
        ["_KW_SPRITE_STATE"] = { tag = "_KW_SPRITE_STATE", name = "_spriteState", class = "sprite" },
        ["_KW_BTN_INVITE"] = { tag = "_KW_BTN_INVITE", name = "_btnInvite", class = "btn", events = "onBtnEventInvite" },
        ["_KW_BTN_FRIEND_DATA"] = { tag = "_KW_BTN_FRIEND_DATA", name = "_btnFriendData", class = "btn", events = "onBtnEventFriendData" },
        ["_KW_TEXT_GAME_TIME"] = { tag = "_KW_TEXT_GAME_TIME", name = "_textGameTime", class = "text" },
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_IMG_HEAD"] = { tag = "_KW_IMG_HEAD", name = "_imgHead", class = "img" },
        ["_KW_IMG_RECALL_TAG"] = { tag = "_KW_IMG_RECALL_TAG", name = "_KW_IMG_RECALL_TAG", class = "panel" },
    }
}

function TeaHouseOnlineListItem:ctor()
    TeaHouseOnlineListItem.super.ctor(self)

    self:initView()
    self:initEvents()
end

function TeaHouseOnlineListItem:initEvents()
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_FLUSH_RECALL_TEAM_ACT_TAG, handler(self, self.showRecallNewTag))
end

function TeaHouseOnlineListItem:showRecallNewTag()
    if self._KW_IMG_RECALL_TAG:getChildrenCount() == 0 then
        XH.SpineManager:playAni(self._KW_IMG_RECALL_TAG, "animation/Lobby/Base/zzb_hghd_jb/", "zzb_hghd_jb", "animation", true)
    end
    self._KW_IMG_RECALL_TAG:setVisible(XH.lobby:getModule("RecallTeam"):isBackPlayer(self._info.stUserInfo.nNumId))
end

function TeaHouseOnlineListItem:initView()
    if self._btnInvite then
        self._btnInvite:setSwallowTouches(false)
        self._btnInvite:setVisible(false)
    end
    self._textGameTime:setVisible(false)
end

function TeaHouseOnlineListItem:updateInfo(info, inviteOfflineFunc,selectListType)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(TeaHouseOnlineListItem.SpritePlistRes)
    self._info = info
    self._inviteOfflineFunc = inviteOfflineFunc
    self._selectListType = selectListType or TeaHouseOnlineListItem.OnlineListType.Member

    self:setOnlineState(info.stUserInfo.ucGameStatus)
    self:setHeadUrl(info.stUserInfo.acHeadUrl)
    self:setPlayerName(info.stUserInfo.acNickName)
    self:setPlayerID(info.stUserInfo.nNumId)
    self:setGameingTime(info.stUserInfo.nGameTime)
    self:showRecallNewTag()
end

function TeaHouseOnlineListItem:setHeadUrl(url)
    local headNode = XH.UIRemoteImage.create(self._imgHead)
    if headNode then
        local KW_IMG_DEFULT_HEAD = "tea_house_online_head.png"
        headNode:setDefaultTexture(KW_IMG_DEFULT_HEAD, ccui.TextureResType.plistType)
        headNode:setUrl(url)
    end
end

function TeaHouseOnlineListItem:setPlayerName(nameStr)
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(nameStr or ""))
    end
end

function TeaHouseOnlineListItem:setPlayerID(numId)
    if self._textID then
        self._textID:setString(numId)
    end
end

function TeaHouseOnlineListItem:setGameingTime(time)
    if self._textGameTime then
        time = time or 0
        time = time < 0 and 0 or time
        self._textGameTime:setString("开局" .. math.floor(time / 60) .. "分钟")
    end
end

function TeaHouseOnlineListItem:setOnlineState(state)
    if TeaHouseOnlineListItem.OnlineStateSpriteName[state] then
        self._spriteState:setSpriteFrame(TeaHouseOnlineListItem.OnlineStateSpriteName[state])
    end
    if state == TeaHouseOnlineListItem.OnlineState.Gameing then
        self._btnInvite:setVisible(false)
        self._textGameTime:setVisible(true)
    else
        self._textGameTime:setVisible(false)
        if TeaHouseOnlineListItem.InviteName[state] then
            local nameStr = TeaHouseOnlineListItem.InviteName[state]
            self._btnInvite:loadTexture(nameStr, ccui.TextureResType.plistType)
            self._btnInvite:setTag(state)
        end
        self._btnInvite:setVisible(true)
    end
end

function TeaHouseOnlineListItem:onBtnEventFriendData(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.viewManager:openView("SxvipView", nil, {defalutMenu = SxVipConfig.MENU_DEFINE.FRIEND_INFO})
end

function TeaHouseOnlineListItem:onBtnEventInvite(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local tag = send:getTag()
    if tag == TeaHouseOnlineListItem.OnlineState.OffLine then
        if self._inviteOfflineFunc then
            --游戏界面时调用
            if TeaHouse.manager.teaHouseOnline:checkCanInvite(self._info.stUserInfo.nNumId) then
                self._inviteOfflineFunc() 
            end
        else
            TeaHouse.manager.teaHouseOnline:inviteOffline(self._info.stUserInfo.nNumId)
        end
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_50)
    else
        local position = TeaHouse.BridgeData.getPlayerPosition()
        if position.gameAppID and position.gameAppID == 0 then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "请先创建桌子")
        else
            TeaHouse.manager.teaHouseOnline:reqInvite(self._info.stUserInfo.nNumId)
        end
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_51)
    end

    -- 抛送点击邀请、在线按钮数据  无预约
    local buttonContent = nil
    if tag == TeaHouseOnlineListItem.OnlineState.OffLine then 
        buttonContent = "微信邀请"
    elseif tag == TeaHouseOnlineListItem.OnlineState.Online then 
        buttonContent = "在线邀请"
    end
    local sceneName = XH.gameManager and "比赛场房间" or "比赛场"
    local data = {
        block_item_id = buttonContent,
        block_label = sceneName
    }
    -- 判断成员列表还是最近列表
    if self._selectListType == TeaHouseOnlineListItem.OnlineListType.Member then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052708, data)
    elseif self._selectListType == TeaHouseOnlineListItem.OnlineListType.Lately then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052702, data)
    end
end

return TeaHouseOnlineListItem