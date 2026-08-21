local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.BigWinLost.Module")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function BigWinLostModule:getSubXYDealList()
    local subXYDealList = BigWinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgTotalResultEx), msgClass = CF.GameProtocol.msgTotalResultEx }
    
    return subXYDealList
end

--大结束
function BigWinLostModule:onMsgTotalResultEx(msgData)
    self:setBigWinLostData(nil)

    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.bankerSeat = gameData:getBankerSeat()
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(player)
            local score = 0
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score
            
            local tmpStrType = {"胡牌次数 " .. msgData.maxHuCount[seat], "最大台数 " .. msgData.maxFanNum[seat]}
            if msgData.maxFanCount[seat] > 0 then
                tmpStrType[#tmpStrType + 1] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][1]] or ""
                for j = 2, msgData.maxFanCount[seat] do
                    if j % 2 == 0 then
                        tmpStrType[#tmpStrType + 1] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or ""
                    else
                        tmpStrType[#tmpStrType] = tmpStrType[#tmpStrType] .. " " .. (WinLostFanConfig.KW_WINLOST_FAN_TYPE[msgData.maxFanName[seat][j]] or "")
                    end
                end
            end
            param.scoreDes[seat] = tmpStrType
        end
    end
    
    CF.roomData:setIsGameOver(msgData.show)
    param.bigWinnerSeat = self:getBigWinnerSeatByScore(param.totalScore)
    
    if msgData.show and not msgData.over then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif msgData.show then
        self:setBigWinLostData(param)
    end
end

return BigWinLostModule