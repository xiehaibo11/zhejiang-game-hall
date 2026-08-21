local OldGoldModule = require(XH.goldLobbyRootPath .. ".Modules.Gold.Module")
local LogicModule = class("LogicModule", OldGoldModule)
local ReqPlayerPlace33And50 = require(XH.goldLobbyRootPath .. ".Req.Room.ReqPlayerPlace33And50")

function LogicModule:enterGoldGame(gameid, extData)
    -- 注意
    if gameid and gameid == 42038 then
        gameid = 30116
    end
    local confID = XH.goldConfigManager:getConfIDByGameID(gameid)
    if confID == nil then
        print("[LogicModule] enterGoldGame confID is nil")
        return
    end

    if XH.playerData:checkNewRealName(gameid) ~= 0 then
        print("[LogicModule] enterGoldGame checkNewRealName is not 0")
        return
    end

    local roomConfig = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
    self._roomFlag = self:getSuitableRoomLevel(roomConfig, confID)
    XH.lobby:getModule("Gold"):joinGoldRoomQuick({LeisureID = confID, roomFlag = self._roomFlag})
end

function LogicModule:enterGoldGameByLID(confID, extData)
    
    local roomConfig = XH.goldConfigManager:getGoldRoomInfoByIndex(confID)
    -- 注意
    if not roomConfig or  XH.playerData:checkNewRealName(roomConfig.GameID) ~= 0 then
        print("[LogicModule] enterGoldGame checkNewRealName is not 0")
        return
    end
    self._roomFlag = self:getSuitableRoomLevel(roomConfig, confID)
    XH.lobby:getModule("Gold"):joinGoldRoomQuick({LeisureID = confID, roomFlag = self._roomFlag})
end

function LogicModule:getSuitableRoomLevel(roomConfig, confID)
    if not roomConfig or next(roomConfig.roomInfo) == nil then
        return
    end
    local playerSR = XH.playerData:getSR() or 0
    local levelRoom = roomConfig.roomLevelInfos
    for j = #levelRoom, 1, -1 do
        local roominfo = levelRoom[j]
        if (playerSR >= roominfo.minrich) and ((playerSR <= roominfo.maxrich) or (roominfo.maxrich == -1)) then
            print("[LogicModule] getSuitableRoomLevel ", roominfo.roomnameflag)
            return roominfo.roomnameflag
        end
    end
    print("[LogicModule] getSuitableRoomLevel ", roomConfig.roomInfo.roomFlag[1])
    return roomConfig.roomInfo.roomFlag[1]
end

return LogicModule
�