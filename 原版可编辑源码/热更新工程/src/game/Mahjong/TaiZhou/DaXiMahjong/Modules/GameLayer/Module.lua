local GameModule = CF.gameClass("GameModule", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_WAIT_MAI_DI_TIP = "EVENT_SHOW_WAIT_MAI_DI_TIP"  --等待买底提示
GameModule.EVENT_SHOW_MAI_DI_BTNS = "EVENT_SHOW_MAI_DI_BTNS"  --买底按钮
GameModule.EVENT_SHOW_WALL_CARD_NUM = "EVENT_SHOW_WALL_CARD_NUM"
GameModule.EVENT_SHOW_MAI_DI_FLAG = "EVENT_SHOW_MAI_DI_FLAG"
GameModule.EVENT_SHOW_NIU_FLAG = "EVENT_SHOW_NIU_FLAG"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgMaiDi), msgClass = CF.GameProtocol.msgMaiDi }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgReponseMaiDi), msgClass = CF.GameProtocol.msgReponseMaiDi }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgMaiDiFlag), msgClass = CF.GameProtocol.msgMaiDiFlag }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgPlayCaiShen), msgClass = CF.GameProtocol.msgPlayCaiShen }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgWallCardShow), msgClass = CF.GameProtocol.msgWallCardShow }
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFanHuCntEx),msgClass = CF.GameProtocol.msgFanHuCntEx}
    return subXYDealList
end

function GameModule:onMsgMaiDi(msgData)
    local bOtherPlayerMaiDi = true
    for i = 0, CF.roomData:getChairs() - 1 do
        if msgData.bHaveOperate[i] == false then
            bOtherPlayerMaiDi = false
            break
        end
    end
    self:dispatchEvent({ name = self.EVENT_SHOW_WAIT_MAI_DI_TIP, msg = {show = not bOtherPlayerMaiDi}})
    if not msgData.bHaveOperate[CF.roomData:getSelfSeat()] then
        CF.gameRequire("Modules.GameLayer.TanBtnLayer").new({bShowTanButton = true}):showSelf()
    end
end

function GameModule:onMsgReponseMaiDi(msgData)
    if msgData.seat == CF.roomData:getSelfSeat() then
        self:dispatchEvent({ name = self.EVENT_SHOW_MAI_DI_BTNS , msg = {show = false}})
        self:dispatchEvent({ name = self.EVENT_SHOW_WAIT_MAI_DI_TIP , msg = {show = true}})
    end
end

function GameModule:onMsgMaiDiFlag(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_WAIT_MAI_DI_TIP , msg = {show = false}})
    for i = 0 , CF.roomData:getChairs() - 1 do
        self:getGameData():setMaiDiData(i, msgData.bMaiDi[i])
    end
    self:dispatchEvent({ name = self.EVENT_SHOW_MAI_DI_FLAG , msg = {show = true}})
end

function GameModule:onMsgPlayCaiShen(msgData)
    for i = 0 , CF.roomData:getChairs() - 1 do
        self:getGameData():setIsPlayCaiShen(i, msgData.Isplay[i])
    end
    self:dispatchEvent({ name = self.EVENT_SHOW_NIU_FLAG , msg = {show = true}})
end

function GameModule:onMsgWallCardShow(msgData)
    self:dispatchEvent({ name = self.EVENT_SHOW_WALL_CARD_NUM , msg = {show = msgData.bShow, nCardNum = msgData.nCardNum}})
end

function GameModule:onMsgFanHuCntEx(msgData)
    self:getGameData():setScoreInfoData(msgData.huSeat, msgData.hfcnt)
end

return GameModule