local SetModule = CF.gameClass("SetModule", "game.GameBase.Modules.Setting.Module")

function SetModule:doChangeTable(source)
    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer then
        if selfPlayer:getStateEx() == selfPlayer.USER_STATEEX.psPlaying then
            -- 提示游戏中不能换桌
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer", { CF.TipLayer.ENUM_TIP_TYPE.TIP_OK })
            tipPlayer:setText("游戏中不能换桌！")
            return
        else
            if CF.roomData:isGoldRoom() then
                CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
            end

            local GameData = CF.game:getModule("GameLayer"):getGameData()
            if not GameData then
                GameData:clearShowWinOrder()
            end
            CF.msgManager:sendPlayerAct(CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT, CF.roomData:getRoomMode())
        end
    else
        if CF.roomData:is220Model() then
            CF.msgManager:sendPlayerAct(CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT, CF.roomData:getRoomMode())
        else
            CF.msgManager:sendGameStart()
        end
    end
    -- 换桌埋点
    if CF.roomData:isGoldRoom() then
        source = source or SetModule.ChangeTabSource.Setting
        local throwData = {
            page_item_id = SetModule.ChangeTabString[source],
            block_item_id = CF.roomData:getRoomLevel(),
            game_id = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()
        }
        CF.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zyt25112602, throwData)
    end
end

return SetModule�