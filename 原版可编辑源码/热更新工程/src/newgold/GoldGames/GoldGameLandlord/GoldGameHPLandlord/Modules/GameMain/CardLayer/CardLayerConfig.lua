local CardLayerConfig = {}

CardLayerConfig.MaxHandCardCount = 27 --最大手牌数
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
            maxCardDistanceX = 70,
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
            maxCardDistanceX = 70,
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
            maxCardDistanceX = 70,
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
            maxCardDistanceX = 70,
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

    --牌面的图标布局坐标
CardLayerConfig.CardIconPos = {
    posValue = cc.p(14, 275), --左上角牌值坐标
    posColor = cc.p(12, 210), --左上角牌花色坐标
    posIcon = cc.p(220, 15), --左上角牌花色坐标（锚点为1，0）
} 

CardLayerConfig.OutCardScale = 0.65
CardLayerConfig.HandCardScale = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1.2,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6
}

CardLayerConfig.selectAddY = 50 --选中后弹起距离

return CardLayerConfig