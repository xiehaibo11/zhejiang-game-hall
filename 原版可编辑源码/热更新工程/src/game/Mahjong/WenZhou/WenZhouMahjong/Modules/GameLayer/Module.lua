local GameModule = CF.gameClass("GameModule", "game.Mahjong.WenZhou.WenZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_FOLLOWMAH_SHOW_ANI = "EVENT_FOLLOWMAH_SHOW_ANI"
GameModule.EVENT_CLEAR_ALL_INFO = "EVENT_CLEAR_ALL_INFO"
GameModule.EVENT_MDD_STEP_END = "EVENT_MDD_STEP_END"
GameModule.EVENT_UPDATE_LAO_ZHUANG = "EVENT_UPDATE_LAO_ZHUANG"
GameModule.EVENT_UPDATE_MDD_BTN_STATE = "EVENT_UPDATE_MDD_BTN_STATE"
GameModule.EVENT_UPDATE_MDD_WAIT_STATE = "EVENT_UPDATE_MDD_WAIT_STATE"
GameModule.EVENT_UPDATE_CLOCK_EX = "EVENT_UPDATE_CLOCK_EX"
GameModule.EVENT_UPDATE_MAI_DI = "EVENT_UPDATE_MAI_DI"
GameModule.EVENT_UPDATE_DING_DI = "EVENT_UPDATE_DING_DI"
GameModule.EVENT_UPDATE_MDD_FLAG = "EVENT_UPDATE_MDD_FLAG"
GameModule.EVENT_HAVE_DINGDI = "EVENT_HAVE_DINGDI"

function GameModule:initDatas()
    GameModule.super.initDatas(self)
    self:getGameData():setMaxHandMahData(CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN)
end

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgWillThreeBack), msgClass = CF.GameProtocol.msgWillThreeBack}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShowCKong), msgClass = CF.GameProtocol.msgShowCKong}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.msgFollowMah), msgClass = CF.GameProtocol.msgFollowMah}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgMDdi), msgClass = CF.GameProtocol.msgMDdi}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgMDDiShow), msgClass = CF.GameProtocol.msgMDDiShow}

    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgNowTingInfo), msgClass = CF.GameProtocol.msgNowTingInfo}
    return subXYDealList
end

-- 即将三背的玩家座位
function GameModule:onMsgWillThreeBack(msgData)
    if msgData.sSeat == CF.roomData:getSelfSeat() then
        local tipLayer = CF.TipTool.showPopLayer("TipLayer")
        tipLayer:setText("注意三背！")
    end
end

-- 展示暗杠
function GameModule:onMsgShowCKong(msgData)
    if msgData.bShowCKong == true then
        local cloneCombData = clone(msgData.tComb)
        cloneCombData.nMahs = {
            CF.GameDefine.MAH_VALUE.BACK,
            CF.GameDefine.MAH_VALUE.BACK,
            CF.GameDefine.MAH_VALUE.BACK,
            clone(msgData.tComb.nMahs[1])
        }
        self:getGameData():refreshCombMahData(msgData.ucSeat, cloneCombData, msgData.nIndex + 1)
    end
end

-- 跟风的玩家座位
function GameModule:msgFollowMah(msgData)
    self:dispatchEvent( { name = self.EVENT_FOLLOWMAH_SHOW_ANI })
end

-- 游戏开始
function GameModule:onMsgStartGame(msgData)
    GameModule.super.onMsgStartGame(self, msgData)
    self:clearAllTableInfo()
    CF.gameRequire("Modules.GameLayer.MaiDingDiUI").new():showSelf()
end

-- 游戏步骤
function GameModule:onMsgGameStep(msgData)
    GameModule.super.onMsgGameStep(self, msgData)
    local mddStepID = 101
    if msgData.nStepID ~= mddStepID and msgData.nStepID > CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_THROW_CHIP_1 and
        msgData.nStepID < CF.GameDefine.ENUM_GAME_STEP.GAME_STEP_END_GAME then
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

-- 买顶底
function GameModule:onMsgMDdi(msgData)
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
end

-- 买顶底信息展示
function GameModule:onMsgMDDiShow(msgData)
    local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
    self:dispatchEvent( { name = self.EVENT_HAVE_DINGDI})
    if msgData.nMDFlag == CF.GameDefine.MDDFlag.MAIDI then
        if self:getGameData():getBankerSeat() == CF.roomData:getSelfSeat() then
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = false}})
        end
        self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
        self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = CF.GameDefine.MDDType.DINGDI}})
        self:dispatchEvent( { name = self.EVENT_UPDATE_MAI_DI , msg = {value = msgData.nScore}})
        self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_FLAG , msg = {seat = msgData.nSeat, bShow = msgData.nScore ~= 0, nType = CF.GameDefine.MDDFlag.MAIDI}})
    elseif msgData.nMDFlag == CF.GameDefine.MDDFlag.DINGDI then
        if msgData.nSeat == CF.roomData:getSelfSeat() then
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_BTN_STATE , msg = {bShow = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_WAIT_STATE , msg = {bShow = true, nType = CF.GameDefine.MDDType.DINGDI}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
            self:dispatchEvent( { name = self.EVENT_UPDATE_DING_DI , msg = {value = msgData.nScore}})
        else
            if CF.roomData:getChairs() == 2 then
                self:dispatchEvent( { name = self.EVENT_UPDATE_DING_DI , msg = {value = msgData.nScore}})
            end
            self:dispatchEvent( { name = self.EVENT_UPDATE_CLOCK_EX , msg = {seat = localSeat, time = 10, show = false}})
        end
        self:dispatchEvent( { name = self.EVENT_UPDATE_MDD_FLAG , msg = {seat = msgData.nSeat, bShow = msgData.nScore ~= 0, nType = CF.GameDefine.MDDFlag.DINGDI}})
    end
end

function GameModule:belongCombType(flag)
    if flag > CF.GameDefine.COMB_FLAG.NONE and flag <= CF.GameDefine.COMB_FLAG.LKONG or flag == CF.GameDefine.COMB_FLAG.JOKCMB then
        return true
    end
    return false
end

function GameModule:onMsgNowTingInfo(msgData)
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    CF.game:getModule("RightBtns"):showTingBtn()
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

function GameModule:clearAllTableInfo()
    self:dispatchEvent({name = self.EVENT_CLEAR_ALL_INFO })
end

return GameModule