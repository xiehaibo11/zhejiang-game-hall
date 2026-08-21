local GameModule = CF.gameClass("GameModule", CF.ModuleBase)
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
local DEBUG = require("app.Config.GlobalConfig").IsDebug

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

-- 洗牌4.0 start --
-- 抓牌
GameModule.EVENT_SHUFFLE_TIP_TAKE = "EVENT_SHUFFLE_TIP_TAKE" 
-- 洗牌4.0 end   --

GameModule.EVENT_RETURN_PROP = "EVENT_RETURN_PROP"

GameModule.ClockWindSeatType = 
{
    rotateByBanker = 1,
    noWind = 2,
    other = 3,
}

function GameModule:ctor()
    GameModule.super.ctor(self)
    self:initDatas()
    self:startProtocolDelaySchedule()
    self._enterGameViewTime = os.time()
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
        {module = CF.settingData, eventKeyName = "EVENT_HAVE_TING", callBack = "onHaveTingChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_PLAYER_START", callBack = "onPlayerStart"},
        {module = CF.roomData, eventKeyName = "EVENT_MAH_BACK_CHANGED", callBack = "onMahBackChanged"},
        {module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged"},    
    }
end

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgStartGame),msgClass = CF.GameProtocol.msgStartGame},
        {callback = handler(self,self.onMsgEndGame),msgClass = CF.GameProtocol.msgEndGame},
        {callback = handler(self,self.onMsgPower),msgClass = CF.GameProtocol.msgPower},
        {callback = handler(self,self.onMsgGameStep),msgClass = CF.GameProtocol.msgGameStep},
        {callback = handler(self,self.onMsgClock),msgClass = CF.GameProtocol.msgClock},
        {callback = handler(self,self.onMsgEndWait),msgClass = CF.GameProtocol.msgEndWait},

        {callback = handler(self,self.onMsgWallMah),msgClass = CF.GameProtocol.msgWallMah},
        {callback = handler(self,self.onMsgOpenWall),msgClass = CF.GameProtocol.msgOpenWall},
        {callback = handler(self,self.onMsgThrowChip),msgClass = CF.GameProtocol.msgThrowChip},
        {callback = handler(self,self.onMsgTakeFirst),msgClass = CF.GameProtocol.msgTakeFirst},
        {callback = handler(self,self.onMsgPlayerMah),msgClass = CF.GameProtocol.msgPlayerMah},
        {callback = handler(self,self.onMsgPlayerBack),msgClass = CF.GameProtocol.msgPlayerBack},
        {callback = handler(self,self.onMsgJoker),msgClass = CF.GameProtocol.msgJoker},
        {callback = handler(self,self.onMsgReplace),msgClass = CF.GameProtocol.msgReplace},
        {callback = handler(self,self.onMsgTake),msgClass = CF.GameProtocol.msgTake},
        {callback = handler(self,self.onMsgPlay),msgClass = CF.GameProtocol.msgPlay},
        {callback = handler(self,self.onMsgHu),msgClass = CF.GameProtocol.msgHu},
        {callback = handler(self,self.onMsgHuEx),msgClass = CF.GameProtocol.msgHuEx},
        {callback = handler(self,self.onMsgAction),msgClass = CF.GameProtocol.msgAction},
        {callback = handler(self,self.onMsgPanData),msgClass = CF.GameProtocol.msgPanData},
        {callback = handler(self,self.onMsgTurnData),msgClass = CF.GameProtocol.msgTurnData},
        {callback = handler(self,self.onMsgFlower),msgClass = CF.GameProtocol.msgFlower},
        {callback = handler(self,self.onMsgOutMah),msgClass = CF.GameProtocol.msgOutMah},

        {callback = handler(self,self.onMsgEndResult),msgClass = CF.GameProtocol.msgEndResult},
        {callback = handler(self,self.onMsgTWait),msgClass = CF.GameProtocol.msgTWait},
        {callback = handler(self,self.onMsgJustWaiting),msgClass = CF.GameProtocol.msgJustWaiting},
        {callback = handler(self,self.onMsgWaiting),msgClass = CF.GameProtocol.msgWaiting},
        {callback = handler(self,self.onMsgPlayLmts),msgClass = CF.GameProtocol.msgPlayLmts},
        {callback = handler(self,self.onMsgObviousMahsData),msgClass = CF.GameProtocol.msgObviousMahsData},
        {callback = handler(self,self.onMsgOutMahRefresh),msgClass = CF.GameProtocol.msgOutMahRefresh},
        {callback = handler(self,self.onMsgAllOutMahRefresh),msgClass = CF.GameProtocol.msgAllOutMahRefresh},
        {callback = handler(self,self.onMsgBetResult),msgClass = CF.GameProtocol.msgBetResult},
        {callback = handler(self,self.onMsgTingMahInfo),msgClass = CF.GameProtocol.msgTingMahInfo},
        {callback = handler(self,self.onMsgAllThrowChip),msgClass = CF.GameProtocol.msgAllThrowChip},

        {callback = handler(self,self.onMsgSpecfReq),msgClass = CF.GameProtocol.msgSpecfReq},
        {callback = handler(self,self.onMsgSpecfData),msgClass = CF.GameProtocol.msgSpecfData},
        {callback = handler(self,self.onMsgSpecfPower),msgClass = CF.GameProtocol.msgSpecfPower},
        {callback = handler(self,self.onMsgSpecfHand),msgClass = CF.GameProtocol.msgSpecfHand},
        {callback = handler(self,self.onMsgSpecfEnd),msgClass = CF.GameProtocol.msgSpecfEnd},

        {callback = handler(self,self.onMsgClientForwardBase),msgClass = CF.GameProtocol.msgBaseClientForwardEx},
    }
end

function GameModule:getGameData()
    if not self._gameData then
        self._gameData = CF.gameRequire("Modules.GameLayer.GameData").new()
    end
    return self._gameData
end

function GameModule:getMahAlgorithm()
    if not self._mahAlgorithm then
        self._mahAlgorithm = CF.gameRequire("Modules.GameLayer.MahAlgorithm").new()
    end
    return self._mahAlgorithm
end

function GameModule:initEveryTime()
    self:getGameData():clearAllMahData()
    self:getGameData():initEveryTimesDatas()
    --清除牢庄几
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_LAOZHUANG })
    --清除圈风
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_QUANFENG })
end

function GameModule:clearAllMahData()
    self:getGameData():clearAllMahData()
end

function GameModule:onPlayerStart(event)
    if not event or not event.msg or not event.msg.seatID then
        return
    end
    -- 旁观视角准备时，不清除旁观玩家的UI
    if CF.roomData:getIsSeer() then
        return
    end
    if event.msg.seatID == CF.roomData:getSelfSeat() then
        self:getGameData():clearAllMahData()
        self:getGameData():initEveryTimesDatas()

        --清除牢庄几
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_LAOZHUANG })
        --清除圈风
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_QUANFENG })
        
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_ALL })
        -- 隐藏小结束
        self:dispatchEvent({name = self.EVENT_GAME_PLAYER_START})
    end
end

function GameModule:onMahBackChanged(event)
    local config = self:getMahAllConfig(nil, true)
    CF.settingData:dispatchMahjongCfg(config)
end

function GameModule:onMatchStateChanged()
    CF.roomData:clearTable()
    self:getGameData():clearAllMahData()
end

-- 游戏开始
function GameModule:onMsgStartGame(msgData)
    if CF.roomData:getIsSeer() then
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_CLEAR_ALL })
    end
    self:recordData()
    CF.roomData:clearTable()
	CF.game:getModule("Trust"):onGameStart()
	self:dispatchEvent( { name = self.EVENT_GAME_START_CHANGE})
    --游戏开始
    self:dispatchEvent( { name = self.EVENT_GAME_START})
    --关闭等待弹窗
    CF.TipTool.clearScrollTip()
    -- 初始化麻将数据
    CF.settingData:judgeSkinBundle()
    self:getGameData():clearAllMahData()
    self:getGameData():setLastTingData()
    self:getGameData():setCurPower(CF.GameDefine.POWER.NONE)
    --客户端数据initEveryTimes
    self:getGameData():initEveryTimesDatas()
    CF.game:getModule("WinLost"):onGameStart()
    CF.roomData:clonePlayerDatas()
    
    CF.soundManager:playSoundStart()
    -- 隐藏牌桌按钮
    CF.roomData:setIsGameStart(true)
    self:getGameData():setPreviewShow(false)
    if CF.roomData:isGoldRoom() then
        CF.getLobbyModule("H5GameWidget"):setGameData(CF.roomData:getRoomID(), CF.gameSub:getGameNameByGameId(CF.roomData:getGameID()),"对局","BMC001")
        CF.getLobbyModule("H5GameWidget"):addH5GameWidget("game_begin",CF.roomData._gameID)
    end
    -- 隐藏牌有列表入口
    if not CF.roomData:getIsSeer() then
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_LIST_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_MSG_ENTRANCE})
        CF.getLobbyModule("Im"):dispatchEvent({name = CF.getLobbyModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    end
    -- 隐藏比赛场在线列表
    local onlineModule = CF.teaHouseManager:getTeaHouseOnlineModule()
    if onlineModule then
        onlineModule:dispatchEvent({name = onlineModule.EVENT_HIDE_ONLINE_LIST})
    end
end

function GameModule:recordData()
    --数据统计
    local data = {}
    data.Page_name = "GameStart"
    data.Start_time = self._enterGameViewTime or 0
    data.End_time = os.time() 
    data.staytime = data.End_time - data.Start_time
    data.userid = CF.selfPlayerData:getNumberID()
    if CF.roomData:isGoldRoom() then
        CF.throwDataManager:throwData(CF.ThrowDataDefine.GoldGamesMatched,data)
    else
        CF.throwDataManager:throwData(CF.ThrowDataDefine.BOX_GAME_START_TIME,data)
    end
end

-- 游戏结束
function GameModule:onMsgEndGame(msgData)
    -- 隐藏吃碰杠的选项和多选的选项
    self:getGameData():setActionID(msgData.nActionID)
    self:getGameData():setCurPower(CF.GameDefine.POWER.NONE)
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

    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    self:performWithDelay(function()
        CF.roomData:setIsGameStart(false)
    end, winLostData:getDelayTime())

    --取消时钟音效
    self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK , msg = {seat = CF.roomData:getSelfLocalSeat(), time = 0}})

    --重置是否有小结束小值
    CF.roomData:setIsHaveResult(false)
end

function GameModule:analysePower(power)
    local tPower = {}
    local powerByte = bit:d2b(power)
    local showActionColor = false
    for i = 57, 64 do
        local tmpPower = CF.GameDefine.POWER.NONE
        if powerByte[i] == 1 then
            if i == 64 then
                tmpPower = CF.GameDefine.POWER.CANCEL
            elseif i == 63 then
                tmpPower = CF.GameDefine.POWER.PLAY
                -- 设置一个出牌权限
                self:getGameData():setPreviewShow(true)
                self:getGameData():setLastPlayMah(CF.GameDefine.MAH_VALUE.NONE)
                self:getGameData():setPlayPower(true)
            elseif i == 62 then
                tmpPower = CF.GameDefine.POWER.CHOW
            elseif i == 61 then
                tmpPower = CF.GameDefine.POWER.PUNG
                showActionColor = true
            elseif i == 60 then
                tmpPower = CF.GameDefine.POWER.HU
                -- 设置一个胡牌权限
            elseif i == 59 then
                tmpPower = CF.GameDefine.POWER.MKONG
                showActionColor = true
            elseif i == 58 then
                tmpPower = CF.GameDefine.POWER.CKONG
            elseif i == 57 then
                tmpPower = CF.GameDefine.POWER.TKONG
            end
            local tempID = CF.GameDefine.POWER_TO_ACTION[tmpPower]
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
    if not CF.roomData then
        return
    end
    local seat = msgData.nSeat
    if seat == CF.roomData:getSelfSeat() then
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
    local lastPlayMah = CF.GameDefine.MAH_VALUE.NONE
    if showActionColor then
        lastPlayMah = self:getGameData():getLastPlayMah()
    end
    self:getGameData():lightActionMahs(lastPlayMah)
end

-- 游戏步骤
function GameModule:onMsgGameStep(msgData)
    -- 保存一下游戏步骤
    self:getGameData():setCurGameStep(msgData.nStepID)
    CF.game:getModule("AddMultiple"):onUpdateStepID(msgData.nStepID)
end

-- 时钟
function GameModule:onMsgClock(msgData)
    local seat = msgData.nSeat
    local time = msgData.nTime

    local localSeat = CF.roomData:seatToLocal(seat)
    self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK , msg = {seat = localSeat, time = time, windType = self:getClockWindSeatType()}})
    		--显示时钟
	self:sendEventChipsAniFinish()
    XH.lobby:getModule("Sxvip.FriendInfo"):onOutStart(seat)
end

function GameModule:getClockWindSeatType()
    return self.ClockWindSeatType.rotateByBanker
end

-- 结束等待
function GameModule:onMsgEndWait()

end

-- 牌墙
function GameModule:onMsgWallMah(msgData)
    local wallMahCnt = msgData.nWallCnt

    -- 设置牌墙数
    self:getGameData():setSurPlusCounts(wallMahCnt, true)
    self:dispatchEvent( { name = self.EVENT_UPDATE_MAH_WALL , msg = msgData})
end

-- 开牌
function GameModule:onMsgOpenWall(msgData)
    local mah = msgData.nMah or {}

    self:getGameData():addOpenData(mah)
    self:dispatchEvent( { name = self.EVENT_OPEN_WALL_MAH , msg = msgData})
end

-- 丢骰子
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips

    -- 骰子动画，可能有队列动画
    self:showChips(chips)
end

-- 起手抓牌
function GameModule:onMsgTakeFirst(msgData)
    self:dispatchEvent({ name = self.EVENT_FIRST_TAKE_MAHS})
    CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
end

--用于小结束上的麻将子展示方式
function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.LKONG then
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

    local mahIDs = {}
    -- 胡牌的情况
    if handMahCount == 0 then
        for i = 1,msgData.nCombCount do
            if msgData.tCombs[i].nFlag <= CF.GameDefine.COMB_FLAG.NONE
                or msgData.tCombs[i].nFlag > CF.GameDefine.COMB_FLAG.TKONG then
                for j = 1,#msgData.tCombs[i].nMahs do
                    table.insert(mahIDs, msgData.tCombs[i].nMahs[j])
                end
            end
        end
        --熟客用dfMahs，温茶丽水用nHuMah
        
        local huMahID = msgData.nHuMah or 0
        if huMahID == 0 then
            huMahID = dfMahs or 0
        end
        if CF.roomData:getIsSeer() and huMahID == CF.GameDefine.MAH_VALUE.BACK then
            huMahID = 0
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
        for i = 1,combCount do
            if self:belongCombType(combs[i].nFlag) then
               table.insert(combIDs,combs[i])
            else
                for j = 1,#combs[i].nMahs do
                    table.insert(mahIDs,combs[i].nMahs[j])
                end
            end
        end
        local flowerData = self:getGameData():getFlowerMahData(seat)
        local data = {}
        data.handData = mahIDs or {}
        data.combData = combIDs or {}
        data.handDfData = 0
        data.flowerData = flowerData
        if CF.configData:huMahAloneShow() then
            for i = 1, #mahIDs do
                if mahIDs[i] == huMahID then
                    table.remove(mahIDs, i)
                    break
                end
            end
            data.handDfData = huMahID
        end
        if CF.configData:handNeedSort() then
            data.handData = self:sortHandMahs(clone(mahIDs))
        end
        local winLostData = CF.game:getModule("WinLost"):getWinLostData()
        winLostData:setMahData(seat, data)
    else

        if seat == CF.roomData:getSelfSeat() then
            -- 清空自家comb，为了重连不重复添加comb
            self:getGameData():clearCombMahData(seat)
        end
        for i = 1, combCount do
            -- 手牌数据增加combs
            local cloneCombData = clone(combs[i])
            cloneCombData = self:convertCombDataInGame(cloneCombData)
            if self:isScheduleFlushComb() then
                XH.SysTool.performDelayOnce(function()
                    if self then
                        self:getGameData():setCombMahData(seat, cloneCombData,false,true)
                    end
                end, 1 / 30)
            else
                self:getGameData():setCombMahData(seat, cloneCombData,false,true)
            end
        end
    end

    local danFang = nil
    if dfCount ~= 0 then
        danFang = CF.GameDefine.MAH_VALUE.BACK
        if dfMahs ~= 0 then
            danFang = dfMahs
        end
    end
    if not self:getGameData():getFirstHandData() then
        self:getGameData():setFirstHandData(true)
        self:getGameData():setHandMahData(seat, handMahs, danFang, true)
    else
        self:getGameData():setHandMahData(seat, handMahs, danFang, false)
    end
end

-- 是否延迟刷UI(目前解决绍兴3D重连时，comb UI刷新异常问题)
function GameModule:isScheduleFlushComb()
    return XH.areaData:getLobbyID() == XH.LOBBY_ID.SHAOXING3D and CF.settingData:getIsMahlayer3D()
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
            playerMah[#playerMah + 1] = CF.GameDefine.MAH_VALUE.BACK
        end
    else
        for i = 1, handCount do
            playerMah[#playerMah + 1] = mahs[i]
        end
    end

    local danFang = nil
    if dfCount ~= 0 then
        danFang = CF.GameDefine.MAH_VALUE.BACK
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
end

-- 财神
function GameModule:onMsgJoker(msgData)
    local insteads = msgData.nInstds
    local jokers = msgData.nJokers

    self:getGameData():setJokerData(jokers)
    self:getGameData():setInsteadMahData(insteads)

    for i = 0, CF.roomData:getChairs() - 1 do
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
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = "flower"
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
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

    self:dispatchEvent( { name = self.EVENT_TAKE_MAH_FROM_WALL, msg = {isFront = msgData.isFront}})

    local jokerData = self:getGameData():getJokerData()
    if seat == CF.roomData:getSelfSeat() then
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
        self:dispatchEvent({ name = self.EVENT_SHUFFLE_TIP_TAKE, msg = { isGameHasJoker = isGameHasJoker, isHandHasJoker = isHandHasJoker, isHandCurJoker = isHandCurJoker }})
    end 
end

--出牌动画
function GameModule:showOutMahAction(data)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_OUTMAH_ACTION, data = data })
end

-- 出牌
function GameModule:onMsgPlay(msgData)
    --飘财动画事件
    local seat = msgData.nSeat
    local mah = msgData.nMah

    self:getGameData():setLastPlayMah(mah)
    self:getGameData():setLastPlaySeat(seat)
    
    if self:getGameData():getPreviewMah() == 0 then
        local outMahs = {}
        table.insert(outMahs, mah)
        self:getGameData():addOutMahData(seat, outMahs)

        local localSeat = CF.roomData:seatToLocal(seat)
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

    if CF.configData:needShowGodOfWealthAni() then
        if not MahLogic.checkMahValueIsFlower(mah) then
            --过滤正财神
            local jokerData = self:getGameData():getJokerData()
            local tmpDic = {}
            for _, v in pairs(jokerData) do
                tmpDic[v] = true
            end
            if tmpDic[mah] then
                self:dispatchEvent( { name = self.EVENT_PLAY_CAISHEN, data = {seat = seat}})
            end
        end
    end

    -- 增加唱牌音效播放
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMah(mah, bMan , gameid)
    --听牌相关的逻辑处理
    if seat == CF.roomData:getSelfSeat() then
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
            CF.game:getModule("RightBtns"):showTingBtn()
        else
            CF.game:getModule("RightBtns"):hideTingBtn()
            self:getGameData():setLastTingData()
        end
        self:getGameData():clearTingMahs(seat)
        self:dispatchEvent( { name = self.EVENT_HIDE_CAN_HU_MAHS } )
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
    local localSeat = CF.roomData:seatToLocal(seat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setHuPower(false)
        --发生吃碰杠后，隐藏听牌按钮
        CF.game:getModule("RightBtns"):hideTingBtn()
        self:getGameData():setLastTingData()
        self:getGameData():clearTingMahs(seat)
        self:dispatchEvent( { name = self.EVENT_HIDE_CAN_HU_MAHS } )
        self:getGameData():clearCanHuMahsData(seat)
    end
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]

    -- 播放行牌动画
    local cloneCombData = clone(msgData.tComb)
    cloneCombData = self:convertCombDataInGame(cloneCombData)
    self:getGameData():setCombMahData(seat, cloneCombData, true)
    self:showMahAcitonAni(localSeat, msgData.tComb.nFlag)
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)

    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CHOW or convertFlag == CF.GameDefine.COMB_TYPE.PONG or convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
        local nMahs = msgData.tComb.nMahs
        local inMahs = msgData.tComb.nInMahs[1] 
        for i = 1,#nMahs do
            if nMahs[i] == inMahs then
                table.remove(nMahs, i) 
                break
            end
        end
        local source
        if convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
            source = "exposed_kong"
        else
            source = "chow"
        end
        self:getGameData():deleteHandMahData(seat, nMahs, source)
        self:getGameData():deleteLastOutMahData(msgData.tComb.nFromSeat)
    end

    -- 如果是暗杠或者补杠，如果手牌中有单放，整理一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        local nMahs = msgData.tComb.nMahs
        self:getGameData():deleteHandMahData(seat, nMahs, "concealed_kong")
    end
    if convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG then
        local inMahs = msgData.tComb.nInMahs[1] 
        self:getGameData():deleteHandMahData(seat, {inMahs}, "fill_kong")
    end
    self:dealPlayBackOtherAction()
end

--设置牢庄几
function GameModule:setLaoZhuang()
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_LAOZHUANG })
end

function GameModule:onMsgPanData(msgData)
    -- local banker = msgData.nBanker
    local laoZhuang = msgData.nLaoZhuang
    -- local baseScore = msgData.nBaseScore

    -- 设置庄
    self:getGameData():setBankerSeat(msgData.nBanker)
    --设置牢庄
    self:getGameData():setLaoZhuangNum(laoZhuang)
    self:setLaoZhuang()
    if self:getClockWindSeatType() == self.ClockWindSeatType.rotateByBanker then
        self:rotateWindPos(msgData)
    end

    --金币场更新底分
    if CF.ROOM_MODE.BOXROOM ~= CF.roomData:getRoomMode() then
        CF.roomData:setBaseScore(msgData.nBaseScore)
    end
end

function GameModule:rotateWindPos(data)
    local bankerLocalSeat = CF.roomData:seatToLocal(data.nBanker)
    local windCount = 4
    local windDirection = (windCount - bankerLocalSeat - 1) * 90
    self:dispatchEvent( { name = self.EVENT_ROTATE_WIND_POS , msg = windDirection})
end

-- 每轮数据
function GameModule:onMsgTurnData(msgData)
    self:getGameData():setLastPlayMah(msgData.nJustPlayed)
    self:getGameData():setLastPlaySeat(msgData.nJustSeat)
    --判断所有人手牌是否3N2
    local b3N2 = false
    for i = 0, CF.roomData:getChairs() - 1 do
        local handMahCounts = 0
        local handMah = self:getGameData():getHandMahData(i)
        local dfMah = self:getGameData():getHandDfData(i)
        if handMah then
           handMahCounts = handMahCounts +  #handMah
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
       --出牌瞬间断线重连时，msgOutMah的全量快照里可能已经包含这张"刚出的牌"，
       --若出牌区末张已经是该牌，则不再重复补入，避免桌面多出一张。
       local outMah1, outMah2 = self:getGameData():getOutMahData(msgData.nJustSeat)
       local justSeatOutMahs = self:getGameData():isFourDirectionOutMah() and outMah1 or outMah2
       justSeatOutMahs = justSeatOutMahs or {}
       local lastOutMah = (#justSeatOutMahs > 0) and justSeatOutMahs[#justSeatOutMahs] or nil
       if lastOutMah ~= msgData.nJustPlayed then
           self:getGameData():addOutMahData(msgData.nJustSeat, {msgData.nJustPlayed})
       end
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
    -- 旁观玩家断线重连会下发2次这个协议，兼容处理
    if CF.roomData:getIsSeer() then
        local outMah1, outMah2 = self:getGameData():getOutMahData(seat)
        if (not self:getGameData():isFourDirectionOutMah() and #outMah2 > 0) or 
             (self:getGameData():isFourDirectionOutMah() and #outMah1 > 0) then
            return
        end
    end
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
    local betMahCount = msgData.betMahCount
    local betMahList = msgData.betMahList
    local betMahDirection = msgData.betMahWind
    local huCount = msgData.huCount
    local huDirection = msgData.huWind
    local allDirection = msgData.allWind

    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    for seat = 0, CF.roomData:getChairs() - 1 do
        winLostData:setSeatWind(seat, msgData.allWind[seat + 1] - 65)
        local count = 0
        local wind = msgData.allWind[seat+1]
        for var = 1, #msgData.betMahWind do
            if msgData.betMahWind[var] == wind then
                count = count + 1
            end
        end
        for var = 1, #msgData.huWind do
            if wind == msgData.huWind[var] then
                if count > 0 then
                    winLostData:setBuyMah(seat, count)
                end
                break
            end
        end
    end
    local buyCodeSpeed = CF.configData and CF.configData:getBuyCodeAniSpeedScale() or 1
    winLostData:setDelayTime(3 / (buyCodeSpeed > 0 and buyCodeSpeed or 1))
    if not CF.roomData:isGoldRoom() then
        winLostData:setBuyMahList(betMahList)
        local betMahDirectionNum = {}
        for i = 1, #betMahList do
            betMahDirectionNum[i] = (betMahDirection and betMahDirection[i] and (betMahDirection[i] - 65)) or 0
        end
        winLostData:setBuyMahDirection(betMahDirectionNum)
    end
    for seat = 0, CF.roomData:getChairs() - 1 do
        local wind = msgData.allWind[seat + 1]
        local isHu = false
        for var = 1, #msgData.huWind do
            if wind == msgData.huWind[var] then
                isHu = true
                break
            end
        end
        winLostData:setIsHuSeat(seat, isHu)
    end
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    CF.gameRequire("Modules.GameLayer.BuyCodeUI").new({
        betMahCount = betMahCount,
        betMahList = betMahList,
        betMahDirection = betMahDirection,
        huCount = huCount,
        huDirection = huDirection,
        allDirection = allDirection,
        playSpeed = buyCodeSpeed
    }):showSelf()
end

--听牌设置
function GameModule:onMsgTingMahInfo(msgData)
    
end

function GameModule:onMsgAllThrowChip(msgData)
    self:dispatchEvent( { name = self.EVENT_ALL_CHIPS, msg = {msgThrowChip = msgData, showAni = true}})
end

function GameModule:onMsgAnte(msgData)
    local YaZiEnum = {NONE = -1, ZERO = 0, ONE = 1, TWO = 2}
    local msg = {seat = msgData.seat, anteNum = msgData.anteNum, anteMinNum = msgData.anteMinNum}

    if msgData.anteNum == YaZiEnum.NONE then    
        if msgData.seat == CF.roomData:getSelfSeat() then 
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
    if not DEBUG or CF.roomData:getIsSeer() then
        return
    end
    self:updateSpecfMahData(msgData.nMahs, msgData.nCount)
    self:setShowSpecfMahLayer(true)
end

function GameModule:updateSpecfMahData(mahs, count)
    local data = {}
    data.mahs = mahs
    data.count = count
    self:dispatchEvent( { name = self.EVENT_UPDATE_SPECF_MAH, data = data })
end

function GameModule:setShowSpecfMahLayer(isShow)
    local data = {}
    data.isShow = isShow
    self:dispatchEvent( { name = self.EVENT_SPECF_MAHLAYER_ISSHOW, data = data })
end

function GameModule:onMsgSpecfPower(msgData)
    
end

function GameModule:onMsgSpecfHand(msgData)

end

function GameModule:onMsgSpecfEnd(msgData)

end

function GameModule:onServerToClientMessage(event)
    local sToClientData =  CF.GameMProtocol.ServerToClientMessage:new()
    sToClientData:bistream(event.msg.buff, event.msg.len)

    local subXYID = sToClientData.cmdid
    local subBuff = sToClientData.message
    local subLen = sToClientData.msglen

    local record = self._subXYDealList[subXYID]
    if record then
        local msgData = record.msgClass:new()
        msgData:bistream(subBuff, subLen)
        -- 洗牌协议缓存
        local propUseModule = CF.game:getModule("PropUse")
        local isNeedDelay = false 
        if propUseModule and propUseModule.needDelayCmd then
            isNeedDelay = propUseModule:needDelayCmd() or false
        end
        if (CF.GameProtocol.msgPlayCount and subXYID == CF.GameProtocol.msgPlayCount.XY_ID)
        or (CF.GameProtocol.msgCurPanShu and subXYID == CF.GameProtocol.msgCurPanShu.XY_ID)
        or (CF.GameProtocol.msgQuanCount and subXYID == CF.GameProtocol.msgQuanCount.XY_ID) then
            isNeedDelay = false
        end
        if isNeedDelay then
            propUseModule:delayCmd(self, self.doServerToClientMessage, record, msgData, subXYID)
        else
            self:doServerToClientMessage(record, msgData, subXYID)
        end
    end
end

function GameModule:doServerToClientMessage(record, msgData, subXYID)
    local isNeedDelay, delayTime, isIncludeSelf = self:needDelay(subXYID, msgData)
    if not CF.roomData or not CF.roomData:isInitTaleData() then
        return
    end
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
    if xyid == CF.GameProtocol.msgGameStep.XY_ID then
        if protocol.nStepID == CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_TAKE_FIRST then
            return true,1,true
        end
    elseif xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

function GameModule:addProtocolToDelayQueue(protocolDealFunc, protocol, delayTime, isIncludeSelf, subXYID)
    if CF.roomData:getIsFastPlay() then
        protocolDealFunc(protocol)
        return
    end
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
                    table.remove(self._delayProtocolQueue,1)
                    temp.protocolDealFunc(temp.protocol)
                end
            end
        end
    end, 0.01, false) 
end

--骰子动画
--@chips是一个{}
--@speedScale 动画加速倍数，默认1；音效仍按原时机播放
function GameModule:showChips(chips, speedScale)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_CHIPS, data = chips, speedScale = speedScale or 1 })
end

--吃碰杠胡动画
--@actionid是1.吃碰杠传MahjongEnum.COMB_TYPE的枚举值，2.胡牌传MahjongEnum.POWER_ID.HU
--@bZiMo:胡牌时是否为自摸
function GameModule:showMahAcitonAni(localSeat, actionID, bZiMo)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_ANIMATION, data = {localSeat = localSeat, actionID = actionID, bZiMo = bZiMo} })
end

--骰子动画播放完成转发事件
function GameModule:sendEventChipsAniFinish()
    --模拟协议延迟，延迟发牌
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS_FINISHED })
    CF.msgManager:sendEndWait(self:getGameData():getCurGameStep())
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
        local seat = CF.roomData:getSelfSeat()
        self:dealPlayPreOut(seat, mahIndex, mahValue)
        CF.msgManager:sendPlayMahs(mahValue, self:getGameData():getActionID())
    end
end

--处理预显示
function GameModule:dealPlayPreOut(seat, mahIndex, mahValue)
    if not mahIndex or not mahValue then
        return
    end
    self:getGameData():saveMahDataToTemp()
    self:getGameData():addOutMahData(seat, {mahValue})
    
    local localSeat = CF.roomData:seatToLocal(seat)
    local data = {}
    data.index = mahIndex
    data.localSeat = localSeat
    data.mahValue = mahValue

    self:showOutMahAction(data)
    
    --出牌错误时将出牌区刷新
    local ret = self:getGameData():deleteHandMahIndex(seat, mahIndex, mahValue)
    if not ret then
        self:getGameData():deleteOutMahData(seat, {mahValue})
    end
end

--出牌判断是否为花牌
--param 麻将牌ID
function GameModule:showPlayFlowerOut(mahID, mahIndex)
    --获取 开牌
    local openMahs = self:getGameData():getOpenData()
    local insteadMahs = self:getGameData():getInsteadMahData()
    local selfSeat = CF.roomData:getSelfSeat()
    if MahLogic.checkMahValueIsFlower(mahID) then
        CF.msgManager:sendReplace(mahID)    
        self:dealFlowerPlayPreOut(selfSeat, mahID, mahIndex)
        return true
    end
    local bFlowerJoker = false
    if openMahs then
        for i = 1,#openMahs do
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
                CF.msgManager:sendReplace(mahID)
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
    local config = CF.settingData:getDefaultData(customIndex, bSwitchKey)
    local mahBackData = CF.roomData:getMahBackData()
    config.mahBackPatternType = config.mahBackPatternType or {}
    if mahBackData then
        for _ , v in pairs(mahBackData) do
            if type(v)=="table" and v.state == 1 and v.type == "PB" then
                table.insertto(config.mahBackPatternType, v.url)
            end
        end
    end
    local changeCardModule = CF.game:getModule("ChangeCard")
    local isChanged = changeCardModule and changeCardModule:isChangeCardSuccess()
    if isChanged then
        config.mahBackColorType = CF.GameDefine.MAH_BACK_COLOR_TYPE.CHANGECARD
    end
    return config
end

function GameModule:doActionCancel()
    CF.msgManager:sendCancel(self:getGameData():getActionID())
    CF.msgManager:sendForwardOperatePass(tostring(CF.GameDefine.ACTION.PASS))
end

function GameModule:doActionChow()
    local jokerData = self:getGameData():getJokerData()
    local insteadData = self:getGameData():getInsteadMahData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()

    local tempHands = clone(handMahs)
    if not CF.configData:canChowPungKongJoker() then
        for i = #tempHands,1,-1 do
            for j = 1,#jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands,i)
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
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.CHOW
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
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
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
    end
end

function GameModule:doActionPong()
    local jokerData = self:getGameData():getJokerData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()

    local tempHands = clone(handMahs)
        if not CF.configData:canChowPungKongJoker() then
        for i = #tempHands,1,-1 do
            for j = 1,#jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands,i)
                    break
                end
            end
        end
    end

    local combs = self:getMahAlgorithm():findPong(tempHands, inMah)
    if #combs ~= 0 then
        local msgCombs = {}
        msgCombs.mahs = combs
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.PUNG
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    end
end

function GameModule:doActionKong()
    local jokerData = self:getGameData():getJokerData()
    local seat = CF.roomData:localToSeat(2)
    local handMahs = self:getGameData():getHandMahData(seat)
    local inMah = self:getGameData():getLastPlayMah()
    local danFang = self:getGameData():getHandDfData(seat)

    local tempHands = clone(handMahs)
        if not CF.configData:canChowPungKongJoker() then
        for i = #tempHands,1,-1 do
            for j = 1,#jokerData do
                if jokerData[j] == tempHands[i] then
                    table.remove(tempHands,i)
                    break
                end
            end
        end
    end

    local selfAllCombs = self:getGameData():getAllCombMahData(seat)
    local msgCombs = {}
    local combs = self:getMahAlgorithm():findExposedKong(tempHands, inMah)
    if #combs == 1 then
        msgCombs.mahs = combs[1]
        msgCombs.ins = {inMah}
        msgCombs.from = self:getGameData():getLastPlaySeat()
        msgCombs.flag = CF.GameDefine.COMB_FLAG.MKONG
        CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
    elseif #combs == 0 then
        local curPower = self:getGameData():getCurPower()
        --暗杠补杠可能有多种情况出现
        local tmpFlag = 0
        local tmpInMahs = {}
        local tmpFromSeat = CF.roomData:getMaxPlayer()
        local combsConcealedKong = self:getMahAlgorithm():findConcealedKong(tempHands, danFang)
        local bitCkong = CF.StringTool.bitAnd(curPower, CF.GameDefine.POWER.CKONG)
        if curPower ~= CF.GameDefine.POWER.NONE and bitCkong ~= CF.GameDefine.POWER.CKONG then
            combsConcealedKong = {}
        end
        for i = 1 , #combsConcealedKong do
            combs[#combs + 1] = combsConcealedKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.CKONG
            tmpFromSeat = CF.roomData:getSelfSeat()
            tmpInMahs = {}
        end
        if CF.configData:isGuoGangBuGang() then
            tempHands = {}
        end
        local combsFillKong = self:getMahAlgorithm():findFillKong(tempHands, danFang, selfAllCombs)
        local bitTkong = CF.StringTool.bitAnd(curPower, CF.GameDefine.POWER.TKONG)
        if curPower ~= CF.GameDefine.POWER.NONE and bitTkong ~= CF.GameDefine.POWER.TKONG then
            combsFillKong = {}
        end
        for i = 1 , #combsFillKong do
            combs[#combs + 1] = combsFillKong[i]
            tmpFlag = CF.GameDefine.COMB_FLAG.TKONG
            for j = 1, 3 do
                tmpInMahs[j] = combsFillKong[1][1]
            end
            
            for j = 1,#selfAllCombs do
                if selfAllCombs[j].nInMahs[1] == combsFillKong[1][1] then
                    tmpFromSeat = selfAllCombs[j].nFromSeat
                end
            end
        end
        local combsSize = #combs
        if combsSize == 1 then
            if combs[1][1] == CF.GameDefine.MAH_VALUE.BACK then
                for i = 1,#combs[1] do
                    combs[1][i] = combs[1][4]
                end
            end
            msgCombs.mahs = combs[1]
            msgCombs.ins = tmpInMahs
            msgCombs.from = tmpFromSeat
            msgCombs.flag = tmpFlag
            CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID())
        elseif combsSize > 1 then
            local data = {}
            data.isShow = true
            data.combs = combs
            self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
        end
    end
end

function GameModule:doActionHu()
    CF.msgManager:sendHu(self:getGameData():getActionID())
end

function GameModule:doActionTing()
    CF.msgManager:sendTing()
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
        local seat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.BOTTOM)
        self:getGameData():clearTingMahs(seat)
        self:getGameData():clearCanHuMahsData(seat)
        self:dispatchEvent( { name = self.EVENT_HIDE_CAN_HU_MAHS } )
    end
end

function GameModule:showChips3D(tChips, speedScale)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_CHIPS_3D, data = tChips, speedScale = speedScale or 1 } )
end

function GameModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.OPERATE_PASS then
        self:onMsgClientForwardOperatePass(msgData)
    end
end

function GameModule:onMsgClientForwardOperatePass(msgData)
    local actionType = msgData.strData
    if CF.GameDefine.ACTION.PASS == tonumber(actionType) and CF.roomData:isPlayBack()  then
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_OPERATE_PASS, localSeat = localSeat })
    end
end

--设置圈风
function GameModule:setQuanFeng()
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_QUANFENG })
end

function GameModule:showPlayBackOnlinePower(msgPower)
    if msgPower.nSeat == CF.roomData:getSelfSeat() then 
        return
    end
    if not CF.roomData:isPlayBack() then
        return
    end
    local tPower = {}
    local powerByte = bit:d2b(msgPower.nPower)

    for i = 57,64 do
        local tmpPower = CF.GameDefine.POWER.NONE
        if powerByte[i] == 1 then
            if i == 64 then
                tmpPower = CF.GameDefine.POWER.CANCEL
            elseif i == 63 then
                tmpPower = CF.GameDefine.POWER.PLAY
            elseif i == 62 then
                tmpPower = CF.GameDefine.POWER.CHOW
            elseif i == 61 then
                tmpPower = CF.GameDefine.POWER.PUNG
            elseif i == 60 then
                tmpPower = CF.GameDefine.POWER.HU
            elseif i == 59 then
                tmpPower = CF.GameDefine.POWER.MKONG
            elseif i == 58 then
                tmpPower = CF.GameDefine.POWER.CKONG
            elseif i == 57 then
                tmpPower = CF.GameDefine.POWER.TKONG
            end
            local tempID = CF.GameDefine.POWER_TO_ACTION[tmpPower]
            if tempID then
                tPower[tempID] = tempID
            end
        end
    end
    local localSeat = CF.roomData:seatToLocal(msgPower.nSeat)
    local convertID = {}
    for key, _ in pairs(tPower) do
        convertID[#convertID + 1] = key
    end
    table.sort(convertID)
    -- 将权限通知麻将层
    if #convertID ~= 0 then
        self:dispatchOthersAction(localSeat, true, convertID)
    end
end

function GameModule:dealPlayBackOtherAction(specificSeat)
    if not CF.roomData:isPlayBack() then
        return
    end
    if specificSeat then
        self:dispatchOthersAction(CF.roomData:seatToLocal(specificSeat), false, {})
    else
        for localSeat = 1, CF.roomData:getMaxPlayer() do
            self:dispatchOthersAction(localSeat, false, {})
        end
    end
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

function GameModule:clearAllPowerUI()
    local data = {}
    data.isShow = false
    data.actionTypes = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
    data = {}
    data.isShow = false
    data.combs = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION_COMBS, data = data })
end

return GameModule  .�  