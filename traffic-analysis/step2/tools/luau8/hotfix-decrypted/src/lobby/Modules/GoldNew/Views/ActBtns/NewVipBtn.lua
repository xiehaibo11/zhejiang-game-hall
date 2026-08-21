local BtnBase = import("..BtnBase")
local NewVipBtn = class("NewVipBtn", BtnBase)
local LobbyConfig = XH.Bridge:require("lobby.Modules.Lobby.Config")
local Utils = import("...Tool.Utils")

function NewVipBtn:ctor(id, areaId, cfg)
    NewVipBtn.super.ctor(self, id, areaId, cfg)

    self:initArmature({File = "animation/Lobby/Base/hyhl_icon/hyhl_icon.ExportJson", ArmatureName = "hyhl_icon", AniName = "Animation1"})
end

function NewVipBtn:checkShow(isFromGroup)
    -- local oldCfg = XH.Bridge:getModule("Lobby"):getLobbyIconsConfig(LobbyConfig.ICON_POS_TYPE.GOLD_LONG)
    -- local idx = Utils:findIdx(oldCfg, function(v)
    --     return v.IconID == LobbyConfig.ICON_ID.NEW_VIP
    -- end)
    self:setVisible(true) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function NewVipBtn:onClick()
    self:throwClickData()
    XH.Bridge.viewManager:openView("TabsActivityView", nil, {tab = "VIPGIFT"})
end

return NewVipBtn
�