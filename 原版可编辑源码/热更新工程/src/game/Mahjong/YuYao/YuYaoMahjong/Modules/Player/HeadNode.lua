local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/YuYao/PlayerHead.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    --余姚麻将专用
    bindInfo["_KW_TEXT_SCORE_YY"] = {varName = "_scoreLabelYY"}
    bindInfo["_KW_TEXT_SCORE_GANG"] = {varName = "_scoreLabelGang"}
    return bindInfo
end

function PlayerHeadNode:ctor(param)
    param = param or {}
    PlayerHeadNode.super.ctor(self, param)
    self:createChildren()
end

function PlayerHeadNode:getProxyEvents()
    local proxyEvents = PlayerHeadNode.super.getProxyEvents(self)
    --该消息没有使用
    --proxyEvents[#proxyEvents + 1] = {module = CF.roomData, eventKeyName = "EVENT_GAMEINFO_CHANGED", callBack = "updateGameInfo"}
    --proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_UPDATE_YA_ZI_UI", callBack = "onMsgShowYaZiUI"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_UPDATE_LS_FEN", callBack = "updateLSFen"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_UPDATE_GANG_FEN", callBack = "updateGangFen"}
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_UPDATE_GAMERULE", callBack = "showGoldRoom"}
    return proxyEvents
end
function PlayerHeadNode:updateLayoutPosition()
    PlayerHeadNode.super.updateLayoutPosition(self)
    if self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
        self._scoreLabelYY:setAnchorPoint(0, 0.5)
        self._scoreLabelYY:setPosition(80, -20)
        self._scoreLabelGang:setPosition(80, -50)
        self._nameAndScoreBG:setPosition(140, -20)
        self._nameAndScoreBG:setContentSize(140, 110)
    elseif self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
        self._scoreLabelGang:setPosition(52, -110)
        self._nameAndScoreBG:setPosition(0, -98)
        self._nameAndScoreBG:setContentSize(300, 70)
    else
        self._nameAndScoreBG:setPosition(0, -103)
        self._nameAndScoreBG:setContentSize(140, 110)
    end
end

function PlayerHeadNode:createChildren()
    self:showGoldRoom()
    self:updateBankerFlag()
end

-- 金币场显示
function PlayerHeadNode:showGoldRoom()
    local bGold = CF.roomData:isGoldRoom()
    self._goldPanel:setVisible(bGold)
    --余姚特判
    self._scoreLabel:setVisible(false)
    self._scoreLabelYY:setVisible(not bGold)
    if self._scoreLabelGang then
        local showGangScore = CF.game:getModule("RoomInfo"):isShowGangScore()
        self._scoreLabelGang:setVisible(not bGold and showGangScore)
        if showGangScore then
            self:updateGangFen({msg = {score = CF.game:getModule("RoomInfo"):getGangScore()}})
        end
    end
end

--更新另算时分数
function PlayerHeadNode:updateLSFen(event)
    local playerScoreList = event.msg.score
    local playerScore = playerScoreList[self._seatId + 1]
    self._scoreLabelYY:setString(playerScore)
end

function PlayerHeadNode:updateGangFen(event)
    if self._scoreLabelGang then
        local playerScoreList = event.msg.score
        local playerScore = playerScoreList[self._seatId] or 0
        self._scoreLabelGang:setString("杠分:"..playerScore)
    end
end

function PlayerHeadNode:updateUI()
    PlayerHeadNode.super.updateUI(self)
    self._scoreLabel:setString(self._nscore)
end

function PlayerHeadNode:onMsgShowYaZiUI(event)
    local anteNum = event.msg.anteNum
    local seat = event.msg.seat
    --local anteMinNum = event.msg.anteMinNum
    local YaZiEnum = {NONE = -1, ZERO = 0, ONE = 1, TWO = 2}

    if self._seatId == seat and anteNum ~= YaZiEnum.NONE then
        self:showYaZiTip(anteNum)
    end
end

function PlayerHeadNode:showYaZiTip(yaZiNum)
    yaZiNum = yaZiNum or 0
    if yaZiNum > 0 then
        self._yzZiLabel:setString("押" .. yaZiNum .. "子")
    end
    self._yaZiRoot:setVisible(yaZiNum > 0)
end
--俏皮话文字和表情
function PlayerHeadNode:onChatMsgChanged(event)
    local chatData = event.msg
    if self._seatId ~= chatData.seat then
        return
    end
    if CF.game:getModule("PlayerInfo"):getBlockedChat(self._playerData:getNumberID()) then
        return
    end
    local data = chatData.data
    if not data.index then
        return
    end
    if data.nType == CF.game:getModule("Chat").ChatType.QIAO_PI_HUA then
        self:showSpeakText(data.speakText)
        --播放俏皮话音效
        local bFangYan = false
        local bMan = self._playerData:getSex() == 1
        local gameid = CF.roomData:getGameID()
        CF.soundManager:playSoundWisecrack(self._localSeat, bMan, bFangYan, gameid, data.index)
    elseif data.nType == CF.game:getModule("Chat").ChatType.EXPRESSION then
        local aniName = data.aniName
        local exportJsonPath = data.exportJsonPath .. "/"
        local exportJsonName = data.exportJsonName
        self:showEmojiAni(exportJsonPath, exportJsonName, aniName)
    end
end
return PlayerHeadNode
