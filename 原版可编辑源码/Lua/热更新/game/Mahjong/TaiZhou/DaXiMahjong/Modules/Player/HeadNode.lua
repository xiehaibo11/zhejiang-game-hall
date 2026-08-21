local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:initChildren()
    PlayerHeadNode.super.initChildren(self)
    self:showMaiDiFlag()
    self:showNiuFlag()
end

return PlayerHeadNode