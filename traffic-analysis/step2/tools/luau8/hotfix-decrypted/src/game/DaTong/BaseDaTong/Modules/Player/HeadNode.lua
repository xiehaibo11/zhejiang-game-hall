local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.GameBase.Modules.Player.HeadNode")

local CardArea          = CF.gameRequire("Modules.CardLayer.CardFFZArea")
local AnimationManager  = CF.gameRequire("Manager.AnimationManager")
local GameEnum          = CF.gameRequire("Define.GameEnum")

local JOKER_CARD_AREA               = "JOKER_CARD_AREA"
local KW_IMG_NAME_WINORDER_FIRST    = "doublekou_sp_first.png"
local KW_IMG_NAME_WINORDER_SECOND   = "doublekou_sp_second.png"
local KW_IMG_NAME_WINORDER_THREE    = "doublekou_sp_three.png"
local KW_LEFT_TIP = "LEFT_TIP"
local KW_TIP_TEXT = "再给一点时间考虑下"

PlayerHeadNode.LEFT_CARD_NUM_POS = {
    cc.p(120, 0),
    cc.p(140, 0),
    cc.p(-120, 0),
    cc.p(-120, 0),
    cc.p(-120, 0),
    cc.p(120, 0),
}

PlayerHeadNode.LEFT_CARD_NUM_OPENCARD_POS = {
    cc.p(120, 0),
    cc.p(140, 0),
    cc.p(-120, 0),
    cc.p(0, -120),
    cc.p(0, -120),
    cc.p(120, 0),
}

PlayerHeadNode.ALARM_POS = {
    cc.p(150, -100),
    cc.p(120, 90),
    cc.p(-120, -100),
    cc.p(230, 0),
    cc.p(230, 0),
    cc.p(150, -100),
}

PlayerHeadNode.NAME_AND_SCORE_POS = {
    cc.p(-55, -100),
    cc.p(60, 0),
    cc.p(-55, -100),
    cc.p(80, 20),
}

PlayerHeadNode.NAME_AND_SCORE_POS_SIX = {
    cc.p(-55, -100),
    cc.p(60, 0),
    cc.p(-55, -100),
    cc.p(-55, -100),
    cc.p(80, 20),
    cc.p(-55, -100),
}

function PlayerHeadNode:getCSBPath()
    local path = "cocosStudio/DaTong/GameLayer/CSB/PlayerHead/"
    if self._seatId == CF.roomData:getSelfSeat() then
        path = path .. "PlayerHeadSelf.csb"
    else
        path = path .. "PlayerHeadBase.csb"
    end
    return path
end

function PlayerHeadNode:getBindingInfo()
    local uiList = PlayerHeadNode.super.getBindingInfo(self)
    uiList["_KW_IMG_WIN_ORDER"] = {varName = "_winOrderImg"}
    uiList["_KW_PANEL_LEFT_CARD_NUM"] = {varName = "_leftCardNumPanel"}
    uiList["_KW_TEXT_LEFT_CARD_NUM"] = {varName = "_leftCardNumText"}
    uiList["_KW_PANEL_ALARM_ANI"] = {varName = "_alarmPanel"}
    uiList["_KW_TEXT_PLAYER_SCORE_ALL"] = {varName = "_totalScore"}
    uiList["_KW_TEXT_BOMB"] = {varName = "_bombScore"}
    uiList["_KW_TEXT_PLAYER_SCORE_PER"] = {varName = "_playerScore"}
    uiList["_KW_IMG_BG_PLAYER_SCORE"] = {varName = "_playerScoreBG"}
    uiList["_KW_IMG_BG_BOMB_SCORE"] = {varName = "_bombScoreBG"}
    uiList["_KW_BTN_NO_JOKER"] = {varName = "_noJokerImg"}
    uiList["_KW_PANEL_JOKER"] = {varName = "_jokerCardPosNode"}
    uiList["_KW_POS_MESSAGE_"] = {varName = "_posMessage_", beginIndex = 1, endIndex = 6}
    return uiList
end

function PlayerHeadNode:ctor(param)
    PlayerHeadNode.super.ctor(self, param)
    self._winOrderImg:setVisible(false)
    self._leftCardNumPanel:setVisible(false)
    self:updatePosition()
end

function PlayerHeadNode:getProxyEvents()
    local xyList = PlayerHeadNode.super.getProxyEvents(self)
    xyList[#xyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SCORE_EVERY_PLAYER_SHOW", callBack = "onMsgScoreEveryPlayerTurn"}
    xyList[#xyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SCORE_BOMB", callBack = "onMsgScoreBombTurn"}
    xyList[#xyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onMsgGameStart"}
    xyList[#xyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_FFZ_JOKER", callBack = "onMsgFFZJoker"}
    xyList[#xyList+1] = {module = CF.roomData, eventKeyName = "EVENT_GAMERULE_CHANGED", callBack = "onGameRuleChanged"}
    return xyList
end

function PlayerHeadNode:setScoreText(playerScore)
    local playerScoreStr = self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM and tostring(playerScore) or tostring("分：" .. playerScore)
    self._scoreLabel:setString(playerScoreStr)
    if CF.roomData:isGoldRoom() then
        self._scoreLabel:setString(playerScoreStr)
    end
end

function PlayerHeadNode:onMsgScoreEveryPlayerTurn(event)
    if not event.msg then return end
    local msgScoreEveryPlayerTurn = event.msg.msgData or {}
    local everyScore = msgScoreEveryPlayerTurn.sScore
    if everyScore == nil or next(everyScore) == nil then
        return
    end

    local isLocalSeat = CF.roomData:seatToLocal(self._seatId) == CF.roomData:getSelfLocalSeat()
    local playerSeat = self._seatId
    for sSeat,score in pairs(everyScore) do
        local serverSeat = sSeat - 1
        if serverSeat == playerSeat then
            local str = isLocalSeat and score or "闷拿分:" .. score
            self._playerScore:setString(str)
            break
        end
    end
end

function PlayerHeadNode:onMsgScoreBombTurn(event)
    if not event.msg then return end
    local msgScoreBombTurn = event.msg.msgData or {}
    local sBombScore = msgScoreBombTurn.sBombScore
    if sBombScore == nil or next(sBombScore) == nil then
        return
    end
    
    local isLocalSeat = CF.roomData:seatToLocal(self._seatId) == CF.roomData:getSelfLocalSeat()
    local playerSeat = self._seatId

    for sSeat,score in pairs(sBombScore) do
        local serverSeat = sSeat - 1
        if serverSeat == playerSeat then
            local str = isLocalSeat and score or "炸弹分:" .. score
            self._bombScore:setString(str)
            break
        end
    end
end

function PlayerHeadNode:onMsgGameStart(event)
    local isLocalSeat = CF.roomData:seatToLocal(self._seatId) == CF.roomData:getSelfLocalSeat()
    if self._playerScore then
        local str = isLocalSeat and "0" or "闷拿分:" .. 0
        self._playerScore:setString(str)
    end
    if self._bombScore then
        local str = isLocalSeat and "0" or "炸弹分:" .. 0
        self._bombScore:setString(str)
    end
    if self._jokerCardPosNode then
        local cardAreaNode = CF.UITool.seekNodeByName(self._jokerCardPosNode,JOKER_CARD_AREA)
        if cardAreaNode then
            cardAreaNode:clearCards()
        end
    end
end

function PlayerHeadNode:onMsgFFZJoker(event)
    if not event.msg then return end
    local msgFFZJoker = event.msg.msgData or {}
    local sSeat = msgFFZJoker.sSeat or -1
    local ucCards = msgFFZJoker.ucCards or {}
    if sSeat < 0 then return end
   self:showJokerCard(sSeat, ucCards)
end

function PlayerHeadNode:showJokerCard(sSeat, cardIDs)
    if self._seatId == sSeat then
        local haveCards = #cardIDs > 0
        if self._noJokerImg then self._noJokerImg:setVisible(not haveCards) end
        if haveCards and self._jokerCardPosNode then
            local cardAreaNode = CF.UITool.seekNodeByName(self._jokerCardPosNode,JOKER_CARD_AREA)
            if not cardAreaNode then
                cardAreaNode = CardArea.new()
                self._jokerCardPosNode:addChild(cardAreaNode)
                cardAreaNode:setIgnoreAnchorPointForPosition(true)
                cardAreaNode:setAnchorPoint(cc.p(0.5, 0.5))
                cardAreaNode:setName(JOKER_CARD_AREA)
                cardAreaNode:setShowCards(cardIDs)
                cardAreaNode:setScale(0.7)
            else
                cardAreaNode:setShowCards(cardIDs)
            end
        end
    end
end

function PlayerHeadNode:updateUI()
    PlayerHeadNode.super.updateUI(self)
     local isFFZ = CF.roomData:getIsFFZ()
    if self._playerScore then
        self._playerScore:setVisible(not isFFZ)
    end
    if self._bombScore then
        self._bombScore:setVisible(not isFFZ)
    end 

    if self._playerScoreBG then
        self._playerScoreBG:setVisible(not isFFZ)
    end

    if self._bombScoreBG then
        self._bombScoreBG:setVisible(not isFFZ)
    end
    if isFFZ then
        self:hideLeftCardNum()
    end
end

function PlayerHeadNode:onGameRuleChanged(event)
   self:updateUI()
end

function PlayerHeadNode:hideLeftCardNum()
    self._leftCardNumPanel:setVisible(false)
end

function PlayerHeadNode:setLeftCardNum(nCardNum)
    if CF.roomData:isSixPlayer() then return end
    local lastNumStr = self._leftCardNumText:getString()
    if #lastNumStr > 0 and tonumber(lastNumStr) > 10 and tonumber(nCardNum) <= 10 and tonumber(nCardNum) > 0 then
        self:showAlarmAni(true)
    end
    self._leftCardNumText:setString(nCardNum)
    local isffz = CF.roomData:getIsFFZ()
    if isffz then
        self._leftCardNumPanel:setVisible(false)
    else
        self._leftCardNumPanel:setVisible(nCardNum > 0)
    end
end

function PlayerHeadNode:showAlarmAni(bShow)
    self._alarmPanel:removeAllChildren()
    if bShow then
        self._alarmPanel:setPosition(self.ALARM_POS[self._localSeat])
        AnimationManager.playAlarmJsonArmature(self._alarmPanel) 
    end
end

function PlayerHeadNode:moveLeftCardNumOpenCard(bOpen)
    if CF.roomData:isSixPlayer() then return end
    if bOpen then
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_OPENCARD_POS[self._localSeat])
    else
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    end
end

function PlayerHeadNode:showWinOrderImg(bShow, winOrder)
    if bShow and winOrder > 0 then
        if winOrder == GameEnum.GAME_WIN_ORDER.FIRSET then
            self._winOrderImg:loadTexture(KW_IMG_NAME_WINORDER_FIRST, ccui.TextureResType.plistType)
        elseif winOrder == GameEnum.GAME_WIN_ORDER.SECOND then
            self._winOrderImg:loadTexture(KW_IMG_NAME_WINORDER_SECOND, ccui.TextureResType.plistType)
        elseif winOrder == GameEnum.GAME_WIN_ORDER.THREE then
            self._winOrderImg:loadTexture(KW_IMG_NAME_WINORDER_THREE, ccui.TextureResType.plistType)
        end
        self:hideLeftCardNum()
    end
    self._winOrderImg:setVisible(bShow)
end

function PlayerHeadNode:updatePosition()
    if self._leftCardNumPanel then
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    end
    local nameScorePos = CF.roomData:isSixPlayer() and self.NAME_AND_SCORE_POS_SIX[self._localSeat] or self.NAME_AND_SCORE_POS[self._localSeat]
    if self._nameAndScoreNode then
        self._nameAndScoreNode:setPosition(nameScorePos)
    end
    if self._nameAndScoreBG then
        self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 55, nameScorePos.y - 18))
    end
end

function PlayerHeadNode:clearGuideTip()
    self._posPropAni:removeChildByName(KW_LEFT_TIP)
end

function PlayerHeadNode:showGuideTip()
    local guideNode = self._posPropAni:getChildByName(KW_LEFT_TIP)
    if not guideNode then
        local GuideAniNode = CF.gameRequire("Modules.Guide.AniNode")
        guideNode = GuideAniNode.new()
        guideNode:showGuideTip(self._localSeat, KW_TIP_TEXT)
        guideNode:setName(KW_LEFT_TIP)
        self._posPropAni:addChild(guideNode)
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

            if not CF.roomData:isSixPlayer() and self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._messageSpeakText:setPositionPercent(cc.p(0.5, 0.4))
            else
                self._messageSpeakText:setPositionPercent(cc.p(0.5, 0.6))
            end
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
        local texturePath = "game_message_speak_1.png"
        local anchorPoint = cc.p(0,0)
        if CF.roomData:isSixPlayer() then
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOPLEFT then
                texturePath = "game_message_speak_1.png"
                anchorPoint = cc.p(0,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                texturePath = "game_message_speak_2.png"
                anchorPoint = cc.p(1,0)
            else
                texturePath = "game_message_speak_3.png"
                anchorPoint = cc.p(1,1)
            end
        else
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
                texturePath = "game_message_speak_1.png"
                anchorPoint = cc.p(0,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
                texturePath = "game_message_speak_2.png"
                anchorPoint = cc.p(1,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                texturePath = "game_message_speak_3.png"
                anchorPoint = cc.p(1,1)
            end
        end

        self._messageBg:loadTexture(texturePath, ccui.TextureResType.plistType)
        self._messageBg:setAnchorPoint(anchorPoint)
        self._messageBg:setVisible(true)
        self._messageBg:stopAllActions()
        self._messageBg:runAction(cc.Sequence:create(cc.FadeIn:create(0.1), cc.DelayTime:create(1), cc.FadeOut:create(0.1)))
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
    end
end

function PlayerHeadNode:showEmojiAni(exportJsonPath, exportJsonName, aniName)
    local isXGSJ = self._localSeat == CF.roomData:getSelfLocalSeat() and XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.CHAT)
    if self._messageBg and self["_posMessage_" .. (self._localSeat)] then
        self._messageBg:setPosition(self["_posMessage_" .. (self._localSeat)]:getPosition())
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
            if not CF.roomData:isSixPlayer() and self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._emojiPanel:setPositionPercent(cc.p(0.5, 0.4))
            else
                self._emojiPanel:setPositionPercent(cc.p(0.5, 0.6))
            end
            local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
            CF.UITool.playJsonAnimationByName(self._emojiPanel, exportJsonName, exportJsonFilePath, 1, aniName)
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
        local texturePath = "game_message_speak_1.png"
        local anchorPoint = cc.p(0,0)
        if CF.roomData:isSixPlayer() then
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOPLEFT then
                texturePath = "game_message_speak_1.png"
                anchorPoint = cc.p(0,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                texturePath = "game_message_speak_2.png"
                anchorPoint = cc.p(1,0)
            else
                texturePath = "game_message_speak_3.png"
                anchorPoint = cc.p(1,1)
            end
        else
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
                texturePath = "game_message_speak_1.png"
                anchorPoint = cc.p(0,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
                texturePath = "game_message_speak_2.png"
                anchorPoint = cc.p(1,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                texturePath = "game_message_speak_3.png"
                anchorPoint = cc.p(1,1)
            end
        end

        self._messageBg:loadTexture(texturePath, ccui.TextureResType.plistType)
        self._messageBg:setAnchorPoint(anchorPoint)
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

function PlayerHeadNode:showVoiceAni(exportJsonFilePath, aniName)
    if self._messageBg and self["_posMessage_" .. (self._localSeat)] then
        self._messageBg:setPosition(self["_posMessage_" .. (self._localSeat)]:getPosition())
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
            if not CF.roomData:isSixPlayer() and self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._speakAniPanel:setPositionPercent(cc.p(0.3, 0.4))
            else
                self._speakAniPanel:setPositionPercent(cc.p(0.3, 0.6))
            end
            CF.UITool.playJsonAnimation(self._speakAniPanel, aniName, exportJsonFilePath, 1)
        end
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/Common/Image/message.plist")
        local texturePath = "game_message_speak_1.png"
        local anchorPoint = cc.p(0,0)
        if CF.roomData:isSixPlayer() then
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOPLEFT then
                texturePath = "game_message_speak_1.png"
                anchorPoint = cc.p(0,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                texturePath = "game_message_speak_2.png"
                anchorPoint = cc.p(1,0)
            else
                texturePath = "game_message_speak_3.png"
                anchorPoint = cc.p(1,1)
            end
        else
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.LEFT or self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
                texturePath = "game_message_speak_1.png"
                anchorPoint = cc.p(0,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
                texturePath = "game_message_speak_2.png"
                anchorPoint = cc.p(1,0)
            elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                texturePath = "game_message_speak_3.png"
                anchorPoint = cc.p(1,1)
            end
        end
        self._messageBg:loadTexture(texturePath, ccui.TextureResType.plistType)
        self._messageBg:setAnchorPoint(anchorPoint)
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

return PlayerHeadNode`