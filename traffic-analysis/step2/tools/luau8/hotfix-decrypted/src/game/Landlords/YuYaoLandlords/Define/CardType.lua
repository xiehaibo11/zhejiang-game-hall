local CardType = CF.gameClass("CardType", "game.Landlords.BaseLandlords.Define.CardType")

-- 牌型ID
CardType.ID = {
    None = 0,
    NZhang = 100,       -- N张，eg：单牌，一对，三张，炸弹
    MLianN = 10000,     -- 顺子，余姚没有单顺，双顺334455, 三顺333444555
    N3Dai1Dui = 3200,   -- 3带一对，55588
    WangZha = 9000,     -- 四王炸
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
    [2002] = 10202,
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
    [3007] = 10307,
    [3008] = 10308,
    [3009] = 10309,
    [3010] = 10310,
    [3011] = 10311,
    [3012] = 10312,

    
    [3201] = 3201,
    
    [3202] = 3202,
    [3203] = 3203,
    [3204] = 3204,
    [3205] = 3205,

    [4001] = 104,
    [5001] = 105,
    [6001] = 106,
    [7001] = 107,
    [8001] = 108,

    [9000] = 9000,

    [9001] = 109,
    [10001] = 110,
    [11001] = 111,
    [12001] = 112,

}

--
-- @description: 是不是顺子 (余姚没有单顺)
-- @param  cardTypeID 牌型ID 
-- @return: 是顺子返回true，否则返回false
--
function CardType:isMLianN(cardTypeID)
    if cardTypeID > CardType.ID.MLianN + 200 and cardTypeID < CardType.ID.MLianN + 10000 then
        return true
    end
    return false
end

--
-- @description: 是不是连对(余姚没有飞机)
-- @param cardTypeID 牌型ID 
-- @return: 是连对返回true，否则返回false
--
function CardType:isFeiJi(cardTypeID)
    if cardTypeID >= 10302 and cardTypeID < 10400 then -- 不带牌
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
    if cardTypeID == 9000 then
        return true
    end
    return false
end


return CardTypel	