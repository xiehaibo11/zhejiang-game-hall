local CardLayerConfig = CF.gameClass("CardLayerConfig", "game.BaseCardGame.Modules.CardLayer.CardLayerConfig")

--本地座位       
CardLayerConfig.LocalSeat =
{
    None = 0,
    Left = 1,
    Bottom = 2,
    Right = 3,
    Top = 4,
    TopMid = 5,
    TopLeft = 6,
}

CardLayerConfig.HandCardConfSix = 
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
        [CardLayerConfig.LocalSeat.TopMid] = 
        {
            lineCardCount = 9,
            cardDistanceX = 65,
            cardDistanceY = 75,
            maxCardDistanceX = 90,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.TopLeft] = 
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
    [CardLayerConfig.LocalSeat.TopMid] = 
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
    [CardLayerConfig.LocalSeat.TopLeft] = 
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
}

--出牌配置
CardLayerConfig.OutCardConfFFZ = 
{
    lineCardCount = 8,
    cardDistanceX = 48,
    cardDistanceY = 50,
    layoutType = CardLayerConfig.CardLayoutType.Horizontal,
    cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
    cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
    startPosX = 0,
    startPosY = 0,
}

CardLayerConfig.OutCardScale = 0.65
CardLayerConfig.OutCardScaleFFZ = 1.3
CardLayerConfig.HandCardScale = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6,
    [CardLayerConfig.LocalSeat.TopMid] = 0.6,
    [CardLayerConfig.LocalSeat.TopLeft] = 0.6,
}

return CardLayerConfig