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

PlayerHeadNode.ALARM_POS = {
    cc.p(150, -100),
    cc.p(120, 90),
    cc.p(-120, -100),
    cc.p(230, 0),
}

PlayerHeadNode.NAME_AND_SCORE_POS = {
    cc.p(-55, -100),
    cc.p(60, 0),
    cc.p(-55, -100),
    cc.p(60, 0),
}

local KW_IMG_NAME_WINORDER_FIRST = "doublekou_sp_first.png"
local KW_IMG_NAME_WINORDER_SECOND = "doublekou_sp_second.png"
local KW_IMG_NAME_WINORDER_THREE = "doublekou_sp_three.png"

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/HongShi/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_WIN_ORDER"] = { varName = "_winOrderImg" }
    bindInfo["_KW_PANEL_LEFT_CARD_NUM"] = { varName = "_leftCardNumPanel" }
    bindInfo["_KW_TEXT_LEFT_CARD_NUM"] = { varName = "_leftCardNumText" }
    bindInfo["_KW_TEXT_OUT_CARD_TIME"] = { varName = "_outCardTimeText" }
    bindInfo["_KW_PANEL_ALARM_ANI"] = { varName = "_alarmPanel" }
    bindInfo["_KW_IMG_LIGHT_HEART"] = { varName = "_imgLightHeart" }
    bindInfo["_KW_BTN_KICK"] = { varName = "_kickBtn" , type = CF.UI_TYPE.BUTTON, onTouchEnded = "onKickBtnClicked"}
    bindInfo["_KW_IMG_LIGHT_DIAMOND"] = { varName = "_imgLightDiamond" }
    return bindInfo
end

function PlayerHeadNode:initChildren()
    self._leftCardNumPanel:setVisible(false)
    self._winOrderImg:setVisible(false)
    self._hostFlagSp:setVisible(false)
    self._wireBreakPanel:setVisible(false)
    self:initLightTen()
    self:updateWinOrderFlag()
    PlayerHeadNode.super.initChildren(self)
end

function PlayerHeadNode:updateLayoutPosition()
    self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    self._nameAndScoreNode:setPosition(self.NAME_AND_SCORE_POS[self._localSeat])
    if self._nameAndScoreBG then
        local nameScorePos = self.NAME_AND_SCORE_POS[self._localSeat]
        if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
            self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 70, nameScorePos.y + 14))
        else
            self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 55, nameScorePos.y))
        end
    end
    self._hostFlagSp:setPositionX(-50)
end

--设置剩余牌数
function PlayerHeadNode:setLeftCardNum(nCardNum)
    local lastNumStr = self._leftCardNumText:getString()
    if #lastNumStr > 0 and tonumber(lastNumStr) > 10 and tonumber(nCardNum) <= 10 and tonumber(nCardNum) > 0 then
        self:showAlarmAni(true)
    end
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

function PlayerHeadNode:showWinOrderImg(bShow, winOrder)
    if bShow and winOrder > 0 then
        if winOrder == CF.GameDefine.GAME_WIN_ORDER.FIRSET then
            self._winOrderImg:loadTexture(KW_IMG_NAME_WINORDER_FIRST, ccui.TextureResType.plistType)
        elseif winOrder == CF.GameDefine.GAME_WIN_ORDER.SECOND then
            self._winOrderImg:loadTexture(KW_IMG_NAME_WINORDER_SECOND, ccui.TextureResType.plistType)
        elseif winOrder == CF.GameDefine.GAME_WIN_ORDER.THREE then
            self._winOrderImg:loadTexture(KW_IMG_NAME_WINORDER_THREE, ccui.TextureResType.plistType)
        end
        self:hideLeftCardNum()
    end
    self._winOrderImg:setVisible(bShow)
end

function PlayerHeadNode:updateWinOrderFlag()
    local rank = CF.game:getModule("GameLayer"):getGameData():getRanList(self._seatId)
    if rank and rank > 0 then
        self:showWinOrderImg(true, rank)
    end
end


function PlayerHeadNode:showAlarmAni(bShow)
    self._alarmPanel:removeAllChildren()
    if bShow then
        self._alarmPanel:setPosition(self.ALARM_POS[self._localSeat])
        local AnimationManager = CF.gameRequire("Manager.AnimationManager")
        AnimationManager.playAlarmJsonArmature(self._alarmPanel) 
    end
end

function PlayerHeadNode:onKickBtnClicked(send, eventType)
    local playerdata = CF.roomData:getPlayerDataBySeatId(self._seatId)
    CF.msgManager:sendReqKickUser(playerdata:getNumberID(), playerdata:getBrandID())
end

function PlayerHeadNode:updateLightTen(bFlag,nType)
    self._imgLightHeart:setVisible(false)
    self._imgLightDiamond:setVisible(false)
    if bFlag then
        nType = nType or CF.game:getModule("GameLayer"):getGameData():getLightTenType(self._seatId)
        if nType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_TAO then
            self._imgLightHeart:setVisible(true)
        elseif nType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_FANG then
            self._imgLightDiamond:setVisible(true)
        elseif nType == CF.GameDefine.LIANG_SHI_TYPE.OPEN_DOUBLE then
            self._imgLightHeart:setVisible(true)
            self._imgLightDiamond:setVisible(true)
        end
    end 
end

function PlayerHeadNode:initLightTen()
    local openType = CF.game:getModule("GameLayer"):getGameData():getLightTenType(self._seatId)
    self:updateLightTen(true,openType)
end

function PlayerHeadNode:onWireBreakChanged(event)
    if CF.roomData:isGoldRoom() then
        return
    end
    if self._playerData then
        local isBreak = self._playerData:getIsWireBreak()
        if self._localSeat == CF.roomData:getSelfLocalSeat() then
            isBreak = false
        end
        local beforeVisible = self._wireBreakPanel:isVisible()
        self._wireBreakPanel:setVisible(isBreak)
    end
end
return PlayerHeadNode