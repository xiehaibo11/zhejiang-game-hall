local Shuffle4Module = CF.gameClass("Shuffle4Module", CF.ModuleBase)
local Shuffle4Config = CF.gameRequire("Modules.Shuffle4.Config")
local scheduler = cc.Director:getInstance():getScheduler()

Shuffle4Module.EVENT_PRE_NEXT_SHUFFLE_BY_TIP = "EVENT_PRE_NEXT_SHUFFLE_BY_TIP"  -- 顶部预约下局洗牌
Shuffle4Module.EVENT_SHOW_TIP_VIEW = "EVENT_SHOW_TIP_VIEW"  -- 显示顶部提示
Shuffle4Module.EVENT_USED_DISCOUNT = "EVENT_USED_DISCOUNT"  -- 使用折扣成功
Shuffle4Module.EVENT_SHOW_LOG = "EVENT_SHOW_LOG"    -- 显示日志
Shuffle4Module.EVENT_UPDATE_DISCOUNT_TIME = "EVENT_UPDATE_DISCOUNT_TIME" -- 更新折扣倒计时

function Shuffle4Module:ctor()
    Shuffle4Module.super.ctor(self)

    if XH.isNeedInitShuffleData then
        XH.isNeedInitShuffleData = false
        self:initData()
    end
    
    if self:isSupportPreShuffle() then
        if self.m_updateTimeID == nil then
            self.m_updateTimeID = scheduler:scheduleScriptFunc(handler(self, self.updateTime), 1, false)
        end
        
        self:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Get, callback = function (hasDiscount )
            if not hasDiscount then
                self:reqGetDiscount()
            end
        end})
        self:initIsShowLog()
    elseif CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID()) then
        if self.m_updateTimeID == nil then
            self.m_updateTimeID = scheduler:scheduleScriptFunc(handler(self, self.updateTime), 1, false)
        end
        self:reqShufflePlan({ type = Shuffle4Config.ShuffleOpt.Get })
    end
end

function Shuffle4Module:initIsShowLog()
    local manifestPath = un.FileSystem.getWritePath() .. un.const.HotFixPath .. "harbor/Lobby/project.manifest"
    local localManifest = un.hotfix.Manifest.new(manifestPath)
    local curChannel = ""
    if localManifest:isLoaded() then
        curChannel = localManifest:getChannel()
        -- self._isShowLog = tonumber(curChannel) ~= 20001828 and tonumber(curChannel) ~= 10001116
    end
end

function Shuffle4Module:onDestroy()
    if self.m_updateTimeID then
        scheduler:unscheduleScriptEntry(self.m_updateTimeID)
        self.m_updateTimeID = nil
    end
    Shuffle4Module.super.onDestroy(self)
end

function Shuffle4Module:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = CF.game:getModule("RightBtns"), eventKeyName = "EVENT_SHOW_TING_BUTTON", callBack = "onShowTingButton"},
        {module = CF.game:getModule("RightBtns"), eventKeyName = "EVENT_HIDE_TING_BUTTON", callBack = "onHideTingButton"},
        {module = CF.game:getModule("GameLayer"):getGameData(), eventKeyName = "EVENT_MAHLAYER_SURPLUS_MAH", callBack = "onEventSurplusMah"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHUFFLE_TIP_TAKE", callBack = "onShuffleTake"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRESHUFFLE_SHOW", callBack = "onShowShuffleBtn"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_TIP_SCENE", callBack = "onShowShuffleTipScene"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_SHUFFLE_USE_SUCCESS", callBack = "onUseSuccess"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_PRE_SUCCESS", callBack = "onUseSuccess"},
        {module = CF.game:getModule("WinLost"), eventKeyName = "EVENT_SHUFFLE_TIP_WIN_AND_LOST", callBack = "onShuffleWinLost"},
    }
end

function Shuffle4Module:onGameStartChanged(event)
    -- event.msg.oldState, event.msg.nowState
    if not event or not event.msg then
        return
    end
    if event.msg.oldState ~= event.msg.nowState then
        if not event.msg.nowState then
            self:onGameEnd()
        else
            self:onGameStart()
        end
    end
end

function Shuffle4Module:onGameStart()
    self.m_isShowWinLostView = false
    self:notUseDiscount()   -- 如果开局了，但是未使用折扣，也计算未使用
end

function Shuffle4Module:onGameEnd()
    -- 关闭顶部
    self:refreshRoundCD()
    CF.Shuffle4Data.m_noWildCardTimes = 0
    for i = 1, Shuffle4Config.TOP_TIP_SCENE_CNT, 1 do
        CF.Shuffle4Data.m_topShowCnt[i] = 0
    end
end

function Shuffle4Module:onShowShuffleBtn(event)
    -- 如果不可见，就当已预约下一局洗牌，不显示相关内容
    if not event or not event.msg or event.msg.isShow == nil then
        CF.Shuffle4Data.m_prNextShuffle = true  -- 是否预约了下一局洗牌
        return
    end
    CF.Shuffle4Data.m_prNextShuffle = not event.msg.isShow
end

function Shuffle4Module:onShowShuffleTipScene(event)
    if event and event.msg then
        if self:isSupportAllVisible() then
            local scene = tonumber(event.msg.scene or 0)
            if scene == 1 then
                self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_0, event.msg)
                self:onStartShuffle(event.msg.userIds)
            elseif scene == 2  then
                self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_1, event.msg)
                self:onStartShuffle({ event.msg.userId })
            end
        end
        if event.msg.isMe then
            CF.Shuffle4Data.m_curShuffled = true
        end
    end
end

-- 抓牌，用于判断财神
function Shuffle4Module:onShuffleTake(event)
    if event and event.msg then
        self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_7, event.msg)
    end
end

-- 
function Shuffle4Module:onShuffleWinLost(event)
    if event and event.msg then
        if event.msg.onlyNeedScore then return end
        self.m_isShowWinLostView = true
        if event.msg.isDianPao then
            self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_4)
        end
        self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_6, event.msg)
        self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_3, event.msg)
        self:checkTopTip(Shuffle4Config.TIP_SCENE.SCENE_2, event.msg)
        -- 再检测一下折扣弹窗
        self:checkShowDiscountView()
    end
end

function Shuffle4Module:onStartShuffle(userIds)
    if not userIds then
        return
    end
    local myUserID = CF.selfPlayerData:getNumberID()
    for _, v in pairs(userIds) do
        if v == myUserID then
            CF.Shuffle4Data.m_curShuffled = true
            return
        end
    end
end

function Shuffle4Module:refreshRoundCD()
    local isChanged = false
    for i, v in ipairs(CF.Shuffle4Data.m_topIsNotUse) do
        if (v == 0) then
            -- 触发后未使用，记一次
            CF.Shuffle4Data.m_topNotUseRound[i] = CF.Shuffle4Data.m_topNotUseRound[i] + 1
            if CF.Shuffle4Data.m_topNotUseRound[i] >= CF.Shuffle4Data.m_cfg.top[i].cdJuNum then
                -- 过了小局冷却，直接重置局cd
                CF.Shuffle4Data.m_topIsNotUse[i] = -1
                CF.Shuffle4Data.m_topNotUseRound[i] = 0
            end
            isChanged = true
        end
    end
    if isChanged then
        self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_KEY)
    end

    if CF.Shuffle4Data.m_disIsNotUse == 0 then
        CF.Shuffle4Data.m_disNotUseRound = CF.Shuffle4Data.m_disNotUseRound + 1
        if CF.Shuffle4Data.m_disCurInfo and CF.Shuffle4Data.m_disCurInfo.cdJuNum < CF.Shuffle4Data.m_disNotUseRound then
            -- 过了小局冷却，直接重置局cd
            CF.Shuffle4Data.m_disIsNotUse = -1
            CF.Shuffle4Data.m_disNotUseRound = 0
        end
        self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_NO_USE_CD_ROUND)
    end
end

function Shuffle4Module:updateTime()
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    if CF.Shuffle4Data.m_disLeftTime > 0 then
        self:dispatchEvent({ name = self.EVENT_UPDATE_DISCOUNT_TIME })
        if CF.Shuffle4Data.m_disLeftTime <= curTime then
            -- 折扣时间到期
            self:initDiscount()
        end
    end
    if CF.Shuffle4Data.m_topShowLeftTime > 0 and CF.Shuffle4Data.m_topShowLeftTime < curTime then
        self:notUseTop()
    end
    if not CF.Shuffle4Data.m_initCurTime then
        CF.Shuffle4Data.m_initCurTime = curTime
    end
    if not self:isSameDay(CF.Shuffle4Data.m_initCurTime, curTime) then
        -- 不是同一天，在游戏内跨天，重新计算3天冷却
        if CF.Shuffle4Data.m_topShowDayCnt then
            for i = 1, Shuffle4Config.TOP_TIP_SCENE_CNT, 1 do
                local tmp = CF.Shuffle4Data.m_topShowDayCnt[i]
                tmp[1] = curTime
                if not self:isSameDay((tmp[4] or 0) + 24 * 60 * 60, curTime) then
                    -- 前一天隔天了，直接清空，比如前天达到上限，昨天未登录，今天取到的tmp[3]对比今天时间就是已经过了3天，但其实连续已经被中断了
                    CF.Shuffle4Data.m_topShowDayCnt[i] = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
                    CF.Shuffle4Data.m_topInDayCD[i] = false
                elseif self:getMidnightTimestamp(tmp[3]) + Shuffle4Config.SHOW_CONTINUE_DAY * 24 * 60 * 60 + Shuffle4Config.SHOW_DAY_CD <= curTime then
                    -- 天数冷却过了
                    CF.Shuffle4Data.m_topShowDayCnt[i][3] = curTime
                    CF.Shuffle4Data.m_topShowDayCnt[i][2] = 0
                    CF.Shuffle4Data.m_topInDayCD[i] = false
                elseif tmp[2] < CF.Shuffle4Data.m_cfg.top[i].dayCnt then
                    -- 前一天未达到当日上限，直接清除连续天数cd
                    CF.Shuffle4Data.m_topShowDayCnt[i][3] = curTime
                    CF.Shuffle4Data.m_topInDayCD[i] = false
                end
            end
        end
        self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY)

        if CF.Shuffle4Data.m_disShowDayCnt then
            local tmp = CF.Shuffle4Data.m_disShowDayCnt
            tmp[1] = curTime
            if not self:isSameDay((tmp[4] or 0) + 24 * 60 * 60, curTime) then
                -- 前一天隔天了，直接清空，比如前天达到上限，昨天未登录，今天取到的tmp[3]对比今天时间就是已经过了3天，但其实连续已经被中断了
                CF.Shuffle4Data.m_disShowDayCnt = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
                CF.Shuffle4Data.m_disInDayCD = false
            elseif self:getMidnightTimestamp(tmp[3]) + Shuffle4Config.SHOW_CONTINUE_DAY * 24 * 60 * 60 + Shuffle4Config.SHOW_DAY_CD <= curTime then
                -- 天数冷却过了
                CF.Shuffle4Data.m_disShowDayCnt[3] = curTime
                CF.Shuffle4Data.m_disShowDayCnt[2] = 0
                CF.Shuffle4Data.m_disInDayCD = false
            elseif CF.Shuffle4Data.m_disCurInfo and CF.Shuffle4Data.m_disCurInfo.dayCnt and tmp[2] < CF.Shuffle4Data.m_disCurInfo.dayCnt then
                -- 前一天未达到当日上限，直接清除连续天数cd
                CF.Shuffle4Data.m_disShowDayCnt[3] = curTime
                CF.Shuffle4Data.m_disInDayCD = false
            end
        end
        self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_DAY_CD_KEY)
    end
end

function Shuffle4Module:initData()
    CF.Shuffle4Data = {
        m_disLeftTime = 0,      -- 使用折扣后，还剩多少时间（小结束点了折扣使用）
        m_topLeftTime = 0,      -- 顶部提示距离上一次显示还剩多少秒，用于处理10秒cd
        m_topShowLeftTime = 0,  -- 顶部提示显示后，几秒后隐藏，并设置超时未使用
        m_topShowScene = -1,    -- 顶部显示的scene，默认-1
        m_cfg = {
            top = Shuffle4Config.TIP_CONFIG.TOP,
        },
        m_topNotUseRound = {},  -- 每个场景下的顶部提示的冷却局数，使用则清空该场景的冷却
        m_topIsNotUse = {},     -- 每个场景下的顶部提示，是否显示了但未使用，-1：未显示未使用，0：显示未使用，1：显示且使用
        m_topShowCnt = {},      -- 每个场景下的顶部提示显示次数
        -- 如果连续3天，均达到弹出上限，且均未使用，则冷却3天（按72小时计算）不再弹出，第4天重新弹出。只要有通过弹出的提示使用，则重新计数。清缓存则全部重置，每小局结束时读取时间，防止跨天还在游戏里
        m_topShowDayCnt = {},   -- 每个场景下的顶部提示显示次数，用于处理每天最大显示上限，item格式：{ 时间戳, 当天次数, 连续天数的第一天时间戳（如果中断，则需要重置为当前时间）, 上一次写入时间 }
        m_topInDayCD = {},      -- 每个场景顶部是否进入3天cd，根据m_topShowDayCnt处理出来的结果
    
        m_disShowDayCnt = {},   -- 与m_topShowDayCnt格式一致，用于处理连续3天显示达到次数但未使用，进入冷却72h
        m_disInDayCD = false,   -- 折扣弹窗是否进入3天cd
        m_disNotUseRound = 0,   -- 显示但未使用，显示局cd
        m_disIsNotUse = -1,     -- 是否显示但未使用，-1：未显示未使用，0：显示未使用，1：显示且使用
    
        m_noWildCardTimes = 0,      -- 当前连续几次没有摸到万能牌，当为-1时，说明不用再判断了
        m_continueFailsRound = 0,   -- 连续失败小局数
        m_curShuffled = false,      -- 当前局是否洗牌
        m_initCurTime = XH.lobby:getModule("Shop"):getServerTime(),      -- 当前时间
        m_prNextShuffle = false,        -- 是否已预约下一局洗牌
        m_isShufflePlanActive = false,  -- 破冰活动触发
    }
    self:initDiscountCfg()
    self:initTopTipData()
    self:initDiscount(true)
end

function Shuffle4Module:initDiscountCfg()
    CF.Shuffle4Data.m_cfg.discount = Shuffle4Config:getDiscountCfg()
end

function Shuffle4Module:initTopTipData()
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    CF.Shuffle4Data.m_initCurTime = curTime    -- 初始化的时间，用于处理在游戏内跨天，未计算到连续3天的判断
    local tmpTopTip = {}
    local tmpTopTipDay = {}
    CF.Shuffle4Data.m_topShowCnt = {}
    for i = 1, Shuffle4Config.TOP_TIP_SCENE_CNT do
        CF.Shuffle4Data.m_topIsNotUse[i] = -1
        CF.Shuffle4Data.m_topShowCnt[i] = 0
        tmpTopTip[i] = 0
        tmpTopTipDay[i] = string.format("%d_%d_%d_%d", curTime, 0, curTime, curTime - 24 * 60 * 60)    -- 格式：时间戳&次数&第一天冷却的时间戳
    end

    -- 每个场景top_tip弹出的小局冷却数
    local data = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_KEY, table.concat(tmpTopTip, ","))
    for v in string.gmatch(data, "([^,]+)") do
        table.insert(CF.Shuffle4Data.m_topNotUseRound, tonumber(v))
    end

    -- 每个场景top_tip当天弹出的小局冷却数
    local dataDay = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY, table.concat(tmpTopTipDay, ","))
    local isSave = false
    for v in string.gmatch(dataDay, "([^,]+)") do
        local tmp = {}  -- { 时间，次数，连续天数的第一天时间戳（如果中断，则需要重置为当前时间） }
        for v2 in string.gmatch(v, "([^_]+)") do
            table.insert(tmp, tonumber(v2))
        end
        if not tmp[4] then
            isSave = true
            tmp[4] = curTime - 24 * 60 * 60
        end
        table.insert(CF.Shuffle4Data.m_topShowDayCnt, tmp)
    end
    for i = 1, Shuffle4Config.TOP_TIP_SCENE_CNT do
        if not CF.Shuffle4Data.m_topShowDayCnt[i] then
            CF.Shuffle4Data.m_topShowDayCnt[i] = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
        end
        local tmp = CF.Shuffle4Data.m_topShowDayCnt[i]
        local leftTimeMin = self:getMidnightTimestamp(tmp[3]) + Shuffle4Config.SHOW_CONTINUE_DAY * 24 * 60 * 60
        local leftTimeMax = leftTimeMin + Shuffle4Config.SHOW_DAY_CD
        CF.Shuffle4Data.m_topInDayCD[i] = leftTimeMin < curTime and leftTimeMax > curTime    -- 在冷却天数中
    end

    self:setTopDataByDate(isSave)
end

function Shuffle4Module:initDiscount(isGetLocal)
    CF.Shuffle4Data.m_disRemote = 100      -- 配置的折扣，需要根据服务分群获取设置
    -- 当前的折扣档位，需要根据服务下发的值设置配置中的档位
    CF.Shuffle4Data.m_disCurInfo = nil
    CF.Shuffle4Data.m_disLeftTime = 0

    if isGetLocal then
        local data = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_NO_USE_CD_ROUND, 0)
        CF.Shuffle4Data.m_disNotUseRound = data
    end

    self:setDisDataByDate()
end

-- 设置顶部提示天数冷却时间
function Shuffle4Module:setTopDataByDate(isSave)
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    local isChanged = false
    for i = 1, Shuffle4Config.TOP_TIP_SCENE_CNT do
        local tmp = CF.Shuffle4Data.m_topShowDayCnt[i]
        if (self:isSameDay((tmp[4] or 0) + 24 * 60 * 60, curTime) and curTime - Shuffle4Config.SHOW_DAY_CD - Shuffle4Config.SHOW_CONTINUE_DAY * 24 * 60 * 60 >= self:getMidnightTimestamp(tmp[3])) or (not self:isSameDay(tmp[1], curTime) and tmp[2] < CF.Shuffle4Data.m_cfg.top[i].dayCnt) then
            -- (上一次存储的时间是昨天 && 时间超过72小时（SHOW_DAY_CD）) || （不是同一天 && 小于当日上限次数） == 清零本地记录
            self:printLog(string.format("顶部提示场景%d 天冷却达到%d秒，清零", i, Shuffle4Config.SHOW_DAY_CD))
            CF.Shuffle4Data.m_topShowDayCnt[i] = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
            isChanged = true
            CF.Shuffle4Data.m_topInDayCD[i] = false
        elseif not self:isSameDay(tmp[1], curTime) then
            -- 如果不是同一天，则清除之前存储的值，今日上限从0开始
            CF.Shuffle4Data.m_topShowDayCnt[i][1] = curTime
            CF.Shuffle4Data.m_topShowDayCnt[i][2] = 0
            isChanged = true
        end
    end
    if isChanged or isSave then
        self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY)
    end
end

-- 设置折扣天数冷却时间
function Shuffle4Module:setDisDataByDate()
    self:dispatchEvent({ name = self.EVENT_USED_DISCOUNT, msg = { discount = self:getCurDiscount(), time = CF.Shuffle4Data.m_disLeftTime } })
    self:printLog(string.format("cur discount: %d, time: %d", self:getCurDiscount(), CF.Shuffle4Data.m_disLeftTime))

    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    local tmpTopTipDay = string.format("%d_%d_%d_%d", curTime, 0, curTime, curTime - 24 * 60 * 60)
    local dataDay = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_DAY_CD_KEY, tmpTopTipDay)
    local isSave = false
    local tmpDayCd = {}  -- { 时间，次数，连续天数的第一天时间戳（如果中断，则需要重置为当前时间） }
    for v in string.gmatch(dataDay, "([^_]+)") do
        table.insert(tmpDayCd, tonumber(v))
    end
    if not tmpDayCd[4] then
        isSave = true
        tmpDayCd[4] = curTime - 24 * 60 * 60
    end
    CF.Shuffle4Data.m_disShowDayCnt = tmpDayCd

    local tmp = CF.Shuffle4Data.m_disShowDayCnt
    local leftTimeMin = self:getMidnightTimestamp(tmp[3]) + Shuffle4Config.SHOW_CONTINUE_DAY * 24 * 60 * 60
    local leftTimeMax = leftTimeMin + Shuffle4Config.SHOW_DAY_CD
    CF.Shuffle4Data.m_disInDayCD = leftTimeMin < curTime and leftTimeMax > curTime    -- 在冷却天数中

    local isChanged = false
    local isLastDay = self:isSameDay((tmp[4] or 0) + 24 * 60 * 60, curTime)
    local isOut72H = curTime - Shuffle4Config.SHOW_DAY_CD - Shuffle4Config.SHOW_CONTINUE_DAY * 24 * 60 * 60 >= self:getMidnightTimestamp(tmp[3])
    local isNotSmaeDay = not self:isSameDay(tmp[1], curTime)
    if (isLastDay and isOut72H) or (isNotSmaeDay and CF.Shuffle4Data.m_disCurInfo and tmp[2] < CF.Shuffle4Data.m_disCurInfo.dayCnt) then
        -- (上一次存储的时间是昨天 && 时间超过72小时（SHOW_DAY_CD）) || （不是同一天 && 小于当日上限次数） == 清零本地记录
        isChanged = true
        self:printLog(string.format("折扣弹窗 天冷却达到%d秒，清零", Shuffle4Config.SHOW_DAY_CD))
        CF.Shuffle4Data.m_disShowDayCnt = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
        CF.Shuffle4Data.m_disInDayCD = false
    elseif not self:isSameDay(tmp[1], curTime) then
        -- 如果不是同一天，则清除之前存储的值，今日上限从0开始
        isChanged = true
        CF.Shuffle4Data.m_disShowDayCnt[1] = curTime
        CF.Shuffle4Data.m_disShowDayCnt[2] = 0
    end
    if isChanged or isSave then
        self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_DAY_CD_KEY)
    end
end

-- 设置当前折扣, value：服务下发的是id，不是disLimit区间值
function Shuffle4Module:setCurDiscount(data)
    if not data or not CF.Shuffle4Data.m_cfg or type(CF.Shuffle4Data.m_cfg.discount) ~= "table" or not CF.Shuffle4Data.m_cfg.discount[1] then
        self:initDiscount()
        return
    end
    local len = #(CF.Shuffle4Data.m_cfg.discount or {})
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    if tonumber(data.remainTime) > serverTime then
        -- 如果时间大于当前时间，则表示正在使用折扣，直接设置即可，因为当使用折扣时，服务返回的times和avgTimes是0
        for i = len, 1, -1 do
            local info = CF.Shuffle4Data.m_cfg.discount[i]
            if info and info.id == data.actId then
                CF.Shuffle4Data.m_disRemote = tonumber(data.discount)
                CF.Shuffle4Data.m_disCurInfo = info
                CF.Shuffle4Data.m_disLeftTime = tonumber(data.remainTime)
                self:setDisDataByDate()
                return
            end
        end
    end

    local actId = tonumber(data.actId)
    local remainTime = tonumber(data.remainTime)
    local avgTimes = tonumber(data.avgTimes or -1)
    local times = tonumber(data.times)
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    if times < avgTimes then
        self:initDiscount()
        return
    end
    for i = len, 1, -1 do
        local info = CF.Shuffle4Data.m_cfg.discount[i]
        if info and tonumber(info.disLimit) <= avgTimes then
            CF.Shuffle4Data.m_disRemote = tonumber(info.discount)
            CF.Shuffle4Data.m_disCurInfo = info
            CF.Shuffle4Data.m_disLeftTime = remainTime
            self:setDisDataByDate()
            return
        end
    end
    self:initDiscount()
end

-- 获取当前折扣，乘以了100
function Shuffle4Module:getCurDiscount()
    -- 必须支持预洗牌才有
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    return (CF.gameSub and CF.roomData and CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID()) and CF.Shuffle4Data.m_disLeftTime > serverTime) and CF.Shuffle4Data.m_disRemote or 100
end

function Shuffle4Module:getCurDisTime()
    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    return (CF.gameSub and CF.roomData and CF.gameSub:getIsOpenShuffle(CF.roomData:getGameID()) and CF.Shuffle4Data.m_disLeftTime > serverTime) and CF.Shuffle4Data.m_disLeftTime - serverTime or 0
end

-- 使用成功，清除状态
function Shuffle4Module:onUseSuccess()
    local tmpScene = CF.Shuffle4Data.m_topShowScene
    if tmpScene == -1 then
        return
    end
    if not CF.Shuffle4Data.m_topShowDayCnt[tmpScene] then
        self:printLog(string.format("scene:%d topShowDayCnt[scene] is nil", tmpScene), json.encode(CF.Shuffle4Data.m_topShowDayCnt))
        return
    end
    -- 使用成功
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    CF.Shuffle4Data.m_topShowDayCnt[tmpScene] = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
    CF.Shuffle4Data.m_topIsNotUse[tmpScene] = 1
    CF.Shuffle4Data.m_topNotUseRound[tmpScene] = 0
    CF.Shuffle4Data.m_topShowScene = -1
    self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY)

    self:dispatchEvent({ name = self.EVENT_SHOW_TIP_VIEW, data = { isHide = true } })
end

-- 处理是否满足弹出顶部提示，scene：xn.SHUFFLE_TIP_SCENE
function Shuffle4Module:checkTopTip(scene, data)
    if not self:isSupportPreShuffle() then
        self:printLog("not support pre shuffle for top")
        return
    end
    local topData = CF.Shuffle4Data.m_topShowDayCnt[scene]
    local topCfgData = CF.Shuffle4Data.m_cfg.top[scene]
    local topInDayCD = CF.Shuffle4Data.m_topInDayCD[scene]
    if data and data.score and data.score > 0 then
        -- 赢了就重置连输局数
        CF.Shuffle4Data.m_continueFailsRound = 0
    end
    if not topData or not topCfgData then
        self:printLog(string.format("scene:%d config is nil, or topShowDayCnt is nil", scene))  -- 配置不存在
        return
    end
    if topInDayCD then
        self:printLog(string.format("scene:%d is in day cd", scene))       -- 3天均达到上限，但未使用，进入72小时的cd
        return
    end
    if topData[2] >= topCfgData.dayCnt then
        self:printLog(string.format("scene:%d is to day max", scene))       -- 到达当天上限
        return
    end
    if CF.Shuffle4Data.m_topShowCnt[scene] >= topCfgData.roundCnt then
        self:printLog(string.format("scene:%d is to round max", scene))     -- 到达小局显示上限
        return
    end
    if CF.Shuffle4Data.m_topIsNotUse[scene] == 0 and CF.Shuffle4Data.m_topNotUseRound[scene] <= topCfgData.cdJuNum then
        self:printLog(string.format("scene:%d in round cd, curRound:%d, totalRound:%d", scene, CF.Shuffle4Data.m_topNotUseRound[scene], topCfgData.cdJuNum))     -- 超时未使用，导致进入小局冷却
        return
    end

    local serverTime = XH.lobby:getModule("Shop"):getServerTime()
    if CF.Shuffle4Data.m_topLeftTime >= serverTime then
        self:printLog(string.format("scene:%d is cd lefttime:%d", scene, CF.Shuffle4Data.m_topLeftTime - serverTime))   -- 顶部显示还在冷却10s
        return
    end
    if CF.Shuffle4Data.m_prNextShuffle then
        self:printLog(string.format("scene:%d, but pre nextRound", scene))  -- 已经预约下一局洗牌
        return
    end
    if CF.Shuffle4Data.m_isDisShowing then
        self:printLog(string.format("scene:%d, but discount view is showing", scene))  -- 折扣洗牌弹窗已弹出
        return
    end
    if scene == Shuffle4Config.TIP_SCENE.SCENE_0 then  -- 当其他玩家本局开局时使用了洗牌，但自己没有使用，且没有预约下一局洗牌
        if not data then
            self:printLog(string.format("scene:%d, data is nil", scene))
            return
        end
        if type(data.userIds) == "table" then
            local nicknames = {}
            for i, v in ipairs(data.userIds) do
                if v == CF.selfPlayerData:getNumberID() then
                    self:printLog(string.format("scene:%d, but youself shuffling", scene))  -- 当前局自己已经在洗牌了
                    return
                end
                local user = CF.roomData:getPlayerDataNumberID(v)
                if user then
                    nicknames[#nicknames + 1] = XH.StringTool.cutStringByLength(user:getNickName2(), 8)
                end
            end
            local nickname = nicknames[math.random(1, #nicknames)]
            local tip = string.format(CF.Shuffle4Data.m_cfg.top[Shuffle4Config.TIP_SCENE.SCENE_0].tip, nickname)
            self:showTopTip(Shuffle4Config.TIP_SCENE.SCENE_0, tip)
        end
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_1 then  -- 当其他玩家预约了下一局洗牌，且自己没有预约下一局洗牌
        if not data then
            self:printLog(string.format("scene:%d, data is nil", scene))
            return
        end
        if data.userId and data.userId ~= CF.selfPlayerData:getNumberID() then
            local user = CF.roomData:getPlayerDataNumberID(data.userId)
            if user then
                local nickname = XH.StringTool.cutStringByLength(user:getNickName2(), 8)
                local tip = string.format(CF.Shuffle4Data.m_cfg.top[Shuffle4Config.TIP_SCENE.SCENE_1].tip, nickname)
                self:showTopTip(Shuffle4Config.TIP_SCENE.SCENE_1, tip)
            end
        end
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_2 then  -- 当自己本局失败，且分数小于0，且自己没有预约下局洗牌
        if not data then
            self:printLog(string.format("scene:%d, data is nil", scene))
            return
        end
        if data.score < 0 then
            self:showTopTip(scene)
        end
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_3 then  -- 本局自己使用了洗牌，且获得胜利，且没有预约下一局洗牌
        if not data then
            self:printLog(string.format("scene:%d, data is nil", scene))
            return
        end
        if data.score > 0 and CF.Shuffle4Data.m_curShuffled then
            self:showTopTip(scene)
        end
        CF.Shuffle4Data.m_curShuffled = false
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_4 then  -- 被点炮，且没有预约下一局洗牌
        self:showTopTip(scene)
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_5 then
        -- 暂时不做
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_6 then  -- 连续失败3小局，且没有预约下一局洗牌
        if not data then
            self:printLog(string.format("scene:%d, data is nil", scene))
            return
        end
        if data.score <= 0 then
            CF.Shuffle4Data.m_continueFailsRound = CF.Shuffle4Data.m_continueFailsRound + 1
        else
            CF.Shuffle4Data.m_continueFailsRound = 0
        end
        if CF.Shuffle4Data.m_continueFailsRound >= Shuffle4Config.TOP_SHOW_LOSE_ROUND_BY_SCENE_6 then
            CF.Shuffle4Data.m_continueFailsRound = 0
            self:showTopTip(scene)
        end
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_7 then  -- 麻将癞子/财神玩法第5手没有摸到癞子/财神，且没有预约下一局洗牌（只需要记录第5手）
        if not data then
            self:printLog(string.format("scene:%d, data is nil", scene))
            return
        end
        if not data.isGameHasJoker then
            self:printLog(string.format("scene:%d, game rule is no wildcard", scene))
            return
        end
        if CF.Shuffle4Data.m_noWildCardTimes >= 0 then
            if data.isHandHasJoker then     -- 如果发牌时就有万能牌，则重置这个值为-1
                CF.Shuffle4Data.m_noWildCardTimes = -1
            elseif data.isHandCurJoker then         -- 如果当前摸到的牌是万能牌，则重置这个值为-1
                CF.Shuffle4Data.m_noWildCardTimes = -1
            else
                CF.Shuffle4Data.m_noWildCardTimes = CF.Shuffle4Data.m_noWildCardTimes + 1
            end
        end
        if CF.Shuffle4Data.m_noWildCardTimes == Shuffle4Config.TOP_SHOW_NO_WILD_CARD_TIMES then
            CF.Shuffle4Data.m_noWildCardTimes = -1
            self:showTopTip(scene)
        end
    elseif scene == Shuffle4Config.TIP_SCENE.SCENE_8 then
        -- 暂时不做
    end
end

-- 检测折扣弹窗是否弹出，只在小结束检测
function Shuffle4Module:checkShowDiscountView()
    if not self:isSupportPreShuffle() then
        self:printLog("not support pre shuffle for discount")
        return
    end
    if not CF.Shuffle4Data.m_cfg.discount then
        self:printLog("cur area has not discount config")
        return
    end
    if CF.Shuffle4Data.m_disInDayCD then
        self:printLog("discount in day cd (72h)")
        return
    end
    if CF.Shuffle4Data.m_disLeftTime > XH.lobby:getModule("Shop"):getServerTime() then
        self:printLog("discount is in use") -- 折扣正在使用当中
        return
    end
    if CF.Shuffle4Data.m_disCurInfo and CF.Shuffle4Data.m_disShowDayCnt[2] >= CF.Shuffle4Data.m_disCurInfo.dayCnt then
        self:printLog("in day time cd") -- 天cd中
        return
    end
    local random = math.random(1, 100)
    if CF.Shuffle4Data.m_disCurInfo and CF.Shuffle4Data.m_disCurInfo.prob < random then
        self:printLog("probability not satisfied")  -- 概率不满足
        return
    end
    if CF.Shuffle4Data.m_topShowScene ~= -1  then
        self:printLog("top is showing")
        return
    end
    if CF.Shuffle4Data.m_prNextShuffle then
        self:printLog("pre nextRound or no nextRound")  -- 已经预约下一局洗牌
        return
    end
    if CF.Shuffle4Data.m_isDisShowing then
        self:printLog("discount view is showing")  -- 折扣洗牌弹窗已弹出
        return
    end
    if CF.Shuffle4Data.m_disCurInfo and CF.Shuffle4Data.m_disIsNotUse == 0 and CF.Shuffle4Data.m_disNotUseRound < CF.Shuffle4Data.m_disCurInfo.cdJuNum then
        self:printLog(string.format("dis in round cd, curRound:%d, totalRound:%d", CF.Shuffle4Data.m_disNotUseRound, CF.Shuffle4Data.m_disCurInfo.cdJuNum))     -- 超时未使用，导致进入小局冷却
        return
    end

    local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    if not shuffleInfo or not shuffleInfo.cost then
        self:printLog("no shuffleInfo")
        return
    end
    if shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN then
        self:printLog("you have shuffle ticket")  -- 有洗牌券
        return
    end
    local value = CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_TODAY_BUY, 0)
    if self:isSameDay(XH.lobby:getModule("Shop"):getServerTime(), value) then
        self:printLog("you already buy in today")
        return
    end

    self:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Get, callback = function (hasDiscount )
        if not hasDiscount then
            self:reqGetDiscount(function()
                if CF.Shuffle4Data.m_disRemote == 100 then
                    self:printLog("yourself is no discount") -- 该玩家没有折扣活动
                    return
                end 
                self:showDiscountView()
            end)
        end
    end})
end

-- 显示顶部提示
function Shuffle4Module:showTopTip(scene, tip)
    local curTime = XH.lobby:getModule("Shop"):getServerTime()
    CF.Shuffle4Data.m_topShowScene = scene
    CF.Shuffle4Data.m_topLeftTime = Shuffle4Config.TOP_SHOW_CD + curTime
    CF.Shuffle4Data.m_topShowLeftTime = CF.Shuffle4Data.m_cfg.top[scene].showTime + curTime 
    CF.Shuffle4Data.m_topIsNotUse[scene] = 0
    CF.Shuffle4Data.m_topShowCnt[scene] = CF.Shuffle4Data.m_topShowCnt[scene] + 1
    self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY)

    tip = tip or CF.Shuffle4Data.m_cfg.top[scene].tip
    self:dispatchEvent({ name = self.EVENT_SHOW_TIP_VIEW, data = { isTop = true, scene = scene, tip = tip, delayTime = CF.Shuffle4Data.m_cfg.top[scene].showTime } })
end

-- 显示折扣弹窗
function Shuffle4Module:showDiscountView()
    CF.Shuffle4Data.m_isDisShowing = true
    CF.Shuffle4Data.m_disIsNotUse = 0
    self:dispatchEvent({ name = self.EVENT_SHOW_TIP_VIEW, data = { isTop = false, discountInfo = CF.Shuffle4Data.m_disCurInfo } })
end

-- 设置顶部未使用
function Shuffle4Module:notUseTop()
    CF.Shuffle4Data.m_topShowLeftTime = 0
    if CF.Shuffle4Data.m_topShowScene == -1 then
        return
    end
    CF.Shuffle4Data.m_topShowDayCnt[CF.Shuffle4Data.m_topShowScene][2] = CF.Shuffle4Data.m_topShowDayCnt[CF.Shuffle4Data.m_topShowScene][2] + 1
    CF.Shuffle4Data.m_topShowScene = -1
    self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY)
end

-- 不使用折扣
function Shuffle4Module:notUseDiscount()
    if not CF.Shuffle4Data.m_isDisShowing then
        return
    end
    CF.Shuffle4Data.m_isDisShowing = false
    CF.Shuffle4Data.m_disShowDayCnt[2] = CF.Shuffle4Data.m_disShowDayCnt[2] + 1 -- 设置折扣未使用
    self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_DAY_CD_KEY)
end

function Shuffle4Module:saveLocalstorage(key)
    local valueStr = ""
    if key == CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_DAY_KEY then
        for i = 1, Shuffle4Config.TOP_TIP_SCENE_CNT do
            valueStr = valueStr .. table.concat(CF.Shuffle4Data.m_topShowDayCnt[i], "_") .. ","
        end
        valueStr = string.sub(valueStr, 1, string.len(valueStr) - 1)
    elseif key == CF.userDefault.KEY_ID.KW_SHUFFLE4_TOP_TIP_KEY then
        valueStr = table.concat(CF.Shuffle4Data.m_topNotUseRound, ",")
    elseif key == CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_TIP_DAY_KEY then
        return
    elseif key == CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_DAY_CD_KEY then
        valueStr = table.concat(CF.Shuffle4Data.m_disShowDayCnt, "_")
    elseif key == CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_TODAY_BUY then
        valueStr = XH.lobby:getModule("Shop"):getServerTime()
    elseif key == CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_NO_USE_CD_ROUND then
        valueStr = CF.Shuffle4Data.m_disNotUseRound
    end
    CF.userDefault:setValue(key, valueStr)
end

function Shuffle4Module:useXipai()
    local scene = CF.Shuffle4Data.m_topShowScene
    local isTable = true
    if scene == Shuffle4Config.TIP_SCENE.SCENE_2 or scene == Shuffle4Config.TIP_SCENE.SCENE_3 or scene == Shuffle4Config.TIP_SCENE.SCENE_4 or scene == Shuffle4Config.TIP_SCENE.SCENE_6 or self.m_isShowWinLostView then
        isTable = false
    end
    self:dispatchEvent({ name = self.EVENT_PRE_NEXT_SHUFFLE_BY_TIP, isTable = isTable })
end

---req start
-- 获取5.0折扣
function Shuffle4Module:reqGetDiscount(callback)
    CF.reqShuffle5({ type = Shuffle4Config.ReqOptsType.OPTS_TYPE_GET }, self, function(_, req, type, data)
        self:onGetDiscount(req, type, data)
        if callback then
            callback()
        end
    end)
end

function Shuffle4Module:onGetDiscount(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.reply then
            return
        end
        local myUserID = CF.selfPlayerData:getNumberID()
        if tonumber(data.reply.userId) == myUserID then
            self:setCurDiscount(data.reply)
            self:printLog(string.format("http reqDis:{\n    times:%d,discount:%d,\n    avgTimes:%d,remainTime:%d\n}", data.reply.times,data.reply.discount, data.reply.avgTimes, tonumber(data.reply.remainTime)))
            self:printLog(string.format("discount: %d, time: %d", CF.Shuffle4Data.m_disRemote, CF.Shuffle4Data.m_disLeftTime))
        end
        local serverTime = XH.lobby:getModule("Shop"):getServerTime()
        if self._canSet and not (data.reply and tonumber(data.reply.remainTime) > serverTime) then
            self:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Set})
        end
    end
end

-- 使用5.0折扣
function Shuffle4Module:reqUseDiscount(callbak)
    if not CF.Shuffle4Data.m_disCurInfo then
        return
    end
    local shuffleInfo = CF.game:getModule("PropUse"):getShufflePropInfo(CF.gameSub:getShufflePropQuanID(), 1, CF.Shuffle4Data.m_disCurInfo.discount / 100)
    if shuffleInfo and shuffleInfo.type and shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH then
        CF.TipTool.showToast("您的道具不足，请进行充值")
        return
    end
    local reqData = {
        act_id = CF.Shuffle4Data.m_disCurInfo.id,
        remain_time = CF.Shuffle4Data.m_disCurInfo.showTime + XH.lobby:getModule("Shop"):getServerTime(),
        discount = CF.Shuffle4Data.m_disCurInfo.discount,
        type = Shuffle4Config.ReqOptsType.OPTS_TYPE_SET
    }
    self._useDisCallback = callbak
    CF.reqShuffle5(reqData, self, self.onUseDiscount)
end

function Shuffle4Module:onUseDiscount(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.reply then
            return
        end
        local myUserID = CF.selfPlayerData:getNumberID()
        if tonumber(data.reply.userId) == myUserID then
            -- 设置折扣使用成功，清除天缓存
            local curTime = XH.lobby:getModule("Shop"):getServerTime()
            CF.Shuffle4Data.m_disShowDayCnt = { curTime, 0, curTime, curTime - 24 * 60 * 60 }
            CF.Shuffle4Data.m_disIsNotUse = -1
            CF.Shuffle4Data.m_disNotUseRound = 0
            
            self:setCurDiscount(data.reply)
            self:printLog(string.format("use discount success:{\n    discount:%d,remainTime:%d\n}", data.reply.discount, tonumber(data.reply.remainTime)))
            self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_TODAY_BUY)
            self:saveLocalstorage(CF.userDefault.KEY_ID.KW_SHUFFLE4_DISCOUNT_NO_USE_CD_ROUND)
            
            self:useXipai()
            if self._useDisCallback then 
                self._useDisCallback() 
                self._useDisCallback = nil 
            end
        end
    end
end
---req end

function Shuffle4Module:isSameDay(timestamp1, timestamp2)
    local date1 = os.date("*t", timestamp1 or 0)
    local date2 = os.date("*t", timestamp2 or 0)

    return date1.year == date2.year
    and date1.month == date2.month
    and date1.day == date2.day
end

-- 获取当日凌晨时间戳
function Shuffle4Module:getMidnightTimestamp(time)
    -- 将时间戳转换为日期表
    local dateTable = os.date("*t", time)

    -- 设置时间为凌晨
    dateTable.hour = 0
    dateTable.min = 0
    dateTable.sec = 0

    -- 将日期表转换回时间戳
    local midnightTime = os.time(dateTable)
    return midnightTime
end

-- 创建按钮上的折扣显示，就不用每个包都要加这个资源了
function Shuffle4Module:getDiscountNode(parent, x, y, scale, isTable)
    scale = scale or 1
    local name = "DISCOUNT_NODE"
    if not parent or tolua.isnull(parent) or parent:getChildByName(name) then
        return
    end
    local csbPath = "cocosStudio/Common/CSB/GameBase/ShuffleDiscountNode.csb"
    local node = cc.CSLoader:createNodeWithVisibleSize(csbPath)
    node:setName(name)
    local txtDis = node:getChildByName("_KW_DISCOUNT_TXT")
    local discount = self:getCurDiscount()
    local displayCount = discount / 10
    if displayCount ~= math.floor(displayCount) then
        txtDis:setFontSize(25)
    end
    txtDis:setString(tostring(displayCount))
    node:setPosition(cc.p(x, y))
    parent:addChild(node)
    node:setVisible(discount > 0 and discount < 100)
    node:setScale(scale)
    local timeBg = node:getChildByName("_KW_DISCOUNT_TIME_BG")
    timeBg:setVisible(false)
    if isTable then
        timeBg:setPosition(cc.p(-300, -70))
        timeBg:setScale(1.5)
    else
        timeBg:setPosition(cc.p(85, 0))
    end
    return node
end

function Shuffle4Module:isSupportPreShuffle()
    return CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() and self:isOpenInArea()
end

function Shuffle4Module:isSupportShuffle6_0()
    return CF.roomData and CF.roomData.isSupportShuffle6_0 and CF.roomData:isSupportShuffle6_0()
end

function Shuffle4Module:isSupportAllVisible()
    return CF and CF.game and CF.game:getModule("PropUse") and CF.game:getModule("PropUse"):isSupportAllVisible()
end

function Shuffle4Module:printLog(logStr)
    if self._isShowLog then
        self:dispatchEvent({ name = self.EVENT_SHOW_LOG, msg = { txt = logStr } })
    end
end

function Shuffle4Module:isOpenInArea()
    return Shuffle4Config:isSupport()
end


-- 洗牌功能破冰策略
function Shuffle4Module:reqShufflePlan(param)
    param = param or {}
    self._canSet = nil

    if not self:isSupportShuffle6_0() then
        if param.callback then
            param.callback(false)
        end
        return
    end

    CF.reqShufflePlan({ type = param.type or Shuffle4Config.ShuffleOpt.Get }, self, function(_, req, type, data)
        local isDiscountActive  = false
        if type == XH.Req.TYPE.SUCCESS then
            if not data then
                return
            end
            local serverTime = XH.lobby:getModule("Shop"):getServerTime()
            local showTimeFunc = function()
                local showTime = tonumber(data.endTime)
                CF.Shuffle4Data.m_disRemote = data.discount
                CF.Shuffle4Data.m_disCurInfo = {
                    id =  data.planId,
                    dayCnt = 0,
                    cdJuNum = 0,
                    showTime = showTime - serverTime,
                    prob = 0,
                    discount = data.discount,
                    disLimit = 0,
                }
                CF.Shuffle4Data.m_disLeftTime = showTime
                CF.Shuffle4Data.m_isShufflePlanActive = true
                self:dispatchEvent({ name = self.EVENT_USED_DISCOUNT, msg = { discount = self:getCurDiscount(), time = CF.Shuffle4Data.m_disLeftTime } })
            end

            if data.resp and data.resp.askId == Shuffle4Config.ShuffleOpt.Get then
                local showTime = tonumber(data.endTime)
                isDiscountActive = showTime > 0
                local shuffleQuanCount = 0
                local propId = CF.gameSub:getShufflePropQuanID() or 0
                shuffleQuanCount = CF.selfPlayerData:getPropCountByID(propId)
                if showTime > 0 then
                    showTimeFunc()
                elseif showTime == 0 and data.cdJuCnt == 0 and shuffleQuanCount == 0 then
                    self._canSet = true
                    if not self:isSupportPreShuffle() then
                        self:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Set})
                    end
                else 
                    CF.Shuffle4Data.m_disRemote = 100
                    CF.Shuffle4Data.m_disCurInfo = nil
                    CF.Shuffle4Data.m_disLeftTime = 0
                    CF.Shuffle4Data.m_isShufflePlanActive = false
                    local propUseModule = CF.game:getModule("PropUse")
                    if propUseModule then
                        propUseModule:updateShuffleBtn()
                    end
                end
                if param.callback then
                    param.callback(isDiscountActive)
                end
            elseif data.resp and data.resp.askId == Shuffle4Config.ShuffleOpt.Set then
                showTimeFunc()
            elseif data.resp and data.resp.askId == Shuffle4Config.ShuffleOpt.Free then
                self:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Get})
            end
        end
    end)
end

function Shuffle4Module:isFree()
    local discount = self:getCurDiscount()
    local leftTime = self:getCurDisTime()
    return self:isShufflePlanActive() and discount == 0 and leftTime > 0
end

function Shuffle4Module:isShufflePlanActive()
    return (CF.Shuffle4Data and CF.Shuffle4Data.m_isShufflePlanActive) or false
end

function Shuffle4Module:getStrategyId()
    return (CF.Shuffle4Data and CF.Shuffle4Data.m_disCurInfo and CF.Shuffle4Data.m_disCurInfo.id) or 0
end

return Shuffle4Module