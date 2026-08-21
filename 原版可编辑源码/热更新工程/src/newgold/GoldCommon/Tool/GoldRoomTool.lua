local GoldRoomTool = {}
local GoldRoomsDefine = require("newgold.GoldCommon.Define.GoldRoomsDefine")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
local GoldCommonDefine = require("newgold.GoldCommon.Define.GoldCommonDefine")
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
-- 业务相关逻辑

-- 通过appid获取room信息
function GoldRoomTool.getRoomInfoByAppId(appid)
    local rooms = NG.goldLobby:getModule("GoldCommon"):getRoomInfos()
    for i = 1, #rooms do
        local roomInfos = rooms[i]
        for j = 1, #roomInfos.LEVEL do
            if roomInfos.LEVEL[j].appIds ~= nil then
                for z = 1, #roomInfos.LEVEL[j].appIds do
                    if roomInfos.LEVEL[j].appIds[z] == appid then
                        return roomInfos.LEVEL[j]
                    end
                end
            elseif roomInfos.LEVEL[j].appId == appid then
                return roomInfos.LEVEL[j]
            end
        end
    end
    return nil
end

-- 通过appid获取对应的roomid
function GoldRoomTool.getRoomIdByAppId(appid)
    local room = GoldRoomTool.getRoomInfoByAppId(appid)
    if room then
        if room.appIds ~= nil then
            for z = 1, #room.appIds do
                if room.appIds[z] == appid then
                    return room.roomIds[z]
                end
            end
        elseif room.appId == appid then
            return room.roomId
        end
    end
    return nil
end

-- 获取当前场次信息
function GoldRoomTool.getGoldLevelInfo()
    local room = GoldRoomTool.getRoomInfoByAppId(GoldPlayerData.AppId)
    if room then
        return room
    end
    return nil
end

-- 获取当前场次信息
function GoldRoomTool.getGoldLevelInfo50()
    for i = 1, #GoldRoomsDefine.ROOMS do
        local roomInfos = GoldRoomsDefine.ROOMS[i]
        for j = 1, #roomInfos.LEVEL do
            if NG.goldGame.gameID == roomInfos.GAMEID and roomInfos.LEVEL[j].level == GoldPlayerData.Session_id then
                return roomInfos.LEVEL[j]
            end
        end
    end
    return nil
end

-- 判断是否符合升降场（找到符合场次，与当前场次对比）
function GoldRoomTool.isNeedChangeLevel(gameid)
    if gameid == nil then
        gameid = GoldAreaConfig.LZDDZ
    end
    local sr = GoldPlayerData.JoyBean -- GoldPlayerData.JoyBean -- 当前金额
    local appid = GoldPlayerData.AppId -- 当前场次
    local cLevels = {} -- 可加入场次
    local isMore = nil
    local lastRoomInfo = nil
    local rooms = NG.goldLobby:getModule("GoldCommon"):getRoomInfos()
    for i = 1, #rooms do
        if rooms[i].GAMEID == gameid then
            for j = 1, #rooms[i].LEVEL do
                local roomInfo = rooms[i].LEVEL[j]
                local enough = false
                if (roomInfo.maxscore ~= -1 and sr >= roomInfo.minscore and sr <= roomInfo.maxscore) or (roomInfo.maxscore == -1 and sr >= roomInfo.minscore) then
                    cLevels[#cLevels + 1] = roomInfo
                    enough = true
                end
                if appid == roomInfo.appId then
                    if enough then
                        return GoldCommonDefine.ChangeLevel.NONE
                    end
                    if roomInfo.maxscore ~= -1 then
                        isMore = sr > roomInfo.maxscore
                    else
                        isMore = false
                    end
                    lastRoomInfo = roomInfo
                end
            end
        end
    end
    if isMore then
        return GoldCommonDefine.ChangeLevel.UP, cLevels[1], lastRoomInfo
    elseif isMore == false then
        local newInfo = nil
        if #cLevels > 0 then
            newInfo = cLevels[#cLevels]
        end
        return GoldCommonDefine.ChangeLevel.DOWN, newInfo, lastRoomInfo
    end
    return GoldCommonDefine.ChangeLevel.NONE
end

function GoldRoomTool.isNeedChangeLevel50(gameid)
    if gameid == nil then
        gameid = GoldAreaConfig.MAH_BBXL
    end
    local sr = GoldPlayerData.JoyBean -- GoldPlayerData.JoyBean -- 当前金额
    local sid = GoldPlayerData.Session_id -- 当前场次
    local cLevels = {} -- 可加入场次
    local isMore = nil
    local lastRoomInfo = nil
    for i = 1, #GoldRoomsDefine.ROOMS do
        if GoldRoomsDefine.ROOMS[i].GAMEID == gameid then
            for j = 1, #GoldRoomsDefine.ROOMS[i].LEVEL do
                local roomInfo = GoldRoomsDefine.ROOMS[i].LEVEL[j]
                local enough = false
                if (roomInfo.maxscore ~= -1 and sr >= roomInfo.minscore and sr <= roomInfo.maxscore) or (roomInfo.maxscore == -1 and sr >= roomInfo.minscore) then
                    cLevels[#cLevels + 1] = roomInfo
                    enough = true
                end
                if sid == roomInfo.level then
                    if enough then
                        return GoldCommonDefine.ChangeLevel.NONE
                    end
                    if roomInfo.maxscore ~= -1 then
                        isMore = sr > roomInfo.maxscore
                    else
                        isMore = false
                    end
                    lastRoomInfo = roomInfo
                end
            end
        end
    end
    if isMore then
        return GoldCommonDefine.ChangeLevel.UP, cLevels[1], lastRoomInfo
    elseif isMore == false then
        local newInfo = nil
        if #cLevels > 0 then
            newInfo = cLevels[#cLevels]
        end
        return GoldCommonDefine.ChangeLevel.DOWN, newInfo, lastRoomInfo
    end
    return GoldCommonDefine.ChangeLevel.NONE
end
return GoldRoomTool