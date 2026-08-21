local PlayerView = CF.gameClass("PlayerView", CF.gameScriptRootPath .. ".GameBase.Modules.Player.View")

function PlayerView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/PlayerLayer.csb"
end

function PlayerView:showCaiShenIcon()
end

function PlayerView:showReadyIcon(localSeat, bShow)
    PlayerView.super.showReadyIcon(self, localSeat, false)
end

return PlayerView
�