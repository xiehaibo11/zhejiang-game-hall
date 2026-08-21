local EnterRoomGiftPackView = class("EnterRoomGiftPackView", NG.ViewBase)
local GoldStoreDefine = require("newgold.GoldLobby.Modules.GoldStore.Define")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function EnterRoomGiftPackView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/EnterRoomGiftPack/EnterRoomGiftPackLayer.csb"
end

function EnterRoomGiftPackView:getBindingInfo()
    return {
        --
        ["_KW_BTN_BACK"] = { varName = "_KW_BTN_BACK", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_GOLD"] = { varName = "_KW_GOLD" },
        ["_KW_DIAMOND"] = { varName = "_KW_DIAMOND" },
        ["_KW_BTN_GO"] = { varName = "_KW_BTN_GO", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickExchange" },
        ["_KW_BTN_SHOP"] = { varName = "_KW_BTN_SHOP", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickShop" },
        ["_KW_PANEL_ACT_1"] = { varName = "_KW_PANEL_ACT_1", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickGoAct" },
        ["_KW_PANEL_ACT_2"] = { varName = "_KW_PANEL_ACT_2", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickGoAct" },
        ["_KW_PANEL_ACT_3"] = { varName = "_KW_PANEL_ACT_3", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickGoAct" }
    }
end

function EnterRoomGiftPackView:getProxyEvents()
    return {
        --
        { module = NG.goldLobby:getModule("GoldStore"), eventKeyName = "EVNET_SHOPMANAGER_SHOW_SHOP", callBack = "onFlushShopProps" }
    }
end

function EnterRoomGiftPackView:ctor(info)
    EnterRoomGiftPackView.super.ctor(self, info)
    self._info = info
    self._itemIndex = nil
    self:initUI()
    self:initLeftAct()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_18, nil, { area_id = GoldAreaConfig.AreaID })
end

function EnterRoomGiftPackView:initUI()
    local props = NG.goldLobby:getModule("GoldStore"):getPropsThisAreaID(GoldStoreDefine.TYPE.GOLD)
    if #props == 0 then
        NG.goldLobby:getModule("GoldStore"):reqProductList(GoldStoreDefine.TYPE.GOLD)
        return
    end
    self:flushItemState()
end

-- 获取到商品信息
function EnterRoomGiftPackView:onFlushShopProps(event)
    if event.data == nil or event.data.tag == nil or event.data.tag ~= GoldStoreDefine.TYPE.GOLD then
        return
    end
    self:flushItemState()
end

-- 显示最近档位
function EnterRoomGiftPackView:flushItemState()
    local props = NG.goldLobby:getModule("GoldStore"):getPropsThisAreaID(GoldStoreDefine.TYPE.GOLD)
    if #props == 0 then
        NG.TipTool.showToast("商品异常，请重试~")
        self:close()
        return
    end
    local gold = GoldPlayerData.JoyBean
    for i = 1, #props do
        if tonumber(props[i].prop_count) + gold >= self._info.minscore then
            self:setLastPropInfo(props, i)
            return
        end
        if i == #props then
            self:setLastPropInfo(props, i)
        end
    end
end

function EnterRoomGiftPackView:setLastPropInfo(props, i)
    self._itemIndex = i
    self._KW_DIAMOND:setString(props[i].price)
    self._KW_GOLD:setString(props[i].prop_count .. "")
    self._showProp = props[i]
    ccui.Helper:doLayout(self._KW_GOLD)
end

-- 触发兑换逻辑
function EnterRoomGiftPackView:onClickExchange()
    local name = ""
    if self._showProp ~= nil then
        name = self._showProp.price .. "_" .. self._showProp.prop_count
    end
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_10, { page_item_id = name }, { la_numid = GoldPlayerData.NumId })
    NG.goldLobby:getModule("GoldStore"):reqBuyItem(GoldStoreDefine.TYPE.GOLD, self._itemIndex, self, self.startJoinRoom)
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_15, nil, { area_id = GoldAreaConfig.AreaID })
end

-- 兑换成功后处理
function EnterRoomGiftPackView:startJoinRoom()
    NG.goldLobby:getModule("GoldCommon"):reqJoinRoom(NG.goldLobby.selectGameID or GoldAreaConfig.LZDDZ, false, self._info.roomId, self._info.appId)
    self:close()
end

function EnterRoomGiftPackView:onClickClose()
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_17, nil, { area_id = GoldAreaConfig.AreaID })
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_11, nil, { la_numid = GoldPlayerData.NumId })
    self:close()
end

function EnterRoomGiftPackView:onClickShop()
    NG.viewManager:openView("NewGold_StoreView", nil, { productType = GoldStoreDefine.TYPE.GOLD })
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.NEW_GOLD_THROW_16, nil, { area_id = GoldAreaConfig.AreaID })
    self:close()
end

function EnterRoomGiftPackView:initLeftAct()
    local actList = NG.goldLobby:getModule("EnterRoomGiftPack"):getActList()
    local name = ""
    self._KW_PANEL_ACT_1:setVisible(false)
    self._KW_PANEL_ACT_2:setVisible(false)
    self._KW_PANEL_ACT_3:setVisible(false)
    for i = 1, #actList do
        local info = actList[i]
        local node = self["_KW_PANEL_ACT_" .. i]
        node:setVisible(true)
        node:getChildByName("_KW_TEXT_NAME"):setString(info.name)
        node:getChildByName("_KW_TEXT_INFO"):setString(info.status)
        node:getChildByName("_KW_TEXT_AWARD"):setString(info.award or "")
        node:getChildByName("_KW_TEXT_INFO"):setVisible(info.status ~= "免费领取")
        node:getChildByName("_KW_FREE_GET"):setVisible(info.status == "免费领取")
        name = name .. info.name .. "_"
    end
    NG.throwDataManager:throwData(NG.GoldThrowDataDefine.GOLD_QUICK_THROW_9, { page_item_id = name }, { la_numid = GoldPlayerData.NumId })
end

function EnterRoomGiftPackView:onClickGoAct(send)
    local node = send:getChildByName("_KW_TEXT_NAME")
    if node == nil then
        return
    end
    local name = node:getString()
    if name == "每日签到" then
        NG.viewManager:openView("NewGold_DailySignInView")
        self:close()
    elseif name == "超值畅玩" then
        NG.viewManager:openView("NewGold_PlayAwardView")
        self:close()
    elseif name == "整点福利" then
        NG.viewManager:openView("NewGold_HourLoginAwardView")
        self:close()
    end
end

return EnterRoomGiftPackView
