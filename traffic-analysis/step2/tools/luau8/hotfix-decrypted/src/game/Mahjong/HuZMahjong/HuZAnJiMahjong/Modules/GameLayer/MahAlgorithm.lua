local MahAlgorithm = CF.gameClass("MahAlgorithm", "game.Mahjong.BasicMahjong.Modules.GameLayer.MahAlgorithm")

---------------------------------------------------------
--@brief 寻找有没有吃
--@param 手牌
--@param 拿进来的牌
--@param 财神牌
--@param 代替财神的牌，比如：3W是财神，白板代替财神，则白板=3W，白板+2W+4W可以组成吃
--@return 可以组成吃的comb组合
---------------------------------------------------------
function MahAlgorithm:findChow(handMahs, inMah, jokers, instead, openMah)
    openMah = openMah or {}
    local combs = {}
    local offIdx = 0;
    if inMah >= 17 and inMah <= 25 then
        offIdx = 17
    elseif inMah >= 33 and inMah <= 41 then
        offIdx = 33
    elseif inMah >= 49 and inMah <= 57 then
        offIdx = 49
    end

    if offIdx > 0 then
        local count = {}
        local minID = offIdx
        local maxID = offIdx + 8
        for _ , v in pairs(handMahs) do
            if v >= minID and v <= maxID then
                count[v] = self:findMahCount(handMahs, v)
            end
        end

        local jokerCnt = self:findMahCount(handMahs, jokers[1])
        count[jokers[1]] = nil
        count[inMah] = count[inMah] and (count[inMah] + 1) or 1

        local maxIdx = inMah
        local minIdx = inMah - 2
        if inMah + 2 > maxID then maxIdx = maxID - 2 end
        if minIdx < offIdx then minIdx = offIdx end
        for id = minIdx, maxIdx do
            local tmpJokerCnt = jokerCnt
            local mjong = {}
            if not count[id] then
                tmpJokerCnt = tmpJokerCnt - 1
                mjong[1] = jokers[1]
            else
                mjong[1] = id
            end
            if not count[id + 1] then
                tmpJokerCnt = tmpJokerCnt - 1
                mjong[2] = jokers[1]
            else
                mjong[2] = id + 1
            end
            if not count[id + 2] then
                tmpJokerCnt = tmpJokerCnt - 1
                mjong[3] = jokers[1]
            else
                mjong[3] = id + 2
            end
            if tmpJokerCnt >= 0 then
                local haveHua = false
                for i = 1, 3 do
                    for j = 1, #openMah do
                        if mjong[i] == openMah[j] then
                            haveHua = true
                            break
                        end
                    end
                end
                if not haveHua then
                    combs[#combs + 1] = mjong
                end
            end
        end
    end
    return combs
end

return MahAlgorithm�
