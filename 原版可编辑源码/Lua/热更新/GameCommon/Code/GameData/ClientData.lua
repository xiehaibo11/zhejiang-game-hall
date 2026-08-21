local ClientData = class("ClientData")
local CURRENT_MOUDLE_NAME = ...

function ClientData:ctor()
    self._sendMobileSignalMsgTime = 0
    
    self._playCount = 0
    self._maxplayCount = 0
    self._playerHeartTime = {}
    self._gameType = 0
    self._baseScore = 0
    self._gameStep = 0 
    
    
    self._openAMapConfig = false
end
 
function ClientData:initEveryTime()
    
end

--高德地图配置是否需要打开
function ClientData:setAMapOpen(bhaveAMap)
    if bhaveAMap ~= nil then
        self._openAMapConfig = bhaveAMap
    end
end

return ClientData