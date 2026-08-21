local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.WinLost.Module")

function WinLostModule:isSanTanChengBao()
    local gameRuleStr = CF.roomData:getGameRule()
    local textSet = string.split(gameRuleStr,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "三摊承包") then
            return true
        end
    end
    return false
end

function WinLostModule:isXinShiWanFa()
    local gameRuleStr = CF.roomData:getGameRule()
    local textSet = string.split(gameRuleStr,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "新市玩法") then
            return true
        end
    end
    return false
end

function WinLostModule:onMsgEndType(msgData)
    WinLostModule.super.onMsgEndType(self,msgData)
    self:showSmallResultChengBao(msgData)
end

function WinLostModule:showSmallResultChengBao(msgData)
    for i=0,CF.roomData:getMaxPlayer()-1 do
        self:getWinLostData():setIsContract(i,false)
        self:getWinLostData():setIsDeContract(i,false)
    end
    if not self:isSanTanChengBao() then
        return
    end
    
    local chengBaoSeat = {}
    local fchengBaoSeat = {}
    local isQiangGangHu = msgData.sEndType == CF.GameDefine.HU_TYPE.ET_ROBKONG
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local huSeatTable = gameData:getHuSeat()
    if huSeatTable ~= nil then
        for _, var in pairs(huSeatTable) do
            local localHuSeat = var
            for i = 1, CF.roomData:getMaxPlayer() do
                fchengBaoSeat[i] = 0
                local seat = CF.roomData:localToSeat(i)
                local allcombs = gameData:getAllCombMahData(seat) or {}
                for index = 1, #allcombs do
                    if allcombs[index].nFromSeat == localHuSeat and i ~= localHuSeat then
                        fchengBaoSeat[i] = fchengBaoSeat[i] + 1
                    end
                    local tSeat = CF.roomData:seatToLocal(var)
                    if i == tSeat then
                        if not chengBaoSeat[allcombs[index].nFromSeat] then
                            chengBaoSeat[allcombs[index].nFromSeat] = 0
                        end
                        if allcombs[index].nFromSeat ~= localHuSeat then
                            chengBaoSeat[allcombs[index].nFromSeat] = chengBaoSeat[allcombs[index].nFromSeat] + 1
                        end
                    end
                end
            end
            for k,v in pairs(chengBaoSeat) do
                local seat = k 
                if v > 2 or (msgData.sSeat == seat and self:isXinShiWanFa() and isQiangGangHu == true and v == 2) then
                    self:getWinLostData():setIsContract(seat,true)
                end
            end
            for k,v in pairs(fchengBaoSeat) do
                if v > 2 then
                    local seat = CF.roomData:localToSeat(k)
                    self:getWinLostData():setIsDeContract(seat, true)
                end
            end
        end
    end
end

return WinLostModuleL