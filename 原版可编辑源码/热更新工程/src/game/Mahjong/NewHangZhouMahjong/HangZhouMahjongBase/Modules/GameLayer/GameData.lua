local GameData = CF.gameClass("GameData", "game.Mahjong.BasicMahjong.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._bIsBaiBanCaishen = false
    self._bIsYouCaiBiKaoXiang = false
    self._selfGpsInfo = ""
    self._selfLocalInfo = ""
end

-- 白板财神
function GameData:setIsBaiBanCaishen(bState)
    self._bIsBaiBanCaishen = bState
end

function GameData:isBaiBanCaishen()
    return self._bIsBaiBanCaishen
end

-- 有财必拷响
function GameData:setIsYouCaiBiKaoXiang(bState)
    self._bIsYouCaiBiKaoXiang = bState
end

function GameData:isYouCaiBiKaoXiang()
    return self._bIsYouCaiBiKaoXiang
end

--gpsInfo
function GameData:setSelfGPSInfo(gpsInfo)
    self._selfGpsInfo = gpsInfo
end

function GameData:getSelfGPSInfo(gpsInfo)
    return self._selfGpsInfo
end

--localInfo
function GameData:setSelfLocalInfo(localInfo)
    self._selfLocalInfo = localInfo
end

function GameData:getSelfLocalInfo()
    return self._selfLocalInfo
end

function GameData:getCaiTiState()
    
end

function GameData:setCaiTiState(bState)
    
end

return GameData