local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:getSubXYDealList()
    local subXYDealList = BigWinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResultEx}
    return subXYDealList
end

function BigWinLostModule:analyTotalResultMsg(msgData)
    local param = BigWinLostModule.super.analyTotalResultMsg(self, msgData)
    param.baseScore = msgData.baseScore --底分
    return param
end

function BigWinLostModule:getPlayerScoreDes(seat, msgData)
    local tmpStrType = {"胡 " .. msgData.maxHuCount[seat] .. " 次"}
    if msgData.maxFanCount[seat] > 0 then
        local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
        --选择其中番数最大的一个显示
        local maxfanindex = -1
        local maxfannums = 0
        for j = 1, msgData.maxFanCount[seat] do
            local fannum = msgData.maxFanName[seat][j]
            if fannum ~= nil and WinLostFanConfig.KW_WINLOST_FAN_NUMS[fannum] >= maxfannums then
                maxfanindex = fannum
                maxfannums = WinLostFanConfig.KW_WINLOST_FAN_NUMS[fannum]
            end
            if maxfanindex ~= -1 then
                tmpStrType[#tmpStrType + 1] = "最大子 " .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[maxfanindex]
            end
        end
    end 
    return tmpStrType
end


return BigWinLostModule