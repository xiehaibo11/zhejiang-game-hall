local GameModule = CF.gameClass("GameModule", "game.Mahjong.BasicMahjong.Modules.GameLayer.Module")
GameModule.EVENT_SHOW_TING_BUTTON = "EVENT_SHOW_TING_BUTTON"
GameModule.EVENT_HIDE_TING_BUTTON = "EVENT_HIDE_TING_BUTTON"
function GameModule:ctor(param)
    param = param or {}
    GameModule.super.ctor(self,param)
    self._dismissFirst  = true
    self._msgFanCnt = nil
 
end

function GameModule:initModules()
    GameModule.super.initModules(self)
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPlayCanHus), msgClass = CF.GameProtocol.msgNowTingInfo }
    return subXYDealList
end

-- 吃碰杠等动作
function GameModule:onMsgAction(msgData)
    GameModule.super.onMsgAction(self, msgData)
    local seat = msgData.nSeat
    local localSeat = CF.roomData:seatToLocal(seat)
    local convertFlag = CF.GameDefine.COMB_FLAG_TO_TYPE[msgData.tComb.nFlag]
    -- 播放行牌动画
    self:showMahAcitonAni(localSeat, msgData.tComb.nFlag)
    -- TODO 0721 播放行牌音效
    local bMan = false
    local playerData = CF.roomData:getPlayerDataBySeatId(seat)
    if playerData then
        bMan = playerData:getSex() == 1
    end
    local actionIndex = convertFlag
    local bFangYan = not CF.settingData:getMahIsNormalVoice()
    local gameid = bFangYan and CF.roomData:getGameID() or nil
    CF.soundManager:playSoundMahAction(actionIndex, bMan, gameid)
end
function GameModule:onMsgThrowChip(msgData)
    local chips = msgData.nChips
    self:showChips(chips)
end


-- 盘数据
function GameModule:onMsgPanData(msgData)
    GameModule.super.onMsgPanData(self, msgData)
    self:getGameData():setIsShowLaoZhuang(true)
    local laoZhuangNum = msgData.nLaoZhuang -1
    self:getGameData():setLaoZhuangNum(laoZhuangNum)
    self:dispatchEvent( { name = self.EVENT_MAHLAYER_SET_LAOZHUANG})
end



function GameModule:onMsgTingMahInfo(msgData)
    if CF.configData:haveTing() == false then
        return
    end
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    local seat = CF.roomData:getSelfSeat()
    local count = msgData.sDelMahSize
    if count == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        local tingMahs = {}
        local tingData = {}

        for idx = 1,count do
            table.insert(tingMahs,  msgData.nDealMah[idx])
            tingData[tingMahs[idx]] = {}

            local bUniversalHu = msgData.bUniversalHu[idx]
            -- 胡任意
            if bUniversalHu then
                local tempTable = {}
                tempTable.huMahID = 255
                tempTable.huInfoNum = ""
                tempTable.huInfo = ""
                table.insert(tingData[tingMahs[idx]], tempTable)
            else
                local tmpCnt = msgData.sTingSize[idx]
                for k = 1,tmpCnt do
                    local tempTable = {}
                    tempTable.huMahID = msgData.nTingMah[idx][k]

                    if msgData.sTingMahFan[idx][k] == 0 then
                        tempTable.huInfoNum = ""
                        tempTable.huInfo = ""
                    else
                        tempTable.huInfoNum = ""
                        --tempTable.huInfo = self:canHuInfo() .. ",张"
                        tempTable.huInfo = ""
                    end
                    table.insert(tingData[tingMahs[idx]], tempTable)
                end
            end
        end
        self:getGameData():setTingMahs(seat, tingMahs)
        self:getGameData():setCanHuMahsData(seat, tingData)
    end
end

function GameModule:onMsgPlayCanHus(msgData)
    if CF.settingData:getHaveTing() == false then
        self:dispatchEvent( { name = self.EVENT_HIDE_TING_BUTTON } )
        return
    end
    self:dispatchEvent( { name = self.EVENT_SHOW_TING_BUTTON } )
    self:getGameData():setLastTingData()

    local data = {}
    if msgData.bUniversalHu then
        local tempTable = {}
        tempTable.huMahID = 255
        tempTable.huInfoNum = ""
        tempTable.huInfo = ""
        table.insert(data, tempTable)
    else
        local huMahs = clone(msgData.nTingMah)
        for i = 1, msgData.sTingSize do
            local tempTable = {}
            tempTable.huMahID = huMahs[i]
            tempTable.huInfoNum = ""
            tempTable.huInfo = ""
            table.insert(data, tempTable)
        end
    end
    self:getGameData():setLastTingData(data)
end

--出牌预显示控制变量
function GameModule:showPlayPreOut(mahIndex,mahValue)
    if not mahIndex or not mahValue then
        return
    end
    if self:getGameData():getPreviewShow() == true then
        local mahID
        local selfSeat = CF.roomData:getSelfSeat()
        if mahIndex == 0 then
            mahID = self:getGameData():getHandDfData(selfSeat)
        else
            local handMahData = self:getGameData():getHandMahData(selfSeat)
            mahID = handMahData[mahIndex]
        end
        if mahID == 0 then
            return
        end
        if self:showPlayFlowerOut(mahValue, mahIndex) then
            return
        end
        CF.msgManager:sendPlayMahs(mahValue, self:getGameData():getActionID())
        local tingMahs = self:getGameData():getTingMahs(selfSeat)
        local isTing = false
        for i = 1, #tingMahs do
            if mahID == tingMahs[i] then
                isTing = true
                break
            end
        end
        if isTing then
            local data = self:getGameData():getCanHuMahsData(selfSeat)
            self:sendTingInfo(data[mahID])
        end

        self:getGameData():setPreviewMah(mahValue)
        local seat = CF.roomData:getSelfSeat()
        self:dealPlayPreOut(seat, mahIndex, mahValue)
    end
end

function GameModule:sendTingInfo(data)
    local msgTingInfo = CF.GameProtocol.msgNowTingInfo:new()
    msgTingInfo.seat = CF.roomData:getSelfSeat()
    msgTingInfo.sTingSize = #data
    msgTingInfo.sTingMahCount = {}
    msgTingInfo.nTingMah = {}
    if #data == 0 then
        msgTingInfo.bUniversalHu = false
        msgTingInfo.nTingMah = {0}
        msgTingInfo.sTingMahCount = {0}
    else
        for i = 1, #data do 
            msgTingInfo.nTingMah[#msgTingInfo.nTingMah + 1] = data[i].huMahID
            msgTingInfo.bUniversalHu = false
            if data[i].huMahID == 255 then
                msgTingInfo.bUniversalHu = true
            end
            msgTingInfo.sTingMahCount[#msgTingInfo.sTingMahCount + 1] = 0
        end
    end
    CF.netEngine.sendStreamPacket(msgTingInfo)
end


return GameModule�