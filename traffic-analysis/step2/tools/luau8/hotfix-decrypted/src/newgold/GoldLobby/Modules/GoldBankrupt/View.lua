local GoldBankruptView = class("GoldBankruptView", NG.ViewBase)
local GoldNewDefine = require("src.newgold.GoldLobby.Modules.Gold.Define")
local GoldActDefine = require("newgold.GoldLobby.Modules.GoldBankrupt.Define")
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")

-- 一把翻本
function GoldBankruptView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/GoldBankrupt/GoldBankRuptLayer.csb"
end

function GoldBankruptView:getBindingInfo()
    return {
        -- 
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_GOACT"] = { varName = "_KW_BTN_GOACT", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventGoAct" },
        ["_KW_BTN_EXCHANGE"] = { varName = "_KW_BTN_EXCHANGE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventExchange" },
        ["_KW_TEXT_GOLD_NUM"] = { varName = "_KW_TEXT_GOLD_NUM" },
        ["_KW_ANI_1"] = { varName = "_KW_ANI_1" },
        ["_KW_ANI_2"] = { varName = "_KW_ANI_2" },
        ["_KW_TEXT_GOLD_Q"] = { varName = "_KW_TEXT_GOLD_Q" },
        ["_KW_TEXT_DIAMOND"] = { varName = "_KW_TEXT_DIAMOND" },
        ["_KW_TEXT_GOLD_SEND"] = { varName = "_KW_TEXT_GOLD_SEND" },
        ["_KW_TEXT_GOLD_DISCOUNT"] = { varName = "_KW_TEXT_GOLD_DISCOUNT" },
    }
end

function GoldBankruptView:getProxyEvents()
    return {
    --
        {module = NG.goldLobby:getModule("GoldStore"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onFlushShopProps"}
    }
end

function GoldBankruptView:ctor(param)
    GoldBankruptView.super.ctor(self, param)
    self._isExchange = param == GoldActDefine.ACT_DIS_STATE.SHOW_EXCHANGE
    self._isWaiting = false
    self:initUI()
    self:initAni()
    self._KW_TEXT_GOLD_SEND:setVisible(false)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_ACT_DIS_BUY_SHOW)
end

function GoldBankruptView:initAni()
    local params = { path = "cocosStudio/GoldNew/Lobby/Json/bankrupt/", tex = "Ybfb_butt.json", ske = "Ybfb_butt.atlas", armatureName = "animation" }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_ANI_2:addChild(spineNode)
        spineNode:setScale(2.5)
    end
    local params = { path = "cocosStudio/GoldNew/Lobby/Json/bankrupt/", tex = "Ybfb_jt.json", ske = "Ybfb_jt.atlas", armatureName = "animation" }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_ANI_1:addChild(spineNode)
        spineNode:setScale(2.5)
    end
end

function GoldBankruptView:initUI()
    local actInfo = NG.goldLobby:getModule("GoldBankrupt"):getActInfo()
    if actInfo == nil then
        return
    end

    self._KW_BTN_GOACT:setVisible(not self._isExchange)
    self._KW_BTN_EXCHANGE:setVisible(self._isExchange)
    if self._isExchange then
        -- local info =NG.goldLobby:getModule("GoldStore"):getProductByPropNum(GoldStoreDefine.TYPE.GOLD_DISCOUNT, XH.areaData:getPropList().propDiamndID, propcnt)
        self._KW_TEXT_DIAMOND:setString(actInfo.gear .. "")
    else
        self._KW_TEXT_GOLD_Q:setString(actInfo.gear .. "元抢购")
    end
    self._KW_TEXT_GOLD_NUM:setString("+" .. actInfo.goldCnt)
    self._KW_TEXT_GOLD_SEND:setString("多送20%")
    self._KW_TEXT_GOLD_DISCOUNT:setString(actInfo.discount .. "%")
end

function GoldBankruptView:onTouchEventClose()
    self:close()
end

function GoldBankruptView:getExchangeInfo(propcnt)
    local props = NG.goldLobby:getModule("GoldStore"):getPropsThisAreaID(GoldStoreDefine.TYPE.GOLD_DISCOUNT)
    if #props == 0 then
        NG.goldLobby:getModule("GoldStore"):reqProductList(GoldStoreDefine.TYPE.GOLD_DISCOUNT)
        return
    end
    return NG.goldLobby:getModule("GoldStore"):getProductByPropNum(GoldStoreDefine.TYPE.GOLD_DISCOUNT, GoldStoreDefine.HLD_ID, propcnt)
end

-- 获取到商品信息
function GoldBankruptView:onFlushShopProps(event)
    if event.data == nil or event.data.tag == nil or event.data.tag ~= GoldStoreDefine.TYPE.GOLD_DISCOUNT then
        return
    end
    if self._isWaiting then
        self:onTouchEventExchange()
    end
    XH.TipTool.hideLoading()
end

-- 购买档位
function GoldBankruptView:onTouchEventExchange()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_ACT_DIS_BUY_CLICK, {label = self._KW_TEXT_DIAMOND:getString() .. "钻石"})

    local actInfo = NG.goldLobby:getModule("GoldBankrupt"):getActInfo()
    if actInfo == nil then
        return
    end
    -- local productInfo = self:getExchangeInfo(180000)
    local productInfo = self:getExchangeInfo(actInfo.goldCnt)
    if productInfo == nil then
        -- NG.TipTool.showToast("未找到匹配档位的商品，请重试~")
        XH.TipTool.showLoading(5)
        self._isWaiting = true
    else
        productInfo.prop_type = GoldStoreDefine.GOLD_TYPE_DISCOUNT
        NG.goldLobby:getModule("GoldStore"):reqBuyProp(productInfo, false, self, function() 
            NG.goldLobby:getModule("GoldBankrupt"):updateShowActState(false, true, true)
            NG.goldLobby:getModule("GoldCommon"):setNeedChangeTable(true)
            NG.TipTool.showTip({ type = NG.TIP_LAYER_TYPE.OK }, "兑换成功")
            if not tolua.isnull(self) then
                self:close()
            end
        end)
    end
end

-- 购买档位
function GoldBankruptView:onTouchEventGoAct()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.NEW_GOLD_ACT_DIS_BUY_CLICK, {label = self._KW_TEXT_GOLD_Q:getString()})

    local actInfo = NG.goldLobby:getModule("GoldBankrupt"):getActInfo()
    if actInfo == nil then
        return
    end

    NG.goldLobby:getModule("GoldStore"):reqBuyPropByProductId(GoldNewDefine.ACTLIST.BANK_RUPT .. actInfo.gear .. "-" .. (actInfo.looseSession or actInfo.loose_session or ""), true)
    self:close()
end

return GoldBankruptView�