
local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:getLimitXYIDs()
    local xyIDs = BigWinLostModule.super.getLimitXYIDs(self)
    -- 指定导入嘉兴基类协议文件
    local GameProtocolSToC_Base = require("game.Mahjong.JiaXing.BaseMahjong.Protocols.GameProtocol")
    table.insert(xyIDs, GameProtocolSToC_Base.msgNewTotalWinLost.XY_ID)
    return xyIDs
end

function BigWinLostModule:analySinglePlayerData(msgData)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    if msgData.maxHuFan then
        for i = 0, 3 do
            gameData:setMaxHuFanWuJiang(i, msgData.maxHuFan[i])
        end
    end
    local nSeat = msgData.nSeat
    local totalWinLost = {}
    totalWinLost.nSeat = msgData.nSeat
    totalWinLost.huCnt = msgData.huCnt
    totalWinLost.nCount = msgData.nCount
    totalWinLost.Fans = msgData.Fans
    totalWinLost.nTotalWinLost = msgData.nTotalWinLost
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    if msgData.huCnt == 0 then
        totalWinLost.maxFanNum = 0
    else
        if CF.roomData:is2PGame() or CF.roomData:getTaiTouHuQuanShu() == 0 then
            local fanNums = 0
            for i=1, #totalWinLost.Fans do
                WinLostFanConfig.KW_WINLOST_FAN_NUMS[totalWinLost.Fans[i].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_NUMS[totalWinLost.Fans[i].nFanID] or 0
                fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[totalWinLost.Fans[i].nFanID] * totalWinLost.Fans[i].nCount)
            end
            if not CF.roomData:is2PGame() then
                totalWinLost.maxFanNum = math.pow(2, fanNums)
            else
                totalWinLost.maxFanNum = fanNums
            end
        else
            local taiNums = 0
            local fanNums = 0
            for i=1, #totalWinLost.Fans do
                -- 计算台数
                WinLostFanConfig.TAIPOINT[totalWinLost.Fans[i].nFanID] = WinLostFanConfig.TAIPOINT[totalWinLost.Fans[i].nFanID] or 0
                taiNums = taiNums + (WinLostFanConfig.TAIPOINT[totalWinLost.Fans[i].nFanID] * totalWinLost.Fans[i].nCount)
                -- 计算番数
                WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[totalWinLost.Fans[i].nFanID] = WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[totalWinLost.Fans[i].nFanID] or 0
                fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_TAI_FAN_NUMS[totalWinLost.Fans[i].nFanID] * totalWinLost.Fans[i].nCount)
            end
            totalWinLost.maxFanNum = taiNums * math.pow(2, fanNums)
        end
    end    
    self._tTotalWinLost[nSeat] = totalWinLost
end

function BigWinLostModule:analyTotalResultMsg(msgData)
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = CF.roomData:getPlayCount()
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    local maxScore = 0
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local tmpTotalWinLost = self._tTotalWinLost[seat]
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(player)
            param.totalScore[seat] = tmpTotalWinLost.nTotalWinLost
            maxScore = tmpTotalWinLost.nTotalWinLost > maxScore and tmpTotalWinLost.nTotalWinLost or maxScore
            
            local tmpStrType = {}
            if not CF.roomData:is2PGame() then
                if CF.roomData:getWuJiangYZM() == 1 then
                    tmpStrType[#tmpStrType + 1] = "胡牌次数 " .. tmpTotalWinLost.huCnt
                    if gameData:getMaxHuFanWuJiang(seat) >= 0 then
                        tmpStrType[#tmpStrType + 1] = "最大倍数 " .. math.pow(2, gameData:getMaxHuFanWuJiang(seat))
                    else
                        tmpStrType[#tmpStrType + 1] = "最大倍数 0"
                    end
                else
                    tmpStrType = {"胡牌次数 " .. tmpTotalWinLost.huCnt, "最大倍数 " .. tmpTotalWinLost.maxFanNum}
                end
            else
                if CF.roomData:getWuJiangYZM() then
                    tmpStrType[#tmpStrType + 1] = "胡 " .. tmpTotalWinLost.huCnt .. " 次"
                    if gameData:getMaxHuFanWuJiang(seat) >= 0 then
                        tmpStrType[#tmpStrType + 1] = "最大 " .. gameData:getMaxHuFanWuJiang(seat) .. " 番"
                    else
                        tmpStrType[#tmpStrType + 1] = "最大0番"
                    end
                else
                    tmpStrType = {"胡 " .. tmpTotalWinLost.huCnt .. " 次", "最大 " .. tmpTotalWinLost.maxFanNum .. " 番"}
                end
            end
            param.scoreDes[seat] = tmpStrType
        end
    end

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}

    return param
end

return BigWinLostModule