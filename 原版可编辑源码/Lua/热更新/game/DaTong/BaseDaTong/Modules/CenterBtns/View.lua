local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.GameBase.Modules.CenterBtns.View")

function CenterBtnsView:ctor()
    CenterBtnsView.super.ctor(self)
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

function CenterBtnsView:getStartBtnVisible()
    local visible = CenterBtnsView.super.getStartBtnVisible(self)
    if self._gameData:getIsHaveResult() then
        return false
    end
    return visible
end

return CenterBtnsView