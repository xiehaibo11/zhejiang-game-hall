local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.GameBase.Modules.Player.HeadNode")

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_FLAG"] = { varName = "_bankerFlagSp" }
    bindInfo["_KW_TEXT_GANG_SCORE"] = { varName = "_gangScoreLabel" }
    bindInfo["_KW_IMG_YA_ZI_ROOT"] = { varName = "_yaZiRoot" }
    bindInfo["_KW_TEXT_YA_ZI"] = { varName = "_yzZiLabel" }
    bindInfo["_KW_TEXT_GOLD_SCORE"] = {varName = "_goldScore"}
    bindInfo["_KW_UI_GOLD_PANEL"] = {varName = "_goldPanel"}
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = gameData, eventKeyName = "EVENT_BANKER_CHANGED", callBack = "updateBankerFlag"}
    proxyEvents[#proxyEvents + 1] = {module = gameData, eventKeyName = "EVENT_YA_ZI_CHANGED", callBack = "onMsgShowYaZiUI"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GANG_FEN_CHANGED", callBack = "onMsgUpdateGangFenUI"}
    return proxyEvents
end

function PlayerHeadNode:initChildren()
    self._hostFlagSp:setVisible(false)
    self._wireBreakPanel:setVisible(false)
    PlayerHeadNode.super.initChildren(self)
    self:updateBankerFlag()
end

function PlayerHeadNode:setScoreText(playerScore)
    self._scoreLabel:setString(playerScore)
    self._goldScore:setString(playerScore)
end

function PlayerHeadNode:updateScoreIcon()
    local bGold = CF.roomData:isGoldRoom()
    self._goldPanel:setVisible(bGold)
    self._scoreLabel:setVisible(not bGold)
end

function PlayerHeadNode:updateLayoutPosition()
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
        self._nicknameLabel:setAnchorPoint(0,0.5)
        self._nicknameLabel:setPosition(80,10)
        self._scoreLabel:setAnchorPoint(0,0.5)
        self._scoreLabel:setPosition(80,-20)
        if self._gangScoreLabel then
            self._gangScoreLabel:setAnchorPoint(0,0.5)
            self._gangScoreLabel:setPosition(80,40)
        end
        if CF.roomData:isGoldRoom() then
            self._goldPanel:setPosition(130,90)
        end
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(145, -2)
        end
    end
end

function PlayerHeadNode:updateBankerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
	if self._bankerFlagSp then
		self._bankerFlagSp:setVisible(isBanker)
	end
end

function PlayerHeadNode:onMsgShowYaZiUI(event)
    local anteNum = event.msg.anteNum
    local seat = event.msg.seat
    local YaZiEnum = {NONE = -1, ZERO = 0, ONE = 1, TWO = 2}

    if self._seatId == seat and anteNum ~= YaZiEnum.NONE then
        self:showYaZiTip(anteNum)
    end
    if self._seatId == CF.roomData:getSelfSeat() and self._seatId == seat and CF.roomData:isPlayBack() then
        CF.game:getModule("Player"):dispatchEvent( { name = CF.game:getModule("Player").EVENT_YAZI_INFO_BACK } )
    end
end

function PlayerHeadNode:showYaZiTip(yaZiNum)
    yaZiNum = yaZiNum or 0
    if yaZiNum > 0 then
        self._yzZiLabel:setString("押" .. yaZiNum .."子")
    end
    self._yaZiRoot:setVisible(yaZiNum > 0)
end

--刷新杠分 数据显示
function PlayerHeadNode:onMsgUpdateGangFenUI(event)
    local kongSocre = event.msg.data or {}
    local theGangFen = kongSocre[self._seatId] or 0
    self:updateGangScore(theGangFen)
    self:updateGangScoreVisible(theGangFen)
end

function PlayerHeadNode:updateGangScore(theGangFen)
    if not theGangFen then return end
    if self._gangScoreLabel then
        local gangfenShowStr
        local fntPath
        if theGangFen < 0 then
            gangfenShowStr = tostring(theGangFen)
            fntPath = "cocosStudio/MahjongNew/GameLayer/Font/jianfen-export.fnt"
        else
            gangfenShowStr = "+" .. theGangFen
            fntPath = "cocosStudio/MahjongNew/GameLayer/Font/jiafen-export.fnt"
        end
        self._gangScoreLabel:setFntFile(fntPath)
        self._gangScoreLabel:setString(gangfenShowStr)
    end
end

function PlayerHeadNode:updateGangScoreVisible(theGangFen)
    if self._gangScoreLabel then
        local winLostData = CF.game:getModule("WinLost"):getWinLostData()
        self._gangScoreLabel:setVisible(winLostData.getIsJiGangFen and winLostData:getIsJiGangFen())
    end
end

function PlayerHeadNode:showSpeakText(speakText)
    local isXGSJ = self._localSeat == CF.roomData:getSelfLocalSeat() and XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.CHAT)
    if self._messageBg and self["_posMessage_" .. (self._localSeat)] then
        self._messageBg:setPosition(self["_posMessage_" .. (self._localSeat)]:getPosition())
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
            self._messageBg:removeChildByName("KW_SPEAK_TEXT")
            local messageNode = self._messageSpeakText:clone()
            self._messageBg:addChild(messageNode)
            messageNode:setName("KW_SPEAK_TEXT")
            messageNode:setVisible(true)
            messageNode:setString(speakText)
            messageNode:setTextAreaSize(cc.size(self._messageBg:getContentSize().width - 10, 0))
            messageNode:ignoreContentAdaptWithSize(false)
            local height = math.max(128, messageNode:getVirtualRendererSize().height + 40)
            self._messageBg:setContentSize(self._messageBg:getContentSize().width, height)
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                messageNode:setPositionPercent(cc.p(0, 0.4))
            else
                messageNode:setPositionPercent(cc.p(0, 0.6))
            end
            messageNode:setPositionX(10)
            if messageNode:getVirtualRendererSize().height == messageNode:getFontSize() then --一行的话居中显示
                messageNode:setTextAreaSize(cc.size(messageNode:getAutoRenderSize().width, messageNode:getVirtualRendererSize().height))
                messageNode:setAnchorPoint(0.5, 0.5)
                messageNode:setPositionX(self._messageBg:getContentSize().width / 2)
            end
            messageNode:runAction(cc.Sequence:create(cc.DelayTime:create(1.2),cc.RemoveSelf:create()))
            messageNode:setTextColor(isXGSJ and cc.c3b(0xFF, 0xF8, 0xA7) or cc.c3b(0x9D, 0x61, 0x3E))
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
        self._messageBg:setVisible(true)
        self._messageBg:stopAllActions()
        self._messageBg:runAction(cc.Sequence:create(cc.FadeIn:create(0.1), cc.DelayTime:create(1), cc.FadeOut:create(0.1)))
    end
end

return PlayerHeadNode  #  