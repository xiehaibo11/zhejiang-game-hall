local CenterBtnsView = CF.gameClass("CenterBtnsView", "game.GameBase.Modules.CenterBtns.View")

function CenterBtnsView:ctor()
    CenterBtnsView.super.ctor(self)
    self._isContinue = false
    self._gameData = CF.game:getModule("GameLayer"):getGameData()
end

-- 续桌成功，刷新开始按钮状态
function CenterBtnsView:onGameContinue(event)
    self._isContinue = true
    CenterBtnsView.super.onGameContinue(self,event)
end

function CenterBtnsView:getStartBtnVisible()
    local visible = CenterBtnsView.super.getStartBtnVisible(self)
    if self._gameData:getIsHaveResult() and not self._isContinue then
        return false
    end
    return visible
end

function CenterBtnsView:onGameStart()
    self._isContinue = false
end

return CenterBtnsView