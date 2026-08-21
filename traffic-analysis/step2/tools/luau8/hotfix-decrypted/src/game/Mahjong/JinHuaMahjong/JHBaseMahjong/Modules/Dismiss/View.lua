local DismissView = CF.gameClass("DismissView", "game.GameBase.Modules.Dismiss.View")

local KW_TEXT_STATE = "KW_TEXT_STATE"
local statusChinese = {"选择中...", "同意", "拒绝", "同意"}
local statusColor = {cc.c3b(134, 134, 134), cc.c3b(9, 168, 1), cc.c3b(242, 51, 51), cc.c3b(9, 168, 1)}

function DismissView:onUpdateDismissUI(event)
    local seat = event.msg.seat
    local status = event.msg.status or DismissView.Status.DEFAULT
    local isRemove = event.msg.remove or false

    if isRemove then
        self:close()
        return
    end

    if seat then
        if status == DismissView.Status.REQUEST then
            self._requestSeat = seat
            local players = CF.roomData:getPlayerDataBySeatId(seat)
            if players then
                self._requestName:setString(players:getNickName())
                if CF.roomData:getSelfSeat() == seat then
                    self:changeToWaiteUI(true)
                end
                if CF.roomData:getIsSeer() then
                    CF.roomData:setIsDismiss(true)
                end
            end
        elseif status == DismissView.Status.AGREE or status == DismissView.Status.REFUSE then
            if CF.roomData:getSelfSeat() == seat then
                self:changeToWaiteUI(true)
            end
        end

        local player = self._playersNode[seat]
        if player and self._isShowMore then
            CF.UITool.setText(player, KW_TEXT_STATE, statusChinese[status])
            CF.UITool.setTextColor(player, KW_TEXT_STATE, statusColor[status])
        end
    end
end

return DismissViewf