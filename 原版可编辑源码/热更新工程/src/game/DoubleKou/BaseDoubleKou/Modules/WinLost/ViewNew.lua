local AnimationManager = CF.gameRequire("Manager.AnimationManager")
local GameWinLostLayerNew = CF.gameClass("GameWinLostLayerNew", CF.ViewBase)

local ENUM_WIN_ORDER_TYPE = {
    KW_ENDTYPE_PINGKOU = {1, 0},
    KW_ENDTYPE_DANKOU = {1, 3},
    KW_ENDTYPE_SHUANGKOU = {1, 2}
}

local KW_NUM_MIN_XIANGFAN = 4
local KW_PATH_RESOUCE_FONT = "res/cocosStudio/Common/Font"
--字体
local KW_LOST_TEXT_FNT = "jiesuan_num3-export.fnt"
local KW_WIN_TEXT_FNT = "jiesuan_num2-export.fnt"

local KW_PATH_EIGHTKING_END_ANI = "animation/GameCommon/PokerGame/zzb_bw_js/"

local ANIMATION_ENDTYPE = {
    {animationName = "sb_dk_cx", loopAnimationName = "sb_dk_loop", isWin = false, endType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_DANKOU},
    {animationName = "sb_sk_cx", loopAnimationName = "sb_sk_loop", isWin = false, endType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_SHUANGKOU},
    {animationName = "sb_pk_cx", loopAnimationName = "sb_pk_loop", isWin = false, endType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_PINGKOU},
    {animationName = "sl_dk_cx", loopAnimationName = "sl_dk_loop", isWin = true, endType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_DANKOU},
    {animationName = "sl_sk_cx", loopAnimationName = "sl_sk_loop", isWin = true, endType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_SHUANGKOU},
    {animationName = "sl_pk_cx", loopAnimationName = "sl_pk_loop", isWin = true, endType = CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_PINGKOU},
}

function GameWinLostLayerNew:getCSBPath()
    return "res/cocosStudio/DoubleKou/GameLayer/CSB/GameWinLostNew.csb"
end

function GameWinLostLayerNew:ctor()
    GameWinLostLayerNew.super.ctor(self)
    self:initUI()

    if CF.roomData:isGoldRoom() then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function()
            XH.lobby:getModule("Share"):reqLuckyBag(true)
        end)))
    end
end

function GameWinLostLayerNew:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_rootLayer"},
        ["_KW_PANEL_WINLOST_BG"] = {varName = "_panelBG"},
        ["_KW_PANEL_WINLOST_CENTER"] = {varName = "_panelCenter"},
        ["_KW_PANEL_END_ANI"] = {varName = "_panelAni"},
        ["_KW_UI_WINLOST_"] = {varName = "_uiPlayer_", beginIndex = 1, endIndex = 4},
        ["_KW_KICK_OUT_CLOCK"] = {varName = "_uiKickOut"},
        ["_KW_CLOCK_TEXT"] = {varName = "_uNextTime"},
        ["_KW_BTN_SEE_TABLE"] = {varName = "_btnCheckTable", type = CF.UI_TYPE.BUTTON, onTouch = "onCheckTableClicked"},--查看牌桌
        ["_KW_BTN_CONTINUE"] = {varName = "_btnContinueGame", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onContinueClicked"},--继续游戏
        ["_KW_BTN_CHANGETABLE"] = {varName = "_btnChangeTable", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onChangeTableClicked"},--继续游戏
        ["_KW_TEXT_TIPS"] = {varName = "_textTips"},
        ["_KW_PANEL_BTNS"] = {varName = "_panelBtns"},
        ["_KW_IMG_CENTER_DI"] = {varName = "_KW_IMG_CENTER_DI"},
        ["_KW_IMG_CHAODI_TITLE"] = {varName = "_KW_IMG_CHAODI_TITLE"},
        ["_KW_IMG_TAOPAO_TITLE"] = {varName = "_KW_IMG_TAOPAO_TITLE"},
        ["_KW_BTN_SETTING"] = {varName = "_btnSetting", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSetBtnClicked"},--打开设置界面

        ["_KW_POS_HANDCARD_"] = {varName = "_scorePos", beginIndex = 1, endIndex = 4},
        -- 无限金币卡
        ["_KW_BTN_UNLIMIT"] = {varName = "_KW_BTN_UNLIMIT", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnUnLimit"},
        ["_KW_TEXT_UNLIMIT"] = {varName = "_KW_TEXT_UNLIMIT"},
    }
end

function GameWinLostLayerNew:initUI()
end

function GameWinLostLayerNew:getProxyEvents()
    return {
        {module = CF.goldManager, eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_WINLOST_CLOCK", callBack = "onClock"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_CLOSE_CAPTURE_SCREEN_VIEW", callBack = "showGoldRoomBtn"},
        {module = CF.game:getModule("Share"), eventKeyName = "EVENT_SHARE_HIDE_UNUSE_BTNS", callBack = "hideGoldRoomBtn"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHOW_TRUST_PUNISHMENT", callBack = "updateTrustPunishment"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHOW_RESULT_YXBD", callBack = "updateResultYxbd"},
    }
end

function GameWinLostLayerNew:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 56)
    self:setName("GameWinLostLayerNew")
end

function GameWinLostLayerNew:setWinLostData(winLostData)
    self._winLostData = winLostData

    self._sCaiXiang = winLostData:getCaiXiangData()
    self._iCaiXiang = winLostData:getIsCaiXiang()
    self._bLastPlayCount = winLostData:getIsLastPlayCount()
    self._sEndType = winLostData:getEndType()
    self._sWinMut = winLostData:getWinMut()
    self._sWinOrder = winLostData:getWinOrder()
    self._tScore = winLostData:getPlayerScore()
    self._playerName = winLostData:getPlayerName()
    self._sGong = winLostData:getGongData()
    self._winSeat = self:getWinSeat() or {}
    self._bPoChan = winLostData:getIsPoChan() or {}
    self._sExtraBonus = winLostData:getExtraBonus() or {}
    self._nResultYxbd = winLostData:getResultYxbd() or {}
    self._isWin = false
    
    if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO or self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI then
        self._KW_IMG_CENTER_DI:setVisible(true)
        self._KW_IMG_CHAODI_TITLE:setVisible(self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI)
        self._KW_IMG_TAOPAO_TITLE:setVisible(self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO)
        self:updatePlayerInfoChaoDi()
    else
        self:updatePlayerInfo()
        self:updateTrustPunishment()
        self:updateResultYxbd()
    end
    self:showKickOutClock(10)
end

function GameWinLostLayerNew:playAnimation()
    local index = 0
    for i = 1, #ANIMATION_ENDTYPE do
        if ANIMATION_ENDTYPE[i].isWin == self._isWin and ANIMATION_ENDTYPE[i].endType == self._sEndType then
            index = i
        end
    end
    if index > #ANIMATION_ENDTYPE or index == 0 then
        return
    end
    local animationInfo = ANIMATION_ENDTYPE[index]
    AnimationManager.playNewEndAni(self._panelAni, animationInfo.animationName, animationInfo.loopAnimationName, animationInfo.isWin)

    -- 播放玩家移动以及按钮显示效果
    local animationName = self._isWin and "sl_pk_cx" or "sb_sk_cx"
    for i=1, CF.roomData:getMaxPlayer() do
        if self["_uiPlayer_" .. i] then
            self["_uiPlayer_" .. i]:setOpacity(0)
            local params = { jsonFilePath = KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js_animation.json", animationName = animationName, isLoop = false, boneName = tostring(i), slotName = tostring(i) }
            self["_uiPlayer_" .. i]:tryAddLuaComponent(cc.ext.CompSpineAction, params)
        end
    end
    self._uiKickOut:setOpacity(0)
    self._panelBtns:setOpacity(0)
    self._btnSetting:setOpacity(0)
    self._uiKickOut:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js_animation.json", animationName = animationName, isLoop = false, boneName = "btn", slotName = "btn" })
    self._panelBtns:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js_animation.json", animationName = animationName, isLoop = false, boneName = "btn", slotName = "btn" })
    self._btnSetting:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = KW_PATH_EIGHTKING_END_ANI .. "zzb_qb_js_animation.json", animationName = animationName, isLoop = false, boneName = "btn", slotName = "btn" })

    self._panelBG:setOpacity(0)
    CF.SysTool.performDelayOnce(function ()
        if not self or tolua.isnull(self) then
            return
        end
        self._panelBG:runAction(cc.FadeTo:create(5/30, 187))
    end, 50/30)

    -- 分数和分数底移动显示
    local chairCount = CF.roomData:getChairs()
    for i=1, chairCount do
        local imgDi = CF.UITool.seekNodeByName(self["_scorePos" .. i], "IMG_SCORE_DI")
        if imgDi then
            imgDi:setOpacity(0)
            imgDi:runAction(cc.FadeTo:create(0.5, 255))
        end
        local imgScore = CF.UITool.seekNodeByName(self["_scorePos" .. i], "KW_TEXT_SCORE")
        if imgScore then
            imgScore:setPosition(cc.p(130, 0))
            imgScore:setOpacity(0)
            imgScore:runAction(cc.Sequence:create(
                cc.Spawn:create(
                    cc.FadeTo:create(7/30, 255), 
                    cc.MoveTo:create(10/30, cc.p(-12, 0))
                ),
                cc.MoveTo:create(5/30, cc.p(0, 0))
            ))
        end
    end
end

function GameWinLostLayerNew:onContinueClicked()
    if not self:checkCanJoin() then
        return
    end
    self._uNextTime:stopAllActions()
    self._uNextTime:setVisible(false)
    self:setSelfVisible(false)
    self:removeFromParent()
    CF.game:getModule("CenterBtns"):onStartGameEvent()
    CF.game:getModule("CenterBtns"):onUpdateChangeSeat()
end

function GameWinLostLayerNew:onChangeTableClicked()
    if not self:checkCanJoin() then
        return
    end
    self._uNextTime:stopAllActions()
    self._uNextTime:setVisible(false)
    self:setSelfVisible(false)
    local setModule = CF.game:getModule("Setting")
    setModule:doChangeTable(setModule.ChangeTabSource.WinLost)
end

function GameWinLostLayerNew:onCheckTableClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended and eventType ~= ccui.TouchEventType.canceled then
        if self:isVisible() then
            XH.NewThrowDataManager:throwData(
                XH.NewThrowDataDefine.zyt2025041001,
                {game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())}
            )
        end
        self._panelBG:setVisible(false)
        self._panelCenter:setVisible(false)
    else
        self._panelBG:setVisible(true)
        self._panelCenter:setVisible(true)
    end
end

function GameWinLostLayerNew:updatePlayerInfoChaoDi()
    local chairCount = CF.roomData:getChairs()
    for i = 0, chairCount - 1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(i)
        if playerData then
            -- 以自己为主视角, 转换本地座位号
            local localSeat = (i - CF.roomData:getSelfSeat() + chairCount) % chairCount + 1
            local multiType = CF.game:getModule("AddMultiple"):getAddMultipleType(i)
            self:onUpdatPlayerUI(localSeat, playerData, multiType)
            self:onUpdateDirection(localSeat, i)
            self:updatePlayerScore(localSeat, i)
            if i == CF.roomData:getSelfSeat() then
                CF.game:getModule("Share"):setGoldScore(self._tScore[i])
                self:onUpdataBankruptcy(self._tScore[i])
            end
            self:onUpdateMulti(localSeat, i)
            self:onUpdateMaxXiangFan(localSeat, i)
            self:onUpdatePlayerGong(localSeat, self._sGong[i])
        end
    end
end

function GameWinLostLayerNew:updatePlayerInfo()
    local isSelfWin = false
    for _, v in pairs(self._winSeat) do 
        if CF.roomData:getSelfSeat() == v then
            isSelfWin = true
            break
        end
    end
    self._isWin = isSelfWin
    local selfPos = isSelfWin and 1 or 3
    local chairCount = CF.roomData:getChairs()
    for i = 0, chairCount - 1 do
        local playerData = CF.roomData:getPlayerDataBySeatId(i)
        if playerData then
            -- 以自己为主视角, 转换本地座位号
            local localSeat = (i - CF.roomData:getSelfSeat() + chairCount) % chairCount + 1
            local index = ({
                [true]  = { [1]=1, [2]=4, [3]=2, [4]=3 },  -- 胜利映射
                [false] = { [1]=3, [2]=2, [3]=4, [4]=1 }   -- 失败映射
            })[self._isWin][localSeat]
            local multiType = CF.game:getModule("AddMultiple"):getAddMultipleType(i)
            self:onUpdatPlayerUI(index, playerData, multiType)
            self:onUpdateDirection(index, i)
            self:updatePlayerScore(index, i)
            if i == CF.roomData:getSelfSeat() then
                CF.game:getModule("Share"):setGoldScore(self._tScore[i])
                self:onUpdataBankruptcy(self._tScore[i])
            end
            self:onUpdateMulti(index, i)
            self:onUpdateMaxXiangFan(index, i)
            self:onUpdatePlayerGong(index, self._sGong[i])
        end
    end
end

function GameWinLostLayerNew:onUpdateDirection(index, seat)
    local playerFrame = self["_uiPlayer_" .. index]
    local localSeat = CF.roomData:seatToLocal(seat)
    local isSelf = seat == CF.roomData:getSelfSeat()
    CF.UITool.setVisible(playerFrame, "KW_IMG_SELF", isSelf)
    CF.UITool.setVisible(playerFrame, "KW_IMG_DIR_BG", not isSelf)
    CF.UITool.setVisible(playerFrame, "KW_IMG_DIRECTION", not isSelf)
    if not isSelf then
        CF.UITool.loadTexture(playerFrame, "KW_IMG_DIRECTION", "img_js_dj" .. localSeat .. ".png", ccui.TextureResType.plistType)
    end
end

function GameWinLostLayerNew:onUpdatPlayerUI(index, playerData, multiType)
    if not playerData then
        return
    end
    local playerFrame = self["_uiPlayer_" .. index]
    -- local playerHeadFrame = CF.UITool.seekNodeByName(playerFrame, "KW_IMG_HEAD_FRAME")
    local playerHeadImgPanel = CF.UITool.seekNodeByName(playerFrame, "KW_HEAD_PANEL")
    local playerNickName = CF.UITool.seekNodeByName(playerFrame, "KW_NICK_NAME")
    if playerData:getNumberID() == XH.playerData:getNumberID() then
        CF.UITool.setVisible(playerFrame, "KW_BTN_KICK", false)
    else
        CF.UITool.setVisible(playerFrame, "KW_BTN_KICK", true)
    end
    local nickname = playerData:getNickName()
    if string.len(nickname) > 12 then
        local validBytes = CF.StringTool.getMinimumValidBytesUTF8(nickname, 12)
        nickname = string.sub(nickname, 1, validBytes) .. "..."
    end
    playerNickName:setString(nickname)

    local url = playerData:getAvatarUrl()
    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end
    local size = playerHeadImgPanel:getContentSize()
    local headImg = CF.RemoteImage.new()
        :setTouchEnabled(true)
        :setPosition(size.width/2, size.height/2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width - 7, size.height - 7)
        :addTo(playerHeadImgPanel)
    headImg:setUrl(url)

    -- 头像加倍显示
    local uiAddMulti = CF.UITool.seekNodeByName(playerFrame, "KW_IMG_ADDMULTI")
    if uiAddMulti then
        CF.UITool.setVisible(playerFrame, "KW_IMG_ADDMULTI", false)
        if CF.GameProtocol.msgAddMulti.ADDMULTITYPE.DEFAULT == multiType then
            uiAddMulti:loadTexture("img_game_jiabei.png", ccui.TextureResType.plistType)
            uiAddMulti:setVisible(true)
        elseif CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER == multiType then
            uiAddMulti:loadTexture("img_game_jiabei2.png", ccui.TextureResType.plistType)
            uiAddMulti:setVisible(true)
        end 
        uiAddMulti:ignoreContentAdaptWithSize(true)
    end
    CF.UITool.addTouchEventListener(playerFrame, "KW_BTN_KICK", function (send, event)
        if event ~= ccui.TouchEventType.ended or not send then
            return
        end
        CF.game:getModule("Kick"):sendVipKick(playerData:getBrandID(), playerData:getNumberID(), playerData:getNickName())
        local m = XH.lobby:getModule("Sxvip.ThrowData")
        m:setBeforeGameStartStr("对局后")
        m:throwData(XH.NewThrowDataDefine.hy24090621, {block_item_id="对局后", game_id = string.format("%d_%d", XH.areaData:getAreaID(), CF.roomData:getGameID())})
    end)
end

function GameWinLostLayerNew:getWinSeat()
    local orderType = {}
    local winSeat = {}
    if self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_PINGKOU then
        orderType = ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_PINGKOU
    elseif self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_DANKOU then
        orderType = ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_DANKOU
    elseif self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_SHUANGKOU then
        orderType = ENUM_WIN_ORDER_TYPE.KW_ENDTYPE_SHUANGKOU
    end
    for i = 1, #orderType do
        winSeat[#winSeat + 1] = self:findOrderSeat(orderType[i])
    end
    return winSeat
end

function GameWinLostLayerNew:findOrderSeat(order)
    for i = 0, #self._sWinOrder do
        if self._sWinOrder[i] == order then
            return i
        end
    end
    return nil
end

function GameWinLostLayerNew:updatePlayerScore(index, seat)
    local playerScore = self._tScore[seat]
    local bPoChan = self._bPoChan[seat]
    local sExtraBonus = self._sExtraBonus[seat]
    local nYXBD = self._nResultYxbd[seat]

    local playerFrame = self["_uiPlayer_" .. index]
    local localSeat = CF.roomData:seatToLocal(seat)
    sExtraBonus = sExtraBonus or 0
    playerScore = playerScore - sExtraBonus
    CF.UITool.setFntFile(self["_scorePos" .. localSeat], "KW_TEXT_SCORE", playerScore >= 0 and "cocosStudio/DoubleKou/Font/sk/Fnt_shenli-export.fnt" or "cocosStudio/DoubleKou/Font/sk/Fnt_shibai-export.fnt")
    CF.UITool.loadTexture(self["_scorePos" .. localSeat], "IMG_SCORE_DI", playerScore >= 0 and "img_newwinlost_sld.png" or "img_newwinlost_sbd.png")
    if playerScore > 0 then
        CF.UITool.setText(playerFrame, "KW_FONT_SCORE", "+" .. XH.StringTool.numberToString(playerScore, 4))
        CF.UITool.setText(self["_scorePos" .. localSeat], "KW_TEXT_SCORE", "+" .. XH.StringTool.numberToString(playerScore, 4))
    elseif playerScore == 0 then
        CF.UITool.setText(playerFrame, "KW_FONT_SCORE", playerScore)
        CF.UITool.setText(self["_scorePos" .. localSeat], "KW_TEXT_SCORE", playerScore)
    else
        CF.UITool.setText(playerFrame, "KW_FONT_SCORE", "-" .. XH.StringTool.numberToString(playerScore * -1, 4))
        CF.UITool.setText(self["_scorePos" .. localSeat], "KW_TEXT_SCORE", "-" .. XH.StringTool.numberToString(playerScore * -1, 4))
    end
    CF.UITool.setVisible(playerFrame, "KW_IMG_POCHAN", bPoChan == 1)
    CF.UITool.setVisible(playerFrame, "KW_IMG_FENGDING", nYXBD == 1)
end

function GameWinLostLayerNew:onUpdataBankruptcy(playerScore)
    local winLostWithServicePay = playerScore 
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if gameData.getServicePay then 
        winLostWithServicePay = winLostWithServicePay - gameData:getServicePay()
    end
    CF.SysTool.performDelayOnce(function()
        if not self or tolua.isnull(self) then
            return
        end
        if not CF or not CF.roomData then
            return
        end
        if CF.roomData:is50() then
            CF.getLobbyModule("Guide"):flushGoldCoin()
        end
        CF.getLobbyModule("YGiftBankruptcy"):showBuyBankuptcyGift(CF.roomData:getGameID(), winLostWithServicePay, CF.roomData:is50())
    end, 1)
end

-- 刷新玩家贡献
function GameWinLostLayerNew:onUpdatePlayerGong(index, playerScore)
    if not CF.roomData:isGoldRoom() then
        return
    end
    if CF.game:getModule("GameLayer"):getGameData():getGameType() == CF.GameDefine.ENUM_GAME_TYPE.KW_NUM_GAME_TYPE_HANGZMAQUAN then 
        return
    end
    playerScore = playerScore or 0
    local playerFrame = self["_uiPlayer_" .. index]
    if playerScore > 0 then
        CF.UITool.setText(playerFrame, "KW_TEXT_GONG_SCORE", playerScore)
    else
        CF.UITool.setText(playerFrame, "KW_TEXT_GONG_SCORE", playerScore)
    end
end

-- 刷新玩家倍数
function GameWinLostLayerNew:onUpdateMulti(index, seat)
    local sIncValues = self._winLostData:getIncValues() -- 总倍数
    local finalMult = sIncValues[seat] - self._sGong[seat]
    local playerFrame = self["_uiPlayer_" .. index]
    CF.UITool.setText(playerFrame, "KW_TEXT_MULTI_SCORE", finalMult)
end

function GameWinLostLayerNew:onUpdateMaxXiangFan(index, seat)
    local isWinSeat = false
    for _, v in pairs(self._winSeat) do 
        if seat == v then
            isWinSeat = true
            break
        end
    end
    local playerFrame = self["_uiPlayer_" .. index]
    if not isWinSeat then
        CF.UITool.setVisible(playerFrame, "_KW_IMG_WIN", false)
        return
    end
    local sXianShu = self._winLostData:getXianShu()
    if sXianShu and sXianShu[seat] and sXianShu[seat][self._sWinMut] and sXianShu[seat][self._sWinMut] > 0 and self._sWinMut >= KW_NUM_MIN_XIANGFAN then
        local textWin = CF.UITool.seekNodeByName(playerFrame, "_KW_TEXT_WIN")
        if textWin then
            CF.UITool.setVisible(playerFrame, "_KW_IMG_WIN", true)
            textWin:setString(self._sWinMut)
        end
    end
end

local currentContinueTime = 0
function GameWinLostLayerNew:showKickOutClock(continueTime)
    if continueTime and continueTime > 0 then
        self._uNextTime:stopAllActions()

        self._uNextTime:setString(continueTime .. "s")
        self._uNextTime:setVisible(true)

        currentContinueTime = continueTime
        CF.UITool.createRepeateAction(
            self._uNextTime,
            1,
            function()
                currentContinueTime = currentContinueTime - 1
                if currentContinueTime >= 0 then
                    self._uNextTime:setString(currentContinueTime .. "s")
                else
                    self._uNextTime:stopAllActions()

                    -- 模拟点击
                    if CF.roomData and not CF.roomData:isGoldRoom() then
                        self:setVisible(false)
                        CF.game:getModule("CenterBtns"):onStartGameEvent()
                    end
                end
            end
        )
    else
        self._uNextTime:setVisible(false)
    end
end

function GameWinLostLayerNew:onGameStart(event)
    self:setVisible(false)
end

function GameWinLostLayerNew:setSelfVisible(bShow)
    if CF.roomData and CF.roomData:isGoldRoom() and not bShow then
        CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_end",CF.roomData._gameID)
        CF.getLobbyModule("H5GameWidget"):close5GameWidget("game_begin",CF.roomData._gameID)
        CF.game:getModule("ChangeLevel"):hide()
    end
    self:setVisible(bShow)
end

function GameWinLostLayerNew:onClock(event) 
    local time = event.msgData.time 
    self:showKickOutClock(time)
end 

function GameWinLostLayerNew:onSetBtnClicked(send, eventType)
    CF.gameRequire("Modules.Setting.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("菜单")
end

function GameWinLostLayerNew:updateH5Game()
    local isGold = CF.roomData:isGoldRoom()
    if isGold then
        self._hasH5GameWidget = true
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"结束","BMC002")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_end",CF.roomData._gameID)
    end
end

function GameWinLostLayerNew:hideGoldRoomBtn()
    self._lastShowBtns = CF.game:getModule("Share"):setShareHideIcons(self)
end

function GameWinLostLayerNew:showGoldRoomBtn()
    CF.game:getModule("Share"):setShareShowIcons(self, self._lastShowBtns)
end

function GameWinLostLayerNew:showShareBtn()
    local goldShareView = CF.gameRequire("game.GameBase.Modules.Share.GoldShareView")
    if CF.roomData:isGoldRoom() and goldShareView then
        self:addChild(goldShareView.new())
    end
end

-- 无限金币卡
function GameWinLostLayerNew:onBtnUnLimit()
    XH.viewManager:openView("UnLimitGoldActView", nil, {})
end

function GameWinLostLayerNew:flushLeftTime()
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

function GameWinLostLayerNew:startSchedule()
    self:removeSchedule()
    self:flushLeftTime()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushLeftTime()
        end
    end, 1, false)
end

function GameWinLostLayerNew:removeSchedule()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function GameWinLostLayerNew:onCleanup()
    self:removeSchedule()
    GameWinLostLayerNew.super.onCleanup(self)
end

function GameWinLostLayerNew:checkCanJoin()
    local playerSR = CF.selfPlayerData:getSR()
    local confID = CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_INDEX)
    local goldRoomInfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
    if not goldRoomInfo then
        return true
    end
    local isFind = false
    local curLevel = CF.roomData:getRoomLevel()
    local _levelRoom = goldRoomInfo.roomLevelInfos
    for _, roominfo in pairs(_levelRoom) do
        if (playerSR >= roominfo.minrich) and ((playerSR <= roominfo.maxrich) or (roominfo.maxrich == -1)) then
            isFind = true
        end
    end
    if not isFind then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("金币不足！请补充金币，再战四方！")
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
            CF.game:leaveGame()
        end)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.CLOSE, function()
            CF.game:leaveGame()
        end)
        return false
    end
    local canChange, bLow = CF.goldManager:canChangeRoomLevel(nil, curLevel)
    if canChange then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        local changeLevel = CF.goldManager:getChangeLevel()
        local getGlobalDefine = CF.getGlobalDefine("GOLD_LEVEL_DEFAULT_NAME")
        if bLow then
            tipLayer:setText("金币满载，请前往更高级房间，体验更丰富的游戏乐趣！")
        else
            tipLayer:setText("金币低于当前房间准入门槛！您可以前往" .. getGlobalDefine[changeLevel%10] .."场进行游戏")
        end
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.OK, function()
            if not self or tolua.isnull(self) then
                CF.game:leaveGame()
            end
            self._uNextTime:stopAllActions()
            self._uNextTime:setVisible(false)
            self:setSelfVisible(false)
            self:removeFromParent()
            CF.game:getModule("CenterBtns"):onStartGameEvent()
            CF.game:getModule("CenterBtns"):onUpdateChangeSeat()
        end)
        return false
    end
    return true
end

function GameWinLostLayerNew:getIndex(seat)
    local chairCount = CF.roomData:getChairs()
    -- 以自己为主视角, 转换本地座位号
    local localSeat = (seat - CF.roomData:getSelfSeat() + chairCount) % chairCount + 1
    local index = ({
        [true]  = { [1]=1, [2]=4, [3]=2, [4]=3 },  -- 胜利映射
        [false] = { [1]=3, [2]=2, [3]=4, [4]=1 }   -- 失败映射
    })[self._isWin][localSeat]
    local isChaoDi = self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_TAOPAO or self._sEndType == CF.GameDefine.ENUM_WINLOST_ENDTYPE.KW_ENDTYPE_CHAODI
    return isChaoDi and localSeat or index
end

function GameWinLostLayerNew:updateTrustPunishment()
    local chairCount = CF.roomData:getChairs()
    for i = 0, chairCount - 1 do
        -- 以自己为主视角, 转换本地座位号
        local index = self:getIndex(i)
        local trustPunishment = self._winLostData:getTrustPunishment(i)
        local playerFrame = self["_uiPlayer_" .. index]
        if trustPunishment > 0 then
            CF.UITool.setVisible(playerFrame, "KW_IMG_TRUST_PUNISHMENT", true)
        else
            CF.UITool.setVisible(playerFrame, "KW_IMG_TRUST_PUNISHMENT", false)
        end
    end
end

function GameWinLostLayerNew:updateResultYxbd()
    local chairCount = CF.roomData:getChairs()
    for i = 0, chairCount - 1 do
        -- 以自己为主视角, 转换本地座位号
        local index = self:getIndex(i)
        local bYXBD = self._winLostData:getResultYxbd(i)
        local playerFrame = self["_uiPlayer_" .. index]
        if bYXBD == 1 then
            CF.UITool.setVisible(playerFrame, "KW_IMG_FENGDING", true)
        else
            CF.UITool.setVisible(playerFrame, "KW_IMG_FENGDING", false)
        end
    end
end

return GameWinLostLayerNew
