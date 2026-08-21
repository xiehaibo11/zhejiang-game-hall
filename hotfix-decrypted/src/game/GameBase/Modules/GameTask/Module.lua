local GameTaskModule = CF.gameClass("GameTaskModule", CF.ModuleBase)
GameTaskModule.EVENT_UPDATE_CURRENT_TASK_INFO = "EVENT_UPDATE_CURRENT_TASK_INFO"   -- 更新任务信息
GameTaskModule.EVENT_SHOW_GAME_TASK = "EVENT_SHOW_GAME_TASK"  
function GameTaskModule:ctor()
    GameTaskModule.super.ctor(self)
    self._tasksInfo = {}
    self._reqTasksInfo = {} -- 当前正在请求，需要拼接的任务信息，最后赋值给self._taskInfo
    self._gameID = nil
    self._roomLevel = nil
    self._playerCount = nil
    self._reqGetAwardInfo = {}
    self._currentTaskInfo = nil
end

function GameTaskModule:getReqConfig()
    return {
        ReqLuckTaskGetPage = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetPage", callBack = self.respGameTask},
        ReqLuckTaskGetContent = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetContent", callBack = self.respGetContent},
        ReqLuckTaskGetReward = {reqPath = "lobby.Req.LuckTask.ReqLuckTaskGetReward", callBack = self.respGetReward},
    }
end

function GameTaskModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgPlayerData),msgClass = CF.LogicBaseProtocol.msgPlayerData},
    }
end

-- 获取基础任务
function GameTaskModule:reqGameTask(gameID,roomLevel,playerCount)
    if gameID ~= 0 and gameID ~= nil then 
        self._gameID = gameID
    end
    if roomLevel ~= nil and roomLevel%10 ~= 0 then 
        self._roomLevel = roomLevel - 1
    end
    if playerCount ~= 0 and playerCount ~= nil then 
        self._playerCount = playerCount
    end
    
    self:startReq("ReqLuckTaskGetPage", 10)
end

function GameTaskModule:respGameTask(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.pages == nil or #data.pages == 0 then 
            return 
        end 
        local tasks = data.pages[1].info 
        if tasks == nil or #tasks == 0 then 
            return
        end 
        local taskIDs = {}
        for i = 1,#tasks do 
            table.insert(taskIDs,tasks[i].id[1])
        end 
        self:reqGetContent(taskIDs)   

        self._reqTasksInfo = {}
        for i = 1,#tasks do 
            local taskInfo = {
                id = tasks[i].id[1],
                name = tasks[i].name,
                status = tasks[i].status
            }
            table.insert(self._reqTasksInfo,taskInfo)
        end 
    else
        print('reqGameTask TIMEOUT')
    end
end

function GameTaskModule:reqGetContent(taskIDs)
    local include = 0 -- 不用修改
    local activity_id = taskIDs
    self:startReq("ReqLuckTaskGetContent", activity_id, include, 10)
end

function GameTaskModule:respGetContent(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.box == nil then
            return
        end

        for i = 1,#self._reqTasksInfo do 
            for j = 1,#data.box do 
                if self._reqTasksInfo[i].id == data.box[j].activityId then 
                    self._reqTasksInfo[i].currentProgress = data.box[j].progress or 0

                    --取出任务生效范围
                    local actTypeInfo = data.box[j].actTypeInfo 
                    if actTypeInfo then 
                        self._reqTasksInfo[i].utilizeGameIDs = actTypeInfo.gameId or {} --生效的游戏
                        self._reqTasksInfo[i].utilizePlayerCnts = actTypeInfo.playerCnt or {} --生效的椅子数
                        local rule = actTypeInfo.rule 
                        self._reqTasksInfo[i].utilizeRoomLevels = GameTaskModule.getRoomLevelsByRule(rule) or {}--生效的房间等级
                    end 

                    self._reqTasksInfo[i].stageTaskInfo = data.box[j].content
                end 
            end 
        end 
        self._tasksInfo = {}
        self._tasksInfo = clone(self._reqTasksInfo)
        self._currentTaskInfo = self:getCurrentTaskInfo(self._gameID,self._roomLevel,self._playerCount)
        local currentTaskInfoStr  = self:getCurrentTaskInfoStr(self._currentTaskInfo)
        if currentTaskInfoStr == nil then 
            self:dispatchEvent( { name = GameTaskModule.EVENT_SHOW_GAME_TASK, msg = false })
        else 
            self:dispatchEvent( { name = GameTaskModule.EVENT_UPDATE_CURRENT_TASK_INFO, msg = currentTaskInfoStr})
            self:dispatchEvent( { name = GameTaskModule.EVENT_SHOW_GAME_TASK, msg = true })
        end 
        local currentGetAwardInfo = self:getCurrentGetAwardInfo(self._currentTaskInfo)
        self._reqGetAwardInfo = currentGetAwardInfo or {activityID = "0",contentID = "0"}
    end
end

function GameTaskModule:reqGetRewards()
    self:startReq("ReqLuckTaskGetReward", self._reqGetAwardInfo.activityID, self._reqGetAwardInfo.contentID, 10)
end


function GameTaskModule:respGetReward(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        CF.msgManager:sendFlushGameSR()
        CF.msgManager:sendRequestPlayerProps()
        self:showAwardView(data)
    end
    self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
end

function GameTaskModule:isCurrentTaskCanDraw()
    if self._currentTaskInfo and self._currentTaskInfo.status == "AC_CAN_DRAW" then 
        return true
    end 
    return false
end

function GameTaskModule:getCurrentTaskID()
    return self._currentTaskInfo.id
end 

function GameTaskModule:getCurrentTaskInfoStr(currentTaskInfo)
    if currentTaskInfo == nil then 
        return nil
    end 
    local stageInfo = GameTaskModule.getCurrentStageInfo(currentTaskInfo.currentProgress,currentTaskInfo.stageTaskInfo)
    local currentTaskInfoStr = {
        id = currentTaskInfo.id,
        progress = currentTaskInfo.currentProgress / stageInfo.totalProgress,
        taskDescribeStr = currentTaskInfo.name .. ":" .. currentTaskInfo.currentProgress .. "/" .. stageInfo.totalProgress,
        taskAwardStr = "获得",
        taskStatus = currentTaskInfo.status
    }
    if stageInfo.totalProgress > 999 then
        local progressPercentage = math.floor((currentTaskInfo.currentProgress / stageInfo.totalProgress) * 100)
        currentTaskInfoStr.taskDescribeStr = currentTaskInfo.name .. ":"  .. progressPercentage .. "%"
    else
        currentTaskInfoStr.taskDescribeStr = currentTaskInfo.name .. ":"  .. currentTaskInfo.currentProgress .. "/" .. stageInfo.totalProgress
    end

    local strReward = self:convertRewardString(stageInfo.rewards)
    currentTaskInfoStr.taskAwardStr = strReward
    return currentTaskInfoStr
end

function GameTaskModule:convertRewardString(rewards)
    function convertRewardValue(reward)
        if reward < 10000 then
            return tostring(reward) .. ""
        else
            local millions = math.floor(reward / 1000) / 10
            return tostring(millions) .. "万"
        end
    end

    local strReward = ""
    if rewards then 
        for i = 1,#rewards do 
            strReward = strReward .. (convertRewardValue(rewards[i].count or 0)) .. (rewards[i].name or "")
            if i ~= #rewards then 
                strReward = strReward .. "、"
            end 
        end 
    end 
    return strReward
end

function GameTaskModule:getCurrentGetAwardInfo(currentTaskInfo)
    if currentTaskInfo == nil then 
        return nil
    end 

    local stageInfo = GameTaskModule.getCurrentStageInfo(currentTaskInfo.currentProgress,currentTaskInfo.stageTaskInfo)
    local getAwardInfo = {
        activityID = currentTaskInfo.id or "0",
        contentID = stageInfo.id or "0"
    }
    return getAwardInfo
end

function GameTaskModule:getCurrentTaskInfo(gameID,roomLevel,playerCount)
    --先获取符合本游戏、本场次、本游戏的任务
    local validTasksInfo = self:getValidTasksInfo(gameID,roomLevel,playerCount)
    local fastestProgress = 0
    local fastestTasksInfo = nil

    --拿到任务进度最大的，如果任务进度同样大的，前面的任务先展示
    for i = #validTasksInfo,1,-1 do 
        local stageInfo = GameTaskModule.getCurrentStageInfo(validTasksInfo[i].currentProgress,validTasksInfo[i].stageTaskInfo)
        if stageInfo ~= nil then 
            local progress = validTasksInfo[i].currentProgress / stageInfo.totalProgress
            if fastestProgress <= progress then 
                fastestProgress = progress
                fastestTasksInfo = validTasksInfo[i]
            end 
        end
    end 
    return fastestTasksInfo
end

function GameTaskModule:getValidTasksInfo(gameID,roomLevel,playerCount)
    
    
    --只筛出选配了gameID的任务，如果没配全部游戏过滤掉，即全不生效
    function isInCondition(a,b) 
        for j = 1,#b do 
            if b[j] == a then 
                return true
            end 
        end
        return false
    end 

    --只筛选出配了roomLevel和playerCount的任务，如果没配那就全部都选出，即全生效
    function isInCondition2(a,b) 
        if #b == 0 or isInCondition(a,b) then 
            return true 
        end     
        return false
    end 

    local validTasksInfo = {}
    for i = 1,#self._tasksInfo do
        local inGameID = isInCondition(gameID,self._tasksInfo[i].utilizeGameIDs)
        local inRoomLevel = isInCondition2(roomLevel,self._tasksInfo[i].utilizeRoomLevels)
        local inPlayerCount = isInCondition2(playerCount,self._tasksInfo[i].utilizePlayerCnts)
        if inGameID and inRoomLevel and inPlayerCount then 
            table.insert(validTasksInfo,self._tasksInfo[i])
        end
    end 
    return validTasksInfo
end 

function GameTaskModule.getRoomLevelsByRule(rule)
    -- 初始化一个空数组来存储房间等级
    local levels = {}
    -- 遍历规则表
    for _, levelString in ipairs(rule) do
        for level in levelString:gmatch("room_level=(%d+)") do
            table.insert(levels, tonumber(level))
        end
    end

    -- 返回包含房间等级的数组
    return levels
end


function GameTaskModule.getCurrentStageInfo(progress,content)
    for i = 1,#content do 
        if content[i].draw == 0 then 
            return {
                totalProgress = content[i].target,
                rewards = content[i].rewards,
                id = content[i].id
            }
        end
    end 
    return nil
end 

local myPlayTypeScore = nil
local myPlayCount = nil
function GameTaskModule:onMsgPlayerData(msgData)
    --考虑到服务端性能问题，非金币场屏蔽
    if not CF.roomData:isGoldRoom() then 
        return 
    end 
    if CF.selfPlayerData:getBrandID() == msgData.nBrandID 
        and CF.selfPlayerData:getNumberID() == msgData.nNumberID  then
        local isChange = false 
        if msgData.nPlayTypeScore ~= myPlayTypeScore then 
            myPlayTypeScore = msgData.nPlayTypeScore
            isChange = true
        end

        if (msgData.nWin + msgData.nLose + msgData.nDraw  + msgData.nEscape) ~= myPlayCount then 
            myPlayCount = msgData.nWin + msgData.nLose  + msgData.nDraw  + msgData.nEscape
            isChange = true
        end
        if isChange and CF.roomData:isGoldRoom() then 
            --本来变化的时候只用请求一次就可以了，但是因为50数据未及时更新，导致玩家对局变化了，请求到的还是原来的值，
            --所以加了3次定时器多次请求，和服务端确认压力没问题，所以先这样写了，至于为什么性能不做优化，更多的逻辑判断容易出Bug，也没有更多的时间去做优化了，抱歉了
            --self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
            self:performWithDelay(function()
                self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
            end, 1)
            self:performWithDelay(function()
                self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
            end, 2)
            self:performWithDelay(function()
                self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
            end, 3)
            self:performWithDelay(function()
                self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
            end, 7)
        else 
            self:reqGameTask(CF.roomData:getGameID(),CF.roomData:getRoomLevel(),CF.roomData:getChairs())
        end
    end
end


function GameTaskModule:showAwardView(data)
    local awardInfo = {}
    awardInfo.prize_names = {}
    awardInfo.image_urls = {}
    for _, award in pairs(data.rewards) do
        awardInfo.prize_names[#awardInfo.prize_names + 1] = "x" .. award.count
        awardInfo.image_urls[#awardInfo.image_urls + 1] = award.icon or ""
    end
    awardInfo.text = " "
    if #awardInfo.prize_names == 0 then
        return
    end
    CF.viewManager:openView("BackActivityAwardView", nil, nil, awardInfo)
end

return GameTaskModule
  �3  