local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_CHIPS = "EVENT_SHOW_CHIPS"
GameModule.EVENT_SHOW_ANTE = "EVENT_SHOW_ANTE"
GameModule.EVENT_UPDATE_PAO_FLAG = "EVENT_UPDATE_PAO_FLAG"
GameModule.EVENT_UPDATE_ZHUANG_FLAG = "EVENT_UPDATE_ZHUANG_FLAG"
GameModule.EVENT_SHOW_SANTAN_HINT = "EVENT_SHOW_SANTAN_HINT"
GameModule.EVENT_CLEAR_SANTAN_HINT = "EVENT_CLEAR_SANTAN_HINT"
GameModule.EVENT_GAME_START_CHANGE = "EVENT_GAME_START_CHANGE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgThrowChipRelink),msgClass = CF.GameProtocol.msgThrowChipRelink}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgEffect),msgClass = CF.GameProtocol.msgEffect}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFlagData),msgClass = CF.GameProtocol.msgFLag}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgCountScore),msgClass = CF.GameProtocol.msgCountScore}
    return subXYDealList
end

function GameModule:onMsgThrowChip(msgData)
    GameModule.super.onMsgThrowChip(self, msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS, msg = {msgThrowChip = msgData, showAni = false}})
end

function GameModule:onMsgThrowChipRelink(msgData)
    self:dispatchEvent( { name = self.EVENT_SHOW_CHIPS, msg = {msgThrowChip = msgData, showAni = true}})
end

function GameModule:onMsgEffect(msgData)
    --这条协议和基类冲突了，只作覆盖不处理
end

function GameModule:onMsgFlagData(msgData)
    if msgData.nFlag == 40 then
        if not self._bPlayBcak then
            self:dispatchEvent( { name = self.EVENT_SHOW_ANTE , msg = {show = true}})
        end
    elseif msgData.nFlag == 41 or msgData.nFlag == 42 then
        if msgData.nFlag == 42 then
            self:dispatchEvent( { name = self.EVENT_SHOW_ANTE , msg = {show = false}})
        end
        if msgData.nValue > 0 then
            self:dispatchEvent( { name = self.EVENT_UPDATE_PAO_FLAG , msg = {seat = msgData.nSeat, show = true, paoNum = msgData.nValue}})
        else
            self:dispatchEvent( { name = self.EVENT_UPDATE_PAO_FLAG , msg = {seat = msgData.nSeat, show = false}})
        end
    end
end

function GameModule:onMsgCountScore(msgData)
    if msgData.isShow then
        local countScoreDetail = { }
        countScoreDetail.isBanker = msgData.isBanker
        countScoreDetail.isLianZhuang = msgData.isLianZhuang
        countScoreDetail.isChengBao = msgData.isChengBao
        countScoreDetail.isBaoSanTan = msgData.isBaoSanTan
        countScoreDetail.nPan = msgData.nPan
        countScoreDetail.nGang = msgData.nGang
        countScoreDetail.nPao = msgData.nPao
        countScoreDetail.nScore = msgData.nScore
        countScoreDetail.huType = msgData.huType
        countScoreDetail.huFanCount = msgData.huFanCount
        countScoreDetail.huFanID = msgData.huFanID
        self:getGameData():setCountScore(msgData.nSeat, countScoreDetail.nPan, countScoreDetail)
    end
end

function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    --判断是否买庄或庄  修改相应资源
    if msgData.nLaoZhuang - 1 >  0 then
        self:dispatchEvent( { name = self.EVENT_UPDATE_ZHUANG_FLAG , msg = {imgName = "shengzhou_maizhuang.png"}})
    else
        self:dispatchEvent( { name = self.EVENT_UPDATE_ZHUANG_FLAG , msg = {imgName = "mah_banker_flag.png"}})
    end
end

function GameModule:onMsgOutMah(msgData)
    GameModule.super.onMsgOutMah(self, msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setChowLimitOtherCombs(msgData.nLastOutMah)
    end
end

function GameModule:onMsgPower(msgData)
    CF.msgManager:sendPowerBack(msgData.nActionID)
    GameModule.super.onMsgPower(self, msgData)
end

function GameModule:onMsgJoker(msgData)
    GameModule.super.onMsgJoker(self, msgData)
    self:getGameData():setOpenData(msgData.nJokers)
end

function GameModule:onMsgPlayerMah(msgData)
	GameModule.super.onMsgPlayerMah(self,msgData)
	local seat = msgData.nSeat
    local handMahCount = msgData.nHandCount
	if handMahCount ~= 0 then
		self:onShowSanTanHint(seat)
	end
end

function GameModule:onMsgPlayerBack(msgData)
	GameModule.super.onMsgPlayerBack(self,msgData)
    local seat = msgData.nSeat
	self:onShowSanTanHint(seat)
end

function GameModule:onMsgAction(msgData)
	GameModule.super.onMsgAction(self,msgData)
    local seat = msgData.nSeat
    self:onShowSanTanHint(seat,msgData.tComb.nFromSeat)
end

function GameModule:onShowSanTanHint(seat,fromSeat)
	local playerMahCombs = self:getGameData():getAllCombMahData(seat)
	if playerMahCombs and next(playerMahCombs) then
		local tmpCombs = clone(playerMahCombs)
		local hintData = self:getGameData():checkSanTanHintTrigger(seat,tmpCombs,fromSeat)
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

function GameModule:getLuaIntValue(luaString, variable)
    local value = -1
    local vs = string.split(luaString, ";")
    for i = 1,#vs do
        local vss = string.split(vs[i], "=")
        if (#vss >= 2 and vss[1] == variable)then
            value = tonumber(vss[2])
            return value
        end
    end
    return value
end

function GameModule:getLuaStrValue(luaString, variable)
    local value = ""
    local vs = string.split(luaString, ";")
    for i = 1,#vs do
        local vss = string.split(vs[i], "=")
        if (#vss >= 2 and vss[1] == variable)then
            value = vss[2]
            if (string.len(value) >= 2)then
                if (value[1] == '\'' and value[string.len(value)] == '\'')then
                    value = string.sub(value,1,string.len(value) - 1)
                end
            end
            return value
        end
    end
    return value
end

function GameModule:decodeConfig(luaConfig)
    local gameid = self:getLuaIntValue(luaConfig, "gameId")
    local strArray = ""
    local needExtend = false
    local nPlayQuan = self:getLuaIntValue(luaConfig,"nPlayQuan")
    local nMaxQuan = self:getLuaIntValue(luaConfig,"nMaxQuan")
    local round = self:getLuaIntValue(luaConfig,"nJuShu")
    if nPlayQuan == 1 then
        strArray  = strArray..nMaxQuan.."圈 "
    elseif nPlayQuan == 0 then
        strArray  = strArray..round.."局 "
    end
    local beishu = {
        self:getLuaIntValue(luaConfig,"nLowScore"),
        self:getLuaIntValue(luaConfig,"nMiddleScore"),
        self:getLuaIntValue(luaConfig,"nHighScore"),
    }
    if gameid == 30039 then strArray = strArray..beishu[1].. "-"..beishu[2].."-"..beishu[3] end

    local bChaoYiJinShi = self:getLuaIntValue(luaConfig,"bChaoYiJinShi")
    if bChaoYiJinShi==1 then
        strArray = strArray.." 超一进十 "
        needExtend = true
    end

    local bBaoZiFanBei = self:getLuaIntValue(luaConfig,"bBaoZiFanBei")
    if bBaoZiFanBei==1 then
        strArray = strArray.." 豹子翻倍 "
        needExtend = true
    end

    local nBaseFlower = self:getLuaIntValue(luaConfig,"nBaseFlower")
    if nBaseFlower > 0 then
        strArray = strArray.." 底花:"..nBaseFlower
    end
    local autoAnte = self:getLuaIntValue(luaConfig,"nAnteType")
    if autoAnte == 0 then
       strArray =strArray.." 无炮 "
    elseif autoAnte == 1 then
        strArray = strArray.." 每局挂炮 "
    elseif autoAnte == 2 then
        strArray = strArray.." 自动挂炮 "
    end
    local nLiuJuZhangShu =  self:getLuaIntValue(luaConfig,"nLiuJuZhangShu")
    if nLiuJuZhangShu == 0 then
       strArray = strArray.." 流局不留 "
    elseif nLiuJuZhangShu == 14 then
       strArray = strArray.." 流局留14张 "
    end
    local bZhuangJiaBiPao = self:getLuaIntValue(luaConfig,"bZhuangJiaBiPao")
    if bZhuangJiaBiPao==1 then
        strArray = strArray.." 庄家必炮 "
    end
    local bQueYiBuKeHu = self:getLuaIntValue(luaConfig,"bQueYiBuKeHu")
    if bQueYiBuKeHu==1 then
       strArray = strArray.." 缺一不可放冲 "
        needExtend = true
    end
    local bSanTanQuanBao = self:getLuaIntValue(luaConfig,"bSanTanQuanBao")
    if bSanTanQuanBao==1 then
       strArray = strArray.." 三摊独赔 "
        needExtend = true
    end
    local bDianPaoBaoSanJia = self:getLuaIntValue(luaConfig,"bDianPaoBaoSanJia")
    if bDianPaoBaoSanJia==1 then
        strArray = strArray.." 放冲（杠）包三家 "
        needExtend = true
    end
    local bLianZhuangJiXu = self:getLuaIntValue(luaConfig,"bLianZhuangJiXu")
    if bLianZhuangJiXu==1 then
        strArray = strArray.." 连庄继续 "
        needExtend = true
    end
    local nChengBaoRate = self:getLuaIntValue(luaConfig,"nChengBaoRate")
    if nChengBaoRate==1 then
        strArray = strArray.." 三摊3倍 "
        needExtend = true
    elseif nChengBaoRate == 0 then
        strArray = strArray.." 三摊5倍 "
        needExtend = true
    end

    local nQiangGangRate = self:getLuaIntValue(luaConfig,"nQiangGangRate")
    if nQiangGangRate==1 then
        strArray = strArray.." 抢杠3财鸟 "
        needExtend = true
    elseif nQiangGangRate == 0 then
        strArray = strArray.." 抢杠5自摸 "
        needExtend = true
    end
    local bForbiddenChi = self:getLuaIntValue(luaConfig,"bForbiddenChi")
    if bForbiddenChi==1 then
        strArray = strArray.." 禁止吃牌 "
        needExtend = true
    end
    local nTrustTime = self:getLuaIntValue(luaConfig,"nTrustTime")
    if nTrustTime == -1 then
        strArray = strArray.." 出牌无限制 "
        needExtend = true
    elseif nTrustTime == 15 then
        strArray = strArray.." 出牌15秒 "
        needExtend = true
    elseif nTrustTime == 30 then
        strArray = strArray.." 出牌30秒 "
        needExtend = true
    end
    local strPayType = self:getLuaStrValue(luaConfig,"PayType")
    if strPayType == "'1'" then
        strArray = strArray.." AA支付 "
    end

    print("rule =="..strArray)
    return strArray,needExtend
end

function GameModule:unserialize(lua)
    local t = type(lua)
    if t == "nil" or lua == "" then
        return nil
    elseif t == "number" or t == "string" or t == "boolean" then
        lua = tostring(lua)
    else
        error("can not unserialize a " .. t .. " type.")
    end
    lua = "return " .. lua
    local func = loadstring(lua)
    if func == nil then
        return nil
    end
    return func()
end

return GameModule