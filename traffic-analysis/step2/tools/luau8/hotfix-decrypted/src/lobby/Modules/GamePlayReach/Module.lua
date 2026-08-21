--[[
    玩法触达模块
    职责：
    1. 拉取并校验 IOP 配置（areaid/gameid/生效时间/展示次数）
    2. 管理红点已读状态与弹窗展示次数（本地持久化）
    3. 驱动标准弹窗展示与埋点上报
]]
local GamePlayReachModule = class("GamePlayReachModule", XH.ModuleBase)
local Config = require("lobby.Modules.GamePlayReach.Config")

GamePlayReachModule.EVENT_CONFIG_UPDATED = "EVENT_CONFIG_UPDATED"

local LOG_TAG = "[GamePlayReach]"

function GamePlayReachModule:ctor()
    GamePlayReachModule.super.ctor(self)
    self._configList = {}
    self._isReqing = false
    self._hasRequestedConfig = false
end

function GamePlayReachModule:getReqConfig()
    return {
        ReqGamePlayReach = { reqPath = "app.Req.ReqGamePlayReach", callBack = self.onRespGamePlayReach },
    }
end

--- 拉取 IOP 配置；进入大厅后仅请求一次，Debug/Test 下直接使用本地 mock
function GamePlayReachModule:reqConfig(force)
    if self._hasRequestedConfig and not force then
        return
    end
    if self._isReqing and not force then
        return
    end
    self._hasRequestedConfig = true
    if Config.USE_LOCAL_MOCK then
        self:updateConfigList(self:buildLocalMockData())
        return
    end
    self._isReqing = true
    self:startReq("ReqGamePlayReach")
end

function GamePlayReachModule:onRespGamePlayReach(cell, reqType, data)
    self._isReqing = false
    if reqType == XH.Req.TYPE.SUCCESS then
        self:updateConfigList(data)
        return
    end
    print(LOG_TAG, "onRespGamePlayReach fail, reqType:", reqType)
    -- 接口失败且处于 mock 模式时，降级本地数据保证流程可测
    if Config.USE_LOCAL_MOCK then
        self:updateConfigList(self:buildLocalMockData())
    else
        self._configList = {}
        self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
    end
end

--- 解析原始列表，过滤非法/过期/不匹配地区的配置
function GamePlayReachModule:updateConfigList(rawData)
    local ok, err = pcall(function()
        local list = rawData
        if type(rawData) == "table" and rawData.list then
            list = rawData.list
        end
        if type(list) ~= "table" then
            print(LOG_TAG, "updateConfigList invalid data type:", type(list))
            self._configList = {}
            return
        end

        local validList = {}
        local boxRoomGameList = XH.areaData:getBoxRoomGameList() or {}
        local teaRoomGameList = XH.areaData:getTeaHouseRoomGameList() or {}
        local boxRoomGameSet = {}
        for _, gameId in pairs(boxRoomGameList) do
            local id = tonumber(gameId)
            if id then
                boxRoomGameSet[id] = true
            end
        end
        for _, gameId in pairs(teaRoomGameList) do
            local id = tonumber(gameId)
            if id then
                boxRoomGameSet[id] = true
            end
        end
        for _, item in pairs(list) do
            if type(item) == "table" then
                local gameIds = self:parseIdList(item.game_ids or "")
                local filteredGameIds = {}
                for _, gameId in ipairs(gameIds) do
                    if boxRoomGameSet[gameId] then
                        table.insert(filteredGameIds, gameId)
                    end
                end
                item.game_ids = filteredGameIds
            end
            local conf, invalidReason = self:validateConfigItem(item)
            if conf and self:isConfigActive(conf) then
                table.insert(validList, conf)
            elseif invalidReason then
                print(LOG_TAG, "skip invalid config:", invalidReason)
            end
        end
        table.sort(validList, function(a, b)
            return (a.effective_time or 0) > (b.effective_time or 0)
        end)
        self._configList = validList
        self:clearStaleUnreadRedDots()
    end)
    if not ok then
        print(LOG_TAG, "updateConfigList error:", err)
        self._configList = {}
    end
    self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
end

--- 校验单条 IOP 配置并标准化字段；失败返回 nil 与原因
function GamePlayReachModule:validateConfigItem(item)
    if type(item) ~= "table" then
        return nil, "not_table"
    end
    for _, field in ipairs(Config.REQUIRED_FIELDS) do
        if item[field] == nil or item[field] == "" then
            return nil, "missing_" .. field
        end
    end

    local conf = {
        id = tonumber(item.id),
        title = tostring(item.title),
        content = tostring(item.content),
        update_type = tonumber(item.update_type),
        effective_time = tonumber(item.effective_time),
        valid_days = tonumber(item.valid_days),
        show_count = tonumber(item.show_count),
        game_ids = self:parseIdList(item.game_ids or item.gameid),
        rule_items = self:parseRuleItems(item.rule_items or item.rule_names),
    }

    if not conf.id or conf.id <= 0 then
        return nil, "invalid_id"
    end
    if conf.update_type ~= Config.UPDATE_TYPE.GAME_RULE and conf.update_type ~= Config.UPDATE_TYPE.FEATURE then
        return nil, "invalid_update_type"
    end
    if not conf.effective_time or not conf.valid_days or conf.valid_days <= 0 then
        return nil, "invalid_time"
    end
    if not conf.show_count or conf.show_count <= 0 then
        return nil, "invalid_show_count"
    end
    if conf.update_type == Config.UPDATE_TYPE.GAME_RULE and #conf.game_ids == 0 then
        return nil, "empty_game_ids"
    end
    return conf
end

function GamePlayReachModule:parseIdList(value)
    local result = {}
    if value == nil then
        return result
    end
    if type(value) == "table" then
        for _, v in pairs(value) do
            local num = tonumber(v)
            if num then
                table.insert(result, num)
            end
        end
        return result
    end
    for _, idStr in ipairs(string.split(tostring(value), ",")) do
        local num = tonumber(idStr)
        if num then
            table.insert(result, num)
        end
    end
    return result
end

function GamePlayReachModule:parseRuleItems(value)
    local result = {}
    if type(value) == "table" then
        for _, v in pairs(value) do
            if type(v) == "table" then
                table.insert(result, {
                    rule_id = tostring(v.rule_id or v.id or v.rule_name or ""),
                    rule_name = tostring(v.rule_name or v.name or ""),
                })
            elseif v ~= nil then
                table.insert(result, { rule_id = tostring(v), rule_name = tostring(v) })
            end
        end
        return result
    end
    if type(value) == "string" and value ~= "" then
        for _, name in ipairs(string.split(value, ",")) do
            if name ~= "" then
                table.insert(result, { rule_id = name, rule_name = name })
            end
        end
    end
    return result
end

--- 功能更新可不配 gameid；玩法更新必须匹配 gameid
function GamePlayReachModule:isGameMatched(conf, gameId)
    if not conf or not gameId then
        return false
    end
    if not conf.game_ids or #conf.game_ids == 0 then
        return conf.update_type == Config.UPDATE_TYPE.FEATURE
    end
    gameId = tonumber(gameId)
    for _, id in ipairs(conf.game_ids) do
        if id == gameId then
            return true
        end
    end
    return false
end

function GamePlayReachModule:isConfigActive(conf)
    if not conf or not conf.effective_time or not conf.valid_days then
        return false
    end
    local now = XH.lobby:getModule("Shop"):getServerTime()
    local endTime = conf.effective_time + conf.valid_days * 86400
    return now >= conf.effective_time and now <= endTime
end

function GamePlayReachModule:getReadStateKey(configId)
    return tostring(configId) .. "_" .. XH.areaData:getAreaID() .. "_" .. XH.playerData:getNumberID()
end

function GamePlayReachModule:getReadState()
    local state = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_GAMEPLAY_REACH_READ_STATE, {})
    return type(state) == "table" and state or {}
end

function GamePlayReachModule:saveReadState(state)
    if type(state) ~= "table" then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_GAMEPLAY_REACH_READ_STATE, state)
end

function GamePlayReachModule:getShowCountState()
    local state = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_GAMEPLAY_REACH_SHOW_COUNT, {})
    return type(state) == "table" and state or {}
end

function GamePlayReachModule:saveShowCountState(state)
    if type(state) ~= "table" then
        return
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_GAMEPLAY_REACH_SHOW_COUNT, state)
end

function GamePlayReachModule:getPopupShowCount(configId)
    local state = self:getShowCountState()
    return tonumber(state[self:getReadStateKey(configId)]) or 0
end

--- 弹窗展示受生效时间与单用户 show_count 双重限制
function GamePlayReachModule:canShowPopup(conf)
    if not conf or not self:isConfigActive(conf) then
        return false
    end
    return self:getPopupShowCount(conf.id) < conf.show_count
end

function GamePlayReachModule:recordPopupShown(conf)
    if not conf then
        return
    end
    local state = self:getShowCountState()
    local key = self:getReadStateKey(conf.id)
    state[key] = (tonumber(state[key]) or 0) + 1
    self:saveShowCountState(state)
end

function GamePlayReachModule:isGameRedDotRead(conf, gameId)
    local state = self:getReadState()
    local key = self:getReadStateKey(conf.id)
    return state[key] == true
end

function GamePlayReachModule:markGameRedDotRead(conf, gameId, location, skipTrack)
    if not conf then
        return
    end
    local state = self:getReadState()
    local key = self:getReadStateKey(conf.id)
    state[key] = true
    self:saveReadState(state)
    if not skipTrack and location then
        self:throwRedDotClick(location, conf, gameId)
    end
end

--- 清理无法再弹窗但仍未读的玩法红点，避免红点卡住
function GamePlayReachModule:clearStaleUnreadRedDots()
    for _, conf in ipairs(self._configList or {}) do
        if conf.update_type == Config.UPDATE_TYPE.GAME_RULE then
            for _, gameId in ipairs(conf.game_ids or {}) do
                if not self:isGameRedDotRead(conf, gameId) and not self:canShowPopup(conf) then
                    self:markGameRedDotRead(conf, gameId, nil, true)
                end
            end
        end
    end
end

function GamePlayReachModule:isRuleRedDotRead(conf, ruleId)
    local state = self:getReadState()
    local key = self:getReadStateKey(conf.id) .. "_rule_" .. tostring(ruleId)
    return state[key] == true
end

function GamePlayReachModule:markRuleRedDotRead(conf, ruleId, gameId, source)
    if not conf or not ruleId then
        return
    end
    local state = self:getReadState()
    local key = self:getReadStateKey(conf.id) .. "_rule_" .. tostring(ruleId)
    state[key] = true
    self:saveReadState(state)
    self:throwRedDotClick(Config.LOCATION.BOX_CREATE_RULE, conf, gameId, ruleId)
    self:throwRuleUse(ruleId, gameId, source or "红点")
end

function GamePlayReachModule:isFeatureRedDotRead(conf)
    local state = self:getReadState()
    local key = self:getReadStateKey(conf.id) .. "_feature"
    return state[key] == true
end

function GamePlayReachModule:markFeatureRedDotRead(conf, location)
    if not conf then
        return
    end
    local state = self:getReadState()
    local key = self:getReadStateKey(conf.id) .. "_feature"
    state[key] = true
    self:saveReadState(state)
    self:throwRedDotClick(location or Config.LOCATION.TEA_SETUP_PLAYMODE, conf)
end

function GamePlayReachModule:getConfigsByGame(gameId, updateType)
    local result = {}
    for _, conf in ipairs(self._configList or {}) do
        if (not updateType or conf.update_type == updateType) and self:isGameMatched(conf, gameId) then
            table.insert(result, conf)
        end
    end
    return result
end

function GamePlayReachModule:getFeatureConfigs()
    local result = {}
    for _, conf in ipairs(self._configList or {}) do
        if conf.update_type == Config.UPDATE_TYPE.FEATURE and not self:isFeatureRedDotRead(conf) then
            table.insert(result, conf)
        end
    end
    return result
end

function GamePlayReachModule:hasGameRedDot(gameId)
    if not gameId or tonumber(gameId) <= 0 then
        return false
    end
    for _, conf in ipairs(self:getConfigsByGame(gameId, Config.UPDATE_TYPE.GAME_RULE)) do
        if not self:isGameRedDotRead(conf, gameId) and self:canShowPopup(conf) then
            return true
        end
    end
    return false
end

function GamePlayReachModule:buildGameIdSet(gameList)
    local set = {}
    for _, gameId in pairs(gameList or {}) do
        local id = tonumber(gameId)
        if id then
            set[id] = true
        end
    end
    return set
end

function GamePlayReachModule:getAllowedGameSet(location)
    if location == Config.LOCATION.TEA_SETUP_PLAYMODE then
        return self:buildGameIdSet(XH.areaData:getTeaHouseRoomGameList())
    end
    return nil
end

--- 是否存在任意未读玩法更新红点（比赛场固定玩法页签等入口使用）
function GamePlayReachModule:hasAnyGameRedDot(location)
    local allowedGameSet = self:getAllowedGameSet(location)
    for _, conf in ipairs(self._configList or {}) do
        if conf.update_type == Config.UPDATE_TYPE.GAME_RULE and self:canShowPopup(conf) then
            for _, gameId in ipairs(conf.game_ids or {}) do
                if (not allowedGameSet or allowedGameSet[gameId]) and not self:isGameRedDotRead(conf, gameId) then
                    return true
                end
            end
        end
    end
    return false
end

--- 返回指定玩法首个未读配置
function GamePlayReachModule:getFirstUnreadGameConfigForGame(gameId)
    for _, conf in ipairs(self:getConfigsByGame(gameId, Config.UPDATE_TYPE.GAME_RULE)) do
        if not self:isGameRedDotRead(conf, gameId) then
            return conf
        end
    end
    return nil
end

--- 返回指定玩法首个未读且仍可弹窗的配置
function GamePlayReachModule:getFirstUnreadShowableGameConfigForGame(gameId)
    for _, conf in ipairs(self:getConfigsByGame(gameId, Config.UPDATE_TYPE.GAME_RULE)) do
        if not self:isGameRedDotRead(conf, gameId) and self:canShowPopup(conf) then
            return conf
        end
    end
    return nil
end

--- 返回首个未读玩法更新配置及对应 gameId
function GamePlayReachModule:getFirstUnreadGameConfig(location)
    local allowedGameSet = self:getAllowedGameSet(location)
    for _, conf in ipairs(self._configList or {}) do
        if conf.update_type == Config.UPDATE_TYPE.GAME_RULE then
            for _, gameId in ipairs(conf.game_ids or {}) do
                if (not allowedGameSet or allowedGameSet[gameId]) and not self:isGameRedDotRead(conf, gameId) then
                    return conf, gameId
                end
            end
        end
    end
    return nil, nil
end

--- 返回首个未读且仍可弹窗的玩法更新配置
function GamePlayReachModule:getFirstUnreadShowableGameConfig(location)
    local allowedGameSet = self:getAllowedGameSet(location)
    for _, conf in ipairs(self._configList or {}) do
        if conf.update_type == Config.UPDATE_TYPE.GAME_RULE and self:canShowPopup(conf) then
            for _, gameId in ipairs(conf.game_ids or {}) do
                if (not allowedGameSet or allowedGameSet[gameId]) and not self:isGameRedDotRead(conf, gameId) then
                    return conf, gameId
                end
            end
        end
    end
    return nil, nil
end

--- 固定玩法页签连续触达：关闭当前弹窗后若仍有未读消息则刷新界面
function GamePlayReachModule:tryAdvanceSetupPlayModeReach(view)
    local conf, gameId = self:getFirstUnreadShowableGameConfig(Config.LOCATION.TEA_SETUP_PLAYMODE)
    if not conf or not gameId then
        return false
    end
    self:recordPopupShown(conf)
    self:throwUpdateExpose(conf)
    self:markGameRedDotRead(conf, gameId, Config.LOCATION.TEA_SETUP_PLAYMODE)
    self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
    if view and view.refreshReachContent then
        view:refreshReachContent(conf, gameId)
    end
    return true
end

--- 玩法创建页关闭后：若仍有未读触达消息则继续弹窗
function GamePlayReachModule:tryShowNextSetupPlayModeReach(options)
    local location = Config.LOCATION.TEA_SETUP_PLAYMODE
    local conf, gameId = self:getFirstUnreadShowableGameConfig(location)
    if not conf or not gameId then
        return false
    end
    options = options or {}
    options.gameId = gameId
    if self:showUpdatePopup(conf, options, location) then
        self:markGameRedDotRead(conf, gameId, location)
        self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
        return true
    end
    return false
end

function GamePlayReachModule:hasFeatureRedDot()
    return #self:getFeatureConfigs() > 0
end

function GamePlayReachModule:getFirstGameConfig(gameId)
    local list = self:getConfigsByGame(gameId, Config.UPDATE_TYPE.GAME_RULE)
    return list[1]
end

function GamePlayReachModule:getFirstFeatureConfig()
    local list = self:getFeatureConfigs()
    return list[1]
end

--- 返回当前玩法待展示的规则红点（最多 MAX_RULE_RED_DOT 个）
function GamePlayReachModule:getRuleRedDotItems(gameId)
    local conf = self:getFirstGameConfig(gameId)
    if not conf then
        return {}, nil
    end
    local items = {}
    for _, rule in ipairs(conf.rule_items or {}) do
        if rule.rule_name ~= "" and not self:isRuleRedDotRead(conf, rule.rule_id) then
            table.insert(items, rule)
            if #items >= Config.MAX_RULE_RED_DOT then
                break
            end
        end
    end
    return items, conf
end

function GamePlayReachModule:createRedDotSprite(scale)
    local ok, sprite = pcall(function()
        return display.newSprite(Config.RED_DOT_RES)
    end)
    if not ok or not sprite then
        print(LOG_TAG, "createRedDotSprite failed:", sprite)
        return nil
    end
    sprite:setScale(scale or 1.2)
    return sprite
end

--- 在玩法列表按钮右上角挂载红点
function GamePlayReachModule:attachGameRedDot(btnNode, gameId)
    if not btnNode or tolua.isnull(btnNode) then
        return
    end
    local oldNode = btnNode:getChildByName(Config.RED_DOT_NODE_NAME)
    if oldNode then
        oldNode:removeFromParent()
    end
    if not self:hasGameRedDot(gameId) then
        return
    end
    local redDot = self:createRedDotSprite(1.2)
    if redDot then
        redDot:setName(Config.RED_DOT_NODE_NAME)
        local size = btnNode:getContentSize()
        redDot:setPosition(cc.p(size.width - 20, size.height - 20))
        btnNode:addChild(redDot, 99)
    end
end

function GamePlayReachModule:attachRuleRedDot(optionNode, ruleName)
    if not optionNode or tolua.isnull(optionNode) or ruleName == "" then
        return
    end
    local oldNode = optionNode:getChildByName(Config.RED_DOT_NODE_NAME)
    if oldNode then
        oldNode:removeFromParent()
    end
    local redDot = self:createRedDotSprite(1)
    if redDot then
        redDot:setName(Config.RED_DOT_NODE_NAME)
        redDot:setPosition(cc.p(optionNode:getContentSize().width - 10, optionNode:getContentSize().height - 10))
        optionNode:addChild(redDot, 99)
    end
end

--- 比赛场设置页「固定玩法」页签红点（按玩法更新 GAME_RULE 判断）
function GamePlayReachModule:attachBtnRedDot(btnNode)
    if not btnNode or tolua.isnull(btnNode) then
        return
    end
    local oldNode = btnNode:getChildByName(Config.RED_DOT_NODE_NAME)
    if oldNode then
        oldNode:removeFromParent()
    end
    if not self:hasAnyGameRedDot(Config.LOCATION.TEA_SETUP_PLAYMODE) then
        return
    end
    local redDot = self:createRedDotSprite(1.2)
    if redDot then
        redDot:setName(Config.RED_DOT_NODE_NAME)
        local size = btnNode:getContentSize()
        redDot:setPosition(cc.p(size.width - 20, size.height - 20))
        btnNode:addChild(redDot, 99)
    end
end

function GamePlayReachModule:refreshCreatePanelGameRedDots(listView)
    if not listView or tolua.isnull(listView) then
        return
    end
    local ok, err = pcall(function()
        for _, child in pairs(listView:getChildren()) do
            local gameId = child:getTag()
            if gameId and gameId > 0 then
                self:attachGameRedDot(child, gameId)
            end
        end
    end)
    if not ok then
        print(LOG_TAG, "refreshCreatePanelGameRedDots error:", err)
    end
end

--- 按规则项文案匹配 IOP 配置的 rule_name，在选项右侧挂红点
function GamePlayReachModule:refreshRuleRedDots(view, gameId, radioTable, checkBoxTable, optionTextKey)
    -- if not gameId then
    --     return
    -- end
    -- local ok, err = pcall(function()
    --     local ruleItems, conf = self:getRuleRedDotItems(gameId)
    --     if not conf or #ruleItems == 0 then
    --         return
    --     end
    --     optionTextKey = optionTextKey or "KW_OPTION_ITEM_TEXT"
    --     local function matchAndAttach(nodeTable)
    --         for _, lineTable in pairs(nodeTable or {}) do
    --             for _, nodeInfo in pairs(lineTable or {}) do
    --                 local node = nodeInfo and nodeInfo.node
    --                 local text = ""
    --                 if node and not tolua.isnull(node) then
    --                     text = XH.UITool.getText(node, optionTextKey) or ""
    --                 end
    --                 for _, rule in ipairs(ruleItems) do
    --                     if rule.rule_name ~= "" and string.find(text, rule.rule_name, 1, true) then
    --                         self:attachRuleRedDot(node, rule.rule_name)
    --                         node._gamePlayReachRuleId = rule.rule_id
    --                         node._gamePlayReachConfigId = conf.id
    --                         break
    --                     end
    --                 end
    --             end
    --         end
    --     end
    --     matchAndAttach(radioTable)
    --     matchAndAttach(checkBoxTable)
    -- end)
    -- if not ok then
    --     print(LOG_TAG, "refreshRuleRedDots error:", err)
    -- end
end

--- 用户点击/默认选中玩法：有未读红点且允许弹窗时展示触达窗，弹窗成功后消红点
function GamePlayReachModule:onGameSelected(gameId, location, options)
    if not gameId or tonumber(gameId) <= 0 then
        return
    end
    options = options or {}
    if options.showPopup == false then
        return
    end
    local conf = self:getFirstUnreadShowableGameConfigForGame(gameId)
    if not conf then
        if self:getFirstUnreadGameConfigForGame(gameId) then
            self:clearStaleUnreadRedDots()
            if options.listView then
                self:refreshCreatePanelGameRedDots(options.listView)
            end
        end
        return
    end
    if self:showUpdatePopup(conf, options, location) then
        self:markGameRedDotRead(conf, gameId, location)
        if options.listView then
            self:refreshCreatePanelGameRedDots(options.listView)
        end
    end
end

--- 用户进入固定玩法相关入口：有未读玩法红点且允许弹窗时展示触达窗，弹窗成功后消红点
function GamePlayReachModule:onFeatureEntry(location, options)
    options = options or {}
    if options.showPopup == false then
        return
    end
    local gameId = options.gameId
    local conf
    if gameId and tonumber(gameId) > 0 then
        conf = self:getFirstUnreadShowableGameConfigForGame(gameId)
        if not conf then
            if self:getFirstUnreadGameConfigForGame(gameId) then
                self:clearStaleUnreadRedDots()
                self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
            end
            return
        end
    else
        conf, gameId = self:getFirstUnreadShowableGameConfig(location)
        if not conf then
            if self:getFirstUnreadGameConfig(location) then
                self:clearStaleUnreadRedDots()
                self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
            end
            return
        end
    end
    if not conf or not gameId then
        return
    end
    options.gameId = gameId
    if self:showUpdatePopup(conf, options, location) then
        self:markGameRedDotRead(conf, gameId, location)
        self:dispatchEvent({ name = self.EVENT_CONFIG_UPDATED })
    end
end

--- 用户勾选/选中带红点的规则项：消规则红点并上报 iop_rule_use
function GamePlayReachModule:onRuleOptionSelected(node, gameId)
    -- if not node or tolua.isnull(node) or not node._gamePlayReachRuleId or not node._gamePlayReachConfigId then
    --     return
    -- end
    -- local conf = nil
    -- for _, item in ipairs(self._configList or {}) do
    --     if item.id == node._gamePlayReachConfigId then
    --         conf = item
    --         break
    --     end
    -- end
    -- if conf then
    --     self:markRuleRedDotRead(conf, node._gamePlayReachRuleId, gameId, "红点")
    --     local oldNode = node:getChildByName(Config.RED_DOT_NODE_NAME)
    --     if oldNode then
    --         oldNode:removeFromParent()
    --     end
    -- end
end

function GamePlayReachModule:showUpdatePopup(conf, options, location)
    if not conf or not self:canShowPopup(conf) then
        return false
    end
    if not XH.viewManager then
        print(LOG_TAG, "viewManager unavailable")
        return false
    end
    options = options or {}
    local ok, err = pcall(function()
        XH.viewManager:openView("GamePlayReachView", nil, {
            conf = conf,
            showCreateBtn = options.showCreateBtn,
            gameId = options.gameId,
            gameName = options.gameName,
            location = location,
        })
    end)
    if not ok then
        print(LOG_TAG, "showUpdatePopup error:", err)
        return false
    end
    self:recordPopupShown(conf)
    self:throwUpdateExpose(conf)
    return true
end

--- 本地 mock：使用当前区首个 box 玩法，供 Debug/Test 校验触达链路
function GamePlayReachModule:buildLocalMockData()
    local areaId = XH.areaData:getAreaID()
    local gameId = 0
    local gameName = "测试玩法"
    local gameNameList = XH.areaData:getAreaGameNameList() or {}
    local gameIdList = XH.areaData:getBoxRoomGameList() or {}
    if gameIdList[1] then
        gameId = gameIdList[1]
        gameName = gameNameList[gameId] or gameName
    end
    local now = XH.lobby:getModule("Shop"):getServerTime()
    return {
        {
            id = 900003,
            title = gameName .. "规则更新",
            content = "【重要更新】<br/>1、创建规则面板新增【" .. gameName .. "】新规则<br/>2、优化" .. gameName .. "局内表现<br/>3、其他（若有）",
            update_type = Config.UPDATE_TYPE.GAME_RULE,
            effective_time = now - 86400,
            valid_days = 30,
            show_count = 3,
            game_ids = tostring(gameId),
            rule_items = {
                { rule_id = "mock_rule_1", rule_name = "新规则" },
            },
        },
        {
            id = 900004,
            title = gameName .. "规则更新",
            content = "【重要更新】<br/>1、创建规则面板新增【" .. gameName .. "】新规则<br/>2、优化" .. gameName .. "局内表现<br/>3、其他（若有）",
            update_type = Config.UPDATE_TYPE.GAME_RULE,
            effective_time = now - 86400,
            valid_days = 30,
            show_count = 3,
            game_ids = tostring(gameIdList[2]),
            rule_items = {
                { rule_id = "mock_rule_1", rule_name = "新规则" },
            },
        },
        {
            id = 900002,
            title = gameName .. "规则更新",
            content = "【重要更新】<br/>1、优化比赛场固定玩法创建体验<br/>2、新增玩法详情说明",
            update_type = Config.UPDATE_TYPE.GAME_RULE,
            effective_time = now - 86400,
            valid_days = 30,
            show_count = 3,
            game_ids = tostring(gameId),
            rule_items = {
                { rule_id = "mock_rule_2", rule_name = "新规则" },
            },
        },
    }
end

function GamePlayReachModule:canThrowTrack(conf)
    if not conf or not conf.effective_time then
        return false
    end
    return XH.lobby:getModule("Shop"):getServerTime() <= conf.effective_time + Config.TRACK_EXPIRE_DAYS * 86400
end

function GamePlayReachModule:safeThrow(eventName, data)
    if not XH.NewThrowDataManager or not XH.NewThrowDataDefine or not XH.NewThrowDataDefine[eventName] then
        return
    end
    local ok, err = pcall(function()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine[eventName], data or {})
    end)
    if not ok then
        print(LOG_TAG, "throwData error:", eventName, err)
    end
end

function GamePlayReachModule:throwUpdateExpose(conf)
    local teaNumber = TeaHouse and TeaHouse.manager.teahouseData:getTeaNumber() or 0
    self:safeThrow("g_push26060802", {
        club_id = XH.areaData:getAreaID() .. "_" .. teaNumber,
        game_id = XH.areaData:getAreaID() .. "_" .. (conf.game_ids[1] or 0),
    })
end

function GamePlayReachModule:throwUpdateClick(buttonType, conf)
    -- if not conf or not self:canThrowTrack(conf) then
    --     return
    -- end
    -- self:safeThrow("IOP_UPDATE_CLICK", {
    --     button_type = buttonType,
    --     config_id = conf.id,
    -- })
end

function GamePlayReachModule:throwRedDotClick(location, conf, gameId, ruleId)
    local teaNumber = TeaHouse and TeaHouse.manager.teahouseData:getTeaNumber() or 0
    self:safeThrow("g_push26060801", {
        club_id = XH.areaData:getAreaID() .. "_" .. teaNumber,
        game_id = XH.areaData:getAreaID() .. "_" .. (gameId or 0),
        page_item_id = Config.LOCATION_NAME[location] or "",
        block_label = location == Config.LOCATION.BOX_CREATE_GAME and gameId or Config.LOCATION_NAME[location],
    })
end

function GamePlayReachModule:throwRuleUse(ruleId, gameId, source)
    -- self:safeThrow("IOP_RULE_USE", {
    --     rule_id = ruleId or "",
    --     gameid = gameId or 0,
    --     source = source or "",
    -- })
end

return GamePlayReachModule
�z