local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.GameBase.Modules.Player.HeadNode")

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/ShutCards/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_FLAG"] = { varName = "_flagSp" }
    bindInfo["_KW_TEXT_PANEL"] = { varName = "_textPanel"}
    bindInfo["_KW_NAME_AND_SCORE_BG"] = {varName = "_nameAndScoreBG"}
    bindInfo["_KW_TEXT_SCORE"] = {varName = "_scoreLabel"}
    -- 金币场
    bindInfo["_KW_TEXT_GOLD_PANEL"] =  {varName = "_goldPanel"}
    bindInfo["_KW_TEXT_GOLD_SCORE"] = {varName = "_goldLabel"}
    return bindInfo
end

function PlayerHeadNode:setRobTag(bRobShut)
    self._flagSp:setVisible(bRobShut)
end

function PlayerHeadNode:initChildren()
    PlayerHeadNode.super.initChildren(self)
    self._flagSp:setVisible(false)
end

function PlayerHeadNode:updateLayoutPosition()
    if self._localSeat % 2 == 0 then
        self._textPanel:setPosition(125, 95)
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(140, -3)
        end
    else
        self._textPanel:setPosition(0, 0)
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(0, -105)
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

return PlayerHeadNode#	