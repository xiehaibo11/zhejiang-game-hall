local MahAlgorithm = CF.gameClass("MahAlgorithm", "game.Mahjong.BasicMahjong.Modules.GameLayer.MahAlgorithm")

--补杠
function MahAlgorithm:findFillKong(handMahs, danFang, allCombs) 
    local combs = {}

    local pongCombs = {}
    for i = 1, #allCombs do
        if allCombs[i].nMahs[1] == allCombs[i].nMahs[2] then
            pongCombs[#pongCombs + 1] = allCombs[i].nMahs
        end
    end
    
    local allMahs = clone(handMahs)
    allMahs[#allMahs + 1] = clone(danFang)

    local fillKongMahs = {}
    for i = 1, #pongCombs do
        local count = self:findMahCount(allMahs, pongCombs[i][1])
        if count == 1 then
            table.insert(fillKongMahs, pongCombs[i][1])
        end
    end
    local mahData = CF.game:getModule("GameLayer"):getGameData()
    if not mahData then
        return
    end
    local localSeat = CF.roomData:getSelfLocalSeat()
    local seat = CF.roomData:localToSeat(localSeat)
    local limitMahValues = mahData:getLimitHandMahs(seat)
    for i = #fillKongMahs,1,-1 do
        for j = #limitMahValues,1,-1 do 
            if fillKongMahs[i] == limitMahValues[j] then
                table.remove(fillKongMahs, i)
            end
        end 
    end

    table.sort(fillKongMahs)
    
    for i = 1, #fillKongMahs do
        local comb = {}
        for _ = 1, 4 do
            comb[#comb + 1] = fillKongMahs[i]
        end
        combs[i] = comb
    end
    return combs
end

return MahAlgorithm�