local BattlePassDarkShuangKouModule = class("BattlePassDarkShuangKouModule", XH.ModuleBase)
local BattlePassConfig = require("lobby.Modules.BattlePass.Config")

BattlePassDarkShuangKouModule.KW_EVENT_UPDATE_UI = "KW_EVENT_UPDATE_UI"
BattlePassDarkShuangKouModule.EVENT_BATTLEPASS_DARKSHUANGKOU_RED_POINT = "EVENT_BATTLEPASS_DARKSHUANGKOU_RED_POINT"
BattlePassDarkShuangKouModule.EVENT_BATTLEPASS_DARKSHUANGKOU_SHOW = "EVENT_BATTLEPASS_DARKSHUANGKOU_SHOW"

function BattlePassDarkShuangKouModule:ctor()
    BattlePassDarkShuangKouModule.super.ctor(self)
    self:resetData()

    -- local battlePassInfo = {
    --     level = 5, --当前等级
    --     exp = 0, --当前经验值
    --     awardLv = {2, 0, 0}, -- 奖励等级 暗斗为对局数
    --     canBuyPropIds = {}, -- 该战令可购买升级的道具id
    --     buyPropIds = {}, -- 购买过的战令升级道具id
    --     startTime = 0, -- 开始时间
    --     endTime = 0, -- 结束时间
    --     isBuy = {true, false, false}
    -- }

    -- local battlePassConfig = {
    --     name = "", -- 战令名称
    --     maxLevel = 0, --  最大等级
    --     buyLvDiamond = 0, -- 购买每等级需要的钻石 不可购买为0
    --     taskList = {}, -- 任务列表 暗斗为空 和ju_game_id冲突 ZLTaskInfo
    --     juGameId = 0, -- 通过对局累计登记 类似暗斗gameId 30579 和task_list冲突
    --     buyProps = {}
    -- }

    -- local ZLAwardGet = {
    --     propId = 0, -- 道具id
    --     propNum = 0, -- 道具数量
    --     expireTime = 0, -- 道具过期时间
    --     name = "", -- 道具名称
    --     img = "" -- 道具图片
    -- }

    -- local LvAwardInfo = {
    --     level = 0, -- 等级 暗斗为对局数
    --     exp = 0, -- 经验值
    --     freePoolGoods = {}, -- 免费奖池id PoolGoods
    --     seniorPoolGoods = {}, -- 高级奖池id 暗斗为付费奖池 PoolGoods
    --     superPoolGoods = {} -- 至尊奖池id PoolGoods
    -- }

    self._battlePassInfoDefault = {
        level = 0, -- 当前等级
        exp = 0, -- 当前经验值
        awardLv = {0, 0, 0}, -- 奖励等级 暗斗为对局数
        canBuyPropIds = {}, -- 该战令可购买升级的道具id
        buyPropIds = {}, -- 购买过的战令升级道具id
        startTime = 0, -- 开始时间
        endTime = 0, -- 结束时间
        isBuy = {true, false, false}
    }
    self._lvAwardListDefault = {}
    self._maxAwardCntDefault = {0, 0, 0}

    self._battlePassInfo = {}
    self._battlePassConfig = {}
    self._lvAwardLists = {}
    self._maxAwardCnts = {}
end

function BattlePassDarkShuangKouModule:resetData()
    self._actId = {0, 0, 0}
end

function BattlePassDarkShuangKouModule:getProxyEvents()
    return {
        {module = XH.login:getModule("Login"), eventKeyName = "LOGIN_EVENT_SUCCESS", callBack = "startReqActivityInfo"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "SHOW_XIUXIAN_GAME", callBack = "startReqActivityInfo"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_SHOW_DETAIL_LAYER", callBack = "onShowDetailGoldLayer"},
    }
end

function BattlePassDarkShuangKouModule:setActivityId(actId, index)
    self._actId[index] = actId
    local prop_type = BattlePassConfig:getBattlePassShopId()
    XH.lobby:getModule("BattlePass"):reqExchangeProductsInfo(prop_type, true)
end

function BattlePassDarkShuangKouModule:onShowDetailGoldLayer(event)
    if event and event.gameID and event.gameID == 30579 then
        self:startReqActivityInfo()
    end
end

function BattlePassDarkShuangKouModule:startReqActivityInfo()
    for i = 1, 3 do
        if self._actId[i] and self._actId[i] ~= 0 then
            self:reqActivityInfo(i, false)
        end
    end
end

function BattlePassDarkShuangKouModule:getActivityIds()
    return self._actId
end

function BattlePassDarkShuangKouModule:reqActivityInfo(index, forceReq)
    if index and self._actId[index] then
        local data = {tabIndex = index, func = "get", actId = self._actId[index], callback = handler(self, self.respActivityInfo)}
        XH.lobby:getModule("BattlePass"):reqBattlePassInfo(data, 5, forceReq)
    end
end

function BattlePassDarkShuangKouModule:respActivityInfo(data)
    local tabIndex = data.reqData.tabIndex
    self._battlePassInfo[tabIndex] = data.info
    self._battlePassConfig[tabIndex] = data.config
    self._lvAwardLists[tabIndex] = data.lvAwardLists
    self._maxAwardCnts[tabIndex] = data.maxAwardCnts
    self:dispatchEvent({name = self.KW_EVENT_UPDATE_UI, msg = tabIndex})
    self:dispatchEvent({name = self.EVENT_BATTLEPASS_DARKSHUANGKOU_RED_POINT})
end

function BattlePassDarkShuangKouModule:getAward(index)
    local data = {
        func = "award",
        actId = self._actId[index],
        callback = handler(self, self.respGetAward),
        tabIndex = index,
        beforeLv = clone(self._battlePassInfo[index].awardLv),
        level = self._battlePassInfo[index].level
    }
    XH.lobby:getModule("BattlePass"):reqBattlePassInfo(data, 5)
end

function BattlePassDarkShuangKouModule:respGetAward(data)
    local tabIndex = data.reqData.tabIndex

    self._needBuyPropInfo = nil
    local battlePassShopList = XH.lobby:getModule("BattlePass"):getBattlePassShopList()
    local battlePassConfig = self:getBattlePassConfig(tabIndex)
    if battlePassConfig and battlePassShopList then
        for i = 2, 2 do -- 游戏只需要关注第二个购买项
            for j = 1, #battlePassConfig.buyProps[i] do
                for ls = 1, #battlePassShopList.goods_list do
                    if tonumber(battlePassShopList.goods_list[ls].value) == battlePassConfig.buyProps[i][j] then
                        self._needBuyPropInfo = battlePassShopList.goods_list[ls]
                        local ymnPrice = XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(self._needBuyPropInfo.product_id)
                        self._needBuyPropInfo.price = ymnPrice or self._needBuyPropInfo.price / 100
                        self._needBuyPropInfo.real_price = ymnPrice or self._needBuyPropInfo.price / 100
                        self._needBuyPropInfo.gameid = 30579
                        break
                    end
                end
            end
        end
    end

    local names = {"白银战令", "黄金战令", "至尊战令"}
    local a2 = self:getAwardFromLvToLv(tabIndex, data.reqData.beforeLv[2], self._battlePassInfo[tabIndex].level)
    local a3 = self:getAwardFromLvToLv(tabIndex, data.reqData.beforeLv[3], self._battlePassInfo[tabIndex].level)
    local b = XH.lobby:getModule("BattlePass"):mergeAwardList(a2[2], a3[3])
    if self._battlePassInfo[tabIndex].isBuy[2] then
        -- 已购买，战令奖励信息为空
        b = nil
    end
    XH.viewManager:openView(
        "BattlePassGetAwardView",
        nil,
        {},
        {
            awardList = data.awardList,
            text = string.format("激活%s，可获得以下奖品", names[tabIndex]),
            battlePassAward = b,
            propInfo = self._needBuyPropInfo,
            callback = function()
                XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042713, {page_item_id = names[tabIndex]})
                XH.lobby:getModule("BattlePass"):reqBuy(self._needBuyPropInfo, nil, true)
            end
        }
    )

    XH.SysTool.performDelayOnce(
        function()
            self:reqActivityInfo(tabIndex)
        end,
        1
    )
end

function BattlePassDarkShuangKouModule:getAwardData(tabIndex)
    tabIndex = tabIndex or 1
    return self._lvAwardLists[tabIndex] or self._lvAwardListDefault, self._maxAwardCnts[tabIndex] or self._maxAwardCntDefault
end

function BattlePassDarkShuangKouModule:getBattlePassInfo(tabIndex)
    tabIndex = tabIndex or 1
    return self._battlePassInfo[tabIndex] or self._battlePassInfoDefault
end

function BattlePassDarkShuangKouModule:getBattlePassConfig(tabIndex)
    tabIndex = tabIndex or 1
    return self._battlePassConfig[tabIndex]
end

function BattlePassDarkShuangKouModule:getAwardFromLvToLv(tabIndex, lv1, lv2)
    local lvAwardLists = self._lvAwardLists[tabIndex]
    return XH.lobby:getModule("BattlePass"):getAwardFromLvToLv(lvAwardLists, lv1, lv2)
end

function BattlePassDarkShuangKouModule:checkActivityOpenByIndex(i)
    if self._battlePassInfo and self._battlePassInfo[i] then
        local startTime = tonumber(self._battlePassInfo[i].startTime) or 0
        local endTime = tonumber(self._battlePassInfo[i].endTime) or 0
        local serverTime = XH.lobby:getModule("Shop"):getServerTime()
        if startTime > 0 and startTime <= serverTime and endTime > 0 and endTime > serverTime then
            return true
        end
    end
    return false
end

function BattlePassDarkShuangKouModule:checkActivityIconOpen()
    self:dispatchEvent({name = self.EVENT_BATTLEPASS_DARKSHUANGKOU_SHOW})
end

function BattlePassDarkShuangKouModule:checkActivityOpen()
    for i = 1, 3 do
        if self._actId[i] ~= 0 then
            if self:checkActivityOpenByIndex(i) then
                return true
            end
        end
    end
    return false
end

function BattlePassDarkShuangKouModule:checkHaveRedPoint()
    for i = 1, 3 do
        if self:haveCanGet(i) then
            return true
        end
    end
    return false
end

function BattlePassDarkShuangKouModule:haveCanGet(tabIndex)
    if self._actId[tabIndex] == 0 then
        return false
    end
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
        return false
    end
end

return BattlePassDarkShuangKouModule
*