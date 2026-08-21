local GoldEnterCardModule = class("GoldEnterCardModule", XH.ModuleBase)

function GoldEnterCardModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.RoomProtocol.RespGetGoldRoomInfo.event_key, callBack = "onRespUseProps" }
    }
end

function GoldEnterCardModule:checkUseGoldEnterCard(roomInfo, level, confID)
    self.roomInfo = roomInfo
    local minrich = roomInfo.roomLevelInfos[level].minrich
    local maxrich = roomInfo.roomLevelInfos[level].maxrich
    local playerSR = XH.playerData:getSR() or 0
    self._needNum = minrich - playerSR
    self.confID = confID
    self.level = level

    local info = self:getNearestCardInfo(maxrich)
    if info.propId and info.propId > 0 then
        self._originCount = info.count
        self:sendUseCard(info.propId)
        return true
    end
    return false
end

function GoldEnterCardModule:getNearestCardInfo(maxrich)
    local info = {}
    local config = self:getConfig()
    if config then
        local cardValue = {}
        for k,_ in pairs(config) do
            table.insert(cardValue,tonumber(k))
        end
        table.sort(cardValue)
        local playerSR = XH.playerData:getSR() or 0
        for i = 1, #cardValue do
            if cardValue[i] >= self._needNum then
                local v = config[tostring(cardValue[i])]
                local count = 0
                for j = 1, #v do
                    local propCount = XH.lobby:getModule("BagSysNew"):getEnterCardCount(v[j]) or 0
                    count = count + propCount
                    if propCount > 0 and info.propId == nil and (maxrich == -1 or (maxrich > 0 and (playerSR+cardValue[i]) <= maxrich)) then 
                        info.propId = v[j] 
                    end
                end
                if info.propId ~= nil then
                    info.count = count
                    break
                end
            end
        end
    end
    return info
end

function GoldEnterCardModule:getConfig()
    local configModule = XH.lobby:getModule("Configuration")
    if not configModule then
        return nil
    end
    local ConfigurationDefine = require(XH.goldLobbyRootPath .. ".Modules.Configuration.Define")
	local allCfg = configModule:getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
	if allCfg then
		return allCfg.DarkShuangKouEnterCard
	end
end

function GoldEnterCardModule:sendUseCard(propId)
    local strParam = "taskname=admission_ticket;"
    self:sendRequestUseProps(propId, 1, nil,strParam)
end

function GoldEnterCardModule:sendRequestUseProps(propId, propNum, nType, param)
    local ReqUseProps = require(XH.goldLobbyRootPath .. ".Req.Prop.ReqUseProps")
    local reqUseProps = ReqUseProps:new()
    reqUseProps:addReqCallBack(self,self.onRespUseProps)
    local appid = 0
    if self.roomInfo.roomInfo.GoldMode == 50 then
        appid = 88888888
    end
    reqUseProps:start(propId, propNum, nType, param, appid, XH.areaData:getGoldSrsGroupID())
end

function GoldEnterCardModule:onRespUseProps(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local propId = data.propsid
        XH.playerData:flushGoldCoin()
        XH.viewManager:openView("GoldEnterCardView", nil, { propId = propId, originCount = self._originCount, confID = self.confID, level = self.level })
        XH.lobby:getModule("BagSysNew"):reqDoubleCards(false)
    end
end

return GoldEnterCardModule