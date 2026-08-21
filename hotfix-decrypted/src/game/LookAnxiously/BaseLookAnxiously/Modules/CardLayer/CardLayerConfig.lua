local CardLayerConfig = require("game.BaseCardGame.Modules.CardLayer.CardLayerConfig")

CardLayerConfig.bMoveOut = false -- 是否允许滑动出牌
CardLayerConfig.LocalSeat.TopLeft = 5
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
        cardDistanceY = 60,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Left] =
    {
        lineCardCount = 10,
        cardDistanceX = 80,
        cardDistanceY = 80,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Vertical,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Right] =
    {
        lineCardCount = 10,
        cardDistanceX = 80,
        cardDistanceY = 80,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Vertical,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Top] =
    {
        lineCardCount = 27,
        cardDistanceX = 65,
        cardDistanceY = 60,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    }
}

CardLayerConfig.HandCardConfSmall =
{
    [CardLayerConfig.LocalSeat.Bottom] =
    {
        lineCardCount = 28,
        cardDistanceX = 60,
        cardDistanceY = 60,
        maxCardDistanceX = 105,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Left] =
    {
        lineCardCount = 7,
        cardDistanceX = 67,
        cardDistanceY = 120,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Up,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Right] =
    {
        lineCardCount = 7,
        cardDistanceX = 67,
        cardDistanceY = 120,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Up,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Top] =
    {
        lineCardCount = 7,
        cardDistanceX = 67,
        cardDistanceY = 120,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.TopLeft] =
    {
        lineCardCount = 7,
        cardDistanceX = 67,
        cardDistanceY = 120,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
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
        lineCardCount = 10,
        cardDistanceX = 60,
        cardDistanceY = 60,
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
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Right] =
    {
        lineCardCount = 10,
        cardDistanceX = 60,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Top] =
    {
        lineCardCount = 10,
        cardDistanceX = 60,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.TopLeft] =
    {
        lineCardCount = 10,
        cardDistanceX = 60,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
}

CardLayerConfig.selectAddY = 23 --选中后弹起距离

--出牌配置
CardLayerConfig.OutCardConfBig =
{
    [CardLayerConfig.LocalSeat.Left] =
    {
        lineCardCount = 10,
        cardDistanceX = 70,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Bottom] =
    {
        lineCardCount = 20,
        cardDistanceX = 70,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Right] =
    {
        lineCardCount = 10,
        cardDistanceX = 70,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.Top] =
    {
        lineCardCount = 10,
        cardDistanceX = 70,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
    [CardLayerConfig.LocalSeat.TopLeft] =
    {
        lineCardCount = 10,
        cardDistanceX = 70,
        cardDistanceY = 60,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0,
    },
}

CardLayerConfig.selectAddYBig = 35 --选中后弹起距离

CardLayerConfig.HandCardScale = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6,
    [CardLayerConfig.LocalSeat.TopLeft] = 0.6
}

CardLayerConfig.HandCardScaleBig = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1.2,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6,
    [CardLayerConfig.LocalSeat.TopLeft] = 0.6

}

CardLayerConfig.distanceDivideCardsTime = 0.1
CardLayerConfig.isFirstDivide = false

return CardLayerConfig %  