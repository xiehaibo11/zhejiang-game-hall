local SxvipRecordView = CF.gameClass("SxvipRecordView", CF.ViewBase)

local MAH_POS = "sxvip_record_mah_pos"
local CARD_POS = "sxvip_record_card_pos"

function SxvipRecordView:ctor()
    SxvipRecordView.super.ctor(self)

    self:initView()
    self:updateView()
end

function SxvipRecordView:initView()
    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID()) 
    local posKey = isMah and MAH_POS or CARD_POS
    if cc.UserDefault:getInstance():getStringForKey(posKey, "") == "" then
        local pos = isMah and cc.p(self._mahPos:getPosition()) or cc.p(self._cardPos:getPosition())
        self._btnIcon:setPosition(pos)
        return
    end
    local iconPos = self:getLocalPos()
    self._btnIcon:setPosition(iconPos.x, iconPos.y)
end

function SxvipRecordView:updateView()
    local isVip = not CF.getLobbyModule("Sxvip"):isExpire()
    local isSingleRight = not CF.game:getModule("SxvipRecord"):getSingleRightExpire()
    if isVip or isSingleRight then
        CF.UITool.resetGray(self._icon)
        self._redPoint:setVisible(false)
    else
        CF.UITool.gray(self._icon)
        -- 红点逻辑
        local date = tonumber(os.date("%Y%m%d"))
        if date ~= CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SXVIPS_SHOW_RED_POINT_DATE, 0) then
            self._redPoint:setVisible(true)
        end
    end
end

function SxvipRecordView:getCSBPath()
    return "cocosStudio/Common/CSB/SxvipRecordLayer.csb"
end

function SxvipRecordView:getBindingInfo()
    return {
        ["_KW_ROOT_PANEL"] = {varName = "_panelRoot"},
        ["_KW_BTN"] = {varName = "_btnIcon", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouch = "onTouchIcon"},
        ["_ICON"] = {varName = "_icon"},
        ["_KW_RED_POINT"] = {varName = "_redPoint"},
        ["_KW_TIPS_BG_RIGHT"] = {varName = "_tipsBgRight"},
        ["_KW_TIPS_BG_LEFT"] = {varName = "_tipsBgLeft"},
        ["_KW_MAH_POS"] = {varName = "_mahPos"},
        ["_KW_CARD_POS"] = {varName = "_cardPos"},
    }
end

function SxvipRecordView:getProxyEvents()
    return {
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_GET_SINGLE_RIGHT_INFO", callBack = "onGetSingleRightInfo" },
        { module = CF.game:getModule("SxvipRecord"), eventKeyName = "SXVIP_RECORD_EVENT_UNLOCK_RIGHT_SUCC", callBack = "onUnlockRightSucc" },
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

-- 玩家点击开始游戏
function SxvipRecordView:onPlayerStart(event)
    if not self or tolua.isnull(self) or not event or not event.msg or not event.msg.seatID then
        return
    end
     -- 不是自己的位置
    if not (event.msg.seatID == CF.roomData:getSelfSeat()) then
        return
    end
    -- 已有权限
    local isVip = not CF.getLobbyModule("Sxvip"):isExpire()
    local isSingleRight = not CF.game:getModule("SxvipRecord"):getSingleRightExpire()
    if isVip or isSingleRight then
        return
    end
    -- 已经提示过
    if self:isShowTips() then
        return
    end
    -- 非赢
    if not self:getFirstWin() then
        return
    end
    self:showTip()
end

-- 展示提示
function SxvipRecordView:showTip()
    local tipsView = self:getTipsView()
    tipsView:setVisible(true)
    performWithDelay(self, function()
        tipsView:setVisible(false)
    end,4)
    CF.userDefault:setValue(CF.userDefault.KEY_ID.KW_SXVIPS_SHOW_WIN_TIPS_DATE, tonumber(os.date("%Y%m%d")))
end

-- 获取是左边还是右边的提示
function SxvipRecordView:getTipsView()
    local worldPos = self._btnIcon:convertToWorldSpace(cc.p(0, 0))
    if worldPos.x > display.cx  then
        return self._tipsBgLeft
    end
    return self._tipsBgRight
end

-- 获取玩家是否首胜
function SxvipRecordView:getFirstWin()
    local score = CF.game:getModule("SxvipRecord"):getCurRoomPlayerScore()
    if score > 0 then
        return true
    end
    return false
end

-- 是否已经展示过提示
function SxvipRecordView:isShowTips()
    local showTipsTime = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SXVIPS_SHOW_WIN_TIPS_DATE, 0)
    return showTipsTime == tonumber(os.date("%Y%m%d"))
end

function SxvipRecordView:onGetSingleRightInfo(event)
    if not self or tolua.isnull(self) then return end
    self:updateView()
end

function SxvipRecordView:onUnlockRightSucc(event)
    if not self or tolua.isnull(self) then return end
    self:updateView()
end

function SxvipRecordView:onTouchIcon(send, eventType)
    if eventType == ccui.TouchEventType.began then
        self:onTouchIconBegan(send)
    elseif eventType == ccui.TouchEventType.moved then
        self:onTouchIconMoved(send)
    elseif eventType == ccui.TouchEventType.ended then
        self:onTouchIconEnded(send, fun, icon)
    elseif eventType == ccui.TouchEventType.canceled then
        self:onTouchIconEnded(send)
    end
end

function SxvipRecordView:onTouchIconBegan(send)
    self._btnIconStartPosX = self._btnIcon:getPositionX()
    self._btnIconStartPosY = self._btnIcon:getPositionY()
    self._btnIconOffPosX = nil
    self._btnIconOffPosY = nil
end

function SxvipRecordView:onTouchIconMoved(send)
    local movePos = send:getTouchMovePosition()
    local tempPos = self:convertToNodeSpace(movePos)
    if self._btnIconOffPosX == nil then
        self._btnIconOffPosX = self._btnIconStartPosX - tempPos.x
        self._btnIconOffPosY = self._btnIconStartPosY - tempPos.y
    end
    self._btnIcon:setPosition(tempPos.x + self._btnIconOffPosX, tempPos.y + self._btnIconOffPosY)
end

function SxvipRecordView:onTouchIconEnded(send)
    if not self or tolua.isnull(self) then
        return
    end
    local BtnEndPosX = self._btnIcon:getPositionX()
    local BtnEndPosY = self._btnIcon:getPositionY()

    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._btnIcon:getContentSize()
    if BtnEndPosX < btnSize.width/2 then
        self._btnIcon:setPositionX(btnSize.width/2)
    elseif BtnEndPosX > viewSize.width - btnSize.width/2 then
        self._btnIcon:setPositionX(viewSize.width - btnSize.width/2)
    end
    if BtnEndPosY < btnSize.height/2 then
        self._btnIcon:setPositionY(btnSize.height/2)
    elseif BtnEndPosY > viewSize.height - btnSize.height/2 then
        self._btnIcon:setPositionY(viewSize.height - btnSize.height/2)
    end

    self:setLocalPos()

    -- 点击
    if math.abs(BtnEndPosX - self._btnIconStartPosX) <= 10 and math.abs(BtnEndPosY - self._btnIconStartPosY) <= 10 then
        CF.getLobbyModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy25052603, {page_item_id = self:getClickPageItemId()})
        CF.gameRequire("Modules.SxvipRecord.SxvipRecordMainView").new():showSelf()
        if self._redPoint:isVisible() then
            self._redPoint:setVisible(false)
            CF.userDefault:setValue(CF.userDefault.KEY_ID.KW_SXVIPS_SHOW_RED_POINT_DATE, tonumber(os.date("%Y%m%d")))
        end
    end
end

function SxvipRecordView:onWinSizeChange()
    local iconPos = self:getLocalPos()
    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._btnIcon:getContentSize()
    if iconPos.x < btnSize.width/2 then
        iconPos.x = btnSize.width/2
    elseif iconPos.x > viewSize.width - btnSize.width/2 then
        iconPos.x = viewSize.width - btnSize.width/2
    end
    if iconPos.y < btnSize.height/2 then
        iconPos.y = btnSize.height/2
    elseif iconPos.y > viewSize.height - btnSize.height/2 then
        iconPos.y = viewSize.height - btnSize.height/2
    end
    self._btnIcon:setPosition(iconPos)
    self:setLocalPos()
end

function SxvipRecordView:getClickPageItemId()
    local page_item_id = "未解锁"
    local isVip = not CF.getLobbyModule("Sxvip"):isExpire()
    local isSingleRight = not CF.game:getModule("SxvipRecord"):getSingleRightExpire()
    if isVip then
        page_item_id = "会员解锁"
    elseif isSingleRight then
        page_item_id = "付费解锁"
    end
    return page_item_id
end

function SxvipRecordView:setLocalPos()
    local pos = cc.p(self._btnIcon:getPosition())
    local str = string.format("%d,%d", pos.x, pos.y)

    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID()) 
    local posKey = isMah and MAH_POS or CARD_POS
    cc.UserDefault:getInstance():setStringForKey(posKey, str)
end

function SxvipRecordView:getLocalPos()
    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID()) 
    local posKey = isMah and MAH_POS or CARD_POS

    local posStr = cc.UserDefault:getInstance():getStringForKey(posKey, '0,0')
    local pos = string.split(posStr, ",")
    if tonumber(pos[1]) == 0 or tonumber(pos[2]) == 0 then
        local defaultPos = cc.p(self._btnIcon:getPosition())
        local str = string.format("%d,%d", defaultPos.x, defaultPos.y)
        cc.UserDefault:getInstance():setStringForKey(posKey, str)
        return defaultPos
    end
    return cc.p(tonumber(pos[1]), tonumber(pos[2]))
end

return SxvipRecordView