local WIRE_BREAK_JSONPATH = "res/animation/GameCommon/dx_ani/dx_ani.ExportJson"
local PlayerHeadNode = class("PlayerHeadNode", CF.ViewBase)

function PlayerHeadNode:ctor(param)
    self._seatId = param.seatId or 0
    self._localSeat = CF.roomData:seatToLocal(self._seatId)
    self._playerData = CF.roomData:getPlayerDataBySeatId(self._seatId)
    PlayerHeadNode.super.ctor(self)
    self._messageBgDesignSize = self._messageBg:getContentSize()
    self:initChildren()
    self:initPlayerSex()
    self:updateTingNormal()
    self:onTableBgChanged()
end

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PlayerHeadNode.csb"
end

function PlayerHeadNode:getBindingInfo()
    return {
        ["_KW_TEXT_NICKNAME"] = {varName = "_nicknameLabel"},
        ["_KW_TEXT_SCORE"] = {varName = "_scoreLabel"},
        ["_KW_IMG_HEAD_FRAME"] = {varName = "_headFrame"},
        ["_KW_IMG_HOST"] = {varName = "_hostFlagSp"},
        ["_KW_PANEL_NAME_AND_SCORE"] = {varName = "_nameAndScoreNode"},
        ["_KW_NAME_AND_SCORE_BG"] = {varName = "_nameAndScoreBG"},
        ["_KW_PANEL_MESSAGE"] = {varName = "_panelMessage"},
        ["_KW_PANEL_WIRE_BREAK"] = {varName = "_wireBreakPanel"},
        ["_KW_IMG_MESSAGE_BG"] = {varName = "_messageBg"},
        ["_KW_POS_EMOJI_ANI"] = {varName = "_emojiPanel"},
        ["_KW_POS_SPEAK_ANI"] = {varName = "_speakAniPanel"},
        ["_KW_TEXT_SPEAK"] = {varName = "_messageSpeakText"},
        ["_KW_POS_MESSAGE_"] = {varName = "_posMessage_", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_GOLD"] = {varName = "_goldSprite"},
        ["_KW_POS_PROP_ANI"] = {varName = "_posPropAni"},
        ["_KW_IMG_ADD_MULTIPLE"] = { varName = "_uiAddMultiple" },
        ["_KW_IMG_TING"] = { varName = "_KW_IMG_TING" },
        ["_KW_IMG_TRUST"] = { varName = "_KW_IMG_TRUST" },
        ["_KW_MESSAGE_FRAME_ANI_"] = {varName = "_messageFrameAni", beginIndex = 1, endIndex = 2},
    }
end

function PlayerHeadNode:getProxyEvents()
    return {
        {module = self._playerData, eventKeyName = "EVENT_CHANGED", callBack = "onEventChanged"},
        {module = self._playerData, eventKeyName = "EVENT_WIRE_BREAK_CHANGED", callBack = "onWireBreakChanged"},
        {module = self._playerData, eventKeyName = "EVENT_HEAD_FRAME_CHANGED", callBack = "onHeadFrameChanged"},
        {module = self._playerData, eventKeyName = "EVENT_READY_STATE_CHANGED", callBack = "onReadyStateChange"},
        {module = CF.game:getModule("GameBag"), eventKeyName = "EVENT_IS_VIP_CHANGED", callBack = "onIsVipChanged"},
        {module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROP_GET_LEFTTIME", callBack = "onHeadFrameChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_HOST_CHANGED", callBack = "updateHostFlag"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        {module = CF.game:getModule("Voice"), eventKeyName = "EVENT_UPDATE_VOICE_QI_PAO", callBack = "updateVioceQiaoPiHua"},
        {module = CF.game:getModule("Chat"), eventKeyName = "EVENT_CHATMSG_CHANGED", callBack = "onChatMsgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_CLEAR_MODEL", callBack = "onEventClearModel"}, --纯净模式
        {module = CF.game:getModule("SxVipGuide"), eventKeyName = "EVENT_SHOW_TIP", callBack = "createVipTip"}, 
        {module = CF.game:getModule("AddMultiple"), eventKeyName = "EVENT_GAME_ADD_MULTIPLE", callBack = "onAddMultiple"},
        {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "onClearTable"},
        {module = CF.roomData, eventKeyName = "EVENT_UPDATE_TING_FLAG_EX", callBack = "updateTingFlagEx"},
        {module = CF.game:getModule("Trust"), eventKeyName = "EVENT_UPDATE_TRUST_DATA", callBack = "updateTrust"},
        
        {module = CF.settingData, eventKeyName = "EVENT_CHECK_MAHLAYER_DIMENSION", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_LANDLORDS_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_HONGSHI_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged"},
        {module = CF.settingData, eventKeyName = "EVENT_VISUAL_ANGLE_3D", callBack = "onTableBgChanged"}
    }
end

function PlayerHeadNode:onTableBgChanged()
    local inUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    if self._nameAndScoreBG then
        self._nameAndScoreBG:setVisible(inUse)
    end
end

function PlayerHeadNode:updateLayoutPosition()
end

function PlayerHeadNode:initPlayerSex()
    self:updateSex()
end

function PlayerHeadNode:initChildren()
    self:updateUI()
    self:updateHostFlag()
    CF.UITool.playJsonAnimation(self._wireBreakPanel, "dx_ani", WIRE_BREAK_JSONPATH, -1)
    self._wireBreakPanel:setVisible(false)
    self:updateLayoutPosition()
    self:updateHeadFrame()
    local addMultipleType = CF.game:getModule("AddMultiple"):getAddMultipleType(self._seatId)
    self:showAddMultiple(addMultipleType)
    self:createKickBtn()
    if CF.game:getModule("SxVipGuide") and CF.roomData then
        local showInfo = CF.game:getModule("SxVipGuide"):getShowInfo()
        if not showInfo.clicked and showInfo.roomid == CF.roomData:getRoomID() then
            self:createVipTip({msg={numId=showInfo.numid, isReset=true}})
        end
    end

    self:onIsVipChanged()
    self:showHeadWatermark()
end

function PlayerHeadNode:updateUI()
    self._nicknameLabel:setString(self._playerData:getNickName())
    self:updateScore()
    self:updateImg()
    self:updateTrust()
end

function PlayerHeadNode:createVipTip(data)
    local rd = CF and CF.roomData
    if not rd then
        return
    end
    if rd:getIsGameStart() or not rd:isBoxRoom() or rd:getPlayCount() > 0 then
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
        XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090616)
    end
end

function PlayerHeadNode:isHaveVipTip()
    return self:getChildByName("vipTip") ~= nil
end

function PlayerHeadNode:createKickBtn()
    if not CF.roomData:isGoldRoom() or 
    self._playerData:getNumberID() == XH.playerData:getNumberID() or 
    self._playerData:getStateEx() == self._playerData.USER_STATEEX.psPlaying  then
        return
    end

    local imgUrl = "Btn_game_vip_tc.png"
    local btnKick = ccui.Button:create(imgUrl, imgUrl, imgUrl, ccui.TextureResType.plistType)
    btnKick:setPosition(cc.p(0, 50))
    if CF.roomData:isNewUI() then
        btnKick:setPosition(cc.p(0, 85))
    end
    btnKick:addClickEventListener(handler(self, self.btnKickClick))
    btnKick:setPressedActionEnabled(true)
    self._btnKick = btnKick
    local parent = self._headFrame:getParent()
    local childrenNode = parent:getChildren()
    for i = 1, #childrenNode do
        childrenNode[i]:setLocalZOrder(childrenNode[i]:getLocalZOrder() + 2)
    end
    self._headFrame:setLocalZOrder(0)
    parent:addChild(btnKick, 1)
end

function PlayerHeadNode:btnKickClick(send)
    if self._playerData then
        CF.game:getModule("Kick"):sendVipKick(self._playerData:getBrandID(), self._playerData:getNumberID(), self._playerData:getNickName())

        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:setBeforeGameStartStr("对局前")
        m:throwData(XH.NewThrowDataDefine.hy24090621, {block_item_id="对局前", game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
        -- CF.game:getModule("WinLost"):showSettleGoldWindow()
        -- CF.game:getModule("WinLost"):onMsgWinLost({sEndType = 1, sWinMut = 1, sWinOrder = 1, iScore = {[0] = 800, [1] = -800, [2] = 200, [3] = -200}, sEscapeSeat = 0, sChaoDiSeat = 1, sGong = {[0] = 80, [1] = -80, [2] = 20, [3] = -20}})
    end
end

function PlayerHeadNode:onReadyStateChange()
    if self._playerData then
        local state =  self._playerData:getStateEx()
        local USER_STATEEX = self._playerData.USER_STATEEX
        if state == USER_STATEEX.psPlaying then
            self:setKickBtnVisibleSafe(false)
        elseif state == USER_STATEEX.psWait or state == USER_STATEEX.psReady then
            if self._btnKick and not tolua.isnull(self._btnKick) then
                self._btnKick:setVisible(true)
            else
                self:createKickBtn()
            end
        end
    end
end

function PlayerHeadNode:setKickBtnVisibleSafe(visible)
    if self._btnKick and not tolua.isnull(self._btnKick) then
        self._btnKick:setVisible(visible)
    end
end

function PlayerHeadNode:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.nowState then
        self:setKickBtnVisibleSafe(false)
    end
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
    if CF.roomData:isNewUI() then
        return
    end
    if CF.roomData:isGoldRoom() then
        self._goldSprite:setVisible(true)
        self._scoreLabel:setPositionX(35)
    end
end

function PlayerHeadNode:onEventChanged(event)
    self:updateUI()
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
    local isVip = CF.game:getModule("GameBag"):getIsVipWithTag(self._playerData:getNumberID())
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
    local size = self._headFrame:getContentSize()
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
    self._nicknameLabel:setFontName("res/cocosStudio/Common/Font/fangzhengcuyuan.TTF")
    self._nicknameLabel:enableOutline(cc.c3b(0xD7, 0x3f, 0x21), 2);
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
            :setTouchEnabled(true)
            :setPosition(size.width/2 - 0.5, size.height/2 + 0.3)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 7, size.height - 7)
            :addTo(self._headFrame)
        if CF.roomData:isNewUI() then
            self._headImg:setPosition(size.width/2, size.height/2)
            self._headImg:setContentSize(size.width - 23, size.height - 23)
        end
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
            self._speakAniPanel:runAction(cc.Sequence:create(cc.FadeOut:create(0.1), cc.CallFunc:create(function() 
                self._speakAniPanel:removeAllChildren()
            end)))
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
        local bFangYan = not CF.settingData:getIsNormalVoice()
        local gameid = CF.roomData:getGameID()
        CF.soundManager:playSoundWisecrack(self._localSeat, bMan, bFangYan, gameid, data.index)
    elseif data.nType == CF.game:getModule("Chat").ChatType.EXPRESSION then
        local aniName = data.aniName
        local exportJsonPath = data.exportJsonPath .. "/"
        local exportJsonName = data.exportJsonName
        self:showEmojiAni(exportJsonPath, exportJsonName, aniName)
    end
end


function PlayerHeadNode:showAddMultiple(multipleType)
    if self._uiAddMultiple == nil then 
        return 
    end 
    if CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE == multipleType or 
    CF.GameProtocol.msgAddMulti.ADDMULTITYPE.PASS == multipleType  then
        self._uiAddMultiple:setVisible(false)
    elseif CF.GameProtocol.msgAddMulti.ADDMULTITYPE.DEFAULT == multipleType then
        local textureImg = CF.roomData:isNewUI() and "img_game_jiabei.png" or "txt_jb_2.png"
        self._uiAddMultiple:loadTexture(textureImg, ccui.TextureResType.plistType)
        self._uiAddMultiple:setVisible(true)
    elseif CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER == multipleType then
        local textureImg = CF.roomData:isNewUI() and "img_game_jiabei2.png" or "txt_cjjb_2.png"
        self._uiAddMultiple:loadTexture(textureImg, ccui.TextureResType.plistType)
        self._uiAddMultiple:setVisible(true)
    end 
    self._uiAddMultiple:ignoreContentAdaptWithSize(true)
end

function PlayerHeadNode:onClearTable()
    self:showAddMultiple(CF.GameProtocol.msgAddMulti.ADDMULTITYPE.NONE)
    CF.roomData:clearTingFlag()
end

function PlayerHeadNode:onAddMultiple(event)
    local msg = event.msg
    if self._seatId ~= msg.seat then
        return 
    end
    -- if CF.game:getModule("GameLayer"):getGameData():getGameStep() == CF.GameDefine.GAME_STEP.GAME_STEP_ADD_MULTIPLE then 
    --     return 
    -- end 
    if self._uiAddMultiple == nil then 
        return 
    end 
    local multipleType = msg.multi
    self:showAddMultiple(multipleType)
end 


function PlayerHeadNode:showSpeakText(speakText, pos)
    local isXGSJ = self._localSeat == CF.roomData:getSelfLocalSeat() and XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.CHAT)
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
        if self._messageFrameAni1 then
            self._messageFrameAni1:removeAllChildren()
        end
        if self._messageFrameAni2 then
            self._messageFrameAni2:removeAllChildren()
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
        if isXGSJ then
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CHAT]
            self._messageSpeakText:setTextColor(cc.c3b(0xFF, 0xF8, 0xA7))
            self._messageBg:loadTexture("cocosStudio/Common/Image/chatmessage_kuang.png", ccui.TextureResType.localType)
            if self._messageFrameAni1 then
                XH.SpineManager:playAni(self._messageFrameAni1, info.aniPath, info.filename, info.animation1, true)
                self._messageFrameAni1:setPosition(cc.p(0, self._messageBg:getContentSize().height))
            end
            if self._messageFrameAni2 then
                XH.SpineManager:playAni(self._messageFrameAni2, info.aniPath, info.filename, info.animation2, true)
                self._messageFrameAni2:setPosition(cc.p(self._messageBg:getContentSize().width, 0))
            end
        else
            self._messageSpeakText:setTextColor(cc.c3b(0x9D, 0x61, 0x3E))
        end
        self._messageBg:setVisible(true)
        self._messageBg:stopAllActions()
        self._messageBg:runAction(cc.Sequence:create(cc.FadeIn:create(0.1), cc.DelayTime:create(1), cc.FadeOut:create(0.1)))
    end
end

function PlayerHeadNode:showEmojiAni(exportJsonPath, exportJsonName, aniName, pos)
    local isXGSJ = self._localSeat == CF.roomData:getSelfLocalSeat() and XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.CHAT)
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
        if self._messageFrameAni1 then
            self._messageFrameAni1:removeAllChildren()
        end
        if self._messageFrameAni2 then
            self._messageFrameAni2:removeAllChildren()
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
        self._messageBg:runAction(cc.Sequence:create(cc.FadeIn:create(0.1), cc.DelayTime:create(2), cc.CallFunc:create(function()
            self._emojiPanel:runAction(cc.Sequence:create(cc.FadeOut:create(0.1), cc.CallFunc:create(function() 
                self._emojiPanel:removeAllChildren()
            end)))
            self._messageBg:runAction(cc.FadeOut:create(0.1))
        end)))
        if isXGSJ then
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CHAT]
            self._messageBg:loadTexture("cocosStudio/Common/Image/chatmessage_kuang.png", ccui.TextureResType.localType)
            
            if self._messageFrameAni1 then
                XH.SpineManager:playAni(self._messageFrameAni1, info.aniPath, info.filename, info.animation1, true)
                self._messageFrameAni1:setPosition(cc.p(0, self._messageBg:getContentSize().height))
            end
            if self._messageFrameAni2 then
                XH.SpineManager:playAni(self._messageFrameAni2, info.aniPath, info.filename, info.animation2, true)
                self._messageFrameAni2:setPosition(cc.p(self._messageBg:getContentSize().width, 0))
            end
        end
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
        if self._messageFrameAni1 then
            self._messageFrameAni1:removeAllChildren()
        end
        if self._messageFrameAni2 then
            self._messageFrameAni2:removeAllChildren()
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
        local isXGSJ = self._localSeat == CF.roomData:getSelfLocalSeat() and XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.CHAT)
        if isXGSJ then
            local info = XH.XGSJ_BUNDLE_INFO[XH.XGSJ_PROP_ID.CHAT]
            self._messageBg:loadTexture("cocosStudio/Common/Image/chatmessage_kuang.png", ccui.TextureResType.localType)
            
            if self._messageFrameAni1 then
                XH.SpineManager:playAni(self._messageFrameAni1, info.aniPath, info.filename, info.animation1, true)
                self._messageFrameAni1:setPosition(cc.p(0, self._messageBg:getContentSize().height))
            end
            if self._messageFrameAni2 then
                XH.SpineManager:playAni(self._messageFrameAni2, info.aniPath, info.filename, info.animation2, true)
                self._messageFrameAni2:setPosition(cc.p(self._messageBg:getContentSize().width, 0))
            end
        end
    end
end

function PlayerHeadNode:onEventClearModel(event)
    self:updateHeadFrame()
end

function PlayerHeadNode:showHeadWatermark()
    local WatermarkModule = CF.game:getModule("Watermark")
    if WatermarkModule then
        WatermarkModule:addWatermark(self,cc.p(53,-53))
    end
end

function PlayerHeadNode:updateTingFlagEx(event)
    self:updateTingNormal(event)
end

function PlayerHeadNode:updateTingNormal(event)
    if self._KW_IMG_TING then
        if event then
            if event.msg.seat ~= nil then
                if self._seatId == event.msg.seat then
                    self._KW_IMG_TING:setVisible(event.msg.isShow)
                end
            else
                self._KW_IMG_TING:setVisible(event.msg.isShow)
            end
        else
            if CF.roomData:getTingFlag(self._seatId) then
                self._KW_IMG_TING:setVisible(true)
            else
                self._KW_IMG_TING:setVisible(false)
            end
        end
    end
end

function PlayerHeadNode:updateTrust()
    local isTrsut = CF.game:getModule("Trust"):getTrustState(self._seatId)
    if self._KW_IMG_TRUST then
        self._KW_IMG_TRUST:setVisible(isTrsut)
    end
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return
    end
    if isTrsut then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt2025111701, {game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), block_item_id = CF.game:getModule("RoomInfo"):getUUID(), block_label = tostring(self._playerData:getNumberID())})
    end
end

return PlayerHeadNode
