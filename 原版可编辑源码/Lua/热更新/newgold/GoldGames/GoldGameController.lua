local GoldGameController = class("GoldGameController")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GameManagerConfig = {
    [GoldAreaConfig.LZDDZ] = "newgold.GoldGames.GoldGameLandlord.GoldGameHPLandlord.GoldGameManager",
    [GoldAreaConfig.MAH_BBXL] = "newgold.GoldGames.GoldGameMah.MahXueLiu.GoldGameManager",
}

function GoldGameController:getInstance()
    if GoldGameController._instance == nil then
        GoldGameController._instance = GoldGameController.new()
    end
    return GoldGameController._instance
end

function GoldGameController:enter(gameID, param)
    require("newgold.GoldGames.GoldGameCommon.GoldGameCommonInit")
    NG.GAME.requireManager:setGameID(gameID)
    if not NG.goldGame or NG.goldGame.gameID ~= gameID then
        NG.goldGame = require(GameManagerConfig[gameID]).new()
        NG.goldGame.gameID = gameID
    end
    param = param or {}
    NG.goldGame.isRelink = param.isRelink
    NG.goldGame:enter(gameID, param)
    -- NG.msgManager:sendPlayerConnect()
end

function GoldGameController:exit()
    NG.GAME = nil
    NG.goldGame = nil
end

return GoldGameController
