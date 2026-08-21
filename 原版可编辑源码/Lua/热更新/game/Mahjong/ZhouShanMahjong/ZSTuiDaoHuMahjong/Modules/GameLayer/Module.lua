local GameModule = CF.gameClass("GameModule", "game.Mahjong.ZhouShanMahjong.BaseZhouShanMahjong.Modules.GameLayer.Module")
GameModule.EVENT_EXCHANGE_SEAT = "EVENT_EXCHANGE_SEAT"
function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgExchangeSeat), msgClass = CF.GameProtocol.msgExchangeSeat}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self, self.onMsgRealtimeAddScore), msgClass = CF.GameProtocol.msgRealtimeAddScore}

    return subXYDealList
end

function GameModule:onMsgExchangeSeat(msg)
    local seatOne = msg.sSeatOne
    local seatTwo = msg.sSeatTwo

    local selfSeat = CF.roomData:getSelfSeat()
    local exchangeData = {}
    if selfSeat ~= seatOne and selfSeat ~= seatTwo then
        -- 自己不参与换位
        exchangeData[1] = {seatOne, seatTwo}
        exchangeData[2] = {seatTwo, seatOne}
    else
        -- 自己参与换位
        local maxPlayer = CF.roomData:getMaxPlayer() or 4
        if maxPlayer == 2 then return end
        if (seatOne + 2) % 4 == seatTwo then
            -- 和对家换位，则另外两家换
            local otherSeat = {}
            local count = 1
            for seat = 1,4 do
                if (seat - 1) ~= seatOne and (seat - 1) ~= seatTwo then
                    otherSeat[count] = seat - 1
                    count = count + 1
                end
            end
            exchangeData[1] = {otherSeat[1], otherSeat[2]}
            exchangeData[2] = {otherSeat[2], otherSeat[1]}
        else
            local otherSeat = seatOne
            if selfSeat == seatOne then
                otherSeat = seatTwo
            end
            if (otherSeat + 1) % maxPlayer == selfSeat then
                -- 和上家换，其他玩家逆时针换
                local lastOneSeat = (selfSeat + 3) % 4
                local lastTwoSeat = (selfSeat + 2) % 4
                local lastThreeSeat = (selfSeat + 1) % 4
                exchangeData[1] = {lastOneSeat, lastThreeSeat}
                exchangeData[2] = {lastTwoSeat, lastOneSeat}
                exchangeData[3] = {lastThreeSeat, lastTwoSeat}
            elseif (selfSeat + 1) % maxPlayer == otherSeat then
                -- 和下家换，其他玩家顺时针换
                local lastOneSeat = (selfSeat + 3) % 4
                local lastTwoSeat = (selfSeat + 2) % 4
                local lastThreeSeat = (selfSeat + 1) % 4
                exchangeData[1] = {lastOneSeat, lastTwoSeat}
                exchangeData[2] = {lastTwoSeat, lastThreeSeat}
                exchangeData[3] = {lastThreeSeat, lastOneSeat}
            end
        end
    end
    if #exchangeData > 0 then
        --local selfToSeat
        --if selfSeat == seatOne then
        --    selfToSeat = seatTwo
        --elseif selfSeat == seatTwo then
        --    selfToSeat = seatOne
        --end
        local function callback()
            --if selfToSeat then
                -- self._playerDataList[selfSeat]._nSeat = selfToSeat
                -- for index, playerData in pairs(self._playerDataList) do
                --     if playerData:getSeat() == selfSeat then
                --         self._playerDataList[index]._nSeat = selfToSeat
                --         break
                --     end
                -- end

            --end
        end
        self:dispatchEvent( { name = self.EVENT_EXCHANGE_SEAT, msg = { exchangeData = exchangeData, callback = callback } } )
    end
end

function GameModule:onMsgRealtimeAddScore(msg)
    local realtimeScore = msg.score
    self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = realtimeScore } )
end

function GameModule:canHuInfo()
    return "台,"
end

return GameModule