local AnimationLayer = CF.gameClass("AnimationLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.AnimationLayer")

function AnimationLayer:getProxyEvents()
    local eventList = AnimationLayer.super.getProxyEvents(self)
    eventList[#eventList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CHENG_BAO_QUAN_ANI", callBack = "showLastFourAnimation"}
    return eventList
end

--生牌阶段动画
function AnimationLayer:showLastFourAnimation(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local exportJsonPath = "res/animation/Mahjong/JinHuaMahjong/chengbaoquan/"
    local exportJsonName = "chengbaoquan_ani"
    local exportJsonFilePath = exportJsonPath .. exportJsonName .. ".ExportJson"
    local aniName = "chengbaoquan_ani"
    local pos = cc.p(self._panelRoot:getContentSize().width / 2, self._panelRoot:getContentSize().height / 2)
    CF.UITool.playJsonAnimation(self._panelRoot, aniName, exportJsonFilePath, 1, pos, nil, function()
        self._panelRoot:removeChildByName(aniName)
    end)
end

return AnimationLayerc