local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")
local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

GameModule.EVENT_SHOW_LEFT_BANKER_COUNT = "EVENT_SHOW_LEFT_BANKER_COUNT" --剩余庄数
GameModule.EVENT_SHOW_CUR_DAO_SHU = "EVENT_SHOW_CUR_DAO_SHU" --当前道数
GameModule.EVENT_SHOW_BTN_TAO_HUA  = "EVENT_SHOW_BTN_TAO_HUA" --显示逃花按钮
GameModule.EVENT_SHOW_YAO_ZHANG = "EVENT_SHOW_YAO_ZHANG" --显示摇张
GameModule.EVENT_SHOW_CHAO_SHI_TAO_HUA = "EVENT_SHOW_CHAO_SHI_TAO_HUA" --超时逃花
GameModule.EVENT_SHOW_XIAN_HUA_ANI = "EVENT_SHOW_XIAN_HUA_ANI" --献花动画
GameModule.EVENT_SHOW_XIAN_HUA_MAH = "EVENT_SHOW_XIAN_HUA_MAH"
GameModule.EVENT_SHOW_BU_HUA_ANI = "EVENT_SHOW_BU_HUA_ANI" --补花动画
GameModule.EVENT_SHOW_POWER_MAH = "EVENT_SHOW_POWER_MAH"
GameModule.EVENT_MAHLAYER_SHOW_SONG_ZHANG = "EVENT_MAHLAYER_SHOW_SONG_ZHANG" --送张

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE)
end

function GameModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgStartGame),msgClass = CF.GameProtocol.msgStartGame},
        {callback = handler(self,self.onMsgEndGame),msgClass = CF.GameProtocol.msgEndGame},
        {callback = handler(self, self.onMsgPower), msgClass = CF.GameProtocol.msgPowerWH},
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
        --{callback = handler(self,self.onMsgBetResult),msgClass = CF.GameProtocol.msgBetResult},
        {callback = handler(self,self.onMsgTingMahInfo),msgClass = CF.GameProtocol.msgTingMahInfo},
        {callback = handler(self,self.onMsgAllThrowChip),msgClass = CF.GameProtocol.msgAllThrowChip},

        {callback = handler(self,self.onMsgSpecfReq),msgClass = CF.GameProtocol.msgSpecfReq},
        {callback = handler(self,self.onMsgSpecfData),msgClass = CF.GameProtocol.msgSpecfData},
        {callback = handler(self,self.onMsgSpecfPower),msgClass = CF.GameProtocol.msgSpecfPower},
        {callback = handler(self,self.onMsgSpecfHand),msgClass = CF.GameProtocol.msgSpecfHand},
        {callback = handler(self,self.onMsgSpecfEnd),msgClass = CF.GameProtocol.msgSpecfEnd},

        {callback = handler(self, self.onMsgLeftBanker), msgClass = CF.GameProtocol.msgLeftBanker},
        {callback = handler(self, self.onMsgYaoZhang), msgClass = CF.GameProtocol.msgYaoZhang},
        {callback = handler(self, self.onMsgPlayerMahHu), msgClass = CF.GameProtocol.msgPlayerMahHu},
        {callback = handler(self, self.onMsgTaoHuaPower), msgClass = CF.GameProtocol.msgTaoHuaPower},
        {callback = handler(self, self.onMsgXianHua), msgClass = CF.GameProtocol.msgXianHua},
        {callback = handler(self, self.onMsgSongZhang), msgClass = CF.GameProtocol.msgSongZhang},
        {callback = handler(self, self.onMsgGameDaoShu), msgClass = CF.GameProtocol.msgGameDaoShu},
        {callback = handler(self, self.onMsgChaoShiTaoHua), msgClass = CF.GameProtocol.msgChaoShiTaoHua},

        {callback = handler(self, self.onMsgClientForwardBase), msgClass = CF.GameProtocol.msgBaseClientForwardEx}
    }
end

function GameModule:needDelay(xyid, protocol)
    if xyid == CF.GameProtocol.msgToTalShuffle.XY_ID then
        return true,3.75,false
    end
    return false,0,true
end

function GameModule:onMsgLeftBanker(msgData)
    self:getGameData():setLeftBanker(msgData.leftBanker)
    if CF.roomData:getIsSeer() then
        self:dispatchEvent({ name = self.EVENT_SHOW_LEFT_BANKER_COUNT , msg = {nLeftBanker = msgData.leftBanker, bShow = true}})
    end
end

function GameModule:onMsgReplace(msgData)
    GameModule.super.onMsgReplace(self, msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent({ name = self.EVENT_SHOW_BU_HUA_ANI , msg = {localSeat = localSeat}})
end

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
        if not self:getGameData():getTiHuan(seat) then
            self:getGameData():deleteHandMahData(seat, outMahs, "outmah")
        end
        self:showOutMahAction(data)
    else
        if self:getGameData():getPreviewMah() ~= mah then
            self:getGameData():setPreviewShow(false)
            self:getGameData():resetMahData(seat, mah)
        else
            self:getGameData():clearTempMahData()
        end
    end
    self:getGameData():setTiHuan(seat, false)
    -- 增加唱牌音效播放
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMah(mah, bMan , gameid)
end

function GameModule:onMsgPower(msgData)
    GameModule.super.onMsgPower(self, msgData)
    local seat = msgData.nSeat
    if seat == CF.roomData:getSelfSeat() then
        local convertID = self:analysePower(msgData.nPower)
        -- 将权限通知麻将层
        if convertID and #convertID ~= 0 then
            for i = 1, #convertID do
                if convertID[i] ~= CF.GameDefine.ACTION.PASS then
                    self:getGameData():setActionMahs(msgData.nPowerMahs)
                    local powerData = {
                        count = msgData.nCount,
                        powerMahs = msgData.nPowerMahs,
                        power = convertID[i]
                    }
                    self:dispatchEvent({ name = self.EVENT_SHOW_POWER_MAH , msg = {data = powerData}})
                    break
                end
            end
        end
        if msgData.nPower ~= CF.GameDefine.POWER.PLAY then
            self:getGameData():setPlayPower(false)
        end
    end
end

function GameModule:analysePower(power)
    local tPower = {}
    local powerByte = bit:d2b(power)
    local showActionColor = false
    for i = 55, 64 do
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
            elseif i == 56 then
                tmpPower = CF.GameDefine.POWER.TWAIT
            elseif i == 55 then
                tmpPower = CF.GameDefine.POWER.CWAIT
            end
            if tmpPower ~= CF.GameDefine.POWER.NONE and 
                tmpPower ~= CF.GameDefine.POWER.CANCEL and 
                tmpPower ~= CF.GameDefine.POWER.PLAY and
                tmpPower ~= CF.GameDefine.POWER.HU then
                self:getGameData():setPowerID(tmpPower)
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

function GameModule:onMsgAction(msgData)
    local seat = msgData.nSeat
    local localSeat = CF.roomData:seatToLocal(seat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:getGameData():setHuPower(false)
    end
    local cloneCombData = clone(msgData.tComb)
    local bChiGang = false      -- 检测是否是别家打过来的牌补杠的
    local index = 0
    local combs = self:getGameData():getAllCombMahData(seat)
    for i = 1, #combs do
        if combs[i].nMahs[1] % CF.GameDefine.MAH_DIVIDED == cloneCombData.nMahs[1] % CF.GameDefine.MAH_DIVIDED then
            index = i
            break
        end
    end
    if msgData.nPowerID == CF.GameDefine.POWER.MKONG then
        if index > 0 then
            bChiGang = true
        end
    end
    if msgData.nPowerID == CF.GameDefine.POWER.CWAIT or msgData.nPowerID == CF.GameDefine.POWER.TWAIT then
        self:getGameData():setTiHuan(seat, true)
        self:getGameData():refreshCombMahData(seat, cloneCombData, index)
    elseif msgData.nPowerID == CF.GameDefine.POWER.TKONG or bChiGang then
        self:getGameData():refreshCombMahData(seat, cloneCombData, index)
    else
        self:getGameData():setCombMahData(seat, cloneCombData, true)
    end
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[cloneCombData.nFlag]
    -- 如果是吃碰杠，则把出牌区的牌，删一下
    if msgData.nPowerID == CF.GameDefine.POWER.CHOW or msgData.nPowerID == CF.GameDefine.POWER.CWAIT or convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
        local nMahs = cloneCombData.nMahs
        local inMahs = cloneCombData.nInMahs[1]
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
        if not self:getGameData():getTiHuan(seat) then
            self:getGameData():deleteHandMahData(seat, nMahs, source)
        end
        self:getGameData():deleteLastOutMahData(cloneCombData.nFromSeat)
    end
    -- 如果是暗杠或者补杠，如果手牌中有单放，整理一下
    if convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        local nMahs = cloneCombData.nMahs
        self:getGameData():deleteHandMahData(seat, nMahs, "concealed_kong")
    end
    if (convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG and not bChiGang) or msgData.nPowerID == CF.GameDefine.POWER.TWAIT then
        local inMahs = cloneCombData.nInMahs[1]
        self:getGameData():deleteHandMahData(seat, {inMahs}, "fill_kong")
    end

    -- 播放行牌动画
    self:showMahAcitonAni(localSeat, cloneCombData.nFlag)
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    if convertFlag == CF.GameDefine.COMB_TYPE.CHOW and
        msgData.nPowerID ~= CF.GameDefine.POWER.CWAIT and
        msgData.nPowerID ~= CF.GameDefine.POWER.TWAIT then
        actionIndex = CF.GameDefine.COMB_TYPE.CHOW
    elseif convertFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG
        or convertFlag == CF.GameDefine.COMB_TYPE.FILL_KONG
        or convertFlag == CF.GameDefine.COMB_TYPE.EXPOSED_KONG then
        actionIndex = CF.GameDefine.COMB_TYPE.EXPOSED_KONG
    end
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
end

function GameModule:onMsgYaoZhang(msgData)
    self:getGameData():setYaoZhangData(msgData.nYaoZhang)
    self:dispatchEvent({ name = self.EVENT_SHOW_YAO_ZHANG , msg = {bShow = true, data = msgData.nYaoZhang, bAni = msgData.bAni}})
end

function GameModule:onMsgPlayerMah(msgData)
    local seat = msgData.nSeat
    local handMahs = msgData.nHands
    --local handMahCount = msgData.nHandCount
    local combs = msgData.tCombs
    local combCount = msgData.nCombCount
    local dfMahs = msgData.nDanFang
    local dfCount = msgData.nDFCount

	--显示时钟
    self:sendEventChipsAniFinish()
    local nLeftBanker = self:getGameData():getLeftBanker()
    self:dispatchEvent({ name = self.EVENT_SHOW_LEFT_BANKER_COUNT , msg = {nLeftBanker = nLeftBanker, bShow = true}})

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

    if seat == CF.roomData:getSelfSeat() then
        -- 清空自家comb，为了重连不重复添加comb
        self:getGameData():clearCombMahData(seat)
    end
    for i = 1, combCount do
        -- 手牌数据增加combs
        local cloneCombData = clone(combs[i])
        cloneCombData = self:convertCombDataInGame(cloneCombData)
        self:getGameData():setCombMahData(seat, cloneCombData,false,true)
    end
end

function GameModule:onMsgPlayerMahHu(msgData)
    local mahIDs = {}
    local combs = msgData.tCombs
    local combCount = msgData.nCombCount
    local seat = msgData.nSeat
    for i = 1, combCount do
        if combs[i].nInCount == 0 then
            for j = 1,#combs[i].nMahs do
                table.insert(mahIDs, combs[i].nMahs[j])
            end
        end
    end
    local huMahID = msgData.nHuMah or 0
    self:getGameData():setHuDanFang(seat, huMahID)
    self:getGameData():setHuMahs(seat, mahIDs)
    local winLostMahIDs = {}
    local combIDs = {}
    for i = 1, msgData.nCombCount do
        if self:belongCombType(combs[i].nFlag) then
            table.insert(combIDs, combs[i])
        else
            for j = 1,#combs[i].nMahs do
                table.insert(winLostMahIDs, combs[i].nMahs[j])
            end
        end
    end
    local flowerData = self:getGameData():getFlowerMahData(seat)
    local data = {}
    data.handData = winLostMahIDs or {}
    data.combData = combIDs or {}
    data.handDfData = 0
    data.flowerData = flowerData
    data.nDangTouScore = msgData.nDangTouScore
    data.nCombScore = msgData.nCombScore
    if CF.configData:huMahAloneShow() then
        for i = 1, #winLostMahIDs do
            if winLostMahIDs[i] == huMahID then
                table.remove(winLostMahIDs, i)
                break
            end
        end
        data.handDfData = huMahID
    end
    if CF.configData:handNeedSort() then
        local excepteMahs = self:getGameData():getModMahCombsBySeat(seat)
        data.handData = self:sortHandMahs(clone(winLostMahIDs), excepteMahs)
    end
    local winLostData = CF.game:getModule("WinLost"):getWinLostData()
    winLostData:setMahData(seat, data)
end

function GameModule:onMsgTaoHuaPower(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
    if not msgData.havePower or msgData.sSeat ~= CF.roomData:getSelfSeat() then
        return
    end
    if msgData.bFirst then
        local data = {}
        data.isShow = true
        data.actionTypes = {CF.GameDefine.ACTION.PASS, CF.GameDefine.ACTION.TAOHUA}
        self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
    else
        if not CF.roomData:isPlayBack() then
            self:dispatchEvent({ name = self.EVENT_SHOW_BTN_TAO_HUA , msg = {bShow = true}})
        end
    end
end

function GameModule:onMsgXianHua(msgData)
    local playerData = CF.roomData:getPlayerDataBySeatId(msgData.sSeat)
    if playerData then
        local bMan = playerData:getSex() == 1
        local actionIndex = "xianhua"
        local bFangYan = not CF.settingData:getMahIsNormalVoice()
        local gameid = bFangYan and CF.roomData:getGameID() or nil
        CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
        local localSeat = CF.roomData:seatToLocal(msgData.sSeat)
        self:dispatchEvent({ name = self.EVENT_SHOW_XIAN_HUA_ANI, msg = {localSeat = localSeat, bShow = true, data = msgData.nMah }})
    end
end

function GameModule:onMsgSongZhang(msgData)
    self:getGameData():setSongZhangMahs(msgData.nSeat, clone(msgData.nMahs))
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_SONG_ZHANG, msg = {seat = msgData.nSeat}})
end

function GameModule:onMsgGameDaoShu(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    if localSeat == CF.roomData:getSelfLocalSeat() then
        self:dispatchEvent({name = self.EVENT_SHOW_CUR_DAO_SHU, msg = {bShow = true, data = msgData.nScore}})
    end
end

function GameModule:onMsgChaoShiTaoHua(msgData)
    local nTime = msgData.nTime
    local bShow = msgData.bShow
    self:dispatchEvent({name = self.EVENT_SHOW_CHAO_SHI_TAO_HUA, msg = {bShow = bShow, nTime = nTime}})
end

function GameModule:onMsgTake(msgData)
    GameModule.super.onMsgTake(self, msgData)
    self:getGameData():setTiHuan(msgData.nSeat, false)
end

function GameModule:showMahAcitonAni(localSeat, actionID, bZiMo)
    if actionID == CF.GameDefine.COMB_FLAG.TKONG or actionID == CF.GameDefine.COMB_FLAG.CKONG then
        actionID = CF.GameDefine.COMB_FLAG.MKONG
    end
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_ACTION_ANIMATION, data = {localSeat = localSeat, actionID = actionID, bZiMo = bZiMo} })
end

function GameModule:sortHandMahs(mahIDs, exceptMahs)
    local handData = clone(mahIDs)
    MahLogic.sortMahValues(handData, exceptMahs)
    return handData
end

function GameModule:showXianHuaMah(node, localSeat, mah)
    self:dispatchEvent({ name = self.EVENT_SHOW_XIAN_HUA_MAH, msg = {node = node, localSeat = localSeat, bShow = true, data = mah }})
end

function GameModule:playXianHuaAniEnd(node, localSeat)
    self:dispatchEvent({ name = self.EVENT_SHOW_XIAN_HUA_MAH, msg = {node = node, localSeat = localSeat, bShow = false }})
end

function GameModule:showPlayPreOut(mahIndex, mahValue)
    GameModule.super.showPlayPreOut(self, mahIndex, mahValue)
    self:getGameData():setSongZhangMahs( CF.roomData:getSelfSeat(), {})
    self:dispatchEvent({ name = self.EVENT_SHOW_BTN_TAO_HUA , msg = {bShow = false}})
end

function GameModule:showPlayFlowerOut(mahID, mahIndex)
    return false
end

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.TKONG then
        return true
    end
    return false
end

function GameModule:doActionCancel()
    GameModule.super.doActionCancel(self)
    CF.msgManager:sendTaoHua(false)
end

function GameModule:doActionTaoHua()
    local okFunc = function ()
        CF.msgManager:sendTaoHua(true)
    end
    local cancelFunc = function ()
        CF.msgManager:sendTaoHua(false)
        CF.msgManager:sendForwardOperatePass(tostring(CF.GameDefine.ACTION.PASS))
    end
    local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
    tipPlayer:setTouchBackGround(false)
    tipPlayer:setText("是否确定逃花？")
    tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, okFunc)
    tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, cancelFunc)
end

function GameModule:doActionChow()
    local inMah = self:getGameData():getLastPlayMah()
    local msgCombs = {}
    msgCombs.mahs = self:getGameData():getActionMahs()
    msgCombs.ins = {inMah}
    msgCombs.from = self:getGameData():getLastPlaySeat()
    msgCombs.flag = CF.GameDefine.COMB_FLAG.CHOW
    CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID(), self:getGameData():getPowerID())
end

function GameModule:doActionTi()
    local seat = CF.roomData:localToSeat(2)
    local danFang = self:getGameData():getHandMahDataIndex(seat, 0)
    local inMah = self:getGameData():getLastPlayMah()
    local msgCombs = {}
    local actionMahs = self:getGameData():getActionMahs()
    msgCombs.mahs = {actionMahs[1], actionMahs[2]}
    local powerID = self:getGameData():getPowerID()
    if powerID == CF.GameDefine.POWER.TWAIT then
        inMah = danFang
    end
    msgCombs.ins = {inMah}
    local tmpFromSeat = self:getGameData():getLastPlaySeat()
    local selfCombs = self:getGameData():getAllCombMahData(seat)
    for i = 1, #selfCombs do
        if selfCombs[i].nInMahs[1] % CF.GameDefine.MAH_DIVIDED == inMah % CF.GameDefine.MAH_DIVIDED then
            tmpFromSeat = selfCombs[i].nFromSeat
            break
        end
    end
    msgCombs.from = tmpFromSeat
    msgCombs.flag = CF.GameDefine.COMB_FLAG.CHOW
    CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID(), self:getGameData():getPowerID())
end

function GameModule:doActionKong()
    local inMah = self:getGameData():getLastPlayMah()
    local seat = CF.roomData:localToSeat(2)
    local danFang = self:getGameData():getHandMahDataIndex(seat, 0)
    local powerID = self:getGameData():getPowerID()
    local msgCombs = {}
    local tmpFromSeat = self:getGameData():getLastPlaySeat()
    local selfCombs = self:getGameData():getAllCombMahData(seat)
    for i = 1, #selfCombs do
        if selfCombs[i].nInMahs[1] % CF.GameDefine.MAH_DIVIDED == inMah % CF.GameDefine.MAH_DIVIDED then
            tmpFromSeat = selfCombs[i].nFromSeat
            break
        end
    end
    if powerID == CF.GameDefine.POWER.CKONG then
        tmpFromSeat = CF.roomData:getSelfSeat()
    end
    local actionMahs = self:getGameData():getActionMahs()
    msgCombs.mahs = actionMahs
    if powerID == CF.GameDefine.POWER.TKONG or powerID == CF.GameDefine.POWER.CKONG then
        inMah = actionMahs[3]
        for _,v in ipairs(actionMahs) do
            if v == danFang then
                inMah = danFang
                break
            end
        end
    end
    local combFlag = 0
    if CF.GameDefine.POWER_TO_COMB_FLAG[powerID] then
        combFlag = CF.GameDefine.POWER_TO_COMB_FLAG[powerID]
    end
    msgCombs.ins = {inMah}
    msgCombs.from = tmpFromSeat
    msgCombs.flag = combFlag
    CF.msgManager:sendAction(msgCombs, self:getGameData():getActionID(), self:getGameData():getPowerID())
end

function GameModule:showOutMahAction(data)
    if CF.settingData:getMahIsHaveTrace() then
        self:dispatchEvent( { name = self.EVENT_MAHLAYER_SHOW_OUTMAH_ACTION, data = data })
    end
end

function GameModule:onMsgTurnData(msgData)
    self:getGameData():setLastPlayMah(msgData.nJustPlayed)
    self:getGameData():setLastPlaySeat(msgData.nJustSeat)
end

function GameModule:onMsgClientForwardBase(msgData)
    if msgData.sID == CF.GameProtocol.msgBaseClientForwardEx.CF_ID.OperatePass then
        self:onMsgClientForwardOperatePass(msgData)
    end
end

function GameModule:clearAllPowerUI()
    local data = {}
    data.isShow = false
    data.actionTypes = {}
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_ACTION, data = data })
end

return GameModule�g  