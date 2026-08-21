-- 选择需要创建的比赛场
local TeaHouseRemodelModifyInventory = class("TeaHouseRemodelModifyInventory",
                                             TeaHouse.View)

TeaHouseRemodelModifyInventory.RAW_RES_BINDING_CSB =
    {
        csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInventoryManageLayer.csb",
        binding = {
            ["_KW_BTN_INVENTORY_CLOSE"] = {
                tag = "_KW_BTN_INVENTORY_CLOSE",
                name = "_btnClose",
                class = "btn",
                events = "onCloseClicked"
            },
            ["_KW_LIMTIME_TIPS"] = {
                tag = "_KW_LIMTIME_TIPS",
                name = "_textLimTips",
                class = "text",
            },
            ["_KW_BTN_INVENTORY_CANCEL"] = {
                tag = "_KW_BTN_INVENTORY_CANCEL",
                name = "_btnClose",
                class = "btn",
                events = "onCloseClicked"
            },
            ["_KW_BTN_INVENTORY_SURE"] = {
                tag = "_KW_BTN_INVENTORY_SURE",
                name = "_btnSure",
                class = "btn",
                events = "onConfirmClicked"
            },
            ["_KW_CARD_ACCOUNT"] = {
                tag = "_KW_CARD_ACCOUNT",
                name = "_btnAccountNum"
            },
            ["_KW_CARD_TEAHOUSE"] = {
                tag = "_KW_CARD_TEAHOUSE",
                name = "_btnTeaHouseNum"
            },
            ["_KW_TEXT_CARDS"] = {
                tag = "_KW_TEXT_CARDS",
                name = "_textCard",
                class = "text"
            },
            ["_KW_TF_CARD_EDIT"] = {
                tag = "_KW_TF_CARD_EDIT",
                name = "_tfCardEdit",
                class = "textfield"
            },
            ["_KW_TEXT_CARD_EDIT"] = {
                tag = "_KW_TEXT_CARD_EDIT",
                name = "_textCardEdit",
                class = "text"
            },
            ["_KW_PANEL_TEXTLINE"] = {
                tag = "_KW_PANEL_TEXTLINE",
                name = "_panelText",
                class = "panel"
            }
        }
    }

local KW_MAX_TEXT_WIDTH = 120
local KW_MAX_TEXT_FONT_SIZE = 40
local KW_MIN_TEXT_FONT_SIZE = 30

function TeaHouseRemodelModifyInventory:ctor()
    TeaHouseRemodelModifyInventory.super.ctor(self)
    self:initData()
    self:initUI()
end

function TeaHouseRemodelModifyInventory:initData(  )
    self._accountCardNum =  TeaHouse.BridgeData.getRoomCard() 
    self._teahouseData = TeaHouse.manager.teahouseData
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_OPEN_TEACARD_LIMT,handler(self, self.onOpenLimtText))
end

function TeaHouseRemodelModifyInventory:initUI()
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
                    TeaHouse.UITool.adaptTextToWidth(self._textCardEdit,KW_MAX_TEXT_WIDTH,KW_MAX_TEXT_FONT_SIZE,KW_MIN_TEXT_FONT_SIZE)
                elseif eventName == "ended" or eventName == "return" then
                    self._textCardEdit:setVisible(true)
                end
            end)
    end
    if self._btnAccountNum then
        self._btnAccountNum:setString(self._accountCardNum)
    end
    if self._btnTeaHouseNum then
        self._btnTeaHouseNum:setString(self._teahouseData:getSelfPropcount())
    end
end

function TeaHouseRemodelModifyInventory:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_95)
end

function TeaHouseRemodelModifyInventory:onConfirmClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    local inputString = self._textCardEdit:getString()
    local propCount = tonumber(inputString)
    local lobbyId = TeaHouse.BridgeData.getLobbyID()
    if propCount == nil or propCount < 100 or math.floor(propCount) ~= propCount then
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "您输入的数量不正确\n划入比赛场房卡需≥100张")
        return
    end
    if propCount == 0 then
        TeaHouse.TipTool.showToast("请输入你要修改的数量")
        return
    end

    if propCount > self._accountCardNum then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您的购买房卡库存不足")
        return
    end
    TeaHouse.manager.viewManager:openView("TeaHouseTwiceConfirmTip",nil,propCount)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_94)
    -- self:rechargeCardToTeaHouse(propCount)
end

function TeaHouseRemodelModifyInventory:onOpenLimtText()
    if TeaHouse.BridgeData.isFixPayTypeArea() then
        self._textLimTips:setVisible(true)
    end    
end


--副领队划大厅卡(副领队自己购买的卡)到领队的比赛场里
function TeaHouseRemodelModifyInventory:rechargeCardToTeaHouse(rechargeNum)
    local netReqSubProp = TeaHouse.manager.reqManager:createReq("NetReqSubProp")
    netReqSubProp:addReqCallBack(self, self.onRespSubPropCallBack)
    netReqSubProp:start(self._teahouseData:getTeaNumber(), rechargeNum, 10)
    return true
end

--请求增加比赛场房卡回调
function TeaHouseRemodelModifyInventory:onRespSubPropCallBack(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.nCurSubPropCnt then
            self._teahouseData:setSelfPropcount(self._teahouseData:getSelfPropcount() + data.nCurSubPropCnt, self._teahouseData:getTeaNumber()) --总划卡数
            TeaHouse.BridgeData.reqPlayerDrop()
        end
        self:close()
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

return TeaHouseRemodelModifyInventory
�