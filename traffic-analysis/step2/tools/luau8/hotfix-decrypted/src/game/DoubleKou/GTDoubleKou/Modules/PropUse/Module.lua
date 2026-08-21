local PropUseModule = CF.gameClass("GameModule", "game.GameBase.Modules.PropUse.Module")
local SxVipConfig = require('lobby.Modules.Sxvip.Config')
local ShopConfig = require("lobby.Modules.Shop.Config")
function PropUseModule:dealProp(costPropId, costPropCount, seatId, propIndex)
    if XH.lobby:getModule("RecallNew") and XH.lobby:getModule("RecallNew"):nFreePropTimes() > 0 then
        self:dealPropVipFree(costPropId, costPropCount, seatId, propIndex, "reback='1';")
        return true
    end
    if CF.getLobbyModule("Sxvip"):getPowerExit(SxVipConfig.SXVIP_POWER.FREE_PROPS) and not CF.getLobbyModule("Sxvip"):isExpire() then
        self:dealPropVipFree(costPropId, costPropCount, seatId, propIndex)
        return true
    end
    
    -- 目前只有金币

    function splitString(inputString)
        local number, text = inputString:match("(%d+%.?%d*)%s*(.+)")
        return number, text
    end

    local nCostCnt = costPropCount
    local propName = ""
    if type(costPropCount) == "string" then
        nCostCnt, propName = splitString(costPropCount)
        nCostCnt = tonumber(nCostCnt)
    end

    local propCnt = self:getPropCnt(costPropId)
    if propCnt <= 0 and nCostCnt and XH.playerData:getDiamnd() < nCostCnt and propName == "钻石" and not CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(costPropId)then 
        local param = {}
        param.propCount = nCostCnt
        param.propType = ShopConfig.SpecialTag.DIAMOND
        XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
        return false
    end 

    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer == nil then 
        return false
    end
    local propId = 0
    if propName == "金币" then 
        local score = selfPlayer:getPlayTypeScore()
        local getGoldRoomInfo = CF.goldConfigManager:getLastGoldRoomInfo()
        local minScore = 0 
        if getGoldRoomInfo and getGoldRoomInfo.roomLevelInfos then 
            for i = 1,#getGoldRoomInfo.roomLevelInfos do 
                local minRich = getGoldRoomInfo.roomLevelInfos[i].minrich
                if minRich and (minScore == 0 or minRich < minScore) then 
                    minScore = minRich
                end
            end
        end
        
        if selfPlayer:getPlayTypeScore() - nCostCnt < minScore  then 
            XH.TipTool.showToast("金币不足，无法使用道具!")
            return true
        end
        selfPlayer._nPlayTypeScore = selfPlayer._nPlayTypeScore - nCostCnt--为了防止没及时所以先扣掉数据
        propId = 101473
    elseif propName == "房卡" or propName == "大房卡" then
        propId = XH.areaData:getPropRoomCardID()
    elseif propName == "钻石" then 
        propId = XH.areaData:getPropDiamndID()
    elseif propName == "小房卡" then 
        propId = XH.areaData:getPropSmallRoomCardID()
    end
    
    if propCnt > 0 then
        propId = costPropId
        nCostCnt = 1
    end
    CF.reqTransferProps("taskname=use_emoji_props;goldprop=1;logtype=1601;inst=" .. costPropId .. ";", {
        price = nCostCnt,
        propID = propId, -- 50金币ID
    }, nil, self, function(_target, req, type, data)
        
        if data and data.nXYData and data.nXYData.resp and data.nXYData.resp.err_code == 0 then
            CF.msgManager:sendPropAni("toSeat=" .. seatId .. ";propIndex=" .. propIndex)
        else
            XH.TipTool.showToast(propName .. "不足，无法使用道具!")
        end
        XH.playerData:flushPlayerDrop()
    end)
    return true
end

function PropUseModule:dealPropOld(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    local propId = costPropId
    local nCostCnt = costPropCount
    CF.reqTransferProps("taskname=use_emoji_props;goldprop=1;logtype=1601;inst=" .. costPropId .. ";" .. (extInfo or ""), {
        price = nCostCnt,
        propID = propId, -- 50金币ID
    }, nil, self, function(_target, req, type, data)
        
        if data and data.nXYData and data.nXYData.resp and data.nXYData.resp.err_code == 0 then
            CF.msgManager:sendPropAni("toSeat=" .. seatId .. ";propIndex=" .. propIndex .. ";" .. (extInfo or ""))
        else
            XH.TipTool.showToast(propName .. "不足，无法使用道具!")
        end
        XH.playerData:flushPlayerDrop()
    end)
    return true
end

return PropUseModule