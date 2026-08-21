local GoldTipModule = class("GoldTipModule", NG.ModuleBase)


function GoldTipModule:ctor()
    GoldTipModule.super.ctor(self)
end

function GoldTipModule:judgeShowView()
    local times = NG.userDefault:getValue(NG.userDefault.KEY_ID.KW_TIP_SHOW_TIMES, 0)
    if times >= 1 then
        return
    end
    NG.userDefault:setValue(NG.userDefault.KEY_ID.KW_TIP_SHOW_TIMES, 1)
    NG.viewManager:openView("NewGold_GoldTipView")
end

return GoldTipModule
�