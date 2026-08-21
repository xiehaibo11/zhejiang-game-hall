local EarlyStartModule = CF.gameClass("EarlyStartModule", CF.ModuleBase)
local EarlyStartView = CF.gameRequire("Modules.EarlyStart.EarlyStartView")

EarlyStartModule.EVENT_UPDATE_EARLY_BEGIN_UI = "EVENT_UPDATE_EARLY_BEGIN_UI" --刷新提前开局弹框
EarlyStartModule.EVENT_DYNAMIC_CHANGE_SEAT = "EVENT_DYNAMIC_CHANGE_SEAT" ----动态刷新玩家座位

function EarlyStartModule:ctor()
    EarlyStartModule.super.ctor(self)
end

function EarlyStartModule:getSubXYDealList()
    return {
        {callback = handler(self,self.onMsgAdvanceStart),msgClass = CF.GameProtocol.msgAdvanceStart},
        {callback = handler(self,self.onMsgReqAdvanceStart),msgClass = CF.GameProtocol.msgReqAdvanceStart},
        {callback = handler(self,self.onMsgAdvanceStartFlag),msgClass = CF.GameProtocol.msgAdvanceStartFlag},
        {callback = handler(self,self.onMsgReqAdPlayerAgree),msgClass = CF.GameProtocol.msgReqAdPlayerAgree},
        {callback = handler(self,self.onMsgDynamicTableChangeSeat), msgClass = CF.GameProtocol.msgDynamicTableChangeSeat}
    }
end

function EarlyStartModule:onMsgAdvanceStart(msgData)
    if CF.roomData:isPlayBack() then
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
function EarlyStartModule:onMsgReqAdvanceStart(msgData)
    EarlyStartView.new({isShowMore = true, time = msgData.nTime}):showSelf()
    self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {seat = msgData.nSeat, status = CF.GameDefine.EarlyStartStatus.REQUEST}})
end

function EarlyStartModule:onMsgAdvanceStartFlag(msgData)
    self:dispatchEvent( { name = self.EVENT_UPDATE_EARLY_BEGIN_UI , msg = {remove = true}})
    --根据flag弹出弱提示
    if msgData.nFlag == CF.GameDefine.EarlyStartFlag.EARLY_START_SUCCESS then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = false,playerCount = CF.roomData:getDynamicChairs()})
    elseif msgData.nFlag == CF.GameDefine.EarlyStartFlag.EARLY_START_PLAYERCNT then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = false,playerCount = CF.roomData:getDynamicChairs()})
    elseif msgData.nFlag == CF.GameDefine.EarlyStartFlag.EARLY_START_AGREE then
        CF.game:getModule("CenterBtns"):showQuickButton({isShow = false,playerCount = CF.roomData:getDynamicChairs()})
    end
end

function EarlyStartModule:onMsgReqAdPlayerAgree(msgData)
    local seat = msgData.nSeat
    local player = CF.roomData:getPlayerDataBySeatId(seat)
    if player then
        if msgData.bAgree then
            self:dispatchEvent({name = self.EVENT_UPDATE_EARLY_BEGIN_UI, msg = {seat = msgData.seat, status = CF.GameDefine.EarlyStartStatus.AGREE}})
        else
            --不同意的玩家建议在等等其他小伙伴......
            self:dispatchEvent({name = self.EVENT_UPDATE_EARLY_BEGIN_UI, msg = {seat = msgData.seat, status = CF.GameDefine.EarlyStartStatus.REFUSE, remove = true}})
        end
    else
        if not msgData.bAgree then
            self:dispatchEvent({name = self.EVENT_UPDATE_EARLY_BEGIN_UI, msg = {remove = true}})
        end
    end
end

function EarlyStartModule:onMsgDynamicTableChangeSeat(msgData)
    if msgData.sPlayerSeat == CF.roomData:getMaxPlayer() then
        return
    end
    CF.roomData:setDynamicChairs(msgData.sChairs)
    self:dispatchEvent({name = self.EVENT_DYNAMIC_CHANGE_SEAT, msg = {seat = msgData.sPlayerSeat, toSeat = msgData.sEmptySeat}})
    --修改座位数
    if msgData.sChairs >= CF.roomData:getMinPlayer() and CF.roomData:getChairs() > CF.roomData:getMinPlayer() then
        CF.roomData:setChairs(CF.roomData:getDynamicChairs() ~= 0 and CF.roomData:getDynamicChairs() or CF.roomData:getMaxPlayer() )
    end
    if msgData.sPlayerSeat == CF.roomData:getSelfSeat() then
        CF.roomData:clearAllPlayerData()
    else
        CF.roomData:removePlayerData(msgData.sPlayerSeat)
    end
end

return EarlyStartModule�