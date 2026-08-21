require("lobby.Modules.PropPush.Compat")
local Compat = require("lobby.Modules.PropPush.Compat")
local PropPushModule = class("PropPushModule", XH.ModuleBase)
local Define = require("lobby.Modules.PropPush.Define")
local PropPushConfig = require("lobby.Modules.PropPush.Config")

PropPushModule.EVENT_GAME_START = "EVENT_GAME_START"

--- pushType -> 成员方法名（与 Define.PushType 对齐；礼包/求财运等未移植分支保留空实现）
local PURCHASE_METHOD_BY_PUSH_TYPE = {
    [Define.PushType.QingShen] = "_purchaseQingShen",
    [Define.PushType.QiuCaiYun] = "_purchaseQiuCaiYun",
    [Define.PushType.BaiCaiShen] = "_purchaseBaiCaiShen",
    [Define.PushType.XiPai] = "_purchaseXiPai",
    [Define.PushType.XiQiePai] = "_purchaseXiQiePai",
    [Define.PushType.HuanPai] = "_purchaseHuanPai",
    [Define.PushType.LiBao] = "_purchaseLiBao",
}

function PropPushModule:getReqConfig()
    return {
        ReqPropPush = { reqPath = "lobby.Req.Prop.ReqPropPush", callBack = self.onRespPropPush },
    }
end

function PropPushModule:getProxyEvents()
    local events = {}
    -- 自己进桌时清理上一局残留状态（浙江 CF.roomData，替代宝宝 notificationCenter）
    if CF and CF.roomData then
        events[#events + 1] = {
            module = CF.roomData,
            eventKeyName = "EVENT_PLAYERLIST_CHANGED",
            callBack = "onPlayerListChanged",
        }
    end
    return events
end

function PropPushModule:ctor()
    PropPushModule.super.ctor(self)

    self._pushType = Define.PushType.None
    self._pushPropId = 0
    self._isGameStart = false
end

--- 自己进桌且未开局时 reset（对齐原 kRoom_UserSitdown 逻辑）
function PropPushModule:onPlayerListChanged(event)
    local msg = event and event.msg
    local mySeat = Compat.getSelfSeat()
    if mySeat == nil then
        return
    end
    -- 仅处理本机座位变化；其它玩家入离座忽略
    if msg and msg.seatId ~= nil and tonumber(msg.seatId) ~= tonumber(mySeat) then
        return
    end
    if Compat.isGameStarted() then
        return
    end
    self:resetData()
end

function PropPushModule:setThrowScene(scene)
    self._throwScene = scene
end

function PropPushModule:getThrowScene()
    return self._throwScene
end

function PropPushModule:reqPropPush()
    print("reqPropPush")
    self:startReq("ReqPropPush", { reqType = "PropPush" })
end

function PropPushModule:reqQingShenLevel()
    print("reqQingShenLevel")
    self:startReq("ReqPropPush", { reqType = "QingShen" })
end

--- 根据 RecommendPropReply.propId 反查 PushType（Config 中为推送类型 -> 道具 id 列表）
function PropPushModule:_pushTypeByRecommendPropId(propId)
    if propId == nil or PropPushConfig.PUSH_PROP_PURCHASE == nil then
        return Define.PushType.None
    end
    for pushType, idList in pairs(PropPushConfig.PUSH_PROP_PURCHASE) do
        if idList then
            for _, mappedId in ipairs(idList) do
                if mappedId == propId then
                    return pushType
                end
            end
        end
    end
    return Define.PushType.None
end

function PropPushModule:onRespPropPush(req, type, data)
    print("onRespPropPush", type)
    if type ~= XH.Req.TYPE.SUCCESS or not data or not data.resp then
        return
    end
    dump(data)
    -- 任意推送回包都同步 recommendList，供整合页各神明选档；模块缺失时跳过，避免 nil 崩溃
    local qingShenMod = XH.lobby:getModule("QingShen")
    if qingShenMod and qingShenMod.setRecommendList then
        qingShenMod:setRecommendList(data.recommendList)
    end
    if data.resp.reqType == "QingShen" then
        -- 购买/使用成功后的等级回包：播赐福动画并同桌广播；无 QingShen 模块则无法继续
        if not qingShenMod then
            return
        end
        if not qingShenMod:isQingShenPropId(data.propId) then
            self:reqPropPush()
            return
        end
        qingShenMod:setData(data)
        if data.curLv == 0 then
            return
        end
        XH.viewManager:closeView("QingShenIntegrateView")
        -- 赐福动画优先用实际购买/使用的神明，避免仍播推送神特效
        local purchasePropId = qingShenMod.takeLastPurchasePropId and qingShenMod:takeLastPurchasePropId()
        local animPropId = purchasePropId or tonumber(data.propId)
        local animLevel = data.curLv
        if purchasePropId and qingShenMod.getGodRecommendLevel then
            local lv = qingShenMod:getGodRecommendLevel(purchasePropId)
            if lv and lv >= 1 then
                animLevel = lv
            end
        end
        qingShenMod:playQingShenAni(Compat.getSelfSeat(), animLevel, animPropId)
        qingShenMod:noticeMyQingShen2Other()
        return
    end
    -- 推送为请神道具、且本机已装扮其他仍有效的请神时，改推当前装扮神
    if qingShenMod and qingShenMod:isQingShenPropId(data.propId) then
        local equipped = qingShenMod:getEquippedPropId()
        if equipped and equipped ~= tonumber(data.propId)
            and qingShenMod:getGodPropTimeLeft(equipped) > 0 then
            data.propId = equipped
        end
    end
    -- 新推送到达前先取消上一次异步 pending，避免旧 barrier 回包带着过期/空 pushType 开窗
    self:_cancelPendingPropPushOpen()
    self._pushPropId = data.propId
    self._pushType = self:_pushTypeByRecommendPropId(self._pushPropId)

    if self._pushType == Define.PushType.QingShen then
        if not qingShenMod then
            return
        end
        qingShenMod:setData(data)
        qingShenMod:prepareOpenPropPushView()
    elseif self._pushType == Define.PushType.QiuCaiYun
        or self._pushType == Define.PushType.BaiCaiShen
        or self._pushType == Define.PushType.XiPai
        or self._pushType == Define.PushType.XiQiePai
        or self._pushType == Define.PushType.LiBao then
        -- 浙江未移植对应玩法/礼包模块，忽略此类推送
        return
    end
end

function PropPushModule:getPropPushType()
    return self._pushType
end

--- 服务端下发的数据推送道具 id（RecommendPropReply.propId）
function PropPushModule:getPushPropId()
    return self._pushPropId
end

--- 装扮请神后：同步 _pushPropId（浙江不展示 PropPush 弹窗）
-- @param propId number 当前装扮的请神道具 id
function PropPushModule:syncQingShenPushToEquipped(propId)
    propId = tonumber(propId)
    if not propId or propId <= 0 then
        return
    end
    if self._pushType ~= Define.PushType.QingShen then
        return
    end
    self._pushPropId = propId
end

--- 推送道具购买信息：price、costPropId（支付道具）
function PropPushModule:getInfo()
    if self._pushType == Define.PushType.QingShen then
        local qingShenMod = XH.lobby:getModule("QingShen")
        return qingShenMod and qingShenMod.getInfo and qingShenMod:getInfo() or nil
    end
    return nil
end

function PropPushModule:_purchaseQingShen(info)
    local qingShenMod = XH.lobby:getModule("QingShen")
    if not qingShenMod then
        return
    end
    local QingShenDefine = require("lobby.Modules.QingShen.Define")
    if qingShenMod.setPurchaseSceneType then
        qingShenMod:setPurchaseSceneType(QingShenDefine.ThrowSceneType.Popup)
    end
    qingShenMod:purchase()
end

function PropPushModule:_purchaseQiuCaiYun(info)
    -- 浙江未移植求财运推送
end

function PropPushModule:_purchaseBaiCaiShen(info)
    -- 浙江未移植拜财神推送
end

function PropPushModule:_purchaseXiPai(info)
    -- 浙江未移植洗牌推送
end

function PropPushModule:_purchaseXiQiePai(info)
    -- 浙江未移植洗切牌推送
end

function PropPushModule:_purchaseHuanPai(info)
end

--- 礼包推送：PropPushGP 已移除，空实现
function PropPushModule:_purchaseLiBao(info)
end

function PropPushModule:purchase()

    local pushType = self:getPropPushType()
    local info = self:getInfo()

    local methodName = pushType and PURCHASE_METHOD_BY_PUSH_TYPE[pushType]
    if methodName and self[methodName] then
        self[methodName](self, info)
    end
end

function PropPushModule:onGameStart()
    self._isGameStart = true
    self:dispatchEvent({ name = self.EVENT_GAME_START })
end

function PropPushModule:isGameStart()
    return self._isGameStart
end

--- 取消 QingShen 异步 prepare 屏障，避免 reset / 新推送覆盖后旧回包误触 Icon。
function PropPushModule:_cancelPendingPropPushOpen()
    local qingShenMod = XH.lobby and XH.lobby.getModule and XH.lobby:getModule("QingShen")
    if qingShenMod then
        qingShenMod._propPushOpenBarrierRef = nil
    end
end

function PropPushModule:resetData()
    self:_cancelPendingPropPushOpen()
    self._pushType = Define.PushType.None
    self._pushPropId = 0
    self._isGameStart = false
end

function PropPushModule:roomType()
    local runningScene = display.getRunningScene()
    if runningScene and runningScene.name == "GameScene" then
        if Compat.isBoxRoom() then
            if Compat.safeTeaHouseId() > 0 then
                return "比赛场"
            else
                return "好友房"
            end
        end
    end
    return "好友房"
end

function PropPushModule:throwData(key, data)
    if data == nil then
        data = {}
    end
    data.page = self:roomType()
    local areaId = XH.areaData:getAreaID()
    data.game_id = string.format("%d_%d", areaId, Compat.safeKindId() or 0)
    data.to_props_id = tostring(self:getPushPropId() or "")
    local customize = {}
    customize.players = Compat.safeChairCount()
    XH.NewThrowDataManager:throwData(key, data, customize)
end

function PropPushModule:isSupport()
    -- Configuration PropPush.open：0 关闭，1 开启；缺省视为开启
    local cfg = Compat.getPropPushAllCfg()
    if cfg and cfg.PropPush and cfg.PropPush.open ~= nil then
        local en = cfg.PropPush.open
        if en == false or en == 0 or tonumber(en) == 0 then
            return false
        end
    end

    if not sp then
        return false
    end

    local areaId = XH.areaData and XH.areaData.getAreaID and XH.areaData:getAreaID() .. ""
    local gameId = Compat.safeKindId()
    local cfg = XH.lobby:getModule("Configuration"):getAllConfigData("PropPush") or {}
    if cfg.open ~= nil then
        local en = cfg.open
        if en == false or en == 0 or tonumber(en) == 0 then
            return false
        else
            local areaCfg = cfg.areaGameIds
            if areaCfg and areaCfg[areaId] and (areaCfg[areaId] == 0 or areaCfg[areaId][gameId]) then
                return true
            end
            return false
        end
    end
    return false
end

function PropPushModule:setGameFrameUI(target)
    self._gameFrameUI = target
end

function PropPushModule:getGameFrameUI()
    return self._gameFrameUI
end


function PropPushModule:getBasePropInfo(propid)
    local baseInfo = XH.lobby:getModule("BagSysNew"):getBagData():getPropInfo(propid)
    if not baseInfo then
        printError("propid info is null "..propid)
        XH.lobby:getModule("BagSysNew"):reqPropsAttr({propid})
        return {}
    end

    local cfgInfo =XH.lobby:getModule("BagSysNew"):getPropInfo(propid)
    if cfgInfo then
        baseInfo.name = baseInfo.name or cfgInfo[2]
    end
    if baseInfo and baseInfo.imageUrl then
        return baseInfo
    end
    for _, pinfo in pairs(baseInfo.props_img or {}) do
        if pinfo.package_id and tonumber(pinfo.package_id) == 2 then
            local imgArray = pinfo.img
            if imgArray then
                for idx = 1, #imgArray do
                    baseInfo.imageUrl = imgArray[idx].img_url or ""
                end
            end
            break
        end
    end
    if baseInfo.imageUrl == nil then
        for _, pinfo in pairs(baseInfo.props_img or {}) do
            local imgArray = pinfo.img
            if imgArray then
                for idx = 1, #imgArray do
                    baseInfo.imageUrl = imgArray[idx].img_url or ""
                end
            end
            break
        end
    end
    return baseInfo
end

return PropPushModule
