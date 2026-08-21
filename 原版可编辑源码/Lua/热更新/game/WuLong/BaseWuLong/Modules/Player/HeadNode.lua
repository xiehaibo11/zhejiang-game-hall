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
    cc.p(-40, -100),
    cc.p(70, 5),
    cc.p(-70, -100),
    cc.p(70, 5),
}

local KW_LEFT_TIP = "LEFT_TIP"
local KW_TIP_TEXT = "再给一点时间考虑下"

local KW_IMG_NAME_WINORDER_FIRST = "WuLong/Img/wulong/Icon_ty.png"
local KW_IMG_NAME_WINORDER_SECOND = "WuLong/Img/wulong/Icon_ry.png"
local KW_IMG_NAME_WINORDER_THREE = "WuLong/Img/wulong/Icon_sy.png"

function PlayerHeadNode:getCSBPath()
    return "cocosStudio/WuLong/GameLayer/CSB/PlayerHead/PlayerHeadBase.csb"
end

function PlayerHeadNode:onTableBgChanged()

end

function PlayerHeadNode:getBindingInfo()
    local bindInfo = PlayerHeadNode.super.getBindingInfo(self)
    bindInfo["_KW_IMG_FLAG"] = { varName = "_bankerFlagSp" }
    bindInfo["_KW_IMG_WIN_ORDER"] = { varName = "_winOrderImg" }
    bindInfo["_KW_PANEL_LEFT_CARD_NUM"] = { varName = "_leftCardNumPanel" }
    bindInfo["_KW_IMG_LEFT_CARD_NUM_BG"] = { varName = "_imgLeftCardNumBG" }
    bindInfo["_KW_TEXT_LEFT_CARD_NUM"] = { varName = "_leftCardNumText" }
    bindInfo["_KW_TEXT_OUT_CARD_TIME"] = { varName = "_outCardTimeText" }
    bindInfo["_KW_TEXT_JIANGSHU"] = { varName = "_jiangShuText" }   -- 奖数
    bindInfo["_KW_TEXT_JIANGFEN"] = { varName = "_jiangFenText" }   -- 奖分
    bindInfo["_KW_TEXT_JIANFEN"] = { varName = "_jianFenText" }     -- 捡分
    bindInfo["_KW_BTN_SWAP_SEAT"] = { varName = "_swapSeatBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSwapSeatBtnClicked" }
    bindInfo["_KW_BTN_ADDGOLD"] = { varName = "_btnAddGold", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShop" }
    bindInfo["_KW_PANEL_ALARM_ANI"] = { varName = "_alarmPanel" }
    bindInfo["_KW_IMG_GONGXIAN"] = { varName = "_gongXianImg" }
    return bindInfo
end

function PlayerHeadNode:getProxyEvents()
    local eventTable = PlayerHeadNode.super.getProxyEvents(self) or {}
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"):getGameData(), eventKeyName = "EVENT_BANKER_CHANGED", callBack = "updateBankerFlag" }
    eventTable[#eventTable + 1] = { module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_BACK_STYLE_CHANGED", callBack = "onUpdateLeftCardBg" }
    eventTable[#eventTable + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_FLY_ANI", callBack = "onFlyGoldAni" }
    return eventTable
end

function PlayerHeadNode:updateUI()
    self._nicknameLabel:setString(CF.StringTool.cutStringByLength(self._playerData:getNickName()))
    self:updateScore()
    self:updateImg()
    self:updateTrust()
end

function PlayerHeadNode:initChildren()
    self._leftCardNumPanel:setVisible(false)
    self._winOrderImg:setVisible(false)
    self._hostFlagSp:setVisible(false)
    self._wireBreakPanel:setVisible(false)
    self._swapSeatBtn:setVisible(false)
    PlayerHeadNode.super.initChildren(self)
    self:updateBankerFlag()
end

function PlayerHeadNode:updateLayoutPosition()
    self._hostFlagSp:setPositionX(-50)
    self._leftCardNumPanel:setPosition(self.LEFT_CARD_NUM_POS[self._localSeat])
    self._nameAndScoreNode:setPosition(self.NAME_AND_SCORE_POS[self._localSeat])
end

--设置剩余牌数
function PlayerHeadNode:setLeftCardNum(nCardNum)
    if CF.roomData:isPlayBack() then
        self._leftCardNumPanel:setVisible(false)
        return
    end
    local lastNumStr = self._leftCardNumText:getString()
    if #lastNumStr > 0 and tonumber(lastNumStr) > 10 and tonumber(nCardNum) <= 10 and tonumber(nCardNum) > 0 then
        self:showAlarmAni(true)
    end
    self._leftCardNumText:setString(nCardNum)
    local isShow = nCardNum > 0
    if self._localSeat ~= CF.GameDefine.LOCAL_SEAT.BOTTOM and not CF.game:getModule("GameLayer"):getGameData():getShowLeft() then
        isShow = false
    end
    self._leftCardNumPanel:setVisible(isShow)
    if isShow then
        self:onUpdateLeftCardBg()
    end
end

function PlayerHeadNode:moveLeftCardNumOpenCard(bOpen)
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

function PlayerHeadNode:setJiang(iScore1, iScore2, iScore3)
    self._jiangShuText:setString(iScore1)
    self._jiangFenText:setString(iScore2)
    self._jianFenText:setString(iScore3)
end

function PlayerHeadNode:getGongXianText()
    return self._jiangShuText
end

function PlayerHeadNode:showSwapSeatBtn(bShow)
    self._swapSeatBtn:setVisible(bShow)
end

function PlayerHeadNode:onSwapSeatBtnClicked(send, eventType)

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
            self._leftCardNumText:enableOutline(cc.c3b(164, 45, 8), 4)
        end
    else
        if self._imgLeftCardNumBG then
            self._imgLeftCardNumBG:loadTexture("img_game_pai.png", ccui.TextureResType.plistType)
        end
        if self._leftCardNumText and self._leftCardNumText.enableOutline then
            self._leftCardNumText:enableOutline(cc.c3b(49, 108, 179), 4)
        end
    end
end

function PlayerHeadNode:setScoreText(playerScore)
    self._scoreLabel:setString(playerScore)
    if CF.roomData:isGoldRoom() then
        self._scoreLabel:setString(self:transferScore(playerScore))
    end
end

function PlayerHeadNode:calculateAngleBetweenPoints(pointA, pointB)
    local dx = pointB.x - pointA.x -- 首先计算两点间的差分
    local dy = pointB.y - pointA.y
    local angleInRadians = math.atan2(dy, dx) -- 使用atan2计算角度的弧度值
    local angleInDegrees = angleInRadians * 180 / math.pi -- 将弧度转换为度
    return angleInDegrees
end

local KW_PATH_JSON_BOMB_LINE_COUNT = "animation/GameCommon/PokerGame/Ky_hd/"
function PlayerHeadNode:onFlyGoldAni(event)
    local msg = event.msg.msg
    local seat = msg.seat
    local flyPos = msg.pos
    local curSeat = CF.roomData:localToSeat(self._localSeat)
    if curSeat ~= seat then
        return
    end
    local beginPos = self._jianFenText:getParent():convertToNodeSpace(flyPos)
    local lastPosX = self._jianFenText:getPositionX()
    local lastPosY = self._jianFenText:getPositionY()
    if self._localSeat == 1 then
        lastPosX = lastPosX - 80
        lastPosY = lastPosY - 30
    elseif self._localSeat == 2 then
        lastPosX = lastPosX - 80
        lastPosY = lastPosY - 40
    elseif self._localSeat == 3 then
        lastPosX = lastPosX + 30
        lastPosY = lastPosY - 80
    else
        lastPosX = lastPosX - 80
        lastPosY = lastPosY - 20
    end
    local params2 = { path = KW_PATH_JSON_BOMB_LINE_COUNT, tex = "Ky_hd.json", ske = "Ky_hd.atlas", armatureName = "animation", scale = 1 }
    local armatureEx2 = sp.SkeletonAnimation:create(params2.path .. params2.tex, params2.path .. params2.ske, 1)
    if armatureEx2 then
        local rotation = self:calculateAngleBetweenPoints(cc.p(lastPosX, lastPosY), beginPos)
        armatureEx2:setRotation(270 - rotation)
        armatureEx2:setAnimation(0, "animation", false)
        local flyPos = msg.pos
        armatureEx2:setPosition(cc.p(beginPos.x, beginPos.y))
        self._jianFenText:getParent():addChild(armatureEx2)
        armatureEx2:runAction(
        cc.Sequence:create(
        cc.MoveTo:create(1, cc.p(lastPosX, lastPosY)),
        cc.DelayTime:create(0.5),
        cc.CallFunc:create(
        function()
            armatureEx2:delayRemoveFromParent()
        end
        )
        )
        )
    end
end

function PlayerHeadNode:updateBankerFlag()
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local isBanker = gameData:isBanker(self._seatId)
    if self._bankerFlagSp then
        self._bankerFlagSp:setVisible(isBanker)
    end
end

return PlayerHeadNode