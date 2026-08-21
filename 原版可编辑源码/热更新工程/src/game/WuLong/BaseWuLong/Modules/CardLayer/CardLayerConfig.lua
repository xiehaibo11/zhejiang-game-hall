local CardLayerConfig = require("game.BaseCardGame.Modules.CardLayer.CardLayerConfig")

--牌面的图标布局坐标
CardLayerConfig.CardIconPos = {
    posValue = cc.p(14, 275), --左上角牌值坐标
    posColor = cc.p(12, 210), --左上角牌花色坐标
    posIcon = cc.p(220, 15), --左上角牌花色坐标（锚点为1，0）
}
CardLayerConfig.CardIconPosBig = {
    posValue = cc.p(14, 275), --左上角牌值坐标
    posColor = cc.p(12, 190), --左上角牌花色坐标
    posIcon = cc.p(220, 15), --左上角牌花色坐标（锚点为1，0）
}

--双扣牌面的图标布局坐标
CardLayerConfig.DKCardIconPos = {
    [1] = {
        posValue = cc.p(14, 275), --左上角牌值坐标
        posColor = cc.p(12, 210), --左上角牌花色坐标
        posJokerValue = cc.p(14, 275), --左上角牌值坐标
        posValueScale = 1,
        posColorScale = 1,
        posJokerScale = 1,
        posIcon = cc.p(224, 15), --左上角牌花色坐标（锚点为1，0）
    },
    [2] = {
        posValue = cc.p(14, 275), --左上角牌值坐标
        posColor = cc.p(17, 195), --左上角牌花色坐标
        posJokerValue = cc.p(15, 275), --左上角牌值坐标
        posValueScale = 1.25,
        posColorScale = 1,
        posJokerScale = 1.1,
        posIcon = cc.p(224, 15), --左上角牌花色坐标（锚点为1，0）
    }
}

------------------------------------
-- lineCardCount 每行（列）最多牌数
-- cardDistanceX 牌水平间距
-- cardDistanceY 牌垂直间距
-- maxCardDistanceX 水平最大间距(手牌自适应改变间距时使用)
-- layoutType 牌布局方式（水平或垂直）
-- cardAddDirectionX 牌水平增长方式（左、右、居中）
-- cardAddDirectionY 牌垂直增长方式（上、下、居中）
-- startPosX 牌起始X坐标
-- startPosY 牌起始Y坐标
------------------------------------
CardLayerConfig.HandCardConf = {
    [CardLayerConfig.LocalSeat.Bottom] =    {
        lineCardCount = 71,
        cardDistanceX = 63,
        cardDistanceY = 75,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Left] =    {
        lineCardCount = 5,
        cardDistanceX = 80,
        cardDistanceY = 120,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Vertical,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Right] =    {
        lineCardCount = 5,
        cardDistanceX = 80,
        cardDistanceY = 120,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Vertical,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Top] =    {
        lineCardCount = 71,
        cardDistanceX = 63,
        cardDistanceY = 75,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    }
}

--出牌配置
CardLayerConfig.OutCardConf = {
    [CardLayerConfig.LocalSeat.Left] =    {
        lineCardCount = 8,
        cardDistanceX = 60,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Bottom] =    {
        lineCardCount = 8,
        cardDistanceX = 60,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Right] =    {
        lineCardCount = 8,
        cardDistanceX = 60,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Top] =    {
        lineCardCount = 8,
        cardDistanceX = 60,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
}

return CardLayerConfig