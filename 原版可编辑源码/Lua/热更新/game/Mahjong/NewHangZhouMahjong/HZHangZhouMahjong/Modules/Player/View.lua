local PlayerView = CF.gameClass("PlayerView", "game.Mahjong.BasicMahjong.Modules.Player.View")


function PlayerView:onPlayerListChanged(event)
    -- if not event.msg then
    PlayerView.super.onPlayerListChanged(self, event)
    -- else
    --     local seatId = event.msg.seatId
    --     local oldLocalSeat = event.msg.oldLocal
    --     local playerData = CF.roomData:getPlayerDataBySeatId(seatId)
    --     local localSeat = CF.roomData:seatToLocal(seatId)

    --     -- 移除原来位置
    --     if oldLocalSeat and self._playerHeads and self._playerHeads[oldLocalSeat] then
    --         self._playerHeads[oldLocalSeat]:removeSelf()
    --         self._playerHeads[oldLocalSeat] = nil
    --     end

    --     if self._playerHeads and self._playerHeads[localSeat] then
    --         self._playerHeads[localSeat]:removeSelf()
    --         self._playerHeads[localSeat] = nil
    --     end

    --     if playerData then
    --         if localSeat == -1 then
    --             return
    --         end
    --         local playerHead = self:createPlayerHead(seatId)
    --         self["_head_panel_" .. localSeat]:addChild(playerHead)
    --         self._playerHeads[localSeat] = playerHead
    --         self:updateReadyState(seatId)

    --         if localSeat == CF.GameDefine.LOCAL_SEAT.BOTTOM then
    --             self:showCaiShenIcon()
    --         end
    --     end
    -- end
end

return PlayerView