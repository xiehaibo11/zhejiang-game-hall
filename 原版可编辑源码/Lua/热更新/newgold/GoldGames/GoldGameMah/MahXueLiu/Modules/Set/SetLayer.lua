local SetLayer = NG.GAME.gameClass("RuleLayer", "newgold.GoldGames.GoldGameBase.Modules.Set.SetLayer")

function SetLayer:ctor(isMah)
    SetLayer.super.ctor(self, isMah)
    self._langNode:setVisible(false)
end

function SetLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/Basic/SetLayer.csb"
end

return SetLayer
