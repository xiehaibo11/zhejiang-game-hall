local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")
local UIMahJokerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahJokerArea")

local KW_JOKER_MAH = "KW_JOKER_MAH"

function UIMahLayer:setOpenMahs(openMahs)
    if not self._KW_ADAPT_MAH_5 then
        return
    end
    openMahs = openMahs or {}
    local openMahsNode = self._KW_ADAPT_MAH_5:getChildByName(KW_JOKER_MAH)
    if not openMahsNode then
        return
    end
    local mingMah = self:getGameData():getMingMah()
	self:clearOpenMahs()
    if not self._openMahs then
        self._openMahs = UIMahJokerArea.new()
        self._openMahs:init(openMahsNode)
        self._openMahs:retain() -- 因为UIMahJokerArea没有添加到场景中，会自动释放，所以需要添加引用
    end
    self._openMahs:setJokerMahs(openMahs,mingMah)
end

return UIMahLayer�