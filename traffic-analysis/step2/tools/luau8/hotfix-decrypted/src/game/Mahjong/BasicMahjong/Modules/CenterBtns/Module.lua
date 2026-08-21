local CenterBtnsModule = CF.gameClass("CenterBtnsModule", "game.GameBase.Modules.CenterBtns.Module")

CenterBtnsModule.EVENT_SHOW_SETTLE_BUTTON = "EVENT_SHOW_SETTLE_BUTTON"
CenterBtnsModule.EVENT_SHOW_QUICK_BUTTON = "EVENT_SHOW_QUICK_BUTTON"

function CenterBtnsModule:showWinLostButton()
    self:dispatchEvent( { name = self.EVENT_SHOW_SETTLE_BUTTON } )
end

function CenterBtnsModule:showQuickButton(msg)
    self:dispatchEvent( { name = self.EVENT_SHOW_QUICK_BUTTON, msg = msg } )
end

return CenterBtnsModule