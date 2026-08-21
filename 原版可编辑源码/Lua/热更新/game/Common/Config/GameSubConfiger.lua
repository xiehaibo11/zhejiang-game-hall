local GameSubConfigerBase = require("app.Config.Parse.GameSubConfiger")
local GameSubConfiger = class("GameSubConfiger", GameSubConfigerBase)

function GameSubConfiger:setGameID(gameID)
    self._gameID = gameID
end

function GameSubConfiger:getGoldToBoxGameId(gameid)
    -- gameid = gameid or self._gameID 
    return GameSubConfiger.super.getGoldToBoxGameId(self, gameid)
end

function GameSubConfiger:getShufflePropQuanID(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getShufflePropQuanID(self, gameid)
end

function GameSubConfiger:getGameSpeakSendTypeByGameId(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getGameSpeakSendTypeByGameId(self, gameid)
end

function GameSubConfiger:getShufflePropPic(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getShufflePropPic(self, gameid)
end

function GameSubConfiger:getShufflePropID(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getShufflePropID(self, gameid)
end

function GameSubConfiger:getShufflePropCount(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getShufflePropCount(self, gameid)
end

function GameSubConfiger:getIsOpenShuffle(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getIsOpenShuffle(self, gameid)
end

function GameSubConfiger:getShuffleType(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getShuffleType(self, gameid)
end

function GameSubConfiger:getGameFaceByGameId(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getGameFaceByGameId(self, gameid)
end

function GameSubConfiger:getGameNameByGameId(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.getGameNameByGameId(self, gameid)
end

function GameSubConfiger:isDoubleKou(gameid)
    gameid = gameid or self._gameID 
    return GameSubConfiger.super.isDoubleKou(self, gameid)
end

return GameSubConfiger