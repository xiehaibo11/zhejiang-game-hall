---@class IMTeaHouseOnlineListItem : View
local IMTeaHouseOnlineListItem = class("IMTeaHouseOnlineListItem", XH.ViewBase)

IMTeaHouseOnlineListItem.SpritePlistRes = "res/cocosStudio/TeaHouse/Image/tea_house_online_list.plist"
IMTeaHouseOnlineListItem.DefaultHead = "tea_house_online_head.png"

IMTeaHouseOnlineListItem.OnlineListType = {
    Member = 1,
    Lately = 2
}

IMTeaHouseOnlineListItem.OnlineState = {
    Online = 1,
    OffLine = 0,
    Gameing = 2
}

IMTeaHouseOnlineListItem.OnlineStateSpriteName = {
    [IMTeaHouseOnlineListItem.OnlineState.Online] = "friend_state_on_line.png",
    [IMTeaHouseOnlineListItem.OnlineState.OffLine] = "friend_state_off_line.png",
    [IMTeaHouseOnlineListItem.OnlineState.Gameing] = "friend_state_gaming.png",
}

IMTeaHouseOnlineListItem.InviteName = {
    [IMTeaHouseOnlineListItem.OnlineState.Online] = "friend_action_online_invite.png",
    [IMTeaHouseOnlineListItem.OnlineState.OffLine] = "friend_action_wechat_invite.png",
}


function IMTeaHouseOnlineListItem:getCSBPath()
    return "cocosStudio/TeaHouse/CSB/TeaHouseOnlineListItem/TeaHouseOnlineListItem.csb"
end

function IMTeaHouseOnlineListItem:getBindingInfo()
    return {
        ["_KW_IMG_BG_HEAD"] = { varName = "_imgHeadBg" },
        ["_KW_TEXT_NAME"] = { varName = "_textName" },
        ["_KW_TEXT_ID"] = { varName = "_textID" },
        ["_KW_SPRITE_STATE"] = { varName = "_spriteState" },
        ["_KW_BTN_INVITE"] = { varName = "_btnInvite", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnEventInvite" },
        ["_KW_TEXT_GAME_TIME"] = { varName = "_textGameTime" },
        ["_KW_PANEL_HEAD"] = { varName = "_panelHead" },
        ["_KW_IMG_HEAD"] = { varName = "_imgHead" },
    }
end

function IMTeaHouseOnlineListItem:ctor()
    IMTeaHouseOnlineListItem.super.ctor(self)
    self:initView()
end

function IMTeaHouseOnlineListItem:initView()
    if self._btnInvite then
        self._btnInvite:setSwallowTouches(false)
        self._btnInvite:setVisible(false)
    end
    self._textGameTime:setVisible(false)
end

function IMTeaHouseOnlineListItem:updateInfo(info, inviteOfflineFunc, selectListType)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(IMTeaHouseOnlineListItem.SpritePlistRes)
    self._info = info
    self._inviteOfflineFunc = inviteOfflineFunc
    self._selectListType = selectListType or IMTeaHouseOnlineListItem.OnlineListType.Member

    self:setOnlineState(info.stUserInfo.ucGameStatus)
    self:setHeadUrl(info.stUserInfo.acHeadUrl)
    self:setPlayerName(info.stUserInfo.acNickName)
    self:setPlayerID(info.stUserInfo.nNumId)
    self:setGameingTime(info.stUserInfo.nGameTime)
end

function IMTeaHouseOnlineListItem:setHeadUrl(url)
    local headNode = XH.UIRemoteImage.create(self._imgHead)
    if headNode then
        local KW_IMG_DEFULT_HEAD = "tea_house_online_head.png"
        headNode:setDefaultTexture(KW_IMG_DEFULT_HEAD, ccui.TextureResType.plistType)
        headNode:setUrl(url)
    end
end

function IMTeaHouseOnlineListItem:setPlayerName(nameStr)
    if self._textName then
        self._textName:setString(XH.StringTool.getTrimName(nameStr or ""))
    end
end

function IMTeaHouseOnlineListItem:setPlayerID(numId)
    if self._textID then
        self._textID:setString(numId)
    end
end

function IMTeaHouseOnlineListItem:setGameingTime(time)
    if self._textGameTime then
        time = time or 0
        time = time < 0 and 0 or time
        self._textGameTime:setString("开局" .. math.floor(time / 60) .. "分钟")
    end
end

function IMTeaHouseOnlineListItem:setOnlineState(state)
    if IMTeaHouseOnlineListItem.OnlineStateSpriteName[state] then
        self._spriteState:setSpriteFrame(IMTeaHouseOnlineListItem.OnlineStateSpriteName[state])
    end
    if state == IMTeaHouseOnlineListItem.OnlineState.Gameing then
        self._btnInvite:setVisible(false)
        self._textGameTime:setVisible(true)
    else
        self._textGameTime:setVisible(false)
        if IMTeaHouseOnlineListItem.InviteName[state] then
            local nameStr = IMTeaHouseOnlineListItem.InviteName[state]
            self._btnInvite:loadTexture(nameStr, ccui.TextureResType.plistType)
            self._btnInvite:setTag(state)
        end
        self._btnInvite:setVisible(true)
    end
end

function IMTeaHouseOnlineListItem:onBtnEventInvite(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local tag = send:getTag()
    if tag == IMTeaHouseOnlineListItem.OnlineState.OffLine then
        if self._inviteOfflineFunc then
            --游戏界面时调用
            if XH.lobby:getModule("Im"):checkCanInvite(self._info.stUserInfo.nNumId) then
                self._inviteOfflineFunc() 
            end
        else
            XH.lobby:getModule("Im"):onTouchShare()
        end
    else
        local position = XH.playerData:getPlayerPosition()
        if position.gameAppID and position.gameAppID == 0 then
            XH.TipTool.showTip({ type = XH.TIP_LAYER_TYPE.OK }, "请先创建桌子")
        else
            XH.lobby:getModule("Im"):reqInvite(self._info.stUserInfo.nNumId)
        end
    end
end

return IMTeaHouseOnlineListItem�