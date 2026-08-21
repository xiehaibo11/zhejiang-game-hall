local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_CLEAR_ALL_INFO = "EVENT_CLEAR_ALL_INFO"
GameModule.EVENT_MDD_STEP_END = "EVENT_MDD_STEP_END"
GameModule.EVENT_UPDATE_LAO_ZHUANG = "EVENT_UPDATE_LAO_ZHUANG"
GameModule.EVENT_UPDATE_MDD_BTN_STATE = "EVENT_UPDATE_MDD_BTN_STATE"
GameModule.EVENT_UPDATE_MDD_WAIT_STATE = "EVENT_UPDATE_MDD_WAIT_STATE"
GameModule.EVENT_UPDATE_CLOCK_EX = "EVENT_UPDATE_CLOCK_EX"
GameModule.EVENT_UPDATE_MDD_FLAG = "EVENT_UPDATE_MDD_FLAG"
GameModule.EVENT_FOLLOWMAH_SHOW_ANI = "EVENT_FOLLOWMAH_SHOW_ANI"
GameModule.EVENT_UPDATE_QUICK_UI = "EVENT_UPDATE_QUICK_UI"
GameModule.EVENT_ClOSE_QUICK_SCHEDULE = "EVENT_ClOSE_QUICK_SCHEDULE"
GameModule.EVENT_SHOW_QUICK_UI_LAYER = "EVENT_SHOW_QUICK_UI_LAYER"
GameModule.EVENT_CLEAR_QUICK_UI_LAYER = "EVENT_CLEAR_QUICK_UI_LAYER"


function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
    self._selfMddOperating = false
    self._skipNextChipEndWait = false
    self:clearAllTableInfo()
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgWillThreeBack), msgClass = CF.GameProtocol.msgWillThreeBack}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShowCKong), msgClass = CF.GameProtocol.msgShowCKong}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.msgFollowMah), msgClass = CF.GameProtocol.msgFollowMah}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgMDdi), msgClass = CF.GameProtocol.msgMDdi}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgMDDiShow), msgClass = CF.GameProtocol.msgMDDiShow}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgBaoTing), msgClass = CF.GameProtocol.msgSiLianBaoTing}

    --快速开始
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgRespAdvancedPlayInfo), msgClass = CF.GameProtocol.msgRespAdvancedPlayInfo}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgAdvancedPlayProgress), msgClass = CF.GameProtocol.msgAdvancedPlayProgress}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgAdvancedTableInfoRelink), msgClass = CF.GameProtocol.msgAdvancedTableInfoRelink}
    return subXYDealList
end

function GameModule:clearAllTableInfo()
    self:dispatchEvent( { name = self.EVENT_CLEAR_ALL_INFO })
end

-- 展示暗杠
function GameModule:onMsgShowCKong(msgData)
    
end

-- 游戏开始
function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)

    self:clearAllTableInfo()
    self._selfMddOperating = false
    self._skipNextChipEndWait = false
    CF.game:getModule("Player"):initReadyFlagUI()
    CF.gameRequire("Modules.GameLayer.MaiDingDiUI").new():showSelf()
end

function GameModule:isFlowOptimizeEnable()
    if CF.roomData and CF.roomData:isGoldRoom() then
        return false
    end
    return CF.configData and CF.configData.isFlowOptimizeEnable and CF.configData:isFlowOptimizeEnable()
end

-- 是否需要玩家操作买顶底（未选玩法/强制买顶底则不需要）
function GameModule:needMaiDingDiOperate()
    local rule = CF.roomData and CF.roomData._curGameRule or ""
    if rule == "" then
        return false
    end
    -- HaveMDDi='0'：无买/顶底；强制买顶底时服务端不下发操作询问，客户端按无操作处理加速
    if string.match(rule, "HaveMDDi='0'") then
        return false
    end
    return string.match(rule, "HaveMDDi='1'") ~= nil
end

-- 丢骰子：买顶底与第一次骰子并行；无买顶底时加速第一次骰子；第二次骰子可配置加速
function GameModule:onMsgThrowChip(msgData)
    if not self:isFlowOptimizeEnable() then
        return GameModule.super.onMsgThrowChip(self, msgData)
    end

    local chips = msgData.nChips
    local step = self:getGameData():getCurGameStep()
    local speedScale = 1
    local earlyEndWait = false

    if step == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_1 then
        if self:needMaiDingDiOperate() then
            -- 开局直接进入买顶底，同步播骰子（不阻塞流程）
            earlyEndWait = true
            speedScale = 1
        else
            speedScale = (CF.configData and CF.configData.getFirstChipAniSpeedScale and CF.configData:getFirstChipAniSpeedScale()) or 1
        end
    elseif step == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_2 then
        speedScale = (CF.configData and CF.configData.getSecondChipAniSpeedScale and CF.configData:getSecondChipAniSpeedScale()) or 1
    end

    self._skipNextChipEndWait = earlyEndWait
    if earlyEndWait then
        CF.msgManager:sendEndWait(step)
    end
    self:showChips(chips, speedScale)
end

-- 骰子动画结束：若已提前 EndWait，则不再重复发送。
-- 注意：时钟(onMsgClock)与动画结束都会回调本函数，标记需保持到下次丢骰子/开局重置，
-- 不可在首次回调或时钟里清掉，否则会向已推进的步骤重复 EndWait。
function GameModule:sendEventChipsAniFinish()
    if not self:isFlowOptimizeEnable() then
        return GameModule.super.sendEventChipsAniFinish(self)
    end
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS_FINISHED })
    if self._skipNextChipEndWait then
        return
    end
    CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
end

-- 去除第二次骰子到发牌的协议延迟
function GameModule:needDelay(xyid, protocol)
    if not self:isFlowOptimizeEnable() then
        return GameModule.super.needDelay(self, xyid, protocol)
    end
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true, 3.75, false
    end
    return false, 0, true
end

-- 游戏步骤
function GameModule:onMsgGameStep(msgData)
    GameModule.super.onMsgGameStep(self, msgData)
    local mddStepID = 101
    if msgData.nStepID ~= mddStepID and msgData.nStepID > CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_1 and
        msgData.nStepID < CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_END_GAME then
        self._selfMddOperating = false
        self:dispatchEvent( { name = self.EVENT_MDD_STEP_END })
    end
end

-- 盘数据
function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    local laoZhuangNum = msgData.nLaoZhuang
    self:getGameData():setLaoZhuangNum(laoZhuangNum)
    self:dispatchEvent( { name = self.EVENT_UPDATE_LAO_ZHUANG, msg = {value = laoZhuangNum}})
end

-- 买顶底（庄闲可同时询问，各自只处理自己的操作态）
function GameModule:onMsgMDdi(msgData)
    if not self:isFlowOptimizeEnable() then
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        if msgData.nType == CF.GameDefine.MDDType.MAIDI then
            if localSeat == CF.roomData:getSelfLocalSeat() then
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = true, nType = msgData.nType}})
            else
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = msgData.nType}})
            end
        elseif msgData.nType == CF.GameDefine.MDDType.DINGDI then
            self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = msgData.nTimer, show = true}})
            if localSeat == CF.roomData:getSelfLocalSeat() then
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = true, nType = msgData.nType}})
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = false}})
            end
        end
        return
    end

    local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
    if msgData.nType == CF.GameDefine.MDDType.MAIDI then
        if localSeat == CF.roomData:getSelfLocalSeat() then
            self._selfMddOperating = true
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = true, nType = msgData.nType}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = false}})
        elseif not self._selfMddOperating then
            -- 自己未在操作时才显示等待（避免与同时下发的顶底按钮冲突）
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = msgData.nType}})
        end
    elseif msgData.nType == CF.GameDefine.MDDType.DINGDI then
        self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = msgData.nTimer, show = true}})
        if localSeat == CF.roomData:getSelfLocalSeat() then
            self._selfMddOperating = true
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = true, nType = msgData.nType}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = false}})
        end
    end
end

-- 买顶底信息展示（每人操作完只刷新自己状态，全部完成后由服务端推进下一步）
function GameModule:onMsgMDDiShow(msgData)
    if not self:isFlowOptimizeEnable() then
        local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
        CF.game:getModule("WinLost"):setHaveDingDi(true)
        if msgData.nMDFlag == CF.GameDefine.MDDFlag.MAIDI then
            if self:getGameData():getBankerSeat() == CF.roomData:getSelfSeat() then
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = false}})
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = false}})
            end
            self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = CF.GameDefine.MDDType.DINGDI}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_FLAG , msg = {seat = msgData.nSeat, bShow = msgData.nScore ~= 0, nType = CF.GameDefine.MDDFlag.MAIDI}})
        elseif msgData.nMDFlag == CF.GameDefine.MDDFlag.DINGDI then
            if msgData.nSeat == CF.roomData:getSelfSeat() then
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = false}})
                self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = CF.GameDefine.MDDType.DINGDI}})
            end
            self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_FLAG , msg = {seat = msgData.nSeat, bShow = msgData.nScore ~= 0, nType = CF.GameDefine.MDDFlag.DINGDI}})
        end
        return
    end

    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    CF.game:getModule("WinLost"):setHaveDingDi(true)
    if msgData.nMDFlag == CF.GameDefine.MDDFlag.MAIDI then
        if msgData.nSeat == CF.roomData:getSelfSeat() then
            self._selfMddOperating = false
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = CF.GameDefine.MDDType.DINGDI}})
        end
        self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
        self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_FLAG , msg = {seat = msgData.nSeat, bShow = msgData.nScore ~= 0, nType = CF.GameDefine.MDDFlag.MAIDI}})
    elseif msgData.nMDFlag == CF.GameDefine.MDDFlag.DINGDI then
        if msgData.nSeat == CF.roomData:getSelfSeat() then
            self._selfMddOperating = false
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = CF.GameDefine.MDDType.DINGDI}})
        end
        self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
        self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_FLAG , msg = {seat = msgData.nSeat, bShow = msgData.nScore ~= 0, nType = CF.GameDefine.MDDFlag.DINGDI}})
    end
end

-- 跟风的玩家座位
function GameModule:msgFollowMah(msgData)
    self:dispatchEvent( { name = self.EVENT_FOLLOWMAH_SHOW_ANI })
end

-- 即将三背的玩家座位
function GameModule:onMsgWillThreeBack(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("注意三背！")
    end
end

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.TKONG then
        return true
    end
    return false
end

function GameModule:onMsgRespAdvancedPlayInfo(msgData)
    local msg = {isShowMore = true,time = msgData.leftTime,nPlayerCnt = msgData.nPlayerCnt,nFirstLaunchSeat = msgData.nFirstLaunchSeat}
    self:dispatchEvent({name = self.EVENT_SHOW_QUICK_UI_LAYER, msg = msg})
    self:dispatchEvent( { name = self.EVENT_UPDATE_QUICK_UI , msg = {status = msgData.state}})
end

function GameModule:onMsgAdvancedPlayProgress(msgData)
    --提前开桌的状态定义
    local ADVANCED_STATE_TYPE = {
        ADVANCED_STATE_NULL = 0, -- 初始状态
        ADVANCED_STATE_WAIT = 1,--达到提前开局条件
        ADVANCED_STATE_START = 2,--提前开局进行中
        ADVANCED_STATE_FAIL = 3,--提前开局失败
        ADVANCED_STATE_OVER = 4,--提前开局结束
    }

    --提前开桌的结果
    local ADVANCED_RESULT_TYPE =
    {
        ADVANCED_RESULT_NULL = 0, --初始化
        ADVANCED_RESULT_PLAYER_ENTER = 1, --有玩家进入终止
        ADVANCED_RESULT_PLAYER_LEAVE = 2, --有玩家离开终止
        ADVANCED_RESULT_REFUSE_FAIL = 3, --有玩家拒绝失败
        ADVANCED_RESULT_TIME_OUT = 4,
        ADVANCED_RESULT_SUCCESS = 5,
    }
    --达到提前开局的条件
    if msgData.nProgressState ~= ADVANCED_STATE_TYPE.ADVANCED_STATE_START then
        self:clearQuickStartUI()
    end
    if msgData.nProgressState == ADVANCED_STATE_TYPE.ADVANCED_STATE_WAIT then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = true,playerCount = msgData.nFinalPlayerCount})
    else
        if msgData.nFlag == ADVANCED_RESULT_TYPE.ADVANCED_RESULT_REFUSE_FAIL then
            local refuseName = ""
            local players = CF.roomData:getPlayerDataBySeatId(msgData.nRefuseSeat)
            if players then
                refuseName = players:getNickName()
            end
            if msgData.nRefuseSeat ~= CF.roomData:getSelfSeat() then
                CF.TipTool.showToast("玩家" .. refuseName .. "拒绝了"..msgData.nFinalPlayerCount.."人开局请求!", 2)
            end
        elseif msgData.nFlag == ADVANCED_RESULT_TYPE.ADVANCED_RESULT_SUCCESS then
            local ruleTips = msgData.isNeedChangRuleAuto and ",自动" or ""
            local RuleConfig = CF.gameRequire("Config.RuleConfig")
            local diffRule = RuleConfig.getGameQuickRuleChange(msgData.strGameRuleDiff)
            local playerData = CF.roomData:getSelfPlayerData()
            if playerData ~= nil then 
                for curSeat, originSeat in pairs(msgData.nAdjustSeatMap) do
                    if originSeat == playerData._nSeat then
                        playerData._nSeat = curSeat
                    end
                end
            end
            CF.TipTool.showToast("发起"..msgData.nFinalPlayerCount.."人游戏成功" .. ruleTips .. diffRule, 2)
            CF.roomData:setChairs(msgData.nFinalPlayerCount)
            --回放playData消息记录有问题，目前暂时这么处理
            if CF.roomData:isPlayBack() then
                for index = 0, msgData.nFinalPlayerCount - 1 do
                    CF.roomData:playerListChangedBySeatId(index)
                end
            end
            self:dispatchEvent( { name = self.EVENT_ClOSE_QUICK_SCHEDULE , msg = {}})
        else
            if msgData.nFlag == ADVANCED_RESULT_TYPE.ADVANCED_RESULT_NULL then
                CF.game:getModule("CenterBtns"):showQuickButton({isShow = false,playerCount = msgData.nFinalPlayerCount})
                return
            end
            if msgData.nFlag == ADVANCED_RESULT_TYPE.ADVANCED_RESULT_PLAYER_ENTER then
                CF.TipTool.showToast("有新玩家进入，提前开局取消", 2)
            elseif msgData.nFlag == ADVANCED_RESULT_TYPE.ADVANCED_RESULT_PLAYER_LEAVE then
                CF.TipTool.showToast("当前桌有玩家离开，提前开局取消", 2)
            elseif msgData.nFlag == ADVANCED_RESULT_TYPE.ADVANCED_RESULT_TIME_OUT then
                CF.TipTool.showToast("开局请求等待超时，提前开局取消", 2)
            end
        end
    end
end

function GameModule:onMsgAdvancedTableInfoRelink(msgData)
    CF.roomData:setChairs(msgData.nFinalPlayerCount)
end

function GameModule:hideQuickStartUI()
    self:dispatchEvent( { name = self.EVENT_UPDATE_QUICK_UI , msg = {isRemove = true}})
end

function GameModule:clearQuickStartUI()
    self:hideQuickStartUI()
    self:dispatchEvent( { name = self.EVENT_CLEAR_QUICK_UI_LAYER })
end

function GameModule:onMsgBaoTing(msgData)
    CF.TipTool.showToast("庄家已上听")
    CF.roomData:setTingFlag(msgData.sSeat, true)
end

return GameModule