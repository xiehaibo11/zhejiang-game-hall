--ganpengjin
cc.exports.gameEnternce = {}

--游戏场景配置信息
local gameBaseStartConfigPath = {
    
    --龙岩麻将(默认启动项)
    [g_gameConstant.GAME_MJ] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.GameBase",
        gameLogPath  = "newgold.MatchGames.PDK.GameLog",
        initGameBaseFunc = function ( ... )
            -- body
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },

    --跑得快
    [g_gameConstant.GAME_PDK] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.LYPDK.LYPDKGameBase",
        gameLogPath  = "newgold.MatchGames.PDK.LYPDK.LYPDKGameLog",
        initGameBaseFunc = function ( ... )
            -- body
            local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config");
            if config then
                config.init_config();
            end
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },

    [g_gameConstant.GAME_SANFU] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.LYPDK.SANFUGameBase",
        gameLogPath  = "newgold.MatchGames.PDK.LYPDK.SANFUGameLog",
        initGameBaseFunc = function ( ... )
            -- body
            local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config");
            if config then
                config.init_config();
            end
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },


    [g_gameConstant.GAME_GUANDAN] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.LYPDK.GUANDANGameBase",
        gameLogPath  = "newgold.MatchGames.PDK.LYPDK.GUANDANGameLog",
        initGameBaseFunc = function ( ... )
            -- body
            local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config");
            if config then
                config.init_config();
            end
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },

    [g_gameConstant.GAME_TUOSANZI] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.LYPDK.TUOSANZIGameBase",
        gameLogPath  = "newgold.MatchGames.PDK.LYPDK.TUOSANZIGameLog",
        initGameBaseFunc = function ( ... )
            -- body
            local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config");
            if config then
                config.init_config();
            end
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },

    [g_gameConstant.GAME_DDZ] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.LYPDK.ddz.DDZGameBase",
        gameLogPath  = "newgold.MatchGames.PDK.LYPDK.ddz.DDZGameLog",
        initGameBaseFunc = function ( ... )
            -- body
            local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config");
            if config then
                config.init_config();
            end
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },

    [g_gameConstant.GAME_LIANGFU] = 
    {
        gameBasePath = "newgold.MatchGames.PDK.LYPDK.LIANGFUGameBase",
        gameLogPath  = "newgold.MatchGames.PDK.LYPDK.SANFUGameLog",
        initGameBaseFunc = function ( ... )
            -- body
            local config = require("newgold.MatchGames.PDK.LYPDK.LYPDK_config");
            if config then
                config.init_config();
            end
            g_UserDataTable.gameLanguageCfgIndex = 1
        end
    },
}

--游戏回放接口
--wanFa: 玩法类型
function gameEnternce:enterGameRecord( playWay , wanfa2 )

    if not playWay then
        return nil;
    end

    local enterTypeCode = g_gameConstant.GAME_MJ
   
    if g_gameGlobal:isDDZ(playWay  , wanfa2) then  
        enterTypeCode = g_gameConstant.GAME_DDZ
    elseif g_gameGlobal:isTuosanzi(playWay  , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_TUOSANZI
    elseif g_gameGlobal:isPdk(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_PDK
    elseif g_gameGlobal:isSanfu(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_SANFU
    elseif g_gameGlobal:isGuandan(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_GUANDAN
    elseif g_gameGlobal:isLiangfu(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_LIANGFU
    end

    g_UserDataTable.m_enterType = enterTypeCode

    local gameConfig = gameBaseStartConfigPath[enterTypeCode]; --游戏数据配置信息
    if not gameConfig then gameConfig = gameBaseStartConfigPath.defaultConfig; end
    gameConfig.initGameBaseFunc()
    return require(gameConfig.gameLogPath):create();
end

--游戏接口
function gameEnternce:enterGame(msg)
    if not msg then
        return nil;
    end

    local playWay = msg.newPlayWay
    local wanfa2 = msg.unused0

    local enterTypeCode = g_gameConstant.GAME_MJ
    if g_gameGlobal:isDDZ(playWay , wanfa2) then  
        enterTypeCode = g_gameConstant.GAME_DDZ
    elseif g_gameGlobal:isTuosanzi(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_TUOSANZI
    elseif g_gameGlobal:isPdk(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_PDK
    elseif g_gameGlobal:isSanfu(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_SANFU
    elseif g_gameGlobal:isGuandan(playWay , wanfa2) then 
        enterTypeCode = g_gameConstant.GAME_GUANDAN
    elseif g_gameGlobal:isLiangfu(playWay, wanfa2) then
        enterTypeCode = g_gameConstant.GAME_LIANGFU
    end

    g_UserDataTable.m_enterType = enterTypeCode
    local gameConfig = gameBaseStartConfigPath[enterTypeCode]; --游戏数据配置信息
    gameConfig.initGameBaseFunc()
    return require(gameConfig.gameBasePath):create();
end

return gameEnternce�