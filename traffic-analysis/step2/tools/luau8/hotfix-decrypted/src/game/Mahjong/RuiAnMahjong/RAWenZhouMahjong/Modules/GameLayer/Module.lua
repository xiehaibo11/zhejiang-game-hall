local GameModule = CF.gameClass("GameModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_CLEAR_ALL_INFO = "EVENT_CLEAR_ALL_INFO"
GameModule.EVENT_UPDATE_MDD_BTN_STATE = "EVENT_UPDATE_MDD_BTN_STATE"
GameModule.EVENT_UPDATE_MDD_WAIT_STATE = "EVENT_UPDATE_MDD_WAIT_STATE"
GameModule.EVENT_UPDATE_MDD_INFO = "EVENT_UPDATE_MDD_INFO"
GameModule.EVENT_MDD_STEP_END = "EVENT_MDD_STEP_END"
GameModule.EVENT_UPDATE_LAO_ZHUANG = "EVENT_UPDATE_LAO_ZHUANG"
GameModule.EVENT_UPDATE_CLOCK_EX = "EVENT_UPDATE_CLOCK_EX"
GameModule.EVENT_UPDATE_MAI_DI = "EVENT_UPDATE_MAI_DI"
GameModule.EVENT_UPDATE_DING_DI = "EVENT_UPDATE_DING_DI"
GameModule.EVENT_UPDATE_MDD_FLAG = "EVENT_UPDATE_MDD_FLAG"
GameModule.EVENT_HAVE_DINGDI = "EVENT_HAVE_DINGDI"
GameModule.EVENT_FOLLOWMAH_SHOW_ANI = "EVENT_FOLLOWMAH_SHOW_ANI"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgMDdi), msgClass = CF.GameProtocol.msgMDdi}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgMDDiShow), msgClass = CF.GameProtocol.msgMDDiShow}
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFollowMah), msgClass = CF.GameProtocol.msgFollowMah}
    return subXYDealList
end

function GameModule:clearAllTableInfo()
    self:dispatchEvent({name = self.EVENT_CLEAR_ALL_INFO })
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

-- 跟风的玩家座位
function GameModule:onMsgFollowMah(msgData)
    self:dispatchEvent( { name = self.EVENT_FOLLOWMAH_SHOW_ANI })
end

return GameModuleg