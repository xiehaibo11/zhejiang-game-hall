local Promote2Module = class("Promote2Module", XH.ModuleBase)
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local PromoteConfig = require("lobby.Modules.Promote.Config")
local PromoteDefine = require("lobby.Modules.Promote.Define")
local GameSubConfiger = require("app.Config.Parse.GameSubConfiger")

Promote2Module.EVENT_NEW_PROMOTE_INFO = "EVENT_NEW_PROMOTE_INFO"
Promote2Module.EVENT_NEW_PROMOTE_TASK = "EVENT_NEW_PROMOTE_TASK"
Promote2Module.EVENT_NEW_PROMOTE_REWARD = "EVENT_NEW_PROMOTE_REWARD"
Promote2Module.EVENT_UPDATE_SETUP = "EVENT_UPDATE_SETUP"

function Promote2Module:getReqConfig()
    return {
        ReqNewSpreadInfo = {reqPath = "lobby.Req.Promote.ReqNewSpreadInfo", callBack = self.respNewSpreadInfoCallback},
        ReqNewSpreadTask = {reqPath = "lobby.Req.Promote.ReqNewSpreadTask", callBack = self.respNewSpreadTaskCallback},
        ReqNewSpreadAward = {reqPath = "lobby.Req.Promote.ReqNewSpreadAward", callBack = self.respNewSpreadAwardCallback},
    }
end

function Promote2Module:setActivityInfo(info)
    self._activityInfo = clone(info)
    self._activityId = self._activityInfo.aid

    dump(self._activityInfo, "Promote2")
end

function Promote2Module:isInActOnlineTime()
    local baseInfo = self:getBaseInfo()
    if baseInfo ~= nil then
        local nowTime = os.time()
        local actTime = self:getActTime()
        if nowTime >= actTime.online and nowTime <= actTime.offline then
            return true
        end
    end
    return false
end

function Promote2Module:isInActTime()
    local baseInfo = self:getBaseInfo()
    if baseInfo ~= nil then
        local nowTime = os.time()
        local actTime = self:getActTime()
        if nowTime >= actTime.start and nowTime <= actTime["end"] then
            return true
        end
    end
    return false
end

function Promote2Module:isActPlayer()
    local baseInfo = self:getBaseInfo()
    if baseInfo ~= nil then
        if baseInfo.taskType == PromoteDefine.TASK_TYPE.LEADER or baseInfo.taskType == PromoteDefine.TASK_TYPE.USER then
            return true
        end
    end
    return false
end

function Promote2Module:isOpenAct()
    return self:isActPlayer() and self:isInActTime()
end


function Promote2Module:isOnlineAct()
    return self:isActPlayer() and self:isInActOnlineTime()
end

function Promote2Module:isValid()
    return self._activityId and self._activityId > 0
end

function Promote2Module:getNewAid()
    return self._activityId or 0
end

-- 修改外部ICON状态
function Promote2Module:setMainIcon(scene, btn)
    self._scene = scene
    self._btn = btn
    if self:isValid() then
        self:updateTeaIcon()
    end
end

function Promote2Module:getTaskRed()
    local baseInfo = self:getBaseInfo()
    local taskInfo = self:getTaskInfo()
    if not baseInfo or not taskInfo then
        return false
    end
    local taskType = baseInfo.taskType
    if taskType == PromoteDefine.TASK_TYPE.USER then
        local userRound = taskInfo.curRound or 0
        local isUserFirstRed = userRound >= (baseInfo.playerFirstTaskRound or 0) and (taskInfo.awardFirst or 0) ~= 1
        local isUserSecondRed = userRound >= (baseInfo.playerSecondTaskRound or 0) and (taskInfo.awardSecond or 0) ~= 1
        local isUserPeriodRed = (taskInfo.curPlayerCnt or 0) >= (baseInfo.playerPeriodTaskTimes or 0) and (taskInfo.awardPeriod or 0) ~= 1
        return isUserFirstRed or isUserSecondRed or isUserPeriodRed
    end
    local isLeftRed = false
    local isRightRed = false
    local firstTaskType = taskInfo.firstTaskType
    if firstTaskType == PromoteDefine.TASK_TYPE.A then
        isLeftRed = (taskInfo.totalRound or 0) >= (baseInfo.leaderFirstTaskTimes or 0) and (taskInfo.awardFirst or 0) ~= 1
    elseif firstTaskType == PromoteDefine.TASK_TYPE.B then
        isLeftRed = (taskInfo.curPlayerCnt or 0) >= (baseInfo.leaderFirstPlayerCnt or 0) and (taskInfo.awardFirst or 0) ~= 1
    elseif firstTaskType == PromoteDefine.TASK_TYPE.C then
        isLeftRed = (taskInfo.curPlayerCnt or 0) >= (baseInfo.leaderFirstPlayerCnt or 0) and (taskInfo.totalRound or 0) >= (baseInfo.leaderFirstTaskTimes or 0) and (taskInfo.awardFirst or 0) ~= 1
    end
    local rightTaskType = taskInfo.taskType
    if rightTaskType == PromoteDefine.TASK_TYPE.A then
        isRightRed = (taskInfo.awardLeft or 0) > 0
    elseif rightTaskType == PromoteDefine.TASK_TYPE.B then
        -- isRightRed = taskInfo.task.round >= taskInfo.task_config.task_target and taskInfo.awardPeriod ~= 1  -- TS 中已注释
    elseif rightTaskType == PromoteDefine.TASK_TYPE.C then
        isRightRed = (taskInfo.awardLeft or 0) > 0
    end
    return isLeftRed or isRightRed
end

function Promote2Module:updateTeaIcon()
    if self._scene == nil or self._btn == nil or tolua.isnull(self._btn) then
        return
    end

    self._btn:setVisible(false)
    if self._scene._btnRRBY then
        self._scene._btnRRBY:setPositionX(self._btn:getPositionX())
    end

    local isOnlineAct = self:isOnlineAct()
    if not isOnlineAct then
        return
    end

    if self:getBaseInfo() == nil or self:getTaskInfo() == nil then
        return
    end

    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData == nil then
        return
    end
    local isOwner = teahouseData:isOwner()
    local isAdmin = teahouseData:isAdmin()
    local baseInfo = self:getBaseInfo()
    local text = ""

    if isOwner and baseInfo.taskType ~= PromoteDefine.TASK_TYPE.LEADER then
        self._btn:setVisible(false)
        return
    end
    if (not isOwner) and baseInfo.taskType ~= PromoteDefine.TASK_TYPE.USER then
        self._btn:setVisible(false)
        return
    end

    local taskInfo = self:getTaskInfo()

    if baseInfo.taskType == PromoteDefine.TASK_TYPE.USER then
        text = "领取福利"
        -- self._btn:getChildByName("_KW_PROMOTE_TEXT"):setVisible(false)
    elseif baseInfo.taskType == PromoteDefine.TASK_TYPE.LEADER then

        if isOwner then
            local isOpenAct = self:isOpenAct()
            if not isOpenAct then
                text = ''
            elseif taskInfo.awardLeft > 0 then
                text = '可领房卡\n' .. self:getUserAwardCount(baseInfo.propId, taskInfo.awardLeft)
            else
                local awardCount = 0
                if baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.A then
                    local roundCount = math.min(taskInfo.curRound, baseInfo.leaderTaskTarget)
                    awardCount = roundCount * baseInfo.leaderTaskAward
                elseif baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.C then
                    if taskInfo.curRound >= baseInfo.leaderTaskTarget2 then
                        awardCount = baseInfo.leaderTaskAward2
                    elseif taskInfo.curRound >= baseInfo.leaderTaskTarget then
                        awardCount = baseInfo.leaderTaskAward
                    end
                end
                if awardCount <= 0 then
                    text = '次日可领'
                else
                    text = '次日可领房卡\n' .. self:getUserAwardCount(baseInfo.propId, awardCount)
                end
            end
        else
            if baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.A then
                text = '今日场次\n' .. taskInfo.curRound
            elseif baseInfo.leaderTaskType == PromoteDefine.TASK_TYPE.C then
                text = '对局人数\n' .. taskInfo.curRound
            end
        end
    end
    local red = self:getTaskRed()
    self._btn:getChildByName("_KW_PROMOTE_REDPOINT"):setVisible(red)
    self._btn:getChildByName("_KW_PROMOTE_TEXT"):setString(text)
    self._btn:getChildByName("_KW_PROMOTE_OWNER"):setVisible(taskInfo.taskType ~= PromoteDefine.TASK_TYPE.USER)
    self._btn:getChildByName("_KW_PROMOTE_USER"):setVisible(taskInfo.taskType == PromoteDefine.TASK_TYPE.USER)
    self._btn:setVisible(true)
    if self._scene._btnRRBY then
        self._scene._btnRRBY:setPositionX(self._btn:getPositionX() - self._btn:getContentSize().width)
    end
end

function Promote2Module:getPromoteTeaNumber()
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData ~= nil then
        return teahouseData:getTeaNumber()
    end
    return nil
end

function Promote2Module:reqNewSpreadInfo(teaNumber)
    if not self:isValid() then
        return
    end
    if teaNumber == nil then
        teaNumber = self:getPromoteTeaNumber()
    end
    if teaNumber == nil then return end
    self:startReq("ReqNewSpreadInfo", {timeoutTime = 10, teaNumber = teaNumber, aid = self:getNewAid()})
end

function Promote2Module:reqNewSpreadTask()
    if not self:isValid() then
        return
    end
    local teaNumber = self:getPromoteTeaNumber()
    if teaNumber == nil then return end
    self:startReq("ReqNewSpreadTask", {timeoutTime = 10, teaNumber = teaNumber, aid = self:getNewAid()})
end

function Promote2Module:reqNewSpreadAwardList(teaNumber)
    if teaNumber == nil then
        teaNumber = self:getPromoteTeaNumber()
    end
    if teaNumber == nil then return end
    self:startReq("ReqNewSpreadAward", {timeoutTime = 10, teaNumber = teaNumber, aid = self:getNewAid(), opt = 1, awardType = 0, awardTime = 0})
end

-- 串行领取：发一个请求，等 respNewSpreadAwardCallback 回来后再发下一个；全部完成后再执行收尾逻辑
function Promote2Module:reqNewSpreadAwardClaim(teaNumber, awardType, dateList)
    if teaNumber == nil then
        teaNumber = self:getPromoteTeaNumber()
    end
    if teaNumber == nil then return end
    dateList = dateList or {}
    if #dateList == 0 then return end
    self._claimSerial = {
        teaNumber = teaNumber,
        awardType = awardType,
        dateList = dateList,
        index = 1,
        awardInfoCache = { prize_names = {}, image_urls = {} },
    }
    self:_sendNextClaimRequest()
end

function Promote2Module:_sendNextClaimRequest()
    if not self._claimSerial or self._claimSerial.index > #self._claimSerial.dateList then
        return
    end
    local dt = self._claimSerial.dateList[self._claimSerial.index]
    self:startReq("ReqNewSpreadAward", {
        timeoutTime = 10,
        teaNumber = self._claimSerial.teaNumber,
        aid = self:getNewAid(),
        opt = 0,
        awardType = self._claimSerial.awardType,
        awardTime = dt,
    })
end

function Promote2Module:reqNewSpreadNotifyClub(teaid, info)
    self:startReq("ReqNewSpreadNotifyClub", 10, teaid, info, 1)
end

function Promote2Module:respNewSpreadInfoCallback(req, type, data)

    dump(data, "Promote2")

    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local replyData = data.nXYData
        self._baseInfo = replyData
        if self._baseInfo.gameIds and #self._baseInfo.gameIds > 0 then
            self._baseInfo.gameId = self._baseInfo.gameIds[1]
        end
        self._baseInfo.gameRule = {} -- rule 里面实际存储的不是 gamerule 而是 gameid 服务端设计问题

        if self._baseInfo.ext == "" or self._baseInfo.ext == nil or self._baseInfo.ext == "{}" then
            self._baseInfo.ext = self:getGlobalConfig().teaViewImg_userIcon1
        end

        self:reqNewSpreadTask()
    end
end

function Promote2Module:respNewSpreadTaskCallback(req, type, data)
    dump(data, "Promote2")
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._taskInfo = data.nXYData
        self:updateTeaIcon()
        self:dispatchEvent({name = self.EVENT_NEW_PROMOTE_TASK})
    else
        self:updateTeaIcon()
    end
end

function Promote2Module:respNewSpreadAwardCallback(req, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        local opt = req.getOpt and req:getOpt() or 0
        if opt == 1 then
            self._newRewardLog = data.nXYData.receiveInfo or {}
        else
            -- 领取（opt==0）：每次结果都缓存，串行全部完成后再用缓存打开一次奖励弹框并执行收尾
            local awardInfoList = data.nXYData.awardInfo or {}
            if self._claimSerial then
                for _, award in ipairs(awardInfoList) do
                    self._claimSerial.awardInfoCache.prize_names[#self._claimSerial.awardInfoCache.prize_names + 1] = "x" .. self:getUserAwardCount(award.propId, award.count)
                    self._claimSerial.awardInfoCache.image_urls[#self._claimSerial.awardInfoCache.image_urls + 1] = award.img or ""
                end
            end
            local runTail = true
            if self._claimSerial then
                if self._claimSerial.index < #self._claimSerial.dateList then
                    self._claimSerial.index = self._claimSerial.index + 1
                    self:_sendNextClaimRequest()
                    runTail = false
                else
                    runTail = true
                end
            end
            if runTail then
                local awardInfo = nil
                if self._claimSerial and #self._claimSerial.awardInfoCache.prize_names > 0 then
                    awardInfo = {
                        prize_names = self._claimSerial.awardInfoCache.prize_names,
                        image_urls = self._claimSerial.awardInfoCache.image_urls,
                        isPromote = true,
                    }
                    self._claimSerial = nil
                else
                    self._claimSerial = nil
                    if #awardInfoList > 0 then
                        awardInfo = {}
                        awardInfo.prize_names = {}
                        awardInfo.image_urls = {}
                        for _, award in ipairs(awardInfoList) do
                            awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. self:getUserAwardCount(award.propId, award.count)
                            awardInfo.image_urls[#awardInfo.image_urls + 1] = award.img or ""
                        end
                        awardInfo.isPromote = true
                    end
                end
                if awardInfo and #awardInfo.prize_names > 0 then
                    XH.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
                end
                XH.SysTool.performDelayOnce(function()
                    self:reqNewSpreadTask()
                end, 1)
                XH.playerData:flushPlayerDrop()
                self:reqNewSpreadAwardList()
            end
        end
        self:dispatchEvent({name = self.EVENT_NEW_PROMOTE_REWARD})
    else
        -- 请求失败时清除串行状态，避免卡住
        if self._claimSerial then
            self._claimSerial = nil
        end
    end
end

function Promote2Module:getBaseInfo()
    return self._baseInfo
end

function Promote2Module:getTaskInfo()
    return self._taskInfo
end

function Promote2Module:getGlobalConfig()
    -- 从配置中心读取：all > total > AllConfig > "PromoteConfig"
    return XH.lobby:getModule("Configuration"):getAllConfigData("PromoteConfig")
end

function Promote2Module:getAreaConfig()
    -- 从配置中心读取：all > total > AllConfig > "PromoteConfig"
    return XH.lobby:getModule("Configuration"):getLobbyConfig("PromoteConfig") or {}
end

function Promote2Module:getActTime()
    local activityInfo = self._activityInfo
    if not activityInfo then
        return nil
    end
    return {
        online = tonumber(activityInfo.online) or 0,
        offline = tonumber(activityInfo.offline) or 0,
        start = tonumber(activityInfo.start) or 0,
        ["end"] = tonumber(activityInfo["end"]) or 0,
    }
end

function Promote2Module:getNewRewardLog()
    return self._newRewardLog
end

-- 用户奖励数量展示：若为绑定房卡则按比例换算（如除以100）
function Promote2Module:getUserAwardCount(propId, count)
    local num = count or 0
    if XH.areaData and propId == XH.areaData:getPropLimitedTimeRoomCardID() then
        local ratio = XH.areaData:getPropLimitedTimeRoomCardRatio() or 1
        num = num / ratio
    end
    return num
end

function Promote2Module:getNewLogCanReward()
    local log = self._newRewardLog
    if not log then return nil end
    local nowDate = self:getTodayZeroTime()
    local days = {}
    for _, item in ipairs(log) do
        local rewardDate = tonumber(item.date) or 0
        if rewardDate < nowDate and (item.award or 0) > 0 and (item.deliver or 0) == 0 then
            days[#days + 1] = rewardDate
        end
    end
    return {days = days}
end

-- 将 defaultCreateRule 配置转为 createBoxRoom 所需 data（对齐 TeaHouseMainModule:quickCreatePlayMode）
function Promote2Module:_buildCreateBoxRoomData(setMode)
    local data = {}
    data.gameid = setMode.gameid
    data.base = setMode.base
    data.cont = 10000
    if setMode.cont ~= nil then
        if type(setMode.cont) == "table" then
            data.cont = setMode.cont[1]
        else
            data.cont = setMode.cont
        end
    end
    data.size = 4
    local baseInfo = self:getBaseInfo()
    local wantPlayerCount = baseInfo and baseInfo.playerCount
    if wantPlayerCount then
        data.size = wantPlayerCount
    elseif setMode.nPlayerSize then
        for i = 1, #setMode.nPlayerSize do
            if setMode.nPlayerSize[i] == 2 then
                data.size = 2
            end
        end
        if data.size == 4 and #setMode.nPlayerSize > 0 then
            data.size = setMode.nPlayerSize[1]
        end
    end
    data.type = setMode.type or 0
    data.name = setMode.name
    data.data = setMode.data
    data.tableCnt = setMode.tableCnt or 1
    data.payType = 0
    data.nPlayModeId = 0

    local teahouseData = TeaHouse.manager.teahouseData
    if teahouseData then
        local payTypeTable = teahouseData:getPayTypeByID()
        local SetupConfig = TeaHouse.manager.configManager.SetupConfig
        if not SetupConfig.IsFixedPayType and #payTypeTable == 1 then
            data.payType = tonumber(payTypeTable[1])
        else
            local luaString = "return {" .. (setMode.data or "") .. "}"
            local ruleFunc = loadstring(luaString)
            local rule = ruleFunc and ruleFunc() or nil
            if rule then
                local KW_PAYTYPE_NAME_TABLE = {"PayType", "moneyType", "TeaHousePayType"}
                for _, payTypeName in ipairs(KW_PAYTYPE_NAME_TABLE) do
                    if rule[payTypeName] then
                        data.payType = tonumber(rule[payTypeName])
                        break
                    end
                end
            end
        end
        if TeaHouse.manager.teahouseMain.fixPrevAAPlayModelCreateRoomData then
            data.data = TeaHouse.manager.teahouseMain:fixPrevAAPlayModelCreateRoomData(data.data, data.payType)
        end
    end
    return data
end

function Promote2Module:quickCreatePlayMode(teaNumber)
    local defaultCreateRule = self:getAreaConfig().defaultCreateRule or self:getGlobalConfig().defaultCreateRule
    local setMode = defaultCreateRule[tostring(XH.areaData:getAreaID())]
    if setMode == nil then
        self:normalCreatePlayMode(teaNumber)
        return
    end
    local teaData = XH.teaHouseManager:getTeaHouseData()
    if teaNumber == nil then
        if teaData == nil then
            return
        else
            teaNumber = teaData:getTeaNumber()
        end
    end

    local lobbyCfg = PromoteConfig[XH.areaData:getLobbyID()]
    local ignoreCreate = lobbyCfg ~= nil and lobbyCfg.IGNORECREATE
    if ignoreCreate then
        local data = self:_buildCreateBoxRoomData(setMode)
        data.isFromPromote = true
        TeaHouse.manager.teahouseMain:createBoxRoom(data)
    else
        TeaHouse.manager.teahouseSetup:setTeaNumber(teaNumber)
        TeaHouse.manager.teahouseSetup:setPlayModeInfo(setMode)
    end
end

function Promote2Module:updateSetup()
    self:dispatchEvent({name = self.EVENT_UPDATE_SETUP})
end

function Promote2Module:normalCreatePlayMode(teaNumber)
    
    local gameid = 0
    local baseInfo = self:getBaseInfo()
    if baseInfo and baseInfo.gameId then
        gameid = baseInfo.gameId
    end

    local teaData = XH.teaHouseManager:getTeaHouseData()
    if teaData == nil then
        return
    end
    TeaHouse.manager.teahouseSetup:setTeaNumber(teaData:getTeaNumber())
    TeaHouse.manager.teahouseSetup:addPlayMode(nil, gameid, true)
end

-- 规则字符串是否匹配：baseInfo.gameRule 中每段都在 playMode.acData 中出现
local function _matchRuleSegments(acData, gameRule)
    if not acData or not gameRule or #gameRule == 0 then
        return true
    end
    for _, segment in ipairs(gameRule) do
        if segment ~= "player_count" and segment ~= "" and not string.find(acData, segment, 1, true) then
            return false
        end
    end
    return true
end

-- 桌子信息是否匹配活动规则（人数、规则段）
local function _tableInfoMatchesAct(info, wantGameId, wantPlayerCount, gameRule)
    if not info or info.state ~= 0 then
        return false
    end
    if wantGameId ~= 0 and info.gameid ~= wantGameId then
        return false
    end
    if wantPlayerCount and info.size ~= wantPlayerCount then
        return false
    end
    if not _matchRuleSegments(info.data, gameRule) then
        return false
    end
    if info.nNumid then
        for i = 1, #info.nNumid do
            if info.nNumid[i] == 0 then
                return true
            end
        end
    end
    return false
end

-- 将桌子信息转为玩法结构，供 getActPlayTables / joinModeRoom 复用
local function _tableInfoToPlayModeLike(info)
    return {
        nGameId = info.gameid,
        acData = info.data,
        anPlayerCount = { info.size },
        bIsEnable = true,
        nPlayModeId = info.playModeId or 0,
        tableid = info.tableid,
    }
end

-- 返回符合条件的固定桌玩法列表（供 hasActPlayModes / getActPlayTables 复用）
-- 返回值：{ playModes = {...}, wantGameId, wantPlayerCount, gameRule } 或 nil
function Promote2Module:getActPlayModesList()
    if not self:isValid() then
        return nil
    end

    local baseInfo = self:getBaseInfo()
    if baseInfo == nil then
        return nil
    end

    local wantGameId = baseInfo.gameId or 0
    local wantPlayerCount = baseInfo.playerCount or self:getAreaConfig().playerCount or self:getGlobalConfig().playerCount
    local gameRule = string.split(baseInfo.rule or "", "|")

    local lobbyCfg = PromoteConfig[XH.areaData:getLobbyID()]
    local ignoreCreate = lobbyCfg ~= nil and lobbyCfg.IGNORECREATE

    local actModes = {}
    if ignoreCreate then
        local tableInfos = TeaHouse.manager.teahouseData:getTableInfos()
        if tableInfos == nil then
            return nil
        end
        for _, info in pairs(tableInfos) do
            if _tableInfoMatchesAct(info, wantGameId, wantPlayerCount, gameRule) then
                actModes[#actModes + 1] = _tableInfoToPlayModeLike(info)
            end
        end
    else
        local playModes = XH.teaHouseManager:getPlayModeInfos()
        if playModes == nil then
            return nil
        end
        for i = 1, #playModes do
            local mode = playModes[i]
            if mode.bIsEnable and (mode.nGameId == wantGameId or wantGameId == 0) then
                local playerCountMatch = not wantPlayerCount
                if wantPlayerCount and mode.anPlayerCount then
                    for j = 1, #mode.anPlayerCount do
                        if mode.anPlayerCount[j] == wantPlayerCount then
                            playerCountMatch = true
                            break
                        end
                    end
                end
                if playerCountMatch and _matchRuleSegments(mode.acData, gameRule) then
                    actModes[#actModes + 1] = mode
                end
            end
        end
    end

    return {
        playModes = actModes,
        wantGameId = wantGameId,
        wantPlayerCount = wantPlayerCount,
        gameRule = gameRule,
    }
end

-- 根据 getActPlayModesList 返回长度判断是否存在固定桌
function Promote2Module:hasActPlayModes()
    local list = self:getActPlayModesList()
    return list and #list.playModes > 0
end

-- 返回第一个符合条件的固定桌玩法（供 joinModeRoom 等使用）
function Promote2Module:getActPlayModes()
    local list = self:getActPlayModesList()
    if list and list.playModes and #list.playModes > 0 then
        return list.playModes[1]
    end
    return nil
end

-- 今日0点时间戳（基于服务器时间）
function Promote2Module:getTodayZeroTime()
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local timestamp = time - ((time + 28800) % 86400)
    return timestamp
end

function Promote2Module:getPendTeahouseInfo(nTeaNumber)
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData ~= nil then
        local teahouseInfo = teahouseData:getTeaHouseInfoByID(nTeaNumber)
        if teahouseInfo ~= nil then
            return teahouseInfo
        end
    end
    local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    if teahouseLists == nil then
        return nil
    end
    if #teahouseLists > 0 then
        for i = 1, #teahouseLists do
            if teahouseLists[i].nTeaNumber == nTeaNumber then
                return teahouseLists[i]
            end
        end
    end
    return nil
end

-- 加入对应固定房间
function Promote2Module:joinModeRoom(teaNumber)
    if TeaHouse.manager.teahouseGeneral:checkIsInGame() then
        XH.TipTool.showToast("您目前为游戏暂离状态")
        return true
    end
    if not TeaHouse.manager.teahouseData:checkSelfPower("JoinTable") then
        XH.TipTool.showToast("无加入桌子权限")
        return true
    end
    if teaNumber == nil then
        local teahouseData = XH.teaHouseManager:getTeaHouseData()
        if teahouseData ~= nil then
            teaNumber = teahouseData:getTeaNumber()
        end
    end
    if teaNumber == nil then
        return
    end
    local teahouseList = self:getPendTeahouseInfo(teaNumber)
    if teahouseList == nil then
        return false
    end
    local fitTables = self:getActPlayTables()
    if fitTables ~= nil then
        XH.teaHouseManager:reJoinTeaHouse({
            teaHousePwd = teahouseList.nPasswd,
            tableID = fitTables.tableid,
        })
        return true
    end
    local playModes = self:getActPlayModes()
    if playModes ~= nil then
        XH.teaHouseManager:reJoinTeaHouse({
            teaHousePwd = teahouseList.nPasswd,
            playModeId = playModes.nPlayModeId,
            playerCount = playModes.anPlayerCount and playModes.anPlayerCount[1] or nil,
        })
        return true
    end
    return false
end

-- 判断桌子是否匹配任一符合条件的固定桌玩法
local function _tableMatchesActModes(info, actModes, gameRule)
    if not info or not actModes or #actModes == 0 then
        return false
    end
    for _, mode in ipairs(actModes) do
        if mode.nGameId == info.gameid and _matchRuleSegments(info.data, gameRule) then
            if mode.anPlayerCount then
                for j = 1, #mode.anPlayerCount do
                    if mode.anPlayerCount[j] == info.size then
                        return true
                    end
                end
            else
                return true
            end
        end
    end
    return false
end

-- 获取符合的桌子信息：复用 getActPlayModesList，按缺人最少优先返回
function Promote2Module:getActPlayTables()
    local actData = self:getActPlayModesList()
    if not actData or #actData.playModes == 0 then
        return nil
    end

    local teaData = XH.teaHouseManager:getTeaHouseData()
    if teaData == nil then
        return nil
    end

    local tableInfos = teaData:getTableInfos()
    if not tableInfos then
        return nil
    end

    local actModes = actData.playModes
    local gameRule = actData.gameRule or {}

    -- 收集符合固定桌玩法的、且有空位的桌子，并计算缺人数
    local candidates = {}
    for _, info in pairs(tableInfos) do
        if info.state == 0 and _tableMatchesActModes(info, actModes, gameRule) then
            local missingCount = 0
            local hasEmptySeat = false
            if info.nNumid then
                for i = 1, #info.nNumid do
                    if info.nNumid[i] == 0 then
                        missingCount = missingCount + 1
                        hasEmptySeat = true
                    end
                end
            end
            if hasEmptySeat then
                candidates[#candidates + 1] = {
                    info = info,
                    missingCount = missingCount,
                    createTime = info.createTime or 0,
                }
            end
        end
    end

    if #candidates == 0 then
        return nil
    end

    -- 按缺人最少优先排序，缺人数相同时按创建时间较新的优先
    table.sort(candidates, function(a, b)
        if a.missingCount ~= b.missingCount then
            return a.missingCount < b.missingCount
        end
        return a.createTime > b.createTime
    end)

    return candidates[1].info
end

return Promote2Module
�u