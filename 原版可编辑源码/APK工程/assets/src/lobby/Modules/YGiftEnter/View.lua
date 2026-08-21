local YGiftEnterView = class("YGiftEnterView", XH.ViewBase)
local ShopConfig = require("lobby.Modules.Shop.Config")
local YGiftBankruptcyDefine = require("lobby.Modules.YGiftBankruptcy.Define")

function YGiftEnterView:getCSBPath()
    return "cocosStudio/hall/CSB/Ygold/GiftEnter/GiftEnterLayer.csb"
end

function YGiftEnterView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", onTouchEnded = "onTouchClose" },
        ["_KW_BTN_MORE"] = { varName = "_KW_BTN_MORE", onTouchEnded = "onTouchMore" },
        ["_KW_GOLD_LIST_1"] = { varName = "_KW_GOLD_LIST_1" },
        ["_KW_GOLD_LIST_2"] = { varName = "_KW_GOLD_LIST_2" },
        ["_KW_GOLD_LIST_3"] = { varName = "_KW_GOLD_LIST_3" },
    }
end

function YGiftEnterView:ctor(param)
    YGiftEnterView.super.ctor(self)
    param = param or {}
    self._level = param.level
    self._gameId = param.gameID
    self._info = param.info
    if not self._level or not self._info then
        XH.TipTool.showToast("暂未获取到配置，请点击重试~")
        self:close()
        return
    end
    self:initUI()
    local tmpInfo = ""
    for k, v in pairs(self._info) do
        tmpInfo = tmpInfo .. string.format( "%s_%s_%d", v.price.."元", XH.StringTool.numberToString(v.gold or 0, 1) .. "金币", v.goods_id)
        if k ~= #self._info then
            tmpInfo = tmpInfo .. ";"
        end
    end
    local conventionData = { 
        page_label = "进房礼包", 
        block_item_id = self._gameId,
        block_label = "大厅"
    }
    local extraData = {
        source = self._level, 
        info = tmpInfo
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052903, conventionData, extraData)
end

function YGiftEnterView:initUI()
    for i = 1, 3 do
        local item = self["_KW_GOLD_LIST_" .. i]
        item:setVisible(false)
        if self._info[i] then
            item:getChildByName("_KW_YH_1"):setVisible(self._info[i].limit > 0)
            item:getChildByName("_KW_YH_2"):setVisible(self._info[i].limit > 0)
            item:getChildByName("_KW_AWARD"):setString(XH.lobby:getModule("YGiftBankruptcy"):getWGoldScore(self._info[i].gold))
            item:getChildByName("_KW_PRICE"):setString(XH.lobby:getModule("YGiftBankruptcy"):getWGoldScore(self._info[i].price) .. "元")
            item:getChildByName("_KW_BTN_BUY"):addTouchEventListener(function(send, eventType)
                if eventType ~= ccui.TouchEventType.ended then
                    return
                end
                self:onTouchEventBuyPropId(send, eventType, self._info[i])
            end)
            item:setVisible(true)
        end
    end
    if #self._info < 3 then
        self._KW_GOLD_LIST_1:setPositionX(self._KW_GOLD_LIST_1:getPositionX() + 150)
        self._KW_GOLD_LIST_2:setPositionX(self._KW_GOLD_LIST_2:getPositionX() + 150)
    end
end

function YGiftEnterView:onTouchEventBuyPropId(send, eventType, info)
    if XH.lobby:getModule("YGiftEnter"):getActivityId() == nil then
        XH.TipTool.showToast("暂未获取到配置，请点击重试~")
        return
    end
    local productId = YGiftBankruptcyDefine.ACTLIST.Enter .. "-" .. XH.lobby:getModule("YGiftEnter"):getActivityId() .. "-" .. info.goods_id
    self:throwClickData(info)
    XH.lobby:getModule("YGiftBankruptcy"):reqBuyPropByProductId(productId,self._gameId)
    self:close()
end

function YGiftEnterView:onTouchMore()
    XH.viewManager:openView("ShopView", nil, { productType = ShopConfig.SpecialTag.GOLD })
    self:close()
end

function YGiftEnterView:onTouchClose()
    self:close()
end

function YGiftEnterView:throwClickData(info)
    local tmpInfo = ""
    tmpInfo = tmpInfo .. string.format( "%s_%s_%d", info.price.."元", XH.StringTool.numberToString(info.gold or 0, 1) .. "金币", info.goods_id)
    local conventionData = { 
        page_label = "进房礼包", 
        block_item_id = self._gameId,
        block_label = "大厅",
        page_item_id = "充值"
    }
    local extraData = {
        source = self._level, 
        info = tmpInfo
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jblb2024052904, conventionData, extraData)
end

return YGiftEnterView