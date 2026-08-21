local MahAlgorithm = NG.GAME.gameClass("MahAlgorithm")

---------------------------------------------------------
--@brief 寻找有没有吃
--@param 手牌
--@param 拿进来的牌
--@param 财神牌
--@param 代替财神的牌，比如：3W是财神，白板代替财神，则白板=3W，白板+2W+4W可以组成吃
--@return 可以组成吃的comb组合
---------------------------------------------------------
function MahAlgorithm:findChow(handMahs, inMah, jokers, instead)
    local combs = {}
    local mahs = {}
    --先确认拿进来的牌是代替财神的牌id，还是正常牌的id
    local changedInMah = self:changeInsteadValue(inMah, jokers, instead)
    --寻找前面后面两张牌是不是可以组成吃，对于财神牌要进行转换id防止吃财神
    mahs[1] = self:changeJokerValue(self:getNextMahOfSameType(changedInMah), jokers, instead)
    mahs[2] = self:changeJokerValue(self:getNextMahOfSameType(self:getNextMahOfSameType(changedInMah)), jokers, instead)
    local count = self:findMahsCount(handMahs, mahs)
    if count[1] > 0 and count[2] > 0 then
        local comb = {}
        comb[1] = inMah
        comb[2] = mahs[1]
        comb[3] = mahs[2]
        combs[#combs + 1] = comb
    end

    --寻找前面一张和后面一张是否能组成吃
    mahs[1] = self:changeJokerValue(self:getPreviousMahOfSameType(changedInMah), jokers, instead)
    mahs[2] = self:changeJokerValue(self:getNextMahOfSameType(changedInMah), jokers, instead)
    count = self:findMahsCount(handMahs, mahs)
    if count[1] > 0 and count[2] > 0 then
        local comb = {}
        comb[1] = mahs[1]
        comb[2] = inMah
        comb[3] = mahs[2]
        combs[#combs + 1] = comb
    end

    --寻找前面两张是否能组成吃
    mahs[1] = self:changeJokerValue(self:getPreviousMahOfSameType(self:getPreviousMahOfSameType(changedInMah)), jokers, instead)
    mahs[2] = self:changeJokerValue(self:getPreviousMahOfSameType(changedInMah), jokers, instead)
    count = self:findMahsCount(handMahs, mahs)
    if count[1] > 0 and count[2] > 0 then
        local comb = {}
        comb[1] = mahs[1]
        comb[2] = mahs[2]
        comb[3] = inMah
        combs[#combs + 1] = comb
    end

    return combs
end

---------------------------------------------------------
--@brief 寻找有没有碰
--@param 手牌
--@param 拿进来的牌
--@return 可以组成碰的comb组合
---------------------------------------------------------
function MahAlgorithm:findPong(handMahs, inMah)
    local combs = {}
    local count = self:findMahCount(handMahs, inMah)
    if count >= 2 then
        for _ = 1, 3 do
            table.insert(combs, inMah)
        end
    end
    return combs
end

---------------------------------------------------------
--@brief 寻找有没有杠
--@param 手牌
--@param 拿进来的牌
--@param 单放牌
--@param 牌面上已经能看到的自己的所有comb牌
--@return 可以组成杠的comb组合
---------------------------------------------------------
function MahAlgorithm:findKong(handMahs, inMah, danFang, allCombs)
    --先找明杠，有明杠则返回，没有找暗杠和补杠，暗杠和补杠可以有多个comb出现，比如手里有4个2W，3个1W此时摸了一个1W，则暗杠可以有2种选择
    local combs = self:findExposedKong(handMahs, inMah)
    if #combs > 0 then
        return combs
    end

    local combsConcealedKong = self:findConcealedKong(handMahs, danFang)
    for i = 1, #combsConcealedKong do
        combs[#combs + 1] = combsConcealedKong[i]
    end

    local combsFillKong = self:findFillKong(handMahs, danFang, allCombs)
    for i = 1, #combsFillKong do
        combs[#combs + 1] = combsFillKong[i]
    end

    return combs
end

--明杠
function MahAlgorithm:findExposedKong(handMahs, inMah, isOnlyFour)
    local combs = {}
    local count = self:findMahCount(handMahs, inMah)
    if count >= 3 then
        for j = 3, count do
            if isOnlyFour and j > 3 then
                break
            end
            local tempCombs = {}
            for k = 1, j + 1 do
                table.insert(tempCombs, inMah)
            end
            combs[#combs + 1] = tempCombs
        end
    end
    return combs
end

--暗杠
function MahAlgorithm:findConcealedKong(handMahs, danFang, isOnlyTakeFour)
    local allMahs = clone(handMahs)
    table.sort(allMahs)

    allMahs[#allMahs + 1] = clone(danFang)

    local allCombs = {}
    local mahs = {}
    local flag = {}
    for i = 1, #allMahs do
        if isOnlyTakeFour and allMahs[i] ~= danFang then

        else
            local count = self:findMahCount(allMahs, allMahs[i])
            if count >= 4 and flag[allMahs[i]] == nil then
                flag[allMahs[i]] = true
                if isOnlyTakeFour then
                    count = 4
                end
                for j = 4, count do
                    local comb = {}
                    for k = 1, 3 do
                        comb[k] = NG.GAME.GameDefine.MAH_VALUE.BACK
                    end
                    for k = 4, j do
                        comb[k] = allMahs[i]
                    end
                    allCombs[#allCombs + 1] = comb
                end
            end
        end
    end
    return allCombs
end

--补杠
function MahAlgorithm:findFillKong(handMahs, danFang, allCombs, onlyTake)
    local combs = {}
    local allMahs = clone(handMahs)
    allMahs[#allMahs + 1] = clone(danFang)

    if onlyTake then
        allMahs = { danFang }
    end
    -- local pongCombs = {}
    for i = 1, #allCombs do
        if allCombs[i].nMahs[1] == allCombs[i].nMahs[2] then
            -- pongCombs[#pongCombs + 1] = allCombs[i].nMahs

            local count = self:findMahCount(allMahs, allCombs[i].nMahs[1])
            if count >= 1 then
                if onlyTake then
                    count = 1
                end
                for j = 1, count do
                    local comb = clone(allCombs[i].nMahs)
                    if allCombs[i].nFlag == 4 then
                        for k = 1, 3 do
                            comb[k] = NG.GAME.GameDefine.MAH_VALUE.BACK
                        end
                    end
                    for p = 1, j do
                        comb[#comb + 1] = allCombs[i].nMahs[1]
                    end
                    combs[#combs + 1] = comb
                end
            end
        end
    end


    -- local fillKongMahs = {}
    -- for i = 1, #pongCombs do
    --     local count = self:findMahCount(allMahs, pongCombs[i][1])
    --     if count >= 1 then
    --         -- table.insert(fillKongMahs, pongCombs[i][1])
    --         for j=1, count do
    --             local comb = clone(pongCombs[i])
    --             for p=1, j do
    --                 comb[#comb+1] = pongCombs[i][1]
    --             end
    --             combs[#combs+1] = comb
    --         end
    --     end
    -- end
    -- table.sort(fillKongMahs)
    -- for i = 1, #fillKongMahs do
    --     local comb = {}
    --     for _ = 1, 4 do
    --         comb[#comb + 1] = fillKongMahs[i]
    --     end
    --     combs[i] = comb
    -- end
    return combs
end

function MahAlgorithm:isWan(mah)
    if mah >= NG.GAME.GameDefine.MAH_VALUE.WAN_1 and mah <= NG.GAME.GameDefine.MAH_VALUE.WAN_9 then
        return true
    else
        return false
    end
end

function MahAlgorithm:isTiao(mah)
    if mah >= NG.GAME.GameDefine.MAH_VALUE.TIAO_1 and mah <= NG.GAME.GameDefine.MAH_VALUE.TIAO_9 then
        return true
    else
        return false
    end
end

function MahAlgorithm:isTong(mah)
    if mah >= NG.GAME.GameDefine.MAH_VALUE.TONG_1 and mah <= NG.GAME.GameDefine.MAH_VALUE.TONG_9 then
        return true
    else
        return false
    end
end

function MahAlgorithm:getNextMahOfSameType(mah)
    if self:isWan(mah) == true or self:isTiao(mah) == true or self:isTong(mah) == true then
        if mah == NG.GAME.GameDefine.MAH_VALUE.WAN_9 or mah == NG.GAME.GameDefine.MAH_VALUE.TIAO_9 or mah == NG.GAME.GameDefine.MAH_VALUE.TONG_9 then
            return 0
        end
        return mah + 1
    end
end

function MahAlgorithm:getPreviousMahOfSameType(mah)
    if self:isWan(mah) == true or
    self:isTiao(mah) == true or
    self:isTong(mah) == true then
        if mah == NG.GAME.GameDefine.MAH_VALUE.WAN_1 or
        mah == NG.GAME.GameDefine.MAH_VALUE.TIAO_1 or
        mah == NG.GAME.GameDefine.MAH_VALUE.TONG_1 then
            return 0
        end
        return mah - 1
    end
end

function MahAlgorithm:findMahCount(sourceMahs, targetMah)
    local count = 0
    for _, value in pairs(sourceMahs) do
        if value == targetMah then
            count = count + 1
        end
    end
    return count
end

function MahAlgorithm:findMahsCount(sourceMahs, targetMahs)
    local count = {}
    for _, v in pairs(targetMahs) do
        count[#count + 1] = self:findMahCount(sourceMahs, v)
    end
    return count
end

---------------------------------------------------------
--@brief 判断拿进来的牌是否为财神牌，是财神牌就转换成代替财神牌的id，若不是，则返回自身id
--@param 拿进来的牌id
--@param 财神牌
--@param 代替财神的牌
--@return 最终的牌id
--此函数防止，A玩家打了财神3W，B有2W4W可以吃的情况。改了财神的id就吃不了了
---------------------------------------------------------
function MahAlgorithm:changeJokerValue(mah, joker, instead)
    if #joker == 0 or #instead == 0 then
        return mah
    end
    if mah == joker[1] then
        return instead[1]
    else
        return mah
    end
end

---------------------------------------------------------
--@brief 判断拿进来的牌是否为代替牌，是代替牌返回财神牌的id，因为代替牌代替财神，若不是，则返回自身id
--@param 拿进来的牌id
--@param 财神牌
--@param 代替财神的牌
--@return 最终的牌id
--instead[1] 和 joker[1]是因为之前就是这么设计的，大概是为了扩展性把，我猜的
---------------------------------------------------------
function MahAlgorithm:changeInsteadValue(mah, joker, instead)
    if #joker == 0 or #instead == 0 then
        return mah
    end
    if mah == instead[1] then
        return joker[1]
    else
        return mah
    end
end
return MahAlgorithm