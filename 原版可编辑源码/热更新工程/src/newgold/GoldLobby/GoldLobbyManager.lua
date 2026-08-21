local GoldLobbyManager = class("GoldLobbyManager", NG.ManagerBase)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")

function GoldLobbyManager:ctor()
    GoldLobbyManager.super.ctor(self, NG.SCENE_TAG.NEWGOLD_LOBBY)
end

local ModulePathStr = "newgold.GoldLobby.Modules.%s.Module"
function GoldLobbyManager:getModulePath(moduleName)
    assert(moduleName ~= nil and moduleName ~= "", "GoldLobbyManager:getModulePath moduleName is nil")
    return string.format(ModulePathStr, moduleName)
end

function GoldLobbyManager:onDestroy(bIgnorePermanent)
    GoldLobbyManager.super.onDestroy(self, bIgnorePermanent)
end

function GoldLobbyManager:enter(param)
    require("newgold.GoldLobby.Config.ViewsConfig")
    param = param or {}
    if param.gameid == nil then
        param.gameid = GoldAreaConfig.LZDDZ
    end
    NG.goldLobby:getModule("GoldCommon"):setEnterGameID(param.gameid)
    NG.goldLobby:getModule("PeakRaceGame"):init()
    NG.goldLobby:getModule("GoldLogin"):changeGroupSessionLogin(self.enterScene, param)
end

function GoldLobbyManager:enterScene(param)
    local lobbyScene = require("newgold.GoldLobby.GoldLobbyScene").new(param)
    NG.sceneManager:pushScene(lobbyScene, NG.SCENE_TAG.NEWGOLD_LOBBY)
end

function GoldLobbyManager:exit()
    NG.goldLobby:getModule("GoldLogin"):removeGroupSession()
    NG.sceneManager:popScene(NG.SCENE_TAG.NEWGOLD_LOBBY)
    self:onDestroy()
end

return GoldLobbyManager