----create by lcy 2017.12.9
local UICardsLayer = class("UICardsLayer")
local CURRENT_MOUDLE_NAME = ...
local UICardsArea = import(".UICardsArea",CURRENT_MOUDLE_NAME)

----参数注解
--touchEnable               --能否点击
--checkDistance             --选中后牌提起的高度
--maxCardsCount             --一行牌的最大数
--minCardsDistanceX         --X间距最小值  用于撑牌
--maxCardsDistanceX         --X间距最大值  用于撑牌
--cardsDistanceX            --X间距
--cardsDistanceY            --Y间距
--arrangementWay            --牌的排列方式
--cardIncreaseDirectionX    --X轴牌增长方式
--cardIncreaseDirectionY    --Y轴牌增长方式
--startPosX                 --X偏移距离
--startPosY                 --Y偏移距离

--本地座位       
UICardsLayer.CardLocalSeat =
    {
        None = 0,
        Left = 1,
        Bottom = 2,
        Right = 3,
        Top = 4
    }

--手牌配置
UICardsLayer.HandCards = 
    {
        [UICardsLayer.CardLocalSeat.Left] = 
        {
            touchEnable = false,
            checkDistance = 23,
            maxCardsCount = 10,
            minCardsDistanceX = 40,
            maxCardsDistanceX = 50,
            cardsDistanceY = 35,
            arrangementWay = UICardsArea.CardArrangement.Vertical,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Bottom] = 
        {
            touchEnable = true,
            checkDistance = 23,
            maxCardsCount = 27,
            minCardsDistanceX = 30,
            maxCardsDistanceX = 50,
            cardsDistanceY = 40,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Right] = 
        {
            touchEnable = false,
            checkDistance = 23,
            maxCardsCount = 10,
            minCardsDistanceX = 40,
            maxCardsDistanceX = 50,
            cardsDistanceY = 35,
            arrangementWay = UICardsArea.CardArrangement.Vertical,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Top] = 
        {
            touchEnable = false,
            checkDistance = 23,
            maxCardsCount = 27,
            minCardsDistanceX = 27,
            maxCardsDistanceX = 50,
            cardsDistanceY = 40,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
    }

--出牌配置
UICardsLayer.OutCards = 
    {
        [UICardsLayer.CardLocalSeat.Left] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 10,
            cardsDistanceX = 40,
            cardsDistanceY = 40,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Right,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Bottom] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 20,
            cardsDistanceX = 40,
            cardsDistanceY = 40,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Right] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 10,
            cardsDistanceX = 40,
            cardsDistanceY = 40,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Top] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 20,
            cardsDistanceX = 40,
            cardsDistanceY = 40,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
    }

return UICardsLayer�