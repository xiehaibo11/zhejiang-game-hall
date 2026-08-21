----create by lcy 2017.12.9
local CURRENT_MOUDLE_NAME = ...
local UICardsLayerBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsLayerConfig")
local UICardsLayer = class("UICardsLayer",UICardsLayerBase)
local UICardsArea = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")


--开牌配置
UICardsLayer.OpenCard = 
    {
        touchEnable = false,
        checkDistance = 0,
        maxCardsCount = 10,
        cardsDistanceX = 110,
        cardsDistanceY = 40,
        arrangementWay = UICardsArea.CardArrangement.Horizontal,
        cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
        cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
        startPosX = 0,
        startPosY = 0,
    }

UICardsLayer.FlyCard = 
    {
        touchEnable = false,
        checkDistance = 0,
        maxCardsCount = 10,
        cardsDistanceX = 110,
        cardsDistanceY = 40,
        arrangementWay = UICardsArea.CardArrangement.Horizontal,
        cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
        cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
        startPosX = 0,
        startPosY = 0,
    }


--手牌配置
UICardsLayer.HandCards = 
    {
        [UICardsLayer.CardLocalSeat.Left] = 
        {
            touchEnable = false,
            checkDistance = 23,
            maxCardsCount = 10,
            minCardsDistanceX = 70,
            maxCardsDistanceX = 70,
            cardsDistanceY = 70,
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
            minCardsDistanceX = 55,
            maxCardsDistanceX = 70,
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
            minCardsDistanceX = 70,
            maxCardsDistanceX = 70,
            cardsDistanceY = 70,
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
            minCardsDistanceX = 50,
            maxCardsDistanceX = 70,
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
            cardsDistanceX = 65,
            cardsDistanceY = 70,
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
            cardsDistanceX = 65,
            cardsDistanceY = 70,
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
            cardsDistanceX = 65,
            cardsDistanceY = 70,
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
            cardsDistanceX = 65,
            cardsDistanceY = 70,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.HorizontalCenter,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.VerticalCenter,
            startPosX = 0,
            startPosY = 0,
        },
    }

--出牌配置
UICardsLayer.BombCards = 
    {
        [UICardsLayer.CardLocalSeat.Left] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 44,
            cardsDistanceY = 60,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Bottom] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 44,
            cardsDistanceY = 60,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Right] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 44,
            cardsDistanceY = 60,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Top] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 44,
            cardsDistanceY = 60,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
    }


--出牌配置
UICardsLayer.BombCardsNew = 
    {
        [UICardsLayer.CardLocalSeat.Left] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 65,
            cardsDistanceY = 50,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Bottom] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 65,
            cardsDistanceY = 50,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Right] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 65,
            cardsDistanceY = 50,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
        [UICardsLayer.CardLocalSeat.Top] = 
        {
            touchEnable = false,
            checkDistance = 0,
            maxCardsCount = 12,
            cardsDistanceX = 65,
            cardsDistanceY = 50,
            arrangementWay = UICardsArea.CardArrangement.Horizontal,
            cardIncreaseDirectionX = UICardsArea.CardIncreaseDirectionX.Left,
            cardIncreaseDirectionY = UICardsArea.CardIncreaseDirectionY.Down,
            startPosX = 0,
            startPosY = 0,
        },
    }

UICardsLayer.CardTypeChinese = 
{
    [201] = '双王',
    [401] = '四个头',
    [501] = '五个头',
    [601] = '六个头',
    [701] = '七个头',
    [801] = '八个头',
    [403] = '三连炸',
    [503] = '三连炸',
    [603] = '三连炸',
    [703] = '三连炸',
    [803] = '三连炸',
    [404] = '四连炸',
    [504] = '四连炸',
    [604] = '四连炸',
    [405] = '五连炸',
    [505] = '五连炸',
    [406] = '六连炸',
    [10006] = '三王',
    [10007] = '四个王',
}

return UICardsLayer  �)  