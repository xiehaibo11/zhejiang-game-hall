local ChangeLevelView = CF.gameClass("ChangeLevelView", "game.GameBase.Modules.ChangeLevel.View")

function ChangeLevelView:onGoldChangeClicked(send, eventType)
    local level = cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. CF.areaData:getLobbyID())
    local realLevel = level
    level = level % 10
    -- 判断是否属于50房间
    local confID = CF.userDefault:getValue(CF.userDefault.KEY_ID.LAST_JOIN_GOLD_GAME_ID)
    local goldRoomInfo = CF.goldConfigManager:getGoldRoomInfoByIndex(confID)
    local preArea, afterArea
    if goldRoomInfo.roomLevelInfos and goldRoomInfo.roomLevelInfos[level] and goldRoomInfo.roomLevelInfos[level].area then
        preArea = goldRoomInfo.roomLevelInfos[level].area
    end
    if goldRoomInfo.roomLevelInfos and goldRoomInfo.roomLevelInfos[level + 1] and goldRoomInfo.roomLevelInfos[level + 1].area then
        afterArea = goldRoomInfo.roomLevelInfos[level + 1].area
    end
    if preArea == nil and afterArea == nil then
        ChangeLevelView.super.onGoldChangeClicked(self, send, eventType)
        return
    elseif preArea == nil and afterArea == "GameTea" then
        CF.TipTool.showLoading()
        CF.game:getModule("ChangeLevel"):reqChangeLevelGT(goldRoomInfo.roomInfo.LeisureID, realLevel + 1, goldRoomInfo.roomInfo.SrsGroupId[level + 1]) 
    else
        CF.goldManager:setChangeLevelType(CF.goldManager.ENUM_CHANGE_TYPE.SIMPLE, realLevel + 1)
        local ReqLeaveRoomGT = require("lobby.Req.Room.ReqLeaveRoomGT") 
        local reqLeaveRoomGold = ReqLeaveRoomGT:new()
        reqLeaveRoomGold:start(CF.roomData:getAppID(), CF.roomData:getSRSGroupID(), 10)
    end

    if CF.game:getModule("WinLost").hideGoldView then
        CF.game:getModule("WinLost"):hideGoldView()
    else
        self:closeView()
    end
end

return ChangeLevelViewW