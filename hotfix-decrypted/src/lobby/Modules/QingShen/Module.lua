-- -*- coding: utf-8 -*-
--- 请神 Module 入口：状态初始化 + 组装各逻辑分片（对外 API 不变）
local Compat = require("lobby.Modules.PropPush.Compat")
local Util = require("lobby.Modules.QingShen.Logic.Util")
local Define = Util.Define

local _getPropPushModule = Util.getPropPushModule
local QING_SHEN_PROP_SET = Util.QING_SHEN_PROP_SET

local QingShenModule = class("QingShenModule", XH.ModuleBase)

QingShenModule.EVENT_GAME_START = "EVENT_GAME_START"
QingShenModule.EVENT_PROP_TIME_EXPIRED = "EVENT_PROP_TIME_EXPIRED"
QingShenModule.EVENT_SHOP_GOODS_LIST_V2 = "EVENT_SHOP_GOODS_LIST_V2"
QingShenModule.INTEGRATE_EVENT_REFRESH = Define.INTEGRATE_EVENT_REFRESH

function QingShenModule:ctor()
    QingShenModule.super.ctor(self)
    self._propId = Define.QingShenPropId.MaZu
    self._recvPropId = 0
    self._propCount = 0
    self._propCounts = {}
    self._level = 0
    self._maxLevel = 3
    --- 下一档升级对应的兑换商品（Shop 归一化 + strategyId、business、gid、costPropId）
    self._goodInfo = nil
    -- 默认钻石id
    self._costPropId = Compat.getDiamondPropId()
    self.isFree = false
    self._activityId = nil
    --- [userId][propId] = 结束服务端时间戳（同桌广播与本地 HTTP 共用，主键均为 dwUserID）
    self._propTimeMap = {}
    --- [userId][propId] = 等级 1~3（与 _propTimeMap 平行，重挂循环动画时查） 暂时不用，保留
    self._propLevelMap = {}
    self._propTimeScheduleId = nil
    --- 兑换列表 V2（game_proppush）：[道具 id][等级 1~3] = goodInfo（与 reqExchangeGoodsV2 所用结构一致）
    self._exchangeGoodsByPropId = {}
    --- PropPush recommendList 下发的请神等级：[道具 id] = 当前等级
    --- 仅用于整合界面关联下一档兑换商品，不与道具时效等级混用。
    self._recommendLevelByPropId = {}
    --- 本局续费提醒是否已被玩家手动关闭（离开阈值或离房后重置）
    self._renewRemindDismissed = false
    self._renewRemindNode = nil
    self._renewRemindTipText = nil
    self._iconRandomPropId = nil
    self._equippedPropId = nil
    self._equipState = nil
    --- 最近一次购买/使用的神明道具 id（播放赐福动画用；与推送 _propId 可不同）
    self._lastPurchasePropId = nil
    --- 购买成功后待自动装扮的神明（无装扮或装扮已过期时写入）
    self._pendingAutoWearPropId = nil
    --- 兑换回流：下一次 GetEquipState 成功时需通知同桌刷新头像（打开整合页拉态不置位）
    self._pendingPurchaseEquipBroadcast = nil
    --- 进桌后待补发同桌同步（重连时装扮/时效可能尚未就绪）
    self._pendingTableQingShenNotice = nil
    --- 活动列表是否下发 god_tips（请财神整合教程目标用户）
    self._hasGodTipsAct = false
    --- 购买埋点 scene_type：请神整合页 / 请神弹窗
    self._purchaseSceneType = Define.ThrowSceneType.Popup
    self:reqExchangeGoodListV2({ business = { Define.BUSINESS_GAME_PROPPUSH } })
end


function QingShenModule:setPurchaseSceneType(sceneType)
    if sceneType == Define.ThrowSceneType.Integrate or sceneType == Define.ThrowSceneType.Popup then
        self._purchaseSceneType = sceneType
    end
end


function QingShenModule:getPurchaseSceneType()
    return self._purchaseSceneType or Define.ThrowSceneType.Popup
end


function QingShenModule:throwData(key, data)
    local propPush = _getPropPushModule()
    if propPush and propPush.throwData then
        propPush:throwData(key, data or {})
        return
    end
    data = data or {}
    local areaId = XH.areaData:getAreaID()
    data.page = data.page or "包厢"
    data.game_id = data.game_id or string.format("%d_%d", areaId, Compat.safeKindId() or 0)
    local customize = {
        players = Compat.safeChairCount(),
    }
    if data.scene_type then
        customize.scene_type = data.scene_type
    end
    XH.NewThrowDataManager:throwData(key, data, customize)
end


function QingShenModule:throwIntegrateClick(clickType, propId)
    propId = tonumber(propId)
    local level = 0
    if propId and propId > 0 then
        level = self:getGodRecommendLevel(propId) or 0
        if level < 1 then
            level = tonumber(self._level) or 0
        end
    end
    self:throwData(XH.NewThrowDataDefine.oh26042111, {
        page_item_id = clickType or "",
        page_label = (propId and Define.GOD_NAME[propId]) or "",
        block_item_id = propId or 0,
        block_label = level,
    })
end


function QingShenModule:getProxyEvents()
    local events = {
        -- { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_GOODS_LIST_V2", callBack = "_onShopGoodsListV2ForPropPush", },
        -- { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_EXCHANGE_GOODS_V2", callBack = "_onShopExchangeGoodsV2ForQingShen",},
        { module = XH.lobby:getModule("Shop"), eventKeyName = "EVENT_SHOP_BUY_PROPS_V2", callBack = "_onShopBuyPropsV2ForQingShen"},
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "ENTER_FOREGROUND", callBack = "onEnterForeground"},
        {module = XH.lobby:getModule("Shop"), eventKeyName = "EVNET_DIAMOND_BUY_RESULT", callBack = "onPayResut"}, -- 钻石支付结果
    }
    -- 浙江 CF.roomData，替代宝宝 ENotifySubject（进离座 / 状态 / 清桌）
    if CF and CF.roomData then
        events[#events + 1] = {
            module = CF.roomData,
            eventKeyName = "EVENT_PLAYERLIST_CHANGED",
            callBack = "onRoomPlayerListChanged",
        }
        events[#events + 1] = {
            module = CF.roomData,
            eventKeyName = "EVENT_PLAYER_STATE_CHANGED",
            callBack = "onRoomPlayerStateChanged",
        }
        events[#events + 1] = {
            module = CF.roomData,
            eventKeyName = "EVENT_CLEAR_TABLE",
            callBack = "onRoomClearTable",
        }
    end
    return events
end


function QingShenModule:getReqConfig()
    return {
        ReqQingShenGetEquipState = {
            reqPath = "lobby.Req.QingShen.ReqQingShenGetEquipState",
            callBack = self.respQingShenGetEquipState,
        },
        ReqQingShenOperateEquip = {
            reqPath = "lobby.Req.QingShen.ReqQingShenOperateEquip",
            callBack = self.respQingShenOperateEquip,
        },
        ReqPropsCount50 = {
            reqPath = "lobby.Req.BagSysNew.ReqPropsCount50",
            callBack = self.onRespPropsCount50,
        },
        ReqAcceptPresenter = {
            reqPath = "lobby.Req.GoldLaunch.ReqAcceptPresenter",
            callBack = self.onRespAcceptPresenter,
        },
        ReqPropsDiscount = {
            reqPath = "lobby.Req.GoldLaunch.ReqPropsDiscount",
            callBack = self.onRespPropsDiscount,
        },
        ReqUseEquipCard = {
            reqPath = "lobby.Req.Prop.ReqUseEquipCard",
            callBack = self.onRespUseEquipCard,
        },
        ReqExchangeGoodsListV2 = {reqPath = "lobby.Modules.GoldNew.Req.ReqExchangeGoodsListV2", callBack = self.respExchangeGoodsListV2},
        ReqExchangeGoodsV2 = {reqPath = "lobby.Modules.GoldNew.Req.ReqExchangeGoodsV2", callBack = self.respExchangeProductV2}
    }
end


function QingShenModule:_getMyUserId()
    return Compat.getMyNumberId()
end


function QingShenModule:getGodList()
    return Define.GOD_LIST
end


function QingShenModule:setData(data)
    self._propId = data.propId
    self._propCount = self._propCounts[data.propId] or 0
    self._recvPropId = data.propId

    self._level = data.curLv
    self._maxLevel = data.maxLv
    if next(self._exchangeGoodsByPropId) ~= nil then
        self:_syncGoodInfoFromExchangeMap()
    end
    self:reqEquipState()
    self:refreshIconView()
end


function QingShenModule:isSupport()
    local propPush = _getPropPushModule()
    if propPush and propPush.isSupport then
        return propPush:isSupport()
    end
    return false
end

function QingShenModule:onDestroy()
    self:_hideRenewRemind()
    self:_stopPropTimeTick()
    QingShenModule.super.onDestroy(self)
end


function QingShenModule:isQingShenPropId(propId)
    local pid = tonumber(propId)
    return pid ~= nil and QING_SHEN_PROP_SET[pid] == true
end


require("lobby.Modules.QingShen.Logic.EquipLogic")(QingShenModule)
require("lobby.Modules.QingShen.Logic.ShopLogic")(QingShenModule)
require("lobby.Modules.QingShen.Logic.PropTimeLogic")(QingShenModule)
require("lobby.Modules.QingShen.Logic.GodTipsLogic")(QingShenModule)
require("lobby.Modules.QingShen.Logic.TableLogic")(QingShenModule)
require("lobby.Modules.QingShen.Logic.RenewRemindLogic")(QingShenModule)
require("lobby.Modules.QingShen.Logic.AnimLogic")(QingShenModule)

return QingShenModule
   #  