---@class TeaHouseCardEditView : View
local TeaHouseCardEditView = class("TeaHouseCardEditView", TeaHouse.View)

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 40
local KW_MIN_TEXT_FONT_SIZE = 30

TeaHouseCardEditView.EVENT_TYPE_START_CREATE_GUIDE ="EVENT_TYPE_START_CREATE_GUIDE "

TeaHouseCardEditView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseCardEditView.csb",
    binding = {
        ["_KW_BTN_EDITCARD_CLOSE"] = {
            tag = "_KW_BTN_EDITCARD_CLOSE",
            name = "_btnClose",
            class = "btn",
            events = "onCloseClicked"
        },
        ["_KW_BTN_EDITCARD_ADD"] = {
            tag = "_KW_BTN_EDITCARD_ADD",
            name = "_btnAdd",
            class = "btn",
            events = "onAddClicked"
        },
        ["_KW_BTN_EDITCARD_DEL"] = {
            tag = "_KW_BTN_EDITCARD_DEL",
            name = "_btnDel",
            class = "btn",
            events = "onDelClicked"
        },
        ["_KW_BTN_RECHARGE"] = {
            tag = "_KW_BTN_RECHARGE",
            name = "_btnRecharge" ,
            class = "btn",
            events = "onRecharged"
        },
        ["_KW_TEXT_CARDS"] = {tag = "_KW_TEXT_CARDS", name = "_textCard", class = "text"},
        ["_KW_TF_CARD_EDIT"] = {tag = "_KW_TF_CARD_EDIT", name = "_tfCardEdit", class = "textfield"},
        ["_KW_TEXT_CARD_EDIT"] = {tag = "_KW_TEXT_CARD_EDIT", name = "_textCardEdit", class = "text"},
        ["_KW_PANEL_TEXTLINE"] = {tag = "_KW_PANEL_TEXTLINE", name = "_panelText", class = "panel"},
        ["_KW_REAL_CARD_AREA"] = {tag = "_KW_REAL_CARD_AREA", name = "_RealCardpanel", class = "panel"},
        ["_KW_TEXT_CARDSNUM"] = {tag = "_KW_TEXT_CARDSNUM", name = "_cardsnum", class = "text"},
        ["_KW_IMG_EDITCARD_BG"] = {tag = "_KW_IMG_EDITCARD_BG", name ="_PanelBg"},
        ["_KW_IMG_EDITCARD_TITLE"] = {tag = "_KW_IMG_EDITCARD_TITLE", name ="_imgTitle"},
        
        ["_KW_PANEL_OLD_CARD_INFO"] = {tag = "_KW_PANEL_OLD_CARD_INFO", name = "_panelOldCard", class = "panel"},
        ["_KW_TEXT_CARDS_OLD"] = {tag = "_KW_TEXT_CARDS_OLD", name = "_txtOldCard", class = "text"},
        ["_KW_TEXT_EDITCARD3"] = {tag = "_KW_TEXT_EDITCARD3", name = "_txt3", class = "text"},
        ["_KW_BTN_ONE_KEY_INPUT"] = {
            tag = "_KW_BTN_ONE_KEY_INPUT",
            name = "_btnOneKeyInput" ,
            class = "btn",
            events = "onOneKeyInput"
        },
    }
}

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 40
local KW_MIN_TEXT_FONT_SIZE = 30

function TeaHouseCardEditView:ctor(info)
    TeaHouseCardEditView.super.ctor(self)
    local teaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
    TeaHouse.manager.teahouseSetup:reqPlayerTeaHouseCost(teaNumber)
    TeaHouse.manager.teahouseSetup:reqTeaHousePropCnt(teaNumber)
    self._info = info
    self._kucun = 0
    self:initUI()
    self:initEvents()
end

function TeaHouseCardEditView:initEvents()
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_REFRESH_RECHARAGE_TEACARD,handler(self, self.onRefreshCountNum))

    self:createListener(TeaHouse.manager.teahouseSetup)
    :addEventListener(TeaHouse.manager.teahouseSetup.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS,handler(self, self.onRefreshCountNum))
end

function TeaHouseCardEditView:initUI()
    self._panelText:setScrollBarEnabled(false)
    self._panelOldCard:setScrollBarEnabled(false)
    self._RealCardpanel:setVisible(true)
    local teahouseData = TeaHouse.manager.teahouseData
    self._cardsnum:setText(teahouseData:getSelfPropcount())
    if not teahouseData:isOwner() then
        self._btnRecharge:setVisible(false)
    end
    TeaHouse.BridgeUI.setText(self._panelText, "KW_TEXT_EDITCARD2", TeaHouse.BridgeUI.getText(self._panelText, "KW_TEXT_EDITCARD2"))
    TeaHouse.BridgeUI.setText(self._RealCardpanel, "KW_TEXT_EDITCARD4", TeaHouse.BridgeUI.getText(self._RealCardpanel, "KW_TEXT_EDITCARD4"))
    
    if TeaHouse.manager.teaHouseVisualCardTransferModule:isFromVisualCardMode() and TeaHouse.manager.teaHouseVisualCardTransferModule:isShowTwoCardInfo() then
        TeaHouse.BridgeUI.setText(self._panelText, "KW_TEXT_EDITCARD2", "张比赛场房卡(新)")
        self._txt3:setString("请输入修改的房卡数(新)")
        self._panelOldCard:setVisible(true)
        self._btnOneKeyInput:setVisible(true)
        self._txtOldCard:setString(TeaHouse.manager.teaHouseVisualCardTransferModule:getMemberCardNum(self._info, true))
    end
    
    local payTypes = teahouseData:getPayTypeByID()
    for _, payType in pairs(payTypes) do
        if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_AA 
        or payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_AGENT_PLAYER_WINNER then
            self._RealCardpanel:setVisible(false)
            self._btnAdd:setVisible(false)
            local widthPostionX =self._PanelBg:getPositionX()
            self._btnDel:setPositionX(widthPostionX/2)
        end 
    end               
    if self._info and self._info.nAgentShowProps then
        local payTypes = teahouseData:getPayTypeByID()
        local isAgentPlayer = teahouseData:isAgentPlayerPayType()
        if not payTypes then
            return false
        end
        for _, payType in pairs(payTypes) do
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then                
                if isAgentPlayer then
                    self._textCard:setText(string.format("%.2f", self._info.nPlayerOwnerCards / 100))
                else
                    local nAgentShowProps = self._info.nPlayerOwnerCards / teahouseData:getPlayerCardExchangeRate(self._info)
                    self._textCard:setText(tostring(nAgentShowProps))
                end
            else
                if isAgentPlayer then
                    self._textCard:setText(string.format("%.2f", self._info.nAgentShowProps / 100))
                else
                    local nAgentShowProps = self._info.nAgentShowProps / teahouseData:getPlayerCardExchangeRate(self._info)
                    self._textCard:setText(tostring(nAgentShowProps))
                end
            end
        end

        
        
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

function TeaHouseCardEditView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseCardEditView:onAddClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    
    local inputString = self._textCardEdit:getString()
    local propCount = tonumber(inputString)
    if propCount == nil or propCount < 0 or math.floor(propCount) < propCount then
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
        return
    end

    if propCount == 0 then
        TeaHouse.TipTool.showToast("请输入你要修改的数量")
        return
    end
    if TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.TAIZHOU then
        local teahouseData = TeaHouse.manager.teahouseData
        local payTypes = teahouseData:getPayTypeByID()
        local isLiuTongMode = false
        for _, payType in pairs(payTypes) do
            if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then                   
                isLiuTongMode = true        
            end
        end
        if isLiuTongMode then
            local teaCardNum = tonumber(self._cardsnum:getString())
            if teaCardNum < propCount then
                TeaHouse.TipTool.showToast("加卡数量超过比赛场房卡，请修改后再试")
                return
            end
        end
    end
    if self:changeCard(propCount) then
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_14,{tonumid = self._info.numid,propCount = propCount,kuncun = self._kucun})
        self:close()
    else
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
    end
end

function TeaHouseCardEditView:onDelClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local inputString = self._textCardEdit:getString()
    local propCount = tonumber(inputString)
    if propCount == nil or propCount < 0 or math.floor(propCount) < propCount then
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
        return
    end

    if propCount == 0 then
        TeaHouse.TipTool.showToast("请输入你要修改的数量")
        return
    end

    if self:changeCard(-1 * propCount) then
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_15,{tonumid = self._info.numid,propCount = (-1 * propCount),kuncun = self._kucun})
        self:close()
    else
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确")
    end
end

function TeaHouseCardEditView:onRecharged(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseQuitRechargeView")
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_6,{Area ="修改玩家可用房卡时点击充值按钮"})
end

function TeaHouseCardEditView:onOneKeyInput(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._textCardEdit:setString(self._txtOldCard:getString())
end

function TeaHouseCardEditView:changeCard(propCount)
    local teahouseData = TeaHouse.manager.teahouseData
    local isAgentPlayer = teahouseData:isAgentPlayerPayType()
    local payTypes = teahouseData:getPayTypeByID()
    local tmpUseCards
    local isLiuTongMode = false
    for _, payType in pairs(payTypes) do
        if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then                   
            tmpUseCards = self._info.nPlayerOwnerCards    
            isLiuTongMode = true        
        else
            tmpUseCards = self._info.nAgentShowProps
        end
    end
    if isAgentPlayer then
        local propCount = tonumber(string.format("%.2f", propCount))
        local nAgentShowProps = tmpUseCards / 100
        if nAgentShowProps + propCount < 0 then
            return false
        end
        self._kucun = nAgentShowProps + propCount
        TeaHouse.manager.teahouseMember:setPlayerProp(self._info.areaid, self._info.numid, propCount * 100, nil, nAgentShowProps)
    else
        local nAgentShowProps = tmpUseCards / teahouseData:getPlayerCardExchangeRate(self._info)
        if nAgentShowProps + propCount < 0 then
            return false
        end
        self._kucun = nAgentShowProps + propCount
        TeaHouse.manager.teahouseMember:setPlayerProp(self._info.areaid, self._info.numid, propCount, TeaHouse.manager.teahouseData:getSelfPropcount(), nAgentShowProps)
    end
    return true
end

function TeaHouseCardEditView:onRefreshCountNum()
    self._cardsnum:setText(TeaHouse.manager.teahouseData:getSelfPropcount())
end

return TeaHouseCardEditView
   �4  