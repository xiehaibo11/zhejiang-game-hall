local WinLostTotalView = CF.gameClass("WinLostTotalView", CF.ViewBase)
local CardEnum = CF.gameRequire("Define.CardEnum")

function WinLostTotalView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/WinLostTotal.csb"
end

function WinLostTotalView:getBindingInfo()
    return {
        ["_POS_PANEL_ANI_2"] = {varName = "_posPanelAni2"},
        ["_POS_PANEL_ANI_1"] = {varName = "_posPanelAni1"},
        ["_KW_POS_RESULT_INFO_"] = {varName = "_posResultInfo", beginIndex = 1, endIndex = 4},
        ["_KW_RESULT_ITEM"] = {varName = "_resultItem"},
        ["_KW_RESULT_ITEM_BIG"] = {varName = "_resultItemBig"},
        ["_KW_BTN_CHALLENGE"] = {varName = "_btnChallenge", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnChallenge"},
        ["_KW_BTN_CHALLENGE_RED_POINT"] = {varName = "_btnChallengeRedPoint"},
        ["_BTN_LOOK_TABLE"] = {varName = "_btnLookTable", type = CF.UI_TYPE.BUTTON, onTouch = "onBtnLookTable"},
        ["_BTN_GAME_DETAIL"] = {varName = "_btnGameDetail", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnGameDetail"},
        ["_BTN_EXIT"] = {varName = "_btnExit", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnExit"},
        ["_BTN_CONTINUE"] = {varName = "_btnContinue", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnContinue"},
        ["_KW_BTN_UNLIMIT"] = {varName = "_KW_BTN_UNLIMIT", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnUnLimit"},
        ["_KW_TEXT_UNLIMIT"] = {varName = "_KW_TEXT_UNLIMIT"},
        ["_KW_BTN_UNLIMITED_GIFT"] = {varName = "_btnUnlimitedGift", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnUnlimitedGift"},
        ["_KW_BTN_UNLIMITED_GIFT_RED_POINT"] = {varName = "_btnUnlimitedGiftRedPoint"},
        ["_KW_UNLIMITED_GIFT_TIME"] = {varName = "_unlimitedGiftTime"},
        ["_KW_UNLIMITED_PANEL_NEW"] = {varName = "_unlimitedPanelNew"}
    }
end

function WinLostTotalView:getProxyEvents()
    return {
        {module = CF.game:getModule("CenterBtns"), eventKeyName = "EVENT_GAME_JOIN_50_MATCH_LIST", callBack = "onClearTable"},
        {module = XH.lobby:getModule("DarkShuangKouChallenge"), eventKeyName = "EVENT_CHALLENGE_RED_POINT", callBack = "updateChallengeRedPoint"},
        {module = XH.lobby:getModule("UnlimitGoldAct"), eventKeyName = "JOIN_GOLD_ROOM", callBack = "close"},
        {module = XH.lobby:getModule("UnlimitedGift"), eventKeyName = "EVENT_UNGIFT_REFRESH_VIEW", callBack = "updateUnlimitedRedPoint"}
    }
end

function WinLostTotalView:getAdaptationConfig()
    return {
        {node = self._btnLookTable, bRight = false, bHalf = false},
        {node = self._btnGameDetail, bRight = false, bHalf = false},
        {node = self._btnExit, bRight = false, bHalf = false}
    }
end

function WinLostTotalView:ctor(param, playerInfo)
    param = param or {}
    WinLostTotalView.super.ctor(self, param)
    CF.game:getModule("ChangeLevel"):show()
    self._playerInfo = playerInfo or {}
    self:initUI(param)
    XH.lobby:getModule("DarkShuangKouChallenge"):reqAllChallengeInfo()
    XH.lobby:getModule("UnlimitedGift"):reqWuXianJingXiInfo()
    self:updateChallengeRedPoint()
    self:updateUnlimitedRedPoint()
    CF.soundManager:playSoundResultPop()

    if CF.roomData:isGoldRoom() then
        local selfSeat = CF.roomData:getSelfSeat()
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
            if not CF or not CF.game or not param or not param.iScore then
                return
            end
            for i = 0, #param.iScore do
                if i == selfSeat and param.iScore[i] > 0 then
                    local shareWin = CF.game:getModule("ShareWin")
                    if shareWin and shareWin.updateShowShareWinView then
                        shareWin:updateShowShareWinView(param.iScore[i])
                    end
                    break
                end
            end
            XH.lobby:getModule("Share"):reqLuckyBag(true)
        end)))
    end
end

function WinLostTotalView:updateChallengeRedPoint()
    local isOpen = XH.lobby:getModule("DarkShuangKouChallenge"):checkActivityOpen()
    self._btnChallenge:setVisible(isOpen)
    if isOpen then
        self._btnChallenge:ignoreContentAdaptWithSize(true)
        local haveRed = XH.lobby:getModule("DarkShuangKouChallenge"):checkHaveRedPoint()
        self._btnChallengeRedPoint:setVisible(haveRed)
    end
end

function WinLostTotalView:updateUnlimitedRedPoint()
    local isOpen = XH.lobby:getModule("UnlimitedGift"):getActData() ~= nil
    self._btnUnlimitedGift:setVisible(isOpen)
    if isOpen then
        self._btnUnlimitedGift:ignoreContentAdaptWithSize(true)
        local haveRed = XH.lobby:getModule("UnlimitedGift"):hasReward()
        self._btnUnlimitedGiftRedPoint:setVisible(haveRed)
        self._unlimitedPanelNew:setVisible(haveRed)
        local lefttime = XH.lobby:getModule("UnlimitedGift"):getLeftTime()
        if lefttime > 0 then
            self._unlimitedGiftTime:setText(XH.StringTool.getLeftTimeStr(lefttime,true))
        else
            self._unlimitedGiftTime:setText("")
        end
    end
end

function WinLostTotalView:initUI(param)
    local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/Score/"
    local fileName = "zzb_ap_jsjm"

    self._resultItem:setVisible(false)
    self._resultItemBig:setVisible(false)

    CF.SpineManager:playAniWithComplete(self._posPanelAni2, spinePath, fileName, "cx2", false, "loop2", true)
    CF.SpineManager:playAniWithComplete(self._posPanelAni1, spinePath, fileName, "cx", false, "loop", true)

    for i = 1, 4 do
        self["_posResultInfo" .. i]:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_jsjm_sz.json", animationName = "cx", boneName = "sl" .. i, slotName = "sl" .. i})
    end
    self._btnLookTable:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_jsjm_sz.json", animationName = "cx", boneName = "an", slotName = "an"})
    self._btnGameDetail:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_jsjm_sz.json", animationName = "cx", boneName = "an", slotName = "an"})
    self._btnExit:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_jsjm_sz.json", animationName = "cx", boneName = "tui", slotName = "tui"})
    self._btnContinue:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_jsjm_sz.json", animationName = "cx", boneName = "btn", slotName = "btn"})

    local getJiaName = function(seat)
        local selfSeat = CF.roomData:getSelfSeat()
        return (selfSeat - seat + 4) % 4
    end

    local datas = {}
    for i = 0, #param.iScore do
        local data = {seat = i, localSeat = CF.roomData:seatToLocal(i), score = param.iScore[i], cardType = param.iMaxCardType[i], cnt = param.iAttackTimes[i], bankrupt = param.iBankruptcy[i]}
        table.insert(datas, data)
    end
    table.sort(
        datas,
        function(a, b)
            return a.score > b.score
        end
    )

    for i = 1, 4 do
        local playerData = CF.roomData:getPlayerDataBySeatId(datas[i].seat)

        local isWin = datas[i].score >= 0
        local isBankrupt = datas[i].bankrupt == 1
        local itemClone
        if i == 1 then
            itemClone = self._resultItemBig:clone()
        else
            itemClone = self._resultItem:clone()
        end
        self["_posResultInfo" .. i]:addChild(itemClone)
        itemClone:setVisible(true)
        itemClone:setPosition(cc.p(0, 0))
        local jiaText = itemClone:getChildByName("_KW_IMG_JIA_TEXT")
        if jiaText then
            jiaText:loadTexture(string.format("DarkShuangKouWinLost_Img_jia_%d.png", getJiaName(datas[i].seat)), ccui.TextureResType.plistType)
            jiaText:ignoreContentAdaptWithSize(true)
        end

        if i ~= 1 then
            local imgBack = itemClone:getChildByName("_KW_IMG_ITEM_BACK")
            if imgBack then
                if isWin then
                    imgBack:loadTexture("DarkShuangKouWinLost_Img_win_zhong.png", ccui.TextureResType.plistType)
                else
                    imgBack:loadTexture("DarkShuangKouWinLost_Img_shu_zhong.png", ccui.TextureResType.plistType)
                end
            end
        end

        local imgBack1 = itemClone:getChildByName("_KW_IMG_ITEM_BACK_1")
        if imgBack1 then
            if isWin then
                imgBack1:loadTexture("DarkShuangKouWinLost_Img_tiao_1.png", ccui.TextureResType.plistType)
                imgBack1:setScale(1)
            else
                imgBack1:loadTexture("DarkShuangKouWinLost_Img_tiao_2.png", ccui.TextureResType.plistType)
                imgBack1:setScale(1)
            end
        end

        local jiaBack = itemClone:getChildByName("_KW_IMG_JIA_BACK")
        if jiaBack then
            jiaBack:setVisible(getJiaName(datas[i].seat) ~= 0)
            if isWin then
                jiaBack:setColor(cc.c3b(0xCA, 0x2B, 0x16))
            else
                jiaBack:setColor(cc.c3b(0x38, 0x30, 0x98))
            end
        end

        local resultText = itemClone:getChildByName("_KW_TEXT_RESULT_INFO")
        if resultText then
            if datas[i].cnt > 0 then
                resultText:setString(string.format("%s   暴击x%d", CardEnum.getCardTypeInfoByCardTypeID(datas[i].cardType).name, datas[i].cnt))
            else
                resultText:setString(string.format("%s", CardEnum.getCardTypeInfoByCardTypeID(datas[i].cardType).name))
            end
            resultText:setVisible(true)
            if isWin then
                resultText:setTextColor(cc.c3b(0xFF, 0xEB, 0x9B))
                resultText:enableOutline(cc.c3b(0xD7, 0x3f, 0x21), 3)
            else
                resultText:setTextColor(cc.c3b(0xFF, 0xFF, 0xFF))
                resultText:enableOutline(cc.c3b(0x32, 0x49, 0xAE), 3)
            end
        end

        local resultScore = itemClone:getChildByName("_KW_TEXT_SCORE")
        if resultScore then
            local scoreStr = CF.StringTool.numberToStringNew(datas[i].score, 2)
            if isWin then
                scoreStr = "+" .. scoreStr
                resultScore:setFntFile("DarkShuangKou/Font/Txt_yin-export.fnt")
            else
                resultScore:setFntFile("DarkShuangKou/Font/Txt_shu-export.fnt")
            end
            resultScore:setString(scoreStr)
        end

        local bankruptImg = itemClone:getChildByName("_KW_IMG_BANKRUPT")
        if bankruptImg then
            bankruptImg:setVisible(isBankrupt)
        end

        local posLight = itemClone:getChildByName("_KW_POS_LIGHT")
        if posLight then
            local aniName = "sg2"
            if i == 1 then
                aniName = "sg1"
            end
            if datas[i].localSeat == CF.roomData:getSelfLocalSeat() then
                CF.SpineManager:playAni(posLight, spinePath, fileName, aniName, false)
            end
        end

        local imgKuang = itemClone:getChildByName("_KW_IMG_KUANG")
        if imgKuang then
            imgKuang:setVisible(datas[i].localSeat == CF.roomData:getSelfLocalSeat())
        end

        local headUrl = ""
        if playerData then
            headUrl = playerData:getAvatarUrl()
        elseif self._playerInfo[datas[i].seat] then
            headUrl = self._playerInfo[datas[i].seat].headUrl
        end
        local headFrame = itemClone:getChildByName("_KW_IMG_HEAD_FRAME")
        if headFrame and headUrl ~= "" then
            local url = headUrl
            local headImg = headFrame:getChildByName("head" .. i)
            if not headImg then
                local size = headFrame:getContentSize()
                headImg = CF.RemoteImage.new()
                headImg:setPosition(size.width / 2 - 0.5, size.height / 2 + 0.3)
                headImg:ignoreContentAdaptWithSize(false)
                headImg:setContentSize(size.width - 7, size.height - 7)
                headImg:setName("head" .. i)
                headImg:addTo(headFrame)
            end
            headImg:setUrl(url)
        end

        local nickName = ""
        if playerData then
            nickName = playerData:getNickName()
        elseif self._playerInfo[datas[i].seat] then
            nickName = self._playerInfo[datas[i].seat].nickname
        end
        local textName = itemClone:getChildByName("_KW_TEXT_NICKNAME")
        if textName and nickName then
            textName:setString(nickName)
        end
    end

    self:startSchedule()
    if CF.roomData:isTeaching() then
        self._btnLookTable:setVisible(false)
        self._btnGameDetail:setVisible(false)
        self._KW_BTN_UNLIMIT:setVisible(false)
    end
end

function WinLostTotalView:onBtnLookTable(sender, eventType)
    if eventType == ccui.TouchEventType.began then
        self:setVisible(false)
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        self:setVisible(true)
    end
end

function WinLostTotalView:onBtnGameDetail()
    CF.game:getModule("GameLayer"):showGameRevenue()
end

function WinLostTotalView:onBtnExit()
    CF.game:leaveGame()
end

function WinLostTotalView:onBtnContinue()
    CF.roomData:clearAllPlayerData(true)
    CF.roomData:clearPlayerHeartTime()

    self:close()
    CF.game:getModule("CenterBtns"):onStartGameEvent()
    if CF.roomData:isTeaching() then
        XH.NewThrowDataManager:throwData(
            XH.NewThrowDataDefine.yxyd25031002,
            {page_item_id = "继续游戏", block_item_id = "13", game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())}
        )
        CF.game:getModule("Teaching"):goPlay()
    end
end

function WinLostTotalView:onBtnChallenge()
    CF.viewManager:openView("DarkShuangKouChallengeView")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohtz25040301, {page = "金币游戏结算"})
end

function WinLostTotalView:onBtnUnlimitedGift()
    self:updateUnlimitedRedPoint()
    XH.lobby:getModule("UnlimitedGift"):openUnlimitedGift()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25050602, {page = "金币游戏结算"})
end

function WinLostTotalView:onClearTable()
    self:close()
end

function WinLostTotalView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

function WinLostTotalView:onBtnUnLimit()
    XH.viewManager:openView("UnLimitGoldActView", nil, {})
end

function WinLostTotalView:flushLeftTime()
    if CF == nil or CF.roomData == nil then
        return
    end
    local confId = XH.goldConfigManager:getConfIDByGameID(CF.roomData:getGameID(), CF.roomData:getChairs())
    local roominfo = XH.lobby:getModule("GoldNew"):getGoldRoomInfoByLeisureID(confId)
    local session_id = CF.roomData:getRoomLevel()
    local leftTime = XH.lobby:getModule("UnlimitGoldAct"):getRemainTime(2)
    self._KW_BTN_UNLIMIT:setVisible(leftTime > 0 and XH.lobby:getModule("UnlimitGoldAct"):isSupportUse(roominfo, session_id, confId))
    if self._isReport == nil and leftTime > 0 and XH.lobby:getModule("UnlimitGoldAct"):isSupportUse(roominfo, session_id, confId) then
        self._isReport = true
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25050703, { page = "金币游戏结算" })
    end
    local hour = math.floor(leftTime / 3600)
    local min = math.floor((leftTime - hour * 3600) / 60)
    local sec = leftTime % 60
    self._KW_TEXT_UNLIMIT:setString(string.format("%02d", hour) .. ":" .. string.format("%02d", min) .. ":" .. string.format("%02d", sec))
end

function WinLostTotalView:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function WinLostTotalView:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function WinLostTotalView:onCleanup()
    self:removeSchedule()
    WinLostTotalView.super.onCleanup(self)
end

return WinLostTotalView
   �@  