local BigWinLostModule = CF.gameClass("BigWinLostModule", "game.Mahjong.BasicMahjong.Modules.BigWinLost.Module")

function BigWinLostModule:ctor()
    BigWinLostModule.super.ctor(self)
end

-- function BigWinLostModule:getSubXYDealList()
-- 	local xyList = BigWinLostModule.super.getSubXYDealList(self)
-- 	xyList[#xyList+1] = {callback = handler(self,self.onMsgTotalResult),msgClass = CF.GameProtocol.msgTotalResult}
--     return xyList
-- end
--大结束
function BigWinLostModule:onMsgTotalResult(msgData)
    self:setBigWinLostData(nil)
    local param = {}
    param.type = 1
    param.roomid = CF.roomData:getRoomID()
    param.playCount = msgData.playCount
    param.maxCount = CF.roomData:getMaxPlayCount()
    param.playerCount = CF.roomData:getCurPlayerCount()
    param.timeStr = os.date("%Y-%m-%d  %H:%M:%S", os.time())
    param.hostSeat = CF.roomData:getHostSeat()
    param.players = {}
    param.totalScore = {}
    param.scoreDes = {}
    param.totalKong = {}
    local maxScore = 0

    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            param.players[seat] = clone(CF.roomData:getPlayerDataBySeatId(seat))
            local score = 0
            for j = 1, msgData.playCount do
                score = score + msgData.boxRoomTotalWinLost[seat][j]
            end
            param.totalScore[seat] = score
            maxScore = score > maxScore and score or maxScore

            local gameScore = loadstring("return {" .. msgData.gameInfo[seat] .. "}")()
            param.totalKong[seat] = gameScore["KONGSC"]

            local tmpStrType = {"自摸次数 "..gameScore["SLF"],"明杠次数 "..gameScore["MKC"],
                "暗杠次数 "..gameScore["CKC"],"点杠次数 "..gameScore["DKC"],"被点杠次数"..gameScore["BDKC"],
                "点炮次数 "..gameScore["DIC"],"接炮次数 "..gameScore["GDC"],}

            param.scoreDes[seat] = tmpStrType
        end
    end

    param.bigWinnerSeatList = self:getBigWinnerSeatList(param.totalScore, maxScore) or {}
    CF.roomData:setIsGameOver(msgData.show)
     
    if msgData.show and not CF.roomData:getIsHaveResult() then
        self:setBigWinLostData(nil)
        CF.roomData:setCanContinueBool(false)
        CF.gameRequire("Modules.BigWinLost.View").new(param):showSelf()
    elseif msgData.show then
        self:setBigWinLostData(param)
    end

end



return BigWinLostModule