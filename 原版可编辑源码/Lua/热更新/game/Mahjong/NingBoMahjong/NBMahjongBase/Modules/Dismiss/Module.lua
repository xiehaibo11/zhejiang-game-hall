local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")
local DismissUI = CF.gameRequire("Modules.Dismiss.View")

function DismissModule:getSubXYDealList()
    local subXYsDealList = DismissModule.super.getSubXYDealList(self)
    subXYsDealList[#subXYsDealList + 1] = {callback = handler(self,self.onMsgDismissInfoEx),msgClass = CF.GameProtocol.msgDismissInfo}
    return subXYsDealList
end

function DismissModule:onMsgDismissInfoEx(msgData)
    local StatusList= {4,1,2,3}
    local playerCount = CF.roomData:getChairs()
    local flag = msgData.nflag
    local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        if not CF.UITool.objIsInScene(DismissUI.ObjName, DismissUI.ClsName) then
            DismissUI.new({isShowMore = true,time = msgData.ntime}):showSelf()
        end
        for i = 1, playerCount  do
            local oSeat = i-1
            local oStatus = StatusList[flag[i]]
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = oSeat, status = oStatus}})
        end
    end
end

-- 请求解散反馈信息
function DismissModule:onMsgRespondDismiss(msgData)
    local status = msgData.agree and DismissUI.Status.AGREE or DismissUI.Status.REFUSE
    self:dispatchEvent({ name = self.EVENT_UPDATE_DISMISS_UI, msg = { seat = msgData.seat, status = status, remove = not msgData.agree } })

    if msgData.seat ~= CF.roomData:getSelfSeat() then
        local player = CF.roomData:getPlayerDataBySeatId(msgData.seat)
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
        }, player:getNickName() .. "不同意解散,游戏继续进行！")
    end
end

return DismissModule