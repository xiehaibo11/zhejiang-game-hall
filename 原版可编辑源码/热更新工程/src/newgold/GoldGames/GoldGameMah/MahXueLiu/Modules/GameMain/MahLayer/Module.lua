local GameModule = NG.GAME.gameClass("GameModule", NG.GAME.ModuleBase)
local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")
local DEBUG = require("app.Config.GlobalConfig").IsDebug
local MahProtocol = NG.GAME.gameRequire("Protocol.MahProtocol")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")

GameModule.EVENT_UPDATE_CLOCK = "EVENT_UPDATE_CLOCK"

GameModule.EVENT_UPDATE_MAH_WALL = "EVENT_UPDATE_MAH_WALL"
GameModule.EVENT_TAKE_MAH_FROM_WALL = "EVENT_TAKE_MAH_FROM_WALL"
GameModule.EVENT_ALL_CHIPS = "EVENT_ALL_CHIPS"
GameModule.EVENT_FIRST_TAKE_MAHS = "EVENT_FIRST_TAKE_MAHS"
GameModule.EVENT_OPEN_WALL_MAH = "EVENT_OPEN_WALL_MAH"

GameModule.EVENT_MAHLAYER_SHOW_CHIPS = "EVENT_MAHLAYER_SHOW_CHIPS" --播放骰子动画
GameModule.EVENT_SHOW_CHIPS_FINISHED = "EVENT_SHOW_CHIPS_FINISHED" --骰子动画播放结束
GameModule.EVENT_MAHLAYER_SHOW_CHIPS_3D = "EVENT_MAHLAYER_SHOW_CHIPS_3D" --播放3D骰子动画
GameModule.EVENT_MAHLAYER_HIDE_CHIPS_3D = "EVENT_MAHLAYER_HIDE_CHIPS_3D" -- 筛子盒盖子盖上
GameModule.EVENT_MAHLAYER_SHOW_ACTION_ANIMATION = "EVENT_MAHLAYER_SHOW_ACTION_ANIMATION" --吃碰杠胡动画事件

GameModule.EVENT_ROTATE_WIND_POS = "EVENT_ROTATE_WIND_POS"
GameModule.EVENT_SHOW_GANG_FEN_UI = "EVENT_SHOW_GANG_FEN_UI" --显示杠分
GameModule.EVENT_GANG_FEN_CHANGED = "EVENT_GANG_FEN_CHANGED" --刷新杠分

GameModule.EVENT_SPECIAL_HU_ANI = "EVENT_SPECIAL_HU_ANI"

GameModule.EVENT_PLAY_CAISHEN = "EVENT_PLAY_CAISHEN"

GameModule.EVENT_HIDE_CAN_HU_MAHS = "EVENT_HIDE_CAN_HU_MAHS"
GameModule.EVENT_FLUSH_CAN_HU_MAH_DATA = "EVENT_FLUSH_CAN_HU_MAH_DATA"

GameModule.EVENT_SHOW_GOLD_SETTLE = "EVENT_SHOW_GOLD_SETTLE"  --金币场小结束

GameModule.EVENT_GAME_START = "EVENT_GAME_START"

GameModule.EVENT_MAHLAYER_SHOW_OUTMAH_ACTION = "EVENT_MAHLAYER_SHOW_OUTMAH_ACTION"          --出牌动画
GameModule.EVENT_MAHLAYER_SHOW_ACTION = "EVENT_MAHLAYER_SHOW_ACTION"                        --展示牌权
GameModule.EVENT_MAHLAYER_SHOW_ACTION_COMBS = "EVENT_MAHLAYER_SHOW_ACTION_COMBS"            --展示多吃多杠的comb
GameModule.EVENT_MAHLAYER_FLUSH_HANDMAH = "EVENT_MAHLAYER_FLUSH_HANDMAH"                    --刷新手牌
GameModule.EVENT_MAHLAYER_SIGN_SAME_MAH = "EVENT_MAHLAYER_SIGN_SAME_MAH"                    --标记相同的牌
GameModule.EVENT_UPDATE_SPECF_MAH = "EVENT_UPDATE_SPECF_MAH"                                --更新做牌
GameModule.EVENT_SPECF_MAHLAYER_ISSHOW = "EVENT_SPECF_MAHLAYER_ISSHOW"                      --展示做牌界面
--牢庄
GameModule.EVENT_MAHLAYER_SET_LAOZHUANG = "EVENT_MAHLAYER_SET_LAOZHUANG"
GameModule.EVENT_MAHLAYER_CLEAR_LAOZHUANG = "EVENT_MAHLAYER_CLEAR_LAOZHUANG"
--圈风
GameModule.EVENT_MAHLAYER_SET_QUANFENG = "EVENT_MAHLAYER_SET_QUANFENG"
GameModule.EVENT_MAHLAYER_CLEAR_QUANFENG = "EVENT_MAHLAYER_CLEAR_QUANFENG"

--回放展示牌权
GameModule.EVENT_MAHLAYER_SHOW_OTHERS_ACTION = "EVENT_MAHLAYER_SHOW_OTHERS_ACTION"
GameModule.EVENT_MAHLAYER_SHOW_OPERATE_PASS = "EVENT_MAHLAYER_SHOW_OPERATE_PASS"

GameModule.EVENT_MAHLAYER_CLEAR_ALL = "EVENT_MAHLAYER_CLEAR_ALL"
GameModule.EVENT_GAME_PLAYER_START = "EVENT_GAME_PLAYER_START"

GameModule.EVENT_MAHLAYER_2D_BG_STATE = "EVENT_MAHLAYER_2D_BG_STATE"
GameModule.EVENT_HU = "EVENT_HU"
GameModule.EVENT_SHOW_KUNG_SCORE_ANI = "EVENT_SHOW_KUNG_SCORE_ANI"
GameModule.EVENT_HUAN_PAI_START = "EVENT_HUAN_PAI_START"
GameModule.EVENT_HUAN_PAI_SELF_END = "EVENT_HUAN_PAI_SELF_END"
GameModule.EVENT_HUAN_PAI_END = "EVENT_HUAN_PAI_END"
GameModule.EVENT_GAME_MSG_RECORD = "EVENT_GAME_MSG_RECORD"
GameModule.EVENT_SHOW_CHIPS = "EVENT_SHOW_CHIPS"
GameModule.EVENT_HU_FANIDS = "EVENT_HU_FANIDS"
GameModule.EVENT_PLAYER_TRUST = "EVENT_PLAYER_TRUST"
GameModule.EVENT_ON_MSG_RESULT = "EVENT_ON_MSG_RESULT"
GameModule.EVENT_ROOM_BASE_SCORE = "EVENT_ROOM_BASE_SCORE"

-- 洗牌4.0 start --
-- 抓牌
GameModule.EVENT_SHUFFLE_TIP_TAKE = "EVENT_SHUFFLE_TIP_TAKE"
-- 洗牌4.0 end   --

GameModule.ClockWindSeatType = {
    rotateByBanker = 1,
    noWind = 2,
    other = 3,
}

function GameModule:ctor()
    GameModule.super.ctor(self, true)
    self:initDatas()
    self:startProtocolDelaySchedule()
    self._enterGameViewTime = os.time()
    --test
    -- NG.SysTool.performDelayOnce(function()
    --     -- self:onMsgStartGame({})
    --     self:dispatchEvent({name = self.EVENT_HUAN_PAI_START, msg = {localSeat = 2}})
    --     -- self:onMsgWallMah({
    --     --     nWallCnt = 144,       --剩余可抓张数
    --     --     nAsc = 0,           --正向待抓索引
    --     --     nDesc = 143,          --反向待抓索引
    --     --     nFirstAsc = 0,      --初始正向待抓索引
    --     --     nFirstDesc = 143,     --初始反向待抓索引
    --     --     bShow = 1,          --收到时是否即刻显示牌墙
    --     -- })

    --     -- self:showMahAcitonAni(2, NG.GAME.GameDefine.COMB_FLAG.CKONG, false)
    --     -- self:onMsgGuaFeng({ iCurScore = { 7, 8, 9, 5 }, iTotalScore = { 4, -1, -14, 11 } })

    --     self:dispatchEvent({name = self.EVENT_HU_FANIDS, msg = {nSeat=2,nFanIds={3002}}})
    -- end, 1)


    -- for i=3001, 3009 do
    --     NG.SysTool.performDelayOnce(function()
    --         -- self:onMsgStartGame({})
    --         -- self:dispatchEvent({name = self.EVENT_HUAN_PAI_START, msg = {localSeat = 2}})
    --         -- self:onMsgWallMah({
    --         --     nWallCnt = 144,       --剩余可抓张数
    --         --     nAsc = 0,           --正向待抓索引
    --         --     nDesc = 143,          --反向待抓索引
    --         --     nFirstAsc = 0,      --初始正向待抓索引
    --         --     nFirstDesc = 143,     --初始反向待抓索引
    --         --     bShow = 1,          --收到时是否即刻显示牌墙
    --         -- })
    --         -- self:showMahAcitonAni(2, NG.GAME.GameDefine.COMB_FLAG.CKONG, false)
    --         -- self:onMsgGuaFeng({ iCurScore = { 7, 8, 9, 5 }, iTotalScore = { 4, -1, -14, 11 } })
    --         self:dispatchEvent({name = self.EVENT_HU_FANIDS, msg = {nSeat=2,nFanIds={i}}})
    --     end, (i-3001) * 3)
    -- end
end

function GameModule:onDestroy()
    GameModule.super.onDestroy(self)
    self:endProtocolDelaySchedule()
end

function GameModule:initDatas()
    self._delayProtocolQueue = {}
    self._delayProtocolExecuteTime = 0
end

function GameModule:getProxyEvents()
    return {
        { module = NG.GAME.settingData, eventKeyName = "EVENT_HAVE_TING", callBack = "onHaveTingChanged" },
        { module = NG.GAME.roomTableData, eventKeyName = "EVENT_MAH_BACK_CHANGED", callBack = "onMahBackChanged" },
        { module = NG.GAME.roomTableData, eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged" },
    }
end

function GameModule:getSubXYDealList()
    return {
        { callback = handler(self, self.onMsgStartGame), msgClass = MahProtocol.msgStartGame },
        { callback = handler(self, self.onMsgEndGame), msgClass = MahProtocol.msgEndGame },
        { callback = handler(self, self.onMsgPower), msgClass = MahProtocol.msgPower },
        { callback = handler(self, self.onMsgGameStep), msgClass = MahProtocol.msgGameStep },
        { callback = handler(self, self.onMsgClock), msgClass = MahProtocol.msgClock },
        { callback = handler(self, self.onMsgEndWait), msgClass = MahProtocol.msgEndWait },
        { callback = handler(self, self.onMsgRelinkEnter), msgClass = MahProtocol.msgRelinkEnter },

        { callback = handler(self, self.onMsgWallMah), msgClass = MahProtocol.msgWallMah },
        { callback = handler(self, self.onMsgOpenWall), msgClass = MahProtocol.msgOpenWall },
        { callback = handler(self, self.onMsgThrowChip), msgClass = MahProtocol.msgThrowChip },
        { callback = handler(self, self.onMsgThrowChipRelink), msgClass = MahProtocol.msgThrowChipRelink },
        { callback = handler(self, self.onMsgTakeFirst), msgClass = MahProtocol.msgTakeFirst },
        { callback = handler(self, self.onMsgPlayerMah), msgClass = MahProtocol.msgPlayerMah },
        { callback = handler(self, self.onMsgPlayerBack), msgClass = MahProtocol.msgPlayerBack },
        { callback = handler(self, self.onMsgJoker), msgClass = MahProtocol.msgJoker },
        { callback = handler(self, self.onMsgReplace), msgClass = MahProtocol.msgReplace },
        { callback = handler(self, self.onMsgTake), msgClass = MahProtocol.msgTake },
        { callback = handler(self, self.onMsgPlay), msgClass = MahProtocol.msgPlay },
        { callback = handler(self, self.onMsgHu), msgClass = MahProtocol.msgHu },
        { callback = handler(self, self.onMsgHuEx), msgClass = MahProtocol.msgHuEx },
        { callback = handler(self, self.onMsgAction), msgClass = MahProtocol.msgAction },
        { callback = handler(self, self.onMsgPanData), msgClass = MahProtocol.msgPanData },
        { callback = handler(self, self.onMsgTurnData), msgClass = MahProtocol.msgTurnData },
        { callback = handler(self, self.onMsgFlower), msgClass = MahProtocol.msgFlower },
        { callback = handler(self, self.onMsgOutMah), msgClass = MahProtocol.msgOutMah },

        { callback = handler(self, self.onMsgEndResult), msgClass = MahProtocol.msgEndResult },
        { callback = handler(self, self.onMsgTWait), msgClass = MahProtocol.msgTWait },
        { callback = handler(self, self.onMsgJustWaiting), msgClass = MahProtocol.msgJustWaiting },
        { callback = handler(self, self.onMsgWaiting), msgClass = MahProtocol.msgWaiting },
        { callback = handler(self, self.onMsgPlayLmts), msgClass = MahProtocol.msgPlayLmts },
        { callback = handler(self, self.onMsgObviousMahsData), msgClass = MahProtocol.msgObviousMahsData },
        { callback = handler(self, self.onMsgOutMahRefresh), msgClass = MahProtocol.msgOutMahRefresh },
        { callback = handler(self, self.onMsgAllOutMahRefresh), msgClass = MahProtocol.msgAllOutMahRefresh },
        { callback = handler(self, self.onMsgBetResult), msgClass = MahProtocol.msgBetResult },
        { callback = handler(self, self.onMsgTingMahInfo), msgClass = MahProtocol.msgTingMahInfo },
        { callback = handler(self, self.onMsgAllThrowChip), msgClass = MahProtocol.msgAllThrowChip },

        { callback = handler(self, self.onMsgSpecfReq), msgClass = MahProtocol.msgSpecfReq },
        { callback = handler(self, self.onMsgSpecfData), msgClass = MahProtocol.msgSpecfData },
        { callback = handler(self, self.onMsgSpecfPower), msgClass = MahProtocol.msgSpecfPower },
        { callback = handler(self, self.onMsgSpecfHand), msgClass = MahProtocol.msgSpecfHand },
        { callback = handler(self, self.onMsgSpecfEnd), msgClass = MahProtocol.msgSpecfEnd },

        { callback = handler(self, self.onMsgClientForwardBase), msgClass = MahProtocol.msgBaseClientForwardEx },
        { callback = handler(self, self.onMsgHuFlag), msgClass = MahProtocol.msgHuFlag },
        { callback = handler(self, self.onMsgTrust), msgClass = MahProtocol.msgTrust }, -- 加倍信息

        { callback = handler(self, self.onMsgExcludeMah), msgClass = MahProtocol.msgExcludeMah },
        { callback = handler(self, self.onMsgBianPaiInfo), msgClass = MahProtocol.msgBianPaiInfo },
        { callback = handler(self, self.onMsgChangeMahPower), msgClass = MahProtocol.msgChangeMahPower },
        { callback = handler(self, self.onMsgChangeMahInfo), msgClass = MahProtocol.msgChangeMahInfo },
        { callback = handler(self, self.onMsgChangeFinish), msgClass = MahProtocol.msgChangeFinish },
        { callback = handler(self, self.onMsgBianPai), msgClass = MahProtocol.msgBianPai },
        { callback = handler(self, self.onMsgHuCardInfo), msgClass = MahProtocol.msgHuCardInfo },
        { callback = handler(self, self.onMsgGameOverResult), msgClass = MahProtocol.msgGameOverResult },
        { callback = handler(self, self.onMsgGuaFeng), msgClass = MahProtocol.msgGuaFeng },
        { callback = handler(self, self.onMsgRespTingFan), msgClass = MahProtocol.msgRespTingFan },
        { callback = handler(self, self.onMsgRecordResp), msgClass = MahProtocol.msgRecordResp }, -- 加倍信息
        { callback = handler(self, self.onMsgBaseScore), msgClass = MahProtocol.msgBaseScore }, -- 加倍信息
        { callback = handler(self, self.onMsgBankRuptcyState), msgClass = MahProtocol.msgBankRuptcyState },
    }
end

-- function GameModule:onServerToClientMessage(event)
--     local sToClientData = NG.StringTool.gameProtobufDataToLuaData(event.msg.buff, "ServerToClientMessage")

--     local subXYID = sToClientData.cmd_id
--     local subBuff = sToClientData.message
--     local subLen = sToClientData.msg_len
--     local record = self._subXYDealList[subXYID]
--     if record then
--         local msgData = record.msgClass:new()
--         msgData:bistream(subBuff, subLen)
--         record.callback(msgData)
--     end
-- end

function GameModule:getGameData()
    if not self._gameData then
        self._gameData = NG.goldGame:getModule("GameMain"):getData()
    end
    return self._gameData
end

function GameModule:getMahAlgorithm()
    if not self._mahAlgorithm then
        self._mahAlgorithm = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahAlgorithm").new()
    end
    return self._mahAlgorithm
end

function GameModule:clearAllMahData()
    self:getGameData():clearAllMahData()
end


function GameModule:onMahBackChanged(event)
    local config = self:getMahAllConfig(nil, true)
    NG.GAME.settingData:dispatchMahjongCfg(config)
end

function GameModule:onMatchStateChanged()
    NG.GAME.roomTableData:clearTable()
    self:getGameData():clearAllMahData()
end

function GameModule:safeCallModuleFunc(mouduleName, funcname, ...)
    local md = NG.goldGame:getModule(mouduleName)
    if md and md[funcname] then
        return md[funcname](...)
    end
end

-- 游戏开始
function GameModule:onMsgStartGame(msgData)
    self:recordData()
    NG.GAME.roomTableData:clearTable()
    self:getGameData():setGameStart(true)
    self:dispatchEvent({ name = self.EVENT_GAME_START_CHANGE })
    --游戏开始
    self:dispatchEvent({ name = self.EVENT_GAME_START })
    --关闭等待弹窗
    -- CF.TipTool.clearScrollTip()
    -- 初始化麻将数据
    self:getGameData():clearAllMahData()
    self:getGameData():setLastTingData()
    --客户端数据initEveryTimes
    self:getGameData():initEveryTimesDatas()
    -- NG.GAME.roomTableData:clonePlayerDatas()
    self:getGameData():setJokerData({ 97, 98, 99, 100, 101 })

    self:huanPaiEnd()
    NG.soundManager:playSoundStart()
    -- 隐藏牌桌按钮
    NG.GAME.roomTableData:setIsGameStart(true)
end

function GameModule:recordData()
    --数据统计
    -- local data = {}
    -- data.Page_name = "GameStart"
    -- data.Start_time = self._enterGameViewTime or 0
    -- data.End_time = os.time()
    -- data.staytime = data.End_time - data.Start_time
    -- data.userid = CF.selfPlayerData:getNumberID()
    -- if NG.GAME.roomTableData:isGoldRoom() then
    --     CF.throwDataManager:throwData(CF.ThrowDataDefine.GoldGamesMatched, data)
    -- else
    --     CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_START_TIME, data)
    -- end
end

-- 游戏结束
function GameModule:onMsgEndGame(msgData)
    -- 隐藏吃碰杠的选项和多选的选项
    self:getGameData():setActionID(msgData.nActionID)
    local data = {}
    data.isShow = false
    data.actionTypes = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
    data = {}
    data.isShow = false
    data.combs = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })

    -- 游戏结束不可再出牌
    self:getGameData():setPreviewShow(false)

    -- local winLostData = self:safeCallModuleFunc("WinLost", "getWinLostData")
    -- self:performWithDelay(function()
    --     NG.GAME.roomTableData:setIsGameStart(false)
    -- end, winLostData:getDelayTime())

    --取消时钟音效
    self:dispatchEvent({ name = self.EVENT_UPDATE_CLOCK, msg = { seat = NG.GAME.roomTableData:getSelfLocalSeat(), time = 0 } })

    --重置是否有小结束小值
    -- NG.GAME.roomTableData:setIsHaveResult(false)
end

function GameModule:analysePower(power)
    local tPower = {}
    local powerByte = bit:d2b(power)
    local showActionColor = false
    for i = 57, 64 do
        local tmpPower = NG.GAME.GameDefine.POWER.NONE
        if powerByte[i] == 1 then
            if i == 64 then
                tmpPower = NG.GAME.GameDefine.POWER.CANCEL
            elseif i == 63 then
                tmpPower = NG.GAME.GameDefine.POWER.PLAY
                -- 设置一个出牌权限
                self:getGameData():setPreviewShow(true)
                self:getGameData():setLastPlayMah(NG.GAME.GameDefine.MAH_VALUE.NONE)
                self:getGameData():setPlayPower(true)
            elseif i == 62 then
                tmpPower = NG.GAME.GameDefine.POWER.CHOW
            elseif i == 61 then
                tmpPower = NG.GAME.GameDefine.POWER.PUNG
                showActionColor = true
            elseif i == 60 then
                tmpPower = NG.GAME.GameDefine.POWER.HU
                -- 设置一个胡牌权限
            elseif i == 59 then
                tmpPower = NG.GAME.GameDefine.POWER.MKONG
                showActionColor = true
            elseif i == 58 then
                tmpPower = NG.GAME.GameDefine.POWER.CKONG
            elseif i == 57 then
                tmpPower = NG.GAME.GameDefine.POWER.TKONG
            end
            local tempID = NG.GAME.GameDefine.POWER_TO_ACTION[tmpPower]
            if tempID then
                tPower[tempID] = tempID
            end
        end
    end
    local convertID = {}
    for key, _ in pairs(tPower) do
        convertID[#convertID + 1] = key
    end
    table.sort(convertID)
    return convertID, showActionColor
end

-- 牌权
function GameModule:onMsgPower(msgData)
    local seat = msgData.nSeat
    if seat == NG.GAME.roomTableData:getSelfSeat() then
        -- 隐藏吃碰杠的选项和多选的选项
        self:getGameData():setActionID(msgData.nActionID)
        local data = {}
        data.isShow = false
        data.actionTypes = {}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
        data = {}
        data.isShow = false
        data.combs = {}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        self:getGameData():setPreviewMah(0)
        self:getGameData():setPlayPower(false)

        local convertID, showActionColor = self:analysePower(msgData.nPower)
        -- 将权限通知麻将层
        if convertID and #convertID ~= 0 then
            data.isShow = true
            data.actionTypes = convertID
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
        end
        self:lightActionMahs(showActionColor)
    end
    self:showPlayBackOnlinePower(msgData)
end

function GameModule:lightActionMahs(showActionColor)
    local lastPlayMah = NG.GAME.GameDefine.MAH_VALUE.NONE
    if showActionColor then
        lastPlayMah = self:getGameData():getLastPlayMah()
    end
    self:getGameData():lightActionMahs(lastPlayMah)
end

-- 游戏步骤
function GameModule:onMsgGameStep(msgData)
    -- 保存一下游戏步骤
    self:getGameData():setCurGameStep(msgData.nStepID)
end

-- 时钟
function GameModule:onMsgClock(msgData)
    local seat = msgData.nSeat
    local time = msgData.nTime

    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_UPDATE_CLOCK, msg = { seat = localSeat, time = time, windType = self:getClockWindSeatType() } })
end

function GameModule:getClockWindSeatType()
    return self.ClockWindSeatType.rotateByBanker
end

-- 结束等待
function GameModule:onMsgEndWait()

end

function GameModule:onMsgRelinkEnter()
    self:getGameData():setData("relink", true)
end

-- 牌墙
function GameModule:onMsgWallMah(msgData)
    local wallMahCnt = msgData.nWallCnt

    -- 设置牌墙数
    self:getGameData():setSurPlusCounts(wallMahCnt, true)
    self:dispatchEvent({ name = self.EVENT_UPDATE_MAH_WALL, msg = msgData })
end

-- 开牌
function GameModule:onMsgOpenWall(msgData)
    local mah = msgData.nMah or {}

    self:getGameData():addOpenData(mah)
    self:dispatchEvent({ name = self.EVENT_OPEN_WALL_MAH, msg = msgData })
end

-- 丢骰子
-- function GameModule:onMsgThrowChip(msgData)
--     local chips = msgData.nChips

--     -- 骰子动画，可能有队列动画
--     self:showChips(chips)
-- end

function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_CHIPS, data = chips })
    self:dispatchEvent({ name = self.EVENT_SHOW_CHIPS, msg = { msgThrowChip = msgData, showAni = false } })
end

function GameModule:onMsgThrowChipRelink(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_CHIPS, msg = { msgThrowChip = msgData, showAni = true } })
end

-- 起手抓牌
function GameModule:onMsgTakeFirst(msgData)
    self:dispatchEvent({ name = self.EVENT_FIRST_TAKE_MAHS })
    NG.msgManager:sendEndWait(self:getGameData():getCurGameStep())
end

--用于小结束上的麻将子展示方式
function GameModule:belongCombType(flag)
    if flag > NG.GAME.GameDefine.COMB_FLAG.NONE and flag <= NG.GAME.GameDefine.COMB_FLAG.LKONG then
        return true
    end
    return false
end

-- 玩家手牌
function GameModule:onMsgPlayerMah(msgData)
    local seat = msgData.nSeat
    local handMahs = msgData.nHands
    local handMahCount = msgData.nHandCount
    local combs = msgData.tCombs
    local combCount = msgData.nCombCount
    local dfMahs = msgData.nDanFang
    local dfCount = msgData.nDFCount

    if self:getGameData():getCurGameStep() == NG.GAME.GameDefine.ENUM_GAME_STEP.GAME_STEP_CHANGE_MAH then
        if self:getGameData():getHandMahCounts(seat) > 0 and self:getGameData():getHandMahCounts(seat) == handMahCount then
            return
        end
    end

    local mahIDs = {}
    -- 胡牌的情况
    if handMahCount == 0 then
        for i = 1, msgData.nCombCount do
            if msgData.tCombs[i].nFlag <= NG.GAME.GameDefine.COMB_FLAG.NONE
            or msgData.tCombs[i].nFlag > NG.GAME.GameDefine.COMB_FLAG.TKONG then
                for j = 1, #msgData.tCombs[i].nMahs do
                    table.insert(mahIDs, msgData.tCombs[i].nMahs[j])
                end
            end
        end
        --熟客用dfMahs，温茶丽水用nHuMah
        local huMahID = msgData.nHuMah or 0
        if huMahID == 0 then
            huMahID = dfMahs or 0
        end
        -- 金币场逃跑每个玩家都下发了huMahID,金币场、包房dfCount都是0
        for i = 1, #mahIDs do
            if mahIDs[i] == huMahID then
                table.remove(mahIDs, i)
                break
            end
        end

        self:getGameData():setHuDanFang(seat, huMahID)
        self:getGameData():setHuMahs(seat, mahIDs)
        mahIDs = {}
        local combIDs = {}
        for i = 1, combCount do
            if self:belongCombType(combs[i].nFlag) then
                table.insert(combIDs, combs[i])
            else
                for j = 1, #combs[i].nMahs do
                    table.insert(mahIDs, combs[i].nMahs[j])
                end
            end
        end
        local flowerData = self:getGameData():getFlowerMahData(seat)
        local data = {}
        data.handData = mahIDs or {}
        data.combData = combIDs or {}
        data.handDfData = 0
        data.flowerData = flowerData
        if NG.GAME.configData:huMahAloneShow() then
            for i = 1, #mahIDs do
                if mahIDs[i] == huMahID then
                    table.remove(mahIDs, i)
                    break
                end
            end
            data.handDfData = huMahID
        end
        if NG.GAME.configData:handNeedSort() then
            data.handData = self:sortHandMahs(clone(mahIDs))
        end
        -- local winLostData = self:safeCallModuleFunc("WinLost", "getWinLostData")
        -- winLostData:setMahData(seat, data)
    else
        --显示时钟
        self:sendEventChipsAniFinish()

        if seat == NG.GAME.roomTableData:getSelfSeat() then
            -- 清空自家comb，为了重连不重复添加comb
            self:getGameData():clearCombMahData(seat)
        end
        for i = 1, combCount do
            -- 手牌数据增加combs
            local cloneCombData = clone(combs[i])
            cloneCombData = self:convertCombDataInGame(cloneCombData)
            self:getGameData():setCombMahData(seat, cloneCombData, false, true)
        end
    end

    local danFang = nil
    if dfCount ~= 0 then
        danFang = NG.GAME.GameDefine.MAH_VALUE.BACK
        if dfMahs ~= 0 then
            danFang = dfMahs
        end
    end
    if not self:getGameData():getFirstHandMah() then
        self:getGameData():setFirstHandMah(true)
        self:getGameData():setHandMahData(seat, handMahs, danFang, true)
    else
        self:getGameData():setHandMahData(seat, handMahs, danFang, false)
    end
end

function GameModule:sortHandMahs(mahIDs)
    local handData = clone(mahIDs)
    MahLogic.sortMahValues(handData, self:getGameData():getJokerData(), self:getGameData():getInsteadMahData())
    return handData
end

--转换在游戏中的comb数据，比如暗杠要全部变成牌背
function GameModule:convertCombDataInGame(data)
    return data
end

-- 玩家牌背
function GameModule:onMsgPlayerBack(msgData)
    local seat = msgData.nSeat
    local mahs = msgData.nMahs
    local handCount = msgData.nHandCount
    local dfMah = msgData.nDanFang
    local dfCount = msgData.nDFCount
    local combs = msgData.tCombs
    local combsCount = msgData.nCombCount

    local playerMah = {}
    if #mahs == 0 then
        for _ = 1, handCount do
            playerMah[#playerMah + 1] = NG.GAME.GameDefine.MAH_VALUE.BACK
        end
    else
        for i = 1, handCount do
            playerMah[#playerMah + 1] = mahs[i]
        end
    end

    local danFang = nil
    if dfCount ~= 0 then
        danFang = NG.GAME.GameDefine.MAH_VALUE.BACK
        if dfMah ~= 0 then
            danFang = dfMah
        end
    end

    -- 设置手牌
    self:getGameData():setHandMahData(seat, playerMah, danFang, false)
    --回放重连会再次走进来，会出现两次杠牌。
    self:getGameData():clearCombMahData(seat)
    for i = 1, combsCount do
        -- 暗杠转换处理 在接口内已处理
        local cloneCombData = clone(combs[i])
        cloneCombData = self:convertCombDataInGame(cloneCombData)
        self:getGameData():setCombMahData(seat, cloneCombData, false, true)
    end

    --当前结束不会下发倒牌数据，结束收收到需要重新让其倒下。
    if self:getGameData():getBrokenState(seat) == NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP then
        self:getGameData():setBrokenState(seat, { nState = NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP, nSeat = seat, nTime = 0 })
    end
end

-- 财神
function GameModule:onMsgJoker(msgData)
    local insteads = msgData.nInstds
    local jokers = msgData.nJokers

    self:getGameData():setJokerData(jokers)
    self:getGameData():setInsteadMahData(insteads)

    for i = 0, NG.GAME.roomTableData:getChairs() - 1 do
        self:getGameData():sortHandMahData(i)
    end

end

-- 补花
function GameModule:onMsgReplace(msgData)
    local seat = msgData.nSeat
    local mah = msgData.nMah

    -- 补花动画
    local flowerMahs = {}
    table.insert(flowerMahs, mah)
    self:getGameData():addFlowerMahData(seat, flowerMahs, true)
    self:getGameData():deleteHandMahData(seat, flowerMahs, "flower")

    --加入单放进入手牌
    self:getGameData():addDfDataIntoHandMah(seat)
    local bMan = false
    local playerData = NG.GAME.roomTableData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = "flower"
    local bFangYan = not NG.GAME.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and NG.GAME.roomTableData:getGameID() or nil
    NG.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
end

-- 抓牌
function GameModule:onMsgTake(msgData)
    local seat = msgData.nSeat
    local nMah = msgData.nMah
    --加入单放进入手牌,返回插入是否成功
    self:getGameData():addDfDataIntoHandMah(seat, nMah)
    -- 牌墙数 -1 
    self:getGameData():decreaseSurPlusCounts()

    local tingMahs = self:getGameData():getTingMahs(seat)
    self:getGameData():setTingMahs(seat, tingMahs)

    self:dispatchEvent({ name = self.EVENT_TAKE_MAH_FROM_WALL, msg = { isFront = msgData.isFront } })

    local jokerData = self:getGameData():getJokerData()
    if seat == NG.GAME.roomTableData:getSelfSeat() then
        self:getGameData():setLastTingData()
        local selfHandMah = self:getGameData():getHandMahData(seat)
        local isGameHasJoker = #jokerData > 0   -- 游戏规则是否有财神
        local isHandHasJoker = false    -- 手牌是否有财神
        local isHandCurJoker = false    -- 当前抓牌是否是财神
        if isGameHasJoker then
            for i = 1, #jokerData do
                if not isHandCurJoker and nMah == jokerData[i] then
                    isHandCurJoker = true
                end
                for _, v in ipairs(selfHandMah) do
                    if not isHandHasJoker and v == jokerData[i] then
                        isHandHasJoker = true
                        break
                    end
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_TAKE, msg = { isGameHasJoker = isGameHasJoker, isHandHasJoker = isHandHasJoker, isHandCurJoker = isHandCurJoker } })
    end
end

--出牌动画
function GameModule:showOutMahAction(data)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OUTMAH_ACTION, data = data })
end

-- 出牌
function GameModule:onMsgPlay(msgData)
    --飘财动画事件
    local seat = msgData.nSeat
    local mah = msgData.nMah

    self:getGameData():setLastPlayMah(mah)
    self:getGameData():setLastPlaySeat(seat)

    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    if self:getGameData():isJoker(mah) then
        self:showMahAcitonAni(localSeat, NG.GAME.GameDefine.COMB_FLAG.TKONG, { laizi = true })
        local bMan = false
        local playerData = NG.GAME.roomTableData:getPlayerDataBySeatId(seat)
        if playerData then
            bMan = playerData:getSex() == 1
        end
        NG.soundManager:playSoundMahAction(NG.GAME.GameDefine.COMB_FLAG_TO_TYPE[NG.GAME.GameDefine.COMB_FLAG.TKONG], bMan)
    end

    if self:getGameData():getPreviewMah() == 0 then
        local outMahs = {}
        table.insert(outMahs, mah)
        self:getGameData():addOutMahData(seat, outMahs)
        NG.soundManager:playNewEffect("sound_outcard")

        local data = {}
        data.localSeat = localSeat
        data.mah = mah
        self:getGameData():deleteHandMahData(seat, outMahs, "outmah")
        self:showOutMahAction(data)
    else
        if self:getGameData():getPreviewMah() ~= mah then
            self:getGameData():setPreviewShow(false)
            self:getGameData():resetMahData(seat, mah)
        else
            self:getGameData():clearTempMahData()
        end
    end

    -- if NG.GAME.configData:needShowGodOfWealthAni() then
    --     if not MahLogic.checkMahValueIsFlower(mah) then
    --         --过滤正财神
    --         local jokerData = self:getGameData():getJokerData()
    --         local tmpDic = {}
    --         for _, v in pairs(jokerData) do
    --             tmpDic[v] = true
    --         end
    --         if tmpDic[mah] then
    --             self:dispatchEvent({ name = self.EVENT_PLAY_CAISHEN, data = { seat = seat } })
    --         end
    --     end
    -- end

    -- 增加唱牌音效播放
    local bMan = false
    local playerData = NG.GAME.roomTableData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local bFangYan = not NG.GAME.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and NG.GAME.roomTableData:getGameID() or nil
    NG.soundManager:playSoundMah(mah, bMan, gameid)
    --听牌相关的逻辑处理
    if seat == NG.GAME.roomTableData:getSelfSeat() then
        local tingMahs = self:getGameData():getTingMahs(seat)
        local isTing = false
        for i = 1, #tingMahs do
            if mah == tingMahs[i] then
                isTing = true
                break
            end
        end
        if isTing then
            local data = self:getGameData():getCanHuMahsData(seat)
            self:getGameData():setLastTingData(data[mah])
        else
            self:getGameData():setLastTingData()
        end
        self:getGameData():clearTingMahs(seat)
        self:dispatchEvent({ name = self.EVENT_HIDE_CAN_HU_MAHS })
        self:getGameData():clearCanHuMahsData(seat)
    end
    self:dealPlayBackOtherAction(seat)
end

-- 胡牌
function GameModule:onMsgHu(msgData)
    local seat = msgData.nSeat

    self:getGameData():addHuSeat(seat)
    self:dispatchEvent({ name = self.EVENT_HU })
    self:dealPlayBackOtherAction()
end

-- 胡牌扩展
function GameModule:onMsgHuEx(msgData)
    self:getGameData():setHuSeats(msgData.nSeats)
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    local seat = msgData.nSeat
    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    if localSeat == NG.GAME.roomTableData:getSelfLocalSeat() then
        self:getGameData():setHuPower(false)
        --发生吃碰杠后，隐藏听牌按钮
        self:getGameData():setLastTingData()
        self:getGameData():clearTingMahs(seat)
        self:dispatchEvent({ name = self.EVENT_HIDE_CAN_HU_MAHS })
        self:getGameData():clearCanHuMahsData(seat)
    end
    local convertFlag = NG.GAME.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]

    -- 播放行牌动画
    local cloneCombData = clone(msgData.tComb)
    cloneCombData = self:convertCombDataInGame(cloneCombData)
    self:getGameData():setCombMahData(seat, cloneCombData, true)
    self:showMahAcitonAni(localSeat, msgData.tComb.nFlag, msgData.tComb)
    local bMan = false
    local playerData = NG.GAME.roomTableData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    local bFangYan = not NG.GAME.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and NG.GAME.roomTableData:getGameID() or nil
    NG.soundManager:playSoundMahAction(actionIndex, bMan, gameid)

    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if convertFlag == NG.GAME.GameDefine.COMB_TYPE.CHOW or convertFlag == NG.GAME.GameDefine.COMB_TYPE.PONG or convertFlag == NG.GAME.GameDefine.COMB_TYPE.EXPOSED_KONG then
        local nMahs = msgData.tComb.nMahs
        local inMahs = msgData.tComb.nInMahs[1]
        for i = 1, #nMahs do
            if nMahs[i] == inMahs then
                table.remove(nMahs, i)
                break
            end
        end
        local source
        if convertFlag == NG.GAME.GameDefine.COMB_TYPE.EXPOSED_KONG then
            source = "exposed_kong"
        else
            source = "chow"
        end
        self:getGameData():deleteHandMahData(seat, nMahs, source)
        self:getGameData():deleteLastOutMahData(msgData.tComb.nFromSeat)
    end

    -- 如果是暗杠或者补杠，如果手牌中有单放，整理一下
    if convertFlag == NG.GAME.GameDefine.COMB_TYPE.CONCEALED_KONG or convertFlag == NG.GAME.GameDefine.COMB_TYPE.FILL_KONG then
        local delMahs = {}
        for i = 1, #msgData.tComb.nMahs - #msgData.tComb.nInMahs do
            delMahs[i] = msgData.tComb.nMahs[1]
        end
        self:getGameData():deleteHandMahData(seat, delMahs)
        -- end
        -- if convertFlag == NG.GAME.GameDefine.COMB_TYPE.FILL_KONG then
        --     local inMahs = msgData.tComb.nInMahs[1]
        --     self:getGameData():deleteHandMahData(seat, { inMahs }, "fill_kong")
    end
    self:dealPlayBackOtherAction()
end

--设置牢庄几
function GameModule:setLaoZhuang()
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_LAOZHUANG })
end

function GameModule:onMsgPanData(msgData)
    -- local banker = msgData.nBanker
    local laoZhuang = msgData.nLaoZhuang
    local baseScore = msgData.nBaseScore

    -- 设置庄
    self:getGameData():setBankerSeat(msgData.nBanker)
    --设置牢庄
    self:getGameData():setLaoZhuangNum(laoZhuang)
    self:setLaoZhuang()
    if self:getClockWindSeatType() == self.ClockWindSeatType.rotateByBanker then
        self:rotateWindPos(msgData)
    end

    --金币场更新底分
    -- if NG.GAME.roomTableData:isGoldRoom() then
    -- NG.GAME.roomTableData:setBaseScore(msgData.nBaseScore)
    -- end
end

function GameModule:onMsgBaseScore(msgData)
    NG.GAME.roomTableData:setBaseScore(msgData.nBaseScore)
    self:getGameData():setData("FengDing", msgData)
    self:dispatchEvent({ name = self.EVENT_ROOM_BASE_SCORE, msg = windDirection })
end

function GameModule:onMsgBankRuptcyState(msgData)
    local seat = msgData.nSeat
    local time = msgData.nTime

    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    self:dispatchEvent({ name = self.EVENT_UPDATE_CLOCK, msg = { seat = localSeat, time = time, windType = self:getClockWindSeatType() } })
end

function GameModule:rotateWindPos(data)
    local bankerLocalSeat = NG.GAME.roomTableData:seatToLocal(data.nBanker)
    local windCount = 4
    local windDirection = (windCount - bankerLocalSeat - 1) * 90
    self:dispatchEvent({ name = self.EVENT_ROTATE_WIND_POS, msg = windDirection })
end

-- 每轮数据
function GameModule:onMsgTurnData(msgData)
    self:getGameData():setLastPlayMah(msgData.nJustPlayed)
    self:getGameData():setLastPlaySeat(msgData.nJustSeat)
    --判断所有人手牌是否3N2
    local b3N2 = false
    for i = 0, NG.GAME.roomTableData:getChairs() - 1 do
        local handMahCounts = 0
        local handMah = self:getGameData():getHandMahData(i)
        local dfMah = self:getGameData():getHandDfData(i)
        if handMah then
            handMahCounts = handMahCounts + #handMah
        end
        if dfMah then
            handMahCounts = handMahCounts + 1
        end
        if (handMahCounts - 2 + 3) % 3 == 0 then
            b3N2 = true
            break
        end
    end
    if b3N2 == false and msgData.nJustPlayed ~= 0 then
        self:getGameData():setTempMahID(msgData.nJustPlayed)
        self:getGameData():addOutMahData(msgData.nJustSeat, { msgData.nJustPlayed })
    end
end

-- 花牌
function GameModule:onMsgFlower(msgData)
    local seat = msgData.nSeat
    local mah = msgData.nMahs

    self:getGameData():setFlowerMahData(seat, mah, false, true)
end

-- 出牌区
function GameModule:onMsgOutMah(msgData)
    local seat = msgData.nSeat
    local outMahs = msgData.nMahs
    self:getGameData():setOutMahData(seat, outMahs)
end

-- 结果
function GameModule:onMsgEndResult(msgData)

end

-- 听牌
function GameModule:onMsgTWait(msgData)

end

-- 刚刚听得牌
function GameModule:onMsgJustWaiting(msgData)

end

-- 听牌
function GameModule:onMsgWaiting(msgData)

end

-- 限制牌
function GameModule:onMsgPlayLmts(msgData)
    local seat = msgData.nSeat
    local mahs = msgData.nMahs

    self:getGameData():setLimitHandMahs(seat, mahs)
end

-- 全视角数据
function GameModule:onMsgObviousMahsData(msgData)
    -- 本地回放使用，服务端回放不用处理
end

-- 刷新出牌区，用于出错牌服务端重新下发数据
function GameModule:onMsgOutMahRefresh(msgData)
    local seat = msgData.nSeat
    local mahs = msgData.nMahs
    local bClearNoSquareData = seat == 0
    self:getGameData():clearOutMahData(seat, bClearNoSquareData)
    self:getGameData():setOutMahData(seat, mahs)
end

-- 刷新全部出牌区
function GameModule:onMsgAllOutMahRefresh(msgData)
    local mahs = msgData.nMahs

    local seat = -1
    local mahID = self:getGameData():getTempMahID()
    self:getGameData():setTempMahID(nil)
    if mahID and mahID ~= 0 then
        table.insert(mahs, mahID)
    end
    self:getGameData():setOutMahData(seat, mahs)
end

--买马
function GameModule:onMsgBetResult(msgData)
end

--听牌设置
function GameModule:onMsgTingMahInfo(msgData)
    if msgData.sDelMahSize == 1 and msgData.nDealMah[1] == 144 then       --断线重连
        local data = {}
        self:getGameData():setLastTingData()
        -- if msgData.bUniversalHu[1] then
        --     table.insert(data, { huMahID = 255, huFan = 0, huCnt = 0 })
        -- else
        for j = 1, msgData.sTingSize[1] do
            table.insert(data, { huMahID = msgData.nTingMah[1][j], huFan = msgData.sTingMahFan[1][j], huCnt = msgData.sTingMahCount[1][j] })
        end
        -- end
        self:getGameData():setLastTingData(data)
    else
        local seat = NG.GAME.roomTableData:getSelfSeat()
        local tingMahs = clone(msgData.nDealMah) or {}
        self:getGameData():setTingMahs(seat, tingMahs)
        local data = {}
        for i = 1, msgData.sDelMahSize do
            data[tingMahs[i]] = {}
            -- if msgData.bUniversalHu[i] then
            --     table.insert(data[tingMahs[i]], { huMahID = 255, huFan = 0, huCnt = 0 })
            -- else
            for j = 1, msgData.sTingSize[i] do
                table.insert(data[tingMahs[i]], { huMahID = msgData.nTingMah[i][j], huFan = msgData.sTingMahFan[i][j], huCnt = msgData.sTingMahCount[i][j] })
            end
            -- end
        end
        self:getGameData():setCanHuMahsData(seat, data)
    end
end

function GameModule:onMsgAllThrowChip(msgData)
    self:dispatchEvent({ name = self.EVENT_ALL_CHIPS, msg = { msgThrowChip = msgData, showAni = true } })
end

function GameModule:onMsgAnte(msgData)
    local YaZiEnum = { NONE = -1, ZERO = 0, ONE = 1, TWO = 2 }
    local msg = { seat = msgData.seat, anteNum = msgData.anteNum, anteMinNum = msgData.anteMinNum }

    if msgData.anteNum == YaZiEnum.NONE then
        if msgData.seat == NG.GAME.roomTableData:getSelfSeat() then
            self:showYaZiView(msg)
        end
    else
        self:getGameData():setPlayerAnteData(msg)
    end
end

function GameModule:showYaZiView(msg)
end

--做牌相关协议
function GameModule:onMsgSpecfReq(msgData)

end

function GameModule:onMsgSpecfData(msgData)
    if not DEBUG then
        return
    end
    self:updateSpecfMahData(msgData.nMahs, msgData.nCount)
    self:setShowSpecfMahLayer(true)
end

function GameModule:updateSpecfMahData(mahs, count)
    local data = {}
    data.mahs = mahs
    data.count = count
    self:dispatchEvent({ name = self.EVENT_UPDATE_SPECF_MAH, data = data })
end

function GameModule:setShowSpecfMahLayer(isShow)
    local data = {}
    data.isShow = isShow
    self:dispatchEvent({ name = self.EVENT_SPECF_MAHLAYER_ISSHOW, data = data })
end

function GameModule:onMsgSpecfPower(msgData)

end

function GameModule:onMsgSpecfHand(msgData)

end

function GameModule:onMsgSpecfEnd(msgData)

end

function GameModule:getEventKey()
    return NG.GameMProtocol.ServerToClientMessage.event_key
end

function GameModule:onServerToClientMessage(event)
    local sToClientData = NG.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)
    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen
    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        print("mahlayer 【recv " .. subXYID .. "】 ", os.clock())
        -- dump(msgData)
        self:doServerToClientMessage(record, msgData, subXYID)
    else
        print("mahlayer 【recv unkonw  .. " .. subXYID .. "】 ", os.clock())
    end
end

function GameModule:doServerToClientMessage(record, msgData, subXYID)
    local isNeedDelay, delayTime, isIncludeSelf = self:needDelay(subXYID, msgData)
    if isNeedDelay then
        self:addProtocolToDelayQueue(record.callback, clone(msgData), delayTime, isIncludeSelf, subXYID)
    else
        if #self._delayProtocolQueue > 0 then
            self:addProtocolToDelayQueue(record.callback, clone(msgData), 0, true, subXYID)
        else
            record.callback(msgData)
        end
    end
end

function GameModule:needDelay(xyid, protocol)
    if xyid == MahProtocol.msgGameStep.XY_ID then
        if protocol.nStepID == NG.GAME.GameDefine.ENUM_GAME_STEP.GAME_STEP_TAKE_FIRST then
            return true, 1, true
        end
    elseif xyid == MahProtocol.msgToTalShuffle.XY_ID then
        return true, 3.75, false
    elseif xyid == MahProtocol.msgChangeMahInfo.cmdid then
        return true, 0.5, true
        -- elseif xyid == MahProtocol.msgHuFlag.cmdid then
        --     return true, 2, false
    end
    return false, 0, true
end

function GameModule:addProtocolToDelayQueue(protocolDealFunc, protocol, delayTime, isIncludeSelf, subXYID)
    local index = #self._delayProtocolQueue + 1
    self._delayProtocolQueue[index] = {}
    self._delayProtocolQueue[index].protocolDealFunc = protocolDealFunc
    self._delayProtocolQueue[index].protocol = protocol
    self._delayProtocolQueue[index].delayTime = delayTime
    self._delayProtocolQueue[index].isIncludeSelf = isIncludeSelf
    self._delayProtocolQueue[index].subXYID = subXYID
end

function GameModule:endProtocolDelaySchedule()
    if self._startProtocolDelayListener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._startProtocolDelayListener)
    end
    self._startProtocolDelayListener = nil
end

function GameModule:startProtocolDelaySchedule()
    self:endProtocolDelaySchedule()
    self._startProtocolDelayListener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if #self._delayProtocolQueue > 0 then
            local nowTime = socket.gettime()
            if nowTime >= self._delayProtocolExecuteTime then
                local temp = self._delayProtocolQueue[1]
                if temp.delayTime > 0 then
                    if not temp.isIncludeSelf then
                        table.remove(self._delayProtocolQueue, 1)
                        temp.protocolDealFunc(temp.protocol)
                        self._delayProtocolExecuteTime = nowTime + temp.delayTime
                    else
                        self._delayProtocolExecuteTime = nowTime + temp.delayTime
                        self._delayProtocolQueue[1].delayTime = 0
                    end
                else
                    table.remove(self._delayProtocolQueue, 1)
                    temp.protocolDealFunc(temp.protocol)
                end
            end
        end
    end, 0.01, false)
end

--骰子动画
--@chips是一个{}
function GameModule:showChips(chips)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_CHIPS, data = chips })
end

--吃碰杠胡动画
--@actionid是1.吃碰杠传MahjongEnum.COMB_TYPE的枚举值，2.胡牌传MahjongEnum.POWER_ID.HU
--@bZiMo:胡牌时是否为自摸
function GameModule:showMahAcitonAni(localSeat, actionID, data)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_ANIMATION, data = { localSeat = localSeat, actionID = actionID, msgData = data } })
end

--骰子动画播放完成转发事件
function GameModule:sendEventChipsAniFinish()
    --模拟协议延迟，延迟发牌
    self:dispatchEvent({ name = self.EVENT_SHOW_CHIPS_FINISHED })
    NG.msgManager:sendEndWait(self:getGameData():getCurGameStep())
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end
    if self:getGameData():getPreviewShow() == true then
        if self:showPlayFlowerOut(mahValue, mahIndex) then
            return
        end
        self:getGameData():setPreviewMah(mahValue)
        local seat = NG.GAME.roomTableData:getSelfSeat()
        self:dealPlayPreOut(seat, mahIndex, mahValue)
        NG.msgManager:sendPlayMahs(mahValue, self:getGameData():getActionID())
    end
end

--处理预显示
function GameModule:dealPlayPreOut(seat, mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end
    self:getGameData():saveMahDataToTemp()
    self:getGameData():addOutMahData(seat, { mahValue })
    NG.soundManager:playNewEffect("sound_outcard")

    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    local data = {}
    data.index = mahIndex
    data.localSeat = localSeat
    data.mahValue = mahValue

    self:showOutMahAction(data)

    --出牌错误时将出牌区刷新
    local ret = self:getGameData():deleteHandMahIndex(seat, mahIndex, mahValue)
    if not ret then
        self:getGameData():deleteOutMahData(seat, { mahValue })
    end
end

--出牌判断是否为花牌
--param 麻将牌ID
function GameModule:showPlayFlowerOut(mahID, mahIndex)
    --获取 开牌
    local openMahs = self:getGameData():getOpenData()
    local insteadMahs = self:getGameData():getInsteadMahData()
    local selfSeat = NG.GAME.roomTableData:getSelfSeat()
    if MahLogic.checkMahValueIsFlower(mahID) then
        NG.msgManager:sendReplace(mahID)
        self:dealFlowerPlayPreOut(selfSeat, mahID, mahIndex)
        return true
    end
    local bFlowerJoker = false
    if openMahs then
        for i = 1, #openMahs do
            if MahLogic.checkMahValueIsFlower(openMahs[i]) then
                bFlowerJoker = true
                break
            end
        end
    end
    if not bFlowerJoker then
        return false
    end
    if insteadMahs then
        for i = 1, #insteadMahs do
            if insteadMahs[i] == mahID then
                NG.msgManager:sendReplace(mahID)
                self:dealFlowerPlayPreOut(selfSeat, mahID, mahIndex)
                return true
            end
        end
    end
    return false
end

function GameModule:dealFlowerPlayPreOut(seat, mahID, mahIndex)
    self:getGameData():deleteHandMahIndex(seat, mahIndex)
end

function GameModule:getMahAllConfig(customIndex, bSwitchKey)
    local config = NG.GAME.settingData:getDefaultData(customIndex, bSwitchKey)
    local mahBackData = NG.GAME.roomTableData:getMahBackData()
    config.mahBackPatternType = config.mahBackPatternType or {}
    if mahBackData then
        for _, v in pairs(mahBackData) do
            if type(v) == "table" and v.state == 1 and v.type == "PB" then
                table.insertto(config.mahBackPatternType, v.url)
            end
        end
    end
    return config
end

function GameModule:doActionCancel()
    NG.msgManager:sendCancel(self:getGameData():getActionID())
    NG.msgManager:sendForwardOperatePass(tostring(NG.GAME.GameDefine.ACTION.PASS))
end

function GameModule:doActionChow()
    local jokerData = self:getGameData():getJokerData()
    local insteadData = self:getGameData():getInsteadMahData()
    local seat = NG.GAME.roomTableData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()

    local tempHands = clone(handMahs)
    if not NG.GAME.configData:canChowPungKongJoker() then
        for i = #tempHands, 1, -1 do
            for j = 1, #jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands, i)
                    break
                end
            end
        end
    end

    local combs = self:getMahAlgorithm():findChow(tempHands, inMah, jokerData, insteadData)
    local combsSize = #combs
    if combsSize == 1 then
        local msgCombs = {}
        msgCombs.mahs = combs[1]
        msgCombs.ins = { inMah }
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = NG.GAME.GameDefine.COMB_FLAG.CHOW
        NG.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif combsSize > 1 then
        local function reverseTable(tab)
            local tmp = {}
            for i = 1, #tab do
                tmp[i] = table.remove(tab)
            end
            return tmp
        end
        combs = reverseTable(combs)
        local data = {}
        data.isShow = true
        data.combs = combs
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
    end
end

function GameModule:doActionPong()
    local jokerData = self:getGameData():getJokerData()
    local seat = NG.GAME.roomTableData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()

    local tempHands = clone(handMahs)
    if not NG.GAME.configData:canChowPungKongJoker() then
        for i = #tempHands, 1, -1 do
            for j = 1, #jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands, i)
                    break
                end
            end
        end
    end

    local combs = self:getMahAlgorithm():findPong(tempHands, inMah)
    if #combs ~= 0 then
        local msgCombs = {}
        msgCombs.mahs = combs
        msgCombs.ins = { inMah }
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = NG.GAME.GameDefine.COMB_FLAG.PUNG
        NG.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    end
end

function GameModule:doActionKong()
    local jokerData = self:getGameData():getJokerData()
    local seat = NG.GAME.roomTableData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local danFang = self:getGameData():getHandDfData(seat)
    -- handMahs = {17,17,17,17,18,18,18,18,19,19,19,20,20,20,20} test
    local tempHands = clone(handMahs)
    if not NG.GAME.configData:canChowPungKongJoker() then
        for i = #tempHands, 1, -1 do
            for j = 1, #jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands, i)
                    break
                end
            end
        end
    end

    local selfAllCombs = self:getGameData():getAllCombMahData(seat)
    local msgCombs = {}
    local isSelfHu = self:getGameData():isHued(NG.GAME.roomTableData:getSelfSeat())
    local combs = self:getMahAlgorithm():findExposedKong(tempHands, inMah, isSelfHu)
    local inMahs = {}
    if #combs == 1 then
        msgCombs.mahs = combs[1]
        msgCombs.ins = { inMah }
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = NG.GAME.GameDefine.COMB_FLAG.MKONG
        NG.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif #combs == 0 then
        --暗杠补杠可能有多种情况出现
        local data = { combs = {}, isShow = false }
        local combsConcealedKong = self:getMahAlgorithm():findConcealedKong(tempHands, danFang, isSelfHu)
        for i = 1, #combsConcealedKong do
            local combData = {
                mahs = combsConcealedKong[i],
                ins = {},
                from = NG.GAME.roomTableData:getSelfSeat(),
                flag = NG.GAME.GameDefine.COMB_FLAG.CKONG
            }
            table.insert(data.combs, combData)
        end
        if NG.GAME.configData:isGuoGangBuGang() then
            tempHands = {}
        end
        local combsFillKong = self:getMahAlgorithm():findFillKong(tempHands, danFang, selfAllCombs, isSelfHu)
        for i = 1, #combsFillKong do
            local tmpFromSeat
            local inMahs
            for j = 1, #selfAllCombs do
                if selfAllCombs[j].nMahs[1] == combsFillKong[i][#combsFillKong[i]] then
                    tmpFromSeat = selfAllCombs[j].nFromSeat
                    inMahs = selfAllCombs[j].nMahs
                end
            end

            local combData = {
                mahs = combsFillKong[i],
                ins = inMahs,
                from = tmpFromSeat,
                flag = NG.GAME.GameDefine.COMB_FLAG.TKONG
            }
            table.insert(data.combs, combData)
        end
        local combsSize = #data.combs
        if combsSize == 1 then
            local combData = data.combs[1]
            if combData.mahs[1] == NG.GAME.GameDefine.MAH_VALUE.BACK then
                for i = 1, #combData.mahs do
                    combData.mahs[i] = combData.mahs[#combData.mahs]
                end
            end
            NG.msgManager:sendAction(combData, self:getGameData():getActionID())
        elseif combsSize > 1 then
            data.isShow = true
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        end
    else
        local data = { combs = {}, isShow = true }
        for i = 1, #combs do
            data.combs[i] = {
                mahs = combs[i],
                ins = { inMah },
                from = self:getGameData():getLastPlaySeat(),
                flag = NG.GAME.GameDefine.COMB_FLAG.MKONG
            }
        end
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
    end
end

function GameModule:doActionHu()
    NG.msgManager:sendHu(self:getGameData():getActionID())
end

function GameModule:doActionTing()
    NG.msgManager:sendTing()
end

function GameModule:getMaxHandCounts()
    return self:getGameData():getMaxHandMahData()
end

function GameModule:clickMahSpecialEvent(mahID)

end

function GameModule:onHaveTingChanged(event)
    if event.data == nil then
        return
    end
    local isTing = event.data
    if isTing == false then
        self:getGameData():setLastTingData()
        local seat = NG.GAME.roomTableData:localToSeat(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
        self:getGameData():clearTingMahs(seat)
        self:getGameData():clearCanHuMahsData(seat)
        self:dispatchEvent({ name = self.EVENT_HIDE_CAN_HU_MAHS })
    end
end

function GameModule:showChips3D(tChips)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_CHIPS_3D, data = tChips })
end

function GameModule:onMsgClientForwardBase(msgData)
    if msgData.sID == MahProtocol.msgBaseClientForwardEx.CF_ID.OPERATE_PASS then
        self:onMsgClientForwardOperatePass(msgData)
    end
end

-- 单次胡牌信息
function GameModule:onMsgHuFlag(msgData)
    self._lastHuAniEndTime = socket.gettime() + 2
    -- print("yuhang yuhang")
    -- dump(msgData)
    for i = 1, #msgData.nFanIds do
        if msgData.nFanIds[i] == 20 or msgData.nFanIds[i] == 3000 then
            msgData.nFanIds[i] = 4000
        end
    end
    if #msgData.nFanIds > 1 then
        table.sort(msgData.nFanIds, function(a, b)
            if a and b then
                return a < b
            end
            return true
        end)
    end
    msgData.nFanIds[1] = msgData.nFanIds[1] or 4000
    local huShowFanID = msgData.nFanIds[1]
    if huShowFanID and huShowFanID < 3000 then
        for i = 2, #msgData.nFanIds do
            if msgData.nFanIds[i] >= 3000 then
                -- huShowFanID = msgData.nFanIds[i]
                msgData.nFanIds[1], msgData.nFanIds[i] = msgData.nFanIds[i], msgData.nFanIds[1]
                break
            end
        end
    end

    if msgData.nFromSeat >= 0 then
        self:getGameData():deleteLastOutMahData(msgData.nFromSeat, msgData.nMah)
    else
        self:getGameData():deleteHandMahData(msgData.nSeat, { msgData.nMah })

        local seat = msgData.nSeat
        local mah = msgData.nMah
        if seat == NG.GAME.roomTableData:getSelfSeat() then
            local tingMahs = self:getGameData():getTingMahs(seat)
            local isTing = false
            for i = 1, #tingMahs do
                if mah == tingMahs[i] then
                    isTing = true
                    break
                end
            end
            if isTing then
                local data = self:getGameData():getCanHuMahsData(seat)
                self:getGameData():setLastTingData(data[msgData.nMah])
            else
                self:getGameData():setLastTingData()
            end
            self:getGameData():clearTingMahs(seat)
            self:dispatchEvent({ name = self.EVENT_HIDE_CAN_HU_MAHS })
            self:getGameData():clearCanHuMahsData(seat)
        end
    end
    self:getGameData():addHuMahDataXueLiu(msgData.nSeat, { msgData.nMah }, true)
    self:dispatchEvent({ name = self.EVENT_HU_FANIDS, msg = msgData })
end

function GameModule:onMsgClientForwardOperatePass(msgData)
    -- local actionType = msgData.strData
    -- if NG.GAME.GameDefine.ACTION.PASS == tonumber(actionType) and NG.GAME.roomTableData:isPlayBack()  then
    --     local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.sSeat)
    --     self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OPERATE_PASS, localSeat = localSeat })
    -- end
end

function GameModule:onMsgExcludeMah(msgData)
    self:getGameData():setExcludeMah(msgData.mahs)
end

function GameModule:onMsgBianPaiInfo(msgData)
    if msgData.nSeat == NG.GAME.roomTableData:getSelfSeat() then
        self:getGameData():setHandBaiBianData(msgData.infos)
    end
end

function GameModule:onMsgChangeMahPower(msgData)
    self:getGameData():setLimitHandMahs(msgData.powerSeat, {})
    self:dispatchEvent({ name = self.EVENT_HUAN_PAI_START, msg = { seat = msgData.powerSeat } })
    if msgData.powerSeat == NG.GAME.roomTableData:getSelfSeat() then
    end
end

function GameModule:onMsgChangeMahInfo(msgData)
    self:getGameData():addHuanPai(msgData.changeSeat, msgData.changeMahs)
    NG.soundManager:playNewEffect("sound_change")
end

function GameModule:onMsgChangeFinish(msgData)
    self:huanPaiEnd()
end

function GameModule:onMsgBianPai(msgData)
    self:getGameData():setLastTingData()
    local seat = NG.GAME.roomTableData:localToSeat(NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM)
    self:getGameData():clearTingMahs(seat)
    self:getGameData():clearCanHuMahsData(seat)
    self:dispatchEvent({ name = self.EVENT_HIDE_CAN_HU_MAHS })

    self:getGameData():updateBianPaiInfo(msgData)
    NG.soundManager:playNewEffect("sound_bian")
end

function GameModule:onMsgHuCardInfo(msgData)
    self:getGameData():setHuMahsDataXueLiu(msgData)
end

function GameModule:onMsgGameOverResult(msgData)
    local data = {}
    data.isShow = false
    data.actionTypes = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
    data = {}
    data.isShow = false
    data.combs = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })

    -- 游戏结束不可再出牌
    self:getGameData():setPreviewShow(false)
    --取消时钟音效
    self:dispatchEvent({ name = self.EVENT_UPDATE_CLOCK, msg = { seat = NG.GAME.roomTableData:getSelfLocalSeat(), time = 0 } })



    MahLogic.sortMahValues(msgData.nHands, self:getGameData():getJokerData(), self:getGameData():getInsteadMahData())
    self:getGameData():setData("result", msgData)

    local curTime = socket.gettime()
    local addDelay = 0
    if curTime < self._lastHuAniEndTime then
        addDelay = self._lastHuAniEndTime - curTime
    end

    NG.SysTool.performDelayOnce(function()
        self:dispatchEvent({ name = self.EVENT_ON_MSG_RESULT, data = msgData })
    end, addDelay)


    NG.SysTool.performDelayOnce(function()
        if NG and NG.goldGame then
            NG.goldGame:showWinlost(true)
            self:getGameData():setGameStart(false)
        end
    end, 2 + addDelay)
end

--设置圈风
function GameModule:setQuanFeng()
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SET_QUANFENG })
end

function GameModule:showPlayBackOnlinePower(msgPower)
    -- if msgPower.nSeat == NG.GAME.roomTableData:getSelfSeat() then 
    --     return
    -- end
    -- if not NG.GAME.roomTableData:isPlayBack() then
    --     return
    -- end
    -- local tPower = {}
    -- local powerByte = bit:d2b(msgPower.nPower)

    -- for i = 57,64 do
    --     local tmpPower = NG.GAME.GameDefine.POWER.NONE
    --     if powerByte[i] == 1 then
    --         if i == 64 then
    --             tmpPower = NG.GAME.GameDefine.POWER.CANCEL
    --         elseif i == 63 then
    --             tmpPower = NG.GAME.GameDefine.POWER.PLAY
    --         elseif i == 62 then
    --             tmpPower = NG.GAME.GameDefine.POWER.CHOW
    --         elseif i == 61 then
    --             tmpPower = NG.GAME.GameDefine.POWER.PUNG
    --         elseif i == 60 then
    --             tmpPower = NG.GAME.GameDefine.POWER.HU
    --         elseif i == 59 then
    --             tmpPower = NG.GAME.GameDefine.POWER.MKONG
    --         elseif i == 58 then
    --             tmpPower = NG.GAME.GameDefine.POWER.CKONG
    --         elseif i == 57 then
    --             tmpPower = NG.GAME.GameDefine.POWER.TKONG
    --         end
    --         local tempID = NG.GAME.GameDefine.POWER_TO_ACTION[tmpPower]
    --         if tempID then
    --             tPower[tempID] = tempID
    --         end
    --     end
    -- end
    -- local localSeat = NG.GAME.roomTableData:seatToLocal(msgPower.nSeat)
    -- local convertID = {}
    -- for key, _ in pairs(tPower) do
    --     convertID[#convertID + 1] = key
    -- end
    -- table.sort(convertID)
    -- -- 将权限通知麻将层
    -- if #convertID ~= 0 then
    --     self:dispatchOthersAction(localSeat, true, convertID)
    -- end
end

function GameModule:dealPlayBackOtherAction(specificSeat)
    -- if not NG.GAME.roomTableData:isPlayBack() then
    --     return
    -- end
    -- if specificSeat then
    --     self:dispatchOthersAction(NG.GAME.roomTableData:seatToLocal(specificSeat), false, {})
    -- else
    --     for localSeat = 1, NG.GAME.roomTableData:getMaxPlayer() do
    --         self:dispatchOthersAction(localSeat, false, {})
    --     end
    -- end
end

function GameModule:dispatchOthersAction(localSeat, bShow, actionTypes)
    local data = {}
    data.localSeat = localSeat
    data.isShow = bShow
    data.actionTypes = actionTypes
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OTHERS_ACTION, data = data })
end

function GameModule:clearTingUI()
    local runningScene = display.getRunningScene()
    if runningScene and runningScene:getChildByName("CanHuMahsUI") then
        runningScene:getChildByName("CanHuMahsUI"):removeSelf()
    end
end

-- 杠分信息
function GameModule:onMsgGuaFeng(msgData)
    -- if msgData.bRelink == false then
    self:dispatchEvent({ name = self.EVENT_SHOW_KUNG_SCORE_ANI, msg = msgData })
    -- end
    -- self:dispatchEvent( { name = self.EVENT_SET_SCORE , msg = msgData.iTotalScore})
end

function GameModule:onMsgRespTingFan(msgData)
    local seat = NG.GAME.roomTableData:getSelfSeat()
    local data = {}
    -- if msgData.bUniversalHu then
    --     table.insert(data, { huMahID = 255, huFan = 0, huCnt = 0 })
    -- else
    for j = 1, msgData.sTingSize do
        table.insert(data, { huMahID = msgData.nTingMah[j], huFan = msgData.sTingMahFan[j], huCnt = msgData.sTingMahCount[j] })
    end
    -- end
    self:getGameData():updateCanHuMahsData(seat, msgData.nMah, data)
    if msgData.nMah == 0 then
        self:getGameData():setLastTingData(data)
    end

    self:dispatchEvent({ name = self.EVENT_FLUSH_CAN_HU_MAH_DATA, msg = msgData })
end


function GameModule:onMsgRecordResp(msg)
    self:dispatchEvent({ name = self.EVENT_GAME_MSG_RECORD, data = msg })
end

function GameModule:onMsgTrust(msgData)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msgData.nSeat)
    local isTrust = msgData.nFlag == 1
    self:getGameData():setTrustByLocalSeat(localSeat, isTrust)
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT and isTrust then
        NG.GAME.gameRequire("Modules.GameMain.TrustLayer").new():showSelf()
    end
    self:dispatchEvent({ name = self.EVENT_PLAYER_TRUST, msg = { localSeat = localSeat } })
end

function GameModule:huanPaiSelfEnd()
    self:dispatchEvent({ name = self.EVENT_HUAN_PAI_SELF_END })
end


function GameModule:huanPaiEnd()
    self:dispatchEvent({ name = self.EVENT_HUAN_PAI_END })
end
return GameModule