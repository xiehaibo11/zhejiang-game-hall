local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_FNT_PAO"] = { varName = "_fntPao" }
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_PAO_FLAG", callBack = "updatePaoFlag"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_ZHUANG_FLAG", callBack = "updateZhuangFlag"}
    return proxyEvents
end

function PlayerHeadNode:updatePaoFlag(event)
    local msg = event.msg
    if not msg then
        return
    end
    if msg.seat ~= self._seatId then
        return
    end
    if msg.show == true and msg.paoNum then
        self._fntPao:setString(tonumber(msg.paoNum) .. "p")
        self._fntPao:setVisible(true)
    else
        self._fntPao:setVisible(false)
    end
end

function PlayerHeadNode:updateZhuangFlag(event)
    local msg = event.msg
    if not msg then
        return
    end
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
    if not isBanker then
        return
    end
    self._bankerFlagSp:ignoreContentAdaptWithSize(true)
    self._bankerFlagSp:loadTexture(msg.imgName, ccui.TextureResType.plistType)
end

return PlayerHeadNode7