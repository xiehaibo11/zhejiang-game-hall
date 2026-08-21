local TeaHouseCreateBoxRoomView = import(".TeaHouseCreateBoxRoomView")
local TeaHouseCreatePlayModeView = class("TeaHouseCreatePlayModeView", TeaHouseCreateBoxRoomView)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")

function TeaHouseCreatePlayModeView:ctor(data)
    self._playModeId = data.playModeId or 0
    self._acData = data.acData or ""
    self._playModeGameId = data.nGameId or 0
    self._openLayer = data.openLayer or ""
    self._isPromote = data.isPromote or false
    self._anCount = data.anCount
    self._anPlayerCount = data.anPlayerCount
    self._bIsCountLock = data.bIsCountLock
    self._bIsPlayerLock = data.bIsPlayerLock
    self._playerChooseCount = 0
    TeaHouseCreatePlayModeView.super.ctor(self, data)
end

--点击关闭按钮
function TeaHouseCreatePlayModeView:onTouchEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local fromGamePlayReach = self._openLayer == "GamePlayReachView"
    self:close()
    if fromGamePlayReach then
        local teahouseData = TeaHouse.manager.teahouseData
        XH.lobby:getModule("GamePlayReach"):tryShowNextSetupPlayModeReach({
            showCreateBtn = teahouseData and (teahouseData:isOwner() or teahouseData:isAdmin()),
        })
    end
end

function TeaHouseCreatePlayModeView:initCacheInfoKey()
    self._keyCacheInfo = "_teaHouse_playmode"
end

function TeaHouseCreatePlayModeView:initUIAndEvents()
    TeaHouseCreatePlayModeView.super.initUIAndEvents(self)
    self._panelRoomCardNotice:setVisible(false)
    -- 玩法触达：领队打开「玩法创建」页时自动弹匹配的功能/玩法更新窗
    local GamePlayReachConfig = require("lobby.Modules.GamePlayReach.Config")
    local teahouseData = TeaHouse.manager.teahouseData
    XH.lobby:getModule("GamePlayReach"):onFeatureEntry(GamePlayReachConfig.LOCATION.TEA_PLAYMODE_CREATE, {
        showCreateBtn = teahouseData and (teahouseData:isOwner() or teahouseData:isAdmin()),
        gameId = self._playModeGameId,
    })
end

function TeaHouseCreatePlayModeView:initTitleAndCreateBtn()
    self._textTitleCreateRoom:setVisible(false)
    self._btnCreate:setVisible(false)
    self._textTitleCreatePlayMode:setVisible(true)
    self._btnCreatePlayMode:setVisible(true)
end

--设置默认选择的游戏
function TeaHouseCreatePlayModeView:setDefaultSelectGameDynamic(defaultGameId)
    if self._playModeGameId and self._playModeGameId > 0 then
        XH.SysTool.performWithDelayGlobal(function()
            self:setSelectGameDynamic(self._playModeGameId)
        end, 0)
    else
        self.super.setDefaultSelectGameDynamic(self, defaultGameId)
    end
end

function TeaHouseCreatePlayModeView:getTeaHouseGameRuleList(gameid,lobbyid)
    local gameRuleList = TeaHouse.ReadGameListAndRuleConfig.loadTeaHouseGameRule(lobbyid or TeaHouse.BridgeData.getLobbyID(), gameid)
    if not gameRuleList or not gameRuleList.categories or not gameRuleList.categories[1] then
        return gameRuleList
    end

    self._playerChooseCount = 0
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    local resultPlayCounts = {}
    local PlayCountPlayMode = gameRuleList["PlayCountPlayMode"]
    local PlayerCountPlayMode = gameRuleList["PlayerCountPlayMode"]
    for categoriesIndex, categories in ipairs(gameRuleList["categories"]) do
        for nodeStr, nodeData in pairs(categories) do
            if (nodeData.nodeName and nodeData.nodeName == "playCount") or string.find(nodeStr, "playCount") then
                --开启局数自选时才能多选
                if PlayCountPlayMode and SetupConfig.IsOpenPlayerCountOptional then
                    categories[nodeStr] = clone(PlayCountPlayMode)
                elseif SetupConfig.IsOpenPlayerCountOptional then
                    nodeData["type"] = "checkbox"
                end
            elseif (nodeData.nodeName and nodeData.nodeName == "playerCount") or string.find(nodeStr, "playerCount") then
                if nodeData.ctrls and table.nums(nodeData.ctrls) == 1 and table.nums(nodeData.ctrls["1"]) == 1 then
                    self._playerChooseCount = 1
                end
                --开启人数自选时才能多选
                if PlayerCountPlayMode and SetupConfig.IsOpenPlayCountOptional then
                    categories[nodeStr] = clone(PlayerCountPlayMode)
                elseif SetupConfig.IsOpenPlayCountOptional and self._playerChooseCount ~= 1 then
                    nodeData["type"] = "checkbox"
                end
            elseif (nodeData.nodeName and nodeData.nodeName == "costType") or string.find(nodeStr, "costType") or string.find(nodeStr, "CostType") or string.find(nodeStr, "costtype") then
                if not SetupConfig.IsFixedPayType then
                    gameRuleList.categories[categoriesIndex][nodeStr] = nil
                end
            end
        end
        
        if not SetupConfig.IsFixedPayType then
            local bHavePayType, payTypeData = self:createPayTypeConf()
            if bHavePayType then
                gameRuleList.categories[categoriesIndex]["100payTypeData"] = payTypeData
            end
        else
            if TeaHouse.manager.teahouseData:getTeaHousePayMode() == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                for categoriesIndex, categories in ipairs(gameRuleList["categories"]) do
                    for nodeStr, nodeData in pairs(categories) do
                        if (nodeData.nodeName and nodeData.nodeName == "costType") or string.find(nodeStr, "costType") or string.find(nodeStr, "CostType") or string.find(nodeStr, "costtype") then
                            gameRuleList.categories[categoriesIndex][nodeStr] = self:createPayTypeConfInFixedPayType(gameRuleList.categories[categoriesIndex][nodeStr])
                            break
                        end
                    end
                end
            end
        end
        
        local isOpenOptional, otherOptional = self:createOtherOptionalConf()
        if isOpenOptional then
            gameRuleList.categories[categoriesIndex]["101otherOptional"] = otherOptional
        end

        local bHaveRoomRate, roomRateData = self:createRoomRateConf()
        if bHaveRoomRate then
            gameRuleList.categories[categoriesIndex]["102roomRate"] = roomRateData
        end
    end

    return gameRuleList
end

function TeaHouseCreatePlayModeView:loadGameRuleDynamic(gameid, lobbyid)
    if self._acData and self._acData ~= "" then
        self._categoriesIndex = TeaHouse.SysTool.getConfCategoriesIndex(gameid or self._gameID, self._acData, self._anPlayerCount)
    end
    TeaHouseCreatePlayModeView.super.loadGameRuleDynamic(self, gameid, lobbyid)
    if self._acData and self._acData ~= "" and self:shouldApplyPlayModeAcData(gameid) then
        self:updateNowPlayModeData()
    end
end

-- 仅在与打开编辑页时的游戏一致时回填 acData，避免切换左侧游戏后误用旧规则
function TeaHouseCreatePlayModeView:shouldApplyPlayModeAcData(gameid)
    if self._playModeId == 0 and (not self._playModeGameId or self._playModeGameId == 0) then
        return true
    end
    local curGameId = gameid or self._gameID
    return self._playModeGameId > 0 and curGameId == self._playModeGameId
end

function TeaHouseCreatePlayModeView:isAcDataRuleSelected(acDataStr, nodeConfig, controlType)
    if controlType == "checkbox" then
        if nodeConfig.select and string.find(acDataStr, nodeConfig.select, 1, true) then
            return true
        end
        if nodeConfig.unselect and string.find(acDataStr, nodeConfig.unselect, 1, true) then
            return false
        end
        if nodeConfig.mustExistRuleYes and string.find(acDataStr, nodeConfig.mustExistRuleYes, 1, true) then
            return true
        end
        if nodeConfig.mustExistRuleNo and string.find(acDataStr, nodeConfig.mustExistRuleNo, 1, true) then
            return false
        end
        return nodeConfig.nodeName and string.find(acDataStr, nodeConfig.nodeName, 1, true) ~= nil
    end
    return nodeConfig.nodeName and string.find(acDataStr, nodeConfig.nodeName, 1, true) ~= nil
end

function TeaHouseCreatePlayModeView:isOptionalCountNode(nodeName)
    return nodeName == "countOptional" or nodeName == "playerOptional"
end

function TeaHouseCreatePlayModeView:isPlayOrPlayerCountNode(nodeName)
    return string.find(nodeName, "playCount") or string.find(nodeName, "playerCount")
end

function TeaHouseCreatePlayModeView:applyPlayModeCountFromAcData(acDataStr, categories)
    for nodeStr, nodeData in pairs(categories) do
        if nodeData.nodeName == "playCount" or nodeData.nodeName == "playerCount"
            or string.find(nodeStr, "playCount") or string.find(nodeStr, "playerCount") then
            for _, v1 in pairs(nodeData.ctrls) do
                for _, v2 in ipairs(v1) do
                    local optionNode = ccui.Helper:seekWidgetByName(self._gameRule, v2.nodeName)
                    if optionNode and optionNode:isBright() then
                        local shouldSelect = self:isAcDataRuleSelected(acDataStr, v2, nodeData.type)
                        if nodeData.type == "radio" then
                            if shouldSelect and not optionNode:isSelected() then
                                self:onTouchEventRadio(optionNode, ccui.CheckBoxEventType.selected, true)
                            end
                        elseif shouldSelect and not optionNode:isSelected() then
                            self:onTouchEventCheckBox(optionNode, ccui.CheckBoxEventType.selected, true)
                        elseif not shouldSelect and optionNode:isSelected() then
                            self:onTouchEventCheckBox(optionNode, ccui.CheckBoxEventType.unselected, true)
                        end
                    end
                end
            end
        end
    end
end

function TeaHouseCreatePlayModeView:applyOptionalLockState()
    local countOptional = ccui.Helper:seekWidgetByName(self._gameRule, "countOptional")
    if countOptional and self._bIsCountLock ~= nil then
        local wantSelected = not self._bIsCountLock
        if countOptional:isSelected() ~= wantSelected then
            self:setSelectState(countOptional, wantSelected, true)
            self:updateAllCountState(wantSelected)
        end
    end
    local playerOptional = ccui.Helper:seekWidgetByName(self._gameRule, "playerOptional")
    if playerOptional and self._bIsPlayerLock ~= nil then
        local wantSelected = not self._bIsPlayerLock
        if playerOptional:isSelected() ~= wantSelected then
            self:setSelectState(playerOptional, wantSelected, true)
            self:updateAllPlayerState(wantSelected)
        end
    end
end

function TeaHouseCreatePlayModeView:shouldApplyFixedPlayCount()
    if self._bIsCountLock == true then
        return true
    end
    if self._bIsCountLock == false then
        return false
    end
    if self._acData and self._acData ~= "" then
        return not string.find(self._acData, "countOptional='1';", 1, true)
    end
    return true
end

function TeaHouseCreatePlayModeView:shouldApplyFixedPlayerCount()
    if self._bIsPlayerLock == true then
        return true
    end
    if self._bIsPlayerLock == false then
        return false
    end
    if self._acData and self._acData ~= "" then
        return not string.find(self._acData, "playerOptional='1';", 1, true)
    end
    return true
end

--判断人数/局数节点在当前规则下是否为多选(checkbox)。非多选即单选(radio)，只能选一个
function TeaHouseCreatePlayModeView:isCountNodeMultiSelect(targetNodeName)
    local gameRuleList = self:getTeaHouseGameRuleList(self._gameID, self._tmpLobbyID)
    if not gameRuleList or not gameRuleList.categories then
        return false
    end
    local categoriesIndex = self._categoriesIndex
        or TeaHouse.SysTool.getConfCategoriesIndex(self._gameID, self._acData or "", self._anPlayerCount)
        or 1
    local categories = gameRuleList.categories[categoriesIndex] or gameRuleList.categories[1]
    if not categories then
        return false
    end
    for _, nodeData in pairs(categories) do
        if type(nodeData) == "table" and nodeData.nodeName == targetNodeName then
            return nodeData.type == "checkbox"
        end
    end
    return false
end

function TeaHouseCreatePlayModeView:applyPlayModeCountFromServer()
    --单选(radio)：只保留第一个命中的人数/局数，其余取消（同时清理本地缓存的多选脏数据）
    local function selectSingleInPanel(panelPrefix, countList)
        local index = 1
        while true do
            local panel = ccui.Helper:seekWidgetByName(self._gameRule, panelPrefix .. index)
            index = index + 1
            if not panel then
                break
            end
            local targetItem = nil
            for i = 2, panel:getChildrenCount() do
                local item = panel:getChildren()[i]
                if item:isBright() then
                    local count = tonumber(string.match(item:getName(), "%d+"))
                    for _, v in ipairs(countList) do
                        if v == count then
                            targetItem = targetItem or item
                            break
                        end
                    end
                end
            end
            for i = 2, panel:getChildrenCount() do
                local item = panel:getChildren()[i]
                if item:isBright() then
                    if item == targetItem then
                        if not item:isSelected() then
                            self:onTouchEventRadio(item, ccui.CheckBoxEventType.selected, true)
                        end
                    elseif item:isSelected() then
                        self:setSelectState(item, false, true)
                    end
                end
            end
        end
    end
    --多选(checkbox)：按服务端列表逐个勾选/取消
    local function selectMultiInPanel(panelPrefix, countList)
        local index = 1
        while true do
            local panel = ccui.Helper:seekWidgetByName(self._gameRule, panelPrefix .. index)
            index = index + 1
            if not panel then
                break
            end
            for i = 2, panel:getChildrenCount() do
                local item = panel:getChildren()[i]
                if item:isBright() then
                    local count = tonumber(string.match(item:getName(), "%d+"))
                    local shouldSelect = false
                    for _, v in ipairs(countList) do
                        if v == count then
                            shouldSelect = true
                            break
                        end
                    end
                    if shouldSelect and not item:isSelected() then
                        self:onTouchEventCheckBox(item, ccui.CheckBoxEventType.selected, true)
                    elseif not shouldSelect and item:isSelected() then
                        self:onTouchEventCheckBox(item, ccui.CheckBoxEventType.unselected, true)
                    end
                end
            end
        end
    end
    local function selectCountInPanel(panelPrefix, countList, nodeName)
        if not countList then
            return
        end
        if self:isCountNodeMultiSelect(nodeName) then
            selectMultiInPanel(panelPrefix, countList)
        else
            selectSingleInPanel(panelPrefix, countList)
        end
    end
    -- 局数/人数自选开启时应保持全选，不能用 anCount/anPlayerCount 裁剪
    if self:shouldApplyFixedPlayCount() and self._anCount then
        selectCountInPanel("playCount", self._anCount, "playCount")
    end
    if self:shouldApplyFixedPlayerCount() and self._anPlayerCount then
        selectCountInPanel("playerCount", self._anPlayerCount, "playerCount")
    end
end

function TeaHouseCreatePlayModeView:updateNowPlayModeData()
    local acDataStr = self._acData
    if acDataStr == nil or acDataStr == "" or not self._gameRule then
        return
    end
    local gameRuleList = self:getTeaHouseGameRuleList(self._gameID, self._tmpLobbyID)
    if not gameRuleList or not gameRuleList.categories then
        return
    end

    local categoriesIndex = self._categoriesIndex or TeaHouse.SysTool.getConfCategoriesIndex(self._gameID, acDataStr, self._anPlayerCount)

    if #gameRuleList.categories > 1 then
        local tempCategories = gameRuleList.categories[1]
        for _, v in pairs(tempCategories) do
            for _, v1 in pairs(v.ctrls) do
                for _, v2 in ipairs(v1) do
                    if v2.categorieIndex and string.find(acDataStr, v2.nodeName, 1, true) then
                        local optionNode = ccui.Helper:seekWidgetByName(self._gameRule, v2.nodeName)
                        if optionNode and not optionNode:isSelected() then
                            self:onTouchEventRadio(optionNode, ccui.CheckBoxEventType.selected, true)
                        end
                    end
                end
            end
        end
    end

    local categories = gameRuleList.categories[categoriesIndex]
    if not categories then
        return
    end

    self:applyPlayModeCountFromAcData(acDataStr, categories)

    for _, nodeData in pairs(categories) do
        for _, v1 in pairs(nodeData.ctrls) do
            for _, v2 in ipairs(v1) do
                if not self:isOptionalCountNode(v2.nodeName) and not self:isPlayOrPlayerCountNode(v2.nodeName) then
                    local optionNode = ccui.Helper:seekWidgetByName(self._gameRule, v2.nodeName)
                    if optionNode and optionNode:isBright() then
                        local shouldSelect = self:isAcDataRuleSelected(acDataStr, v2, nodeData.type)
                        if nodeData.type == "radio" then
                            if shouldSelect and not optionNode:isSelected() then
                                self:onTouchEventRadio(optionNode, ccui.CheckBoxEventType.selected, true)
                            end
                        elseif nodeData.type == "checkbox" then
                            if shouldSelect and not optionNode:isSelected() then
                                self:onTouchEventCheckBox(optionNode, ccui.CheckBoxEventType.selected, true)
                            elseif not shouldSelect and optionNode:isSelected() then
                                self:onTouchEventCheckBox(optionNode, ccui.CheckBoxEventType.unselected, true)
                            end
                        end
                    end
                end
            end
        end
    end

    for _, nodeData in pairs(categories) do
        if nodeData.nodeName == "otherOptional" then
            for _, v1 in pairs(nodeData.ctrls) do
                for _, v2 in ipairs(v1) do
                    if self:isOptionalCountNode(v2.nodeName) then
                        local optionNode = ccui.Helper:seekWidgetByName(self._gameRule, v2.nodeName)
                        if optionNode and optionNode:isBright() then
                            local shouldSelect = self:isAcDataRuleSelected(acDataStr, v2, nodeData.type)
                            if shouldSelect ~= optionNode:isSelected() then
                                self:setSelectState(optionNode, shouldSelect, true)
                                if v2.nodeName == "playerOptional" then
                                    self:updateAllPlayerState(shouldSelect)
                                elseif v2.nodeName == "countOptional" then
                                    self:updateAllCountState(shouldSelect)
                                end
                            end
                        end
                    end
                end
            end
        end
    end

    self:applyOptionalLockState()
    self:applyPlayModeCountFromServer()
    self:updateLinkageNodeBylinkageLevelValue()
    self:updateShowCostInfo()
    self._gameRule:refreshView()
end

function TeaHouseCreateBoxRoomView:createOtherOptionalConf()
    local otherOptional = {
        text = "其他",
        nodeName = "otherOptional",
        type = "checkbox",
        defaultchoose = {
        },
        ctrls = {
            [1] = {}
        }
    }
    local isOpenOptional = false
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if SetupConfig.IsOpenPlayerCountOptional and self._playerChooseCount ~= 1 then
        table.insert(otherOptional.ctrls[1], {
            nodeName = "playerOptional",
            text = "人数自选",
            select = "playerOptional".."='1';",
            unselect = "playerOptional".."='0';",
        }) 
        isOpenOptional = true
    end
    if SetupConfig.IsOpenPlayCountOptional then
        table.insert(otherOptional.ctrls[1], {
            nodeName = "countOptional",
            text = "局数自选",
            select = "countOptional".."='1';",
            unselect = "countOptional".."='0';",
        }) 
        isOpenOptional = true
    end
    if isOpenOptional then
        return true, otherOptional
    end
    return false, nil
end

function TeaHouseCreatePlayModeView:isCountLock()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenPlayCountOptional then
        return true
    end
    local countLockCheckBox = ccui.Helper:seekWidgetByName(self._gameRule, "countOptional")
    if countLockCheckBox then
        if not countLockCheckBox:isSelected() then
            return true
        else
            return #self:getPlayCount() ~= self:getPlayCountNodes()
        end
    end
    return true
end

function TeaHouseCreatePlayModeView:isPlayerLock()
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if not SetupConfig.IsOpenPlayerCountOptional then
        return true
    end
    local playerLockCheckBox = ccui.Helper:seekWidgetByName(self._gameRule, "playerOptional")
    if playerLockCheckBox then
        if not playerLockCheckBox:isSelected() then
            return true
        else
            return #self:getPlayerCount() ~= self:getPlayerCountNodes()
        end
    end
    return true
end

--获取玩家数量
function TeaHouseCreatePlayModeView:getPlayerCount()
    local resultPlayerCountData = {}

    local index = 1
    while true do
        local playerCountItem = ccui.Helper:seekWidgetByName(self._gameRule, "playerCount" .. index)
        index = index + 1
        if playerCountItem then
            for i = 2, #playerCountItem:getChildren() do
                if string.find(playerCountItem:getChildren()[i]:getName(), "FOUR_TO_TWO") == nil and playerCountItem:getChildren()[i]:isSelected() then
                    local count = tonumber(string.match(playerCountItem:getChildren()[i]:getName(), "%d"))
                    table.insert(resultPlayerCountData, count)
                end
            end
        else
            if index == 2 and #resultPlayerCountData == 0 then
                table.insert(resultPlayerCountData, 4)
            end
            break
        end
    end
    return resultPlayerCountData
end

--获取局数
function TeaHouseCreatePlayModeView:getPlayCount()
    local resultPlayCountData = {}

    local index = 1
    while true do
        local playCountItem = ccui.Helper:seekWidgetByName(self._gameRule, "playCount" .. index)
        index = index + 1
        if playCountItem then
            for i = 2, #playCountItem:getChildren() do
                if playCountItem:getChildren()[i].isSelected and playCountItem:getChildren()[i]:isSelected() then
                    local count = tonumber(string.match(playCountItem:getChildren()[i]:getName(), "%d+"))
                    table.insert(resultPlayCountData, count)
                end
            end
        else
            if index == 2 and #resultPlayCountData == 0 then
                table.insert(resultPlayCountData, 10000)
            end
            break
        end
    end
    return resultPlayCountData
end

--获家数量
function TeaHouseCreatePlayModeView:updateAllPlayerState(isSelected)
    local index = 1
    while true do
        local playerCountItem = ccui.Helper:seekWidgetByName(self._gameRule, "playerCount" .. index)
        index = index + 1
        if playerCountItem then
            for i = 2, #playerCountItem:getChildren() do
                local tempItem = playerCountItem:getChildren()[i]
                if tempItem:isBright() then
                    if isSelected then
                        tempItem:setSelected(true)
                        self:setSelectState(tempItem, true, true)
                        self:updateLinkageNode(tempItem)
                    end
                    tempItem:setTouchEnabled(not isSelected)
                    local radioText = ccui.Helper:seekWidgetByName(playerCountItem, "KW_OPTION_ITEM_TEXT")
                    radioText:setTouchEnabled(not isSelected)
                end
            end
        else
            break
        end
    end
end

--局数
function TeaHouseCreatePlayModeView:updateAllCountState(isSelected)
    local index = 1
    while true do
        local playCountItem = ccui.Helper:seekWidgetByName(self._gameRule, "playCount" .. index)
        index = index + 1
        if playCountItem then
            for i = 2, #playCountItem:getChildren() do
                local tempItem = playCountItem:getChildren()[i]
                if tempItem:isBright() then
                    if isSelected then
                        tempItem:setSelected(true)
                        self:setSelectState(tempItem, true, true)
                        self:updateLinkageNode(tempItem)
                    end
                    tempItem:setTouchEnabled(not isSelected)
                    local radioText = ccui.Helper:seekWidgetByName(playCountItem, "KW_OPTION_ITEM_TEXT")
                    radioText:setTouchEnabled(not isSelected)
                end
            end
        else
            break
        end
    end
end

function TeaHouseCreatePlayModeView:onTouchEventTeaHouseCreatePlayMode(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local playCountTable = self:getPlayCount()
    if #playCountTable <= 0 then
        TeaHouse.TipTool.showToast("请至少选择一种局数")
        return 
    end
    local playerCountTable = self:getPlayerCount()
    if #playerCountTable <= 0 then
        TeaHouse.TipTool.showToast("请至少选择一种人数")
        return 
    end
    local data = {}
    local gameRule, bRightRule = self:getGameRule()
    if not bRightRule then
        return
    end
    --不需要显示的规则（局数、人数）
    local unShowRuleData = {"playerCount", "PlayerCount", "playCount", "PlayCount", "moneyType", "TeaHousePayType", "countOptional", "playerOptional"}
    local zhRule = self:getBoxRoomRuleString(unShowRuleData)
    zhRule = string.gsub(zhRule, "/", ",")
    --设置桌子颜色
    local tableColor =  TeaHouse.SysTool.analysisTableColor(self._acData)
    if GameNewTypeConfiger:getIsNewPlayTypGame(self._gameID) then
        tableColor = 5
    end
    local paramTable = {}
    paramTable.gameRule = gameRule
    paramTable.gameID = self._gameID
    paramTable.playCounts = self:getPlayCount()
    paramTable.playerCounts = self:getPlayerCount()
    paramTable.zhRule = zhRule
    paramTable.tableColor = tableColor
    paramTable.playModeID = self._playModeId
    paramTable.playCountsLock = self:isCountLock()
    paramTable.playerCountsLock = self:isPlayerLock()
    TeaHouse.manager.teaHouseCreate:createPlayMode(paramTable)
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_85, {OpenLayer = self._openLayer})
end

--固定玩法不显示房卡
function TeaHouseCreatePlayModeView:updateShowCostInfo()
    
end

function TeaHouseCreatePlayModeView:onTouchEventCheckBox(send, eventType, isDefault)
    TeaHouseCreatePlayModeView.super.onTouchEventCheckBox(self, send, eventType, isDefault)
    if send:getName() == "playerOptional" then
        self:updateAllPlayerState(eventType == ccui.CheckBoxEventType.selected)
    elseif send:getName() == "countOptional" then
        self:updateAllCountState(eventType == ccui.CheckBoxEventType.selected)
    end
end

function TeaHouseCreatePlayModeView:getPlayCountNodes()
    local res = 0
    local index = 1
    while true do
        local playCountItem = ccui.Helper:seekWidgetByName(self._gameRule, "playCount" .. index)
        index = index + 1
        if playCountItem then
            res = res + #playCountItem:getChildren() - 1
        else
            break
        end
    end
    return res
end

function TeaHouseCreatePlayModeView:getPlayerCountNodes()
    local res = 0
    local index = 1
    while true do
        local playCountItem = ccui.Helper:seekWidgetByName(self._gameRule, "playerCount" .. index)
        index = index + 1
        if playCountItem then
            res = res + #playCountItem:getChildren() - 1
        else
            break
        end
    end
    return res
end

function TeaHouseCreatePlayModeView:onTouchEventChooseGameDynamic(send, eventType)
    if eventType == ccui.TouchEventType.ended and self._playModeGameId > 0 then
        local newGameId = send:getTag()
        if newGameId ~= self._playModeGameId then
            self._acData = ""
            self._anCount = nil
            self._anPlayerCount = nil
            self._bIsCountLock = nil
            self._bIsPlayerLock = nil
            self._categoriesIndex = nil
        end
    end
    TeaHouseCreatePlayModeView.super.onTouchEventChooseGameDynamic(self, send, eventType)
    if GameNewTypeConfiger:getIsNewPlayTypGame(self._gameID) then
        self:showCreateTips(true, "Mode")
    else
        self:showCreateTips(false)
    end
end

return TeaHouseCreatePlayModeView�x