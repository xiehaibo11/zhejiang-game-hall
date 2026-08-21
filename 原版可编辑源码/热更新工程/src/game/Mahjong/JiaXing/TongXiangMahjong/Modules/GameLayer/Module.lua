local GameModule = CF.gameClass("GameModule", "game.Mahjong.JiaXing.BaseMahjong.Modules.GameLayer.Module")

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgChengBao),msgClass = CF.GameProtocol.msgChengBao}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCaiPiao),msgClass = CF.GameProtocol.msgCaiPiao}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgTmpChowLmts),msgClass = CF.GameProtocol.msgTmpChowLmts}
    return subXYDealList
end

function GameModule:onMsgChengBao(msgData)
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=CF.roomData:localToSeat(msgData.nCBSeat), cb= CF.GameDefine.ChengBao.CHENGBAO}})
    self:dispatchEvent( { name = self.SHOW_CHENGBAO_ICON , msg = {seat=CF.roomData:localToSeat(msgData.nFCBSeat), cb= CF.GameDefine.ChengBao.CHENGBAO}})
end

function GameModule:onMsgThrowChip(msgData)
    GameModule.super.onMsgThrowChip(self, msgData)
    local nLaoZhuang = self:getGameData():getLaoZhuangNum()
    if CF.roomData:getIsOpenHuangFan() then
        local huangFanCnt = 0
        if nLaoZhuang > 0 then
            huangFanCnt = huangFanCnt + 1
        end
        local chip1 = msgData.nChips[1]
        local chip2 = msgData.nChips[2]
        if chip1 == chip2 then
            huangFanCnt = huangFanCnt + 1
        end
        if chip1 + chip2 >= 10 then
            huangFanCnt = huangFanCnt + 1
        end
        self:getGameData():setHuangFan(true, huangFanCnt)
        self:dispatchEvent( { name = self.EVENT_SHOW_HUANGFAN , msg = {isShow = true}})
    else
        self:getGameData():setHuangFan(false, 0)
    end
end

function GameModule:onMsgCaiPiao(msgData)
    if msgData.nSeat then
        self:dispatchEvent( { name = self.EVENT_PLAY_CAISHEN, data = {seat = msgData.nSeat}})
    end
end

function GameModule:onMsgTmpChowLmts(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    if localSeat ~= CF.roomData:getSelfLocalSeat() then
        return
    end
    self:getGameData():setTmpChowLmtMahs(msgData.nLmts)
    self:getGameData():setRealChowLmtMah(msgData.nRealLmts)
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

    local tmpCombs = self:getMahAlgorithm():findChow(tempHands, inMah, jokerData, insteadData)
    local combs = self:removeLmtChowCombs(tmpCombs)
    local combsSize = #combs
    if combsSize == 0 then
        CF.TipTool.showToast("无牌可吃")
        self:doActionCancel()
    elseif combsSize == 1 then
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

function GameModule:removeLmtChowCombs(combs)
	local tmpChowLmts = self:getGameData():getTmpChowLmtMahs()
    local realChowMah = self:getGameData():getRealChowLmtMah()
    local inMah = self:getGameData():getLastPlayMah()
	for _, v in pairs(tmpChowLmts) do
		if inMah == v then
			for i = #combs, 1, -1 do
				table.sort(combs[i])
				if inMah == combs[i][1] and inMah == realChowMah - 3 then
                    table.remove(combs, i)
                elseif inMah == combs[i][3] and inMah == realChowMah + 3 then
					table.remove(combs, i)
                end
			end
		end
    end
    return combs
end

return GameModule