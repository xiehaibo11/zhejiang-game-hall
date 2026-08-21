NG.GAME = {}

local CommonRootPath = "newgold.GoldGames.GoldGameCommon."

local initBase = function ()
    NG.GAME.ModuleBase = require(CommonRootPath .. "Base.ModuleBase")
end

local initDefine = function ()
    
end

local initConfig = function ()
    NG.GAME.GameSub = require(CommonRootPath .. "Config.GoldGameSub")
end

local initManager = function ()
    NG.GAME.requireManager = require(CommonRootPath .. "Manager.RequireManager").new()
end

initBase()
initDefine()
initConfig()
initManager()

NG.GAME.gameRequire = function(fileName)
    return NG.GAME.requireManager:require(fileName)
end

NG.GAME.gameClass = function(className, baseClass)
    if baseClass == nil or type(baseClass) ~= "string" then
        return class(className, baseClass)
    end
    if type(baseClass) == "string" and NG.FileTool.isFileExist(baseClass) then
        return class(className, require(baseClass))
    end
end