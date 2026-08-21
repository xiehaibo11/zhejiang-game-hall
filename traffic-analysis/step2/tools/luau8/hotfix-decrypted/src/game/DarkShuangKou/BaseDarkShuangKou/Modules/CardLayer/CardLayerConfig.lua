local CardLayerConfig = {}

CardLayerConfig.MaxHandCardCount = 27 --最大手牌数
CardLayerConfig.bMoveOut = true -- 是否允许滑动出牌

CardLayerConfig.CardLayoutType = {
    Horizontal = 1,
    Vertical = 2
}

--X轴增长方向
CardLayerConfig.CardAddDirectionX = {
    Center = 0,
    Left = 1,
    Right = 2
}

--Y轴增长方向
CardLayerConfig.CardAddDirectionY = {
    Center = 0,
    Up = 1,
    Down = 2
}

--本地座位
CardLayerConfig.LocalSeat = {
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
CardLayerConfig.HandCardConf = {
    [CardLayerConfig.LocalSeat.Bottom] = {
        lineCardCount = 22,
        cardDistanceX = 81,
        cardDistanceY = 130,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Up,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Left] = {
        lineCardCount = 9,
        cardDistanceX = 65,
        cardDistanceY = 75,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Right] = {
        lineCardCount = 9,
        cardDistanceX = 65,
        cardDistanceY = 75,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Top] = {
        lineCardCount = 27,
        cardDistanceX = 65,
        cardDistanceY = 75,
        maxCardDistanceX = 90,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    }
}

--出牌配置
CardLayerConfig.OutCardConf = {
    [CardLayerConfig.LocalSeat.Left] = {
        lineCardCount = 20,
        cardDistanceX = 43,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Bottom] = {
        lineCardCount = 20,
        cardDistanceX = 43,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Right] = {
        lineCardCount = 20,
        cardDistanceX = 43,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Top] = {
        lineCardCount = 20,
        cardDistanceX = 43,
        cardDistanceY = 75,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Center,
        startPosX = 0,
        startPosY = 0
    }
}

--头像边的牌配置
CardLayerConfig.HeadCardConf = {
    [CardLayerConfig.LocalSeat.Left] = {
        lineCardCount = 8,
        cardDistanceX = 43,
        cardDistanceY = 55,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Down,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Bottom] = {
        lineCardCount = 8,
        cardDistanceX = 43,
        cardDistanceY = 55,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Center,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Down,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Right] = {
        lineCardCount = 8,
        cardDistanceX = 43,
        cardDistanceY = 55,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Left,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Down,
        startPosX = 0,
        startPosY = 0
    },
    [CardLayerConfig.LocalSeat.Top] = {
        lineCardCount = 8,
        cardDistanceX = 43,
        cardDistanceY = 55,
        layoutType = CardLayerConfig.CardLayoutType.Horizontal,
        cardAddDirectionX = CardLayerConfig.CardAddDirectionX.Right,
        cardAddDirectionY = CardLayerConfig.CardAddDirectionY.Down,
        startPosX = 0,
        startPosY = 0
    }
}

CardLayerConfig.HandCardScale = {
    [CardLayerConfig.LocalSeat.Left] = 0.6,
    [CardLayerConfig.LocalSeat.Bottom] = 1.1,
    [CardLayerConfig.LocalSeat.Right] = 0.6,
    [CardLayerConfig.LocalSeat.Top] = 0.6
}

CardLayerConfig.selectAddY = 30 --选中后弹起距离

--牌面的图标布局坐标
CardLayerConfig.CardIconPos = {
    scaleValue = 1, --左上角牌值缩放
    posValue = cc.p(26, 288), --左上角牌值坐标
    scaleColor = 0.5, --左上角牌花色缩放
    posColor = cc.p(34, 210), --左上角牌花色坐标
    posIcon = cc.p(201, 52), --左上角牌花色坐标（锚点为1，0）
    posMingIcon = cc.p(34, 29),
    scaleMingIcon = 1
}

CardLayerConfig.CardIconPosOut = {
    scaleValue = 0.7, --左上角牌值缩放
    posValue = cc.p(11, 138), --左上角牌值坐标
    scaleColor = 0.35, --左上角牌花色缩放
    posColor = cc.p(17, 83), --左上角牌花色坐标
    posIcon = cc.p(0, 0), --左上角牌花色坐标（锚点为1，0）
    posMingIcon = cc.p(17, 18),
    scaleMingIcon = 0.7
}

CardLayerConfig.CardIconPosHead = {
    scaleValue = 0.7, --左上角牌值缩放
    posValue = cc.p(9, 86), --左上角牌值坐标
    scaleColor = 0.35, --左上角牌花色缩放
    posColor = cc.p(17, 83), --左上角牌花色坐标
    posIcon = cc.p(0, 0), --左上角牌花色坐标（锚点为1，0）
    posMingIcon = cc.p(15, 10),
    scaleMingIcon = 0.7
}

CardLayerConfig.selectAddYBig = 70 --选中后弹起距离

-- 暗斗双扣,牌区效果
CardLayerConfig.CardAreaEffectConfig = {
    {{0.4, 1}}, -- 1
    {{0.55, 1}},
    {{0.65, 1}},
    {{0.8, 1}},
    {{0.9, 1}}, -- 5
    {{1, 1}},
    {{1.1, 1}},
    {{1.3, 1}},
    {{1, 1}, {0.55, 1}},
    {{1, 1}, {0.65, 1}}, -- 10
    {{1, 1}, {0.8, 1}},
    {{1, 1}, {0.9, 1}},
    {{1, 1}, {1, 1}},
    {{1.1, 1}, {1.1, 1}},
    {{1.15, 1}, {1.15, 1}},
    {{1.2, 1}, {1.2, 1}}
}

CardLayerConfig.Card1ToCard2Scale = 0.46
CardLayerConfig.Card1ToCard3Scale = 0.3

return CardLayerConfig
�