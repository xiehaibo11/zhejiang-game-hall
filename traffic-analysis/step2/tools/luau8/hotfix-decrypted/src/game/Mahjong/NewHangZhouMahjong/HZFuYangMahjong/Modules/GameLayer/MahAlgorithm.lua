local MahAlgorithm = CF.gameClass("MahAlgorithm", "game.Mahjong.NewHangZhouMahjong.HZLinAnMahjong.Modules.GameLayer.MahAlgorithm")

function MahAlgorithm:findChowNoCaiTi(handMahs, inMah, jokers, instead)
    local combs = self:findChow(handMahs, inMah, jokers, instead) or {}

    local i = 1
    while i <= #combs do
        if self:isMahInComb(combs[i], jokers[1]) then
            table.remove(combs, i)
        else
            i = i + 1
        end
    end
    return combs
end

-- 财替情况能不能吃
function MahAlgorithm:canChowNoCaiTi(handMahs, inMah, jokers, instead)
    local combs = self:findChowNoCaiTi(handMahs, inMah, jokers, instead)
    return #combs > 0
end

function MahAlgorithm:findPongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    local combs = self:findPong(handMahs, inMah, jokers) or {}
    return self:removeNoCaiTiCombs(combs, jokers, zuofeng)
end

-- 财替情况能不能碰
function MahAlgorithm:canPongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    local combs = self:findPongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    return #combs > 0
end

function MahAlgorithm:findExposedKongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    local combs = self:findExposedKong(handMahs, inMah, jokers) or {}
    return self:removeNoCaiTiCombs(combs, jokers, zuofeng)
end

-- 财替情况能不能明杠
function MahAlgorithm:canExposedKongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    local combs = self:findExposedKongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    return #combs > 0
end

function MahAlgorithm:findConcealedKongNoCaiTi(handMahs, danFang, jokers, zuofeng)
    local combs = self:findConcealedKong(handMahs, danFang, jokers) or {}
    return self:removeNoCaiTiCombs(combs, jokers, zuofeng)
end

-- 财替情况能不能暗杠
function MahAlgorithm:canConcealedKongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    local combs = self:findConcealedKongNoCaiTi(handMahs, inMah, jokers, zuofeng)
    return #combs > 0
end

function MahAlgorithm:findFillKongNoCaiTi(handMahs, danFang, allCombs, jokers, zuofeng)
    local combs = self:findFillKong(handMahs, danFang, allCombs, jokers) or {}
    return self:removeNoCaiTiCombs(combs, jokers, zuofeng)
end

-- 财替情况能不能补杠
function MahAlgorithm:canFillKongNoCaiTi(handMahs, danFang, allCombs, jokers, zuofeng)
    local combs = self:findFillKongNoCaiTi(handMahs, danFang, allCombs, jokers, zuofeng)
    return #combs > 0
end

function MahAlgorithm:removeNoCaiTiCombs(combs, jokers, zuofeng)
    local i = 1
    while i <= #combs do
        local combslimit = self:isMahsPowerLimit(combs[i], zuofeng, jokers[1])
        if self:isMahInComb(combs[i], jokers[1])
        and not combslimit then
            table.remove(combs, i)
        else
            i = i + 1
        end
    end
    return combs
end

-- 判断牌是否有限制
function MahAlgorithm:isMahPowerLimit(targetMah, zuofeng)
    local res = targetMah == zuofeng
    for i = CF.GameDefine.MAH_VALUE.JIAN_ZHONG, CF.GameDefine.MAH_VALUE.JIAN_BAI do
        if targetMah == i then
            res = true
        end
    end
    return res
end

-- 判断牌组里面是否有限制
function MahAlgorithm:isMahsPowerLimit(sourceMahs, zuofeng, joker)
    if not sourceMahs then return end
    for i = 1, #sourceMahs do
        if sourceMahs[i] == zuofeng and sourceMahs[i] ~= joker then
            return true
        end
        for j = CF.GameDefine.MAH_VALUE.JIAN_ZHONG, CF.GameDefine.MAH_VALUE.JIAN_BAI do
            if sourceMahs[i] == j and joker ~= j then
                return true
            end
        end
    end
    return false
end

-- 判断当前comb有没有某张牌
function MahAlgorithm:isMahInComb(sourceMahs, targetMah)
    if not sourceMahs then
        return
    end
    for _, value in pairs(sourceMahs) do
        if value == targetMah then
            return true
        end
    end
    return false
end

return MahAlgorithm�