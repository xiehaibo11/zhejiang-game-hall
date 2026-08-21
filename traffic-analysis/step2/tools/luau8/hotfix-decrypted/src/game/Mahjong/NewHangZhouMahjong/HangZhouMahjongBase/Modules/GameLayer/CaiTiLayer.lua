local CaiTiLayer = CF.gameClass("CaiTiLayer", CF.ViewBase)

function CaiTiLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/HangZhou/ButtonsNode.csb"
end

function CaiTiLayer:getBindingInfo()
    return {
        ["_KW_CAITI_PANEL"] = {varName="_caiTiPanel", onTouchEnded ="onClickCaiTiPanel" },
        ["_KW_CAITI_CLOSE"] = {varName="_caiTiClose"},
        ["_KW_CAITI_OPEN"] = {varName="_caiTiOpen"},
    }
end

function CaiTiLayer:ctor(param)
    param = param or {}
	CaiTiLayer.super.ctor(self, param)
end

function CaiTiLayer:onClickCaiTiPanel(send, eventType)
    local bState = CF.game:getModule("GameLayer"):getGameData():getCaiTiState()
    if self._caiTiOpen and self._caiTiClose then
        if bState then
            self._caiTiOpen:setVisible(false)
            self._caiTiClose:setVisible(true)
        else
            self._caiTiOpen:setVisible(true)
            self._caiTiClose:setVisible(false)
        end
    end
    CF.game:getModule("GameLayer"):getGameData():setCaiTiState(not bState)
end

return CaiTiLayer<