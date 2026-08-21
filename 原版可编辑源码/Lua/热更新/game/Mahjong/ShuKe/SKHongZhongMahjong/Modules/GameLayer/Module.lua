local GameModule = CF.gameClass("GameModule", "game.Mahjong.ShuKe.ShuKeMahjongBase.Modules.GameLayer.Module")
local EarlyStartUI = CF.gameRequire("Modules.GameLayer.EarlyQuickStartUI")

GameModule.EVENT_ZHAMA_HIDE = "EVENT_ZHAMA_HIDE"
GameModule.EVENT_EARLY_BEGIN_START = "EVENT_EARLY_BEGIN_START"
GameModule.EVENT_UPDATE_EARLY_BEGIN_UI = "EVENT_UPDATE_EARLY_BEGIN_UI"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgZhaMa), msgClass = CF.GameProtocol.msgZhaMa }

    --提前开局
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgAdvanceStart), msgClass = CF.GameProtocol.msgAdvanceStart }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgReqAdvanceStart), msgClass = CF.GameProtocol.msgReqAdvanceStart }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgAdvanceStartFlag), msgClass = CF.GameProtocol.msgAdvanceStartFlag }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgReqAdPlayerAgree), msgClass = CF.GameProtocol.msgReqAdPlayerAgree }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgDynamicTableChangeSeat), msgClass = CF.GameProtocol.msgDynamicTableChangeSeat }

    return subXYDealList
end

function GameModule:onMsgZhaMa(msgData)
    if msgData.sIdexCnt > 0 then
        local ZhaMahPanel = CF.gameRequire("Modules.GameLayer.ZhaMahUI")
        if not CF.UITool.objIsInScene(ZhaMahPanel.ObjName, ZhaMahPanel.ClsName) then
            local zhaMaData = {
                mahs = msgData.nIdex,
                realcnt = msgData.sIdexCntReal,
            }
            CF.game:getModule("WinLost"):getWinLostData():setZhaMaMahs(msgData.nIdex, msgData.sIdexCntReal)
            ZhaMahPanel.new(zhaMaData):showSelf()
        end
    end
end

-- 游戏结束
function GameModule:onMsgEndGame(msgData)
    CF.game:getModule("WinLost"):getWinLostData():setDelayTime(2.5)
    GameModule.super.onMsgEndGame(self,msgData)
end

function GameModule:hideZhaMah()
    self:dispatchEvent( { name = self.EVENT_ZHAMA_HIDE})
end

function GameModule:convertCombDataInGame(data)
    if (data.nFromSeat ~= CF.roomData:getSelfSeat() or CF.roomData:getIsSeer()) and data.nFlag == CF.GameDefine.COMB_TYPE.CONCEALED_KONG then
        for i = 1, #data.nMahs - 1 do
            data.nMahs[i] = CF.GameDefine.MAH_VALUE.BACK
        end
    end
    return data
end

function GameModule:onMsgAdvanceStart(msgData)
    if CF.roomData:isPlayBack() == true then
        return
    end
    --比赛场房间不处理
    if CF.teaHouseManager:isInTeaHouse() then
       return
    end
    if CF.roomData:getCurPlayerCount() >= CF.roomData:getMinPlayer() then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = true,playerCount = msgData.nPlayerCnt})
    end
end

--申请提前开局
function GameModule:onMsgReqAdvanceStart(msgData)
    EarlyStartUI.new({isShowMore = true, time = msgData.nTime}):showSelf()
    self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {seat = msgData.nSeat, status = EarlyStartUI.STATUS.REQUEST}})
end

function GameModule:onMsgAdvanceStartFlag(msgData)
    self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {remove = true}})
    --根据flag弹出弱提示
    if msgData.nFlag == EarlyStartUI.START_FLAG.EARLY_START_SUCCESS then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = false, playerCount = self:getGameData():getDynamicChairs() })
    elseif msgData.nFlag == EarlyStartUI.START_FLAG.EARLY_START_PLAYERCNT then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = false, playerCount = self:getGameData():getDynamicChairs()})
    end
end

function GameModule:onMsgReqAdPlayerAgree(msgData)
    local  seat = msgData.nSeat
    local player = CF.roomData:getPlayerDataBySeatId(seat)
    if player then
        if msgData.bAgree then
            self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {seat = msgData.seat, status = EarlyStartUI.STATUS.AGREE}})
        else
            self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {seat = msgData.seat, status = EarlyStartUI.STATUS.REFUSE, remove = true}})
            --不同意的玩家建议在等等其他小伙伴......
        end
    else
        if not msgData.bAgree then
            self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {remove = true}})
        end
    end
end

function GameModule:onMsgDynamicTableChangeSeat(msgData)
    if msgData.sPlayerSeat == CF.roomData:getMaxPlayer() then
        return
    end
    self:getGameData():setDynamicChairs(msgData.sChairs)
    CF.game:getModule("Player"):dynamicChangeSeat(msgData.sPlayerSeat)
    --修改座位数
    if msgData.sChairs >= CF.roomData:getMinPlayer() and CF.roomData:getChairs() > CF.roomData:getMinPlayer() then
        CF.roomData:setChairs(self:getGameData():getDynamicChairs() ~= 0 and self:getGameData():getDynamicChairs() or CF.roomData:getMaxPlayer() )
    end
    if msgData.sPlayerSeat == CF.roomData:getSelfSeat() then
        CF.roomData:clearAllPlayerData()
    else
        CF.roomData:removePlayerData(msgData.sPlayerSeat)
    end
end

return GameModule