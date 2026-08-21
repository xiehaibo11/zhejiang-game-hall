local DismissView = CF.gameClass("DismissView", "game.GameBase.Modules.Dismiss.View")

function DismissView:ctor(param)
    DismissView.super.ctor(self, param)
    self.isFirstRequest = true
end


function DismissView:onUpdateDismissUI(event)
    local seat = event.msg.seat
    local status = event.msg.status or self.Status.DEFAULT
    local isRemove = event.msg.remove or false

    if not isRemove and seat and status == self.Status.AGREE then
        if self.isFirstRequest then
            event.msg.status = self.Status.REQUEST
            self.isFirstRequest = false
        end
    end
    DismissView.super.onUpdateDismissUI(self, event)
end

return DismissView