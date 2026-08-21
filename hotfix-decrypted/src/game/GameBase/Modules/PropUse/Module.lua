local PropUseModule = CF.gameClass("PropUseModule", CF.ModuleBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')
local ShopConfig = require("lobby.Modules.Shop.Config")
local CutCardsDefine = CF.gameRequire("Modules.PropUse.CutCardsDefine")
PropUseModule.EVENT_PROP_DATA_CHANGED = "EVENT_PROP_DATA_CHANGED"
PropUseModule.EVENT_SHUFFLE_USE_PROP_SUCCESS = "EVENT_SHUFFLE_USE_PROP_SUCCESS"
PropUseModule.EVENT_PRESHUFFLE_SHOW = "EVENT_PRESHUFFLE_SHOW"
PropUseModule.EVENT_UPDATE_SHUFFLE_TEXT = "EVENT_UPDATE_SHUFFLE_TEXT"
PropUseModule.EVENT_START_SHUFFLE = "EVENT_START_SHUFFLE"
PropUseModule.EVENT_PRE_SUCCESS = "EVENT_PRE_SUCCESS"
PropUseModule.EVENT_SHOW_SHUFFLE_LIST = "EVENT_SHOW_SHUFFLE_LIST"

local Shuffle4Config = CF.gameRequire("Modules.Shuffle4.Config")

local Define = CF.gameRequire("Modules.ChangeCard.Define")

-- 洗牌4.0顶部提示
PropUseModule.EVENT_SHUFFLE_TIP_SCENE = "EVENT_SHUFFLE_TIP_SCENE"   -- 场景1：开局其他玩家使用，但自己未使用 or 场景2：其他玩家预约下一局，自己未预约
PropUseModule.EVENT_SHUFFLE_USE_SUCCESS = "EVENT_SHUFFLE_USE_SUCCESS"   -- 使用洗牌成功

function PropUseModule:ctor()
    PropUseModule.super.ctor(self)
    self._lastPropInfo = nil
    self._lastPropCost = 0
    self._playSR = 0
    self._playerTimeProps = {}
    self._playerProps = {}
    self._shuffleProps = {}     -- 风信后台的洗牌需要消耗的道具
    self._shuffleIds = {}       -- 预洗牌ID(包含局数)
    self._isNeedDelayCmd = false    -- 是否需要缓存协议
    self._delayCmd = {}         -- 缓存的协议信息
    self._shufflePlayCount = 0  -- 当前正在洗牌的局数，防止多次进入
    self._reqPlayCount = nil    -- 请求预洗牌的局数
    self._isDealDelayCmd = false    -- 是否正在处理缓存的协议，防止多次进入
    self._LogicScheduleScriptID = 0 -- 超时处理
    self._DelayCmdScheduleID = 0    -- 超时处理
    self._shuffleIdsCurRound = {}   -- 当局洗牌玩家ID
    self._headNodeInfo = {}         -- 玩家头像节点信息
end

function PropUseModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgClientForwardBase),msgClass = CF.GameProtocol.msgBaseClientForwardEx},
    }
end

function PropUseModule:getReqConfig()
    return {
        ReqUseProps50 = {reqPath = "lobby.Req.BagSysNew.ReqUseProps50", callBack = self.respUseProps50}
    }
end

function PropUseModule:getProxyEvents()
    return {
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseProps.event_key, callBack = "onRespUseProp"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespCharge.event_key, callBack = "onRespCharge"},
        {module = CF.netEngine, eventName = CF.ToolMProtocol.ResSR.event_key, callBack = "onRespPlayerGold"},
        {module = CF.netEngine, eventName = CF.ToolMProtocol.RespPlayerPropsData.event_key, callBack = "onRespPlayerPropData"},
        {module = CF.netEngine, eventName = CF.GameMProtocol.RespUseEmojiProps.event_key, callBack = "onRespUseEmojiProp"},
        {module = CF.game:getModule("Player"), eventKeyName = "EVENT_PLAYER_ENTER", callBack = "onPlayerEnter"},
        {module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onStartChangeCard"},
        {module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "onDataChanged" },
    }
end

-- 请求玩家金币信息返回
function PropUseModule:onRespPlayerGold(event)
    local playerPropDataMsg = CF.ToolMProtocol.ResSR:new()
    playerPropDataMsg:bistream(event.msg.buff, event.msg.len)
    self._playSR = playerPropDataMsg.purse
end

function PropUseModule:getRespUsePropConfig()
    return {
        {keyStr = "shuffle=1", callBack = handler(self, self.onUsePropShuffle)},
        {keyStr = "throwprop=1;", callBack = handler(self, self.onUsePropThrowprop)},
        {keyStr = "shufflecut=1", callBack = handler(self, self.onUsePropShuffleCut)},
        {keyStr = "preCutCost=1", callBack = handler(self, self.onUsePropCut)},
    }
end

function PropUseModule:onUsePropShuffle(usePropMsg)
    self:playShuffle(usePropMsg)
    CF.SysTool.performWithDelayGlobal( 
        function()
            local module = CF.game:getModule("Shuffle4")
            if module and module:isShufflePlanActive() then
                module:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Get})
            end
        end,
        2
    )
end

function PropUseModule:onUsePropShuffleCut(usePropMsg)
    CF.roomData:reqCutCardsState(1)
    -- 接口合并
    self:playShuffle(usePropMsg)
end

function PropUseModule:onUsePropCut(UsePropMsg)
    if not CF.roomData or not CF.roomData:isOpenCutCards() then
        return
    end
    if CF.gameSub:isMahjong(CF.roomData:getGameID()) then
        local cutCardsView = CF.gameRequire("Modules.PropUse.CutMahsView").new(UsePropMsg.param)
        cutCardsView:showSelf()
    else
        local cutCardsView = CF.gameRequire("Modules.PropUse.CutCardsView").new(UsePropMsg.param)
        cutCardsView:showSelf()
    end
end

function PropUseModule:onUsePropThrowprop(usePropMsg)
    local pos = string.find(usePropMsg.param, "throwprop=1;")
    local tmpStr = string.sub(usePropMsg.param, pos)
    local strdata = string.gsub(tmpStr, "throwprop=1;", "")
    CF.msgManager:sendPropAni(strdata)
    local backTable = CF.StringTool.getTableByString(strdata,";","=")
    local isMass = backTable["isMassSend"]
    local costInfoTrack = {
        role = "非会员免费",
        state = isMass and "群发" or "非群发"
    }
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.djqj25070104, {costInfoTrack = costInfoTrack})
end

function PropUseModule:onUsePropSuccess(usePropMsg)
    local respUsePropconfig = self:getRespUsePropConfig() or {}
    for _, conf in pairs(respUsePropconfig) do
        if string.match(usePropMsg.param, conf.keyStr) then
            if (conf.keyStr == "shuffle=1" or conf.keyStr == "shufflecut=1") and not CF.roomData:isSupportPreShuffle() then
                self:dispatchEvent({name = self.EVENT_SHUFFLE_USE_PROP_SUCCESS})
                CF.roomData:setbShuffle()
            end
            if usePropMsg.prop_id == CF.areaData:getGoldPropId() then 
                CF.getLobbyModule("Guide"):flushGoldCoin()
            else 
                CF.selfPlayerData:flushPlayerDrop()
            end 
            conf.callBack(usePropMsg)
        end
    end
    -- if string.match(usePropMsg.param, "shuffle=1") or string.match(usePropMsg.param, "shufflecut=1") then
    --     local luckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
    --     XH.lobby:getModule("LuckyMission"):reqTaskV2Finish(luckyMissionConfig.TaskType.Res_PropShuffle)
    -- end
end

function PropUseModule:onUsePropFail(usePropMsg)
    --失败原因
    if usePropMsg.flag == CF.GameMProtocol.RespUseProps.FLAG.NOENOUGHPROPS or usePropMsg.flag == CF.GameMProtocol.RespUseProps.FLAG.NOT_COST then
        local Config = require("lobby.Modules.QuickRecharge.Config")
        if self._reqParam and string.find(self._reqParam, "throwprop=1") then
            local sceneID = CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM and Config.SCENE_NAME.KW_BOX_INTERACT or Config.SCENE_NAME.KW_GOLD_INTERACT
            CF.getLobbyModule("QuickRecharge"):reqSpecialSceneGoods(sceneID, self._reqParam)
            return
        else
            local sceneID = CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM and Config.SCENE_NAME.KW_BOX_SHUFFLE or Config.SCENE_NAME.KW_GOLD_SHUFFLE
            CF.getLobbyModule("QuickRecharge"):reqSpecialSceneGoods(sceneID)
        end
        -- tipLayer:setText("使用失败，道具不足")
    else
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("使用道具失败，errcode：" .. usePropMsg.flag)
    end
    if usePropMsg and usePropMsg.param then
        if string.match(usePropMsg.param, "allShuffle=1") then
            -- 所有人洗牌情况下，如果自己请求扣道具失败了，要把自己的ID移除
            table.removebyvalue(self._shuffleIdsCurRound, CF.selfPlayerData:getNumberID())
            self:playShuffle(usePropMsg)
            return
        end
    end
    if CF.roomData and CF.roomData.isSupportPreShuffle and CF.roomData:isSupportPreShuffle() then
        self:shuffleFinished()
    end
end

-- 使用道具
function PropUseModule:onRespUseProp(event)
    local usePropMsg = CF.GameMProtocol.RespUseProps:new()
    usePropMsg:bistream(event.msg.buff, event.msg.len)
    if usePropMsg.flag == 0 then -- 使用成功
        if string.find(usePropMsg.param, Define.FlagStr) then
            return usePropMsg
        end
        self:onUsePropSuccess(usePropMsg)
        if self._sucCall then
            self._sucCall()
        end
    else
        self:onUsePropFail(usePropMsg)
    end
    self._sucCall = nil
    if CF.roomData and CF.roomData.isSupportPreShuffle then
        if not CF.roomData:isSupportPreShuffle() then
            CF.roomData._bShuffling = false
        else
            self:stop()
        end
    end
    return usePropMsg
end

-- 使用道具
function PropUseModule:onRespCharge(event)
    local respData = CF.GameMProtocol.RespCharge:new()
    respData:bistream(event.msg.buff, event.msg.len)
    local flag = respData.ucFlag
    if flag == CF.GameMProtocol.RespCharge.FLAG.SUCCESS then
        self:onRespChargeSuccess()
    else
        self:onRespChargeFail(flag)
    end
end

function PropUseModule:onRespChargeSuccess()
    if not self._lastPropInfo then
        return
    end
    local respChargeConfig = self:getRespChargeConfig() or {}
    for _, conf in pairs(respChargeConfig) do
        if string.match(self._lastPropInfo, conf.keyStr) then
            conf.callBack()
        end
    end
    CF.msgManager:sendReqPlayerGold()
end

function PropUseModule:getRespChargeConfig()
    return {
        {keyStr = "shuffle=1", callBack = handler(self, self.onRespChargeShuffle)},
        {keyStr = "throwprop=1;", callBack = handler(self, self.onRespChargeThrowprop)},
    }
end

function PropUseModule:onRespChargeThrowprop()
    self:sendPropAni()
end

function PropUseModule:onRespChargeShuffle()
    self:playShuffle({param = ""})
end

function PropUseModule:onRespChargeFail(flag)
    if flag == CF.GameMProtocol.RespCharge.FLAG.NOT_SCORE then
        CF.TipTool.showToast("使用失败，道具不足！")
    elseif flag == CF.GameMProtocol.RespCharge.FLAG.PLAYER_SR_MUST_GE_MIN_SR then
        CF.TipTool.showToast("使用失败，道具需大于房间准入条件！")
    else
        CF.TipTool.showToast("使用道具失败，errcode：" .. flag)
    end
end

function PropUseModule:playShuffle(usePropMsg)
    local bLocalShuffle = true
    if CF.configData and CF.configData.getIsLocalShuffle and CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM then
        bLocalShuffle = CF.configData:getIsLocalShuffle()
    end
    if bLocalShuffle then
        local param = usePropMsg and usePropMsg.param
        local allShuffle = false
        if param and string.match(param, "allShuffle=1") then
            allShuffle = true
        end
        self:playLocalShuffle(usePropMsg)
        if allShuffle then
            self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_SCENE, msg = { userIds = self._shuffleIdsCurRound, scene = 1 } })
        else 
            self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_SCENE, msg = { isMe = true } })
        end
    else
        CF.msgManager:sendReqShuffle()
    end
end

function PropUseModule:playLocalShuffle(usePropMsg)
    local allShuffle = false
    usePropMsg = usePropMsg and usePropMsg or {}
    if type(usePropMsg.param) == "string" and string.match(usePropMsg.param, "allShuffle=1") then
        allShuffle = true
    end
    if allShuffle then
        local shuffleList = {}
        local KW_TMP_THESAURUS = {"金主", "豪门", "富豪", "贵族", "财主"}
        for _,v in pairs(self._shuffleIdsCurRound) do
            local player = CF.roomData:getPlayerDataByNumberID(v)
            if player then
                local shufferText = string.format("%s玩家%s，正在洗牌...", KW_TMP_THESAURUS[math.random(1, #KW_TMP_THESAURUS)], player:getNickName2())
                table.insert(shuffleList, shufferText)
            end
        end
        if #shuffleList > 0 then
            local ShuffleView = CF.gameRequire("Modules.PropUse.ShuffleView")
            local runningScene = display.getRunningScene()
            if not runningScene:getChildByName(ShuffleView.ClassName) then
                ShuffleView.new(usePropMsg.param):showSelf()
            end
            self:dispatchEvent({name = self.EVENT_SHOW_SHUFFLE_LIST, msg = {shufflelist = shuffleList}})
        else
            self:shuffleFinished()
        end
        return
    end
    --播放洗牌动画
    CF.gameRequire("Modules.PropUse.ShuffleView").new(usePropMsg.param):showSelf()
end

-- 发送请求使用道具
function PropUseModule:reqShuffleCharge()
    self._lastPropInfo = "shuffle=1"
    self._lastPropCost = self:getShufflePrice()
    CF.msgManager:reqCharge(self._lastPropCost)
end

-- 发送请求使用道具
function PropUseModule:sendReqCharge(propNum, info, propIndex)
    if self._playSR - propNum < 0 then
        CF.TipTool.showToast("使用失败，道具不足！")
        return
    end
    self._lastPropInfo = info
    self._lastPropCost = propNum
    if propNum == 0 then
        self:sendPropAni()
        CF.game:getModule("Guide"):reqPropFreeTimes(propIndex)
        return
    end
    CF.msgManager:reqCharge(propNum)
end

function PropUseModule:sendPropAni()
    if self._lastPropInfo then
        local strdata = string.gsub(self._lastPropInfo, "throwprop=1;", "")
        CF.msgManager:sendPropAni(strdata)
    end
end

function PropUseModule:getRoomLevel()
    local lobbyId = CF.areaData:getLobbyID()
    return cc.UserDefault:getInstance():getIntegerForKey("_KW_DATA_LAST_JOIN_GOLD_LEVEL_" .. lobbyId, 0)
end

local tPrice =
    setmetatable(
    {
        [1] = 500,
        [2] = 1000,
        [3] = 2000,
        [4] = 5000,
        [5] = 20000,
    },
    {
        __index = function()
            return 500
        end
    }
)

function PropUseModule:getOriginalShufflePrice()
    return 2000
end

function PropUseModule:getShufflePrice(level)
    level = level or CF.roomData:getRoomLevel()
    return tPrice[level%10]
end

function PropUseModule:reqShuffleWithTicket()
    local propNum = 1
    local propTypeSting = propNum .. " 张洗牌券"
    local propId = CF.gameSub:getShufflePropQuanID()
    self:onDealPlayerShuffle(propTypeSting, propNum, propId)
end

function PropUseModule:reqShuffleWithProp()
    --消耗的道具数量
    local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    if not shuffleInfo or not shuffleInfo.cost then
        CF.TipTool.showToast("获取道具信息失败", 2)
        return
    end
    local propNum = shuffleInfo.cost
    local propID = shuffleInfo.propID
    local propTypeName = " 钻石"
    if propID == CF.areaData:getPropRoomCardID() or propID == CF.areaData:getPropBindRoomCardID() then
        propTypeName = " 张房卡"
    end
    local propTypeSting = propNum .. propTypeName
    local finalPropID, finalPropNum = self:getFinalPropAndNum(propID, propNum)

    
    -- 免费33协议会返回失败
    local module = CF.game:getModule("Shuffle4")
    if finalPropNum == 0 and module and module:isFree() then
        -- 本地洗牌使用预洗牌，逻辑洗牌不支持预洗牌
        if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
            local nType = CF.gameSub:getShuffleType(CF.roomData:getGameID())
            local param = "shuffle=1"
            local gameID = CF.roomData and CF.roomData:getGameID() or 0
            param = param .. ";gameID=" .. gameID
            local tmpParam = ""
            if CF.roomData and CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
                tmpParam = self:getParam(finalPropID, nType) or ""
            end
            param = param .. tmpParam
            local usePropMsg = CF.GameMProtocol.RespUseProps:new()
            usePropMsg.param = param
            usePropMsg.prop_id = finalPropID
            self:onUsePropSuccess(usePropMsg)
        else
            local type = CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET or 1
            self:reqPreShuffle(type)
        end
        CF.TipTool.clearScrollTip()
        CF.game:getModule("ReadyTip"):showReadyTip()
        module:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Free})

        --洗牌后发送准备
        if CF.gameSub:isMahjong(CF.roomData:getGameID()) and not self:getIsLocalShuffle() then
            CF.msgManager:sendGameStart()
        end
        return
    end

    self:onDealPlayerShuffle(propTypeSting, finalPropNum, finalPropID)
end

function PropUseModule:onPreCutCard(reportData)
    if CutCardsDefine == nil or CutCardsDefine.Cost[CF.areaData:getLobbyID()] == nil then
        return
    end

    if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
        self:reqCutCardWithProp(true)
        return
    end

    -- 预切牌切牌状态记录在本地
    self:preCutCard(reportData)
    CF.roomData._bShuffling = false
    CF.game:getModule("CenterBtns"):onStartGameEvent()
end

--处理玩家洗牌操作，支持预洗牌的要先预洗牌
function PropUseModule:onDealPlayerShuffle(propTypeSting, propNum, propId)
    if not CF.roomData:getbShuffle() and not CF.roomData._bShuffling then
        local isShowShuffleTip = cc.UserDefault:getInstance():getBoolForKey("isShowShuffkeNext" .. CF.roomData:getGameID(), true)
        local modu = CF.game:getModule("Shuffle4")
        if modu and modu:isFree() then
            isShowShuffleTip = false
        end
        if isShowShuffleTip then
            local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.SHUFFLE_TIP, CF.roomData:getGameID()})
            tipLayer:setText("本次洗牌操作将消耗你 " .. propTypeSting)
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.OK,
                function()
                    if CF.roomData:getIsGameStart() then
                        CF.TipTool.showToast("游戏已开始，无法洗牌")
                    else
                        -- 本地洗牌使用预洗牌，逻辑洗牌/金币场不支持预洗牌
                        CF.roomData._bShuffling = true
                        if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
                            if CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
                                self:sendRequestUseProps(propId, propNum, CF.gameSub:getShuffleType(CF.roomData:getGameID()), "shuffle=1")
                            else
                                CF.msgManager:sendRequestUseProps(propId, propNum, CF.gameSub:getShuffleType(CF.roomData:getGameID()), "shuffle=1")
                            end
                        else
                            local type = CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET or 1
                            self:reqPreShuffle(type)
                        end
                        CF.TipTool.clearScrollTip()
                        CF.game:getModule("ReadyTip"):showReadyTip()
                    end
                end
            )
            local cancelFunc = function()
                CF.game:getModule("CenterBtns"):onStartGameEvent()
            end
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.CANCEL,
                cancelFunc
            )
            tipLayer:setButtonMoreEvent(
                tipLayer.ENUM_BUTTON_TYPE.CLOSE,
                cancelFunc
            )
        else
            CF.roomData._bShuffling = true
            -- 本地洗牌使用预洗牌，逻辑洗牌不支持预洗牌
            if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
                if CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
                    self:sendRequestUseProps(propId, propNum, CF.gameSub:getShuffleType(CF.roomData:getGameID()), "shuffle=1")
                else
                    CF.msgManager:sendRequestUseProps(propId, propNum, CF.gameSub:getShuffleType(CF.roomData:getGameID()), "shuffle=1")
                end
            else
                local type = CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET or 1
                self:reqPreShuffle(type)
            end
            CF.TipTool.clearScrollTip()
            CF.game:getModule("ReadyTip"):showReadyTip()
        end
    else
        CF.TipTool.showToast("请勿频繁操作", 2)
    end
end

--TODO
function PropUseModule:dealProp(costPropId, costPropCount, seatId, propIndex, sucCall)
    local nCostCnt = costPropCount
    local propName = ""
    if type(costPropCount) == "string" then
        nCostCnt, propName = costPropCount:match("(%d+%.?%d*)%s*(.+)")
        nCostCnt = tonumber(nCostCnt)
    end
    local propCnt = self:getPropCnt(costPropId)
    if propCnt <= 0 and nCostCnt and CF.selfPlayerData:getDiamnd() < nCostCnt and propName == "钻石" and not CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(costPropId) then 
        local param = {}
        param.propCount = nCostCnt
        param.propType = ShopConfig.SpecialTag.DIAMOND
        XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
        return false
    end 
    self:dealPropNew(costPropId, costPropCount, seatId, propIndex, sucCall)
    return true
end

function PropUseModule:dealPropOld(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    local nCostCnt = costPropCount
    local propName = ""
    if type(costPropCount) == "string" then
        nCostCnt, propName = costPropCount:match("(%d+%.?%d*)%s*(.+)")
        nCostCnt = tonumber(nCostCnt)
    end
    local propCnt = self:getPropCnt(costPropId)
    if propCnt <= 0 and nCostCnt and CF.selfPlayerData:getDiamnd() < nCostCnt and propName == "钻石" and not CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(costPropId) then 
        local param = {}
        param.propCount = nCostCnt
        param.propType = ShopConfig.SpecialTag.DIAMOND
        XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
        return false
    end 
    self:dealPropOldOld(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    return true
end

function PropUseModule:dealProp2(useToPropID, costInfo, seatId, propIndex, sucCall, extInfo)
    local costPropId = costInfo.id
    local costPropCount = costInfo.cnt

    self:dealPropNewNew(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    return true
end

--处理玩家丢道具操作
function PropUseModule:onDealPlayerThrowProp(propId, propNum, toSeat, propIndex)
    CF.game:getModule("Guide"):reqPropFreeTimes(propIndex)
    CF.msgManager:sendRequestUseProps(propId, propNum, nil, "throwprop=1;toSeat=" .. toSeat .. ";propIndex=" .. propIndex)
end

function PropUseModule:dealPropVipFree(costPropId, costPropCount, seatId, propIndex, extInfo)
    self:startReq("ReqUseProps50", costPropId, seatId, propIndex, true, 10, extInfo)
end

function PropUseModule:dealPropOldOld(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    local msgReqUseProps = CF.GameMProtocol.ReqUseEmojiProps:new()
    msgReqUseProps.askid = math.floor(socket.gettime())
    msgReqUseProps.propid = costPropId
    msgReqUseProps.propcnt = costPropCount
    msgReqUseProps.param = "toSeat=" .. seatId .. ";propIndex=" .. propIndex .. ";" .. (extInfo or "")
    CF.netEngine.sendGameProtocol(msgReqUseProps)
    self:throwData(msgReqUseProps.propcnt,seatId)
    self._sucCall = sucCall
end

function PropUseModule:dealPropNew(costPropId, costPropCount, seatId, propIndex, sucCall)
    local msgReqUseProps = CF.GameMProtocol.ReqUseEmojiProps:new()
    msgReqUseProps.askid = math.floor(socket.gettime())
    msgReqUseProps.propid = costPropId
    if CF.game:getModule("PlayerInfo"):getEmojiPropsFreeConfig(costPropId) then
        msgReqUseProps.propcnt = 0
    else
        msgReqUseProps.propcnt = 1
    end
    msgReqUseProps.param = "toSeat=" .. seatId .. ";propIndex=" .. propIndex
    CF.netEngine.sendGameProtocol(msgReqUseProps)
    self:throwData(msgReqUseProps.propcnt,seatId)
    self._sucCall = sucCall
end

function PropUseModule:dealPropNewNew(costPropId, costPropCount, seatId, propIndex, sucCall, extInfo)
    local msgReqUseProps = CF.GameMProtocol.ReqUseProps:new()
    msgReqUseProps.askid = math.floor(socket.gettime())
    msgReqUseProps.propsid = costPropId
    msgReqUseProps.count = costPropCount
    msgReqUseProps.param = "toSeat=" .. seatId .. ";propIndex=" .. propIndex
    msgReqUseProps.type = 1
    if extInfo then
        msgReqUseProps.param = extInfo .. ";" .. msgReqUseProps.param .. ";"
    end
    CF.netEngine.sendGameProtocol(msgReqUseProps)
    self:throwData(msgReqUseProps.count,seatId)
    self._reqParam = msgReqUseProps.param
    self._sucCall = sucCall
end

--埋点上抛
function PropUseModule:throwData(propcnt,seatID)
    local seat = CF.roomData:seatToLocal(seatID)
    if seat == CF.GameDefine.LOCAL_SEAT.BOTTOM then 
    --自己道具使用情况
        if propcnt == 0 then 
            CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_05)
        else
            CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_06)
        end
    else
        if propcnt == 0 then 
            CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_02)
        else
            CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_03)
        end
    end 
end 

-- 使用道具返回
function PropUseModule:onRespUseEmojiProp(event)
    local usePropMsg =  CF.GameMProtocol.RespUseEmojiProps:new()
    usePropMsg:bistream(event.msg.buff, event.msg.len)

    if usePropMsg.flag == 0 then    -- 使用成功
        CF.msgManager:sendPropAni(usePropMsg.param)
        CF.game:getModule("PlayerInfo"):reqEmojiPropFreeTimes(CF.roomData:isGoldRoom())
        if self._sucCall then
            self._sucCall()
        end
    else
        local Config = require("lobby.Modules.QuickRecharge.Config")
        local data = loadstring("return { ".. usePropMsg.param .. "}")()
        local sceneID
        if data.toSeat and data.toSeat == CF.roomData:getSelfSeat() then
            sceneID = CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM and Config.SCENE_NAME.KW_BOX_BLESS or Config.SCENE_NAME.KW_GOLD_BLESS
        else
            sceneID = CF.roomData:getRoomMode() == CF.ROOM_MODE.BOXROOM and Config.SCENE_NAME.KW_BOX_INTERACT or Config.SCENE_NAME.KW_GOLD_INTERACT
        end
        CF.getLobbyModule("QuickRecharge"):reqSpecialSceneGoods(sceneID)
        -- --失败原因
        -- local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        -- tipLayer:setText("您的道具数量不足，请在游戏结束后前往商场购买")
    end
    CF.msgManager:sendRequestPlayerProps()
    XH.playerData:flushPlayerDrop()
    self._sucCall = nil
end

function PropUseModule:initPlayerTimePropDatas(propMsgData)
    self._playerTimeProps = {}
    for _, obj in pairs(propMsgData.timeprops) do
        self._playerTimeProps[obj.id] = obj.time
    end
end

function PropUseModule:initPlayerPropDatas(propMsgData)
    self._playerProps = propMsgData.props
end

function PropUseModule:getTimePropLeft(propID)
    return self._playerTimeProps[propID] or 0
end

function PropUseModule:getPropCnt(propID)
    for _, v in pairs(self._playerProps) do
        if v.id == propID then
            return v.count
        end
    end
    return 0
end

function PropUseModule:getPlayerProps()
    return self._playerProps
end

-- 请求玩家道具信息返回
function PropUseModule:onRespPlayerPropData(event)
    local playerPropDataMsg = CF.ToolMProtocol.RespPlayerPropsData:new()
    playerPropDataMsg:bistream(event.msg.buff, event.msg.len)
    self:initPlayerTimePropDatas(playerPropDataMsg)
    self:initPlayerPropDatas(playerPropDataMsg)
    self:dispatchEvent({name = self.EVENT_PROP_DATA_CHANGED})
end

-- 请求风信，获取洗牌券的价格信息
function PropUseModule:reqShufflePropInfo()
    if self._shuffleProps and self._shuffleProps.multi_goods then
        return
    end
    CF.reqShuffleProductList(self, self.onShufflePropInfo)
end

function PropUseModule:onShufflePropInfo(req, type, data)
    if type == CF.REQ_TYPE_SUCCESS then
        for _, v in pairs(data) do
            if v.multi_goods_info and #v.multi_goods_info > 0 then
                local prop_count = nil
                for _,multi_goods_info in pairs(v.multi_goods_info) do
                    if not prop_count or multi_goods_info.prop_count < prop_count then
                        prop_count = multi_goods_info.prop_count
                        self._shuffleProps = multi_goods_info
                    end
                end
            end
        end
        -- self:updateShuffleBtn()
    end
    -- 请求风信后台配置成功后，再请求切牌数据，防止没有洗牌耗卡数据
    if CF.GameDefine then
        self:reqPreShuffle(CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_GET)
    end
end

function PropUseModule:getShufflePriceByPropId( propid )
    if not self._shuffleProps or not self._shuffleProps.multi_goods then
        return nil
    end
    for _,v in pairs(self._shuffleProps.multi_goods) do
        local id = tonumber(string.match(v.type, "%d+"))
        if id == propid then
            return tonumber(v.value)/(self._shuffleProps.prop_count or 1)
        end
    end
    return nil
end

-- 此处全部转换成大房卡，在实际使用时，如果有小房卡的再转换成小房卡
-- 不支持切牌券
-- discount: 当传了这个值，用于在折扣弹窗显示时，用这个折扣获取需要花费的道具数，用来判断道具是否够数
function PropUseModule:getShufflePropInfo(propID, multi, discount)
    if not CF.roomData then
        return {}
    end
    -- 小结束界面切牌需要2倍道具数量
    multi = multi or 1
    -- 如果有预洗牌，切牌的倍数为1
    if self:isPreShuffle(CF.roomData:getPlayCount()+1) then
        multi = 1
    end

    local shuffleInfo = {}
    -- 根据配置，不读取风信消耗,如果风信后台数据没请求到，也是用本地配置数据
    if not CF.roomData:isSupportMultiPropShuffle() or not self._shuffleProps or not self._shuffleProps.multi_goods or not CF.GameDefine then
        -- 有洗牌券的情况下显示洗牌券
        local shuffleQuanCount = self:getPropCnt(propID)
        if shuffleQuanCount and shuffleQuanCount > 0 then
            shuffleInfo.propID = propID
            shuffleInfo.cost = multi
            shuffleInfo.pic = ""
            shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN
            return shuffleInfo
        end
        local gameID = CF.roomData:getGameID()
        local count = CF.gameSub:getShufflePropCount(gameID)
        local tmpPropID = CF.gameSub:getShufflePropID(gameID)
        if CF.areaData:getPropList().smallRoomCardID and tmpPropID == CF.areaData:getPropList().smallRoomCardID then
            local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
            if smallRoomCardRatio then
                count = count / smallRoomCardRatio
            end
            if tmpPropID == CF.areaData:getPropList().smallRoomCardID then
                tmpPropID = CF.areaData:getPropRoomCardID()
            end
        end

        local module = CF.game:getModule("Shuffle4")
        local curDiscount = 1
        local shufflePropID = CF and CF.gameSub and CF.gameSub:getShufflePropQuanID()
        if module and propID == (shufflePropID or 0) then
            curDiscount = module:getCurDiscount() / 100
        end
        if discount then
            curDiscount = discount
        end

        shuffleInfo.propID = tmpPropID
        shuffleInfo.cost = count * multi * curDiscount
        shuffleInfo.pic = CF.gameSub:getShufflePropPic(gameID)
        local selfRoomCardCnt = CF.selfPlayerData:getRoomCard()
        -- 流通模式房卡
        local teahouseData = CF.teaHouseManager and CF.teaHouseManager:getTeaHouseData() or nil
        if teahouseData and teahouseData:isInTeahouse() and teahouseData:isPlayerOwnerPayType() and CF.gameSub:getShuffleType(gameID) ~= 0 then
            selfRoomCardCnt = teahouseData:getPlayerOwnerPropCount()
        end
        if selfRoomCardCnt >= shuffleInfo.cost then
            shuffleInfo.type = CF.GameDefine and CF.GameDefine.SHUFFLE_SHOW_TYPE.ROOMCARD or 3
        else
            shuffleInfo.type = CF.GameDefine and CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH or 4
        end
        return shuffleInfo
    end

    local modu = CF.game:getModule("Shuffle4")
    local curDiscount = 1
    local shufflePropID = CF and CF.gameSub and CF.gameSub:getShufflePropQuanID()
    if modu and propID == (shufflePropID or 0) then
        curDiscount = modu:getCurDiscount() / 100
    end
    if discount then
        curDiscount = discount
    end
    local priceDiamond = self:getShufflePriceByPropId(CF.areaData:getPropDiamndID())
    local priceRoomcard = self:getShufflePriceByPropId(CF.areaData:getPropRoomCardID())
    priceDiamond = priceDiamond and priceDiamond * multi * curDiscount
    priceRoomcard = priceRoomcard and priceRoomcard * multi * curDiscount
    local propIDCount = self:getPropCnt(propID)
    local userData = CF.selfPlayerData
    -- local freeRoomCard = userData:getFreeRoomCard()
    local userDiamond = userData:getDiamnd()
    local userRoomCard = userData:getRoomCard()

    if propIDCount >= multi then
        shuffleInfo.propID = propID
        shuffleInfo.cost = multi
        shuffleInfo.pic = ""
        shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.QUAN
    elseif priceDiamond and userDiamond >= priceDiamond then
        shuffleInfo.propID = CF.areaData:getPropDiamndID()
        shuffleInfo.cost = priceDiamond
        shuffleInfo.pic = "zuanshi.png"
        shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND
    elseif priceRoomcard and userRoomCard >= priceRoomcard and not (CF.roomData:isGoldRoom() or CF.roomData:isNewGoldRoom()) then
        shuffleInfo.propID = CF.areaData:getPropRoomCardID()
        shuffleInfo.cost = priceRoomcard
        shuffleInfo.pic = "fk.png"
        shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.ROOMCARD
    elseif priceDiamond and userDiamond < priceDiamond then
        shuffleInfo.propID = CF.areaData:getPropDiamndID()
        shuffleInfo.cost = priceDiamond
        shuffleInfo.pic = "zuanshi.png"
        shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH
    else
        if priceDiamond then
            shuffleInfo.propID = CF.areaData:getPropDiamndID()
            shuffleInfo.cost = priceDiamond
            shuffleInfo.pic = "zuanshi.png"
            shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND
        elseif priceRoomcard then
            shuffleInfo.propID = CF.areaData:getPropRoomCardID()
            shuffleInfo.cost = priceRoomcard
            shuffleInfo.pic = "fk.png"
            shuffleInfo.type = CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH
        end
    end
    return shuffleInfo
end

-- 预洗牌
function PropUseModule:reqPreShuffle(opt, playCount)
    if not CF.GameDefine or not CF.roomData then
        return
    end
    if CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
        CF.roomData._bShuffling = false
        return
    end
    if not self:needShowShuffleButton() and opt == CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET then
        CF.roomData._bShuffling = false
        return
    end
    self._reqPlayCount = playCount or CF.roomData:getPlayCount()+1
    if opt == CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET then
        local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
        if shuffleInfo and shuffleInfo.type and shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH then
            CF.roomData._bShuffling = false
            CF.TipTool.showToast("您的道具不足，请进行充值")
            -- if CF.roomData and not CF.roomData:getIsGameStart() then
            --     CF.game:getModule("CenterBtns"):onStartGameEvent()
            -- end
            return
        end
    end
    CF.reqPreShuffle(CF.roomData:getRoomID(), self._reqPlayCount, opt, self, self.onPreShuffle)
end

function PropUseModule:onPreShuffle(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.resp or not data.resp.errCode or data.resp.errCode ~= 0 then
            return
        end
        if data.reply and data.reply.userIds and #data.reply.userIds > 0 then
            for _,v in pairs(data.reply.userIds) do
                self._shuffleIds[v] = self._reqPlayCount
            end
        elseif data.reply and data.reply.opt == "OPTS_TYPE_SET" then
            self._shuffleIds[CF.selfPlayerData:getNumberID()] = self._reqPlayCount
            -- 设置之后协议转发给其他玩家
            self:sendPreShuffle(self._reqPlayCount)
            if not CF.roomData:getIsGameStart() then
                CF.roomData._bShuffling = false
                CF.game:getModule("CenterBtns"):onStartGameEvent()
                self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_TEXT})
            end
            CF.TipTool.showToast("将在下局开局时洗牌", 2)
            self:freezeProp()
            self:updateShuffleBtn()
            self:dispatchEvent({name = self.EVENT_PRE_SUCCESS})
        elseif data.reply and data.reply.opt == "OPTS_TYPE_REM" then
            -- 清除的时候，刷新道具数量
            self._shuffleIds[CF.selfPlayerData:getNumberID()] = 0
            self:freezeProp(true)
        elseif data.reply and data.reply.opt == "OPTS_TYPE_DEL" then
            self._shuffleIds = {}
        end
        if data.reply.opt == "OPTS_TYPE_GET" then
            local isPreShuffle = self:isPreShuffle()
            local isPreCutCard = self:isPreCutCard()
            local propID = isPreCutCard and CutCardsDefine.QuanId or CF.gameSub:getShufflePropQuanID()
            local isClear = not isPreShuffle and not isPreCutCard
            if CF.roomData and not CF.roomData:getIsGameStart() then
                if isPreCutCard then
                    self._shuffleIds[CF.selfPlayerData:getNumberID()] = CF.roomData:getPlayCount()+1
                end
                self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_TEXT})
            end
            self:freezeProp(isClear, propID)
            self:updateShuffleBtn()
            self:dispatchEvent({ name = self.EVENT_SHUFFLE_USE_SUCCESS })
        end
    else
        self:shuffleFinished()
        self:freezeProp(true)
        if CF.roomData and not CF.roomData:getIsGameStart() then
            CF.roomData._bShuffling = false
            CF.game:getModule("CenterBtns"):onStartGameEvent()
        end
    end
end

-- 客户端冻结房卡
-- 免费房卡冻结实际数量
function PropUseModule:freezeProp(isClear, propID, needAdd)
    propID = propID or CF.gameSub:getShufflePropQuanID()
    local multi = propID == CF.gameSub:getShufflePropQuanID() and 1 or 2
    local lobbyId = CF.areaData:getLobbyID()
    local numid = CF.selfPlayerData:getNumberID()
    local strKeyDiamond = string.format("KW_MIN_DIAMOND_%d_%d", lobbyId, numid)
    local strKeyRoomCard = string.format("KW_MIN_ROOMCARD_%d_%d", lobbyId, numid)
    local strKeyFreeRoomCard = string.format("KW_MIN_FREE_ROOMCARD_%d_%d", lobbyId, numid)
    local strKeyRoomCardTeaHouse = string.format("KW_MIN_ROOMCARD_TEAHOUSE_%d_%d", lobbyId, numid)

    -- 冻结比赛场房卡
    local teahouseData = CF.teaHouseManager and CF.teaHouseManager:getTeaHouseData() or nil
    if teahouseData and teahouseData:isInTeahouse() and teahouseData:isPlayerOwnerPayType() and CF.gameSub:getShuffleType(gameID) ~= 0 then
        cc.UserDefault:getInstance():setStringForKey(strKeyRoomCardTeaHouse, "0")
        local shuffleInfo = self:getShufflePropInfo(propID, multi) or {}
        if isClear or not shuffleInfo or not shuffleInfo.type or not CF.GameDefine then
            CF.selfPlayerData:flushPlayerDrop()
            return
        end
        cc.UserDefault:getInstance():setStringForKey(strKeyRoomCardTeaHouse, tostring(shuffleInfo.cost))
        return
    end

    -- 客户端预扣，会把本地缓存的房卡钻石数量给扣掉，导致道具只够最后一次时扣失败，在这里直接把道具给加上去
    if needAdd then
        local diamondNum = CF.selfPlayerData:getFreezePropCountByID(CF.areaData:getPropDiamndID()) or 0
        local roomCardNum = CF.selfPlayerData:getFreezePropCountByID(CF.areaData:getPropRoomCardID()) or 0
        local freeRoomCardNum = CF.selfPlayerData:getFreezePropCountByID(CF.areaData:getPropBindRoomCardID()) or 0
        if diamondNum > 0 then
            CF.selfPlayerData:setDiamnd(CF.selfPlayerData:getDiamnd() + diamondNum)
        end
        if roomCardNum > 0 then
            CF.selfPlayerData:setRoomCard(CF.selfPlayerData:getRoomCard() + roomCardNum)
        end
        if freeRoomCardNum > 0 then
            local ratio = CF.areaData:getPropFreeRoomCardRatio()
            if not ratio or ratio == 0 then
                ratio = 100
            end
            CF.selfPlayerData:setFreeRoomCard(CF.selfPlayerData:getFreeRoomCard()*ratio + freeRoomCardNum)
        end
    end
    
    cc.UserDefault:getInstance():setStringForKey(strKeyDiamond, "0")
    cc.UserDefault:getInstance():setStringForKey(strKeyRoomCard, "0")
    cc.UserDefault:getInstance():setStringForKey(strKeyFreeRoomCard, "0")
    local shuffleInfo = self:getShufflePropInfo(propID, multi) or {}
    -- 清除
    if isClear or not shuffleInfo or not shuffleInfo.type or not CF.GameDefine then
        CF.selfPlayerData:flushPlayerDrop()
        return
    end

    if shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND then
        cc.UserDefault:getInstance():setStringForKey(strKeyDiamond, tostring(shuffleInfo.cost))
    elseif shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.ROOMCARD then
        if shuffleInfo.propID == CF.areaData:getPropBindRoomCardID() then
            local ratio = CF.areaData:getPropFreeRoomCardRatio()
            if not ratio or ratio == 0 then
                ratio = 100
            end
            cc.UserDefault:getInstance():setStringForKey(strKeyFreeRoomCard, tostring(shuffleInfo.cost * ratio))
        else
            cc.UserDefault:getInstance():setStringForKey(strKeyRoomCard, tostring(shuffleInfo.cost))
        end
    end
    CF.selfPlayerData:flushPlayerDrop()
end

function PropUseModule:getShuffleIds()
    return self._shuffleIds
end

-- 小结束界面是否点击切牌(包括洗牌)
function PropUseModule:isPreCutCard(playCount)
    if not CF.roomData then
        return false
    end
    playCount = playCount or CF.roomData:getPlayCount()+1
    local strKeyShuffleCutCard = string.format("KW_SHUFFLE_CUTCARD_%d", CF.selfPlayerData:getNumberID())
    local shuffleCutData = cc.UserDefault:getInstance():getStringForKey(strKeyShuffleCutCard, "")
    if shuffleCutData == tostring(CF.roomData:getRoomID()) .. "_" .. tostring(playCount) then
        return true
    end
    return false
end


-- 自己是否预洗牌
function PropUseModule:isPreShuffle(playCount)
    if CF.roomData then
        playCount = playCount or CF.roomData:getPlayCount()+1
    end
    for k,v in pairs(self._shuffleIds) do
        if k == CF.selfPlayerData:getNumberID() and v == playCount then
            return true
        end
    end
    return false
end

--局中是否显示预约洗牌按钮
function PropUseModule:needShowShuffleButton()
    --回放
    if not CF.roomData then
        return false
    end
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end
    if CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
        return false
    end    

    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if playCount == maxPlayCount then
        return false
    end

    --读取配置,是否开启洗牌
    local isShowShuffle = true
    -- 下局是否预洗牌
    if isShowShuffle then
        isShowShuffle = not self:isPreShuffle()
    end
    if isShowShuffle then
        isShowShuffle = not self:isPreCutCard()
    end
    return isShowShuffle
end

function PropUseModule:updateShuffleBtn()
    local needShowShuffle = self:needShowShuffleButton()
    local dispatchInfo = {}
    local propID = CF.gameSub:getShufflePropQuanID()
    local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    if not shuffleInfo or not shuffleInfo.propID then
        return
    end
    dispatchInfo.propID = shuffleInfo.propID
    dispatchInfo.cost = shuffleInfo.cost or 100
    self:dispatchEvent({name = self.EVENT_PRESHUFFLE_SHOW, msg = {isShow = needShowShuffle, shuffleInfo = dispatchInfo}})
end

function PropUseModule:needDelayCmd()
    -- if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
    --     self._isNeedDelayCmd = false
    -- end
    if CF and CF.roomData and CF.roomData:getIsSeer() then
        return false
    end
    return self._isNeedDelayCmd
end

-- 协议缓存下来
function PropUseModule:delayCmd(obj, callback, record, msgData, subXYID)
    local index = #self._delayCmd + 1
    self._delayCmd[index] = {}
    self._delayCmd[index].obj = obj
    self._delayCmd[index].callback = callback
    self._delayCmd[index].record = record
    self._delayCmd[index].msgData = msgData
    self._delayCmd[index].subXYID = subXYID
end

-- 洗牌结束，执行缓存协议
function PropUseModule:shuffleFinished()
    if not CF.roomData then
        return
    end
    -- self._shuffleIds = {}
    self._shuffleIdsCurRound = {}
    self:updateShuffleBtn()
    CF.roomData._bShuffling = false
    if self._isDealDelayCmd then
        return
    end
    self:stop()
    self._isDealDelayCmd = true
    self:endProtocolDelaySchedule()
    self._startProtocolDelayListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if #self._delayCmd > 0 then
            local temp = table.remove(self._delayCmd, 1)
            if CF.GameProtocol then
                temp.callback(temp.obj, temp.record, temp.msgData, temp.subXYID)
            end
        else
            self._isNeedDelayCmd = false
            self._isDealDelayCmd = false
            self:endProtocolDelaySchedule()
        end
    end, 0.01, false)
    self._shufflePlayCount = (CF.roomData and CF.roomData:getPlayCount()) or 0

    local changeCardModule = CF.game:getModule("ChangeCard")
    if changeCardModule then
        changeCardModule:updateBtn()
    end
    self:freezeProp(true)
end

function PropUseModule:endProtocolDelaySchedule()
    if self._startProtocolDelayListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._startProtocolDelayListener)
    end
    self._startProtocolDelayListener = nil
end

-- 自己进入游戏时请求洗牌信息
function PropUseModule:onPlayerEnter(event)
    if not CF.roomData then
        return
    end
    if not event.msg or not event.msg.numid then
        return
    end
    local selfEnter = event.msg.numid == CF.selfPlayerData:getNumberID()
    if selfEnter then
        self:reqShufflePropInfo()
    end
    -- 小结束切牌如果有其他玩家断线重连，转发给其他玩家
    if self:isPreCutCard() then
        if selfEnter then
            self._shuffleIds[event.msg.numid] = CF.roomData:getPlayCount()+1
        else
            local playerData = CF.roomData:getPlayerDataByNumberID(event.msg.numid)
            if playerData then
                self:sendPreShuffle(CF.roomData:getPlayCount()+1, playerData:getSeat())
            end
        end
    end
end

-- 预切牌，存在客户端,分为有预洗牌和无预洗牌2种
function PropUseModule:preCutCard(reportData)
    -- 如果有预洗牌
    if not CF.roomData or not CF.GameDefine then
        return
    end
    local isPreShuffle = false
    local multi = 2
    if self:isPreShuffle(CF.roomData:getPlayCount()+1) then
        isPreShuffle = true
        multi = 1
    end
    local shuffleInfo = self:getShufflePropInfo(CutCardsDefine.QuanId, multi)
    if shuffleInfo and shuffleInfo.type and shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH then
        -- CF.roomData._bShuffling = false
        CF.TipTool.showToast("您的道具不足，请进行充值")
        return
    end
    local numid = CF.selfPlayerData:getNumberID()
    local saveData = tostring(CF.roomData:getRoomID()) .. "_" .. tostring(CF.roomData:getPlayCount()+1)
    local strKeyCutCard = string.format("KW_CUTCARD_%d", numid)
    local strKeyShuffleCutCard = string.format("KW_SHUFFLE_CUTCARD_%d", numid)
    cc.UserDefault:getInstance():setStringForKey(isPreShuffle and strKeyCutCard or strKeyShuffleCutCard, saveData)
    -- 小结束直接点击切牌，需要转发给其他玩家
    if not isPreShuffle then
        self:sendPreShuffle(CF.roomData:getPlayCount()+1)
        self._shuffleIds[numid] = CF.roomData:getPlayCount()+1
        self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_TEXT})
    end
    self:freezeProp(false, CutCardsDefine.QuanId)
    self:updateShuffleBtn()
    if reportData then
        XH.lobby:getModule("PropEventTracker"):track(reportData.sucID, reportData)
    end
end

function PropUseModule:onStartChangeCard(event)
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isReserved = changeCardModule and changeCardModule:isChangeCardReserved()
    if isReserved then
        changeCardModule:reqUseProp(event)
    else
        self:onStartShuffle(event)
        if changeCardModule then
            changeCardModule:updateSurPlusMah()
        end
    end
end

-- 开局后收到playCount，开始洗牌操作
-- 如果开局自动准备，此时请求预洗牌接口未返回结果，会出现无法洗牌的问题
-- 请求未返回，协议缓存，请求返回之后，如果无预洗牌，直接调用shuffleFinished,执行缓存的协议
function PropUseModule:onStartShuffle(event)
    if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
        return
    end
    if not event or not event.msg then
        self._isNeedDelayCmd = false
        return
    end
    if not event.msg.playCount or event.msg.playCount == 0 or event.msg.maxPlayCount == 0 or not CF.roomData then
        self._isNeedDelayCmd = false
        return
    end
    local shuffleIdsCurRound = self:getShuffleIdsByRound(event.msg.playCount)
    if not shuffleIdsCurRound or #shuffleIdsCurRound <= 0 then
        self:shuffleFinished()
        return
    end
    -- 会多次触发，使用self._shufflePlayCount来拦截
    if event.msg.playCount == self._shufflePlayCount then
        return
    end
    local isPreShuffleCut = self:isPreCutCard(event.msg.playCount) or false   -- 小结束洗牌+切牌
    local isPreCut = false          -- 小结束切牌
    local numid = CF.selfPlayerData:getNumberID()
    local strKeyCutCard = string.format("KW_CUTCARD_%d", numid)
    local strKeyShuffleCutCard = string.format("KW_SHUFFLE_CUTCARD_%d", numid)
    local cutData = cc.UserDefault:getInstance():getStringForKey(strKeyCutCard, "")
    if cutData == tostring(CF.roomData:getRoomID()) .. "_" .. tostring(event.msg.playCount) then
        isPreCut = true
    end
    -- 清除切牌数据,防止游戏断线重连手牌不见了
    if isPreShuffleCut then
        cc.UserDefault:getInstance():setStringForKey(strKeyShuffleCutCard, "")
    end
    if isPreCut then
        cc.UserDefault:getInstance():setStringForKey(strKeyCutCard, "")
    end

    local isAllShuffle = false
    -- 支持所有人洗牌
    if self:isSupportAllVisible() then
        self._shuffleIdsCurRound = self:getShuffleIdsByRound(event.msg.playCount)
        if not self._shuffleIdsCurRound or #self._shuffleIdsCurRound <= 0 then
            self:shuffleFinished()
            return
        end
        for _,v in pairs(self._shuffleIdsCurRound) do
            if CF.selfPlayerData:getNumberID() == v then
                self:sendClientForward(v)
            end
        end
        self:dispatchEvent({name = self.EVENT_START_SHUFFLE, msg = {userIds = self._shuffleIdsCurRound}})
        isAllShuffle = true
        local selfShuffle = isPreShuffleCut or self:isPreShuffle(event.msg.playCount)
        self._shufflePlayCount = event.msg.playCount
        self._isNeedDelayCmd = true
        if not selfShuffle then
            local param = "gameID=" .. (CF.roomData and CF.roomData:getGameID()) .. ";allShuffle=1"
            self:playShuffle({param = param})
            self:stop()
            return
        end
    else
        if not isPreShuffleCut and not self:isPreShuffle(event.msg.playCount) then
            self:shuffleFinished()
            return
        end
        self._shufflePlayCount = event.msg.playCount
        self._isNeedDelayCmd = true
    end
    -- 切牌扣卡处理
    self:freezeProp(true, nil, true)
    if isPreShuffleCut then
        self:reqCutCardWithProp(isPreShuffleCut, isAllShuffle)
        return
    end
    local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    local propID = shuffleInfo.propID or CF.areaData:getPropDiamndID()
    local propNum = shuffleInfo.cost or 100
    local finalPropID, finalPropNum = self:getFinalPropAndNum(propID, propNum)
    local param = "shuffle=1"
    if isPreCut then
        param = param .. ";preCut=1"
    end
    if isAllShuffle then
        param = param .. ";allShuffle=1"
    end

    local nType = CF.gameSub:getShuffleType(CF.roomData:getGameID())
    -- 免费33协议会返回失败
    local module = CF.game:getModule("Shuffle4")
    if finalPropNum == 0 and module and module:isFree() then
        local gameID = CF.roomData and CF.roomData:getGameID() or 0
        param = param .. ";gameID=" .. gameID
        local tmpParam = ""
        if CF.roomData and CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
            tmpParam = self:getParam(finalPropID, nType) or ""
        end
        param = param .. tmpParam
        local usePropMsg = CF.GameMProtocol.RespUseProps:new()
        usePropMsg.param = param
        usePropMsg.prop_id = finalPropID
        self:onUsePropSuccess(usePropMsg)
        if CF.roomData and CF.roomData.isSupportPreShuffle then
            if not CF.roomData:isSupportPreShuffle() then
                CF.roomData._bShuffling = false
            else
                self:stop()
            end
        end
        module:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Free})
        --洗牌后发送准备
        if CF.gameSub:isMahjong(CF.roomData:getGameID()) and not self:getIsLocalShuffle() then
            CF.msgManager:sendGameStart()
        end
        return
    end
    self:sendRequestUseProps(finalPropID, finalPropNum, nType, param, 2)
end

function PropUseModule:reqCutCardWithProp(isPreShuffleCut, isAllPlay)
    local param = "preCutCost=1"
    local multi = 1
    if isPreShuffleCut then
        param = "shufflecut=1"
        multi = 2
        if isAllPlay then
            param = param .. ";allShuffle=1"
        end
    end
    local shuffleInfo = self:getShufflePropInfo(CutCardsDefine.QuanId, multi)
    if not shuffleInfo or not shuffleInfo.cost then
        return
    end
    if CF.roomData._bIsFreeCut then
        local param = {}
        param.param = param
        if CF.roomData and CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle() then
            self:dispatchEvent({name = self.EVENT_SHUFFLE_USE_PROP_SUCCESS})
            CF.roomData:setbShuffle()
        end
        self:onUsePropShuffleCut(param)
        return
    end
    local finalPropID, finalPropNum = self:getFinalPropAndNum(shuffleInfo.propID, shuffleInfo.cost)
    self:sendRequestUseProps(finalPropID, finalPropNum, 3, param, 2)
end

-- 根据配置，有小房卡的地区，消耗道具时，全部转换成小房卡消耗
function PropUseModule:getFinalPropAndNum(propID, propNum)
    if CF.roomData and CF.roomData.isSupportMultiPropShuffle and not CF.roomData:isSupportMultiPropShuffle() then
        -- 有洗牌券的情况下直接返回洗牌券
        if propID == CF.gameSub:getShufflePropQuanID() then
            return propID, propNum
        end
        
        local gameID = CF.roomData:getGameID()
        propNum = CF.gameSub:getShufflePropCount(gameID)
        propID = CF.gameSub:getShufflePropID(gameID)

        local modu = CF.game:getModule("Shuffle4")
        local curDiscount = 1
        if modu  then
            curDiscount = modu:getCurDiscount() / 100
        end
        propNum = propNum * curDiscount
        if propNum < 1 and CF.areaData:getPropList().smallRoomCardID and propID == CF.areaData:getPropRoomCardID() then
            local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
            if smallRoomCardRatio then
                propNum = math.floor(propNum * smallRoomCardRatio)
                propID = CF.areaData:getPropList().smallRoomCardID
            end
        end
    else
        if CF.areaData:getPropList().smallRoomCardID and propID == CF.areaData:getPropRoomCardID() then
            local smallRoomCardRatio = CF.areaData:getPropSmallRoomCardRatio()
            if smallRoomCardRatio then
                propNum = math.floor(propNum * smallRoomCardRatio)
                propID = CF.areaData:getPropList().smallRoomCardID
            end
        elseif CF.areaData:getPropList().freeRoomCardID and propID == CF.areaData:getPropBindRoomCardID() then
            local freeRoomCardRatio = CF.areaData:getPropFreeRoomCardRatio()
            if freeRoomCardRatio then
                propNum = propNum * freeRoomCardRatio
                propID = CF.areaData:getPropList().freeRoomCardID
            end
        end
    end
    return propID, propNum
end

-- 麻将与扑克协议下发局数的时机不一致，麻将在开局后下发(下发手牌后才下发局数)，扑克在开局前下发
function PropUseModule:onGameStartChanged(event)
    if not event or not event.msg or not event.msg.nowState or not CF.roomData then
        return
    end

    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID())
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isReserved = changeCardModule and changeCardModule:isChangeCardReserved(isMah)

    if self._isNeedDelayCmd or (CF.roomData.isSupportPreShuffle and not CF.roomData:isSupportPreShuffle()) then
        return
    end 

    if (not isMah) and not isReserved then
        return
    end
    self._isNeedDelayCmd = true
    self._DelayCmdScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        self:timeout()
    end, 5, false)
end

-- 道具变化时，更新按钮显示
function PropUseModule:onDataChanged()
    self:updateShuffleBtn()
end

function PropUseModule:sendRequestUseProps(propId, propNum, nType, param, timeout, sucCall)
    local gameID = CF.roomData and CF.roomData:getGameID() or 0
    param = param .. ";gameID=" .. gameID
    local tmpParam = ""
    if CF.roomData and CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
        tmpParam = self:getParam(propId, nType) or ""
    end
    param = param .. tmpParam
    CF.msgManager:sendRequestUseProps(propId, propNum, nType, param)
    if timeout ~= nil and timeout > 0 then
        self._LogicScheduleScriptID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            self:timeout()
        end, timeout, false)
    end
    self._sucCall = sucCall
end

-- 如果不是小卡，重置后台配置的大小卡转换比例，避免组合扣卡的问题
-- 此时需要客户端上传purpose的类型
function PropUseModule:getParam(usePropId, nType)
    local param = ";notbuycardid=0"
    if CF.areaData:getPropList().smallRoomCardID and usePropId == CF.areaData:getPropList().smallRoomCardID then
        local strParam = string.format(";exchange=1;tranprops='%d:%d'", CF.areaData:getPropRoomCardID(), CF.areaData:getPropSmallRoomCardRatio())
        param = param .. strParam
    else
        param = param .. ";exchange=0;tranprops=''"
    end
    if nType == 0 then
        param = param .. ";purpose='shuffle'"
    elseif nType == 3 then
        param = param .. ";purpose='cancel'"
    end
    return param
end

function PropUseModule:timeout()
    self:shuffleFinished()
    self:stop()
end

function PropUseModule:stop()
    if self._LogicScheduleScriptID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._LogicScheduleScriptID)
        self._LogicScheduleScriptID = 0
    end
    if self._DelayCmdScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._DelayCmdScheduleID)
        self._DelayCmdScheduleID = 0
    end
end

-- 是否支持新动画
function PropUseModule:isSupportNewAni()
    local gameID = CF.roomData and CF.roomData:getGameID() or 0
    if CF.gameSub:isMahjong(gameID) then
        local shuffleConfig = CF.gameRequire("Modules.PropUse.ShuffleConfig")
        local shuffleType = shuffleConfig:getMahShuffleAniType() or shuffleConfig.ANI_TYPE.OLDANI
        local numid = CF.selfPlayerData:getNumberID()
        if shuffleType == shuffleConfig.ANI_TYPE.NEWANI or (shuffleType == shuffleConfig.ANI_TYPE.ABTEST and numid % 2 == 1) then
            return true
        end
        return false
    end
    local shuffleConfig = CF.gameRequire("Modules.PropUse.ShuffleConfig")
    local shuffleType = shuffleConfig:getShuffleAniType() or shuffleConfig.ANI_TYPE.OLDANI
    local numid = CF.selfPlayerData:getNumberID()
    if shuffleType == shuffleConfig.ANI_TYPE.NEWANI or (shuffleType == shuffleConfig.ANI_TYPE.ABTEST and numid % 2 == 1) then
        return true
    end
    return false
end

-- 是否支持所有人可见
function PropUseModule:isSupportAllVisible()
    if not CF.roomData or not CF.roomData.isSupportPreShuffle then
        return false
    end
    local isSupport = CF.roomData:isSupportPreShuffle()
    if isSupport then
        local gameID = CF.roomData and CF.roomData:getGameID() or 0
        local shuffleConfig = CF.gameRequire("Modules.PropUse.ShuffleConfig")
        isSupport = shuffleConfig:isSupportAllVisible(gameID) or false
    end
    return isSupport
end

-- 获取当局洗牌玩家ID
function PropUseModule:getShuffleIdsByRound(juNum)
    local shuffleNumIds = {}
    local playerDatas = CF.roomData:getPlayerDatas()
    for _,playerData in pairs(playerDatas) do
        for numid,playCount in pairs(self._shuffleIds) do
            if numid == playerData:getNumberID() and playCount == juNum then
                table.insert(shuffleNumIds, numid)
            end
        end
    end
    return shuffleNumIds
end

-- 洗牌转发服务
function PropUseModule:sendPreShuffle(playCount, toSeat)
    playCount = playCount or self._reqPlayCount
    toSeat = toSeat or -1
    local sendmsg = string.format("numid=%d;playCount=%d", CF.selfPlayerData:getNumberID(), playCount)
    CF.msgManager:sendPreShuffle(sendmsg, CF.GameDefine.PRE_SHUFFLE_ID, toSeat)
end

function PropUseModule:onMsgClientForwardBase(msgData)
   if msgData.sID == CF.GameDefine.PRE_SHUFFLE_ID then
        local shuffleIdInfo = CF.StringTool.getTableByString(msgData.strData,";","=")
        local numid = tonumber(shuffleIdInfo["numid"]) or 0
        local playCount = tonumber(shuffleIdInfo["playCount"]) or 0
        if self._shuffleIds and self._shuffleIds[numid] == playCount then
            return
        end
        self._shuffleIds[numid] = playCount
        self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_TEXT})
        if numid ~= CF.selfPlayerData:getNumberID() then
            self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_SCENE, msg = { userId = numid, scene = 2 } })
        else 
            self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_SCENE, msg = { isMe = true } })
        end
    elseif msgData.sID == CF.GameDefine.PRE_SHUFFLE_ID_PLAYBACK then
        self:playShufflePlayBack(msgData)
    end
end

function PropUseModule:updateShuffleHeadNode(node, localSeat)
    if node and CF.roomData and CF.roomData:isSupportPreShuffle() then
        self._headNodeInfo[localSeat] = node
        local shuffleTip = node:getChildByName("IMG_SHUFFLE_TIP")
        if not shuffleTip then
            local isMahjong = CF.gameSub:isMahjong(CF.roomData:getGameID())
            shuffleTip = CF.gameRequire("Modules.PropUse.ShuffleTextNode").new(localSeat, isMahjong)
            shuffleTip:setName("IMG_SHUFFLE_TIP")
            node:addChild(shuffleTip, 10)
        end
        local isPreShuffle = false
        local isSupport = false
        if not CF.roomData:getIsGameStart() then
            local gameID = CF.roomData and CF.roomData:getGameID() or 0
            local shuffleConfig = CF.gameRequire("Modules.PropUse.ShuffleConfig")
            isSupport = shuffleConfig:isSupportAllVisible(gameID) or false
    
            local playerData = CF.roomData:getPlayerDataBySeatId(CF.roomData:localToSeat(localSeat))
            if playerData then
                isPreShuffle = self:getIsShuffleByID(playerData:getNumberID(), CF.roomData:getPlayCount()+1)
            end
        end
        shuffleTip:setVisible(isPreShuffle and isSupport)
    end
end

function PropUseModule:getIsShuffleByID(numid, playCount)
    playCount = playCount or CF.roomData:getPlayCount()+1
    for k,v in pairs(self._shuffleIds) do
        if k == numid and v == playCount then
            return true
        end
    end
end

function PropUseModule:getHeadNode(localSeat)
    if localSeat and self._headNodeInfo then
        return self._headNodeInfo[localSeat]
    end
    return nil
end

-- http请求50使用免费道具
function PropUseModule:respUseProps50(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.param then
            CF.msgManager:sendPropAni(data.param)
            local backTable = CF.StringTool.getTableByString(data.param,";","=")
            local isMass = backTable["isMassSend"]
            local costInfoTrack = {
                role = "会员免费",
                state = isMass and "群发" or "非群发"
            }
            XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.djqj25070104, {costInfoTrack = costInfoTrack})
        end
    elseif type == XH.Req.TYPE.TIMEOUT then
        print('PropUseModule TIMEOUT')
    end
end

function PropUseModule:clear()
    self._shufflePlayCount = 0  -- 当前正在洗牌的局数，防止多次进入
end

function PropUseModule:getShuffleIds()
    return self._shuffleIdsCurRound or {}
end

function PropUseModule:sendClientForward(shuffleId)
    if CF.areaData:getLobbyID() ~= XH.LOBBY_ID.TAIZHOU then
        return
    end
    CF.msgManager:sendForwardPlayBackShuffle(tostring(shuffleId))
end

function PropUseModule:playShufflePlayBack(msgData)
    if not CF.roomData or not CF.roomData:isPlayBack() then
        return
    end
    local shuffleIds = CF.StringTool.spiltStringByFlag(msgData.strData, ",")
    if not shuffleIds or #shuffleIds <= 0 then
        return 
    end
    local shuffleList = {}
    local KW_TMP_THESAURUS = {"金主", "豪门", "富豪", "贵族", "财主"}
    for _,v in pairs(shuffleIds) do
        -- 开始洗牌，暂停播放协议
        local player = CF.roomData:getPlayerDataByNumberID(tonumber(v))
        if player then
            local shufferText = string.format("%s玩家%s，正在洗牌...", KW_TMP_THESAURUS[math.random(1, #KW_TMP_THESAURUS)], player:getNickName2())
            table.insert(shuffleList, shufferText)
        end
    end
    if #shuffleList > 0 then
        CF.game:getModule("PlayBack"):pause()
        local ShuffleView = CF.gameRequire("Modules.PropUse.ShuffleView")
        local runningScene = display.getRunningScene()
        if not runningScene:getChildByName(ShuffleView.ClassName) then
            ShuffleView.new({isLocalShuffle = true, param = ""}):showSelf()
        end
        self:dispatchEvent({name = self.EVENT_SHOW_SHUFFLE_LIST, msg = {shufflelist = shuffleList}})
    end
end

return PropUseModule
  r 