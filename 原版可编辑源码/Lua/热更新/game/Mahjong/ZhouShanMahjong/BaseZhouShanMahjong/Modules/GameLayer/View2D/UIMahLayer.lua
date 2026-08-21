local UIMahFlowerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahFlowerArea")

local UIMahLayer = CF.gameClass("UIMahLayer2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")
local UIMahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

local NodeNameArr = {
    HandMah = "KW_HAND_MAH",
    OutMah = "KW_OUT_MAH",
    HandMah17 = "KW_HAND_MAH_17",
    OutMah2 = "KW_OUT_MAH_2",
    ShowOutMah = "KW_PANEL_SHOW_OUT_MAH_",
    FlowerMah = "KW_FLOWER"
}

function UIMahLayer:_getFlowerArea(localSeat)
    if not UIMahLogic.checkLocalSeat(localSeat) then
        return nil
    end
    if not self._flowerAreas[localSeat] then
        local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
        local newFlowerMahArea = UIMahFlowerArea.new(localSeat, config)
        if self["_KW_ADAPT_MAH_"..localSeat] then
            local handAreaNode = self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr.FlowerMah)
            if handAreaNode then
                handAreaNode:addChild(newFlowerMahArea)
            end
        end
        self._flowerAreas[localSeat] = newFlowerMahArea
        self:_updateBottomFlowerAreaPosition()
    end
    return self._flowerAreas[localSeat]
end

return UIMahLayer