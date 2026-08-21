local RoomInfoModule = CF.gameClass("RoomInfoView", "game.Mahjong.JiaXing.BaseMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:getSubXYDealList()
    local subXYDealList = RoomInfoModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgGameRule),msgClass = CF.GameProtocol.msgGameRule}
    return subXYDealList
end

function RoomInfoModule:getLimitXYIDs()
    local xyIDs = RoomInfoModule.super.getLimitXYIDs()
    table.insert(xyIDs, 1041)
    return xyIDs
end

function RoomInfoModule:analyseGameRuleStr(strGameRule)
    -- local ruleStr = RoomInfoModule.super.analyseGameRuleStr(self, strGameRule)
    local ruleTable = CF.StringTool.getTableByString(strGameRule,";","=")
    local winLostLmt = "0"
    if ruleTable["winLostLmt"] then
        winLostLmt = string.gsub(ruleTable["winLostLmt"], "'", "")
    end
    local orderRuleTable = {"openSanTan", "openHuangFan", "canChow", "winLostLmt", "huLmt"}
    local gameRuleStrTable = {
        ["openSanTan"] = {[1] = "包三摊"},
        ["openHuangFan"] = {[1] = "黄番"},
        ["canChow"] = {[0] = "禁吃牌", [1] = "可吃牌"},
        ["winLostLmt"] = {[0] = "无片数限制", [1] = "" .. winLostLmt .. "片"},
        ["huLmt"] = {[0] = "1粒头", [1] = "2粒头", [2] = "4粒头"},
        ["nFangKa"] = {[0] = "房主付", [1] = "费用均摊"},
    }

    local finalRuleStr = ""
    for _, var in ipairs(orderRuleTable) do
        if ruleTable[var] then
            local strRuleValue = string.gsub(ruleTable[var], "'", "")
            local value = tonumber(strRuleValue)
            if var == "winLostLmt" and value then
                local tmpValue = value > 0 and 1 or 0
                finalRuleStr = finalRuleStr .. gameRuleStrTable[var][tmpValue]
                finalRuleStr = finalRuleStr .. "/"
            else
                if gameRuleStrTable[var][value] then
                    finalRuleStr = finalRuleStr .. gameRuleStrTable[var][value]
                    finalRuleStr = finalRuleStr .. "/"
                end
            end
        end
    end

    if not CF.teaHouseManager:isInTeaHouse() then
        if ruleTable["nFangKa"] then
            local strRuleValue = string.gsub(ruleTable["nFangKa"], "'", "")
            local payType = tonumber(strRuleValue)
            if gameRuleStrTable["nFangKa"] and gameRuleStrTable["nFangKa"][payType] then
                finalRuleStr = finalRuleStr .. gameRuleStrTable["nFangKa"][payType] .. "/"
            end
        end
    end

    finalRuleStr = finalRuleStr .. CF.roomData:getChairs() .. "人"
    if ruleTable["base"] then
        local basescore = string.gsub(ruleTable["base"], "'", "")
        finalRuleStr = finalRuleStr .. "/底分" .. basescore
    end
    if ruleTable["openHuangFan"] and tonumber(string.gsub(ruleTable["openHuangFan"], "'", "")) == 1 then
        CF.roomData:setIsOpenHuangFan(true)
    end
    if ruleTable["openSanTan"] and tonumber(string.gsub(ruleTable["openSanTan"], "'", "")) > 0 then
        CF.roomData:setIsSupportSanTan(true)
    else
        CF.roomData:setIsSupportSanTan(false)
    end
    --自动准备
    if ruleTable["autoReady"] and tonumber(string.gsub(ruleTable["autoReady"], "'", "")) == 1 then
        CF.msgManager:sendGameStart()
    end
    return finalRuleStr
end

function RoomInfoModule:onMsgGameRule(msgData)
    local strGameRule = self:analyseGameRuleStr(msgData.strGameRule)
    CF.roomData:setGameRule(strGameRule)
    if CF.roomData:getIsOpenHuangFan() then
        CF.game:getModule("GameLayer"):showHuangFanJiaXing()
    end
end

return RoomInfoModule