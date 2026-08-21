local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/TaiZhou/WaHua/PlayerHeadBase.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_WIND"] = { varName = "_imgWindFlag" }
    return bindInfo
end

function PlayerHeadNode:updateLayoutPosition()
    PlayerHeadNode.super.updateLayoutPosition(self)
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        self._nicknameLabel:setAnchorPoint(0,0.5)
        self._nicknameLabel:setPosition(80,10)
        self._scoreLabel:setAnchorPoint(0,0.5)
        self._scoreLabel:setPosition(80,-20)
        if CF.roomData:isGoldRoom() then
            self._goldPanel:setPosition(130,90)
        end
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(119, -2)
        end
    end
end

function PlayerHeadNode:updateBankerFlag()
    self:updateWindFlag()
end

function PlayerHeadNode:updateWindFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local windIndex = gameData:getSeatWind(self._seatId)
    if self._imgWindFlag and windIndex >= 0 then
        self._imgWindFlag:loadTexture(CF.GameDefine.windFlagStr[windIndex], ccui.TextureResType.plistType)
        self._imgWindFlag:setVisible(true)
    end
end

return PlayerHeadNode�