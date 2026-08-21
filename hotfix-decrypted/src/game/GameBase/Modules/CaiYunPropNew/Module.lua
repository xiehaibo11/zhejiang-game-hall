local CaiYunPropNewModule = CF.gameClass("CaiYunPropNewModule", CF.ModuleBase)
local CaiYunPropNewConfig = CF.gameRequire("Modules.CaiYunPropNew.Config")
local ShopConfig = require("lobby.Modules.Shop.Config")

CaiYunPropNewModule.EVENT_UPDATE_CAIYUN_PROPLISTINFO = "EVENT_UPDATE_CAIYUN_PROPLISTINFO"
CaiYunPropNewModule.EVENT_UPDATE_CAIYUN_INFO = "EVENT_UPDATE_CAIYUN_INFO"
CaiYunPropNewModule.EVENT_PROP_GETAWARD_SUCC = "EVENT_PROP_GETAWARD_SUCC"
CaiYunPropNewModule.EVENT_UPDATE_PROPS_COUNT = "EVENT_UPDATE_PROPS_COUNT"
CaiYunPropNewModule.EVENT_PROP_TRANSFER_PROP_SUCC = "EVENT_PROP_TRANSFER_PROP_SUCC"

CaiYunPropNewModule.AWARD_TYPE = {
    FirstAward = 0,
    NormalAward = 1,
    GoldDragonAward = 2,
    NoAward = 9,
}

-- 领取奖励后财运道具虚拟ID，记录财运数值
local FakeCaiPropID = -2
local FakeYunPropID = -3

function CaiYunPropNewModule:ctor()
    CaiYunPropNewModule.super.ctor(self)
    self._propListInfo = {}         -- 求财运道具列表
    self._propFinalListInfo = {}    -- 限时道具列表
    self._caiyunInfo = {}           -- 财运信息，包括玩家当前财运值，以及各个财运增加的财运值，可领奖的财运值
    self._propsCount = {}           -- 玩家各个财运道具数量，正常情况下均为0
    self._curUseProductInfo = {}    -- 当前使用的财运，播放动画用
    self._curMulti = 1              -- 当前财运倍数
    self._curAwardType = CaiYunPropNewModule.AWARD_TYPE.NoAward     -- 当前可领奖的奖励类型
    self:reqExchangeProductsInfo()
end

-- 进入房间需要请求的信息(财运值是否已满，金龙结束时间戳，需要同步给其他玩家)
-- 改为仅请求1次，其余请求在使用时调用
function CaiYunPropNewModule:initCaiYunInfo(first)
    if first and self._caiyunInfo and self._caiyunInfo.conf_list and #self._caiyunInfo.conf_list>0 then
        return
    end
    self:reqGetCaiYunInfo()
end

-- 获取道具列表
function CaiYunPropNewModule:reqExchangeProductsInfo()
    self:cleanListInfo()
    CF.reqCaiYunNewProductList(self, self.respCaiYunNewProductList)
end

-- 请求道具列表返回
function CaiYunPropNewModule:respCaiYunNewProductList(req, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        for k, v in pairs(data) do
            table.insert(self._propListInfo, v)
        end
        self:reqGetPropsCount()
    else
        self:cleanListInfo()
    end
    self:dispatchEvent( { name = self.EVENT_UPDATE_CAIYUN_PROPLISTINFO})
end

-- 获取财运信息(玩家财运值，以及每种道具增加财运值)
function CaiYunPropNewModule:reqGetCaiYunInfo()
    CF.reqGetCaiYunInfo(self, self.onRespGetCaiYunInfo)
end
-- 返回自己财运信息
function CaiYunPropNewModule:onRespGetCaiYunInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.nXYData then
            return
        end
        self._caiyunInfo = data.nXYData
        self._curAwardType = self:updateCurAwardType()
        self:sendCaiYunInfo()
        self:dispatchEvent({ name = self.EVENT_UPDATE_CAIYUN_INFO})
    end
end

-- 转发个人财运已满给其他玩家
function CaiYunPropNewModule:sendCaiYunInfo()
    local caiFull = self:getCaiFull() and 1 or 0
    local yunFull = self:getYunFull() and 1 or 0
    if caiFull == 0 and yunFull == 0 then
        return 
    end
    local sendmsg = string.format("caiFull=%d;yunFull=%d", caiFull, yunFull)
    CF.msgManager:sendCaiYunInfo(sendmsg, CaiYunPropNewConfig.CF_ID.CaiYunInfo)
end

-- 转发增加财运值
function CaiYunPropNewModule:sendAddCaiYun(propid, caiCount, yunCount)
    if not self:isLong(propid) and (caiCount <= 0 and yunCount <= 0) then
        return
    end
    local strData = string.format("propid=%d;caiCount=%d;yunCount=%d", propid, caiCount, yunCount)
    CF.msgManager:sendAddCaiYun(strData, CaiYunPropNewConfig.CF_ID.AddCaiYun)
end

-- 获取玩家身上道具数量
function CaiYunPropNewModule:reqGetPropsCount()
    if not CF or not CF.GameDefine then
        return
    end
    if not self._propIDs then
        self._propIDs = {}
        for k,v in pairs(self._propListInfo) do
            local tmpPropIDs = {}
            tmpPropIDs.id = tonumber(v.value)
            if tmpPropIDs.id == CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL or tmpPropIDs.id == CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL then
                tmpPropIDs.burse_type = CF.GameDefine.BURSETYPE.UserTimeNoCount
                table.insert(self._propIDs, {id = tmpPropIDs.id})
            end
            table.insert(self._propIDs, tmpPropIDs)
        end
    end
    CF.reqGetPropsCount(CF.selfPlayerData:getNumberID(), CF.teaHouseManager:getTeaHousePwd(), self._propIDs, self, self.onGetPropsCount)
end

-- 请求道具数量返回
function CaiYunPropNewModule:onGetPropsCount(cell, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        if not data or not data.nXYData or not data.nXYData.props then
            return
        end

        self._propsCount = data.nXYData.props
        local jinLongTimestamp = {}
        for i,v in pairs(self._propsCount) do
            if (v.prop_id == CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL or v.prop_id == CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL) and v.time and v.time > 0 then
                jinLongTimestamp[v.prop_id] = v.time - CF.getLobbyModule("Shop"):getServerTime()
            end
        end
        local jinlongTime = jinLongTimestamp[CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL] or 0
        local jinfengTime = jinLongTimestamp[CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL] or 0
        for i,v in pairs(self._propsCount) do
            if (v.prop_id == CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL or v.prop_id == CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL) then
                if v.burse_type == "User" then
                    v.time = jinLongTimestamp[v.prop_id] or 0
                else
                    self._propsCount[i] = nil
                end
            end
        end
        if jinlongTime > 0 or jinfengTime > 0 then
            local sendMsg = string.format("jinlongtime=%s;jinfengtime=%s", jinlongTime, jinfengTime)
            if CF and CF.msgManager then
                CF.msgManager:sendJinlongTimestamp(sendMsg, CaiYunPropNewConfig.CF_ID.JinLongTimestamp)
            end
        end
        self:dispatchEvent({ name = self.EVENT_UPDATE_PROPS_COUNT}) 
    end
end

-- 请求领奖
function CaiYunPropNewModule:reqGetCaiYunAward()
    if self._curAwardType == CaiYunPropNewModule.AWARD_TYPE.NoAward then
        return
    end
    CF.reqGetCaiYunAward(self._curAwardType, self, self.onRespGetCaiYunAward)
end

function CaiYunPropNewModule:onRespGetCaiYunAward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.nXYData then
            return
        end
        local prop_info = data.nXYData.prop_info
        local propid = self:getNormalRandPropID()
        local caiCount = 0
        local yunCount = 0
        for k,v in pairs(prop_info) do
            if self:isLong(v.id) then
                propid = v.id
            elseif v.id == FakeCaiPropID then
                caiCount = v.count
            elseif v.id == FakeYunPropID then
                yunCount = v.count
            end
        end
        -- 领取奖励之后，要再次获取财运信息，财运值满后，通知其他玩家播放动画
        -- self:reqGetCaiYunInfo()
        -- 自己播放道具动画以及财运数字动画
        local msg = {propid = propid, caiCount = caiCount, yunCount = yunCount, localSeat = CF.GameDefine.LOCAL_SEAT.BOTTOM, prop_info = prop_info}
        self:dispatchEvent({ name = self.EVENT_PROP_GETAWARD_SUCC, msg = msg})
        -- 如果是金龙动画，需要再次获取金龙道具时间
        if self:isLong(propid) then
            -- 将财运值通过服务转发其他玩家，播放财运数字动画
            self:sendAddCaiYun(propid, caiCount, yunCount)
        end
    end
end

-- 领取奖励后，获取随机播放普通求财运道具ID
function CaiYunPropNewModule:getNormalRandPropID()
    local tmpPropIDs = {}
    for k,v in pairs(self._propListInfo) do
        if not self:isLong(tonumber(v.value)) then
            table.insert(tmpPropIDs, tonumber(v.value))
        end
    end
    return tmpPropIDs[math.random(1, #tmpPropIDs)]
end

function CaiYunPropNewModule:getNeedPropIDAndPrice(productInfo, multi)
    local finalData
    multi = self:resetMulti(productInfo, multi)
    local discount = tonumber(CaiYunPropNewConfig.KW_MULTI_DISCOUNT[multi])/10
    if productInfo.price_config and #productInfo.price_config > 0 then
        finalData = {}
        finalData.name = productInfo.price_config[1].name
        finalData.price = math.floor(tonumber(productInfo.price_config[1].value)*discount*multi)
        finalData.propType = productInfo.price_config[1].type
        finalData.propID = tonumber(string.match(finalData.propType, "%d+"))
    end
    return finalData
end

function CaiYunPropNewModule:buyCaiYunProp(productInfo, multi, scene, discount, strategy_id)
    -- self:dispatchEvent({ name = self.EVENT_PROP_TRANSFER_PROP_SUCC, msg = {propid = tonumber(productInfo.value)}})
    -- do return end
    --未实名不能购买 海外玩家不用实名认证
    if (not CF.selfPlayerData:isAleardyRealName()) and (not CF.selfPlayerData:getIsForeignIP()) then
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
            funcOK = function()
                CF.viewManager:openView("IdentityCheckView")
            end,
        }, "PLEASE_REAL_NAME")
        return
    end
    multi = self:resetMulti(productInfo, multi)
    local propId = tonumber(productInfo.value)
    local propCount = self:getPropCountByID(propId)
    local isHave, tipMsg = self:isHaveEnoughDiamond(productInfo, multi, discount)
    self._curUseProductInfo = productInfo
    self._curMulti = multi
    if isHave or propCount >= multi or discount == 0 then
        if self:isLong(propId) then
            if propCount > 0 then
                if propId == CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL then
                    self:reqTransferProps({productInfo = productInfo, targetPropId = nil, multi = 1, scene = scene, isDiamond = 0})
                else
                    self:reqUseEquipCard(propId)
                end
            else
                local priceConfig = self:getNeedPropIDAndPrice(productInfo, multi)
                local tipmsg = string.format("确定花费 %d%s 兑换 %s ？", priceConfig.price, priceConfig.name, productInfo.name)
                CF.TipTool.showTip({
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        if self and self.doExchange then
                            self:doExchange(productInfo)
                        end
                    end
                }, tipmsg)
            end
        else
            local isNoTip = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PRAY_GUIDE_USE_TIP, false)
            if scene and not isNoTip and self:getPropCountByID(tonumber(productInfo.value)) < 1 and discount ~= 0 then
                local priceConfig = self:getNeedPropIDAndPrice(productInfo, multi)
                local tipmsg = string.format("确定花费 %d%s 兑换 %s ？", priceConfig.price, priceConfig.name, productInfo.name)
                CF.TipTool.showTip({
                    type = CF.TIP_LAYER_TYPE.OK,
                    funcOK = function(isCheck)
                        if self and self.reqTransferProps then
                            self:reqTransferProps({productInfo = productInfo, targetPropId = nil, multi = multi, scene = scene, isDiamond = 1})
                        end
                        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PRAY_GUIDE_USE_TIP, isCheck)
                        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.PRAY_GUIDE_TIP_DIALOG_SURE)
                    end,
                    funcClose = function()
                        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.PRAY_GUIDE_TIP_DIALOG_CLOSE)
                    end,
                    bShowCheckBox = true
                }, tipmsg)
            else
                self:reqTransferProps({productInfo = productInfo, targetPropId = nil, multi = multi, scene = scene, isDiamond = propCount >= multi and 0 or 1, discount = discount, strategy_id = strategy_id})
            end
        end
    else
        -- 兑换所需要的道具不够
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK
        }, tipMsg)
    end
end

-- 是否有足够的兑换道具
function CaiYunPropNewModule:isHaveEnoughDiamond(productInfo, multi, discount)
    local isEnough = false
    local userData = CF.selfPlayerData
    local useCurDiamond = userData:getDiamnd()
    local userRoomCard = userData:getRoomCard()

    local tipMsg = "兑换失败"
    local priceConfig = self:getNeedPropIDAndPrice(productInfo, multi)
    if priceConfig then
        local needNum = discount ~= nil and math.ceil(priceConfig.price * discount) or priceConfig.price
        if priceConfig.name == "钻石" then
            tipMsg = "您的钻石不足，请购买后重试"
            if needNum <= useCurDiamond then
                isEnough = true
            end
        else
            tipMsg = "您的房卡不足，请购买后重试"
            if needNum <= userRoomCard then
                isEnough = true
            end
        end
    end
    return isEnough, tipMsg
end


-- 让普通道具 转化为时效道具
function CaiYunPropNewModule:reqUseEquipCard(propId)

    local param = {
        tenant_id = XH.areaData:getTenantid(),
        area_id = XH.areaData:getAreaID(),
        user_id = XH.playerData:getNumberID(),
        prop = {
            prop_id = propId,
            count= 1,
            burse_type = CF.GameDefine.BURSETYPE.User,
            time = 0,
            count_big = 0,
            zero_time = 0,
            expire = 0,
        },
        params = "prayTimes=1;logtype=1601;taskname=equipProps;"
    }
    CF.reqUseEquipCard(param, self, self.respUseEquipCard)
end

function CaiYunPropNewModule:respUseEquipCard(cell, type, data)
    if data and data.equip then
        self:respTransferProps(nil, XH.Req.TYPE.SUCCESS, {nErrCode = 0, nXYData = {reply = { owners = {[1] = {props = {[1] = {prop_id = data.equip.prop.propId}}}}}}})
    end
end

-- 请求50服务使用道具
function CaiYunPropNewModule:reqTransferProps(info)
    info.strategy_id = info.strategy_id or -1
    local productInfo = info.productInfo
    local targetPropId = info.targetPropId
    local multi = info.multi
    local scene = info.scene
    multi = self:resetMulti(productInfo, multi)
    local priceConfig = self:getNeedPropIDAndPrice(productInfo, multi)
    if not priceConfig then
        return
    end
    local propCount = self:getPropCountByID(tonumber(productInfo.value))
    if propCount >= multi then
        priceConfig.price = multi
        priceConfig.propID = tonumber(productInfo.value)
    elseif info.discount then
        priceConfig.price = math.ceil(priceConfig.price * info.discount)
    end
    local params = self:getParams({productInfo = productInfo, targetPropId = targetPropId, multi = multi, propCount = propCount, isDiamond = info.isDiamond, strategy_id = info.strategy_id})
    if(info.strategy_id > 0 and info.discount and info.discount == 0) then
        CF.reqTransferPropsCaiYunFreeUse(params, targetPropId, 1, self, function(_target, req, type, data)
            self:respTransferProps(req, type, data, scene, true)
            CF.game:getModule("CaiYunPropNew.Strategy"):resetPrayStrategy()
            CF.game:getModule("CaiYunPropNew.Strategy"):reqPrayStrategy(2)
        end)
    else
        CF.reqTransferProps(params, priceConfig, targetPropId, self, function(_target, req, type, data)
            self:respTransferProps(req, type, data, scene, true)
            if info.strategy_id > 0 then
                CF.game:getModule("CaiYunPropNew.Strategy"):resetPrayStrategy()
                CF.game:getModule("CaiYunPropNew.Strategy"):reqPrayStrategy(2)
            end
        end)
    end
end

function CaiYunPropNewModule:getParams(info)
    local productInfo = info.productInfo
    local targetPropId = info.targetPropId
    local multi = info.multi
    local propCount = info.propCount
    multi = self:resetMulti(productInfo, multi)
    targetPropId = targetPropId or tonumber(productInfo.value)
    local isDiamond = targetPropId == CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL and 0 or 1
    if targetPropId ~= CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL then
        isDiamond = propCount >= multi and 0 or 1
    end
    return string.format("prayTimes=%d;inst=%s;isDiamond=%d;strategy_id=%d;", multi, targetPropId, info.isDiamond or 1, info.strategy_id or -1)
end

function CaiYunPropNewModule:respTransferProps(req, type, data, scene, isAddUseTimes)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.nXYData then
            return
        end
        -- 使用成功后，请求财运信息
        -- self:reqGetCaiYunInfo()

        local propid = (self._curUseProductInfo and self._curUseProductInfo.value) and tonumber(self._curUseProductInfo.value) or 0
        -- 播放财运动画
        local caiCount, yunCount = self:getCaiYunCountByID(propid, self._curMulti)
        local msg = {propid = propid, caiCount = caiCount, yunCount = yunCount, localSeat = CF.GameDefine.LOCAL_SEAT.BOTTOM}
        self:dispatchEvent({ name = self.EVENT_PROP_TRANSFER_PROP_SUCC, msg = msg})
        -- 如果是金龙，需要再次获取金龙道具时间
        if self:isLong(propid) then
            -- 转发给其他玩家增加财运值信息
            self:sendAddCaiYun(propid, caiCount, yunCount)
            self:reqGetPropsCount()
        elseif isAddUseTimes then
            CF.game:getModule("CaiYunGuide"):usePrayPropSuccess(scene)
            self:reqGetPropsCount()
        end
        -- 刷新玩家钻石数量
        CF.selfPlayerData:flushPlayerDrop()
        self._curMulti = 1
        self._curUseProductInfo = {}
        -- local luckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
        -- XH.lobby:getModule("LuckyMission"):reqTaskV2Finish(luckyMissionConfig.TaskType.Res_PropCaiYun)
    end
end

-- 兑换金龙
function CaiYunPropNewModule:doExchange(productInfo)
    if productInfo then
        local priceConfig = self:getNeedPropIDAndPrice(productInfo)
        if priceConfig then
            CF.TipTool.showLoading()
            CF.reqExchangeProduct(ShopConfig.ProductType.CAIYUNNEW, productInfo.id, self, self.respExchangeProduct, priceConfig.propType, productInfo.value)
        end
    end
end

-- 请求兑换结果
function CaiYunPropNewModule:respExchangeProduct(req, type, data)
    CF.TipTool.hideLoading()
    if type == CF.REQ_TYPE_SUCCESS then
        local propId = tonumber(data.propValue)
        if self:isLong(propId) then
            self:respTransferProps(nil, XH.Req.TYPE.SUCCESS, {nErrCode = 0, nXYData = {reply = { owners = {[1] = {props = {[1] = {prop_id = propId}}}}}}})
        else
            self:reqTransferProps({productInfo = self._curUseProductInfo})
        end
    else
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK
        }, req:getMessage())
    end
end


function CaiYunPropNewModule:cleanListInfo()
    self._propListInfo = {}
    self._propFinalListInfo = {}
end

function CaiYunPropNewModule:getPropListInfo()
    return self._propListInfo
end

function CaiYunPropNewModule:getCaiYunInfo()
    return self._caiyunInfo
end

function CaiYunPropNewModule:getPropsCount()
    return self._propsCount
end

function CaiYunPropNewModule:getCurAwardType()
    return self._curAwardType
end

function CaiYunPropNewModule:isLong(propId)
    return propId == CaiYunPropNewConfig.KW_PROP_JINLONG_ID_FINAL or propId == CaiYunPropNewConfig.KW_PROP_JINFENG_ID_FINAL or propId == CaiYunPropNewConfig.KW_PROP_LONGFENG_ID_FINAL
end

-- 获取增加的财运值
function CaiYunPropNewModule:getCaiYunCountByID(propId, multi)
    if not self._caiyunInfo or not self._caiyunInfo.conf_list then
        return 0, 0
    end
    multi = multi or 1
    if self:isLong(propId) then
        multi = 1
    end
    for k,v in pairs(self._caiyunInfo.conf_list) do
        if v.prop_id == propId then
            return v.cai*multi, v.yun*multi
        end
    end
    return 0,0
end

function CaiYunPropNewModule:getPropCountByID(propId)
    for i,v in pairs(self._propsCount) do
        if v.prop_id == propId then
            return v.count
        end
    end
    return 0
end

function CaiYunPropNewModule:getPrayPropInfoByID(propId)
    if not propId or tonumber(propId) == 0 then
        return nil
    end
    local allProps = self._propListInfo
    for k, v in pairs(allProps) do
        if tonumber(v.value) == tonumber(propId) then
            return v
        end
    end
end
-- 获取财运值是否已满
function CaiYunPropNewModule:getCaiFull()
    if not self._caiyunInfo or not self._caiyunInfo.cai_cur or not self._caiyunInfo.cai_max then
        return false
    end
    if self._caiyunInfo.cai_cur >= self._caiyunInfo.cai_max then
        return true
    end
    return false
end
-- 获取财运值是否已满
function CaiYunPropNewModule:getYunFull()
    if not self._caiyunInfo or not self._caiyunInfo.yun_cur or not self._caiyunInfo.yun_max then
        return false
    end
    if self._caiyunInfo.yun_cur >= self._caiyunInfo.yun_max then
        return true
    end
    return false
end

function CaiYunPropNewModule:resetMulti(productInfo, multi)
    multi = multi or 1
    if self:isLong(tonumber(productInfo.value)) then
        multi = 1
    end
    return multi
end

function CaiYunPropNewModule:updateCurAwardType()
    local awardType = CaiYunPropNewModule.AWARD_TYPE.NoAward
    -- 更新当前奖励状态，分为3种（首次奖励，普通奖励，金龙奖励）
    -- 首次奖励条件：金龙积分(gold_point)大于首次奖励积分(first_award_point)
    -- 金龙奖励条件：金龙积分(gold_point)大于金龙奖励积分(gold_award_point)
    -- 普通奖励条件：普通积分(comm_point)大于普通奖励积分(comm_award_point)
    if not self._caiyunInfo or not self._caiyunInfo.gold_point or not self._caiyunInfo.first_award_point or not self._caiyunInfo.gold_award_point 
        or not self._caiyunInfo.comm_point or not self._caiyunInfo.comm_award_point then
        return awardType
    end
    if self._caiyunInfo.gold_point >= self._caiyunInfo.first_award_point and self._caiyunInfo.is_first_award == false then
        awardType = CaiYunPropNewModule.AWARD_TYPE.FirstAward
    elseif self._caiyunInfo.gold_point >= self._caiyunInfo.gold_award_point then
        awardType = CaiYunPropNewModule.AWARD_TYPE.GoldDragonAward
    elseif self._caiyunInfo.comm_point >= self._caiyunInfo.comm_award_point then
        awardType = CaiYunPropNewModule.AWARD_TYPE.NormalAward
    end
    return awardType
end

function CaiYunPropNewModule:getPropRemoteUrl(id)
    for _,v in pairs(self._propListInfo) do
        if tonumber(v.value) == id then
            return v.image
        end
    end
    return ""
end

return CaiYunPropNewModule  f]  