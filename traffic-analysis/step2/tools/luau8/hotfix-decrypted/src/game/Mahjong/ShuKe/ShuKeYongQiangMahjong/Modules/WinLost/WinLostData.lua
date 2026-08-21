local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.BasicMahjong.Modules.WinLost.WinLostData")

function WinLostData:initDatas()
    WinLostData.super.initDatas(self)
    self._resultHua = {}
end

function WinLostData:onMsgFanCnt(msgData)
    
end

function WinLostData:onMsgTaiName(msgData)
    --台数显示
    local tmpFan = msgData.fanName
    
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local fanNames = ""
        --咸菜
        if msgData.fanCount[seat] == 0 then
            for j = 0, #tmpFan[seat]-1 do
                if tmpFan[seat][j] == 3022  then
                    fanNames = fanNames..CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[seat][j]]
                end
            end
        end
        if msgData.fanCount[seat] > 0 then
            for j = 0, #tmpFan[seat]-1 do
                if tmpFan[seat][j] ~= 0 then
                    if msgData.everyFanCount[seat][j] ~=0  then
                        if j == 0 then
                            fanNames = fanNames .. CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[seat][j]] .. msgData.everyFanCount[seat][j] .. "台"
                        else
                            fanNames = fanNames ..",".. CF.GameDefine.WINLOST_FAN_TYPE[tmpFan[seat][j]] .. msgData.everyFanCount[seat][j].."台"
                        end
           
                    end
                end
            end
            --增加包牌的台数
            if CF.game:getModule("GameLayer"):getGameData():getIsBaoPai()  then
                if fanNames == "" then
                    fanNames = fanNames  .. "包牌胡1台"
                else
                    fanNames = fanNames  .. ",包牌胡1台"
                end
            end
            if  #tmpFan[seat] > 0 and msgData.fanCount[seat] > 0 then
                fanNames = "("..fanNames..")"
            end
            fanNames = msgData.fanCount[seat].."台"..fanNames  
           
        end

        self:setFanNumBySeat(seat, msgData.fanCount[seat])
        self:setFanNameBySeat(seat, fanNames)
    end
end

function WinLostData:onMsgFlowerName(msgData)
    --花数显示
    for seat = 0, CF.roomData:getMaxPlayer() - 1 do
        local huaNames = ""
        if msgData.iFlowerCount[seat] > 0 then
            huaNames = msgData.iFlowerCount[seat].."花"
        end
        local fanHuaName
        local taiName = self:getFanNameBySeat(seat)
        --判断是否有台数
        if taiName == "" then
            fanHuaName = huaNames
        else
            if huaNames ~= "" then  
                fanHuaName = taiName..","..huaNames    
            else
                fanHuaName = taiName
            end
            
        end
        self._resultHua[seat] = self._resultHua[seat] or {}
        self._resultHua[seat] = fanHuaName
        self:setFanNameBySeat(seat, fanHuaName)

    end
end

function WinLostData:onMsgBPFlowerName(msgData)
    if msgData and msgData.nSeat then
        local nHuSeat = msgData.nSeat
        local taiName = self:getFanNameBySeat(nHuSeat)
        if  taiName then
            --去掉包牌花
            local fanHuaName = self._resultHua[nHuSeat].. "。包牌:"..msgData.nFlowerCounts.."花"
            self:setFanNameBySeat(nHuSeat,fanHuaName)
        end
    end
end

function WinLostData:setFanNumBySeat(seat, fanNums)
    self._fanNums[seat] = fanNums
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setFanNameBySeat(seat, fanName)
    self._fanNames[seat] = fanName or ""
    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end

function WinLostData:setEndType(endType)
    self._sEndType = endType
    self:dispatchEvent( { name = self.EVENT_END_TYPE_CHANGED })
end

return WinLostData