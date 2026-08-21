local CURRENT_MOUDLE_NAME = ...
local UICardsArearBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsAreaAnimation")
local UICardsArea = class("UICardsArea",UICardsArearBase)
--[[
--old
UICardsArea.AniTime =
{
    --横排动画时间设置
    LeftOrRightDelayTime = 0.03,
    LeftOrRightDownTime = 0.3,
    HyorizontalCenterTime = 0.1,
    VerticalCenterLineDownTime = 0.3,
    
    --竖排动画时间设置
    UpOrDownDelayTime = 0.06,
    UpOrDownFadeInTime = 0.3,
    VerticalCenterTime = 0.06
}
]]
-- new
UICardsArea.AniTime =
{
    --横排动画时间设置
    LeftOrRightDelayTime = 0.01,
    LeftOrRightDownTime = 0.2,
    HyorizontalCenterTime = 0.1,
    VerticalCenterLineDownTime = 0.2,
    
    --竖排动画时间设置
    UpOrDownDelayTime = 0.03,
    UpOrDownFadeInTime = 0.15,
    VerticalCenterTime = 0.03
}
return UICardsArea