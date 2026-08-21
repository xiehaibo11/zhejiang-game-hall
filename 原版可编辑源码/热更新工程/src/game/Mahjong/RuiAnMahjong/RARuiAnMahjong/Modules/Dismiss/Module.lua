local DismissModule = CF.gameClass("DismissModule", "game.Mahjong.RuiAnMahjong.RAMahjongBase.Modules.Dismiss.Module")

function DismissModule:getSubXYDealList()
    local subXYDealList = DismissModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgShowDismiss),msgClass = CF.GameProtocol.msgShowDismiss}
    return subXYDealList
end

function DismissModule:onMsgShowDismiss(msgData)
    if msgData.nLengQue then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setText("解散冷却中,请在".. msgData.nLeftTime .."秒后申请解散.")
    else
        if msgData.bShow then
            local DismissUI = CF.gameRequire("Modules.Dismiss.View")
            DismissUI.new({time = msgData.iCountTime, isShowMore=true}):showSelf()
        else
            self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {remove = true}})
        end
    end
end

return DismissModule