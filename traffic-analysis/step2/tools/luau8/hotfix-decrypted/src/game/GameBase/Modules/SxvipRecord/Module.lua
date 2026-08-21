local SxvipRecordModule = CF.gameClass("SxvipRecordModule", CF.ModuleBase)

SxvipRecordModule.SXVIP_RECORD_EVENT_RECORD_STATISTICS = "SXVIP_RECORD_EVENT_RECORD_STATISTICS"
SxvipRecordModule.SXVIP_RECORD_EVENT_RECORD_HISTORY_STATISTICS = "SXVIP_RECORD_EVENT_RECORD_HISTORY_STATISTICS"
SxvipRecordModule.SXVIP_RECORD_EVENT_GET_SINGLE_RIGHT_INFO = "SXVIP_RECORD_EVENT_GET_SINGLE_RIGHT_INFO"
SxvipRecordModule.SXVIP_RECORD_EVENT_UNLOCK_RIGHT_SUCC = "SXVIP_RECORD_EVENT_UNLOCK_RIGHT_SUCC"
SxvipRecordModule.SXVIP_RECORD_EVENT_PART_FRIENDS_UPDATE = "SXVIP_RECORD_EVENT_PART_FRIENDS_UPDATE"


-- message UnlockInfo {
--     int32 unlock_type = 1;  // 1: 看视频 2: 分享 3: 购买
--     int32 unlock_value = 2; // 需要目标解锁值
--     int32 unlock_cur_value = 3; // 当前已经解锁值
--     int32 unlock_prop_id = 4; // 解锁道具ID
--   }
--   message RightInfo {
--     int32 right_id = 1; // 1: 查看总得分 2 查看回放
--     int64 end_time = 2; // 剩余时间
--     repeated UnlockInfo unlock_infos = 3; // 解锁条件
  
function SxvipRecordModule:ctor()
    SxvipRecordModule.super.ctor(self)

    self._singleRight = nil
    -- 本局牌友数据
    self._partFriendInfo = {}
    -- 牌友所有数据
    self._partAllFriendList = {}
    -- 请求单次特权配置
    self:reqSingleRight()
end

function SxvipRecordModule:getSxvipModule()
    return CF.getLobbyModule("Sxvip")
end

function SxvipRecordModule:getProxyEvents()
    return {
        {module = CF.getLobbyModule("Sxvip"), eventKeyName = "SXVIP_EVENT_FRIEND_INFO_UPDATE", callBack = "onFriendInfoUpdate"}
    }
end

function SxvipRecordModule:reqSingleRight()
    CF.reqSingleRight(self, handler(self, self.respSingleRight))
end

function SxvipRecordModule:respSingleRight(_target, req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local rightInfo = data.rightInfos and data.rightInfos[1]
        if rightInfo then
            self._singleRight = {
                rightId = rightInfo.rightId,
                endTime = tonumber(rightInfo.endTime),
                unlockInfos = rightInfo.unlockInfos
            }
        end
        self:dispatchEvent({name = self.SXVIP_RECORD_EVENT_GET_SINGLE_RIGHT_INFO, clone(self._singleRight)})
    else
        local infoMsg = req:getMessage()
        CF.TipTool.showToast(infoMsg ~= "" and infoMsg or "请求解锁单次权益信息失败")
    end
end

-- 权益id
function SxvipRecordModule:getSingleRightId()
    return self._singleRight and self._singleRight.rightId
end

-- 权益解锁类型
function SxvipRecordModule:getSingleRightUnlockType()
    if self._singleRight and type(self._singleRight.unlockInfos) == "table" then
        local unlockInfo = self._singleRight.unlockInfos[1]
        if unlockInfo then
            return unlockInfo.unlockType
        end
    end
    return 0
end

-- 获取消耗的钻石
function SxvipRecordModule:getSingleRightConsume()
    if self._singleRight and type(self._singleRight.unlockInfos) == "table" then
        local unlockInfo = self._singleRight.unlockInfos[1]
        if unlockInfo then
            return unlockInfo.unlockValue or 0
        end
    end
    return 600
end

-- 权益是否生效
function SxvipRecordModule:getSingleRightExpire()
    local serverTime = CF.getLobbyModule("Shop"):getServerTime()
    if self._singleRight and self._singleRight.endTime and self._singleRight.endTime > serverTime then
        return false
    end
    return true 
end

-- 解锁单次权益
function SxvipRecordModule:reqLockSingleRight()
    local singleRightId = self:getSingleRightId()
    local singleRightUnlockType = self:getSingleRightUnlockType()
    if not singleRightId or not singleRightUnlockType then
        CF.TipTool.showToast("获取单次权益失败或解锁类型失败,请稍后重试")
        self:reqSingleRight()
        return
    end
    local reqData = {
        right_id = singleRightId,
        unlock_type = singleRightUnlockType,
    }
    CF.reqLockSingleRight(reqData, self, handler(self, self.respLockSingleRight))
end

function SxvipRecordModule:respLockSingleRight(_target, req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.endTime then
            self._singleRight.endTime = tonumber(data.endTime)
        end
        self:dispatchEvent({name = self.SXVIP_RECORD_EVENT_UNLOCK_RIGHT_SUCC, clone(self._singleRight)})
    else
        CF.TipTool.showToast("解锁权益失败")
    end
end

function SxvipRecordModule:reqHistoryRecord(data)
    CF.reqSxvipRecordStatistics(data, self, handler(self, self.respHistoryRecord))
end

function SxvipRecordModule:respHistoryRecord(_target, req, type, data)
    local infos = {}
    if type == XH.Req.TYPE.SUCCESS then
       if data.infos then
          infos = data.infos
       end
    else
        XH.TipTool.showToast(req:getMessage())
    end
    self:dispatchEvent({name = self.SXVIP_RECORD_EVENT_RECORD_HISTORY_STATISTICS, data = infos})
end

function SxvipRecordModule:reqSxvipRecord(data)
    CF.reqSxvipRecordStatistics(data, self, handler(self, self.respSxvipRecord))
end

function SxvipRecordModule:respSxvipRecord(_target, req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local data = {
            total = data.total,
            todayScore = data.todayScore,
            yesterdayScore = data.yesterdayScore,
            beforeScore = data.beforeScore,
            nearsScore = data.nearsScore,
            infos = data.infos,
            gameIds = data.gameIds,
            modes = data.modes,
            reqData = data.reqData
        }
        -- 第一页
        if data.reqData and data.reqData.page == 1 then
            -- self:reqCurRoomPlayerBill(function(curData)
            --     if curData then
            --         data.infos = data.infos or {}
            --         table.insert(data.infos, 1, curData)
            --     end
            --     self:dispatchEvent({name = self.SXVIP_RECORD_EVENT_RECORD_STATISTICS, data = data})
            -- end)
            -- return
            local selfCurData = self:getCurRoomRecordData()
            data.infos = data.infos or {}
            table.insert(data.infos, 1, selfCurData)
        end
        self:dispatchEvent({name = self.SXVIP_RECORD_EVENT_RECORD_STATISTICS, data = data})
    else
        XH.TipTool.showToast("请求战绩统计数据失败")
    end
end

function SxvipRecordModule:getCurRoomRecordData()
    local selfCurData = {
        gameId = CF.roomData:getGameID(),
        startTime = 0,
        finishCount  = CF.roomData:getPlayCount(),
        totalCount = CF.roomData:getMaxPlayCount(),
        score = self:getCurRoomPlayerScore(),
        isSpecTime = true,
    }
    return selfCurData
end

-- 获取当前对局战绩
-- 如果没有 则表示未开局
function SxvipRecordModule:reqCurRoomPlayerBill(callback)
    local curTime = os.time()
    CF.reqCurTime(self, function(_target, req, type, data)
        if type == XH.Req.TYPE.SUCCESS then
            curTime = req._curTime
        end
        CF.reqPlayerCurRoomBill(curTime, self, function(_target, req, type, data)
            local localData = nil
            if type == XH.Req.TYPE.SUCCESS then
                -- 当前房间有数据
                if data and tonumber(data.config) == tonumber(CF.roomData:getRoomID()) then
                    local selfScore = 0
                    local playerInfos = data.playerInfos
                    for i, v in ipairs(playerInfos) do
                        if tonumber(v.numid) == tonumber(CF.selfPlayerData:getNumberID()) then
                            selfScore = v.totalscore 
                            break
                        end
                    end
                    localData = {
                        gameId = CF.roomData:getGameID(),
                        startTime = 0,
                        finishCount  = data.finishgames ,
                        totalCount = data.totalgames,
                        score = selfScore or 0,
                        isSpecTime = true
                    }
                else
                    localData = {
                        gameId = CF.roomData:getGameID(),
                        startTime = 0,
                        finishCount  = 0,
                        totalCount = 0,
                        score = 0,
                        isSpecTime = true,
                        isGuide = true,
                    }
                end
            end
            if callback then
                callback(localData)
            end
        end)
    end)
end

function SxvipRecordModule:reqPartFriendList()
    local playerDatas = CF.roomData:getPlayerDatas()
    if not playerDatas then
        return
    end
    for i = 1, #playerDatas do
        local playerData = playerDatas[i]
        local numid = playerData:getNumberID()
        if not self._partFriendInfo[numid] then
            CF.getLobbyModule("Sxvip"):reqFriendInfo(numid, function(info) 
                local data = info and info.drawReoprt and info.drawReoprt[1]
                self._partFriendInfo[numid] = data
                self:dispatchEvent({name = SxvipRecordModule.SXVIP_RECORD_EVENT_PART_FRIENDS_UPDATE})
            end)
        end
    end
end

function SxvipRecordModule:getPartFriendList()
    -- 此处处理下 是当局的玩家
    local partList = {}
    local playerDatas = CF.roomData:getPlayerDatas()
    if playerDatas then
        for i = 1, #playerDatas do
            local playerData = playerDatas[i]
            local numid = playerData:getNumberID()
            if self._partFriendInfo[numid] then
                table.insert(partList, self._partFriendInfo[numid])
            end
        end
    end
    return partList
end

function SxvipRecordModule:reqPartAllFriendList()
    if #self._partAllFriendList == 0 then
        CF.getLobbyModule("Sxvip"):reqFriendInfo()
    end
end

function SxvipRecordModule:onFriendInfoUpdate()
    self._partAllFriendList = clone(CF.getLobbyModule("Sxvip"):getFriendInfoData() or {})
    self:dispatchEvent({name = SxvipRecordModule.SXVIP_RECORD_EVENT_PART_FRIENDS_UPDATE})
end

function SxvipRecordModule:getPartAllFriendList()
    return self._partAllFriendList
end

-- 获取当前局分数
function SxvipRecordModule:getCurRoomPlayerScore()
    local score = 0
    local playerDatas = CF.roomData:getPlayerDatas()
    if playerDatas then
        local baseScore = 0
        local myScore = 0
        for i, playerData in ipairs(playerDatas) do
            baseScore = baseScore + playerData:getPlayTypeScore()
            if playerData:getNumberID() == CF.selfPlayerData:getNumberID() then
                myScore = playerData:getPlayTypeScore()
            end
        end
        baseScore = baseScore / #playerDatas
        score = myScore - baseScore
    end
    return score
end
    
return SxvipRecordModule�+