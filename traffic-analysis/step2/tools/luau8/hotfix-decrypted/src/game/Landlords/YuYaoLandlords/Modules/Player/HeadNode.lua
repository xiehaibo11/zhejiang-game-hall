local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Landlords.BaseLandlords.Modules.Player.HeadNode")

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
    cc.p(-120, 0),
}

PlayerHeadNode.NAME_AND_SCORE_POS = {
    cc.p(-55, -100),
    cc.p(60, 0),
    cc.p(-55, -100),
    cc.p(60, 0),
}

--设置剩余牌数
function PlayerHeadNode:setLeftCardNum(nCardNum)
    self._leftCardNumText:setString(nCardNum)
    --余姚少于等于10张才显示玩家牌数
    self._leftCardNumPanel:setVisible(nCardNum <= 10)
end

function PlayerHeadNode:moveLeftCardNumOpenCard(bOpen)
    if bOpen then
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_OPENCARD_POS[self._localSeat])
    else
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    end
end

function PlayerHeadNode:updateLayoutPosition()
    self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    self._nameAndScoreNode:setPosition(self.NAME_AND_SCORE_POS[self._localSeat])
    if self._nameAndScoreBG then
        local nameScorePos = self.NAME_AND_SCORE_POS[self._localSeat]
        self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 55, nameScorePos.y + 10))
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 70, nameScorePos.y + 10))
        end
    end
end

return PlayerHeadNode�