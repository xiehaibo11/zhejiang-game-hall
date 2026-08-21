local UIMahLayer3D = CF.gameClass("UIMahLayer3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMahLayer3D")

-- 牌墙显示的牌墩数 key为localSeat
function UIMahLayer3D:_getWallMahsCountConfig()
    return {17,17,17,17}
end

return UIMahLayer3D
