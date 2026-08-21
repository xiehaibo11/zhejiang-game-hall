local GoldGameManager = NG.GAME.gameClass("GoldGameManager", NG.ManagerBase)
NG.EventReceive.extend(GoldGameManager)

function GoldGameManager:enter(gameID, param)
    param = param or {}
    NG.msgManager = NG.GAME.gameRequire("Manager.MsgManager").new()
    NG.soundManager = NG.GAME.gameRequire("Manager.SoundManager").new()
    self:initSettingData()
    self:setParamEx(param)
    local lobbyScene = NG.GAME.gameRequire("GoldGameScene").new(param.isRelink)
    NG.sceneManager:pushScene(lobbyScene, NG.SCENE_TAG.NEWGOLD_GAME)
end

function GoldGameManager:setParamEx(param)
    if param == nil or not param.autoReady then
        return
    end
    self:setAutoReady(param.autoReady)
end

function GoldGameManager:setAutoReady(isAuto)
    self._isAutoReady = isAuto
end

function GoldGameManager:isAutoReady()
    return self._isAutoReady
end

function GoldGameManager:getModuleClass(moduleName)
    return NG.GAME.gameRequire(string.format("Modules.%s.Module", moduleName))
end

function GoldGameManager:getPermanentModules()
    return {}
end

function GoldGameManager:exit()
    NG.goldLobby:getModule("GoldCommon"):flushPlayerProp()
    NG.sceneManager:popScene(NG.SCENE_TAG.NEWGOLD_GAME)
    self:onDestroy()
    local GoldGameController = require("newgold.GoldGames.GoldGameController")
    GoldGameController:getInstance():exit()
end

function GoldGameManager:onDestroy()
    GoldGameManager.super.onDestroy(self)
    self:clearLoaded()
end

function GoldGameManager:clearLoaded()
    for k, _ in pairs(package.loaded) do
        if string.find(k, "newgold.GoldGames") then
            package.loaded[k] = nil
        end
    end
end

function GoldGameManager:showSetting()
    NG.GAME.gameRequire("Modules.Set.SetLayer").new():showSelf()
end

function GoldGameManager:showHelper()
    NG.GAME.gameRequire("Modules.Rule.RuleLayer").new():showSelf()
end

function GoldGameManager:showChat()
    NG.GAME.gameRequire("Modules.Chat.ChatLayer").new():showSelf()
end

function GoldGameManager:showNotEnoughLayer(info, lastInfo)
    NG.GAME.gameRequire("Modules.GoldTip.NotEnoughLayer").new():showSelf(info, lastInfo)
end

function GoldGameManager:showTooMuchLayer(info, lastInfo)
    NG.GAME.gameRequire("Modules.GoldTip.TooMuchLayer").new():showSelf(info, lastInfo)
end

function GoldGameManager:initSettingData()
    NG.GAME.settingData = NG.GAME.gameRequire("Data.SettingData").new()
end

return GoldGameManager
