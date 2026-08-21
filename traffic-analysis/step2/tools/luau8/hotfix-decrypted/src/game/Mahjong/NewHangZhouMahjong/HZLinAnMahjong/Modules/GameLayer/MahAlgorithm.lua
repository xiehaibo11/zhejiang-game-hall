local MahAlgorithm = CF.gameClass("MahAlgorithm", "game.Mahjong.BasicMahjong.Modules.GameLayer.MahAlgorithm")

function MahAlgorithm:findChow(handMahs, inMah, jokers, instead)
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
                combs[#combs + 1] = mjong
            end
        end
    end
    return combs
end

function MahAlgorithm:findPong(handMahs ,inMah, jokers)
    local combs = {}
    jokers = jokers or {}
    local count = self:findMahCount(handMahs, inMah)
    if count >= 2 then
        local mjong = {}
        for _ = 1,3 do
            mjong[#mjong + 1] = inMah
        end
        combs[#combs + 1] = mjong
    elseif #jokers > 0 then
        local jokerCnt = self:findMahCount(handMahs, jokers[1])
        if inMah == jokers[1] then jokerCnt = 0 end
        if count + jokerCnt >= 2 then
            local mjong = {inMah}
            for _ = 1,count do
                mjong[#mjong + 1] = inMah
            end
            for _ = count + 1, 2 do
                mjong[#mjong + 1] = jokers[1]
            end
            combs[#combs + 1] = mjong
        end
    end
    return combs
end

--明杠
function MahAlgorithm:findExposedKong(handMahs, inMah, jokers)
    local combs = {}
    jokers = jokers or {}
    local count = self:findMahCount(handMahs ,inMah)
    if count == 3 then
        local mjong = {}
        for _ = 1,4 do
            mjong[#mjong + 1] = inMah
        end
        combs[1] = mjong
    elseif #jokers > 0 then
        local jokerCnt = self:findMahCount(handMahs, jokers[1])
        if inMah == jokers[1] then jokerCnt = 0 end
        if count + jokerCnt >= 3 and inMah ~= 0 then
            local mjong = {inMah}
            for _ = 1,count do
                mjong[#mjong + 1] = inMah
            end
            for _ = count + 1, 3 do
                mjong[#mjong + 1] = jokers[1]
            end
            combs[#combs + 1] = mjong
        end
    end
    return combs
end

--暗杠
function MahAlgorithm:findConcealedKong(handMahs, danFang, jokers)
    local allmahs = clone(handMahs)
    allmahs[#allmahs + 1] = clone(danFang)
    local jokerCnt = self:findMahCount(allmahs, jokers[1])

    local mahcount = {}
    for i = 1 , #allmahs do
        local count = self:findMahCount(allmahs ,allmahs[i])
        if count == 4 then
            mahcount[allmahs[i]] = count
        elseif jokers[1] ~= allmahs[i] and jokerCnt + count >= 4 then
            mahcount[allmahs[i]] = count
        end
    end

    local mahs = {}
    for key, var in pairs(mahcount) do
        mahs[#mahs + 1] = {
            id = tonumber(key),
            count = var
        }
    end
    table.sort(mahs,function(a,b)
        return a.id > b.id
    end)
    local combs = {}
    for i = 1,#mahs do
        local mjong = {}
        for j = 1, mahs[i].count do
            mjong[j] = mahs[i].id
        end
        for j = mahs[i].count + 1, 4 do
            mjong[j] = jokers[1]
        end
        combs[i] = mjong
    end
    return combs
end

--补杠
function MahAlgorithm:findFillKong(handMahs, danFang, allCombs, jokers)
    local combs = {}
    local pongcombs = {}
    for i = 1 , #allCombs do
        if allCombs[i].nFlag ==  2 or allCombs[i].nFlag == 5 or allCombs[i].nFlag == 3 or allCombs[i].nFlag == 4 then
            pongcombs[#pongcombs + 1] = allCombs[i]
        end
    end

    local allmahs = clone(handMahs)
    allmahs[#allmahs + 1] = clone(danFang)

    local mahs = {}
    local haveFlag = {}
    for i = 1 , #pongcombs do
        local count = self:findMahCount(allmahs ,pongcombs[i].nMahs[1])
        if count == 1 then
            mahs[#mahs + 1] = {
                id = pongcombs[i].nMahs[1],
                comb = pongcombs[i].nMahs,
                isJoker = false 
            }
            haveFlag[pongcombs[i].nMahs[1]] = true
        end
    end

    local jokerCnt = self:findMahCount(allmahs, jokers[1])
    if jokerCnt > 0 then
        for i = 1 , #pongcombs do
            if not haveFlag[pongcombs[i].nMahs[1]] then
                mahs[#mahs + 1] = {
                    id = pongcombs[i].nMahs[1],
                    comb = pongcombs[i].nMahs,
                    isJoker = true 
                }
                haveFlag[pongcombs[i].nMahs[1]] = true
            end
        end
    end

    table.sort(mahs,function(a,b)
        return a.id > b.id
    end)
    
    for i = 1,#mahs do
        local mjong = {}
        for j = 1, #mahs[i].comb do
            mjong[#mjong + 1] = mahs[i].comb[j]
        end
        mjong[#mahs[i].comb+1] = mahs[i].isJoker and jokers[1] or  mahs[i].id
        combs[i] = mjong
    end
    return combs
end

--补杠
function MahAlgorithm:findFillKongs(handMahs, danFang, allCombs, jokers) 
    local combs = {}
    local pongcombs = {}
    for i = 1 , #allCombs do
        if allCombs[i].nFlag ==  2 then
            pongcombs[#pongcombs + 1] = allCombs[i]
        end
    end

    local allmahs = clone(handMahs)
    allmahs[#allmahs + 1] = clone(danFang)

    local mahs = {}
    local haveFlag = {}
    for i = 1 , #pongcombs do
        local count = self:findMahCount(allmahs ,pongcombs[i][1])
        if count == 1 then
            mahs[#mahs + 1] = {
                id = pongcombs[i][1],
                comb = pongcombs[i],
                isJoker = false 
            }
            haveFlag[pongcombs[i][1]] = true
        end
    end

    local jokerCnt = self:findMahCount(allmahs, jokers[1])
    if jokerCnt > 0 then
        for i = 1 , #pongcombs do
            if not haveFlag[pongcombs[i][1]] then
                mahs[#mahs + 1] = {
                    id = pongcombs[i][1],
                    comb = pongcombs[i],
                    isJoker = true 
                }
                haveFlag[pongcombs[i][1]] = true
            end
        end
    end

    table.sort(mahs,function(a,b)
        return a.id > b.id
    end)
    
    for i = 1,#mahs do
        local mjong = {}
        for j = 1, 3 do
            mjong[#mjong + 1] = mahs[i].comb[j]
        end
        mjong[4] = mahs[i].isJoker and jokers[1] or  mahs[i].id
        mjong[5] = 5
        combs[i] = mjong
    end
    return combs
end

return MahAlgorithm�