-- 选择需要创建的比赛场
local TeaHouseQuitRechargeView = class("TeaHouseQuitRechargeView",TeaHouse.View)

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 40
local KW_MIN_TEXT_FONT_SIZE = 30

TeaHouseQuitRechargeView.RAW_RES_BINDING_CSB =
{
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseQuitRechargeView.csb",
    binding = {
        ["_KW_BTN_CLOSE"] = {tag = "_KW_BTN_CLOSE",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_BTN_CANCEL"] = {tag = "_KW_BTN_CANCEL",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_EMPTY_BTN"] = {tag = "_KW_EMPTY_BTN",name = "_btnEmpty",class = "btn",events = "onEmptyClicked"},
        ["_KW_BTN_OK"] = {tag = "_KW_BTN_OK",name = "_btnSure",class = "btn",events = "onRechargeClicked"},
        ["_KW_TEXT_CARDS"] = {tag = "_KW_TEXT_CARDS", name = "_textCard", class = "text"},
        ["_KW_TEXT_CARDS_QUAN"] = {tag = "_KW_TEXT_CARDS_QUAN", name = "_textCardQuan", class = "text"},
        ["_KW_TF_CARD_EDIT"] = {tag = "_KW_TF_CARD_EDIT", name = "_tfCardEdit", class = "textfield"},
        ["_KW_TEXT_CARD_EDIT"] = {tag = "_KW_TEXT_CARD_EDIT", name = "_textCardEdit", class = "text"},
        ["_KW_BTN_BUY_CARD_TIP"] = { tag = "_KW_BTN_BUY_CARD_TIP", name = "_buyCardTipBtn", class = "btn" ,events = "onBtnEventBuyRoomCardTip"},
        ["_KW_BTN_BUY_CARD_TIP_QUAN"] = { tag = "_KW_BTN_BUY_CARD_TIP_QUAN", name = "_buyCardTipBtnQuan", class = "btn" ,events = "onBtnEventBuyRoomCardTipQuan"},
        ["_KW_BTN_BUY_CARD_TIP_BG"] = { tag = "_KW_BTN_BUY_CARD_TIP_BG", name = "_buyCardTipBg", class = "img" },
        ["_KW_BTN_BUY_CARD_TIP_TEXT"] = { tag = "_KW_BTN_BUY_CARD_TIP_TEXT", name = "_buyCardTipText", class = "text" },
        ["_KW_BTN_CHARGE_CARD_TIP"] = { tag = "_KW_BTN_CHARGE_CARD_TIP", name = "_chargeCardTipBtn", class = "btn",events = "onBtnEventChargeRoomCardTip"},
        ["_KW_BTN_CHARGE_CARD_TIP_BG"] = { tag = "_KW_BTN_CHARGE_CARD_TIP_BG", name = "_chargeCardTipBg", class = "img" },
        ["_KW_BTN_CHARGE_CARD_TIP_TEXT"] = { tag = "_KW_BTN_CHARGE_CARD_TIP_TEXT", name = "_chargeCardTipText", class = "text" },
        ["_KW_PANEL_TEXTLINE"] = { tag = "_KW_PANEL_TEXTLINE",name = "_lineOne"},
        ["_KW_PANEL_TEXTLINE2"] = { tag = "_KW_PANEL_TEXTLINE2",name = "_lineTwo"},

        ["_KW_BINDCARD_INFO"] = { tag = "_KW_BINDCARD_INFO", name = "_bindCardInfo" },
        ["_KW_TXT_CARD_TIP_FREE_INFO"] = { tag = "_KW_TXT_CARD_TIP_FREE_INFO",name = "_txtBindCardInfoTotal" },
        ["_KW_BINDCARD_INFO_LIST"] = { tag = "_KW_BINDCARD_INFO_LIST",name = "_listBindCardInfo" },
        ["_KW_BINDCARD_INFO_ITEM"] = { tag = "_KW_BINDCARD_INFO_ITEM",name = "_itemBindCardInfo" },
        ["_KW_PANEL_ROOT"] = { tag = "_KW_PANEL_ROOT",name = "_panelRoot"}
    }
}

function TeaHouseQuitRechargeView:ctor()
    TeaHouseQuitRechargeView.super.ctor(self)

    XH.playerData:flushPlayerDrop()
    XH.playerData:flushPlayerLimitedTimeRoomCard()

    local isSupportTimeCard = XH.lobby:getModule("Lobby"):isSupportTimeCard()
    self._lineTwo:setVisible(isSupportTimeCard)
    local teahouseSetup = TeaHouse.manager.teahouseSetup
    self._teahouseSetupListener = self:createListener(teahouseSetup)
    self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_UPDATE_AGENTPROPCNT, handler(self, self.onUpdateAgentPropCnt))
    self._teahouseSetupListener:addEventListener(teahouseSetup.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS,handler(self, self.onRefreshTeaCountNum))

    local teahouseMain = TeaHouse.manager.teahouseMain
    local teahouseSetup = self:createListener(teahouseMain)
    teahouseSetup:addEventListener(teahouseMain.EVENT_SETUP_REQ_TIMECARDSINFO_SUCCESS, handler(self, self.onUpdateTimeCardsInfo))
    teahouseSetup:addEventListener(teahouseMain.EVENT_PROP_COUNT_UPDATE, handler(self, self.onRefreshTeaCountNum))

    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.DROP_CHANGED, self.__cname, handler(self, self.onPropDataChanged))
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.LIMITETIME_CARD_CHANGED, self.__cname, handler(self, self.onPropDataChanged))
    TeaHouse.BridgeUI.setText(self._panelRoot, "Text_8", TeaHouse.BridgeUI.getText(self._panelRoot, "Text_8"))
    TeaHouse.BridgeUI.setText(self._panelRoot, "KW_TEXT_EDITCARD3", TeaHouse.BridgeUI.getText(self._panelRoot, "KW_TEXT_EDITCARD3"))

    TeaHouse.manager.teahouseSetup:reqPlayerTeaHouseCost()
    --没有转型的地区需要请求创建比赛场人员的风信后台卡数量
    local teahouseData = TeaHouse.manager.teahouseData  
    if teahouseData:getUseBuyedProp() then
        if TeaHouse.BridgeData.isRemodelArea() or TeaHouse.BridgeData.isNotTeaAgentMode() then
            self:setSelfCardNum(TeaHouse.BridgeData.getRoomCard())
            self:setQuanCardNum(TeaHouse.manager.teahouseData:getSelfPropcount())
            self._buyCardTipBtn:setVisible(true)
            self._buyCardTipBtnQuan:setVisible(true)
            self._chargeCardTipBtn:setVisible(true)
            local teaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
            TeaHouse.manager.teahouseSetup:reqTeaHousePropCnt(teaNumber)
        else
            TeaHouse.manager.teahouseSetup:reqAgentPropCnt()
        end
    else
        TeaHouse.manager.teahouseSetup:reqAgentPropCnt()
    end

    if self._tfCardEdit and self._textCardEdit then
        self._tfCardEdit:setFontColor(cc.c3b(255, 255, 255))
        self._tfCardEdit:setInputMode(cc.EDITBOX_INPUT_MODE_NUMERIC)
        self._tfCardEdit:registerScriptEditBoxHandler(
            function(eventName)
                if eventName == "began" then
                    self._textCardEdit:setVisible(false)
                elseif eventName == "changed" then
                    self._textCardEdit:setString(self._tfCardEdit:getText())
                    self._textCardEdit:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                    TeaHouse.UITool.adaptTextToWidth(
                        self._textCardEdit,
                        KW_MAX_TEXT_WIDTH,
                        KW_MAX_TEXT_FONT_SIZE,
                        KW_MIN_TEXT_FONT_SIZE
                    )
                elseif eventName == "ended" or eventName == "return" then
                    self._textCardEdit:setVisible(true)
                    local teahouseData = TeaHouse.manager.teahouseData
                    if teahouseData:isAgentPlayerPayType() then
                        local costString = self._tfCardEdit:getText()
                        costString = string.format("%.2f", tonumber(costString))
                        self._tfCardEdit:setText(costString)
                        self._textCardEdit:setString(costString)
                        self._textCardEdit:setFontSize(KW_MAX_TEXT_FONT_SIZE)
                        TeaHouse.UITool.adaptTextToWidth(
                            self._textCardEdit,
                            KW_MAX_TEXT_WIDTH,
                            KW_MAX_TEXT_FONT_SIZE,
                            KW_MIN_TEXT_FONT_SIZE
                        )
                    end
                end
            end
        )
    end
end

function TeaHouseQuitRechargeView:cleanup()
    TeaHouseQuitRechargeView.super.cleanup(self)

    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.DROP_CHANGED, self.__cname)
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.LIMITETIME_CARD_CHANGED, self.__cname)
end

function TeaHouseQuitRechargeView:setSelfCardNum(num)
    self._textCard:setString(num)
    self._buyCardTipBtn:setPositionX(self._textCard:getContentSize().width + 420)
end

function TeaHouseQuitRechargeView:setQuanCardNum(num)
    self._textCardQuan:setString(num)
    self._buyCardTipBtnQuan:setPositionX(self._textCardQuan:getContentSize().width + 380)
end


function TeaHouseQuitRechargeView:onPropDataChanged()
    self:setSelfCardNum(TeaHouse.BridgeData.getRoomCard())
    if self._bindCardInfo:isVisible() and self._bindCardInfoType == 0 then
        self:updateBindCardInfo()
    end
end

function TeaHouseQuitRechargeView:onUpdateTimeCardsInfo()
    self:setQuanCardNum(TeaHouse.manager.teahouseData:getSelfPropcount())
    if self._bindCardInfo:isVisible() and self._bindCardInfoType == 1 then
        self:updateBindCardInfo()
    end
end

function TeaHouseQuitRechargeView:onUpdateAgentPropCnt(event)
    local agentPropCnt = TeaHouse.manager.teahouseSetup:getAgentPropCount()
    self:setSelfCardNum(agentPropCnt)
end

function TeaHouseQuitRechargeView:onRefreshTeaCountNum(event)
    self:setQuanCardNum(TeaHouse.manager.teahouseData:getSelfPropcount())
end

function TeaHouseQuitRechargeView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self:close()
end
function TeaHouseQuitRechargeView:onEmptyClicked(send, eventType)
    -- TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self._bindCardInfo:setVisible(false)
    self._bindCardInfoType = nil
end

function TeaHouseQuitRechargeView:onRechargeClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    
    local inputString = self._textCardEdit:getString()
    local propCount = tonumber(inputString)
    if propCount == nil or propCount < 0 or math.floor(propCount) < propCount then
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
        return
    end

    if propCount == 0 then
        TeaHouse.TipTool.showToast("请输入您要充值的数量")
        return
    end

    if propCount > tonumber(self._textCard:getString()) then
        TeaHouse.TipTool.showToast("您的账户库存不足")
        return
    end
    if self:changeCard(propCount) then
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_81, {PropCount = propCount})
        self:close()
    else
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
    end
end

function TeaHouseQuitRechargeView:changeCard(propCount)
    TeaHouse.manager.teahouseMain:ResSubProp(propCount)
    return true
end

function TeaHouseQuitRechargeView:onBtnEventBuyRoomCardTip(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local isSupportTimeCard = XH.lobby:getModule("Lobby"):isSupportTimeCard()
    if not isSupportTimeCard then
        if self._buyCardTipBg then
            local isVisible = self._buyCardTipBg:isVisible()
            self._buyCardTipBg:setVisible(not isVisible)
            self._buyCardTipText:setText(TeaHouse.StringTool.replaceMatchStr("购买房卡:只有在商城购买的房卡可以划入比赛场"))
        end
        return
    end
    self._bindCardInfo:setVisible(not self._bindCardInfo:isVisible() or self._bindCardInfoType ~= 0)
    if self._bindCardInfo:isVisible() then
        self._bindCardInfo:setPositionY(135)
        self._bindCardInfoType = 0
        self:updateBindCardInfo()

        XH.playerData:flushPlayerDrop()
        XH.playerData:flushPlayerLimitedTimeRoomCard()
    end
end

function TeaHouseQuitRechargeView:onBtnEventBuyRoomCardTipQuan(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._bindCardInfo:setVisible(not self._bindCardInfo:isVisible())
    if self._bindCardInfo:isVisible() then
        self._bindCardInfo:setPositionY(60)
        self._bindCardInfoType = 1
        self:updateBindCardInfo()

        TeaHouse.manager.teahouseMain:reqTeaHouseTimeCardsInfo()
    end
end

function TeaHouseQuitRechargeView:formatNumber(num)
    if num == math.floor(num) then
        -- 是整数，直接返回
        return tostring(num)
    else
        local x = math.floor(num * 10) / 10
        if x == num then
            return tostring(num)
        end
        -- 是小数，保留两位小数
        return string.format("%.2f", num)
    end
end


function TeaHouseQuitRechargeView:updateBindCardInfo()
    self._listBindCardInfo:setScrollBarEnabled(false)
    self._listBindCardInfo:removeAllChildren()
    self._itemBindCardInfo:setVisible(false)

    if self._bindCardInfoType == 0 then --大厅卡
        local limitedTimeCardCount = XH.playerData:getLimitedTimeRoomCard()
        local buyCardCount = TeaHouse.BridgeData.getRoomCard() - limitedTimeCardCount
        self._txtBindCardInfoTotal:setString('绑定房卡：'..self:formatNumber(limitedTimeCardCount) .. '    购买房卡:' .. self:formatNumber(buyCardCount))
        local cardInfo = XH.playerData:getPlayerTimeRoomCard()
        local nowTime = XH.lobby:getModule("Shop"):getServerTime()
        --未过期到期时间从小到大
        for i=1, #cardInfo do
            if cardInfo[i].expireTime > nowTime then
                self:createCardInfoItem(cardInfo[i], nowTime)
            end
        end
        for i=#cardInfo, 1, -1  do
            if cardInfo[i].expireTime <= nowTime then
                self:createCardInfoItem(cardInfo[i], nowTime)
            end
        end
    else
        --圈子卡
        self._txtBindCardInfoTotal:setString('获取中...')
        local cardsInfo = TeaHouse.manager.teahouseData:getTimeCardsInfo()
        if not cardsInfo.nTeaPropsCount then
            return            
        end
        local limitedTimeCardCount = cardsInfo.nTeaTimeCardsCount / XH.areaData:getPropLimitedTimeRoomCardRatio()
        local smallRatio = TeaHouse.manager.teahouseData:getCardExchangeRate()
        local buyCardCount = smallRatio ~= nil and cardsInfo.nTeaPropsCount / smallRatio or cardsInfo.nTeaPropsCount
        self._txtBindCardInfoTotal:setString('绑定房卡：'..self:formatNumber(limitedTimeCardCount) .. '    购买房卡:' .. self:formatNumber(buyCardCount))
        local cardInfo = cardsInfo.items
        local nowTime = XH.lobby:getModule("Shop"):getServerTime()
        --未过期到期时间从小到大
        for i=1, #cardInfo do
            if cardInfo[i].expireTime > nowTime then
                self:createCardInfoItem(cardInfo[i], nowTime)
            end
        end
        for i=#cardInfo, 1, -1  do
            if cardInfo[i].expireTime <= nowTime then
                self:createCardInfoItem(cardInfo[i], nowTime)
            end
        end
    end
end

function TeaHouseQuitRechargeView:createCardInfoItem(info, nowTime)
    local item = self._itemBindCardInfo:clone()
    self._listBindCardInfo:pushBackCustomItem(item)
    local txt = XH.UITool.seekNodeByName(item, "KW_TXT")
    local count = info.count/ XH.areaData:getPropLimitedTimeRoomCardRatio()
    txt:setString('绑定房卡:'..self:formatNumber(count)..'，过期时间:' .. os.date("%Y-%m-%d %H:%M:%S", info.expireTime))
    local color = info.expireTime > nowTime and cc.c3b(194,108,70) or cc.c3b(155,155,155)
    txt:setTextColor(color)
    item:setVisible(true)
end

function TeaHouseQuitRechargeView:onBtnEventChargeRoomCardTip(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._chargeCardTipBg then
        local isVisible = self._chargeCardTipBg:isVisible()
        self._chargeCardTipBg:setVisible(not isVisible)
        self._chargeCardTipText:setText("划入比赛场的房卡从游戏账户上扣除")
    end
end

return TeaHouseQuitRechargeView
