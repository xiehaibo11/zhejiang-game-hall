local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

--[[function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_MDD"] = { varName = "_mddFlagSp" }
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
	local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MDD_FLAG", callBack = "updateMddFlag" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SET_SCORE", callBack = "setScore" }
    return proxyEvents
end

function PlayerHeadNode:ctor(param)
    PlayerHeadNode.super.ctor(self, param)
    self:initPlayerFlag()
end

function PlayerHeadNode:initPlayerFlag()
	local gameData = CF.game:getModule("GameLayer"):getGameData()
    local mddFlag = gameData:getMddData(self._seatId)
    if mddFlag ~= nil then
        if mddFlag == CF.GameDefine.MDDFlag.MAIDI then
            self._mddFlagSp:loadTexture("mah_md_icon.png", ccui.TextureResType.plistType)
        elseif mddFlag == CF.GameDefine.MDDFlag.DINGDI then
            self._mddFlagSp:loadTexture("mah_dd_icon.png", ccui.TextureResType.plistType)
        end
        self._mddFlagSp:setVisible(true)
    else
        self._mddFlagSp:setVisible(false)
    end
end

function PlayerHeadNode:updateMddFlag(event)
    local msg = event.msg
    if msg.seat ~= self._seatId then
        return
    end
    if msg.bShow == true then
        if msg.nType == CF.GameDefine.MDDFlag.MAIDI then
            self._mddFlagSp:loadTexture("mah_md_icon.png", ccui.TextureResType.plistType)
        elseif msg.nType == CF.GameDefine.MDDFlag.DINGDI then
            self._mddFlagSp:loadTexture("mah_dd_icon.png", ccui.TextureResType.plistType)
        end
        self._mddFlagSp:setVisible(true)
        CF.game:getModule("GameLayer"):getGameData():setMddData(msg.seat, msg.nType)
    else
        self._mddFlagSp:setVisible(false)
    end
end

function PlayerHeadNode:setScore(event)
    local score = event.msg.score
    self._scoreLabel:setString(self._playerData:getPlayTypeScore() + score[self._seatId])
end

function PlayerHeadNode:updateHostFlag()
    local isHost = CF.roomData:isHost(self._seatId)
	if self._hostFlagSp then
		self._hostFlagSp:setVisible(isHost)
		local posX = 50
		self._hostFlagSp:setPositionX(posX)
	end
end--]]


return PlayerHeadNode	
