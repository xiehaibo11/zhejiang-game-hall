local CenterBtnsModule = CF.gameClass("CenterBtnsModule", "game.GameBase.Modules.CenterBtns.Module")

CenterBtnsModule.EVENT_SHOW_SETTLE_BUTTON = "EVENT_SHOW_SETTLE_BUTTON"

function CenterBtnsModule:showWinLostButton()
    self:dispatchEvent( { name = self.EVENT_SHOW_SETTLE_BUTTON } )
end

return CenterBtnsModule