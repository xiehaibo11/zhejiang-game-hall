local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:onMsgTotalResult(msgData)
    cc.UserDefault:getInstance():setStringForKey("CURRENT_GAME_OPEN_MAH_ANIMATION_SHOW", "")
	BigWinLostModule.super.onMsgTotalResult(self, msgData)
end

function BigWinLostModule:getPlayerScoreDes(seat, msgData)
    local tmpStrType = {"胡牌次数     " .. msgData.maxHuCount[seat]}
    if msgData.maxFanCount[seat] > 0 then
        local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
        --选择其中番数最大的一个显示
        local maxfannums = 0
        for j = 1, msgData.maxFanCount[seat] do
            local fannum = msgData.maxFanName[seat][j]
            if fannum ~= nil and WinLostFanConfig.KW_WINLOST_FAN_NUMS[fannum] >= maxfannums then
                maxfannums = WinLostFanConfig.KW_WINLOST_FAN_NUMS[fannum]
            end
        end
    end 
    local scoreMax = -10000
    for j = 1,msgData.playCount do
        local scoreOne = msgData.boxRoomTotalWinLost[seat][j]
        if scoreOne > scoreMax then
            scoreMax = scoreOne
        end
    end
    tmpStrType[#tmpStrType + 1] = "最高分数     " .. scoreMax
    return tmpStrType
end


return BigWinLostModule