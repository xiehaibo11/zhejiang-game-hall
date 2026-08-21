local XiaGuangModule = class("XiaGuangModule", XH.ModuleBase)
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")
local ShopConfig = require("lobby.Modules.GoldNew.SubModules.Shop.Config")
XiaGuangModule.EVENT_EXCHANGE_GOODS_INFO = "EVENT_EXCHANGE_GOODS_INFO"
XiaGuangModule.EVENT_XIAGUANG_EXCHANGE_SUCCESS = "EVENT_XIAGUANG_EXCHANGE_SUCCESS"

local LocalStorageKey = "XiaGuangModule_lsk"

function XiaGuangModule:ctor()
    XiaGuangModule.super.ctor(self)

    local info = cc.UserDefault:getInstance():getStringForKey(LocalStorageKey .. XH.playerData:getNumberID(), "{}")
    self._localInfo = cjson.decode(info)
    self._localInfo.endTime = self._localInfo.endTime or {}
    self:reqExchangeGoodListV2()
end

function XiaGuangModule:getProxyEvents()
    return {
        {module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_SELF_BACK_PACK_DATA", callBack = "onSelfBagDataUpdate"},
        {module = XH.lobby:getModule("BagSysNew"), eventKeyName = "EVENT_OPERATE_PROPS", callBack = "onOperateProps"},
        {module = XH.Bridge:getModule("Shop"), eventKeyName = "EVNET_DIAMOND_BUY_RESULT", callBack = "onPayResut"}, -- 钻石支付结果
        {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "onYMNCallBack"}
    }
end

-- 获取请求配置
function XiaGuangModule:getReqConfig()
    return {
        ReqExchangeGoodsListV2 = {reqPath = "lobby.Modules.GoldNew.Req.ReqExchangeGoodsListV2", callBack = self.respExchangeGoodsListV2},
        ReqExchangeGoodsV2 = {reqPath = "lobby.Modules.GoldNew.Req.ReqExchangeGoodsV2", callBack = self.respExchangeProductV2}
    }
end

function XiaGuangModule:isValid()
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
    local allJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    return not allJsonData or allJsonData.XGSJ == nil or allJsonData.XGSJ == 1
end

function XiaGuangModule:saveLocalInfo()
    cc.UserDefault:getInstance():setStringForKey(LocalStorageKey .. XH.playerData:getNumberID(), cjson.encode(self._localInfo))
end
function XiaGuangModule:getServerTime()
    return XH.lobby:getModule("Shop"):getServerTime()
end

function XiaGuangModule:getPropLeftTime(propid)
    local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
    local timeprops = selfBagData.time_prop_info or {}
    for _, v in ipairs(timeprops) do
        if v.propsid == propid then
            return v.endtime - self:getServerTime()
        end
    end
    return 0
end

function XiaGuangModule:getPropLeftTimeSmallest()
    local times = {}
    for _, v in pairs(XH.XGSJ_PROP_ID) do
        -- if v ~= XH.GlobalDefine.XGSJ_PROP_ID.PACKAGE then
        times[#times + 1] = {time = self:getPropLeftTime(v), propid = v}
        -- end
    end
    table.sort(times, function(a, b)
        return a.time < b.time
    end)
    return times[1] and times[1].time or 0
end

function XiaGuangModule:getWearState(propid)
    local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
    local timeprops = selfBagData.time_prop_info or {}
    for _, v in ipairs(timeprops) do
        if v.propsid == propid then
            return v.props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BODY
        end
    end
    return false
end

function XiaGuangModule:getAllPropWearState()
    for _, v in pairs(XH.XGSJ_PROP_ID) do
        -- local state = self:getWearState(v)
        if not self:getWearState(v) then
            return false
        end
    end
    return true
end

-- 是否所有道具都未装扮
function XiaGuangModule:isAllPropNotWear()
    for _, v in pairs(XH.XGSJ_PROP_ID) do
        -- local state = self:getWearState(v)
        if self:getWearState(v) then
            return false
        end
    end
    return true
end

function XiaGuangModule:onSelfBagDataUpdate(event)
    self._localInfo.endTime = self._localInfo.endTime or {}
    local times = {}
    local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
    local timeprops = selfBagData.time_prop_info or {}
    for _, v in pairs(XH.XGSJ_PROP_ID) do
        local bFind = false
        for _, prop in ipairs(timeprops) do
            if prop.propsid == v then
                times[#times + 1] = {time = prop.endtime, propid = v}
                self._localInfo.endTime[tostring(v)] = prop.endtime
                bFind = true
                break
            end
            if not bFind then
                times[#times + 1] = {time = self._localInfo.endTime[tostring(v)] or 0, propid = v}
                self._localInfo.endTime[tostring(v)] = self._localInfo.endTime[tostring(v)] or 0
            end
        end
    end
    table.sort(times, function(a, b)
        return a.time < b.time
    end)
    local defaultTime = self._localInfo.endTime["0"] or 0
    local smallestTime = times[1] and times[1].time or 0
    if smallestTime > 0 then
        self._localInfo.endTime["0"] = smallestTime
    else
        self._localInfo.endTime["0"] = defaultTime
    end
    
    self:saveLocalInfo()
    XH.lobby:getModule("SkinBundle"):updatePropState(1)
end

function XiaGuangModule:getExpireTime(propid)
    local time = self._localInfo.endTime[tostring(propid)] or 0
    if time > 0 and time < self:getServerTime() then
        return self:getServerTime() - time
    end
    return 0
end

function XiaGuangModule:checkAndShowVideo()
    local showDay = self._localInfo.showVDDay
    local todayStr = os.date("%Y%m%d", os.time())
    local isNeedShow = showDay ~= todayStr
    if isNeedShow then
        self._localInfo.showVDDay = todayStr
        self:saveLocalInfo()
    end
    return isNeedShow
end

function XiaGuangModule:getMyProp(propid)
    local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
    for _, v in ipairs(selfBagData.count_prop_info or {}) do
        if v.propsid == propid and v.propscnt > 0 then
            return v
        end
    end
    for _, v in ipairs(selfBagData.time_prop_info or {}) do
        if v.propsid == propid and v.endtime then
            return v
        end
    end
end

function XiaGuangModule:wear(propid, fromSelf, showLoading)
    showLoading = showLoading == nil and true or showLoading
    if not fromSelf then
        self._opePropId = propid
        if showLoading then
            XH.TipTool.showLoading()
        end
    end
    if propid == 0 then
        for _, v in pairs(XH.XGSJ_PROP_ID) do
            self:wear(v, true)
        end
        return
    end
    local bagsysModule = XH.lobby:getModule("BagSysNew")
    local myPropInfo = self:getMyProp(propid)
    local props_state = myPropInfo and myPropInfo.props_state
    if props_state == nil or props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BACKPACK then -- 未装备 如果服务没有UseProp，需要先UseProp
        bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP, propid, true, false)
    end
end

function XiaGuangModule:takeOff(propid, fromSelf, showLoading)
    showLoading = showLoading == nil and true or showLoading
    if not fromSelf then
        self._opePropId = propid
        if showLoading then
            XH.TipTool.showLoading()
        end
    end
    if propid == 0 then
        for _, v in pairs(XH.XGSJ_PROP_ID) do
            self:takeOff(v, true)
        end
        return
    end
    local bagsysModule = XH.lobby:getModule("BagSysNew")
    local myPropInfo = self:getMyProp(propid)
    if myPropInfo then
        local props_state = myPropInfo.props_state
        if props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BODY then
            bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_UNEQUIP, myPropInfo.propsid, true, false)
        end
    end
end

function XiaGuangModule:onOperateProps(event)
    local opeInfo = event.info
    if opeInfo == nil then
        return
    end
    local selfBagData = XH.lobby:getModule("BagSysNew"):getBagData():getSelfBagData()
    for _, v in ipairs(selfBagData.time_prop_info or {}) do
        if v.propsid == opeInfo.propsid then
            v.props_state = 1 - opeInfo.operate_props -- 操作枚举和状态枚举正好相反
        end
    end
    if opeInfo and self._opePropId then
        if opeInfo.operate_props == XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP then
            XH.TipTool.showToast(self._opePropId == 0 and "您已经成功使用霞光胜境主题套装" or "使用成功！")
        elseif opeInfo.operate_props == XH.BagSysProtocol.OPERATE_PROPS.OP_UNEQUIP then
            XH.TipTool.showToast("卸下成功！")
        end
        XH.lobby:getModule("BagSysNew"):reqSelfBagData()
        if self._opePropId == 0 then
            -- 一键装扮加1s loading，仿作操作过快状态不一致
            XH.SysTool.performDelayOnce(function()
                XH.TipTool.hideLoading()
                self._autoExGoodInfo = nil
            end, 1)
        else
            XH.TipTool.hideLoading()
        end
        self._opePropId = nil
    end
end

-- 钻石是否足够
function XiaGuangModule:checkDiamondEnough(goodInfo, viewZOrder)
    local needNum = goodInfo.condition
    if XH.playerData:getDiamnd() >= needNum then
        return true
    end
    local shopModule = XH.lobby:getModule("Shop")
    -- local bShelvesSuppport, shelvesInfo = shopModule:checkMaxShelvesEnough(XH.areaData:getPropList().propDiamndID, needNum)
    -- shopModule:arrangeQuickInfo(XH.areaData:getPropList().propDiamndID, needNum, goodInfo.name, 0, 0, nil, goodInfo.gid)
    if shopModule:checkMaxShelvesEnough(XH.areaData:getPropList().propDiamndID, needNum) then
        XH.viewManager:openView("NotEnoughPropsView", viewZOrder,
                                {name = goodInfo.name, targetDiamond = needNum, targetValue = 0, targetPropId = 0, giftType = ""})
    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                XH.Bridge.viewManager:openView("GoldHallShopView", nil, {openType = "Lobby", productType = ShopConfig.SpecialTag.GOLD})
            end,
            funcCancel = function()
            end
        }, "ERROR_SHOP_DIAMOND_NOT_ENOUGH")
    end
    self._autoExGoodInfo = goodInfo
    if self._sid then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._sid)
        self._sid = nil
    end
    self._sid = XH.SysTool.performDelayOnce(function()
        self._autoExGoodInfo = nil
    end, 30)
end

function XiaGuangModule:onPayResut(event)
    if self._autoExGoodInfo == nil then
        return
    end
    local result = event.msg and event.msg.resultTag
    local bSuccess = result == 1
    local goodInfo = self._autoExGoodInfo
    if bSuccess then
        XH.TipTool.showLoading()
        XH.SysTool.performDelayOnce(function()
            XH.TipTool.hideLoading()
            self:reqExchangeGoodsV2(goodInfo, 1, nil, true)
            self._autoExGoodInfo = nil
        end, 1)
    end
end

-------------兑换商城2.0----------------------
function XiaGuangModule:reqExchangeGoodListV2(bLoading)
    if bLoading then
        XH.TipTool.showLoading()
    end
    self:startReq("ReqExchangeGoodsListV2", {business = {"xiaguang"}}, 8)
end

function XiaGuangModule:respExchangeGoodsListV2(req, flag, data)
    XH.TipTool.hideLoading()

    if flag == XH.Req.TYPE.SUCCESS then
        self._exSid2Business = {}
        for _, v in ipairs(data.info) do
            self._exSid2Business[v.strategyId] = v.business
        end
        table.sort(data.list, function(a, b)
            if a.sort == b.sort then
                return tonumber(a.gid) < tonumber(b.gid)
            end
            return a.sort > b.sort
        end)
        self._exGoodsList = data.list
        for _, v in ipairs(self._exGoodsList) do
            v.id = v.gid
            v.propid = v.propId
            v.value = v.propValue
            v.image = v.pic
            v.scoreConf[1] = v.scoreConf[1] or {propId = 0, score = 0}
            v.condition = v.scoreConf[1].score
            v.defaultCostPropid = v.scoreConf[1].propId
            v[".newExShop"] = true
            -- v.goods_mark = "redpoint=2" --测试红点
            v.data = {}
            if v.act.tags ~= "" then
                local _, _ = pcall(function()
                    v.data = cjson.decode(v.act.tags) or {}
                end)
            end
            if type(v.data) ~= "table" then
                v.data = {}
            end
            v.act.corner = string.split(v.act.corner, ",")
            v.act.cornerName = string.split(v.act.cornerName, ",")
            v.act.business = self._exSid2Business[v.act.strategyId]
        end
        self:dispatchEvent({name = self.EVENT_EXCHANGE_GOODS_INFO})
    else
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, req:getMessage())
    end
end

function XiaGuangModule:getExchangeGoods(isLastBuy)
    if isLastBuy then
        for _, v in ipairs(self._exGoodsList) do
            if v.gid == self._localInfo.lastBuyGid then
                return {v}
            end
        end
    end
    return self._exGoodsList
end

function XiaGuangModule:reqExchangeGoodsV2(goodInfo, cnt, callback, bLoading)
    if bLoading then
        XH.TipTool.showLoading()
    end
    self._exchangeCallback = callback
    self._lastExchangeGoodsInfo = goodInfo
    self:startReq("ReqExchangeGoodsV2", {
        strategy_id = goodInfo.act.strategyId,
        business = goodInfo.act.business,
        gid = goodInfo.gid,
        prop_id = goodInfo.defaultCostPropid,
        buy_num = cnt
    })
end

function XiaGuangModule:respExchangeProductV2(req, type, data)
    XH.TipTool.hideLoading()
    XH.playerData:flushPlayerDrop()
    if type == XH.Req.TYPE.SUCCESS then
        XH.TipTool.showToast("兑换成功", 3)
        XH.SysTool.performDelayOnce(function()
            -- 延时刷新背包数据，到账有延时
            XH.lobby:getModule("BagSysNew"):reqSelfBagData()
        end, 1)
        self._localInfo.lastBuyGid = self._lastExchangeGoodsInfo.gid
        self:saveLocalInfo()
        if self._exchangeCallback then
            self._exchangeCallback(true)
        end
        local props = clone(data.gifts)
        for _, v in ipairs(props) do
            v.award = math.floor(tonumber(v.award) / 24) .. "天"
            v.imageName = string.format("hall/Image/XiaGuang/img_prop_%d.png", v.propId)
        end
        Utils:showGetAward(props, function()
            if self:isAllPropNotWear() then
                XH.lobby:getModule("BagSysNew"):reqSelfBagData()
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                    funcOK = function()
                        self:wear(0)
                    end
                }, "您已成功购买霞光胜境主题套装，是否立即使用？")
            end
        end)
        self:dispatchEvent({name = self.EVENT_XIAGUANG_EXCHANGE_SUCCESS})
    elseif type == XH.Req.TYPE.FAIL then
        if self._exchangeCallback then
            self._exchangeCallback(false)
        end
        XH.TipTool.showToast(ShopConfig.getErrMsg(data and data.resp and data.resp.errCode), 3)
    elseif type == XH.Req.TYPE.TIMEOUT then
        XH.TipTool.showToast("兑换超时，请刷新重试", 3)
    end
    self._exchangeCallback = nil
end
return XiaGuangModule
  �=  