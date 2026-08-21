local BigWinLostView = CF.gameClass("BigWinLostView", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.BigWinLost.View")
local KW_QUICK_TIP = "KW_QUICK_TIP"

function BigWinLostView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/NingBo/BigWinLost_NB.csb"
end

function BigWinLostView:getBindingInfo()
    local bindInfo = BigWinLostView.super.getBindingInfo(self)
    bindInfo["_KW_BTN_QUICK"] = { varName = "_btnQuick", onTouchEnded = "onBtnQuick" }
    bindInfo["_KW_QUICK_TIP"] = { varName = "_tipQuick"}
    return bindInfo
end

function BigWinLostView:createChildren()
    BigWinLostView.super.createChildren(self)
    local teaBigWinStyleRule = CF.game:getModule("RoomInfo"):getTeaBigWinStyleRule()
    if teaBigWinStyleRule and teaBigWinStyleRule.chessfee then
        self._btnQuick:setVisible(true)
        self:showContinueBtn(false)
        self:initQuickTip()
    end
end

--初始化快速开局提示
function BigWinLostView:initQuickTip()
    --由于玩家牌局的信息框层级较高--会挡住提示气泡故采取此方法
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

--快速开始
function BigWinLostView:onBtnQuick(send, eventType)
    local EVENT_TEAHOUSE_QUICK_START = "EVENT_TEAHOUSE_QUICK_START"   --快速开始事件名称
    local checkList =    {
        "DynamicTable", "PlayCount", "XianFan", "PlayerCount", "QiHuTai", "QingPengHun", "ChoiceBanker",
        "BaiDaType", "IsHuaPaiBaiDa", "IsLaGangHuDuoJia", "IsQuYiSe", "IsYeHuaYiTai",
        "IsPaoDaMoDaSuanTai", "ChengBao", "PayType", "chessfee",
    }

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(EVENT_TEAHOUSE_QUICK_START)
    event.msg = { gameRuleTable = CF.game:getModule("RoomInfo"):getTeaBigWinStyleRule(), checkRule = checkList }
    eventDispatcher:dispatchEvent(event)

    CF.game:getModule("Continue"):sendRespContinue(false)
    self:close()
    CF.game:leaveGame()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_28)
end

function BigWinLostView:updateContinueUI(continueTime)
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

function BigWinLostView:initBigWinLostBtns()
    local btns = {
        self._btnBackLobby,
        self._btnShare,
        self._btnContinue,
        self._btnQuick
    }
    return btns
end 

return BigWinLostView�