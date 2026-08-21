local AskBuyView = class("AskBuyView", XH.ViewBase)

function AskBuyView:getCSBPath()
    return "cocosStudio/hall/CSB/MessageBoxEx/QuickChargeBuy.csb"
end

function AskBuyView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KWA_BTND_OK"] = { varName = "_btnOK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventOK" },
        ["_KW_LACK_DIAMOND_TEXT"] = { varName = "_lackDiamondNum"},
        ["_KW_PRICE_TEXT"] = { varName = "_price"},
        ["_KW_DIAMOND_TEXT"] = { varName = "_diamondNum"},
        ["_KW_COST_DIAMOND_TEXT"] = { varName = "_costDiamondNum"},
        ["_KW_TARGET_NAME"] = { varName = "_targetPropName"},
        ["_KW_TIP_Text_1"] = { varName = "_chargeTip1"},
        ["_KW_TIP_Text_2"] = { varName = "_chargeTip2"},
        ["_KW_TIP_Text_3"] = { varName = "_chargeTip3"},
        ["_KW_TIP_Text_4"] = { varName = "_chargeTip4"},
        ["_KW_TIP_Text_5"] = { varName = "_chargeTip5"},
        ["_KW_TIP_Text_6"] = { varName = "_chargeTip6"},
    }
end

function AskBuyView:ctor(param)
    self._canTouchBackGround = false
    param = param or { }
    AskBuyView.super.ctor(self, param)
    self:initData(param)
    self:initUI()
end

function AskBuyView:initData(param)
    self._lackNum = param.lackNum
    self._targetName = param.targetName
    self._costNum = param.costNum
    self._product = param.product
    self._giftType = param.giftType
end

-- 初始化界面UI
function AskBuyView:initUI()
    if self._lackDiamondNum then
        self._lackDiamondNum:setText(self._lackNum)
    end
    if self._price then
        self._price:setText(self._product.price)
    end
    if self._diamondNum then
        self._diamondNum:setText(self._product.value)
    end
    if self._costDiamondNum then
        self._costDiamondNum:setText(self._costNum)
    end
    if self._targetPropName then
        self._targetPropName:setText(self._targetName)
    end
    self:dolayout()
end

function AskBuyView:dolayout()
    local KW_HORIZONTAL_DIS = 5
    local pos1 = self._chargeTip1:getContentSize().width + self._chargeTip1:getPositionX() + KW_HORIZONTAL_DIS
    self._lackDiamondNum:setPositionX(pos1)
    local pos2 = self._lackDiamondNum:getPositionX()  + self._lackDiamondNum:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip2:setPositionX(pos2)
    local pos3 = self._chargeTip2:getPositionX()  + self._chargeTip2:getContentSize().width + KW_HORIZONTAL_DIS
    self._price:setPositionX(pos3)
    local pos4 = self._price:getPositionX()  + self._price:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip3:setPositionX(pos4)
    local pos5 = self._diamondNum:getPositionX()  + self._diamondNum:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip4:setPositionX(pos5)
    local pos6 = self._chargeTip5:getPositionX()  + self._chargeTip5:getContentSize().width + KW_HORIZONTAL_DIS
    self._costDiamondNum:setPositionX(pos6)
    local pos7 = self._costDiamondNum:getPositionX()  + self._costDiamondNum:getContentSize().width + KW_HORIZONTAL_DIS
    self._chargeTip6:setPositionX(pos7)

    self._lackDiamondNum:setVisible(true)
    self._price:setVisible(true)
    self._diamondNum:setVisible(true)
    self._costDiamondNum:setVisible(true)
    self._targetPropName:setVisible(true)
end

function AskBuyView:onTouchEventClose(send, eventType)
    self:close()
end

function AskBuyView:onTouchEventOK(send, eventType)
    local targetId = 0
    if self._targetName and type(self._targetName) == "string" then
        if string.find(self._targetName, "金币") then
            targetId = XH.areaData:getGoldPropId()
        elseif string.find(self._targetName, "房卡") then
            targetId = XH.areaData:getPropRoomCardID()
        elseif string.find(self._targetName, "钻石") then
            targetId = XH.areaData:getPropDiamndID()
        end
    end
    XH.lobby:getModule("Shop"):reqBuyDiamond(self._product, "deliver_award", self._giftType, nil, true, nil, targetId)
    self:close()
end

return AskBuyViewi