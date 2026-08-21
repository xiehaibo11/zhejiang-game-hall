local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

function AnimationLayer:getProxyEvents()
    local proxyEvents = AnimationLayer.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SHENG_PAI_ANI", callBack = "onShowShengPaiAni" }
    return proxyEvents
end

--生牌阶段动画
function AnimationLayer:onShowShengPaiAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    if not CF.configData:isHaveShengPaiJieDuan() then
        return
    end
    local exportJsonPath = "res/animation/Mahjong/TaiZhou/WenLing/up_card_ani/"
    local exportJsonName = "up_card_ani"
    local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
    local aniName = "up_card_ani"
    local pos = cc.p(self._panelRoot:getContentSize().width / 2, self._panelRoot:getContentSize().height / 2)
    CF.UITool.playJsonAnimation(self._panelRoot, aniName, exportJsonFilePath, 1, pos, nil, function()
        self._panelRoot:removeChildByName(aniName)
    end)
end

return AnimationLayer