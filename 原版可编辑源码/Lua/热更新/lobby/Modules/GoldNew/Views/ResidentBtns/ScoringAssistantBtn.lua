local BtnBase = import("..BtnBase")
local NewVipBtn = class("NewVipBtn", BtnBase)
local LobbyConfig = XH.Bridge:require("lobby.Modules.Lobby.Config")
local Utils = import("...Tool.Utils")

function NewVipBtn:ctor(id, areaId, cfg)
    NewVipBtn.super.ctor(self, id, areaId, cfg)

    self:initSpine({
        path = "animation/Lobby/Base/zzb_dt_jfzs_rk/",
        tex = "zzb_dt_jfzs_rk.json",
        ske = "zzb_dt_jfzs_rk.atlas",
        armatureName = "animation",
        scale = 0.9
    })
end

function NewVipBtn:onClick()
    XH.Bridge.viewManager:openView("ScoringAssistantView")
end


return NewVipBtn
