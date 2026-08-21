local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.Mahjong.BasicMahjong.Modules.BigWinLost.View")


local KW_TEXT_DES = "KW_TEXT_DES"

local KW_PANEL_HEAD_POS = "KW_PANEL_HEAD_POS"
local KW_IMG_HOST = "KW_IMG_HOST"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_NUM_ID = "KW_TEXT_NUM_ID"
local KW_LISTVIEW_SCORES = "KW_LISTVIEW_SCORES"
local KW_TEXT_TOTAL_SCORE = "KW_TEXT_TOTAL_SCORE"
local KW_TEXT_TOTAL_KONGSCORE = "KW_TEXT_TOTAL_KONGSCORE"
local KW_QUICK_TIP = "KW_QUICK_TIP"


local KW_DEFAULT_STRING = "------"

BigWinLostUI.ClsName = "BigWinLostUI"
BigWinLostUI.ObjName = "BigWinLostUI"

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
    self._param = param
    self:createChildren()
end


function BigWinLostUI:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/YuYao/BigWinLost_YY.csb"
end

function BigWinLostUI:getBindingInfo()
    local uiList = BigWinLostUI.super.getBindingInfo(self)
    uiList["_KW_SCORE_MOD_0"] = { varName = "_scoreMod0"}
    uiList["_KW_SCORE_MOD_1"] = { varName = "_scoreMod1"}
    uiList["_KW_LV_DISPLAY_VIEW"] = { varName = "_displayView" }
    uiList["_KW_BTN_QUICK"] = { varName = "_btnQuick",type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onBtnQuick" }
    uiList["_KW_QUICK_TIP"] = { varName = "_tipQuick" }
    return uiList
end

function BigWinLostUI:createChildren()
    self:setRoomInfo(self._param)
    self:setPlayersInfo(self._param)

    self:showShareBtn(true)

    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local res = gameData:getTeaBigWinStyleRule()
    if res and res.chessfee then
        self._btnQuick:setVisible(true)
        self:showContinueBtn(false)
        self:initQuickTip()
    end

    self:showContinueBtn(CF.roomData:isCanContinue())
    self:initContinueUI()
    local continueTm = CF.roomData:getContinueTime()
    self:updateContinueUI(continueTm)
end

--初始化快速开局提示
function BigWinLostUI:initQuickTip()
    if not cc.UserDefault:getInstance():getBoolForKey(KW_QUICK_TIP..CF.areaData:getLobbyID(), false) then
        cc.UserDefault:getInstance():setBoolForKey(KW_QUICK_TIP..CF.areaData:getLobbyID(), true)
        if self._btnQuick == nil then 
            return 
        end
        local tipQuick = self._tipQuick:clone()
        tipQuick:addTo(self._tipQuick:getParent())
        local itemSize = self._btnQuick:getContentSize()
        local posX = self._btnQuick:getPositionX()
        local posY = self._btnQuick:getPositionY()
        tipQuick:setPosition(itemSize.width / 3 + posX , posY - 30)
        tipQuick:setVisible(true)
        tipQuick:runAction(cc.Sequence:create(cc.DelayTime:create(10),cc.CallFunc:create(function()
            tipQuick:setVisible(false)
        end)))
    end
end

--设置房间信息
function BigWinLostUI:setRoomInfo(param)
    self._roomID:setString("房间号: " .. string.format("%06d", param.roomid or 0) )
    if param.maxCount == 999 then --打节特殊模式
        self._playCount:setString("局数:  " .. (param.playCount or 0) .. "局")
    else
        self._playCount:setString("局数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
    end
    
    self._timeStr:setString(param.timeStr or "")
end

-- --设置玩家游戏计算信息
function BigWinLostUI:setPlayersInfo(param)
    if param == nil then
        return
    end
    local players = param.players or {}

    for seat, player in pairs(players) do
        local playerUi = self:getPlayerItem(seat + 1)
        CF.UITool.setText(playerUi, KW_TEXT_NICK_NAME, CF.StringTool.cutStringByLength(player._szNickname2) or KW_DEFAULT_STRING)
        CF.UITool.setText(playerUi, KW_TEXT_NUM_ID, ("序号: " .. player._nNumberID or KW_DEFAULT_STRING))
        CF.UITool.setVisible(playerUi, KW_IMG_HOST, seat == param.hostSeat)
        self:updateImg(CF.UITool.seekNodeByName(playerUi, KW_PANEL_HEAD_POS), player._szAvatarUrl)

        local displayType = param.type or 0
        if displayType == 0 then
            self:setPlayerScore(playerUi, param.scores[seat])
        else
            self:setPlayerScoreStr(playerUi, param.scoreDes[seat],  param.totalKong[seat], seat)
        end
        self:updateHeadFrame(CF.UITool.seekNodeByName(playerUi, KW_PANEL_HEAD_POS), player._nNumberID)

        local isShowCaiYun = CF.game:getModule("CaiYunProp"):isShowCaiYun(player._nNumberID)
        if isShowCaiYun then
            playerUi:setBackGroundImage("cocosStudio/Common/Image/caiyun_bigwinlost_bg.png", ccui.TextureResType.localType)
        else
            playerUi:setBackGroundImage("doublekou_result_total_item_bg.png", ccui.TextureResType.plistType)
        end
    end

    if param.bigWinnerSeatList then
        for _, bigWinnerSeat in ipairs(param.bigWinnerSeatList) do
            self:setBigWinner(bigWinnerSeat + 1, players)
        end
    end
end

--设置玩家每局分数,形式2
function BigWinLostUI:setPlayerScoreStr(node, scoreDe, totalkong, seat)
    local scoreDes = scoreDe or {}
    for count, score in ipairs(scoreDes) do
        local tmpScoreNode = self._scoreMod1:clone()
        tmpScoreNode:addTo(CF.UITool.seekNodeByName(node, KW_LISTVIEW_SCORES))
        print(score or "")
        local des = scoreDes[count] or ""
        CF.UITool.setText(tmpScoreNode, KW_TEXT_DES, des)
    end
    local totalScores = self._param.totalScore or {}
    local totalScore = totalScores[seat] or 0
    local totalScoreStr = totalScore <= 0 and tostring(totalScore) or ("+" .. totalScore)

    local totalKong = self._param.totalKong or {}
    totalKong = totalKong[seat] or 0
    local totalKongStr = totalKong <= 0 and tostring(totalKong) or ("+" .. totalKong)

    local color = totalScore < 0 and cc.c3b(3, 87, 146) or cc.c3b(215, 78, 24)
    CF.UITool.setText(node, KW_TEXT_TOTAL_SCORE, totalScoreStr)
    CF.UITool.setTextColor(node, KW_TEXT_TOTAL_SCORE, color)
    
    CF.UITool.setText(node, KW_TEXT_TOTAL_KONGSCORE, "杠分 "..totalKongStr)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local res = gameData:getTeaBigWinStyleRule()
    if res and tonumber(res.needkongscore) == 1 then
        return totalScore + totalKong
    else
        return totalScore
    end  
end

--快速开始
function BigWinLostUI:onBtnQuick(send, eventType)
    if eventType == ccui.TouchEventType.began then
        CF.getGameSoundManager().playButtonClick()
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local EVENT_TEAHOUSE_QUICK_START = "EVENT_TEAHOUSE_QUICK_START"   --快速开始事件名称
    local checkList = 
    {
        "MovingStart","PlayerCount","PlaymentType","PlayCount","isxiazi","isqiqian","issangang","needkongscore",
        "isshiyifeng","HaveTimeOut","chessfee",
    }
    
    
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(EVENT_TEAHOUSE_QUICK_START)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local res = gameData:getTeaBigWinStyleRule()
    event.msg = {gameRuleTable = res,checkRule = checkList}
    eventDispatcher:dispatchEvent(event)

    self:removeSelf()
    CF.game:leaveGame()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_28)
end

function BigWinLostUI:updateHeadFrame(node, numid)
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    if CF.game:getModule("CaiYunProp"):isShowCaiYun(numid) then
        GameBagUILogic.showCaiShenHeadFrame(node, cc.size(20, 0), cc.size(80, 80))
        return
    end
    GameBagUILogic.showCaiShenHeadFrame(node, cc.size(20, 0), cc.size(80, 80), true)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0,0), cc.size(60,60), headFrame.propid)
end

function BigWinLostUI:updateContinueUI(continueTime)
    if continueTime and continueTime > 0 then
        self._uContinueTime:stopAllActions()

        self._uContinueTime:setString(continueTime .. "s")
        self._uContinueTime:setVisible(continueTime > 0)
        self._uContinueTimeBg:setVisible(continueTime > 0)

        self._curTime = continueTime
        self:showContinueBtn(true)
        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._btnContinue:setEnabled(false)
                self._uContinueTime:stopAllActions()
            end
        end)
    else
        self._uContinueTime:setVisible(false)
        self._uContinueTimeBg:setVisible(false)
    end
end

function BigWinLostUI:initBigWinLostBtns()
    local btns = {
        self._btnBackLobby,
        self._btnShare,
        self._btnContinue,
        self._btnQuick
    }
    return btns
end

return BigWinLostUI
