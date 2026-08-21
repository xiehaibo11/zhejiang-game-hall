local LobbyManager = class("LobbyManager", XH.ManagerBase)

function LobbyManager:ctor()
    LobbyManager.super.ctor(self, XH.SCENE_TAG.LOBBY)
end

local ModulePathStr = "lobby.Modules.%s.Module"
function LobbyManager:getModulePath(moduleName)
    assert(moduleName ~= nil and moduleName ~= "", "LobbyManager:getModulePath moduleName is nil")
    return string.format(ModulePathStr, moduleName)
end

function LobbyManager:getPermanentModules()
    return require("lobby.ModulesConfig").PermanentModules
end

function LobbyManager:enter()
    LobbyManager.super.enter(self)
end

function LobbyManager:onDestroy(bIgnorePermanent)
    XH.lobby:getModule("Lobby"):clearLeisureEntranceData()
    LobbyManager.super.onDestroy(self, bIgnorePermanent)
end

return LobbyManager