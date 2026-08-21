local BattlePassLobbyModule = class("BattlePassLobbyModule", XH.ModuleBase)
local BattlePassConfig = require("lobby.Modules.BattlePass.Config")
-- 请求3.0活动信息回来 进行通知
BattlePassLobbyModule.EVENT_BATTLE_PASS_RESP = "EVENT_BATTLE_PASS_RESP"
BattlePassLobbyModule.EVENT_UPDATE_BATTLE_PASS_ICON = "EVENT_UPDATE_BATTLE_PASS_ICON"
BattlePassLobbyModule.EVENT_UPDATE_BATTLE_PASS_REDPOINT = "EVENT_UPDATE_BATTLE_PASS_REDPOINT"

function BattlePassLobbyModule:ctor()
    BattlePassLobbyModule.super.ctor(self)
    self:resetData()
    self._battlePassInfo = {}
    self._battlePassConfig = {}
    self._lvAwardLists = {}
    self._maxAwardCnts = {}
    self._lvAwardListDefault = {}
    self._isOpen = false    -- 埋点用，活动入口是否显示
    self._pageType = BattlePassConfig.LobbyPageType.REWAED  -- 当前页签，埋点用
end

function BattlePassLobbyModule:resetData()
    self._actId = {}
end

function BattlePassLobbyModule:getProxyEvents()
    return {
        { module = XH.lobby:getModule("BattlePass"), eventKeyName = "EVENT_POOL_PRIZES_SUCC", callBack = "onEventPoolPrizesSucc" },
        { module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "onLoginSuccess" },
        { module = XH.lobby:getModule("BattlePass"), eventKeyName = "EVENT_CHECK_ACT_ACTIVE", callBack = "onEventCheckActActive" },
    }
end

function BattlePassLobbyModule:setActivityId(actId, index)
    self._actId[index] = actId
    self:reqActivityInfo(index, false)
    -- 请求兑换商城配置
    local prop_type = BattlePassConfig:getBattlePassShopId()
    XH.lobby:getModule("BattlePass"):reqExchangeProductsInfo(prop_type, true)
end

function BattlePassLobbyModule:reqActivityInfo(index, ani, forceReq)
    index = index or 1
    if not self._actId[index] then
        return
    end
    local data = {tabIndex = index, func = "get", actId = self._actId[index], callback = handler(self, self.respActivityInfo), ani = ani}
    XH.lobby:getModule("BattlePass"):reqBattlePassInfo(data, 5, forceReq)
end
-- local data = {func = "award", actId = self._actId} -- 一键领取
-- local data = {func = "buy", actId = self._actId, level = 10} -- 购买等级
-- local data = {func = "task", actId = self._actId, taskid = 34} -- 购买登记

function BattlePassLobbyModule:respActivityInfo(data)
    self._battlePassInfo[data.reqData.tabIndex] = data.info
    self._battlePassConfig[data.reqData.tabIndex] = data.config
    self._lvAwardLists[data.reqData.tabIndex] = data.lvAwardLists
    self._maxAwardCnts[data.reqData.tabIndex] = data.maxAwardCnts
    -- 通知相关界面更新
    self:dispatchEvent({name = BattlePassLobbyModule.EVENT_BATTLE_PASS_RESP, data = {ani = data.reqData.ani}})
    -- 相关检测
    self:checkActOpen()
    self:checkRedPoint()
    self:onEventCheckActActive()
end

function BattlePassLobbyModule:checkInActTime(tabIndex)
    tabIndex = tabIndex or 1
    local info = self._battlePassInfo[tabIndex]
    -- 活动是否开启
    local endTime = info and info.endTime or 0
    return tonumber(endTime) > XH.lobby:getModule("Shop"):getServerTime()
end

function BattlePassLobbyModule:checkActOpen(tabIndex)
    local isOpen = self:checkInActTime(tabIndex)
    self:dispatchEvent({name = BattlePassLobbyModule.EVENT_UPDATE_BATTLE_PASS_ICON, data = {isOpen = isOpen}})
    -- 埋点
    if isOpen and not self._isOpen then
        self._isOpen = isOpen
        local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
        local page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042701, {page = page})
    end
end

function BattlePassLobbyModule:onEventCheckActActive(event)
    local isOpen = self:checkInActTime()
    self:dispatchEvent({name = BattlePassLobbyModule.EVENT_UPDATE_BATTLE_PASS_ICON, data = {isOpen = isOpen}})
    if not isOpen then
        if XH.viewManager:getView(XH.SceneManager:getInstance():getTopSceneTag(), "LobbyBattlePassView") then
            XH.TipTool.showToast("活动已结束")
        end
        self:closeAllBattlePassView()
    end
end

function BattlePassLobbyModule:closeAllBattlePassView()
    local viewsName = {
        "BattlePassRuleView", 
        "LobbyBattlePassView", 
        "LobbyBattlePassBuyLevelView", 
        "LobbyBattlePassRewardPreView", 
        "LobbyBattlePassUnlockView"
    }
    for _, v in ipairs(viewsName) do
        XH.viewManager:closeView(v)
    end
end

function BattlePassLobbyModule:checkActivityOpen(tabIndex)
    tabIndex = tabIndex or 1
    local info = self._battlePassInfo[tabIndex]
    -- 活动是否开启
    local endTime = info and info.endTime or 0
    local isOpen = tonumber(endTime) > XH.lobby:getModule("Shop"):getServerTime()
    return isOpen
end

function BattlePassLobbyModule:checkRedPoint(tabIndex)
    tabIndex = tabIndex or 1
    -- 是否有任务未领取
    local hasTaskReward = self:checkTaskReward(tabIndex)
    -- 是否有奖励未领取
    local hasAwardReward = self:checkAwardReward(tabIndex)
    self:dispatchEvent({name = BattlePassLobbyModule.EVENT_UPDATE_BATTLE_PASS_REDPOINT, data = {hasAwardReward = hasAwardReward, hasTaskReward = hasTaskReward}})
end

function BattlePassLobbyModule:checkHaveRedPoint(tabIndex)
    tabIndex = tabIndex or 1
    -- 是否有任务未领取
    local hasTaskReward = self:checkTaskReward(tabIndex)
    -- 是否有奖励未领取
    local hasAwardReward = self:checkAwardReward(tabIndex)
    if hasAwardReward or hasTaskReward then
        return true
    end
    return false
end

function BattlePassLobbyModule:checkTaskReward(tabIndex)
    tabIndex = tabIndex or 1
    local dailyReward = self:checkTaskRewardByTaskType(tabIndex, BattlePassConfig.TaskType.DAILY)
    local challengeReward = self:checkTaskRewardByTaskType(tabIndex, BattlePassConfig.TaskType.CHALLENGE)
    if dailyReward or challengeReward then
        return true
    end
    return false
end

function BattlePassLobbyModule:checkTaskRewardByTaskType(tabIndex, taskType)
    local taskList = self:getTaskList(tabIndex, taskType)
    for _, v in ipairs(taskList) do
        if v.taskStatus == BattlePassConfig.TaskStatus.FINISH then
            return true
        end
    end
    return false
end

function BattlePassLobbyModule:checkAwardReward(tabIndex)
    tabIndex = tabIndex or 1
    local function findCanGet(index)
        local lvAwardLists = self._lvAwardLists[index] or self._lvAwardListDefault
        for nn = 1, #lvAwardLists do
            local lv = lvAwardLists[nn].level
            if self._battlePassInfo[index].level < lv then
                return false
            end
            if lvAwardLists[nn] then
                for i = 1, 3 do
                    if self._battlePassInfo[index].isBuy[i] then
                        local awardLv = self._battlePassInfo[index].awardLv[i]
                        if awardLv <= lv and #lvAwardLists[nn][i] > 0 then
                            return true
                        end
                    end
                end
            end
        end
        return false
    end

    if tabIndex then
        return findCanGet(tabIndex)
    else
        for index = 1, 3 do
            if findCanGet(index) then
                return true
            end
        end
    end
    return false
end

function BattlePassLobbyModule:getAwardData(tabIndex)
    tabIndex = tabIndex or 1
    return self._lvAwardLists[tabIndex], self._maxAwardCnts[tabIndex]
end

function BattlePassLobbyModule:getBattlePassInfo(tabIndex)
    tabIndex = tabIndex or 1
    return self._battlePassInfo[tabIndex]
end

function BattlePassLobbyModule:getBattlePassConf(tabIndex)
    tabIndex = tabIndex or 1
    return self._battlePassConfig[tabIndex]
end

function BattlePassLobbyModule:getActEndTime(tabIndex)
    tabIndex = tabIndex or 1
    if self._battlePassInfo[tabIndex].endTime then
        return self._battlePassInfo[tabIndex].endTime
    end
    return 0
end

function BattlePassLobbyModule:getCurExp(tabIndex)
    tabIndex = tabIndex or 1
    if self._battlePassInfo[tabIndex] and self._battlePassInfo[tabIndex].exp then
        return self._battlePassInfo[tabIndex].exp
    end
    return 0
end

function BattlePassLobbyModule:getCurLevel(tabIndex)
    tabIndex = tabIndex or 1
    if self._battlePassInfo[tabIndex] and self._battlePassInfo[tabIndex].level then
        return self._battlePassInfo[tabIndex].level
    end
    return 0
end

function BattlePassLobbyModule:isMaxLevel(tabIndex)
    tabIndex = tabIndex or 1
    local maxLevel = self:getMaxLevel(tabIndex)
    return self:getCurLevel(tabIndex) >= maxLevel
end

function BattlePassLobbyModule:getMaxLevel(tabIndex)
    tabIndex = tabIndex or 1
    local conf = self:getBattlePassConf(tabIndex)
    if conf.maxLevel then
        return conf.maxLevel
    end
    return 0
end

function BattlePassLobbyModule:getLevelUpExp(tabIndex,lv)
    tabIndex = tabIndex or 1
    lv = lv or 0
    local awardData = self._lvAwardLists[tabIndex]
    for _, v in ipairs(awardData) do
        if v.level == lv then
            return v.exp
        end
    end
end

-- 至尊雀神令直升等级
function BattlePassLobbyModule:getSuperAddLevel(tabIndex)
    tabIndex = tabIndex or 1
    local conf = self._battlePassConfig[tabIndex]
    local awardList = conf.awardList
    return awardList and awardList.superAddLv or 0
end

-- 至尊战令经验加成
function BattlePassLobbyModule:getSuperAddExp(tabIndex)
    tabIndex = tabIndex or 1
    local conf = self._battlePassConfig[tabIndex]
    local awardList = conf.awardList
    return awardList and awardList.superAddExp or 0
end

-- 获取配置的商品信息
function BattlePassLobbyModule:getShopGoodsInfo()
    local shopList = {}
    local battlePassShopList = clone(XH.lobby:getModule("BattlePass"):getBattlePassShopList())
    local battlePassConfig = self:getBattlePassConf()
    if battlePassConfig and battlePassShopList and battlePassShopList.goods_list then
        for i = 2, 2 do -- 游戏只需要关注第二个购买项
            for j = 1, #battlePassConfig.buyProps[i] do
                for ls = 1, #battlePassShopList.goods_list do
                    if tonumber(battlePassShopList.goods_list[ls].value) == battlePassConfig.buyProps[i][j] then
                        table.insert(shopList, battlePassShopList.goods_list[ls])
                    end
                end
            end
        end
    end
    return shopList
end

-- 获取战令购买情况
function BattlePassLobbyModule:getBuyStatus()
    local battlePassInfo = self:getBattlePassInfo()
    local buyList = battlePassInfo.isBuy or {}
    return buyList[2] or false, buyList[3] or false
end


function BattlePassLobbyModule:getLevelUpGradePrice(tabIndex)
    tabIndex = tabIndex or 1
    local conf = self._battlePassConfig[tabIndex]
    return conf.buyLvDiamond or 0
end

function BattlePassLobbyModule:getTaskList(tabIndex , taskType)
    tabIndex = tabIndex or 1
    taskType = taskType or BattlePassConfig.TaskType.DAILY
    local conf = self._battlePassConfig[tabIndex]
    local taskList = {}
    if conf and conf.taskList then
        for _, v in ipairs(conf.taskList) do
            if v.taskType == taskType then
                table.insert(taskList, v)
            end
        end
    end
    -- 排序 
    -- 可领奖->未完成->已领奖
    -- 同类型的按照xx排序
    -- local function sortTasks(a,b)
    --     local function getPriority(task)
    --         if task.claimed == 1 then
    --             return 3 -- 已领取（最低优先级）
    --         elseif task.currentProgress >= task.targetProgress then
    --             return 1 -- 已完成（最高优先级）
    --         else
    --             return 2 -- 未完成
    --         end
    --     end
    --     local priorityA = getPriority(a)
    --     local priorityB = getPriority(b)
    --     -- 如果优先级相同，可以按其他字段（如id）排序
    --     if priorityA == priorityB then
    --         return a.id < b.id
    --     else
    --         return priorityA < priorityB
    --     end
    -- end
    return taskList
end

function BattlePassLobbyModule:getAwardFromLvToLv(tabIndex, lv1, lv2)
    tabIndex = tabIndex or 1
    local lvAwardLists = self._lvAwardLists[tabIndex]
    return XH.lobby:getModule("BattlePass"):getAwardFromLvToLv(lvAwardLists, lv1, lv2)
end

function BattlePassLobbyModule:reqAllTaskReward(index,taskid)
    if not taskid then
        return
    end
    index = index or 1
    local data = {tabIndex = index, func = "task", actId = self._actId[index], taskid = taskid, callback = handler(self, self.respTaskReward)}
    XH.lobby:getModule("BattlePass"):reqBattlePassTask(data, 5)
end

function BattlePassLobbyModule:respTaskReward(data)
    local taskExp = data and data.taskExp or 0
    XH.TipTool.showToast("领取成功,获得"..taskExp.."经验")
    self:reqActivityInfo()

    -- 埋点
    local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
    local strTaskIds = ""
    if data and data.taskIds then
        for i = 1, #data.taskIds do
            strTaskIds = strTaskIds .. data.taskIds[i]
            if i ~= #data.taskIds then
                strTaskIds = strTaskIds .. ","
            end
        end
    end
    local level = 0
    if data and data.zlInfo then
        level = data.zlInfo.level or 0
    end
    local data2 = {
        page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅",
        block_item_id = strTaskIds,
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042704, data2, {count = level})
end

function BattlePassLobbyModule:reqAllReward(index)
    index = index or 1
    local data = {tabIndex = index, func = "award", actId = self._actId[index], callback = handler(self, self.respAllReward)}
    XH.lobby:getModule("BattlePass"):reqBattlePassReward(data, 5)
end

function BattlePassLobbyModule:respAllReward(data)
    self:reqActivityInfo()
    local awardList = data and data.awardList
    local reqData = data and data.reqData
    if not awardList or not reqData or not data.reqData.tabIndex then return end
    local isBuyList = self._battlePassInfo[data.reqData.tabIndex].isBuy
    local willAwardList = {}
    local level = self:getCurLevel()
    local allAward = self:getAwardFromLvToLv(self._tabIndex, 0, level)
    local names = {"", "雀神令", "至尊雀神令"}
    local name = nil
    for i = 2, #allAward, 1 do
        if isBuyList[i] == false then
            if name == nil then
                name = names[i]
            end
            willAwardList = XH.lobby:getModule("BattlePass"):mergeAwardList(willAwardList, allAward[i])
        end
    end
    
    XH.viewManager:openView(
        "BattlePassGetAwardView",
        nil,
        {},
        {
            awardList = data.awardList,
            text = string.format("激活%s，可获得以下奖品", name or ""),
            willAwardList = willAwardList,
            callback = function()
                XH.viewManager:closeView("BattlePassGetAwardView")
                XH.viewManager:openView("LobbyBattlePassUnlockView", nil, {entrance = BattlePassConfig.LobbyUnLockEntrance.REWARD})
            end
        }
    )
end

-- 购买等级
function BattlePassLobbyModule:buyLevel(tabIndex, level)
    tabIndex = tabIndex or 1
    -- 检测道具是否足够
    local myDiamond = XH.playerData:getDiamnd()
    local needDiamond = self:getLevelUpGradePrice(tabIndex, level) * level
    if needDiamond > myDiamond then
        -- 未实名不能购买 海外玩家不用实名认证
        if XH.configerManager:getIsNewRealName() then
            if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
        else
            if not XH.lobby:getModule("Shop"):isAleardyRealName() then
                XH.TipTool.showTip( {
                    type = XH.TIP_LAYER_TYPE.OK,
                    funcOK = function()
                        XH.viewManager:openView("IdentityCheckView")
                    end
                } , "PLEASE_REAL_NAME")
                return
            end 
        end
        local needBuyDiamond = needDiamond - myDiamond
        local ShopConfig = require("lobby.Modules.Shop.Config")
        local _, subId = XH.lobby:getModule("Shop"):getTagsWithName(ShopConfig.SpecialTag.DIAMOND)
        local allproDouct = XH.lobby:getModule("Shop"):getShopItemsWithId(subId) or { }
        local productInfo = {}
        for _,v in pairs(allproDouct) do
            if tonumber(v.value) >= needBuyDiamond then
                productInfo = v
                break
            end
        end
        if not productInfo or not next(productInfo) then 
            XH.TipTool.showToast("未找到对应钻石商品配置")
            return 
        end
        XH.TipTool.showTip( {
            type = XH.TIP_LAYER_TYPE.OK,
            funcOK = function()
                XH.lobby:getModule("Shop"):reqBuyDiamond(productInfo, "deliver_award", nil, nil, true, nil)
            end
        } ,string.format( "钻石不足，是否充值%s元购买%s钻石？\n(充值后将自动兑换商品)",tonumber(productInfo.price), productInfo.value))
    else
        self:reqBuyLevel(tabIndex,level)
    end
end

function BattlePassLobbyModule:reqBuyLevel(tabIndex,level)
    tabIndex = tabIndex or 1
    level = level or 1
    local data = {tabIndex = tabIndex, func = "buy", actId = self._actId[tabIndex], level = level, callback = handler(self, self.respBuyLevel)}
    XH.lobby:getModule("BattlePass"):reqBattleBassBuy(data, 5)
end

function BattlePassLobbyModule:respBuyLevel(data)
    XH.viewManager:closeView("LobbyBattlePassBuyLevelView")
    self:reqActivityInfo(nil, true)
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
end

function BattlePassLobbyModule:onLoginSuccess(event)
    self:reqActivityInfo()
end

function BattlePassLobbyModule:onEventPoolPrizesSucc(event)
    -- self:checkRedPoint()
end

function BattlePassLobbyModule:setPageType(pageType)
    self._pageType = pageType or BattlePassConfig.LobbyPageType.REWAED
    -- 埋点
    local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
    local page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
    local page_item_id = "奖励"
    if pageType == BattlePassConfig.LobbyPageType.REWAED then
        page_item_id = "奖励"
    elseif pageType == BattlePassConfig.LobbyPageType.EVERYDAYTASK then
        page_item_id = "每日任务"
    elseif pageType == BattlePassConfig.LobbyPageType.CHALLENGETASK then
        page_item_id = "挑战任务"
    end
    local data = {
        page = page,
        page_item_id = page_item_id,
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042705, data)
end

function BattlePassLobbyModule:getPageType()
    return self._pageType or BattlePassConfig.LobbyPageType.REWAED
end

function BattlePassLobbyModule:throwBtnClickData(blocl_label)
    local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
    local page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅"
    local pageType = self:getPageType()
    local page_item_id = "奖励"
    if pageType == BattlePassConfig.LobbyPageType.REWAED then
        page_item_id = "奖励"
    elseif pageType == BattlePassConfig.LobbyPageType.EVERYDAYTASK then
        page_item_id = "每日任务"
    elseif pageType == BattlePassConfig.LobbyPageType.CHALLENGETASK then
        page_item_id = "挑战任务"
    end
    local data = {
        page = page,
        page_item_id = page_item_id,
        block_label = blocl_label
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042706, data)
end

return BattlePassLobbyModule
