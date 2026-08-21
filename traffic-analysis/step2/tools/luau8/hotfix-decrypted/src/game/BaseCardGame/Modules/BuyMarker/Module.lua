local BuyMarkerModule = CF.gameClass("BuyMarkerModule", CF.ModuleBase)
local BuyMarkerConfig = CF.gameRequire("Modules.BuyMarker.Config")

BuyMarkerModule.EVENT_PROPS_CHANGED = "EVENT_PROPS_CHANGED"
BuyMarkerModule.EVENT_EXCHANGE_SUCCESS = "EVENT_EXCHANGE_SUCCESS"
BuyMarkerModule.EVENT_SHOW_LOADING = "EVENT_SHOW_LOADING"

local MARKER_TYPE = 4

function BuyMarkerModule:ctor()
    BuyMarkerModule.super.ctor(self)
    self._markerProps = {}
    self._markerExchangeCnt = 0
    --系统时间
    self._sysTime = 0
end

function BuyMarkerModule:getProps()
    return self._markerProps
end

function BuyMarkerModule:getSysTime()
    return self._sysTime
end

function BuyMarkerModule:reqExchangeProduct(productType, productId, richType, propValue)
    CF.TipTool.showLoading()
    self._propValue = tonumber(propValue)
    CF.reqExchangeProduct(productType, productId, self, self.respExchangeProduct, richType, propValue)
end

-- 请求兑换结果
function BuyMarkerModule:respExchangeProduct(req, type, data)
    CF.TipTool.hideLoading()
    if type ==  CF.REQ_TYPE_SUCCESS then
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
            funcOK = function()
                self:dispatchEvent( { name = self.EVENT_EXCHANGE_SUCCESS})
            end,
        }, "兑换成功!")
        if self._propValue == BuyMarkerConfig.KW_PROP_MARKER_ID then
            CF.TipTool.showToast("记牌器使用中...", 2)
            if CF.roomData:is50() then
                CF.game:getModule("Marker"):reqUseEquipCard(BuyMarkerConfig.KW_PROP_MARKER_ID, self._markerExchangeCnt)
            else
                CF.msgManager:sendRequestUseProps(BuyMarkerConfig.KW_PROP_MARKER_ID,self._markerExchangeCnt)
            end
        elseif self._propValue == BuyMarkerConfig.KW_PROP_MARKER_GOLD_ID then
            if CF.roomData:isBianChaDKGoldRoom() then
                CF.msgManager:sendRequestPlayerProps()
            elseif CF.roomData:is50() then
                -- 产品要求购买打局记牌器后，需要当局立即使用
                CF.msgManager:sendRequestPlayerProps()
                if CF.roomData:getIsGameStart() then
                    CF.game:getModule("Marker"):sendRequestUseGoldJPQ(true)
                end
            end
        end
        if self._sucCall then
            self._sucCall()
        end
    else
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK
        }, req:getMessage())
    end
    self._sucCall = nil
end

function BuyMarkerModule:RequestSysTime()
    CF.roomData:getSysTime(handler(self,self.onRequestSysTime))
end

function BuyMarkerModule:onRequestSysTime(sysTime)
    if sysTime ~= nil then
        self._sysTime = tonumber(os.date("%H",sysTime))
        self:reqExchangeProductsInfo()
    end
end

-- 请求金币和房卡商品信息
function BuyMarkerModule:reqExchangeProductsInfo()
    self:dispatchEvent( { name = self.EVENT_SHOW_LOADING, msg = {isShow = true}})
    CF.reqMarkerProductList(self, self.respMarkProductsInfo)
end

-- 记牌器信息结果
function BuyMarkerModule:respMarkProductsInfo(req, type, data)
    self:dispatchEvent( { name = self.EVENT_SHOW_LOADING, msg = {isShow = false}})
    -- local resData = { type = type, msg = req:getMessage() }
    if type == CF.REQ_TYPE_SUCCESS then
        self._markerProps = data
    elseif type == CF.REQ_TYPE_FAIL then
        self._markerProps = { }
        -- resData.isTip = true
    elseif type == CF.REQ_TYPE_TIMEOUT then
        self._markerProps = { }
        -- resData.isTip = true
    end

    self:dispatchEvent( { name = self.EVENT_PROPS_CHANGED})
end

function BuyMarkerModule:buyMarker(productInfo, sucCall)
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

    local isHave, tipMsg = self:isHaveEnoughDiamond(productInfo)
    if isHave then
        if productInfo then
            self._markerExchangeCnt = productInfo.prop_count
            self._sucCall = sucCall
            if productInfo.price_config and #productInfo.price_config > 0 then
                self:reqExchangeProduct(MARKER_TYPE, productInfo.id, productInfo.price_config[1].type, productInfo.value)
            else
                self:reqExchangeProduct(MARKER_TYPE, productInfo.id)
            end
        end
        return
    else
        -- 兑换所需要的道具不够
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK
        }, tipMsg)
    end
end

-- 是否有足够的兑换道具
function BuyMarkerModule:isHaveEnoughDiamond(productInfo)
    local isEnough = false
    local userData = CF.selfPlayerData
    local useCurDiamond = userData:getDiamnd()
    local userRoomCard = userData:getRoomCard()

    local tipMsg
    if productInfo.price_config and #productInfo.price_config > 0 then
        if productInfo.price_config[1].name == "钻石" then
            tipMsg = "您的钻石不足，请购买后重试"
            if productInfo and productInfo.price <= useCurDiamond then
                isEnough = true
            end
        else
            tipMsg = "您的房卡不足，请购买后重试"
            if productInfo and productInfo.price <= userRoomCard then
                isEnough = true
            end
        end
    else
        tipMsg = "您的房卡不足，请购买后重试"
        if productInfo and productInfo.price <= userRoomCard then
            isEnough = true
        end
    end

    return isEnough, tipMsg
end

function BuyMarkerModule:isGold()
    return CF.roomData:isGoldRoom()
end

return BuyMarkerModule�