
local RightBtnsView = CF.gameClass("RightBtnsView", "game.Mahjong.BasicMahjong.Modules.RightBtns.View")

function RightBtnsView:initUI()
    RightBtnsView.super.initUI(self)
    self._setBtn:setVisible(false)
    self._robotBtn:setVisible(false)
end

function RightBtnsView:initVoiceTip()
    return 
end
return RightBtnsView
