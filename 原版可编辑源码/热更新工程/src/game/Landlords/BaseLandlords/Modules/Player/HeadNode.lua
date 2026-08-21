local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.GameBase.Modules.Player.HeadNode")

PlayerHeadNode.LEFT_CARD_NUM_POS = {
    cc.p(120, 0),
    cc.p(240, 0),
    cc.p(-120, 0),
    cc.p(-120, 0),
}

PlayerHeadNode.LEFT_CARD_NUM_OPENCARD_POS = {
    cc.p(120, 0),
    cc.p(240, 0),
    cc.p(-120, 0),
    cc.p(0, -120),
}

PlayerHeadNode.NAME_AND_SCORE_POS = {
    cc.p(-55, -100),
    cc.p(60, 0),
    cc.p(-55, -100),
    cc.p(60, 0),
}

local KW_LEFT_TIP = "LEFT_TIP"
local KW_TIP_TEXT = "再给一点时间考虑下"

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/Landlords/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_DIZHU_FLAG"] = { varName = "_diZhuImg" }
    bindInfo["_KW_PANEL_LEFT_CARD_NUM"] = { varName = "_leftCardNumPanel" }
    bindInfo["_KW_TEXT_LEFT_CARD_NUM"] = { varName = "_leftCardNumText" }
    bindInfo["_KW_TEXT_OUT_CARD_TIME"] = { varName = "_outCardTimeText" }
    bindInfo["_KW_BTN_SWAP_SEAT"] = { varName = "_swapSeatBtn" , type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSwapSeatBtnClicked"}
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local proxyList = PlayerHeadNode.super.getProxyEvents(self)
    proxyList[#proxyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable"}
    return proxyList
end

function PlayerHeadNode:clearTable()
    self:hideLeftCardNum()
end

function PlayerHeadNode:initChildren()
    self._leftCardNumPanel:setVisible(false)
    self._diZhuImg:setVisible(false)
    self._swapSeatBtn:setVisible(false)
    PlayerHeadNode.super.initChildren(self)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData:getGameStep() > CF.GameDefine.GAME_STEP.GAME_STEP_START_GAME then
        local cardCount = gameData:getHandCardsCount(self._seatId)
        self:setLeftCardNum(cardCount)
    end
end

function PlayerHeadNode:updateLayoutPosition()
    self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    self._nameAndScoreNode:setPosition(self.NAME_AND_SCORE_POS[self._localSeat])
    if self._nameAndScoreBG then
        local nameScorePos = self.NAME_AND_SCORE_POS[self._localSeat]
        self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 55, nameScorePos.y + 12))
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 70, nameScorePos.y + 12))
        end
    end
    self._hostFlagSp:setPositionX(-50)
end

--设置剩余牌数
function PlayerHeadNode:setLeftCardNum(nCardNum)
    self._leftCardNumText:setString(nCardNum)
    self._leftCardNumPanel:setVisible(nCardNum > 0)
end

function PlayerHeadNode:moveLeftCardNumOpenCard(bOpen)
    if bOpen then
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_OPENCARD_POS[self._localSeat])
    else
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    end
end

function PlayerHeadNode:hideLeftCardNum()
    self._leftCardNumPanel:setVisible(false)
end

-- 地主标识
function PlayerHeadNode:showDiZhuImg(bShow)
    self._diZhuImg:setVisible(bShow)
end

function PlayerHeadNode:clearGuideTip()
    self._posPropAni:removeChildByName(KW_LEFT_TIP)
end

function PlayerHeadNode:showSwapSeatBtn(bShow)
    self._swapSeatBtn:setVisible(bShow)
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

function PlayerHeadNode:onSwapSeatBtnClicked(send, eventType)
    CF.msgManager:sendRequestSwapSeat(self._seatId)
    CF.msgManager:sendRespondSwapSeat(true)
end

function PlayerHeadNode:onClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if not CF.roomData:isPlayBack() and not CF.roomData:getIsSeer() then
        CF.gameRequire("Modules.PlayerInfo.View").new({seatId = self._seatId}):showSelf()
    end
end

return PlayerHeadNode