local MarkerModule = CF.gameClass("PlayerModule", "game.BaseCardGame.Modules.Marker.Module")

 function MarkerModule:isOpenMarker()
     return false
 end

 function MarkerModule:onPropDataChange(event)
    -- self:dispatchEvent({name = self.EVENT_MARKER_LEFTTIME_CHANGE})
    -- local playerPropData = CF.game:getModule("PropUse"):getPlayerProps()
    -- for _, value in pairs(playerPropData) do
    --     if value.id == KW_ITEM_ID_JIPAIQI then
    --         self.isUseMarkrtFirst = true
    --         CF.TipTool.showToast("记牌器使用中...", 2)
    --         CF.msgManager:sendRequestUseProps(KW_ITEM_ID_JIPAIQI, value.count)
    --     end
    -- end
    if self:isOpenMarker() then
        self:requestSysTime()
    end
end

return MarkerModule