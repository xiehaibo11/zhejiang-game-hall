local CaiYunPropModule = CF.gameClass("CaiYunPropModule", CF.ModuleBase)
local CaiYunPropConfig = CF.gameRequire("Modules.CaiYunProp.Config")

CaiYunPropModule.EVENT_PROPLISTINFO_CHANGED = "EVENT_PROPLISTINFO_CHANGED"
CaiYunPropModule.EVENT_PROP_EXCHANGE_SUCC = "EVENT_PROP_EXCHANGE_SUCC"
CaiYunPropModule.EVENT_PROP_GET_LEFTTIME = "EVENT_PROP_GET_LEFTTIME"
CaiYunPropModule.EVENT_PROP_BCS_EXPIRE = "EVENT_PROP_BCS_EXPIRE"

function CaiYunPropModule:ctor()
    CaiYunPropModule.super.ctor(self)
    self._propListInfo = {} --展示道具
    self._propFinalListInfo = {} --最终使用道具
    self._showCaiYunState = {}
    self._leftTime = 0
end

local CAIYUN_SHOP_ID = {
    [XH.LOBBY_ID.LISHUI] = 547
}

function CaiYunPropModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseProps.event_key, callBack = "onRespUseProp"},
    }
end

function CaiYunPropModule:reqExchangeProductsInfo()
    self:cleanListInfo()
    CF.reqCaiYunProductList(self, self.respCaiYunProductList)
end

function CaiYunPropModule:respCaiYunProductList(req, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        for k, v in pairs(data) do
            local pricaData = self:getNeedPropIDAndPrice(v)
            if table.has(CaiYunPropConfig.KW_PROP_CAISHEN_ID, tonumber(v.value) ) then
                table.insert(self._propListInfo, v)
            elseif CaiYunPropConfig.KW_PROP_CAISHEN_ID_FINAL == tonumber(v.value)
            and table.has(CaiYunPropConfig.KW_PROP_CAISHEN_ID, tonumber(pricaData.propID) ) then
                self._propFinalListInfo[tonumber(pricaData.propID)] = v
            end
        end
    else
        self:cleanListInfo()
    end

    self:dispatchEvent( { name = self.EVENT_PROPLISTINFO_CHANGED})
end

function CaiYunPropModule:cleanListInfo()
    self._propListInfo = {}
    self._propFinalListInfo = {}
end

function CaiYunPropModule:getPropListInfo()
    return self._propListInfo
end

function CaiYunPropModule:buyCaiYunProp(productInfo, callback)
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
    self._exchangeCallBack = callback

    local isHave, tipMsg = self:isHaveEnoughDiamond(productInfo)
    if isHave then
        self:doExchange(productInfo)
    else
        -- 兑换所需要的道具不够
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK
        }, tipMsg)
    end
end

function CaiYunPropModule:doExchange(productInfo)
    if productInfo then
        local priceConfig = self:getNeedPropIDAndPrice(productInfo)
        if priceConfig then
            self:reqExchangeProduct(productInfo.id, priceConfig.propType, productInfo.value, productInfo.prop_count, priceConfig.propID)
        else
            self:reqExchangeProduct(productInfo.id, nil, productInfo.value, productInfo.prop_count, priceConfig.propID)
        end
    end
end

function CaiYunPropModule:getNeedPropIDAndPrice(productInfo)
    local finalData
    if productInfo.price_config and #productInfo.price_config > 0 then
        finalData = {}
        finalData.name = productInfo.price_config[1].name
        finalData.price = tonumber(productInfo.price_config[1].value)
        finalData.propType = productInfo.price_config[1].type
        finalData.propID = tonumber(string.match(finalData.propType, "%d+"))
    end
    return finalData
end

-- 是否有足够的兑换道具
function CaiYunPropModule:isHaveEnoughDiamond(productInfo)
    local isEnough = false
    local userData = CF.selfPlayerData
    local useCurDiamond = userData:getDiamnd()
    local userRoomCard = userData:getRoomCard()

    local tipMsg = "兑换失败"
    local priceConfig = self:getNeedPropIDAndPrice(productInfo)
    if priceConfig then
        if priceConfig.name == "钻石" then
            tipMsg = "您的钻石不足，请购买后重试"
            if priceConfig.price <= useCurDiamond then
                isEnough = true
            end
        else
            tipMsg = "您的房卡不足，请购买后重试"
            if priceConfig.price <= userRoomCard then
                isEnough = true
            end
        end
    end
    return isEnough, tipMsg
end

function CaiYunPropModule:reqExchangeProduct(productId, richType, propValue, propCount, needPropID)
    CF.TipTool.showLoading()
    CF.reqreqExchangeCaiYunProduct(productId, self, self.respExchangeProduct, richType, propValue, propCount, needPropID)
end

-- 请求兑换结果
function CaiYunPropModule:respExchangeProduct(req, type, data)
    CF.TipTool.hideLoading()
    if type ==  CF.REQ_TYPE_SUCCESS then
        local reqDataEx = req:getDataEx()
        if reqDataEx and reqDataEx.propValue then
            if table.has(CaiYunPropConfig.KW_PROP_CAISHEN_ID, tonumber(reqDataEx.propValue) ) 
            and self._propFinalListInfo[tonumber(reqDataEx.propValue)] then
                self:doExchange(self._propFinalListInfo[tonumber(reqDataEx.propValue)])
                return
            end
            if CaiYunPropConfig.KW_PROP_CAISHEN_ID_FINAL == tonumber(reqDataEx.propValue) then
                -- CF.TipTool.showTip({
                --     type = CF.TIP_LAYER_TYPE.OK,
                --     funcOK = function()
                --         self:reqGetPropsCount(CF.selfPlayerData:getNumberID())
                --     end,
                -- }, "兑换成功!")
                -- CF.msgManager:sendRequestUseProps(reqDataEx.propValue,reqDataEx.propCount)
                self:performWithDelay(function()
                    self:reqGetPropsCount(CF.selfPlayerData:getNumberID())
                end,2)
                self:dispatchEvent( { name = self.EVENT_PROP_EXCHANGE_SUCC, reqDataEx = reqDataEx}) 
                if self._exchangeCallBack then self._exchangeCallBack() end
                self._exchangeCallBack = nil
            end
        end
    else
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK
        }, req:getMessage())
    end
end

function CaiYunPropModule:onRespUseProp(event)
    local usePropMsg = CF.GameMProtocol.RespUseProps:new()
    usePropMsg:bistream(event.msg.buff, event.msg.len)
    if usePropMsg.flag == 0 then -- 使用成功
        self:reqGetPropsCount(CF.selfPlayerData:getNumberID())
    end
end

function CaiYunPropModule:reloadGetPropsCount(userIDs)
    if not userIDs then
        return
    end
    for k, userID in pairs(userIDs) do
        self:reqGetPropsCount(userID)
    end
end

function CaiYunPropModule:reqGetPropsCount(userID)
    local propIDs = {{id = CaiYunPropConfig.KW_PROP_CAISHEN_ID_FINAL, burse_type = CF.GameDefine.BURSETYPE.UserTimeNoCount}}
    if CF.teaHouseManager:isInTeaHouse() then
        CF.reqGetPropsCount(userID, CF.teaHouseManager:getTeaHousePwd(), propIDs, self, self.onRespGetPropsCount)
    else
        CF.reqGetPropsCount(userID, 0, propIDs, self, self.onRespGetPropsCount)
    end
end

function CaiYunPropModule:onRespGetPropsCount(req, nType, vData)
    if nType == XH.Req.TYPE.SUCCESS then
        if not vData or not vData.nXYData or not vData.nXYData.userID or not vData.nXYData.props or #vData.nXYData.props <= 0 then
            return
        end
        local userID = vData.nXYData.userID
        if not self._showCaiYunState[userID] then
            self._showCaiYunState[userID] = {}
            self._showCaiYunState[userID].time = 0
        end
        if vData.nXYData.props and #vData.nXYData.props > 0 then
            local maxTime = 0
            for k, v in pairs(vData.nXYData.props) do
                if v.prop_id and tonumber(v.prop_id) == CaiYunPropConfig.KW_PROP_CAISHEN_ID_FINAL and v.time and tonumber(v.time) > maxTime then
                    maxTime = tonumber(v.time)
                end
            end
            self._showCaiYunState[userID].time = maxTime
            self:dispatchEvent( { name = self.EVENT_PROP_GET_LEFTTIME}) 
            self:startSchedule()
        end
    end
end

function CaiYunPropModule:startSchedule()
    if self._refreSchedule == nil and self:getSelfLeftTime() > 0  then
        self._refreSchedule = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            self:updateTime()
        end, 1, false)
    end
end

function CaiYunPropModule:updateTime()
    if self:getSelfLeftTime() <= 0 then
        self:dispatchEvent({name = self.EVENT_PROP_BCS_EXPIRE})
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreSchedule)
        self._refreSchedule = nil
    end
end

function CaiYunPropModule:onDestroy()
    if self._refreSchedule ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._refreSchedule)
        self._refreSchedule = nil
    end
    CaiYunPropModule.super.onDestroy(self)
end

function CaiYunPropModule:isShowCaiYun(numberID)
    return self:getLeftTime(numberID) > 0
end

function CaiYunPropModule:getSelfLeftTime()
    return self:getLeftTime(CF.selfPlayerData:getNumberID())
end

function CaiYunPropModule:getLeftTime(numberID)
    local tempData = self._showCaiYunState[numberID]
    if not tempData or not tempData.time then
        return 0
    end
    local leftTime = tempData.time - os.time()
    leftTime = leftTime > 0 and leftTime or 0
    return leftTime
end

return CaiYunPropModule   i&  