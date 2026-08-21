local NewGoldController = class("NewGoldController")

function NewGoldController:getInstance()
    if NewGoldController._instance == nil then
        NewGoldController._instance = NewGoldController.new()
    end
    return NewGoldController._instance
end

--进入新金币游戏场景
function NewGoldController:enter(param)
    require("newgold.GoldCommon.GoldCommonInit")
    self:enterLobby(param)
end

function NewGoldController:exit()
    if NG.goldLobby then
        NG.goldLobby:exit()
    end
    self:clearLoaded()
    NG = nil
end

function NewGoldController:clearLoaded()
    for k, _ in pairs(package.loaded) do
        if string.find(k, "newgold.") then
            package.loaded[k] = nil
        end
    end
end

function NewGoldController:enterLobby(param)
    local currScene = NG.sceneManager:getTopScene()
    if currScene and currScene:getTag() == NG.SCENE_TAG.NEWGOLD_LOBBY then
        return
    end
    if not NG.goldLobby then
        NG.goldLobby = require("newgold.GoldLobby.GoldLobbyManager").new()
    end
    NG.goldLobby:enter(param)
end

function NewGoldController:enterGame(gameID, param)
    local currScene = NG.sceneManager:getTopScene()
    if currScene and currScene:getTag() == NG.SCENE_TAG.NEWGOLD_GAME then
        return
    end
    local GoldGameController = require("newgold.GoldGames.GoldGameController")
    GoldGameController:getInstance():enter(gameID, param)
end

return NewGoldController