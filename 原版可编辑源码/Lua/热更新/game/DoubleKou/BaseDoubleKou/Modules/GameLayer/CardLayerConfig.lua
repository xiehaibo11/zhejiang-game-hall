local CardLayerConfig = require("game.BaseCardGame.Modules.CardLayer.CardLayerConfig")

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
CardLayerConfig.HandCardConfEightKing = 
    {
        [CardLayerConfig.LocalSeat.Bottom] = 
        {
            lineCardCount = 28,
            cardDistanceX = 63,
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
            lineCardCount = 28,
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

return CardLayerConfig