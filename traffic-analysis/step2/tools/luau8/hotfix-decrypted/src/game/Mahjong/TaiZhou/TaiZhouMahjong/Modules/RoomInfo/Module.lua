local RoomInfoModule = CF.gameClass("RoomInfoModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.RoomInfo.Module")

function RoomInfoModule:onMsgGameRule(msgData)
    local ruleTable = CF.StringTool.getTableByString(msgData.strGameRule,";","=")
    local orderRuleTable = {"winLostType", "forceGPS", "liaoDaZiBaoPai", "lianZhuang", "duiDuiHuFourScore", "noShengPaiJieDuan", "buSiBao", "DelColor", "FengDing"}
    local gameRuleStrTable = {
        ["winLostType"] = {[1] = "不平搓", [2] = "平搓"},
        ["forceGPS"] = {[1] = "防作弊"},
        ["PayType"] = {[0] = "房主付", [1] = "平摊付", [7] = "平摊付"},
        ["liaoDaZiBaoPai"] = {[1] = "撩搭子包牌"},
        ["lianZhuang"] = {[1] = "连庄"},
        ["duiDuiHuFourScore"] = {[1] = "对对胡4胡"},
        ["noShengPaiJieDuan"] = {[1] = "无生牌阶段"},
        ["buSiBao"] = {[1] = "不死包"},
        ["DelColor"] = {[1] = "缺一色",[2] = "缺二色"},
        ["FengDing"] = {[0] = "不封顶",[60] = "60封顶",[80] = "80封顶"},
    }
    local strGameRule = ""
    for _, var in ipairs(orderRuleTable) do
        if ruleTable[var] then
            local strRuleValue = string.gsub(ruleTable[var], "'", "")
            local value = tonumber(strRuleValue)
            if gameRuleStrTable[var][value] then
                strGameRule = strGameRule .. gameRuleStrTable[var][value]
                strGameRule = strGameRule .. "/"
            end
        end
    end
    if not CF.teaHouseManager:isInTeaHouse() then
        if ruleTable["PayType"] then
            local strRuleValue = string.gsub(ruleTable["PayType"], "'", "")
            local payType = tonumber(strRuleValue)
            if gameRuleStrTable["PayType"] and gameRuleStrTable["PayType"][payType] then
                strGameRule = strGameRule .. gameRuleStrTable["PayType"][payType] .. "/"
            end
        end
    end
    strGameRule = strGameRule .. CF.roomData:getChairs() .. "人"
    if ruleTable["basescore"] then
        local basescore = string.gsub(ruleTable["basescore"], "'", "")
        strGameRule = strGameRule .. "/底分" .. basescore
    end
    if ruleTable["maxQuanShu"] then
        local maxQuanShu = string.gsub(ruleTable["maxQuanShu"], "'", "")
        if CF.roomData:getChairs() == 2 then
            strGameRule = strGameRule .. "/" .. (2 * maxQuanShu) .. "局"
        else
            strGameRule = strGameRule .. "/" .. maxQuanShu .. "圈"
            local gameData = CF.game:getModule("GameLayer"):getGameData()
            gameData:setPlayCircle(true)
        end
    end
    if ruleTable["IsSysTrust"] then
        local isSysTrust = string.gsub(ruleTable["IsSysTrust"], "'", "")
        local trustTimeNum = tonumber(isSysTrust) or 0
        if trustTimeNum > 0 then
            strGameRule = strGameRule .. "/超时" .. (trustTimeNum) .. "秒托管"
            self._canSettingViewTrust = true
        end
    end
    CF.roomData:setGameRule(strGameRule)
    self:checkShowTrustTips()

    --自动准备
    if ruleTable["autoReady"] and tonumber(string.gsub(ruleTable["autoReady"], "'", "")) == 1 then
        CF.msgManager:sendGameStart()
    end
    return strGameRule
end

return RoomInfoModule�