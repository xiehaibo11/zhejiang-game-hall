local PlayerHeadNode = CF.gameClass("PlayerHeadNode", CF.ViewBase)

local WIRE_BREAK_JSONPATH = "res/animation/GameCommon/dx_ani/dx_ani.ExportJson"

PlayerHeadNode.NAME_AND_SCORE_POS = {
    cc.p(-55, -100),
    cc.p(0, 0),
    cc.p(-55, -100),
    cc.p(103, -5)
}

function PlayerHeadNode:ctor(param)
    self._seatId = param.seatId or 0
    self._localSeat = CF.roomData:seatToLocal(self._seatId)
    self._playerData = CF.roomData:getPlayerDataBySeatId(self._seatId)
    PlayerHeadNode.super.ctor(self)
    self._messageBgDesignSize = self._messageBg:getContentSize()
    self:initChildren()
    self:initPlayerSex()
    self:initPlayerTrust()
    -- self:showRankTitle()
end

function PlayerHeadNode:getCSBPath()
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/PlayerHead/PlayerHeadBottom.csb"
    else
        return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
    end
end

function PlayerHeadNode:getBindingInfo()
    return {
        ["_KW_TEXT_NICKNAME"] = {varName = "_nicknameLabel"},
        ["_KW_TEXT_SCORE"] = {varName = "_scoreLabel"},
        ["_KW_IMG_HEAD_FRAME"] = {varName = "_headFrame"},
        ["_KW_IMG_HOST"] = {varName = "_hostFlagSp"},
        ["_KW_PANEL_NAME_AND_SCORE"] = {varName = "_nameAndScoreNode"},
        ["_KW_PANEL_MESSAGE"] = {varName = "_panelMessage"},
        ["_KW_PANEL_WIRE_BREAK"] = {varName = "_wireBreakPanel"},
        ["_KW_IMG_MESSAGE_BG"] = {varName = "_messageBg"},
        ["_KW_POS_EMOJI_ANI"] = {varName = "_emojiPanel"},
        ["_KW_POS_SPEAK_ANI"] = {varName = "_speakAniPanel"},
        ["_KW_TEXT_SPEAK"] = {varName = "_messageSpeakText"},
        ["_KW_POS_MESSAGE_"] = {varName = "_posMessage_", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_GOLD"] = {varName = "_goldSprite"},
        ["_KW_PANEL_TRUST"] = {varName = "_panelTrust"},
        ["_KW_POS_PROP_ANI"] = {varName = "_posPropAni"},
        ["_KW_POS_RANK_TITLE"] = {varName = "_posRankTitle"},
        ["_KW_POS_RANK_TITLE_"] = {varName = "_posRankTitle_", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_ADD_MULTIPLE"] = {varName = "_uiAddMultiple"}
    }
end

function PlayerHeadNode:getProxyEvents()
    local t = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_TRUST", callBack = "onPlayerTrust"},
        {module = self._playerData, eventKeyName = "EVENT_CHANGED", callBack = "onEventChanged"},
        {module = self._playerData, eventKeyName = "EVENT_WIRE_BREAK_CHANGED", callBack = "onWireBreakChanged"},
        {module = self._playerData, eventKeyName = "EVENT_HEAD_FRAME_CHANGED", callBack = "onHeadFrameChanged"},
        {module = self._playerData, eventKeyName = "EVENT_READY_STATE_CHANGED", callBack = "onReadyStateChange"},
        {module = self._playerData, eventKeyName = "EVENT_USER_TITLE_CHANGED", callBack = "onUserTitleChange"},
        {module = CF.game:getModule("GameBag"), eventKeyName = "EVENT_IS_VIP_CHANGED", callBack = "onIsVipChanged"},
        {module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROP_GET_LEFTTIME", callBack = "onHeadFrameChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_HOST_CHANGED", callBack = "updateHostFlag"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = CF.game:getModule("Chat"), eventKeyName = "EVENT_CHATMSG_CHANGED", callBack = "onChatMsgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel"}, --纯净模式
        {module = CF.game:getModule("Trust"), eventKeyName = "EVENT_HIDE_TRUST", callBack = "onHideTrust"},
        {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"}
    }
    if CF.isSupport.GameBag then
        table.insert(t, {module = CF.game:getModule("GameBag"), eventKeyName = "EVENT_IS_VIP_CHANGED", callBack = "onIsVipChanged"})
    end
    if CF.isSupport.Voice then
        table.insert(t, {module = CF.game:getModule("Voice"), eventKeyName = "EVENT_UPDATE_VOICE_QI_PAO", callBack = "updateVioceQiaoPiHua"})
    end
    if CF.isSupport.SxVipGuide then
        table.insert(t, {module = CF.game:getModule("SxVipGuide"), eventKeyName = "EVENT_SHOW_TIP", callBack = "createVipTip"})
    end
    return t
end

function PlayerHeadNode:updateLayoutPosition()
    self._nameAndScoreNode:setPosition(self.NAME_AND_SCORE_POS[self._localSeat])
end

function PlayerHeadNode:initPlayerSex()
    self:updateSex()
end

function PlayerHeadNode:initPlayerTrust()
    local bTrust = CF.game:getModule("GameLayer"):getGameData():getTrustData(self._seatId)
    self._panelTrust:setVisible(bTrust)
end

function PlayerHeadNode:initChildren()
    self:updateUI()
    self:updateHostFlag()
    CF.UITool.playJsonAnimation(self._wireBreakPanel, "dx_ani", WIRE_BREAK_JSONPATH, -1)
    self._wireBreakPanel:setVisible(false)
    self:updateLayoutPosition()
    self:updateHeadFrame()

    if CF.isSupport.SxVipGuide then
        if CF.game:getModule("SxVipGuide") then
            local showInfo = CF.game:getModule("SxVipGuide"):getShowInfo()
            if not showInfo.clicked and showInfo.roomid == CF.roomData:getRoomID() then
                self:createVipTip({msg = {numId = showInfo.numid, isReset = true}})
            end
        end
    end

    self:onIsVipChanged()
end

function PlayerHeadNode:updateUI()
    self._nicknameLabel:setString(self._playerData:getNickName())
    self:updateScore()
    self:updateImg()
end

function PlayerHeadNode:createVipTip(data)
    if CF.roomData:getIsGameStart() or not CF.roomData:isBoxRoom() or CF.roomData:getPlayCount() > 0 then
        return
    end
    if self._vipTipNode or not data or (data.msg.numId ~= self._playerData:getNumberID()) then
        return
    end
    local VipTip = CF.gameRequire("Modules.Player.VipTipNode")
    local tipNode = VipTip.new({seatId = self._seatId})
    tipNode:setName("vipTip")
    self._vipTipNode = tipNode
    self:addChild(tipNode, 2)
    if not data.msg.isReset then
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(CF.NewThrowDataDefine.hy24090616)
    end
end

function PlayerHeadNode:isHaveVipTip()
    return self:getChildByName("vipTip") ~= nil
end

function PlayerHeadNode:createKickBtn()
end

function PlayerHeadNode:onReadyStateChange()
end

function PlayerHeadNode:onUserTitleChange(event)
    self:showRankTitle(event.data)
end

function PlayerHeadNode:onGameStartChanged(event)
end

function PlayerHeadNode:updateScore()
    self:updateScoreIcon()
    local playerScore = self._playerData:getPlayTypeScore()
    self:setScoreText(playerScore)
end

function PlayerHeadNode:setScoreText(playerScore)
    self._scoreLabel:setString("分：" .. playerScore)
    if CF.roomData:isGoldRoom() then
        self._scoreLabel:setString(self:transferScore(playerScore))
    end
end

function PlayerHeadNode:transferScore(playerScore)
    if CF.roomData:isDKGoldRoom() then
        local score = tonumber(playerScore)
        if score < 100000 then
            return playerScore
        end
        if score < 1000000 then
            return math.floor(score / 100) / 100 .. "万"
        end
        if score < 10000000 then
            return math.floor(score / 1000) / 10 .. "万"
        end
        if score < 100000000 then
            return math.floor(score / 10000) .. "万"
        end
        return math.floor(score / 1000000) / 100 .. "亿"
    end
    return playerScore
end

function PlayerHeadNode:updateScoreIcon()
    -- if CF.roomData:isGoldRoom() then
    --     self._goldSprite:setVisible(true)
    --     self._scoreLabel:setPositionX(35)
    -- end
end

function PlayerHeadNode:onEventChanged(event)
    self:updateUI()
end

function PlayerHeadNode:onPlayerTrust(event)
    if event.msg.sTrustSeat == self._seatId then
        self._panelTrust:setVisible(event.msg.bTrust)
    end
end

function PlayerHeadNode:onHideTrust(event)
    self._panelTrust:setVisible(false)
end

function PlayerHeadNode:onWireBreakChanged(event)
    if CF.roomData:isGoldRoom() then
        return
    end
    if self._playerData then
        local isBreak = self._playerData:getIsWireBreak()
        if self._localSeat == CF.roomData:getSelfLocalSeat() then
            isBreak = false
        end
        local beforeVisible = self._wireBreakPanel:isVisible()
        self._wireBreakPanel:setVisible(isBreak)
        if not beforeVisible and isBreak and not CF.roomData:getIsGameOver() then
            local selfPlayerData = CF.roomData:getSelfPlayerData()
            if selfPlayerData and not selfPlayerData:getIsWireBreak() then
                XH.lobby:getModule("Sxvip.FriendInfo"):onOffline(self._playerData:getNumberID())
            end
        end
    end
end

function PlayerHeadNode:onIsVipChanged(event)
    local isVip = false
    if CF.isSupport.GameBag then
        isVip = CF.game:getModule("GameBag"):getIsVip(self._playerData:getNumberID())
    end
    if self._vipFlag and not tolua.isnull(self._vipFlag) then
        self._vipFlag:setVisible(isVip)
        return
    end

    if not isVip then
        return
    end

    local parent = self._nicknameLabel:getParent()
    local aniPath = "animation/Lobby/Base/zzb_hy_jb/"
    local params = {path = aniPath, tex = "zzb_hy_jb.json", ske = "zzb_hy_jb.atlas", armatureName = "animation", scale = 1}
    local vipFlag = display.playDargonBonesSpine(params)
    if vipFlag then
        vipFlag:setScale(0.8)
        parent:addChild(vipFlag)
        local pos = cc.p(self._nicknameLabel:getPosition())
        local ap = cc.p(self._nicknameLabel:getAnchorPoint())
        vipFlag:setAnchorPoint(ap)
        local offSetX = 10
        local offSetY = 5
        if ap.x == 0.5 then
            offSetX = -40
            self._nicknameLabel:setAnchorPoint(0, ap.y)
            self._nicknameLabel:setPosition(self._nicknameLabel:getPositionX() - 15, self._nicknameLabel:getPositionY())
        elseif ap.x == 0 then
            self._nicknameLabel:setPosition(self._nicknameLabel:getPositionX() + 35, self._nicknameLabel:getPositionY())
        end
        vipFlag:setPosition(cc.p(pos.x + offSetX, pos.y + offSetY))
        self._vipFlag = vipFlag
    end
    self._nicknameLabel:setColor(cc.c3b(0xFF, 0xF7, 0x70))
    self._nicknameLabel:setFontName("cocosStudio/Common/Font/fangzhengcuyuan.TTF")
    self._nicknameLabel:enableOutline(cc.c3b(0xD7, 0x3f, 0x21), 2)
end

function PlayerHeadNode:onHeadFrameChanged(event)
    self:updateHeadFrame()
end

function PlayerHeadNode:updateHeadFrame()
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    if CF.game and CF.game:getModule("CaiYunProp"):isShowCaiYun(self._playerData:getNumberID()) then
        GameBagUILogic.showCaiShenHeadFrame(self._headFrame, cc.size(15, 0), cc.size(45, 45))
        return
    end
    GameBagUILogic.showCaiShenHeadFrame(self._headFrame, cc.size(15, 0), cc.size(45, 45), true)
    local headFrame = self._playerData:getHeadFrameData() or {}
    GameBagUILogic.showHeadFrame(self._headFrame, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

function PlayerHeadNode:updateSex()
    if self._playerData:getSeat() == CF.roomData:getSelfSeat() then
        local player = CF.roomData:getPlayerDataBySeatId(CF.roomData:getSelfSeat())
        if CF.settingData:getVoiceType() == true then
            player:setSex(1)
        else
            player:setSex(0)
        end
    --[不用CF.settingData:setVoiceType(true)原因是因为请求过多容易造成卡顿]
    end
end

function PlayerHeadNode:onClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- 旁观不允许点击玩家头像
    if CF.roomData:getIsSeer() then
        return
    end
    CF.gameRequire("Modules.PlayerInfo.View").new({seatId = self._seatId}):showSelf()
end

function PlayerHeadNode:updateImg()
    local url = self._playerData:getAvatarUrl()
    if not self._headImg then
        local size = self._headFrame:getContentSize()
        self._headImg = CF.RemoteImage.new()
        self._headImg:setTouchEnabled(true)
        self._headImg:setPosition(size.width / 2 - 0.5, size.height / 2 + 0.3)
        self._headImg:ignoreContentAdaptWithSize(false)
        self._headImg:setContentSize(size.width - 7, size.height - 7)
        self._headImg:addTo(self._headFrame)
        self._headImg:addTouchEventListener(handler(self, self.onClicked))
    end
    self._headImg:setUrl(url)
end

function PlayerHeadNode:updateHostFlag()
    if self._hostFlagSp then
        local isHost = CF.roomData:isHost(self._seatId)
        self._hostFlagSp:setVisible(isHost)
    end
end

--语音俏皮话
function PlayerHeadNode:updateVioceQiaoPiHua(event)
    local voiceData = event.msg
    local localSeat = voiceData.localSeat
    if localSeat ~= self._localSeat then
        return
    end
    local bShow = voiceData.show or false
    if bShow then
        local exportJsonPath = "res/animation/GameCommon/voice_chat_ani/"
        local exportJsonName = "talk_sound_ani"
        local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
        local aniName = "talk_sound_ani"
        self:showVoiceAni(exportJsonFilePath, aniName)
    else
        if self._speakAniPanel then
            self._speakAniPanel:runAction(
                cc.Sequence:create(
                    cc.FadeOut:create(0.1),
                    cc.CallFunc:create(
                        function()
                            self._speakAniPanel:removeAllChildren()
                        end
                    )
                )
            )
        end
        if self._messageBg then
            self._messageBg:runAction(cc.FadeOut:create(0.1))
        end
    end
end

--俏皮话文字和表情
function PlayerHeadNode:onChatMsgChanged(event)
    local chatData = event.msg
    if self._seatId ~= chatData.seat then
        return
    end
    if CF.game:getModule("PlayerInfo"):getBlockedChat(self._playerData:getNumberID()) then
        return
    end
    local data = chatData.data
    if not data.index then
        return
    end
    if data.nType == CF.game:getModule("Chat").ChatType.QIAO_PI_HUA then
        self:showSpeakText(data.speakText)
        --播放俏皮话音效
        local bMan = self._playerData:getSex() == 1
        CF.soundManager:playSoundWisecrack(bMan, data.index)
    elseif data.nType == CF.game:getModule("Chat").ChatType.EXPRESSION then
        local aniName = data.aniName
        local exportJsonPath = data.exportJsonPath .. "/"
        local exportJsonName = data.exportJsonName
        self:showEmojiAni(exportJsonPath, exportJsonName, aniName)
    end
end

function PlayerHeadNode:onClearTable()
end

function PlayerHeadNode:showSpeakText(speakText, pos)
    if self._messageBg and (self["_posMessage_" .. (self._localSeat)] or pos) then
        if pos then
            self._messageBg:setPosition(pos)
        elseif self["_posMessage_" .. (self._localSeat)] then
            self._messageBg:setPosition(self["_posMessage_" .. (self._localSeat)]:getPosition())
        end
        if self._speakAniPanel then
            self._speakAniPanel:setVisible(false)
        end
        if self._emojiPanel then
            self._emojiPanel:setVisible(false)
        end
        if self._messageSpeakText then
            self._messageSpeakText:setVisible(true)
            self._messageSpeakText:setString(speakText)
            local textSize = self._messageSpeakText:getAutoRenderSize()
            local messageBgSize = self._messageBg:getContentSize()
            local fontSize = self._messageSpeakText:getFontSize() + 10
            if textSize.width >= self._messageBgDesignSize.width then
                --换行显示，背景加大
                local nLineCount = math.ceil(textSize.width / (messageBgSize.width * 0.9))
                self._messageSpeakText:setContentSize(self._messageBgDesignSize.width * 0.9, self._messageBgDesignSize.height * 0.9)
                self._messageBg:setContentSize(self._messageBgDesignSize.width + 4, self._messageBgDesignSize.height + (nLineCount - 1) * fontSize)
            else
                --背景变小
                self._messageSpeakText:setContentSize(textSize.width + 4, fontSize + 4)
                local width = textSize.width < 120 and 120 or textSize.width
                self._messageBg:setContentSize(width + 20, self._messageBgDesignSize.height)
            end
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._messageSpeakText:setPositionPercent(cc.p(0.5, 0.4))
            else
                self._messageSpeakText:setPositionPercent(cc.p(0.5, 0.6))
            end
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            self._messageBg:loadTexture("game_message_speak_1.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(0, 0)
        elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
            self._messageBg:loadTexture("game_message_speak_2.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(1, 0)
        elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            self._messageBg:loadTexture("game_message_speak_3.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(1, 1)
        end
        self._messageBg:setVisible(true)
        self._messageBg:stopAllActions()
        self._messageBg:runAction(cc.Sequence:create(cc.FadeIn:create(0.1), cc.DelayTime:create(1), cc.FadeOut:create(0.1)))
    end
end

function PlayerHeadNode:showEmojiAni(exportJsonPath, exportJsonName, aniName, pos)
    if self._messageBg and (self["_posMessage_" .. (self._localSeat)] or pos) then
        if pos then
            self._messageBg:setPosition(pos)
        elseif self["_posMessage_" .. (self._localSeat)] then
            self._messageBg:setPosition(self["_posMessage_" .. (self._localSeat)]:getPosition())
        end
        if self._messageSpeakText then
            self._messageSpeakText:setVisible(false)
        end
        if self._speakAniPanel then
            self._speakAniPanel:setVisible(false)
        end
        if self._emojiPanel then
            self._emojiPanel:removeAllChildren()
            self._emojiPanel:setVisible(true)
            self._emojiPanel:runAction(cc.FadeIn:create(0.1))
            self._messageBg:setContentSize(220, 160)
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._emojiPanel:setPositionPercent(cc.p(0.5, 0.4))
            else
                self._emojiPanel:setPositionPercent(cc.p(0.5, 0.6))
            end
            local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
            CF.UITool.playJsonAnimationByName(self._emojiPanel, exportJsonName, exportJsonFilePath, 1, aniName)
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            self._messageBg:loadTexture("game_message_speak_1.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(0, 0)
        elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
            self._messageBg:loadTexture("game_message_speak_2.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(1, 0)
        elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            self._messageBg:loadTexture("game_message_speak_3.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(1, 1)
        end
        self._messageBg:setVisible(true)
        self._messageBg:stopAllActions()
        self._messageBg:runAction(
            cc.Sequence:create(
                cc.FadeIn:create(0.1),
                cc.DelayTime:create(2),
                cc.CallFunc:create(
                    function()
                        self._emojiPanel:runAction(
                            cc.Sequence:create(
                                cc.FadeOut:create(0.1),
                                cc.CallFunc:create(
                                    function()
                                        self._emojiPanel:removeAllChildren()
                                    end
                                )
                            )
                        )
                        self._messageBg:runAction(cc.FadeOut:create(0.1))
                    end
                )
            )
        )
    end
end

function PlayerHeadNode:showVoiceAni(exportJsonFilePath, aniName, pos)
    if self._messageBg and (self["_posMessage_" .. (self._localSeat)] or pos) then
        if pos then
            self._messageBg:setPosition(pos)
        elseif self["_posMessage_" .. (self._localSeat)] then
            self._messageBg:setPosition(self["_posMessage_" .. (self._localSeat)]:getPosition())
        end
        if self._messageSpeakText then
            self._messageSpeakText:setVisible(false)
        end
        if self._emojiPanel then
            self._emojiPanel:setVisible(false)
        end
        if self._speakAniPanel then
            self._speakAniPanel:removeAllChildren()
            self._speakAniPanel:setVisible(true)
            self._speakAniPanel:runAction(cc.FadeIn:create(0.1))
            self._messageBg:setContentSize(self._messageBgDesignSize.width, self._messageBgDesignSize.height)
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._speakAniPanel:setPositionPercent(cc.p(0.3, 0.4))
            else
                self._speakAniPanel:setPositionPercent(cc.p(0.3, 0.6))
            end
            CF.UITool.playJsonAnimation(self._speakAniPanel, aniName, exportJsonFilePath, 1)
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
            self._messageBg:loadTexture("game_message_speak_1.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(0, 0)
        elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
            self._messageBg:loadTexture("game_message_speak_2.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(1, 0)
        elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            self._messageBg:loadTexture("game_message_speak_3.png", ccui.TextureResType.plistType)
            self._messageBg:setAnchorPoint(1, 1)
        end
        self._messageBg:setVisible(true)
        self._messageBg:stopAllActions()
        self._messageBg:runAction(cc.FadeIn:create(0.1))
    end
end

function PlayerHeadNode:onEventClearModel(event)
    self:updateHeadFrame()
end


function PlayerHeadNode:showRankTitle(data)
    if not self._rankTitleNode then

        local m = CF.getLobbyModule("GoldNew.SubModules.ActBaoJiRank")
        self._rankTitleNode = m:createTitleNode()

        local parent = self["_posRankTitle_" .. self._localSeat] or self._posRankTitle
        parent:addChild(self._rankTitleNode)
    end
    self._rankTitleNode:updateUI(data)
end
return PlayerHeadNode
  B^  