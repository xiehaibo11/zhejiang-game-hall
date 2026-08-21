local SetModule = CF.gameClass("SetModule", CF.ModuleBase)

function SetModule:doReturnToLobby()
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement", false)
    cc.UserDefault:getInstance():setBoolForKey("isNeedHideAdvertisement1", false)
    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer == nil then
        if CF.roomData:is50Match() then
            CF.msgManager:sendPlayerLeave50()
        end
        CF.game:leaveGame()
        return
    end

    CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.GOLDGAME_SETTING_GO_LOBBY)
    if CF.roomData:is50Match() then
        CF.msgManager:sendPlayerLeave50()
    end
    CF.game:leaveGame()
end

return SetModule
�