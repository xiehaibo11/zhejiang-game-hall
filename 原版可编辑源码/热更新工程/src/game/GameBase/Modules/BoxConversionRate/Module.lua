local BoxConversionRateModule = CF.gameClass("BoxConversionRateModule", CF.ModuleBase)
local BoxPlayerConversionConfig = CF.gameRequire("Modules.BoxConversionRate.Config")

-- 常量定义
local TODAY_TIMES_KEY = CF.userDefault.KEY_ID.KW_BOXPLAYER_CONVERSION_TODAY_SHOW_TIMES
local TODAY_FREQUENTLY_KEY = CF.userDefault.KEY_ID.KW_BOXPLAYER_CONVERSION_TODAY_FREQUENTLY
local DATE_FORMAT = "%Y%m%d"

function BoxConversionRateModule:ctor()
    BoxConversionRateModule.super.ctor(self)
    
    -- 初始化成员变量
    self:_initMemberVariables()
end

-- 初始化成员变量
function BoxConversionRateModule:_initMemberVariables()
    self._date = os.date(DATE_FORMAT, os.time())  -- 当前日期
    self._trackRoundTimes = 0                     -- 当局触发次数
    self._trackTodayTimes = self:getTrackTodayTimes() -- 今日触发次数
    self._trackFrequentlyData = self:getTrackFrequentlyData() --频繁触发的时间数据
    self._idleWait = 0                            -- 首次触发等待时间
    self._againTime = 0                           -- 再次触发等待时间
    self._tagType = BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_NONE -- 玩家标签
    self._description = ""                        -- 描述信息
    self._recentGoldGame = 0                      -- 最近玩过的金币游戏
    self._goldGames = {}                          -- 热门金币游戏列表
    self._lianyunType = 0                         -- 联运类型
    self._peakHours = ""                          -- 高峰期时间配置
    self._peakAgainTime = 0                       -- 高峰期额外等待时间
    
    self._conversionId = nil                       -- 定时器ID
    self._isReqConversion = false                  -- 是否请求过
end

-- 获取需要监听的事件
function BoxConversionRateModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "onPlayerListChanged" },
    }
end

-- 游戏状态变化回调
function BoxConversionRateModule:onGameStartChanged(event)
    if event and event.msg and event.msg.nowState then
        self:clearData()
    end
end

-- 游戏人数变化回调
function BoxConversionRateModule:onPlayerListChanged()
    local playerCount = CF.roomData:getCurPlayerCount()
    if playerCount > 1 then
        self:stopConversion()
    elseif playerCount == 1 then
        self:startConversion()
    end
end

-- 请求玩家标签信息
function BoxConversionRateModule:reqPlayerTag()
    self._isReqConversion = true
    local boxGuideModule = CF.getLobbyModule("BoxGuide")
    if not boxGuideModule then return end
    
    local actId = boxGuideModule:getBoxConversionActId()
    if not actId then return end
    
    -- 基础条件检查,减少请求
    if not CF or not CF.roomData or not CF.teaHouseManager then return end
    if not CF.roomData:isBoxRoom() and not CF.teaHouseManager:isInTeaHouse() then return end

    CF.reqBoxGuideInfo(
        {act_id = actId},
        self,
        handler(self, self.respPlayerTag)
    )
    
end

-- 玩家标签信息响应
function BoxConversionRateModule:respPlayerTag(_target, req, type, data)
    if type ~= XH.Req.TYPE.SUCCESS or not data then return end
    
    -- 更新成员变量
    self._idleWait = data.idleWait or 0
    self._againTime = data.againTime or 0
    self._tagType = data.tagType or BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_NONE
    self._description = data.description or ""
    self._recentGoldGame = data.recentGoldGame or 0
    self._goldGames = data.goldGames or {}
    self._lianyunType = data.lianyunType or 0
    self._peakHours = data.peakHours or ""
    self._peakAgainTime = data.peakAgainTime or 0
    -- 开始转换逻辑
    self:startConversion()
end

-- 开始转换流程
function BoxConversionRateModule:startConversion(isNextTrigger)
    if not self._isReqConversion then
        -- 请求玩家标签
        self:reqPlayerTag()
        return 
    end
    if self._tagType == BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_NONE then
        return
    end

    if self:shouldPreventDisturbance() then
        return
    end
    
    -- 计算等待时间
    local waitTime = isNextTrigger and self._againTime or self._idleWait
    if self:isPeakHours() then
        waitTime = waitTime + self._peakAgainTime
    end

    -- 停止之前的定时器并启动新的
    self:stopConversion()
    self._conversionId = self:performWithDelay(function()
        self:checkShowConversion()
    end, waitTime)
end

-- 判断当前是否高峰期
function BoxConversionRateModule:isPeakHours()
    if not self._peakHours or self._peakHours == "" then
        return false
    end
    
    -- 解析时间范围
    local startTimeStr, endTimeStr = self._peakHours:match("^(%d+:%d+)%-(%d+:%d+)$")
    if not startTimeStr or not endTimeStr then
        return false
    end
    
    -- 获取当前时间分钟数
    local currentTime = os.time()
    local currentTotal = tonumber(os.date("%H", currentTime)) * 60 + tonumber(os.date("%M", currentTime))
    
    -- 解析开始时间
    local startHour, startMin = startTimeStr:match("^(%d+):(%d+)$")
    local startTotal = tonumber(startHour) * 60 + tonumber(startMin)
    
    -- 解析结束时间
    local endHour, endMin = endTimeStr:match("^(%d+):(%d+)$")
    local endTotal = tonumber(endHour) * 60 + tonumber(endMin)
    
    -- 判断是否在时间范围内
    if startTotal <= endTotal then
        return currentTotal >= startTotal and currentTotal <= endTotal
    else
        return currentTotal >= startTotal or currentTotal <= endTotal
    end
end

-- 停止转换流程
function BoxConversionRateModule:stopConversion()
    if self._conversionId then
        self:_removeAllScheduleID(self._conversionId)
        self._conversionId = nil
    end
end

-- 检查并显示转换界面
function BoxConversionRateModule:checkShowConversion()
    -- 基础条件检查
    if not CF or not CF.roomData or not CF.teaHouseManager then return end
    if not CF.roomData:isBoxRoom() and not CF.teaHouseManager:isInTeaHouse() then return end
    if not CF.roomData:isSelfHost() then return end
    if CF.roomData:getCurPlayerCount() ~= 1 then return end
    if self:shouldPreventDisturbance() then return end
    
    -- 更新触发次数
    self._trackRoundTimes = self._trackRoundTimes + 1
    self._trackTodayTimes = self._trackTodayTimes + 1
    self:saveTrackTodayTimes()
    
    -- 获取转换列表并显示界面
    local conversionList = self:getConversionList()
    if #conversionList == 0 then return end
    
    local view = CF.gameRequire("Modules.BoxConversionRate.View").new({
        conversionList = conversionList,
        autoCloseTime = BoxPlayerConversionConfig.AutoCloseDialogTime
    })
    CF.addViewToGameScene(view, 99)
end

-- 判断是否需要防止打扰
function BoxConversionRateModule:shouldPreventDisturbance()
    return self._trackTodayTimes >= BoxPlayerConversionConfig.TodayShowMaxTimes or 
           self._trackRoundTimes >= BoxPlayerConversionConfig.RoundShowMaxTimes or self:checkBan()
end

-- 打开金币游戏
function BoxConversionRateModule:openGoldGame(gameId)
    if not gameId then return end
    
    CF.game:getModule("Dismiss"):sendRequestDismiss()
    CF.getLobbyModule("Lobby"):showXiuXianGame()
    CF.getLobbyModule("GoldQuickEnter"):enterGoldGame(30579)
    -- local scheduleID
    -- scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
    --    CF.getLobbyModule("Lobby"):showXiuXianGame()
    -- end, 0.1, false)
end

-- 打开首场比赛
function BoxConversionRateModule:openFirstMatch()
    CF.game:getModule("Dismiss"):sendRequestDismiss()
    CF.teaHouseManager:openTeaHouseList()
end

-- 打开RRBY
function BoxConversionRateModule:openRRBY()
    CF.game:getModule("Dismiss"):sendRequestDismiss()
    CF.TipTool.showLoading(5)
    
    if device.platform == "android" then
        CF.getLobbyModule("RRBuYu"):isDownloadCompleted(true)
        CF.getLobbyModule("Replugin"):postToSepperllitaPlugin(1)
    elseif device.platform == "ios" then
        CF.getLobbyModule("RRBuYu"):joinInRRBuyu()
    end
end

-- 获取今日触发次数
function BoxConversionRateModule:getTrackTodayTimes()
    local str = CF.userDefault:getValue(TODAY_TIMES_KEY, string.format("%s_%d", self._date, 0))
    local parts = str and string.split(str, "_")
    
    if parts and #parts == 2 and parts[1] == self._date then
        return tonumber(parts[2]) or 0
    end
    return 0
end

-- 获取频繁关闭数据
function BoxConversionRateModule:getTrackFrequentlyData()
    local data = CF.userDefault:getValue(TODAY_FREQUENTLY_KEY, {})
    return data
end

-- 保存频繁关闭数据
function BoxConversionRateModule:setTrackFrequentlyData()
    -- 初始化关闭记录
    if not self._trackFrequentlyData.closeTimes then
        self._trackFrequentlyData.closeTimes = {}
    end
    -- 跨天数据清除
    if not self:checkTimesInToday(self._trackFrequentlyData.closeTimes) then
        self._trackFrequentlyData.closeTimes = {}
    end
    local currentTime = os.time()
     -- 添加当前关闭时间
    table.insert(self._trackFrequentlyData.closeTimes, currentTime)
    if #self._trackFrequentlyData.closeTimes >= BoxPlayerConversionConfig.MaxQuickCloseTimes then
        self._trackFrequentlyData.banUntil = currentTime + BoxPlayerConversionConfig.BanTime
        self._trackFrequentlyData.closeTimes = {}  -- 重置关闭记录
    end
    CF.userDefault:setValue(TODAY_FREQUENTLY_KEY, self._trackFrequentlyData)
end

function BoxConversionRateModule:checkTimesInToday(times)
    local currentTime = os.time()
    local currentDate = os.date("*t", currentTime)
    for i, v in ipairs(times) do
        -- 检查时间戳是否有效
        if type(v) ~= "number" or v <= 0 then
            return false
        end
        -- 将时间戳转换为日期表
        local recordDate = os.date("*t", v)
        -- 比较年月日是否相同
        if recordDate.year ~= currentDate.year or 
           recordDate.month ~= currentDate.month or 
           recordDate.day ~= currentDate.day then
            return false
        end
    end
    -- 所有时间戳都是今天的
    return true
end

-- 检测是否是被禁止了
function BoxConversionRateModule:checkBan()
    local currentTime = os.time()
    local banTime = self._trackFrequentlyData and self._trackFrequentlyData.banUntil or 0
    return banTime > currentTime
end

-- 保存今日触发次数
function BoxConversionRateModule:saveTrackTodayTimes()
    CF.userDefault:setValue(TODAY_TIMES_KEY, string.format("%s_%d", self._date, self._trackTodayTimes))
end

-- 清空数据
function BoxConversionRateModule:clearData()
    BoxConversionRateModule.super.onDestroy(self)
end

-- 获取转换列表
function BoxConversionRateModule:getConversionList()
    local conversionConfigs = {
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_NEW] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[2] },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 }
        },
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_BOX] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[2] },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 }
        },
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_TEA] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 },
            { cType = BoxPlayerConversionConfig.ConversionType.Match, gameId = 0 }
        },
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_GOLD] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self:_getRecentGoldGameOrDefault() },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 }
        },
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_BUYU] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 },
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[2] }
        },
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_LIANYUN_OTHER] = nil,
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_REBACK] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self:_getRecentGoldGameOrDefault() },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 }
        },
        [BoxPlayerConversionConfig.BoxGuidePlayerTag.BG_WUPAN] = {
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[1] },
            { cType = BoxPlayerConversionConfig.ConversionType.GoldGame, gameId = self._goldGames[2] },
            { cType = BoxPlayerConversionConfig.ConversionType.Rrby, gameId = 0 }
        },
    }
    
    return conversionConfigs[self._tagType] or {}
end

-- 获取最近的金币游戏或默认值
function BoxConversionRateModule:_getRecentGoldGameOrDefault()
    return (self._recentGoldGame and self._recentGoldGame ~= 0) and self._recentGoldGame or self._goldGames[2]
end

-- 触发延迟 重新开始计算时间
function BoxConversionRateModule:trackDelay()
    self:startConversion()
end

return BoxConversionRateModule
