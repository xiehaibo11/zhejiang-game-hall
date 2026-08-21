local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.GameBase.Modules.Player.HeadNode")
local HeadNodeConfig = CF.gameRequire("Modules.Player.HeadNodeConfig")
local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local KW_GAME_COMMON_ANI_JSON_PATH = "animation/GameCommon/PokerGame/"

function PlayerHeadNode:ctor(param)
    PlayerHeadNode.super.ctor(self, param)
    if self._localSeat > 0 and self._localSeat <= CF.roomData:getMaxPlayer() then
        self._leftCardPanelUI:setPosition(HeadNodeConfig.LEFT_CARD_POS[self._localSeat])
        self["_warningUI"]:setPosition(HeadNodeConfig.KW_ARMATURE_WARING_POS[self._localSeat])
    end
end

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/LookAnxiously/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_TEXT_PANEL"] = { varName = "_textPanel"}
    bindInfo["_KW_NAME_AND_SCORE_BG"] = {varName = "_nameAndScoreBG"}
    bindInfo["_KW_TEXT_SCORE"] = {varName = "_scoreLabel"}
    -- 金币场
    bindInfo["_KW_TEXT_GOLD_PANEL"] =  {varName = "_goldPanel"}
    bindInfo["_KW_TEXT_GOLD_SCORE"] = {varName = "_goldLabel"}
    bindInfo["_KW_POS_MESSAGE_"] = {varName = "_posMessage_", beginIndex = 1, endIndex = 5}
    -- 剩余牌张数
    bindInfo["_KW_UI_LEFT_CARD_TEXT"] = {varName = "_leftCardTextUI"}
    bindInfo["_KW_UI_LEFT_CARD"] = {varName = "_leftCardPanelUI"}
    -- 报警
    bindInfo["_KW_UI_ARMATURE_WARING"] = {varName = "_warningUI"}
    -- 是否出过牌动画
    bindInfo["_KW_UI_ARMATURE_FIRSTOUT"] = {varName = "_firstOutUI"}
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_PLAYER_CARDS_COUNT", callBack = "onUpdatePlayerCardsCount"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_FIRST_OUTCARD_INFO", callBack = "onUpdateFirstOutLock"}
    return proxyEvents
end

function PlayerHeadNode:updateLayoutPosition()
    if self._localSeat % 2 == 0 or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOPLEFT then
        self._textPanel:setPosition(125, 95)
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(125, 3)
        end
    else
        self._textPanel:setPosition(0, 0)
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(0, -92)
        end
        self._nicknameLabel:setAnchorPoint(cc.p(0.5, 0.5))
        self._scoreLabel:setAnchorPoint(cc.p(0.5, 0.5))
        self._nicknameLabel:setPositionX(0)
        self._scoreLabel:setPositionX(0)
    end
end

function PlayerHeadNode:updateHostFlag()
    PlayerHeadNode.super.updateHostFlag(self)
    if self._hostFlagSp then
        local posX = 50
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.RIGHT then
            posX = -50
        end
        self._hostFlagSp:setPositionX(posX)
    end
end

function PlayerHeadNode:updateUI()
    PlayerHeadNode.super.updateUI(self)
    local bGold = CF.roomData:isGoldRoom()
    self._goldPanel:setVisible(bGold)
    self._scoreLabel:setVisible(not bGold)
end

function PlayerHeadNode:setScoreText(playerScore)
    PlayerHeadNode.super.setScoreText(self, playerScore)
    if CF.roomData:isGoldRoom() then
        self._goldLabel:setString(playerScore)
    end
end

function PlayerHeadNode:showSpeakText(speakText)
    PlayerHeadNode.super.showSpeakText(self, speakText, HeadNodeConfig.KW_POS_MESSAGE[self._localSeat])
end

function PlayerHeadNode:showVoiceAni(exportJsonFilePath, aniName)
    PlayerHeadNode.super.showVoiceAni(self, exportJsonFilePath, aniName, HeadNodeConfig.KW_POS_MESSAGE[self._localSeat])
end

function PlayerHeadNode:showEmojiAni(exportJsonPath, exportJsonName, aniName)
    PlayerHeadNode.super.showEmojiAni(self, exportJsonPath, exportJsonName, aniName, HeadNodeConfig.KW_POS_MESSAGE[self._localSeat])
end

function PlayerHeadNode:onUpdatePlayerCardsCount(event)
    if CF.roomData:isPlayBack() or CF.roomData:isDelayWatch() then
        return
    end
    local seat = event.msg.seat
    local cardsCount = event.msg.count
    local isShow = event.msg.isShow 
    if self._seatId ~= seat or self._localSeat == CF.roomData:getSelfLocalSeat() then 
        return 
    end 
    if self._leftCardPanelUI == nil then 
        return 
    end 
    self._leftCardPanelUI:setVisible(true)
    if self._leftCardTextUI == nil then 
        return 
    end 
    self._leftCardTextUI:setText(cardsCount)
    self:showWaringAni(self._localSeat,cardsCount == 1)
end 

function PlayerHeadNode:onGameEnd(event)
    self:showWaringAni(self._localSeat,false)
    self._leftCardPanelUI:setVisible(false)
end 

function PlayerHeadNode:showWaringAni(localseat,show)
    if localseat == CF.roomData:getSelfLocalSeat() then
        return
    end
    self["_warningUI"]:removeAllChildren()

    if show then
        AnimationManager.playAlarmJsonArmature(self["_warningUI"])
    end
end

function PlayerHeadNode:updatePlayerData(playerData)
    self._playerData = playerData
    self:updateUI()
end

function PlayerHeadNode:onWireBreakChanged(event)
    if CF.roomData:isPlayBack() then
        return
    end
    PlayerHeadNode.super.onWireBreakChanged(self, event)
end

function PlayerHeadNode:onUpdateFirstOutLock(event)
    if not event or not event.msg then
        return
    end
    local seat = event.msg.sSeat
    local bAni = event.msg.bAni
    local isOut = event.msg.bFirstOut
    if self._seatId ~= seat or self._localSeat == CF.roomData:getSelfLocalSeat() then 
        return 
    end 

    if not bAni and isOut then
        self._leftCardPanelUI:removeChildByName("KW_UI_ARMATURE_FIRSTOUT")
        return
    end
    local spineNode = self._leftCardPanelUI:getChildByName("KW_UI_ARMATURE_FIRSTOUT")
    local animation = bAni and "animation2" or "animation"
    if not spineNode then
        local params = {path = KW_GAME_COMMON_ANI_JSON_PATH .. "eff_spine_jiesuo/", tex = "eff_spine_jiesuo.json", ske = "eff_spine_jiesuo.atlas", armatureName = animation}
        if cc.FileUtils:getInstance():isFileExist(params.path..params.tex) and cc.FileUtils:getInstance():isFileExist(params.path..params.ske) then
            spineNode = AnimationManager.playDargonBonesSpine(params, not bAni)
            if spineNode then
                self._leftCardPanelUI:addChild(spineNode)
                spineNode:setPosition(HeadNodeConfig.FIRST_OUT_LOCK_POS[self._localSeat])
                spineNode:setName("KW_UI_ARMATURE_FIRSTOUT")
                return
            end
        end
    end
    spineNode:setAnimation(0, "" .. animation, not bAni)
end

return PlayerHeadNode�