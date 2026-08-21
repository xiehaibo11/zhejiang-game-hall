local ShopModule = import("..Module")
local LobbyShopModule = class("GoldShopModule", ShopModule)
local RemoteConfig = import("....Configs.RemoteConfig")

function LobbyShopModule:ctor()
    LobbyShopModule.super.ctor(self)
    self._allPropTags = RemoteConfig:getLobbyShopTagConfig() or {} -- 修改
end

return LobbyShopModule
