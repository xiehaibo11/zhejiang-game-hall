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

-- 以下是新UI位置
PlayerHeadNode.GONGXIAN_BG_POS = {
    cc.p(128, -16),
    cc.p(0, 0),
    cc.p(-128, -16),
    cc.p(128, -16),
}

PlayerHeadNode.GONGXIAN_BG_POS_OPEN = {
    cc.p(128, -16),
    cc.p(0, 0),
    cc.p(-128, -16),
    cc.p(-128, -16),
}
PlayerHeadNode.LEFT_CARD_NUM_POS_NEW = {
    cc.p(120, 50),
    cc.p(240, 0),
    cc.p(-120, 50),
    cc.p(120, 50),
}

PlayerHeadNode.LEFT_CARD_NUM_OPENCARD_POS_NEW = {
    cc.p(120, 50),
    cc.p(240, 0),
    cc.p(-120, 50),
    cc.p(-120, 50),
}

local KW_LEFT_TIP = "LEFT_TIP"
local KW_TIP_TEXT = "再给一点时间考虑下"

local KW_IMG_NAME_WINORDER_FIRST = "doublekou_sp_first.png"
local KW_IMG_NAME_WINORDER_SECOND = "doublekou_sp_second.png"
local KW_IMG_NAME_WINORDER_THREE = "doublekou_sp_three.png"

function PlayerHeadNode:getCSBPath()
    if CF.roomData:isNewUI() then
        if self._localSeat ==CF.roomData:getSelfLocalSeat() then
            return "cocosStudio/DoubleKou/GameLayer/CSB/PlayerHead/PlayerHeadBaseSelfNew.csb"
        else
            return "cocosStudio/DoubleKou/GameLayer/CSB/PlayerHead/PlayerHeadBaseNew.csb"
        end
    else
        return "cocosStudio/DoubleKou/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
    end
end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_WIN_ORDER"] = { varName = "_winOrderImg" }
    bindInfo["_KW_PANEL_LEFT_CARD_NUM"] = { varName = "_leftCardNumPanel" }
    bindInfo["_KW_IMG_LEFT_CARD_NUM_BG"] = { varName = "_imgLeftCardNumBG" }
    bindInfo["_KW_TEXT_LEFT_CARD_NUM"] = { varName = "_leftCardNumText" }
    bindInfo["_KW_TEXT_OUT_CARD_TIME"] = { varName = "_outCardTimeText" }
    bindInfo["_KW_TEXT_GONGXIAN"] = { varName = "_gongXianText" }
    bindInfo["_KW_BTN_SWAP_SEAT"] = { varName = "_swapSeatBtn" , type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSwapSeatBtnClicked"}
    bindInfo["_KW_BTN_ADDGOLD"] = { varName = "_btnAddGold" , type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShop"}
    bindInfo["_KW_PANEL_ALARM_ANI"] = { varName = "_alarmPanel" }
    bindInfo["_KW_IMG_GONGXIAN"] = { varName = "_gongXianImg" }
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local eventTable = PlayerHeadNode.super.getProxyEvents(self) or {}
    eventTable[#eventTable+1] = {module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_BACK_STYLE_CHANGED", callBack = "onUpdateLeftCardBg"}
    return eventTable
end

function PlayerHeadNode:initChildren()
    self._leftCardNumPanel:setVisible(false)
    self._winOrderImg:setVisible(false)
    self._hostFlagSp:setVisible(false)
    self._wireBreakPanel:setVisible(false)
    self._swapSeatBtn:setVisible(false)
    PlayerHeadNode.super.initChildren(self)
end

function PlayerHeadNode:updateLayoutPosition()
    self._hostFlagSp:setPositionX(-50)
    if CF.roomData:isNewUI() then
        if self._localSeat ~= CF.roomData:getSelfLocalSeat() then
            self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS_NEW[self._localSeat])
            if self._gongXianImg then
                self._gongXianImg:setPosition(self.GONGXIAN_BG_POS[self._localSeat])
            end
        end
    else
        self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
        self._nameAndScoreNode:setPosition(self.NAME_AND_SCORE_POS[self._localSeat])
        local nameScorePos = self.NAME_AND_SCORE_POS[self._localSeat]
        if self._nameAndScoreBG then
            self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 55, nameScorePos.y - 10))
            if self._localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM or self._localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
                self._nameAndScoreBG:setPosition(cc.p(nameScorePos.x + 73, nameScorePos.y - 1))
            end
        end
    end
end

--设置剩余牌数
function PlayerHeadNode:setLeftCardNum(nCardNum)
    local lastNumStr = self._leftCardNumText:getString()
    if #lastNumStr > 0 and tonumber(lastNumStr) > 10 and tonumber(nCardNum) <= 10 and tonumber(nCardNum) > 0 then
        self:showAlarmAni(true)
    end
    self._leftCardNumText:setString(nCardNum)
    local isShow = nCardNum > 0
    if CF.roomData:isNewUI() and isShow then
        isShow = self._localSeat ~= CF.roomData:getSelfLocalSeat()
    end
    self._leftCardNumPanel:setVisible(isShow)
    if isShow then
        self:onUpdateLeftCardBg()
    end
end

function PlayerHeadNode:moveLeftCardNumOpenCard(bOpen)
    if CF.roomData:isNewUI() then
        self._leftCardNumPanel:setPosition(bOpen and self.LEFT_CARD_NUM_OPENCARD_POS_NEW[self._localSeat] or self.LEFT_CARD_NUM_POS_NEW[self._localSeat])
        if self._gongXianImg then
            self._gongXianImg:setPosition(bOpen and self.GONGXIAN_BG_POS_OPEN[self._localSeat] or self.GONGXIAN_BG_POS[self._localSeat])
        end
        return
    end
    self._leftCardNumPanel:setPosition(bOpen and self.LEFT_CARD_NUM_OPENCARD_POS[self._localSeat] or self.LEFT_CARD_NUM_POS[self._localSeat])
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

function PlayerHeadNode:setGongXian(gongXian)
    local gameType = CF.game:getModule("GameLayer"):getGameData():getGameType()
    if gameType ~= CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN and gongXian ~= 0 then
        local gongXianStr = CF.roomData:isNewUI() and gongXian or "贡："..gongXian
        self._gongXianText:setString(gongXianStr)
    else
        self._gongXianText:setString(CF.roomData:isNewUI() and 0 or "")
    end
end

function PlayerHeadNode:getGongXianText()
    return self._gongXianText
end

function PlayerHeadNode:showSwapSeatBtn(bShow)
    self._swapSeatBtn:setVisible(bShow)
end

function PlayerHeadNode:onSwapSeatBtnClicked(send, eventType)
    CF.msgManager:sendRequestSwapSeat(self._seatId)
    CF.msgManager:sendRespondSwapSeat(true)
end



function PlayerHeadNode:showAlarmAni(bShow)
    self._alarmPanel:removeAllChildren()
    if bShow then
        self._alarmPanel:setPosition(self.ALARM_POS[self._localSeat])
        local AnimationManager = CF.gameRequire("Manager.AnimationManager")
        AnimationManager.playAlarmJsonArmature(self._alarmPanel) 
    end
end

function PlayerHeadNode:clearGuideTip()
    self._posPropAni:removeChildByName(KW_LEFT_TIP)
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

function PlayerHeadNode:getGondXianNewNode()
    return self._gongXianImg
end

function PlayerHeadNode:onUpdateLeftCardBg()
    if CF.settingData and CF.settingData:getDoubleKouBackStyle() == CF.settingData.tagInfo.BACK_TYPE.index then
        if self._imgLeftCardNumBG then
            local CardLayerDefine = CF.gameRequire("Modules.CardLayer.CardLayerDefine")
            cc.SpriteFrameCache:getInstance():addSpriteFrames(CardLayerDefine.KW_PATH_XG_CARD_PLIST)
            self._imgLeftCardNumBG:loadTexture("doublekou_back_xg.png", ccui.TextureResType.plistType)
        end
        if self._leftCardNumText and self._leftCardNumText.enableOutline then
            self._leftCardNumText:enableOutline(cc.c3b(0x0A4, 0x2D, 0x08), 4)
        end
    else
        if self._imgLeftCardNumBG then
            self._imgLeftCardNumBG:loadTexture("img_game_pai.png", ccui.TextureResType.plistType)
        end
        if self._leftCardNumText and self._leftCardNumText.enableOutline then
            self._leftCardNumText:enableOutline(cc.c3b(0x31, 0x6c, 0xb3), 4)
        end
    end
end

return PlayerHeadNode W$  