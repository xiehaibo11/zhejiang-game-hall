local UIMahJokerArea = CF.gameClass("UIMahJokerArea", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMahJokerArea3D")
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

function UIMahJokerArea:getMahAllConfig()
    local config = UIMahJokerArea.super.getMahAllConfig(self)
    config.mahFaceType       = CF.GameDefine.MAH_FACE_TYPE.FACE_1
    return config
end

function UIMahJokerArea:setJokerMahs(mahIDs, mingMah)
    mahIDs = mahIDs or {}
    if #mahIDs > 1 then
        self._jokerCountType = 2
    end
    local config = self:getMahAllConfig()
    for index = 1,#mahIDs do
        self._jokerMahArray[index] = UIMah.new(CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP, config)
        self._jokerMahArray[index]:setScale(self._mahNodeScale)
        self._jokerMahArray[index]:setMahValue(mahIDs[index])
        self._jokerMahArray[index]:setName(index)
        if mahIDs[index] ~= CF.GameDefine.MAH_VALUE.BACK then
            if mingMah then
                local bMingMah = false
                if mahIDs[index] == mingMah then
                    bMingMah = true
                end
                if bMingMah then
                    self._jokerMahArray[index]:showJokerIcon(false)
                else
                    self._jokerMahArray[index]:showJokerIcon(true)
                end
            else
                self._jokerMahArray[index]:showJokerIcon(true)
            end
        end
        self._rootNode:addChild(self._jokerMahArray[index])
    end
    self:arrageOutMahs()

end

return UIMahJokerArea7