local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

local EVENT_TEAHOUSE_QUICK_START = "EVENT_TEAHOUSE_QUICK_START"   --快速开始事件名称
local KW_QUICK_TIP = "KW_QUICK_TIP"

function BigWinLostUI:getCSBPath()
    return "res/cocosStudio/Landlords/GameLayer/CSB/YuYao/BigWinLost_YY.csb"
end

function BigWinLostUI:getBindingInfo()
    local uiList = BigWinLostUI.super.getBindingInfo(self)
    uiList["_KW_BTN_QUICK"] = {varName = "_btnQuick", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnQuick"}
    uiList["_KW_BTN_CONTINUE"] = {varName = "_btnContinue", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnContinue"}
    uiList["_KW_QUICK_TIP"] = { varName = "_tipQuick" }
    return uiList
end

function BigWinLostUI:createChildren()
    BigWinLostUI.super.createChildren(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
    if self._gameData:getTeaBigWinStyleRule().chessfee then
        self._btnQuick:setVisible(true)
        self:showContinueBtn(false)
        self:initQuickTip()
    end
end

--初始化快速开局提示
function BigWinLostUI:initQuickTip()
    if not cc.UserDefault:getInstance():getBoolForKey(KW_QUICK_TIP .. CF.areaData:getLobbyID(), false) then
        cc.UserDefault:getInstance():setBoolForKey(KW_QUICK_TIP .. CF.areaData:getLobbyID(), true)
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

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat+1)
    local scores = {}
    table.insert(scores, param.iWinCount[seat] or 0)
    table.insert(scores, param.iBankerCount[seat] or 0)

    local scoreDes = {}
    table.insert(scoreDes, "赢牌次数")
    table.insert(scoreDes, "地主次数")
    self:setPlayerDesc(playerUi, scores, scoreDes)
    self:setPlayerTotalScore(seat+1, param.iTotalScore[seat])
end

--快速开始
function BigWinLostUI:onBtnQuick(send, eventType)
    local checkList =
    {
        "MovingStart","PlayerCount","PlaymentType","PlayCount","isxiazi","isqiqian","issangang","needkongscore",
        "isshiyifeng","HaveTimeOut","chessfee",
    }
    
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(EVENT_TEAHOUSE_QUICK_START)
    event.msg = {gameRuleTable = self._gameData:getTeaBigWinStyleRule(), checkRule = checkList}
    eventDispatcher:dispatchEvent(event)

    CF.game:getModule("Continue"):gameEventContinueGame(false)
    self:close()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_28)
end

function BigWinLostUI:updateContinueUI(continueTime)
    if continueTime and continueTime > 0 then
        self._uContinueTime:stopAllActions()

        self._uContinueTime:setString(continueTime .. "s")
        self._uContinueTime:setVisible(continueTime > 0)
        self._uContinueTimeBg:setVisible(continueTime > 0)

        self._curTime = continueTime
        self:showContinueBtn(true)
        self:showContinueAni(true)
        CF.UITool.createRepeateAction(self._uContinueTime, 1,  function ()
            self._curTime = self._curTime - 1
            if self._curTime >= 0 then
                self._uContinueTime:setString(self._curTime .. "s")
            else
                self._btnContinue:setEnabled(false)
                self._uContinueTime:stopAllActions()
                self._uContinueTime:setVisible(false)
                self._uContinueTimeBg:setVisible(false)
                self:showContinueAni(false)
            end
        end)
    else
        self._uContinueTime:stopAllActions()
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
