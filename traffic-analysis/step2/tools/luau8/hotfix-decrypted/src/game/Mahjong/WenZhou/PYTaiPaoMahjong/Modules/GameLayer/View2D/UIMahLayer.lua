local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:getProxyEvents()
    local proxyEvents = UIMahLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_SHA_ZHU_ACTION", callBack = "onEventShowShaZHuAction"}
    return proxyEvents
end

function UIMahLayer:onEventShowShaZHuAction(event)
    local isShaZhu = event.data
    if isShaZhu then
        self["_actionButton" .. CF.GameDefine.ACTION.HU]:loadTextures("action_sha_zhu.png","action_sha_zhu.png","",ccui.TextureResType.plistType)
    else
        self["_actionButton" .. CF.GameDefine.ACTION.HU]:loadTextures("action_hu.png","action_hu.png","",ccui.TextureResType.plistType)
    end
end

return UIMahLayerR