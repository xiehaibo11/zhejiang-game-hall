local PropUseModule50 = CF.gameClass("PropUseModule50", CF.ModuleBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')
local ShopConfig = require("lobby.Modules.Shop.Config")

--TODO
function PropUseModule50:dealProp(costPropId, costPropCount, seatId, propIndex, sucCall)
    -- 通过接口判断是否是免费使用道具
    if XH.lobby:getModule("RecallNew") and XH.lobby:getModule("RecallNew"):nFreePropTimes() > 0 then
        CF.game:getModule("PropUse"):dealPropVipFree(costPropId, costPropCount, seatId, propIndex, "reback='1';")
        if sucCall then
            sucCall()
        end
    elseif CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.FREE_PROPS) and not CF.getLobbyModule("Sxvip"):isExpire() then
        CF.game:getModule("PropUse"):dealPropVipFree(costPropId, costPropCount, seatId, propIndex)
        if sucCall then
            sucCall()
        end
    else
        costPropCount = costPropCount or "0钻石"
        local nCostCnt = 0
        local propName = ""
        if type(costPropCount) == "string" then
            nCostCnt, propName = costPropCount:match("(%d+%.?%d*)%s*(.+)")
            nCostCnt = tonumber(nCostCnt)
        end
        local propCnt = CF.game:getModule("PropUse"):getPropCnt(costPropId)
        if propCnt <= 0 and nCostCnt and XH.playerData:getDiamnd() < nCostCnt and propName == "钻石" and not CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(costPropId) then 
            local param = {}
            param.propCount = nCostCnt
            param.propType = ShopConfig.SpecialTag.DIAMOND
            XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
            return false
        end 
        local propId = 0
        if propCnt > 0 then
            propId = costPropId
            nCostCnt = 1
        elseif propName == "钻石" then
            propId = CF.areaData:getPropDiamndID()
        elseif propName == "房卡" then
            propId = CF.areaData:getPropRoomCardID()
        elseif propName == "金币" then
            propId = CF.areaData:getGoldPropId()
        else
            propId = CF.areaData:getPropDiamndID()
        end
        local strParam = "taskname=use_emoji_props;goldprop=1;logtype=1601;inst=" .. costPropId .. ";throwprop=1;toSeat=" .. seatId .. ";propIndex=" .. propIndex
        self:dealProp50(propId, nCostCnt, strParam, sucCall)
    end
    return true
end

function PropUseModule50:dealPropOld(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    -- 通过接口判断是否是免费使用道具
    costPropCount = costPropCount or "0钻石"
    local nCostCnt = 0
    local propName = ""
    if type(costPropCount) == "string" then
        nCostCnt, propName = costPropCount:match("(%d+%.?%d*)%s*(.+)")
        nCostCnt = tonumber(nCostCnt)
    end
    local propCnt = CF.game:getModule("PropUse"):getPropCnt(costPropId)
    if propCnt <= 0 and nCostCnt and XH.playerData:getDiamnd() < nCostCnt and propName == "钻石" and not CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(costPropId) then 
        local param = {}
        param.propCount = nCostCnt
        param.propType = ShopConfig.SpecialTag.DIAMOND
        XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
        return false
    end 
    local propId = 0
    if propCnt > 0 then
        propId = costPropId
        nCostCnt = costPropCount
    elseif propName == "钻石" then
        propId = CF.areaData:getPropDiamndID()
    elseif propName == "房卡" then
        propId = CF.areaData:getPropRoomCardID()
    elseif propName == "金币" then
        propId = CF.areaData:getGoldPropId()
    else
        propId = CF.areaData:getPropDiamndID()
    end
    local strParam = "taskname=use_emoji_props;goldprop=1;logtype=1601;inst=" .. costPropId .. ";throwprop=1;toSeat=" .. seatId .. ";propIndex=" .. propIndex .. ";" .. (extInfo or "")
    self:dealProp50(propId, nCostCnt, strParam, sucCall)
    return true
end

function PropUseModule50:dealProp2(useToPropID, costInfo, seatId, propIndex, sucCall, extInfo)
    local costPropId = costInfo.id
    local costPropCount = costInfo.cnt

    local strParam = "taskname=use_emoji_props;goldprop=1;logtype=1601;inst=" .. costPropId .. ";" .. (extInfo or "") .. ";throwprop=1;toSeat=" .. seatId .. ";propIndex=" .. propIndex
    self:dealProp50(costPropId, costPropCount, strParam, sucCall)
    return true
end

-- 请求50协议扣除道具
function PropUseModule50:dealProp50(costPropId, costPropCount, strParam, sucCall)
    local param = {}
    local props = {
        prop_id = costPropId,         --道具id
        count = -costPropCount,           --道具数量
        burse_type = 1,  --钱包类型
    }
    param.props = props
    param.custom = strParam
    if sucCall then
        self._sucCall = sucCall
    end
    CF.reqUsePropsByProtobuf(param, self, self.onRespDealProp)
end

function PropUseModule50:reqShuffleCharge()
    local shufflePropId = CF.gameSub:getShufflePropID(CF.roomData:getGameID())
    local strParam = "taskname=shuffle;logtype=1601;inst=" .. shufflePropId .. ";shuffle=1"
    local propCost = CF.game:getModule("PropUse"):getShufflePrice()
    self:dealProp50(CF.areaData:getGoldPropId(), propCost, strParam)
end

function PropUseModule50:onRespDealProp(req, type, data)
    if not CF.game then
        return
    end
    if type == XH.Req.TYPE.SUCCESS then
        data.param = data.custom
        if self._sucCall then
            self._sucCall()
        end
        self._sucCall = nil
        CF.game:getModule("PropUse"):onUsePropSuccess(data)
    else
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("使用道具失败")
    end
end

return PropUseModule50
�