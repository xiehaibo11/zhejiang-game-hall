local GameWinLostLayer = CF.gameClass("GameWinLostLayer", CF.ViewBase)

function GameWinLostLayer:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/GameWinLost.csb"
end

function GameWinLostLayer:getBindingInfo()
    return {}
end

function GameWinLostLayer:getProxyEvents()
    return {}
end

function GameWinLostLayer:ctor(param)
    param = param or {}
    GameWinLostLayer.super.ctor(self, param)
end

function GameWinLostLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 46)
end

return GameWinLostLayer
Z