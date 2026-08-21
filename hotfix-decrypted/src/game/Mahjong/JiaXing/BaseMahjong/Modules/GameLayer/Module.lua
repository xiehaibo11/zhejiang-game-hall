local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")
local MaiZi = CF.gameRequire("Modules.GameLayer.MaiZi")
local ChengBaoAsk = CF.gameRequire("Modules.GameLayer.ChengBaoAsk")

GameModule.EVENT_UPDATE_TOUZI = "EVENT_UPDATE_TOUZI"
GameModule.EVENT_HIDE_MAIZI_WINDOW = "EVENT_HIDE_MAIZI_WINDOW"
GameModule.EVENT_SHOW_MAIZI_ICON = "EVENT_SHOW_MAIZI_ICON"
GameModule.EVENT_HIDE_MAIZI = "EVENT_HIDE_MAIZI"

GameModule.EVENT_HIDE_JX_INFO  = "EVENT_HIDE_JX_INFO"

GameModule.CLOSE_CHENGBAO_WINDOW = "CLOSE_CHENGBAO_WINDOW"
GameModule.SHOW_CHENGBAO_ICON = "SHOW_CHENGBAO_ICON"
GameModule.HIDE_CHENGBAO_ICON = "HIDE_CHENGBAO_ICON"
GameModule.EVENT_SHOW_HUANGFAN = "EVENT_SHOW_HUANGFAN"
GameModule.EVENT_SHOW_SANTAN_HINT = "EVENT_SHOW_SANTAN_HINT"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgPlayerTimer),msgClass = CF.GameProtocol.msgPlayerTimer}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgWaitOtherAction),msgClass = CF.GameProtocol.msgWaitOtherAction}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgWaitActionPower),msgClass = CF.GameProtocol.msgWaitActionPower}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgObviousMahsData),msgClass = CF.GameProtocol.msgObviousMahsData}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShowStartBtn),msgClass = CF.GameProtocol.msgShowStartBtn}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgHuangFan),msgClass = CF.GameProtocol.msgHuangFan}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCheckSoVer),msgClass = CF.GameProtocol.msgCheckSoVer}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgQuanFengCnt),msgClass = CF.GameProtocol.msgQuanFengCnt}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTai),msgClass = CF.GameProtocol.msgTai}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgChengBaoAsk),msgClass = CF.GameProtocol.msgChengBaoAsk}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgDrawCnt),msgClass = CF.GameProtocol.msgDrawCnt}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgBuyScore),msgClass = CF.GameProtocol.msgBuyScore}
    return subXYDealList
end

function GameModule:getProxyEvents()
    local proxyEvents = GameModule.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.roomData, eventKeyName = "EVENT_GAME_PLAYCOUNT_CHANGED", callBack = "onPlayCountChanged" }
    return proxyEvents
end

function GameModule:initJXData()
    self:getGameData():clearMaxHuFanWuJiang()
    CF.game:getModule("BigWinLost"):clearTotalWinLost()
    self:getGameData():setChengBaoREJECT(false)
    self:hideChengBao()
    self:hideMaiZi()
    self:dispatchEvent( { name = self.EVENT_HIDE_JX_INFO , msg = {}})
end

function GameModule:hideChengBao()--隐藏承包信息
    self:dispatchEvent( { name = self.HIDE_CHENGBAO_ICON , msg = {}})
    local scene = display.getRunningScene()
    local node = scene:getChildByName(ChengBaoAsk.ObjName)
    if node then
        self:dispatchEvent( { name = self.CLOSE_CHENGBAO_WINDOW , msg = {}})
    end
end

function GameModule:getMaiZiView()
    local scene = display.getRunningScene()
    return scene:getChildByName(MaiZi.ObjName)
end

function GameModule:hideMaiZi()
    local node = self:getMaiZiView()
    if node then
        self:dispatchEvent( { name = self.EVENT_HIDE_MAIZI , msg = {}})
    end
end

--吴江买籽
function GameModule:onMsgBuyScore(msgData)
    if msgData.nFirst == 1 then
        if msgData.nSeat == CF.roomData:getSelfSeat() then
            local node = self:getMaiZiView()
            if not node then
                MaiZi.new():showSelf()
            end
        end
    else
        self:getGameData():setBuyScoreBySeat(msgData.nSeat, msgData.nBuyScore)
        self:dispatchEvent( { name = self.EVENT_SHOW_MAIZI_ICON , msg = {seat = msgData.nSeat, show = msgData.nBuyScore}})
        if msgData.nSeat == CF.roomData:getSelfSeat() then
            self:hideMaiZi()
        end
    end
end

--倒计时
function GameModule:onMsgPlayerTimer(msgData)
    local player = CF.roomData:getPlayerDataNumberID(msgData.nNumberID)
    if player then
        local obj = {}
        obj.nSeat = player:getSeat()
        obj.nTime = msgData.nSecond
        self:onMsgClock(obj)
    end
end

-- 重装游戏开始，隐藏玩家承包相关的信息
function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:initJXData()
end

-- 起手抓牌
function GameModule:onMsgTakeFirst(msgData)
    GameModule.super.onMsgTakeFirst(self, msgData)
    self:getGameData():setState(CF.GameDefine.MAH_STATE_TAKE_FIRST)
end

-- 牌权
function GameModule:onMsgPower(msgData)
    local seat = msgData.nSeat
    local power = msgData.nPower
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
        -- TODO 0721 出牌权限，预显示等数据清空
        self:getGameData():setPreviewMah(0)
        self:getGameData():setPlayPower(false)
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
                    self:getGameData():setLastPlayMah(CF.GameDefine.POWER.MV_NONE)
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
                    self:getGameData():setLastPlayMah(CF.GameDefine.POWER.MV_NONE)
                elseif i == 57 then
                    tmpPower = CF.GameDefine.POWER.TKONG
                    self:getGameData():setLastPlayMah(CF.GameDefine.POWER.MV_NONE)
                end

                --加了这段
                if self:getGameData():getChengBaoREJECT() then
                    if (tmpPower == CF.GameDefine.POWER.CHOW or tmpPower == CF.GameDefine.POWER.PUNG or 
                        tmpPower == CF.GameDefine.POWER.HU or tmpPower == CF.GameDefine.POWER.MKONG or tmpPower == CF.GameDefine.POWER.CKONG 
                        or tmpPower == CF.GameDefine.POWER.TKONG) then
                        -- change by Owen, 如果是三摊承包之后自己选择了不跟
                        -- 此时A玩家打了一张牌, 自己可以吃, B玩家可以碰然后选择了不碰
                        -- 此时因为自己不会显示“吃”和“弃”按钮, 就会导致所有玩家一直在等待自己行权
                        -- 所以自己收到权限的时候要主动的发一个“弃”的权限给服务器
                        CF.msgManager:sendCancel()
                        return
                    elseif tmpPower == CF.GameDefine.POWER.PLAY then
                        local mahID = self:getGameData():getHandDfData(seat)
                        local tmpMahs = clone(self:getGameData():getHandMahData(seat))
                        if mahID and mahID > 0 then
                            table.insert(tmpMahs, mahID)
                        end
                        self:getGameData():setLimitHandMahs(seat, tmpMahs)
                        CF.SysTool.performDelayOnce(function()
                            if self:getGameData():getPlayPower() then
                                self:showPlayPreOut(0, mahID)
                                self:getGameData():setPlayPower(false)
                                self:getGameData():setLimitHandMahs(seat, self:getGameData():getHandMahData(seat))
                            end
                        end, 1);
                        return
                    end
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
        -- 将权限通知麻将层
        if #convertID ~= 0 then
            data.isShow = true
            data.actionTypes = convertID
            self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
        end
        self:lightActionMahs(showActionColor)
    end
end

--扔骰子
function GameModule:onMsgThrowChip(msgData)
    GameModule.super.onMsgThrowChip(self,msgData)
    self:showTwoChips(msgData.nChips)
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    GameModule.super.onMsgAction(self, msgData)
    if msgData.tComb.nFlag == CF.GameDefine.COM_MAH_FLAG.CMF_CHOW then
        self:getGameData():setState(CF.GameDefine.MAH_STATE_CHOW)
    elseif msgData.tComb.nFlag == CF.GameDefine.COM_MAH_FLAG.CMF_PUNG then
        self:getGameData():setState(CF.GameDefine.MAH_STATE_PUNG)
    elseif msgData.tComb.nFlag == CF.GameDefine.COM_MAH_FLAG.CMF_MKONG then
        self:getGameData():setState(CF.GameDefine.MAH_STATE_MKONG)
    elseif msgData.tComb.nFlag == CF.GameDefine.COM_MAH_FLAG.CMF_CKONG then
        self:getGameData():setState(CF.GameDefine.MAH_STATE_CKONG)
    elseif msgData.tComb.nFlag == CF.GameDefine.COM_MAH_FLAG.CMF_TKONG then
        self:getGameData():setState(CF.GameDefine.MAH_STATE_TKONG)
    end
    if CF.roomData:isSupportSanTan() then
		local seat = msgData.nSeat
		self:onShowSanTanHint(seat,msgData.tComb.nFromSeat)
	end
end

--抓牌
function GameModule:onMsgTake(msgData)
    local seat = msgData.nSeat--基类
    local nMah = msgData.nMah --基类
     --加入单放进入手牌,返回插入是否成功
    self:getGameData():addDfDataIntoHandMah(seat, nMah)--基类

    local state = self:getGameData():getState()
    -- 牌墙数 -1 
    if (state == CF.GameDefine.MAH_STATE_TKONG or state == CF.GameDefine.MAH_STATE_MKONG or 
        state == CF.GameDefine.MAH_STATE_CKONG) and self:getGameData():getDrawCnt() > 0 then
            self:getGameData():setDrawCnt(self:getGameData():getDrawCnt() - 1)  -- 杠牌时抓牌从荒牌里抓
    else        
        self:getGameData():decreaseSurPlusCounts()--基类
    end

    local tingMahs = self:getGameData():getTingMahs(seat)--基类
    self:getGameData():setTingMahs(seat, tingMahs)--基类
    
    --承三包 自动出牌
    self:getGameData():setState(CF.GameDefine.MAH_STATE_TAKE)
    if seat == CF.roomData:getSelfSeat() then
        if self:getGameData():getChengBaoREJECT() then
            local mahID = self:getGameData():getHandDfData(seat)
            local tmpMahs = clone(self:getGameData():getHandMahData(seat))
            if mahID and mahID > 0 then
                table.insert(tmpMahs, mahID)
            end
            self:getGameData():setLimitHandMahs(seat, tmpMahs)
            CF.SysTool.performDelayOnce(function()
                self:getGameData():setLimitHandMahs(seat, self:getGameData():getHandMahData(seat))
            end, 1);
        end
    end
end

-- 出牌
function GameModule:onMsgPlay(msgData)
    GameModule.super.onMsgPlay(self, msgData)
    self:getGameData():setState(CF.GameDefine.MAH_STATE_PLAY)
end

-- 胡牌 单人胡
function GameModule:onMsgHu(msgData)
    GameModule.super.onMsgHu(self, msgData)
    self:getGameData():setHuActType(CF.GameDefine.HU_TYPE.TAKE_OTHER)
    local nState = self:getGameData():getState()
    if nState== CF.GameDefine.MAH_STATE_TKONG then         -- 抢杠
        self:getGameData():setHuActType(CF.GameDefine.HU_TYPE.ROB_KONG)
    elseif nState== CF.GameDefine.MAH_STATE_TAKE then      -- 自摸 
        self:getGameData():setHuActType(CF.GameDefine.HU_TYPE.TAKE_SELF)
    elseif nState== CF.GameDefine.MAH_STATE_PLAY then      -- 点炮
        self:getGameData():setHuActType(CF.GameDefine.HU_TYPE.TAKE_OTHER)
    end
    self:getGameData():setState(CF.GameDefine.MAH_STATE_MAHJONG)
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    self:getGameData():setFirstBanker(msgData.nFirstBanker)
    if CF.roomData:getTaiTouHuQuanShu() > 0 then
        local bankerLocal = CF.roomData:seatToLocal(msgData.nFirstBanker)
        CF.SysTool.performDelayOnce(function()
            self:showTouZhuangBanker(bankerLocal)
        end, 3);
    end
end

-- 每轮数据
function GameModule:onMsgTurnData(msgData)
    GameModule.super.onMsgTurnData(self, msgData)
    if msgData.nStates and #msgData.nStates > 0 then
        self:getGameData():setState(msgData.nStates[1])
    end
end

function GameModule:onMsgOpenWall(msgData)
    local jokers = {msgData.nMah}
    self:getGameData():setOpenData(jokers)
end

function GameModule:onMsgJoker(msgData)
    GameModule.super.onMsgJoker(self, msgData)
    self:getGameData():setOpenData(msgData.nJokers)
end

function GameModule:onMsgShowStartBtn(msgData)
    --什么都不做
end

function GameModule:onMsgCheckSoVer(msgData)
    --什么都不做
end

function GameModule:onMsgTai(msgData)
    --什么都不做
end

--承包询问
function GameModule:onMsgChengBaoAsk(msgData)
    local chengbaoInfo = msgData.ChengBaoInfo
    local InfoNum = #chengbaoInfo
    if InfoNum~=4 and (self:getGameData():getCurQuanShu() > 0 or CF.roomData:getFollowSanTan()) then 
        return 
    end
    local name_CB=""      --承包人名字
    local seat_CB={}     --承包人本地座位号 
    local name_FCB=""      --反承包人名字
    local seat_FCB={}      --反承包人本地座位号 
    local seat_ACCEPT={}      --同意跟随承包的人的本地座位号 
    local seat_REJECT={}      --拒绝跟随承包的人的本地座位号 
    local seat_WAIT_RSP={}    --等待决定是否承包的人的本地座位号

    
    for _,v in pairs(chengbaoInfo) do
        if v.cbType==1 then
            local playerData =CF.roomData:getPlayerDataBySeatId(v.nSeat)
            name_CB=playerData:getNickName()
            table.insert(seat_CB, CF.roomData:seatToLocal(v.nSeat))
        elseif v.cbType==2 then
            local playerData = CF.roomData:getPlayerDataBySeatId(v.nSeat)
            name_FCB=playerData:getNickName()
            table.insert(seat_FCB, CF.roomData:seatToLocal(v.nSeat))
        elseif v.cbType==3 then
            table.insert(seat_WAIT_RSP, CF.roomData:seatToLocal(v.nSeat))
        elseif v.cbType==4 then
            table.insert(seat_ACCEPT, CF.roomData:seatToLocal(v.nSeat))
        elseif v.cbType==5 then
            table.insert(seat_REJECT, CF.roomData:seatToLocal(v.nSeat))
        else
            return
        end
    end
    
    local myseat = CF.roomData:getSelfSeat()
    if next(seat_WAIT_RSP) == nil then
        self:dispatchEvent( { name = self.CLOSE_CHENGBAO_WINDOW , msg = {}})
        for _,v in pairs(seat_CB) do
            self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat= CF.roomData:localToSeat(v), cb= CF.GameDefine.ChengBao.CHENGBAO}})
        end
        for _,v in pairs(seat_FCB) do
            self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat= CF.roomData:localToSeat(v), cb= CF.GameDefine.ChengBao.CHENGBAO}})
        end

        if self:getGameData():getCurQuanShu() > 0 or CF.roomData:getFollowSanTan() then
            for _,v in pairs(seat_ACCEPT) do
                self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat= CF.roomData:localToSeat(v), cb= CF.GameDefine.ChengBao.GEN}})
            end
            for _,v in pairs(seat_REJECT) do
                self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat= CF.roomData:localToSeat(v), cb= CF.GameDefine.ChengBao.BUGEN}})
            end
            local isREJECT = false
            for _,v in pairs(seat_REJECT) do
                if CF.roomData:localToSeat(v)==myseat then
                    isREJECT = true
                end
            end
            self:getGameData():setChengBaoREJECT(isREJECT)
            if isREJECT then
                local mahID = self:getGameData():getHandDfData(myseat)
                local tmpMahs = clone(self:getGameData():getHandMahData(myseat))
                if mahID and mahID > 0 then
                    table.insert(tmpMahs, mahID)
                end
                self:getGameData():setLimitHandMahs(myseat, tmpMahs)
                if self:getGameData():getPlayPower() then
                    CF.utils.performWithDelayGlobal(function()
                        self:showPlayPreOut(0, mahID)
                        self:getGameData():setPlayPower(false)
                        self:getGameData():setLimitHandMahs(myseat, self:getGameData():getHandMahData(myseat))
                    end, 1)
                end
            end
        end
    else
        --展示询问窗口
        local isWaiting =false
        for _,v in pairs(seat_WAIT_RSP) do
            if CF.roomData:localToSeat(v) == myseat then
                ChengBaoAsk.new({name_CB, name_FCB, msgData.remainingTime, false}):showSelf()
                isWaiting =true
                break
            end
        end
        if not isWaiting then
            ChengBaoAsk.new({name_CB, name_FCB, msgData.remainingTime, true}):showSelf()
        end
    end
end

function GameModule:onMsgDrawCnt(msgData)--慌牌数量
    self:getGameData():setDrawCnt(msgData.nDrawCnt)
end

--黄番  
function GameModule:onMsgHuangFan(msgData)
    self:getGameData():setHuangFan(msgData.isHuangFan, msgData.huangFanCnt)
    self:showHuangFanJiaXing()
end

function GameModule:onPlayCountChanged(event)
    self:showHuangFanJiaXing()
end

function GameModule:showHuangFanJiaXing()
    local value = CF.roomData:getIsOpenHuangFan() and CF.roomData:getIsGameStart()
    self:dispatchEvent( { name = self.EVENT_SHOW_HUANGFAN , msg = {isShow = value}})
end

function GameModule:showHint(str)
end

--等待其他人操作的，（ps：出现在下家可以吃，并且其他家可以碰的情况，下家点击吃，不会吃掉）
function GameModule:onMsgWaitOtherAction(msgData)
    local strTips = "等待其他玩家操作..."
    self:showHint(strTips)
end

--某玩家出现吃碰杠权限时，下发
function GameModule:onMsgWaitActionPower(msgData)
--不知道谁有碰的权限，隐藏时钟箭头，暂时不做
end

function GameModule:onMsgObviousMahsData(msgData)
--什么都不做
end

function GameModule:onMsgRoomNumEx(msgData)
end

function GameModule:showTouZhuangBanker(bankerLocal)--头庄 抬头胡才有这个功能
end

function GameModule:showTwoChips(_chips)--显示两颗骰子
    self:dispatchEvent( { name = self.EVENT_UPDATE_TOUZI , msg = {chips = _chips}})
end

function GameModule:showHint(str)
end

function GameModule:onMsgQuanFengCnt(msgData)
    self:getGameData():setCurQuanShu(msgData.curQuanShu)
    self:getGameData():setQuanFengNum(msgData.curQuanShu%4)
    self:showQuanFengInfo(msgData)
end

function GameModule:showQuanFengInfo(msgData)
end

---------------------------------------------------------
--@brief 分发三摊提示事件
--@param  seat： comb/手牌的座位
--@return
--by Ruzibeil
---------------------------------------------------------
function GameModule:onShowSanTanHint(seat,fromSeat)
	local playerMahCombs = self:getGameData():getAllCombMahData(seat)
	if playerMahCombs and next(playerMahCombs) then
		local tmpCombs = clone(playerMahCombs)
		local hintData = self:checkSanTanHintTrigger(seat,tmpCombs,fromSeat)
		if #hintData > 0 then
			local hintMsgTable = {}
			for _,subhintData in pairs(hintData) do
				local subMsg = {}
				subMsg.hintType = subhintData.hintType
				local player = CF.roomData:getPlayerDataBySeatId(subhintData.triggerSeat)
				if player then
					subMsg.nickName = player:getNickName()
				end
				table.insert(hintMsgTable,subMsg)
			end
			self:dispatchEvent( { name = self.EVENT_SHOW_SANTAN_HINT , msg = {hintmsg = hintMsgTable} })
		end
	end	
end
---------------------------------------------------------
--@brief 计算三摊信息，并对应是否提示
--@param  combData comb信息
--@return  对应seat提示消息
--by Ruzibeil
---------------------------------------------------------
function GameModule:checkSanTanHintTrigger(seat,playerMahCombs,fromSeat)
	local sanTanSelf = {} -- 吃碰杠三摊
    local sanTanOthers = {} --被吃碰杠三摊
    local newPlayerMahCombs = self:filterCorrectComb(playerMahCombs)
	for _,subComb in pairs(newPlayerMahCombs) do
		local nFromSeat = subComb.nFromSeat
		if seat == CF.roomData:getSelfSeat() and nFromSeat ~= CF.roomData:getSelfSeat() then
			sanTanSelf[nFromSeat] = sanTanSelf[nFromSeat] or 0
			sanTanSelf[nFromSeat] = sanTanSelf[nFromSeat] + 1
		end
		if nFromSeat == CF.roomData:getSelfSeat() and seat ~= CF.roomData:getSelfSeat() then
			sanTanOthers[seat] = sanTanOthers[seat] or 0
			sanTanOthers[seat] = sanTanOthers[seat] + 1
		end
    end
    
	local data = {}
	for i = 0 , CF.roomData:getChairs() do
		local selfStanCnt = sanTanSelf[i] or 0
		if selfStanCnt == 2 and fromSeat == i then
			local subData = {}
			subData.hintType = CF.GameDefine.SANTAN_HINT_ENUM.SELF_SANTAN
            subData.triggerSeat = i
			table.insert(data,subData)
		end
	end
	for i = 0 ,  CF.roomData:getChairs() do
		local otherStanCnt = sanTanOthers[i] or 0
		if otherStanCnt == 2 and CF.roomData:getSelfSeat() == fromSeat then
            local subData = {}
            subData.hintType = CF.GameDefine.SANTAN_HINT_ENUM.OTHER_SANTAN
            subData.triggerSeat = i
            table.insert(data,subData)
		end
	end
    return data
end

---------------------------------------------------------
--@brief 筛选出正确的comb。 --客户端碰完之后补杠会在comb中记录两次。
--@param  combData comb信息
--@return  返回正确的comb值
--by wanjun
---------------------------------------------------------
function GameModule:filterCorrectComb(comb)
    local combData = clone(comb)
    local deletList = {}
    for i = #combData, 1, -1 do
        for j = i - 1, 1, -1 do
            if combData[i].nMahs[1] == combData[j].nMahs[1] and combData[i].nFlag == 5 and combData[j].nFlag == 2 then
                table.insert(deletList, combData[j])
            end
        end
    end
    for i = #combData, 1, -1 do
        for j = 1, #deletList do
            if combData[i] == deletList[j] then
                table.remove(combData, i)
            end
        end
    end
    return combData
end

return GameModule   -_  