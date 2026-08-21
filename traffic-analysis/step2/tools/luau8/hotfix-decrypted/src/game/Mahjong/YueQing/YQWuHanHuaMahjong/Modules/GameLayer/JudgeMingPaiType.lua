local JudgeMingPaiType = {}
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function JudgeMingPaiType.judgeMingPai(combs,flowerMahs,windSeat,joker,mingpai)
    if JudgeMingPaiType.judgeMingPaiMeiRen(combs,flowerMahs,mingpai) ~= 0 then
        return JudgeMingPaiType.judgeMingPaiMeiRen(combs,flowerMahs,mingpai)
    end
    if JudgeMingPaiType.judgeMingPaiSiFengQi(combs,windSeat) ~= 0 then
        return JudgeMingPaiType.judgeMingPaiSiFengQi(combs,windSeat)
    end
    if JudgeMingPaiType.judgeMingPaiSiBaiBan(flowerMahs,mingpai) ~= 0 then
        return JudgeMingPaiType.judgeMingPaiSiBaiBan(flowerMahs,mingpai)
    end
    if JudgeMingPaiType.judgeMingPaiSanGangTou(flowerMahs,mingpai) ~= 0 then
        return JudgeMingPaiType.judgeMingPaiSanGangTou(flowerMahs,mingpai)
    end
    if JudgeMingPaiType.judgeMingPaiDanDiao(combs) ~= 0 then
        return JudgeMingPaiType.judgeMingPaiDanDiao(combs)
    end
    if JudgeMingPaiType.judgeMingPaiWuTai(combs,flowerMahs,windSeat,mingpai) ~= 0 then
        return JudgeMingPaiType.judgeMingPaiWuTai(combs,flowerMahs,windSeat,mingpai)
    end
    return WinLostFanConfig.MP_TYPE.MP_NONE
end

function JudgeMingPaiType.judgeMingPaiSanGangTou(flowerMahs,mingpai)
    local sumFlower = 0
    for i = 1,#flowerMahs do
        if mingpai == flowerMahs[i] then
            sumFlower = sumFlower + 1
        end
    end
    if sumFlower >= 3 then
        return WinLostFanConfig.MP_TYPE.MP_SANGANGTOU
    else
        return WinLostFanConfig.MP_TYPE.MP_NONE
    end
end

function JudgeMingPaiType.judgeMingPaiSiBaiBan(flowerMahs,mingpai)
    local sumBaiBan = 0
    local sumHongZhong = 0
    local sumFaCai = 0
    for i = 1,#flowerMahs do
        if mingpai == CF.GameDefine.MAH_VALUE.JIAN_BAI or mingpai == CF.GameDefine.MAH_VALUE.JIAN_FA then
            if flowerMahs[i] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                sumHongZhong = sumHongZhong + 1
            end
        elseif JudgeMingPaiType.judgeIsChongCao(mingpai) then
            if flowerMahs[i] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                sumHongZhong = sumHongZhong + 1
            elseif flowerMahs[i] == CF.GameDefine.MAH_VALUE.JIAN_FA then
                sumFaCai = sumFaCai + 1
            end
        else
            if flowerMahs[i] == CF.GameDefine.MAH_VALUE.JIAN_BAI then
                sumBaiBan = sumBaiBan + 1
            end
        end
    end
    if JudgeMingPaiType.judgeIsChongCao(mingpai) then
        if sumFaCai >= 4 then
            return WinLostFanConfig.MP_TYPE.MP_SIFACAI
        end
    end
    if sumBaiBan >= 4 then
        return WinLostFanConfig.MP_TYPE.MP_SIBAIBAN
    end
    if sumHongZhong >= 4 then
        return WinLostFanConfig.MP_TYPE.MP_SIHONGZHONG
    end
    return WinLostFanConfig.MP_TYPE.MP_NONE
end

function JudgeMingPaiType.judgeMingPaiWuTai(combs,flowerMahs,windSeat,mingpai)
    if JudgeMingPaiType.judgeMingPaiSanGangTou(flowerMahs,mingpai) ~= 0 then
        return WinLostFanConfig.MP_TYPE.MP_NONE
    elseif JudgeMingPaiType.judgeMingPaiSiBaiBan(flowerMahs,mingpai) ~= 0 then
        return WinLostFanConfig.MP_TYPE.MP_NONE
    end
    local sumTai = 0
    for i = 1,#flowerMahs do
        if JudgeMingPaiType.judgeIsChongCao(flowerMahs[i]) == false then
            sumTai = sumTai + 1
        end
    end
    for i = 1,#combs do
        local tmpCombs = combs[i].nMahs
        if JudgeMingPaiType.judgeGang(tmpCombs) then
            if tmpCombs[1] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG or tmpCombs[4] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                sumTai = sumTai + 1
            elseif tmpCombs[1] == CF.GameDefine.MAH_VALUE.JIAN_FA or tmpCombs[4] == CF.GameDefine.MAH_VALUE.JIAN_FA then
                sumTai = sumTai + 1
            elseif tmpCombs[1] == windSeat or tmpCombs[4] == windSeat then
                sumTai = sumTai + 1
            end
        elseif JudgeMingPaiType.judgePeng(tmpCombs) then
            if tmpCombs[1] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG or tmpCombs[1] == CF.GameDefine.MAH_VALUE.JIAN_FA or tmpCombs[1] == windSeat then
                sumTai = sumTai + 1
            end
        end
    end
    if sumTai >= 5 then
        return WinLostFanConfig.MP_TYPE.MP_MINGPAI5TAI
    else
        return WinLostFanConfig.MP_TYPE.MP_NONE
    end
end

function JudgeMingPaiType.judgeMingPaiMeiRen(combs,flowerMahs,mingpai)
	local sumBaiBan = 0
	local sumHongZhong = 0
	local sumFaCai = 0
    for i = 1,#flowerMahs do
        if flowerMahs[i] == CF.GameDefine.MAH_VALUE.JIAN_BAI and mingpai ~= CF.GameDefine.MAH_VALUE.JIAN_BAI then
            sumBaiBan = sumBaiBan + 1
        end
    end
    for i = 1, #combs do
        local tmpComb = combs[i].nMahs
        if JudgeMingPaiType.judgePeng(tmpComb) then
            if tmpComb[1] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                sumHongZhong = sumHongZhong + 1
            elseif tmpComb[1] == CF.GameDefine.MAH_VALUE.JIAN_FA then
                sumFaCai = sumFaCai + 1
            end
        elseif JudgeMingPaiType.judgeGang(tmpComb) then
            if tmpComb[1] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG or tmpComb[4] == CF.GameDefine.MAH_VALUE.JIAN_ZHONG then
                sumHongZhong = sumHongZhong + 1
            elseif tmpComb[1] == CF.GameDefine.MAH_VALUE.JIAN_FA or tmpComb[4] == CF.GameDefine.MAH_VALUE.JIAN_FA then
                sumFaCai = sumFaCai + 1
            end
        end
	end
	if sumFaCai > 0 and sumHongZhong > 0 then
	   if sumBaiBan == 3 then
	       return WinLostFanConfig.MP_TYPE.MP_SANMEIREN
	   elseif sumBaiBan >= 4 then
	       return WinLostFanConfig.MP_TYPE.MP_SIMEIREN
	   else
           return WinLostFanConfig.MP_TYPE.MP_NONE
	   end
	else
        return WinLostFanConfig.MP_TYPE.MP_NONE
	end
end

function JudgeMingPaiType.judgeMingPaiSiFengQi(combs,windSeat)
    local sum = 0
    for i = 1,#combs do
        local tmpComb = combs[i].nMahs
        if JudgeMingPaiType.judgePeng(tmpComb) then
            if tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_DONG or tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_NAN or tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_XI or tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_BEI then
                sum = sum + 1
            end
        elseif JudgeMingPaiType.judgeGang(tmpComb) then
            if tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_DONG or tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_NAN or tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_XI or tmpComb[1] == CF.GameDefine.MAH_VALUE.FENG_BEI then
                sum = sum + 1
            elseif tmpComb[4] == CF.GameDefine.MAH_VALUE.FENG_DONG or tmpComb[4] == CF.GameDefine.MAH_VALUE.FENG_NAN or tmpComb[4] == CF.GameDefine.MAH_VALUE.FENG_XI or tmpComb[4] == CF.GameDefine.MAH_VALUE.FENG_BEI then
                sum = sum + 1
            end
        end
    end
    if sum >= 4 then
        return WinLostFanConfig.MP_TYPE.MP_SIFENGQI
    else
        return WinLostFanConfig.MP_TYPE.MP_NONE
    end
end

function JudgeMingPaiType.judgeMingPaiDanDiao(combs)
    if #combs == 5 then
        return WinLostFanConfig.MP_TYPE.MP_DANDIAO
    else
        return WinLostFanConfig.MP_TYPE.MP_NONE
    end
end

function JudgeMingPaiType.judgeGang(comb)
    if #comb == 4 then
        return true
    else
        return false
    end
end

function JudgeMingPaiType.judgePeng(comb)
    if #comb == 3 and comb[1] == comb[2] then
        return true
    else
        return false
    end
end

function JudgeMingPaiType.judgeIsChongCao(flowertype)
    for i = CF.GameDefine.MAH_VALUE.HUA_MEI,CF.GameDefine.MAH_VALUE.HUA_DONG do
        if flowertype == i then
            return true
        end
    end
    return false
end

return JudgeMingPaiType
�