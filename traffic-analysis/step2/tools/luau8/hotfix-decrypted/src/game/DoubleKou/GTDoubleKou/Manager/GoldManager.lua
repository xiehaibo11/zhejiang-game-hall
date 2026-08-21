
local GoldManager = CF.gameClass("GoldManager", "game.DoubleKou.BaseDoubleKou.Manager.GoldManager")
local SxVipConfig = require('lobby.Modules.Sxvip.Config')
function GoldManager:getProxyEvents()
    local baseEvents = GoldManager.super.getProxyEvents(self)
    -- Inserting additional event
    table.insert(baseEvents, {module = CF.netEngine, eventName = CF.GameProtocolGT.PlayerLeaveEx_ToClient.event_key, callBack = "onRecivePlayerLeaveEx"})
    table.insert(baseEvents, {module = CF.netEngine, eventName = CF.GameProtocolGT.RespLeaveRoom.event_key, callBack = "onRespLeaveRoom"}) -- todo
    table.insert(baseEvents, {module = CF.netEngine, eventName = CF.GameProtocolGT.ChatMsg.event_key, callBack = "onChatMsg"}) -- todo
    table.insert(baseEvents, {module = CF.netEngine, eventName = CF.GameProtocolGT.PopupMsgBox.event_key, callBack = "onPopupMsgBox"}) -- todo
    table.insert(baseEvents, {module = CF.netEngine, eventName = CF.GameProtocolGT.RespVipKickUser.event_key, callBack = "onRespVipKickUser"})
    table.insert(baseEvents, {module = CF.netEngine, eventName = CF.GameProtocolGT.RespPlayerAct.event_key, callBack = "onRespPlayerAct"})
    return baseEvents
end

function GoldManager:onChatMsg(event)
    local chatMsg = CF.GameProtocolGT.ChatMsg:new()
    chatMsg:bistream(event.msg.buff, event.msg.len)
    if chatMsg.m_color == 0xFF0000 and string.match(chatMsg.msg, "被会员请离本桌") then
        XH.TipTool.showToast(chatMsg.msg)
    end
    local m = XH.lobby:getModule("Sxvip.ThrowData")
    if m:getKickUser() == XH.playerData:getNumberID() then
        CF.game:getModule("Kick"):notifyKickSuccess()
        m:throwData(XH.NewThrowDataDefine.hy24090622, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID()), state = "成功"})
    end
    m:setKickUser(0)
end

function GoldManager:onRespVipKickUser(event)
    local respVipKickUser = CF.GameProtocolGT.RespVipKickUser:new()
    respVipKickUser:bistream(event.msg.buff, event.msg.len)
    if respVipKickUser.flag ~= 0 then
        local errorMsg = {
            [0] = "踢出成功，该玩家已被移出桌子",
            [1] = "您目前不是会员或您的会员已经失效，请确认您的会员状态",
            [2] = "您尚未加入任何桌子，请先坐下再进行踢出",
            [3] = "踢出失败，该玩家并不在同一桌",
            [4] = "游戏已开始，现在无法执行踢出",
            [5] = "踢出失败，对方也是会员",
            [6] = "您不能对自己执行踢出",
            [7] = "踢出失败，原因未知，请稍后再试或联系客服",
            [8] = "踢出失败，未找到玩家",
            [9] = "踢出失败，玩家还没进房间",
        }
        XH.TipTool.showToast(errorMsg[respVipKickUser.flag])
        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:throwData(XH.NewThrowDataDefine.hy24090622, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID()), state = (respVipKickUser.flag == 0) and "成功" or "失败"})
        m:setKickUser(0)
    end
end

function GoldManager:onRecivePlayerLeaveEx(event)
    if CF.roomData:is50() then
        GoldManager.super.onRecivePlayerLeaveEx(self, event)
        return
    end
    local respData = CF.GameProtocolGT.PlayerLeaveEx_ToClient:new()
    respData:bistream(event.msg.buff, event.msg.len)
    if CF.roomData:isGoldRoom() then
        self._selfPlayerData = clone(CF.roomData:getSelfPlayerData())
        if respData.msgbox.m_dwAction == CF.MSGBOX_ACTION_DIALOG then
            local leaveReason = un.StringUtils.GB_18030_2000_TO_UTF8(respData.msgbox.m_szText)
            if CF.roomData:is220Model() and (string.match(leaveReason, "逻辑踢人") or string.match(respData.msgbox.m_szText, "逻辑踢人")) then
                return
            end
            if string.match(leaveReason, "被会员踢出") then
                local gameId = CF.roomData:getGameID()
                self:leaveGame()
                local formatStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='44' color='%s'>%s</font>"
                local Text = string.format(formatStr..formatStr..formatStr..formatStr, "#CD8551", "您已被会员玩家踢出房间\n开通会员可", "#17A199", "免费踢人", "#CD8551", "\n并且会员可以", "#17A199", "防止被踢出")
                local msgBoxView = XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                    funcOK = function()
                        XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.tickGuide)
                        local m = XH.lobby:getModule("Sxvip.ThrowData")
                        m:throwData(XH.NewThrowDataDefine.hy24090626, {game_id = string.format("%d_%d", XH.areaData:getAreaID(), gameId)})  
                    end,
                    richText = true,
                    bCrossScene = true
                }, Text)
                msgBoxView:updateButtonOK2Image("Btn_game_vip_kthy.png")
                local m = XH.lobby:getModule("Sxvip.ThrowData")
                m:throwData(XH.NewThrowDataDefine.hy24090622, {block_item_id = m:getBeforeGameStartStr(), game_id = string.format("%d_%d", XH.areaData:getAreaID(), gameId), state = "成功"})
                return
            end
            CF.SysTool.performDelayOnce(function() 
                self:showTipLayer(leaveReason)
            end, self._delayTime)
        else
            self:leaveGame()
        end
    end
end

-- 转场需要先退出房间，收到RespLeaveRoom后进行转场
function GoldManager:onRespLeaveRoom(event)
    if not CF.roomData:is50() and self._changeType == CF.goldManager.ENUM_CHANGE_TYPE.REJOIN then
        local enterRooms = {}
        local aroom = { roomid = CF.roomData:getRoomID(), appid = CF.roomData:getAppID() }
        enterRooms[1] = aroom
        local getGoldRoomInfo = CF.goldConfigManager:getLastGoldRoomInfo()
        local roomLevel = self._resultLevel
        local minScore = 0
        if getGoldRoomInfo and getGoldRoomInfo.roomLevelInfos then
            for i = 1, #getGoldRoomInfo.roomLevelInfos do
                local rooms = getGoldRoomInfo.roomLevelInfos[i].room
                for j = 1, #rooms do
                    if rooms[j].appid == aroom.appid then
                        enterRooms = rooms
                        roomLevel = getGoldRoomInfo.roomLevelInfos[i].roomnameflag
                        break
                    end
                end
            end
        end
        self:linkReqJoinRoomGT(CF.roomData:getGameID(), enterRooms, CF.roomData:getChairs(), CF.roomData:getSRSGroupID(), 15, roomLevel)
        self._changeType = CF.goldManager.ENUM_CHANGE_TYPE.NONE
        return
    end
    -- 重新进入房间
    self:onGameReJoinTableWithGold()
end

function GoldManager:onPopupMsgBox(event)
    local msgData = CF.GameProtocolGT.PopupMsgBox:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    
    local convertedText = CF.SysTool.GB_18030_2000_TO_UTF8(msgData.msgbox.m_szText)
    if string.match(convertedText, "金币过低") or string.match(convertedText, "金币高于") then 
        return
    end

    local tipLayer = CF.TipTool.showPopLayer("TipLayer")
    tipLayer:setText(convertedText)
    if string.find(convertedText, "记分失败") then  
        tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.OK,
                    function()
                        self:leaveGame()
                    end
                )
                tipLayer:setButtonMoreEvent(
                    tipLayer.ENUM_BUTTON_TYPE.CLOSE,
                    function()
                        self:leaveGame()
                    end
                )
    end
end

function GoldManager:onRespPlayerAct(event)
    local msgData = CF.GameProtocolGT.RespPlayerAct:new()
    msgData:bistream(event.msg.buff, event.msg.len)
    local flag = msgData.flag
    if CF.roomData and CF.roomData:is220Model() then
        if flag == XH.GameProtocolGT.RespPlayerAct.FLAG.SUCCESS then
            self:dispatchEvent({name = self.EVENT_CLEAR_TABLE})
            self:dispatchEvent({name = self.EVENT_MATCH_STATUS_CHANGE, msg = {show = true, rematch = false}})
        elseif flag == XH.GameProtocolGT.RespPlayerAct.FLAG.SHOW_MESSAGE then
            local leaveReason = un.StringUtils.GB_18030_2000_TO_UTF8(msgData.msgbox.m_szText) 
            if CF.roomData and CF.roomData:isBianChaDKGoldRoom() and string.match(leaveReason, "金币过低") then
                local tipLayer = CF.TipTool.showPopLayer("TipLayer")
                tipLayer:setText("金币不足！请补充金币，再战四方！")
                tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
                    CF.game:leaveGame()
                end)
                tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function()
                    CF.game:leaveGame()
                end)
            end
        else
            self:setMessage("入座失败，请稍后再试(".. flag.. ")")
        end
    end
end

return GoldManager�$