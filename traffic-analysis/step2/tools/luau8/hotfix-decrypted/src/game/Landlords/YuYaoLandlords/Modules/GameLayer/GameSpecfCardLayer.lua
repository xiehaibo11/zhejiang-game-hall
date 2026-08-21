local GameSpecfCardLayer = CF.gameClass("GameSpecfCardLayer", "game.Landlords.BaseLandlords.Modules.GameLayer.GameSpecfCardLayer")

function GameSpecfCardLayer:getCSBPath()
    return "res/cocosStudio/Landlords/GameLayer/CSB/YuYao/SpecfCardLayer.csb"
end

function GameSpecfCardLayer:getBindingInfo()
    local uiList = GameSpecfCardLayer.super.getBindingInfo(self)
    uiList["_KW_HAND_CARD_"] = {varName = "_handCard_", beginIndex = 1, endIndex = 28, type = CF.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded ="onTouchEventHandCard"}
    return uiList
end

return GameSpecfCardLayerI