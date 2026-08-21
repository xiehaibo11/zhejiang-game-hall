local CaiYunGuideModule = CF.gameClass("CaiYunGuideModule", CF.ModuleBase)
local CaiYunGuideConfig = CF.gameRequire("Modules.CaiYunGuide.Config")

CaiYunGuideModule.CAIYUN_SHOW_GUIDE_TIP = "CAIYUN_SHOW_GUIDE_TIP"

function CaiYunGuideModule:ctor()
    CaiYunGuideModule.super.ctor(self)

    if XH.isNeedInitPrayGuideData then
        self:initData()
        XH.isNeedInitPrayGuideData = false
    end
end

function CaiYunGuideModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = CF.game:getModule("RightBtns"), eventKeyName = "EVENT_SHOW_TING_BUTTON", callBack = "onShowTingButton"},
        {module = CF.game:getModule("RightBtns"), eventKeyName = "EVENT_HIDE_TING_BUTTON", callBack = "onHideTingButton"},
        {module = CF.game:getModule("GameLayer"):getGameData(), eventKeyName = "EVENT_MAHLAYER_SURPLUS_MAH", callBack = "onEventSurplusMah"}
    }
end

function CaiYunGuideModule:initData()
    -- 由于每次进游戏区，module都会重新new，导致这些全局的值被清除，所以放在XH下
    XH.PrayGuideValues = {
        _isFirstTing = true,
        _tingStateCount = 0,
        -- 是否显示但未使用，-1.原始状态（未显示），0.显示未使用，1.显示已使用
        _isShowButNoUse = {-1, -1, -1, -1 }, -- 每个场景单独计算
        -- 当前小局使用的次数
        _curRoundUseCount = 0,
        -- 触发但未使用的小局数，需要存本地，不跟该大局相关
        _showButNoUseRoundCount = { 0, 0, 0, 0 }, -- 每个场景单独计算 需要存本地，不跟该大局相关
        -- 触发任意1条10秒内有其他再次满足触发条件，则不显示
        _curShowTime = 0,
        --[[使用成功后的触发次数，用于判断：如果点击后成功使用，则后续3次激活时重新回到5秒展示，无论这3次的前一次有没有使用都不会增加时长。需要存本地，不跟该大局相关 
            当 0 < _userAfterTimes < CaiYunGuideConfig.TotalConfig.useAfterTimes，则_activeTime = CaiYunGuideConfig.TotalConfig.minTime，否则时间增加
        ]]
        _useAfterTimes = 0, -- 需要存本地，不跟该大局相关
        _activeTime = 0, -- 显示的时长，首次5秒，后续出现如果未使用，则下次激活时增加1秒，最大增加到10秒后不再增加。需要存本地，不跟该大局相关
        _newGuideProps = {},
        _timerID = nil,
        _curOpenNewGuide = -1, -- -1：需要初始化，0：初始化过且未开启，1：初始化过且开启
        _lastUseSuccess = false,
    }
    self:resetAllValues()
end

function CaiYunGuideModule:onGameStartChanged(event)
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

function CaiYunGuideModule:clearTimeId()
    if XH.PrayGuideValues._timerID then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(XH.PrayGuideValues._timerID)
        XH.PrayGuideValues._timerID = nil
    end
end

function CaiYunGuideModule:onShowTingButton()
    self:setTingStateCount(false)
    self:checkPrayGuide(CF.game:getModule("GameLayer"):getGameData():getSurPlusCounts(), true)
end

function CaiYunGuideModule:onHideTingButton()
    self:setTingStateCount(true)
end

function CaiYunGuideModule:onEventSurplusMah(event)
    local surplusCounts = CF.game:getModule("GameLayer"):getGameData():getSurPlusCounts()
    if surplusCounts <= 0 then
        return 
    end
    self:checkPrayGuide(surplusCounts, false)
end

function CaiYunGuideModule:setTingStateCount(isClear)
    if isClear then
        XH.PrayGuideValues._tingStateCount = 0
    else
        XH.PrayGuideValues._tingStateCount = XH.PrayGuideValues._tingStateCount + 1
    end
    self:_log(9);
end

function CaiYunGuideModule:resetTingStateCount()
    -- 对局小结束调用
    XH.PrayGuideValues._isFirstTing = true;
    XH.PrayGuideValues._tingStateCount = 0;
    XH.PrayGuideValues._curRoundUseCount = 0;
    local isChanged = false
    for i, v in ipairs(XH.PrayGuideValues._isShowButNoUse) do
        if (v == 0) then
            -- 触发后未使用，记一次
            XH.PrayGuideValues._showButNoUseRoundCount[i] = XH.PrayGuideValues._showButNoUseRoundCount[i] + 1
            isChanged = true
        end
    end
    if isChanged then
        self:_saveLocalByPrayNewGuide()
    end
end

function CaiYunGuideModule:onGameStart()
end

function CaiYunGuideModule:onGameEnd()
    self:clearTimeId()
    local data = {
        propid = 0,
        state = CaiYunGuideConfig.State.TIMEOUT,
        scene = CaiYunGuideConfig.Scene.SCENE_0,
        time = 0
    }
    self:dispatchEvent({ name = CaiYunGuideModule.CAIYUN_SHOW_GUIDE_TIP, data = data })
    self:resetTingStateCount()
end

function CaiYunGuideModule:usePrayPropSuccess(scene)
    scene = scene or CaiYunGuideConfig.Scene.SCENE_0
    XH.PrayGuideValues._curRoundUseCount = XH.PrayGuideValues._curRoundUseCount + 1;
    if (scene == CaiYunGuideConfig.Scene.SCENE_0) then
        return;
    end

    -- 1.增加小局使用次数
    -- 2.设置使用状态
    -- 3.清空触发但未使用的小局数
    XH.PrayGuideValues._isShowButNoUse[scene] = 1;
    XH.PrayGuideValues._isFirstTing = false;
    XH.PrayGuideValues._useAfterTimes = 0;
    XH.PrayGuideValues._showButNoUseRoundCount[scene] = 0;
    XH.PrayGuideValues._lastUseSuccess = true;
    self:_saveLocalByPrayNewGuide();

    local data = {
        propid = 0,
        state = CaiYunGuideConfig.State.USE_SUCCESS,
        scene = CaiYunGuideConfig.Scene.SCENE_0,
        time = 0
    }
    self:dispatchEvent({ name = CaiYunGuideModule.CAIYUN_SHOW_GUIDE_TIP, data = data })

    self:clearTimeId()

    self:_log(11, { scene = scene });
end

--听牌的时候才走这个判断，lastPaiCount 还剩多少张牌，isCheckTing 是否检测听， 
function CaiYunGuideModule:checkPrayGuide(lastPaiCount, isCheckTing)
    lastPaiCount = lastPaiCount or 0
    isCheckTing = isCheckTing or false
    if (XH.PrayGuideValues._curRoundUseCount >= CaiYunGuideConfig.TotalConfig.roundMax) then
        self:_log(4); -- 每小局如果已使用求财运任意道具2个，则不触发
        return;
    end
    local curTime = os.time()
    if (curTime - XH.PrayGuideValues._curShowTime <= CaiYunGuideConfig.TotalConfig.showTimeCD) then
        self:_log(6); -- 触发任意1条10秒内有其他再次满足触发条件，则不显示
        return;
    end
    local sceneCfg = CaiYunGuideConfig.TotalConfig.scene;
    local probability = math.random(1, 100);
    if (isCheckTing) then
        if (XH.PrayGuideValues._isFirstTing) then
            -- 加入第一小局触发了scene_1，但是未使用（冷却2小局），第2小局的时候首次听牌不会触发，这里处理成不阻断后续场景的判断，所以增加isCheck，用于检测是否可以触发scene_1
            local isCheck = false;
            if (XH.PrayGuideValues._isShowButNoUse[CaiYunGuideConfig.Scene.SCENE_1] == 0 and XH.PrayGuideValues._showButNoUseRoundCount[CaiYunGuideConfig.Scene.SCENE_1] <= sceneCfg[CaiYunGuideConfig.Scene.SCENE_1][2]) then
                self:_log(5, { scene = CaiYunGuideConfig.Scene.SCENE_1, roundCD = sceneCfg[CaiYunGuideConfig.Scene.SCENE_1][2] });
            elseif (probability > (sceneCfg[CaiYunGuideConfig.Scene.SCENE_1][1] or 100)) then
                self:_log(1, { scene = CaiYunGuideConfig.Scene.SCENE_1, curProb = probability, cfgProb = sceneCfg[CaiYunGuideConfig.Scene.SCENE_1][1] });
            else
                isCheck = true;
            end
            if (isCheck) then
                XH.PrayGuideValues._isFirstTing = false;
                self:noticeUIPrayProp(CaiYunGuideConfig.Scene.SCENE_1);
                return;
            end
        end
        local tingCnt = XH.PrayGuideValues._tingStateCount - 1    -- -1是因为听牌状态下摸牌次数不能立马就计算，所以需要比实际大1
        if (sceneCfg[CaiYunGuideConfig.Scene.SCENE_2][1] == tingCnt and sceneCfg[CaiYunGuideConfig.Scene.SCENE_2][2] < lastPaiCount) then
            if (probability > (sceneCfg[CaiYunGuideConfig.Scene.SCENE_2][3] or 100)) then
                self:_log(1, { scene = CaiYunGuideConfig.Scene.SCENE_2, curProb = probability, cfgProb = sceneCfg[CaiYunGuideConfig.Scene.SCENE_2][3] });
                return;
            end
            if (XH.PrayGuideValues._isShowButNoUse[CaiYunGuideConfig.Scene.SCENE_2] == 0 and XH.PrayGuideValues._showButNoUseRoundCount[CaiYunGuideConfig.Scene.SCENE_2] <= sceneCfg[CaiYunGuideConfig.Scene.SCENE_2][4]) then
                -- 触发后如果未使用，冷却小局
                self:_log(5, { scene = CaiYunGuideConfig.Scene.SCENE_2, roundCD = sceneCfg[CaiYunGuideConfig.Scene.SCENE_2][4] });
                return;
            end
            -- 每小局听牌状态持续摸5张牌未胡牌，且剩余可摸的牌大于10张（不含留牌玩法中留牌的牌数）
            self:noticeUIPrayProp(CaiYunGuideConfig.Scene.SCENE_2);
            return;
        end
        self:_log(14, { scene = CaiYunGuideConfig.Scene.SCENE_2 });
        if (sceneCfg[CaiYunGuideConfig.Scene.SCENE_3][1] == tingCnt and sceneCfg[CaiYunGuideConfig.Scene.SCENE_3][2] < lastPaiCount) then
            if (probability > (sceneCfg[CaiYunGuideConfig.Scene.SCENE_3][3] or 100)) then
                self:_log(1, { scene = CaiYunGuideConfig.Scene.SCENE_3, curProb = probability, cfgProb = sceneCfg[CaiYunGuideConfig.Scene.SCENE_3][3] or 100 });
                return;
            end
            if (XH.PrayGuideValues._isShowButNoUse[CaiYunGuideConfig.Scene.SCENE_3] == 0 and XH.PrayGuideValues._showButNoUseRoundCount[CaiYunGuideConfig.Scene.SCENE_3] <= sceneCfg[CaiYunGuideConfig.Scene.SCENE_3][4]) then
                -- 触发后如果未使用，冷却小局
                self:_log(5, { scene = CaiYunGuideConfig.Scene.SCENE_3, roundCD = sceneCfg[CaiYunGuideConfig.Scene.SCENE_3][4] });
                return;
            end
            -- 每小局听牌状态持续摸8张牌未胡牌，且剩余可摸的牌大于10张（不含留牌玩法中留牌的牌数）
            self:noticeUIPrayProp(CaiYunGuideConfig.Scene.SCENE_3);
            return;
        end
        self:_log(14, { scene = CaiYunGuideConfig.Scene.SCENE_3 });
    elseif (sceneCfg[CaiYunGuideConfig.Scene.SCENE_4][1] == lastPaiCount) then
        if (probability > (sceneCfg[CaiYunGuideConfig.Scene.SCENE_4][2] or 100)) then
            self:_log(1, { scene = CaiYunGuideConfig.Scene.SCENE_4, curProb = probability, cfgProb = sceneCfg[CaiYunGuideConfig.Scene.SCENE_4][2] or 100 });
            return;
        end
        if (XH.PrayGuideValues._isShowButNoUse[CaiYunGuideConfig.Scene.SCENE_4] == 0 and XH.PrayGuideValues._showButNoUseRoundCount[CaiYunGuideConfig.Scene.SCENE_4] <= sceneCfg[CaiYunGuideConfig.Scene.SCENE_4][3]) then
            -- 触发后如果未使用，冷却小局
            self:_log(5, { scene = CaiYunGuideConfig.Scene.SCENE_4, roundCD = sceneCfg[CaiYunGuideConfig.Scene.SCENE_4][3] });
            return;
        end
        -- 每小局剩余最后10张可摸的牌时触发
        self:noticeUIPrayProp(CaiYunGuideConfig.Scene.SCENE_4);
    end
end

function CaiYunGuideModule:noticeUIPrayProp(scene)
    self:_initNewGuideProps()
    local randomProps = XH.PrayGuideValues._newGuideProps or {};
    if (#randomProps == 0) then
        self:_log(13);
        return;
    end
    if not scene or scene == CaiYunGuideConfig.Scene.SCENE_0 then
        self:_log(15);
        return
    end
    self:_log(10, { scene = scene });
    local propid = randomProps[math.random(1, #randomProps)];
    local tips = CaiYunGuideConfig.Tips[propid]
    local tip = tips[scene];
    XH.PrayGuideValues._curShowTime = os.time()
    if (XH.PrayGuideValues._useAfterTimes >= CaiYunGuideConfig.TotalConfig.useAfterTimes) then
        XH.PrayGuideValues._useAfterTimes = 0;
    elseif (XH.PrayGuideValues._lastUseSuccess or XH.PrayGuideValues._useAfterTimes > 0) then
        -- 如果上次使用成功 || 之前有一次使用成功
        XH.PrayGuideValues._useAfterTimes = XH.PrayGuideValues._useAfterTimes + 1
    end
    XH.PrayGuideValues._showButNoUseRoundCount[scene] = 0; -- 触发了，说明这个没有冷却，或者冷却局数已经过了
    if (XH.PrayGuideValues._isShowButNoUse[scene] == -1) then
        -- 默认状态 ---->>>> 显示但未使用
        XH.PrayGuideValues._isShowButNoUse[scene] = 0;
    end
    self:_saveLocalByPrayNewGuide();

    if (XH.PrayGuideValues._useAfterTimes > 0) then
        -- 如果点击后成功使用，则后续3次激活时重新回到5秒展示，无论这3次的前一次有没有使用都不会增加时长
        XH.PrayGuideValues._activeTime = CaiYunGuideConfig.TotalConfig.minTime;
        self:_log(12, { scene = scene });
    else
        XH.PrayGuideValues._activeTime = math.min(XH.PrayGuideValues._activeTime + 1, CaiYunGuideConfig.TotalConfig.maxTime);
        if (XH.PrayGuideValues._activeTime ~= CaiYunGuideConfig.TotalConfig.minTime) then
            self:_log(7, { scene = scene });
        end
    end

    local data = {
        propid = propid,
        state = CaiYunGuideConfig.State.SHOW,
        scene = scene,
        tip = tip,
        time = XH.PrayGuideValues._activeTime
    }
    self:dispatchEvent({ name = CaiYunGuideModule.CAIYUN_SHOW_GUIDE_TIP, data = data })

    self:clearTimeId()
    local tmpScene = scene;
    XH.PrayGuideValues._timerID = CF.SysTool.performDelayOnce(function()
        self:_log(8, { scene = tmpScene });
        XH.PrayGuideValues._lastUseSuccess = false;
        XH.PrayGuideValues._isShowButNoUse[scene] = 0;
        self:_saveLocalByPrayNewGuide();
        local data = {
            propid = 0,
            state = CaiYunGuideConfig.State.TIMEOUT,
            scene = CaiYunGuideConfig.Scene.SCENE_0,
            time = 0
        }
        self:dispatchEvent({ name = CaiYunGuideModule.CAIYUN_SHOW_GUIDE_TIP, data = data })
        self:clearTimeId()
    end, XH.PrayGuideValues._activeTime + 2)  -- 计时会比显示出来慢2秒，所以加2秒
end

function CaiYunGuideModule:_initNewGuideProps()
    if (not XH.PrayGuideValues._newGuideProps or #XH.PrayGuideValues._newGuideProps == 0) then
        local allGoods = CF.game:getModule("CaiYunPropNew"):getPropListInfo()
        local randomProps = {}
        for i, v in ipairs(allGoods) do
            if CaiYunGuideConfig.Tips[tonumber(v.value)] then
                table.insert(randomProps, tonumber(v.value))
            end
        end
        XH.PrayGuideValues._newGuideProps = randomProps
    end
end

function CaiYunGuideModule:_saveLocalByPrayNewGuide()
    local activeTime = XH.PrayGuideValues._activeTime + 1
    local value = table.concat(XH.PrayGuideValues._showButNoUseRoundCount, ",") .. "_" .. XH.PrayGuideValues._useAfterTimes .. "_" .. activeTime .. "_" .. table.concat(XH.PrayGuideValues._isShowButNoUse, ",")
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PRAY_GUIDE, value)
end

function CaiYunGuideModule:_initDataByPrayNewGuide()
    local data = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PRAY_GUIDE, '0,0,0,0_0_' .. CaiYunGuideConfig.TotalConfig.minTime .. '_-1,-1,-1,-1');
    local values = {}
    for v in string.gmatch(data, "([^_]+)") do
        table.insert(values, v)
    end
    XH.PrayGuideValues._showButNoUseRoundCount = {}
    for v in string.gmatch((values[1] or '0,0,0,0'), "([^,]+)") do
        table.insert(XH.PrayGuideValues._showButNoUseRoundCount, tonumber(v))
    end
    XH.PrayGuideValues._useAfterTimes = tonumber(values[2] or 0);
    XH.PrayGuideValues._activeTime = tonumber(values[3] or (CaiYunGuideConfig.TotalConfig.minTime + 1)) - 1; -- 初始化，- 1是因为后续会判断 XH.PrayGuideValues._useAfterTimes <= 0，时，会触发+1，这样就不用区分是第一次，还是前面有出现但未使用的情况
    XH.PrayGuideValues._isShowButNoUse = {}
    for v in string.gmatch((values[4] or '-1,-1,-1,-1'), "([^,]+)") do
        table.insert(XH.PrayGuideValues._isShowButNoUse, tonumber(v))
    end
    local sceneCnt = #CaiYunGuideConfig.TotalConfig.scene
    for i = 1, sceneCnt do
        if not XH.PrayGuideValues._isShowButNoUse[i] then
            XH.PrayGuideValues._isShowButNoUse[i] = -1
        end
        if not XH.PrayGuideValues._showButNoUseRoundCount[i] then
            XH.PrayGuideValues._showButNoUseRoundCount[i] = 0
        end
    end
end

function CaiYunGuideModule:resetAllValues()
    self:_initDataByPrayNewGuide()
end

function CaiYunGuideModule:_log(type, data)
    data = data or {}
    local scene = data.scene or 1
    local msgs = {
        [1] = "跳过->概率不满足，场景：" .. scene .. "，当前：" .. (data.curProb or 0) .. "，配置：" .. (data.cfgProb or 0),
        -- [2] = '跳过->该地区未开启，配置的地区：' .. CaiYunGuideConfig.TotalConfig.areas.join(),
        -- [3] = '跳过->该游戏不参与新版求财运：' .. g.curGameInfo.gameID,
        [4] = "跳过->该小局已使用" .. XH.PrayGuideValues._curRoundUseCount .. "，超过配置次数：" .. CaiYunGuideConfig.TotalConfig.roundMax,
        [5] = "跳过->触发后未使用，场景：" .. scene .. "，冷却局：" .. (data.roundCD or 0) .. "，当前局：" .. XH.PrayGuideValues._showButNoUseRoundCount[scene],
        [6] = "跳过->触发过" .. CaiYunGuideConfig.TotalConfig.showTimeCD .. "s内再触发，时差：" .. os.time() - XH.PrayGuideValues._curShowTime,
        [7] = "前面没用过，时长+1，当前显示时长：" .. XH.PrayGuideValues._activeTime .. "s，场景：" .. scene,
        [8] = "超时未使用，场景：" .. scene,
        [9] = "设置连续听牌次数：" .. XH.PrayGuideValues._tingStateCount,
        [10] = "触发场景：" .. scene,
        [11] = "使用成功场景：" .. scene,
        [12] = "前面有一次使用成功，并且还在有效次数" .. CaiYunGuideConfig.TotalConfig.useAfterTimes .. "次内，显示最小时长：" .. XH.PrayGuideValues._activeTime .. "，场景：" .. scene,
        -- [13] = '该地区没有求财运道具',
        [14] = "未触发->场景：" .. scene .. ", 听牌次数：" .. XH.PrayGuideValues._tingStateCount,
        [15] = "触发，但是传的场景id是空"
    };
    print('lr_log: ', msgs[type]);
end

return CaiYunGuideModuledJ