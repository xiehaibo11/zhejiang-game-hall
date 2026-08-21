local MahLogic = CF.gameClass("MahLogic", "game.Mahjong.BasicMahjong.Modules.GameLayer.MahLogic")

function MahLogic.isNormalMahValue(mahValue)
    if mahValue == nil then
        return false
    end
    if (mahValue >= CF.GameDefine.MAH_DIVIDED * CF.GameDefine.MAH_FLOWER.MS_WH_BAI and (mahValue <= CF.GameDefine.MAH_DIVIDED * CF.GameDefine.MAH_FLOWER.MS_WH_BAI + CF.GameDefine.MAH_DIVIDED -1))
    or (mahValue >= CF.GameDefine.MAH_DIVIDED * CF.GameDefine.MAH_FLOWER.MS_WH_DOUBLE and (mahValue <= CF.GameDefine.MAH_DIVIDED * CF.GameDefine.MAH_FLOWER.MS_WH_DOUBLE + CF.GameDefine.MAH_DIVIDED -1))
    or (mahValue >= CF.GameDefine.MAH_DIVIDED * CF.GameDefine.MAH_FLOWER.MS_WH_SINGLE and (mahValue <= CF.GameDefine.MAH_DIVIDED * CF.GameDefine.MAH_FLOWER.MS_WH_SINGLE + CF.GameDefine.MAH_DIVIDED -1)) then
        return true
    end
    if MahLogic.isFlower(mahValue) then
        return true
    end
    return false
end

function MahLogic.sortMahValues(mahValues, exceptMahs, sortFunc)
    if not sortFunc then
        sortFunc = function(a, b) return a > b end
    end
    local doubleMahs = {}
    local singleMahs = {}
    local tmpResMahs = {}
    local ones = {}
    local flowers = {}
    local noFlowerMahs = {}
    table.sort(mahValues, sortFunc)
    for i = 1, #mahValues do
        if MahLogic.isFlower(mahValues[i]) then
            flowers[#flowers + 1] = mahValues[i]
        else
            noFlowerMahs[#noFlowerMahs + 1] = mahValues[i]
            tmpResMahs[#tmpResMahs + 1] = mahValues[i] % CF.GameDefine.MAH_DIVIDED
        end
    end
    for i = 1, #tmpResMahs do
        if MahLogic.isSubMah(ones, tmpResMahs[i]) == false then
            ones[#ones + 1] = tmpResMahs[i]
        end
    end
    table.sort(ones, sortFunc)
    for i = 1, #ones do
        local mah = ones[i]
        if MahLogic.isSubMah(exceptMahs, mah) then      -- 不参与排序的麻将子单独取出放入singlemah里
            for j = 1, #noFlowerMahs do
                if mah == noFlowerMahs[j] % CF.GameDefine.MAH_DIVIDED then
                    singleMahs[#singleMahs + 1] = noFlowerMahs[j]
                end
            end
        else
            local count = MahLogic.countMah(tmpResMahs, mah)
            -- 检测张数并按顺序写入
            if count <= 2 then
                for j = 1, #noFlowerMahs do
                    if noFlowerMahs[j] % CF.GameDefine.MAH_DIVIDED == mah then
                        if count == 1 then
                            singleMahs[#singleMahs + 1] = noFlowerMahs[j]
                        elseif count == 2 then
                            doubleMahs[#doubleMahs + 1] = noFlowerMahs[j]
                        end
                    end
                end
            elseif count > 2 then
                local countBai = MahLogic.countMah(noFlowerMahs, mah + CF.GameDefine.MAH_FLOWER.MS_WH_BAI * CF.GameDefine.MAH_DIVIDED)
                for j=1, #noFlowerMahs do
                    local realMah = noFlowerMahs[j]
                    local color = math.modf(realMah / CF.GameDefine.MAH_DIVIDED)
                    if realMah % CF.GameDefine.MAH_DIVIDED == mah then
                        if count - countBai >= 2 then -- 框框框白，框框框白白，框框框白白白，框框白，框框白白，框框白白白
                            if color == CF.GameDefine.MAH_FLOWER.MS_WH_BAI then
                                singleMahs[#singleMahs + 1] = realMah
                            else
                                doubleMahs[#doubleMahs + 1] = realMah
                            end
                        elseif count - countBai == 1 then
                            -- 框白白，框白白白
                            if color > CF.GameDefine.MAH_FLOWER.MS_WH_BAI then
                                doubleMahs[#doubleMahs + 1] = realMah
                            elseif color == CF.GameDefine.MAH_FLOWER.MS_WH_BAI and MahLogic.countMah(doubleMahs, realMah) == 0 then
                                doubleMahs[#doubleMahs + 1] = realMah
                            else
                                singleMahs[#singleMahs + 1] = realMah
                            end
                        elseif count == countBai then
                            if MahLogic.countMah(doubleMahs, realMah) < 2 then
                                doubleMahs[#doubleMahs + 1] = realMah
                            else
                                singleMahs[#singleMahs + 1] = realMah
                            end
                        end
                    end
                end
            end
        end
    end
    table.sort(singleMahs, sortFunc)
    local retMahs = flowers
    for i = 1, #doubleMahs do
        retMahs[#retMahs + 1] = doubleMahs[i]
    end
    for i = 1, #singleMahs do
        retMahs[#retMahs + 1] = singleMahs[i]
    end
    return retMahs
end

function MahLogic.isSubMah( mahs, mah )
    for i=1, #mahs do
        if mahs[i] == mah then
            return true
        end
    end
    return false
end

function MahLogic.countMah( mahs, mah )
    local count = 0
    for i=1,#mahs do
        if mahs[i] == mah then
            count = count + 1
        end
    end
    return count
end

function MahLogic.isFlower( mah )
    if mah >= CF.GameDefine.FLOWER.MAH_HUA_BAI and mah <= CF.GameDefine.FLOWER.MAH_HUA_JU then
        return true
    end
    return false
end

function MahLogic.deleteMahs(mahs, inmahs)
    inmahs = inmahs or {}
    mahs = mahs or {}
    for i = 1, #inmahs do
        for j = 1, #mahs do
            if inmahs[i] == mahs[j] then
                table.remove(mahs, j)
                break
            end
        end
    end
end

return MahLogic