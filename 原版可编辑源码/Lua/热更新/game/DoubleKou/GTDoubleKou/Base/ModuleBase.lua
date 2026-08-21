local ModuleBase =  CF.gameClass("ModuleBase", "game.Common.Base.ModuleBase")
function ModuleBase:initServerToClientMessage()
    self:initSubXYDealList()
    if not self._subXYDealList or not next(self._subXYDealList) then
        return
    end
    local moduleProxy = self:getModuleProxy(CF.netEngine)
    moduleProxy:addEventListener(CF.GameProtocolGT.ServerToClientMessage.event_key, handler(self, self.onServerToClientMessage))
end


return ModuleBase