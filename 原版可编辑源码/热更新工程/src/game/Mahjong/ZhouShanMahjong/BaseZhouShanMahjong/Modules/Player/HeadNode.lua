local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_FLAG"] = { varName = "_bankerFlagSp" }
    bindInfo["_KW_TEXT_GANG_SCORE"] = { varName = "_gangScoreLabel" }
    bindInfo["_KW_IMG_YA_ZI_ROOT"] = { varName = "_yaZiRoot" }
    bindInfo["_KW_TEXT_YA_ZI"] = { varName = "_yzZiLabel" }
    bindInfo["_KW_TEXT_GOLD_SCORE"] = {varName = "_goldScore"}
    bindInfo["_KW_UI_GOLD_PANEL"] = {varName = "_goldPanel"}
    bindInfo["_KW_IMG_TING"] = {varName="_tingFlag"}
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local gameManager = CF.game
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_TING_FLAG", callBack = "updateTingFlag"}
    return proxyEvents
end

function PlayerHeadNode:ctor(param)
    PlayerHeadNode.super.ctor(self, param)
    self:initPlayerFlag()
end

function PlayerHeadNode:initPlayerFlag()
    self._tingFlag:setVisible(false)
end

function PlayerHeadNode:updateTingFlag(event)
    local msg = event.msg
    if msg.seat == self._seatId then
        self._tingFlag:setVisible(msg.flag)
    end
end

return PlayerHeadNode