local MahAlgorithm = CF.gameClass("MahAlgorithm", "game.Mahjong.BasicMahjong.Modules.GameLayer.MahAlgorithm")

function MahAlgorithm:findConcealedKong(handMahs, danFang) 
    local allMahs = clone(handMahs)
    allMahs[#allMahs + 1] = clone(danFang)
   
    local mahs = {}
    for i = 1 , #allMahs do
        local count = MahAlgorithm:findMahCount(allMahs, allMahs[i])
        if count == 4 then
            mahs[allMahs[i]] = count
        end
    end
    
    local mahsHua = {}
    for i = CF.GameDefine.MAH_VALUE.HUA_MEI, CF.GameDefine.MAH_VALUE.HUA_JU do --梅兰竹菊
        for _ = 1 , #allMahs do
            if i == allMahs[i] then
                table.insert(mahsHua, i)
                break
            end
        end
    end
    if #mahsHua == 4 then
        mahs[CF.GameDefine.MAH_VALUE.HUA_MEI] = 4
    end
    
    mahsHua = {}
    for i = CF.GameDefine.MAH_VALUE.HUA_CHUN, CF.GameDefine.MAH_VALUE.HUA_DONG do --春夏秋冬
        for _ = 1 , #allMahs do
            if i == allMahs[i] then
                table.insert(mahsHua, i)
                break
            end
        end
    end
    if #mahsHua == 4 then
        mahs[CF.GameDefine.MAH_VALUE.HUA_CHUN] = 4
    end

    local concealedKongMahID = {}
    for key, _ in pairs(mahs) do
        concealedKongMahID[#concealedKongMahID + 1] = tonumber(key)
    end
    table.sort(concealedKongMahID)

    local allCombs = {}
    for i = 1,#concealedKongMahID do
        local comb = {CF.GameDefine.MAH_VALUE.BACK, CF.GameDefine.MAH_VALUE.BACK, CF.GameDefine.MAH_VALUE.BACK}
        comb[#comb + 1] = concealedKongMahID[i]
        allCombs[i] = comb
    end
    return allCombs
end


return MahAlgorithm