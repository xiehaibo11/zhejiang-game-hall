--------------------------------------------
-- Copyright © 2018 luaide-lite
-- File: PlayerHeadNode.lua
-- Author: luaide-lite
-- Date: 2019-07-09 03:14:59
-- Desc:
--------------------------------------------
local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/NingBo/PlayerHead.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    --慈溪麻将专用
    bindInfo["_KW_TEXT_SHANGTANG_PANEL"] = { varName = "_shangTangPanel" }
    bindInfo["_KW_FNT_HDSHANGTANG"] = { varName = "_shangTangfnt" }
    bindInfo["_KW_TEXT_SCORE_CX"] = { varName = "_scoreLabelCX" }
    bindInfo["_KW_TEXT_SCORE_LINGSUAN"] = { varName = "_scoreLSLabel" }
    bindInfo["_KW_POS_CHIP_SWAP_SEAT_ANI"] = { varName = "_chipPanel" }
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local eventList = PlayerHeadNode.super.getProxyEvents(self)
    eventList[#eventList + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_ST_FLAG", callBack = "updateSTFlag" }
    eventList[#eventList + 1] = { module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SHOW_QJ_FEN", callBack = "showQJFen" }
    eventList[#eventList + 1] = { module = CF.game:getModule("Player"), eventKeyName = "EVENT_UPDATE_QJ_FEN", callBack = "updateQJFen" }
    eventList[#eventList + 1] = { module = CF.game:getModule("Player"), eventKeyName = "EVENT_UPDATE_LS_FEN", callBack = "updateLSFen" }
    return eventList
end

function PlayerHeadNode:updateScoreIcon()
    local bGold = CF.roomData:isGoldRoom()
    self._goldPanel:setVisible(bGold)
    --慈溪特判
    self._scoreLabel:setVisible(false)
    self._scoreLabelCX:setVisible(not bGold)
    if self:isSanJiaLingSuan() then
        self._scoreLSLabel:setVisible(true)
    end
end

function PlayerHeadNode:updateLayoutPosition()
end

-- 是否三家另算
function PlayerHeadNode:isSanJiaLingSuan()
    local bSanJiaLingSuan = false
    if CF.game:getModule("RoomInfo"):getTypeSanJiaLingSuan() then
        bSanJiaLingSuan = true
    end
    return bSanJiaLingSuan
end

-- 是否显示全缴
function PlayerHeadNode:showQJFen(event)
    local isShow = self:isSanJiaLingSuan()
    self._scoreLabel:setVisible(not isShow)
    self._scoreLabelCX:setVisible(isShow)
    self._scoreLSLabel:setVisible(isShow)
end

--更新全缴分
function PlayerHeadNode:updateQJFen(event)
    local playerQjScoreList = event.score
    local playerQjScore = playerQjScoreList[self._seatId]
    self._scoreLSLabel:setString(playerQjScore)
end

--更新另算时分数
function PlayerHeadNode:updateLSFen(event)
    local playerScoreList = event.msg.score
    local playerScore = playerScoreList[self._seatId + 1]
    self._scoreLabelCX:setString(playerScore)
end

function PlayerHeadNode:initPlayerSTFlag()
    self._shangTangPanel:setVisible(false)
end

function PlayerHeadNode:updateSTFlag(event)
    local msg = event.msg
    if self._seatId ~= msg.nBanker then
        return
    end
    local tang = msg.nLaoZhuang - 1
    local show = tang > 0
    self._shangTangPanel:setVisible(show)
    self._shangTangfnt:setText(tang)
end

return PlayerHeadNode