local PlayerModule = CF.gameClass("PlayerModule", "game.Mahjong.BasicMahjong.Modules.Player.Module")

-- 玩家离开协议
function PlayerModule:onMsgPlayerLeave(msgData)
    local playerData = CF.roomData:getPlayerDataByBrandIDAndNumberID(msgData.nBrandID, msgData.nNumberID)
    if not playerData then
        return
    end
    if playerData:isSeeing() then
        return
    end
    PlayerModule.super.onMsgPlayerLeave(self, msgData)
    CF.game:getModule("GameLayer"):clearAllTableInfo()
end

return PlayerModule