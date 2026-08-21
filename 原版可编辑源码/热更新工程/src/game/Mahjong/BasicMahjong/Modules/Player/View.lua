local PlayerView = CF.gameClass("PlayerView", "game.GameBase.Modules.Player.View")

function PlayerView:ctor(param)
    PlayerView.super.ctor(self)
end

function PlayerView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/PlayerLayer.csb"
end

function PlayerView:getAdaptationConfig()
    local config = PlayerView.super.getAdaptationConfig(self)
    config[#config + 1] = {node = self._headPos2, bRight = false, bHalf = false}
    config[#config + 1] = {node = self._headPos4, bRight = true, bHalf = true}
    return config
end

function PlayerView:getProxyEvents()
    local eventTable = PlayerView.super.getProxyEvents(self)
    return eventTable
end

--入场动画
function PlayerView:onEnterAniPropChanged(event)
    local data = event.msg.data or {}
    local numid = data.numid
    local propsid = data.propsid
    local playerData = CF.roomData:getPlayerDataNumberID(numid)
    if playerData then
        local localSeat = CF.roomData:seatToLocal(playerData:getSeat())
        local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
        local movePos = nil
        if not tolua.isnull(self["_headPos"..localSeat]) then
            movePos = self._propAniPanel:convertToNodeSpace(self["_headPos"..localSeat]:getWorldPosition())
        end
        GameBagUILogic.showEnterAni(self._propAniPanel, localSeat, propsid, nil, nil, movePos)
    end
end

return PlayerView
