local CardLayerConfig = {}

CardLayerConfig.MaxHandCardCount = 28 --最大手牌数
CardLayerConfig.bMoveOut = true -- 是否允许滑动出牌

CardLayerConfig.CardLayoutType = {
    Horizontal = 1,
    Vertical = 2
}

--X轴增长方向
CardLayerConfig.CardAddDirectionX =
{
    Center = 0,
    Left = 1,
    Right = 2,
}

--Y轴增长方向
CardLayerConfig.CardAddDirectionY =
{
    Center = 0,
    Up = 1,
    Down = 2,
}

--本地座位       
CardLayerConfig.LocalSeat =
    {
        None = 0,
        Left = 1,
        Bottom = 2,
        Right = 3,
        Top = 4
    }

--牌区坐标 --坐标由csb文件适配
-- CardLayerConfig.CardAreaPositionConf = {
--     [CardLayerConfig.LocalSeat.Bottom] = 
--     {
--         handCardPosX = 960,
--         handCardPosY = 160,
--         outCardPosX = 960,
--         outCardPosY = 450
--     },
--     [CardLayerConfig.LocalSeat.Top] = 
--     {
--         handCardPosX = 960,
--         handCardPosY = 960,
--         outCardPosX = 960,
--         outCardPosY = 800
--     },
--     [CardLayerConfig.LocalSeat.Right] = 
--     {
--         handCardPosX = 1700,
--         handCardPosY = 500,
--         outCardPosX = 1540,
--         outCardPosY = 600
--     },
--     [CardLayerConfig.LocalSeat.Left] = 
--     {
--         handCardPosX = 180,
--         handCardPosY = 500,
--         outCardPosX = 340,
--         outCardPosY = 600
--     },
-- }

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
CardLayerConfig.HandCardConf = 
    {
        [CardLayerConfig.LocalSeat.Bottom] = 
        {
            lineCardCount = 27,
            cardDistanceX = 65,
            cardDistanceY = 75,
            maxCardDistanceX = 90,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Left] = 
        {
            lineCardCount = 9,
            cardDistanceX = 65,
            cardDistanceY = 75,
            maxCardDistanceX = 90,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Right] = 
        {
            lineCardCount = 9,
            cardDistanceX = 65,
            cardDistanceY = 75,
            maxCardDistanceX = 90,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Top] = 
        {
            lineCardCount = 27,
            cardDistanceX = 65,
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
CardLayerConfig.OutCardConf = 
    {
        [CardLayerConfig.LocalSeat.Left] = 
        {
            lineCardCount = 8,
            cardDistanceX = 60,
            cardDistanceY = 75,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Bottom] = 
        {
            lineCardCount = 20,
            cardDistanceX = 60,
            cardDistanceY = 75,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Right] = 
        {
            lineCardCount = 8,
            cardDistanceX = 60,
            cardDistanceY = 75,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Top] = 
        {
            lineCardCount = 20,
            cardDistanceX = 60,
            cardDistanceY = 75,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
    }



CardLayerConfig.OutCardScale = 0.65
CardLayerConfig.HandCardScale = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6
}

CardLayerConfig.selectAddY = 50 --选中后弹起距离

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

CardLayerConfig.CardIconPosSmall = {
    posValue = cc.p(14, 275), --左上角牌值坐标
    posColor = cc.p(16, 120), --左上角牌花色坐标
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
        posValue = cc.p(9, 275), --左上角牌值坐标
        posColor = cc.p(12, 195), --左上角牌花色坐标
        posJokerValue = cc.p(10, 275), --左上角牌值坐标
        posValueScale = 1.25,
        posColorScale = 1,
        posJokerScale = 1.1,
        posIcon = cc.p(224, 15), --左上角牌花色坐标（锚点为1，0）
    }
}

CardLayerConfig.OutCardScaleBig = 0.78
CardLayerConfig.HandCardScaleBig = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1.2,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6
}
CardLayerConfig.selectAddYBig = 70 --选中后弹起距离
CardLayerConfig.scaleBigCard = 1.2

return CardLayerConfig\  