local SetModule = CF.gameClass("SetModule", CF.ModuleBase)

SetModule.EVENT_PLAYER_CHANGESEAT = "EVENT_PLAYER_CHANGESEAT"

SetModule.ChangeTabSource = {
    Setting = 1,    -- 设置
    CenterBtn = 2,  -- 牌桌
    WinLost = 3,    -- 小局结束
}

SetModule.ChangeTabString = {
    "设置菜单",
    "牌桌",
    "小局结束",
}

--解散房间
function SetModule:doDismiss()
    local curPlayCount = CF.roomData:getPlayCount()
    local hostSeat = CF.roomData:getHostSeat()
    local selfSeat = CF.roomData:getSelfSeat()
    
    if CF.roomData:getIsSeer() then
        CF.game:getModule("WatchGame"):onExitWatch()
        CF.game:leaveGame()
        return
    end
    if curPlayCount > 0 then
        local tipLayer = CF.TipTool.showPopLayer("LeaveRoomLayer", {CF.LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_DISMISS})
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.DISMISS, function ()
            self:reqDismiss()
            --CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_DISMISS)
            local tmpData = {}
            tmpData.userid = CF.selfPlayerData:getNumberID()
            tmpData.numbers = CF.roomData:getChairs()
            tmpData.isteahouse = CF.teaHouseManager:isInTeaHouse()
            CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_ROOM_DISMISS, tmpData)
            XH.lobby:getModule("Sxvip.FriendInfo"):onDismiss()
        end)
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.BACK, function ()
            CF.game:leaveGame(true)
        end)
    else
        --游戏未开始
        if hostSeat == selfSeat then
            local tipLayer = CF.TipTool.showPopLayer("LeaveRoomLayer", {CF.LeaveRoomLayer.ENUM_LAYER_TYPE.BOXROOM_OWNER_DISMISS})
            tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.DISMISS, function ()
                CF.game:getModule("Dismiss"):sendRequestDismiss()
                --CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.BOX_ROOM_DISMISS)
                local tmpData = {}
                tmpData.userid = CF.selfPlayerData:getNumberID()
                tmpData.numbers = CF.roomData:getChairs()
                tmpData.isteahouse = CF.teaHouseManager:isInTeaHouse()
                CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_ROOM_DISMISS, tmpData)
            end)
            tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.BACK, function ()
                CF.game:leaveGame(true)
            end)
        else
            local tipLayer = CF.TipTool.showPopLayer("LeaveRoomLayer", {CF.LeaveRoomLayer.ENUM_LAYER_TYPE.PLAYER_LEAVE})
            tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.LEAVE, function ()
                CF.game:leaveGame()
            end)
            tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.BACK, function ()
                CF.game:leaveGame(true)
            end)
        end
    end
end

function SetModule:reqDismiss()
    
end

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
    if selfPlayer:getStateEx() == selfPlayer.USER_STATEEX.psPlaying then         
        local tipLayer = CF.TipTool.showPopLayer("LeaveRoomLayer", {CF.LeaveRoomLayer.ENUM_LAYER_TYPE.GOLGROOM_LEAVE})
        tipLayer:setButtonMoreEvent(tipLayer.ENUM_BUTTON_TYPE.BACK, function ()
            if CF.isInGameScene() then
                if CF.roomData:is50Match() then 
                    CF.msgManager:sendPlayerLeaveTemporarily()
                end
                CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.GOLDGAME_TIPS_GO_LOBBY)
                XH.lobby:getModule("AutoPop"):onBackToLobby("goldleave")
                CF.game:leaveGame()
            end
        end)
    else 
        CF.throwDataManager:recordButtonClick(CF.ThrowDataDefine.ButtonEnumTable.GOLDGAME_SETTING_GO_LOBBY)
        if CF.roomData:is50Match() then 
            CF.msgManager:sendPlayerLeave50()
        end
        CF.game:leaveGame()
    end
end

function SetModule:doChangeTable(source)
    local selfPlayer = CF.roomData:getSelfPlayerData()
    if selfPlayer then
        if selfPlayer:getStateEx() == selfPlayer.USER_STATEEX.psPlaying then 
            -- 提示游戏中不能换桌
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText("游戏中不能换桌！")
        else 
            if CF.roomData:isGoldRoom() then
                CF.getLobbyModule("ToponAct"):closeToponGoldDrawView()
            end
            CF.roomData:clearAllPlayerData(true)
            CF.roomData:clearPlayerHeartTime()

            self:dispatchEvent({name = self.EVENT_PLAYER_CHANGESEAT})

            CF.msgManager:sendPlayerAct(CF.GameDefine.ENUM_PLAYER_ACT.CHANGESEAT, CF.roomData:getRoomMode())
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
    end
end

return SetModule