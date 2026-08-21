local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans

    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    
    -- First collect all fan types and their IDs
    local fanTypes = {}
    local fanIds = {}
    for j = 1, #tmpFan do
        local winFan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanTypes[winFan] = true
        fanIds[winFan] = tmpFan[j].nFanID
    end
    
    -- Check for special combinations and replace them
    local replacements = {}
    
    -- Check for 七对/七对子 + 爆头 combinations
    if (fanTypes["七对"] or fanTypes["七对子"]) and fanTypes["爆头"] then
        replacements["七客"] = true
        fanTypes["七对"] = nil
        fanTypes["七对子"] = nil
        fanTypes["爆头"] = nil
    end
    
    -- Check for 豪华七对 + 爆头 combinations
    if fanTypes["豪华七对"] and fanTypes["爆头"] then
        replacements["豪华七客"] = true
        fanTypes["豪华七对"] = nil
        fanTypes["爆头"] = nil
    end
    
    -- Check for 双豪华七对 + 爆头 combinations
    if fanTypes["双豪华七对"] and fanTypes["爆头"] then
        replacements["双豪华七客"] = true
        fanTypes["双豪华七对"] = nil
        fanTypes["爆头"] = nil
    end
    
    -- Check for 三豪华七对 + 爆头 combinations
    if fanTypes["三豪华七对"] and fanTypes["爆头"] then
        replacements["三豪华七客"] = true
        fanTypes["三豪华七对"] = nil
        fanTypes["爆头"] = nil
    end
    
    -- Check for 七对/七对子 + 财飘 combinations
    if (fanTypes["七对"] or fanTypes["七对子"]) and fanTypes["财飘"] then
        replacements["七飘"] = true
        fanTypes["七对"] = nil
        fanTypes["七对子"] = nil
        fanTypes["财飘"] = nil
    end
    
    -- Check for 七对/七对子 + 双财飘 combinations
    if (fanTypes["七对"] or fanTypes["七对子"]) and fanTypes["双财飘"] then
        replacements["七双飘"] = true
        fanTypes["七对"] = nil
        fanTypes["七对子"] = nil
        fanTypes["双财飘"] = nil
    end
    
    -- Check for 七对/七对子 + 三财飘 combinations
    if (fanTypes["七对"] or fanTypes["七对子"]) and fanTypes["三财飘"] then
        replacements["七三飘"] = true
        fanTypes["七对"] = nil
        fanTypes["七对子"] = nil
        fanTypes["三财飘"] = nil
    end
    
    -- Check for 豪华七对 + 财飘 combinations
    if fanTypes["豪华七对"] and fanTypes["财飘"] then
        replacements["豪华七飘"] = true
        fanTypes["豪华七对"] = nil
        fanTypes["财飘"] = nil
    end
    
    -- Check for 豪华七对 + 双财飘 combinations
    if fanTypes["豪华七对"] and fanTypes["双财飘"] then
        replacements["豪华七双飘"] = true
        fanTypes["豪华七对"] = nil
        fanTypes["双财飘"] = nil
    end
    
    -- Check for 豪华七对 + 三财飘 combinations
    if fanTypes["豪华七对"] and fanTypes["三财飘"] then
        replacements["豪华七三飘"] = true
        fanTypes["豪华七对"] = nil
        fanTypes["三财飘"] = nil
    end
    
    -- Check for 双豪华七对 + 财飘 combinations
    if fanTypes["双豪华七对"] and fanTypes["财飘"] then
        replacements["双豪华七飘"] = true
        fanTypes["双豪华七对"] = nil
        fanTypes["财飘"] = nil
    end
    
    -- Check for 双豪华七对 + 双财飘 combinations
    if fanTypes["双豪华七对"] and fanTypes["双财飘"] then
        replacements["双豪华七双飘"] = true
        fanTypes["双豪华七对"] = nil
        fanTypes["双财飘"] = nil
    end
    
    -- Check for 双豪华七对 + 三财飘 combinations
    if fanTypes["双豪华七对"] and fanTypes["三财飘"] then
        replacements["双豪华七三飘"] = true
        fanTypes["双豪华七对"] = nil
        fanTypes["三财飘"] = nil
    end
    
    -- Check for 三豪华七对 + 财飘 combinations
    if fanTypes["三豪华七对"] and fanTypes["财飘"] then
        replacements["三豪华七飘"] = true
        fanTypes["三豪华七对"] = nil
        fanTypes["财飘"] = nil
    end
    
    -- Check for 三豪华七对 + 双财飘 combinations
    if fanTypes["三豪华七对"] and fanTypes["双财飘"] then
        replacements["三豪华七双飘"] = true
        fanTypes["三豪华七对"] = nil
        fanTypes["双财飘"] = nil
    end
    
    -- Check for 三豪华七对 + 三财飘 combinations
    if fanTypes["三豪华七对"] and fanTypes["三财飘"] then
        replacements["三豪华七三飘"] = true
        fanTypes["三豪华七对"] = nil
        fanTypes["三财飘"] = nil
    end
    
    -- Calculate fan numbers using original logic
    for j = 1, #tmpFan do
        local winFan = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        local winFNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        if winFan == "十风" then
            winFNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] ^ tmpFan[j].nCount
        end
        if fanNums == 0 then
            fanNums = fanNums + winFNum
        else
            fanNums = fanNums * winFNum
        end
    end
    
    -- Build final fan names string
    for fanType, _ in pairs(replacements) do
        fanNames = fanNames .. fanType .. " "
    end
    
    for fanType, _ in pairs(fanTypes) do
        fanNames = fanNames .. fanType .. " "
    end

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent({ name = self.EVENT_RESULT_EXINFO_CHANGED })
end

return WinLostData