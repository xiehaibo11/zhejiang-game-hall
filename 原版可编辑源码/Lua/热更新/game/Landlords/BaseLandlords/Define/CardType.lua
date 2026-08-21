local CardType = class("CardType")

-- 牌型ID
CardType.ID = {
    None = 0,
    NZhang = 100,       -- N张，eg：单牌，一对，三张，炸弹
    MLianN = 10000,     -- 顺子，单顺34567，双顺334455, 三顺333444555
    N3Dai1 = 3100,      -- 3带1，3335
    N3Dai1Dui = 3200,   -- 3带一对，55588
    N4Dai2 = 4200,      -- 4带2,555569
    N4Dai2Dui = 4400,   -- 4带2对,55556699
    WangZha = 5000,     -- 火箭(大小王)
}

CardType.CompareResult = 
{
    UnableCompare = 0,--不可比较
    Equal = 1,          --牌型匹配
    MoreThan = 2,     --牌型大
    LessThan = 3,     --牌型小 
}

-- 上面的牌型ID与服务端定义的牌型ID的映射表
CardType.MappingTable = {
    [1001] = 101,
    [1005] = 10105,
    [1006] = 10106,
    [1007] = 10107,
    [1008] = 10108,
    [1009] = 10109,
    [1010] = 10110,
    [1011] = 10111,
    [1012] = 10112,
    [1013] = 10113,
    [1014] = 10114,

    [2001] = 102,
    [2003] = 10203,
    [2004] = 10204,
    [2005] = 10205,
    [2006] = 10206,
    [2007] = 10207,
    [2008] = 10208,
    [2009] = 10209,
    [2010] = 10210,

    [3001] = 103,
    [3002] = 10302,
    [3003] = 10303,
    [3004] = 10304,
    [3005] = 10305,
    [3006] = 10306,

    [3101] = 3101,
    [3102] = 3102,
    [3103] = 3103,
    [3104] = 3104,
    [3105] = 3105,
    
    [3201] = 3201,
    [3202] = 3202,
    [3203] = 3203,
    [3204] = 3204,
    [3205] = 3205,

    [4001] = 104,

    [4201] = 4201,
    [4202] = 4202,
    [4203] = 4203,

    [4401] = 4401,
    [4402] = 4402,

    [5001] = 5000,
}

--
-- @description:  是不是N张
-- @param cardTypeID 牌型ID 
-- @return: 是N张返回true，否则返回false
--
function CardType:isNZhang(cardTypeID)
    if cardTypeID > CardType.ID.NZhang and cardTypeID < CardType.ID.NZhang + 100 then
        return true
    end
    return false
end

--
-- @description: 是不是顺子
-- @param  cardTypeID 牌型ID 
-- @return: 是顺子返回true，否则返回false
--
function CardType:isMLianN(cardTypeID)
    if cardTypeID > CardType.ID.MLianN and cardTypeID < CardType.ID.MLianN + 10000 then
        return true
    end
    return false
end

--
-- @description: 是不是3带1
-- @param cardTypeID 牌型ID 
-- @return: 是3带1返回true，否则返回false
--
function CardType:isN3Dai1(cardTypeID) 
    if cardTypeID > CardType.ID.N3Dai1 and cardTypeID < CardType.ID.N3Dai1 + 100 then
        return true
    end
    return false
end
--
-- @description: 是不是3带一对
-- @param cardTypeID 牌型ID
-- @return: 是3带一对返回true，否则返回false
--
function CardType:isN3Dai1Dui(cardTypeID)
    if cardTypeID > CardType.ID.N3Dai1Dui and cardTypeID < CardType.ID.N3Dai1Dui +100 then
        return true
    end
    return false
end

--
-- @description: 是不是4带2
-- @param cardTypeID 牌型ID
-- @return: 是4带2返回true，否则返回false
--
function CardType:isN4Dai2(cardTypeID)
    if cardTypeID > CardType.ID.N4Dai2 and cardTypeID < CardType.ID.N4Dai2 + 100 then
        return true
    end
    return false
end

--
-- @description: 是不是4带2对
-- @param cardTypeID 牌型ID
-- @return: 是4带2对返回true，否则返回false
--
function CardType:isN4Dai2Dui(cardTypeID)
    if cardTypeID > CardType.ID.N4Dai2Dui and cardTypeID < CardType.ID.N4Dai2Dui + 100 then
        return true
    end
    return false
end

--
-- @description: 是不是单顺，eg：34567
-- @param cardTypeID 牌型ID
-- @return: 是单顺返回true，否则返回false
--
function CardType:isShunZi(cardTypeID)
    if cardTypeID >= 10105 and cardTypeID < 10200 then
        return true
    end
    return false
end

--
-- @description: 是不是连对，eg：334455
-- @param cardTypeID 牌型ID
-- @return: 是连对返回true，否则返回false
--
function CardType:isLianDui(cardTypeID)
    if cardTypeID >= 10203 and cardTypeID < 10300 then
        return true
    end
    return false
end

--
-- @description: 是不是飞机
-- @param cardTypeID 牌型ID 
-- @return: 是飞机返回true，否则返回false
--
function CardType:isFeiJi(cardTypeID)
    if cardTypeID >= 10302 and cardTypeID < 10400 then -- 不带牌
        return true
    elseif cardTypeID >= 3102 and cardTypeID < 3200 then -- 带一个
        return true
    elseif cardTypeID >= 3202 and cardTypeID < 3300 then -- 带一对
        return true
    end
    return false
end

--
-- @description: 是不是炸弹
-- @param cardTypeID 牌型ID
-- @return: 是炸弹返回true，否则返回false
--
function CardType:isBoom(cardTypeID)
    if cardTypeID >= 104 and cardTypeID < 200 then
        return true
    end
    return false
end

--
-- @description: 是不是王炸
-- @param cardTypeID 牌型ID
-- @return: 是王炸返回true，否则返回false
--
function CardType:isWangZha(cardTypeID)
    if cardTypeID == 5000 then
        return true
    end
    return false
end


return CardType