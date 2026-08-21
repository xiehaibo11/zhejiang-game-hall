

local UIMahWallArea3D = CF.gameClass("UIMah3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.View3D.UIMahWallArea3D")

function UIMahWallArea3D:setStartTakeData(startTakeData, openMahsPos)
    if not startTakeData or not startTakeData.startLocalSeat or not startTakeData.startIndex then
        return
    end
    self._startLocalSeat = startTakeData.startLocalSeat
    self._startIndex = startTakeData.startIndex
    while true do
        local tempWallCount = self._mahCountConfig[self._startLocalSeat]
        if self._startIndex <= tempWallCount then
            break
        end
        self._startIndex = self._startIndex - tempWallCount
        self._startLocalSeat = self:_getNextLocalSeat(self._startLocalSeat)
    end
    
    self._openMahsPos = openMahsPos or {}
    self:_updateOpenMahs()

    self:_checkDelTempData()
end

return UIMahWallArea3D