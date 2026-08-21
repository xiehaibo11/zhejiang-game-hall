local RightBtnsModule = CF.gameClass("RightBtnsModule", "game.GameBase.Modules.RightBtns.Module")

RightBtnsModule.EVENT_SHOW_TING_BUTTON = "EVENT_SHOW_TING_BUTTON"
RightBtnsModule.EVENT_HIDE_TING_BUTTON = "EVENT_HIDE_TING_BUTTON"

function RightBtnsModule:showTingBtn()
    self:dispatchEvent( { name = self.EVENT_SHOW_TING_BUTTON } )
end

function RightBtnsModule:hideTingBtn()
    self:dispatchEvent( { name = self.EVENT_HIDE_TING_BUTTON } )
end

return RightBtnsModule