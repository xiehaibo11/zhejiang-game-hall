local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:getListPlayerCount()
    if CF.game:getModule("RoomInfo"):isDynamicTable() then
        return CF.game:getModule("GameLayer"):getDynamicTablePlayerCnt()
    end
    return WinLostView.super.getListPlayerCount(self)
end

return WinLostViewo