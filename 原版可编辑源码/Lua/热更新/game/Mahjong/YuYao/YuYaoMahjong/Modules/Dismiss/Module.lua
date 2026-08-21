local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")
local DismissUI = CF.gameRequire("Modules.Dismiss.View")

function DismissModule:ctor(param)
    DismissModule.super.ctor(self)
    self._dismissFirst  = true
end
function DismissModule:getSubXYDealList()
    local xyList = DismissModule.super.getSubXYDealList(self)
	xyList[#xyList+1]  = {callback = handler(self,self.onMsgDismissInfoEx),msgClass = CF.GameProtocol.msgDismissInfo}
    return xyList
end

-- 请求解散
function DismissModule:onMsgDismissInfoEx(msgData)
    if CF.roomData:getIsSeer() then
        return
    end

    local StatusList= {4,1,2,3}
    local playerCount = CF.roomData:getChairs()
    local flag = msgData.nflag
    -- local oSeat = 0
    -- local oStatus = 0
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        if self._dismissFirst then
            DismissUI.new({ isShowMore = true, requestSeat = msgData.seat, time = msgData.ntime }):showSelf()
            self._dismissFirst = false
        end
        for i = 1, playerCount  do
            local oSeat = i-1
            local oStatus = StatusList[flag[i]]
            self:dispatchEvent({ name = self.EVENT_UPDATE_DISMISS_UI, msg = { seat = oSeat, status = oStatus } })
        end
    end
end


-- 请求解散反馈信息
function DismissModule:onMsgRespondDismiss(msgData)
    if CF.roomData:getIsSeer() then
        if msgData.agree then
            CF.roomData:setIsDismiss(true)
        elseif not msgData.agree then
            CF.roomData:setIsDismiss(false)
        end
        return
    end
    self._dismissFirst = true
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = status, remove = not msgData.agree}})
    if msgData.seat ~= CF.roomData:getSelfSeat() then
        local tmpSeat = msgData.seat
        if CF.roomData:getChairs() == 2 then
            tmpSeat = CF.roomData:localToSeat(CF.GameDefine.LOCAL_SEAT.TOP)
        end
        local player = CF.roomData:getPlayerDataBySeatId(tmpSeat) 
        if player then
            local msg = player:getNickName() .. "不同意解散,游戏继续进行！"
            local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
            tipPlayer:setText(msg)
        end
    end
end


return DismissModule