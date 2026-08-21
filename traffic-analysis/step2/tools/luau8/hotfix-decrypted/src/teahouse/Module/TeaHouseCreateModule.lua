---@class TeaHouseCreateModule : Module
local TeaHouseCreateModule = class("TeaHouseCreateModule", TeaHouse.Module)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")

TeaHouseCreateModule.KW_BASE_SCORE_NAME_TABLE = { "basescore", "baseScore", "BaseScore", "Basescore", "base", "Base" } --所有区底分的字段名列表

TeaHouseCreateModule.EVENT_UPDATE_ACTIVITYICON = "EVENT_UPDATE_ACTIVITYICON"  --刷新活动角标

function TeaHouseCreateModule:onCreate()
    TeaHouseCreateModule.super.onCreate(self)
end

function TeaHouseCreateModule:onDestroy()
    TeaHouseCreateModule.super.onDestroy(self)
end

--请求系统时间
function TeaHouseCreateModule:reqSysTime()
    local TaskDefine = require("app.Define.TaskDefine")
    local reqTaskPercent = require("app.Req.Task.ReqTaskPercent")
    local TaskPercent = reqTaskPercent:new()
    TaskPercent:addReqCallBack(self, self.onReqSysTimeCallBack)
    local srsGroupID = TeaHouse.BridgeData.getSRSGroupID()
    TaskPercent:start(TeaHouse.BridgeData.getNumberID(), 0, 120, TaskDefine.KW_SYSTEM_TIME, srsGroupID, 10)
end

function TeaHouseCreateModule:onReqSysTimeCallBack(req, ctype, data)
    if ctype == TeaHouse.Req.TYPE.SUCCESS then
        local timestamp = json.decode(data.acData).time
        if timestamp then
            self._timeStamp = timestamp
            local startTime, endTime = TeaHouse.BridgeData.getActivityTime()
            local leftTime = endTime - self._timeStamp
            self:dispatchEvent({ name = self.EVENT_UPDATE_ACTIVITYICON, msg = { info = leftTime } })
        end
    end
end

function TeaHouseCreateModule:createPlayMode(params, obj, callBackFunc, nAutoCreate, nGetAward)
    if not params or not type(params) == "table" then return end
    if not params.gameRule or params.gameRule == "" then return end
    if not params.gameID or params.gameID == 0 then return end
    if not type(params.playCounts) == "table" or not type(params.playerCounts) == "table" then return end
    if not params.zhRule or not params.tableColor or not params.playModeID then return end
    local data = {}
    local gameNameList = TeaHouse.BridgeData.getGameNameList()
    local boxName = gameNameList[params.gameID]
    data.gameid = params.gameID
    if params.gameID == MutiVersionGameConfig.MutiVersionGameID.JiaXingMahjong or params.gameID == MutiVersionGameConfig.MutiVersionGameID.TaiPaoMahjong then
        local tmpRuleStr = loadstring("return {" .. params.gameRule .. "}")()
        if tmpRuleStr["gamedID"] then
            data.gameid = tonumber(tmpRuleStr["gamedID"])
            boxName = gameNameList[data.gameid]
        end
    end
    --设置底分
    local luaString = "return {" .. params.gameRule .. "}"
    local ruleTable = loadstring(luaString)()
    data.base = 1
    for _, baseScoreName in pairs(self.KW_BASE_SCORE_NAME_TABLE) do
        if ruleTable[baseScoreName] then
            data.base = tonumber(ruleTable[baseScoreName])
        end
    end
    data.cont = params.playCounts
    data.type = 0
    local lobbyID = TeaHouse.BridgeData.getLobbyID()
    if tonumber(lobbyID) == 900003 then
        data.type = (data.cont[1] == 10000 or data.cont[1] == 999) and 1 or 0
    end
    --嵊州麻将特判
    if tonumber(lobbyID) == 900007 then
        for i = 1, #data.cont do
            if data.cont[i] > 10000 then 
                data.cont[i] = (data.cont[i] % 10000) * 100
            end
        end
    end
    data.nPlayerSize = params.playerCounts
    data.name = boxName
    data.data = string.format("%sZhRule='%s';TabeleColor=%s;", params.gameRule, params.zhRule, params.tableColor)
    data.tableCnt = 1
    data.bIsCountLock = params.playCountsLock
    data.bIsPlayerLock = params.playerCountsLock
    if TeaHouse.manager.teahouseData:getTeaNumber() then
        TeaHouse.manager.teahouseSetup:setTeaNumber(TeaHouse.manager.teahouseData:getTeaNumber())
    end
    -- 存储最后创建的玩法规则
    if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()] ~= nil and TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].GAMEID == data.gameid and TeaHouse.checkIsPromoteAct() then
        if TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].limitNum ~= nil then
            local isFit = true
            for i = 1, #data.nPlayerSize do
                if data.nPlayerSize[i] ~= TeaHouse.PromoteConfig[XH.areaData:getLobbyID()].limitNum then
                    isFit = false
                end
            end
            if isFit then
                local lastPlayMode = json.encode(data)
                XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PROMOTE_LAST_PLAYMODE, lastPlayMode)
            end
        else
            local lastPlayMode = json.encode(data)
            XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PROMOTE_LAST_PLAYMODE, lastPlayMode)
        end
    end
    TeaHouse.manager.teahouseSetup:setPlayModeInfo(data, params.playModeID, nil, obj, callBackFunc, nAutoCreate, nGetAward)
end

return TeaHouseCreateModule>