local CenterBtnsView = CF.gameClass("CenterBtnsView", CF.gameScriptRootPath .. ".GameBase.Modules.CenterBtns.View")

function CenterBtnsView:initUI()
    CenterBtnsView.super.initUI(self)
    self._startBtn:setVisible(false)
end

function CenterBtnsView:getStartBtnVisible()
    return false
end

return CenterBtnsView
K