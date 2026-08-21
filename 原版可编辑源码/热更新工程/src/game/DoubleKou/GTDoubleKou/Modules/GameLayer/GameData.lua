local GameData = CF.gameClass("GameData", "game.DoubleKou.BaseDoubleKou.Modules.GameLayer.GameData")

function GameData:setGongXianFen(seat, gongXianFen, iGong)
    local oldScore = self._gongXian[seat] or 0
    local changedGong = gongXianFen - oldScore
    local allChangeGong = {}
    if iGong and #iGong > 0 then
        if changedGong <= 0 then
            return
        end
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            allChangeGong[i] = 0
            local old = self._gongXian[i] or 0
            self._gongXian[i] = iGong[i]
            if seat ~= i then
                allChangeGong[i] = iGong[i] - old
                if CF.roomData:isNewUI() then
                    self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED_NEW, msg = {seat = i, changedGong = allChangeGong[i]}})
                else
                    self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED, msg = {seat = i, changedGong = allChangeGong[i]}})
                end
            end
        end
        if CF.roomData:isNewUI() then
            local localSeat = CF.roomData:seatToLocal(seat)
            if self._showWinOrder[localSeat] then
                CF.SysTool.performWithDelayGlobal(
                    function()
                        self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED_NEW, msg = {seat = seat, changedGong = changedGong, allChangeGong = allChangeGong}})
                    end,
                0.4)
            else
                self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED_NEW, msg = {seat = seat, changedGong = changedGong, allChangeGong = allChangeGong}})
            end
        else
            self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED, msg = {seat = seat, changedGong = changedGong, allChangeGong = allChangeGong}})
        end
        return
    end
    self._gongXian[seat] = gongXianFen
    if CF.roomData:isNewUI() then
        self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED_NEW, msg = {seat = seat, changedGong = changedGong}})
    else
        self:dispatchEvent( {name = self.EVENT_GONGXIAN_CHANGED, msg = {seat = seat, changedGong = changedGong}})
    end
end

return GameData