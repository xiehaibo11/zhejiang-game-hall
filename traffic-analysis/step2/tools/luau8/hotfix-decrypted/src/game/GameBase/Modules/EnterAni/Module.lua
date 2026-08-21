local EnterAniModule = class("EnterAniModule", CF.ModuleBase)

EnterAniModule.EVENT_ENTER_ANI_FINISH = "EVENT_ENTER_ANI_FINISH"

function EnterAniModule:ctor()
    EnterAniModule.super.ctor(self)
end

function EnterAniModule:dispatchEnterAniFinish()
    self:dispatchEvent({name = self.EVENT_ENTER_ANI_FINISH})
end

return EnterAniModule
_