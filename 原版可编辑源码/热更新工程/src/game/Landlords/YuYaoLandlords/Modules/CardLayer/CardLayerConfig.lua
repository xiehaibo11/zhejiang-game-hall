local CardLayerConfig = CF.gameClass("CardLayerConfig", "game.BaseCardGame.Modules.CardLayer.CardLayerConfig")

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

CardLayerConfig.HandCardConf = 
    {
        [CardLayerConfig.LocalSeat.Bottom] = 
        {
            lineCardCount = 33,
            cardDistanceX = 53,
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
            startPosX = 380,
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
            startPosX = -380,
            startPosY = 0,
        },
        [CardLayerConfig.LocalSeat.Top] = 
        {
            lineCardCount = 33,
            cardDistanceX = 53,
            cardDistanceY = 75,
            maxCardDistanceX = 90,
            layoutType = CardLayerConfig.CardLayoutType.Horizontal,
            cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
            cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
            startPosX = 0,
            startPosY = 0,
        }
    }

return CardLayerConfig