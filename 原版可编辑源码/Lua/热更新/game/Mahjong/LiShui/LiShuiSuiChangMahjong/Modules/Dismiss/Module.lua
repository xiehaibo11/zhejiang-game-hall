local DismissModule = CF.gameClass("DismissModule", "game.GameBase.Modules.Dismiss.Module")


-- 请求解散
function DismissModule:onMsgRequestDismiss(msgData)
    if CF.roomData:getIsSeer() then
        return
    end
	local cnt = CF.roomData:getPlayCount()
    if cnt > 0 then
        local DismissUI = CF.gameRequire("Modules.Dismiss.View")
		DismissUI.new({time = 180}):showSelf()
		self:dispatchEvent( { name = self.EVENT_UPDATE_DISMISS_UI , msg = {seat = msgData.seat, status = DismissUI.Status.REQUEST}})
    end
end

-- 解散成功标志信息
function DismissModule:onMsgDismissFlag(msgData)
    if CF.roomData and CF.roomData:getIsSeer() then
        CF.roomData:setIsDismiss(false)
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
        }, "房间已解散")
        return
    end
    local tipStr = nil
    local leaveFunc = nil
    if msgData.flag == 1 then
        tipStr = "房主已解散包厢!"
        if CF.roomData:getPlayCount() == 0 then
            if CF.roomData:getHostSeat() == CF.roomData:getSelfSeat() then
                tipStr = nil
                --房主直接切回到大厅
                CF.game:leaveGame()
            else
                leaveFunc = function()
                    CF.game:leaveGame()
                end
            end
        end
    elseif msgData.flag == 2 then
        local txt = ""
        for i = 0, #msgData.agree do
            if msgData.agree[i] then 
                local player = CF.roomData:getPlayerDataBySeatId(i)
                if player then
                    if txt ~= "" then 
                        txt = txt .. "," 
                    end
                    txt = txt .. player:getNickName()
                end
            end
        end
        if txt ~= "" then 
            tipStr = txt .. "同意解散包厢!"
        else
            tipStr = "多数玩家同意解散包厢!"
        end
    elseif msgData.flag == 3 then
        tipStr = "等待时间过长解散包厢!"
    end

    if tipStr then
        local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
        tipPlayer:setTouchBackGround(false)
        tipPlayer:setText(tipStr)
        if leaveFunc then
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, leaveFunc)
            tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.CLOSE, leaveFunc)
        end
    end

    --移除投票界面
    self:removeDismissLayer()
end


return DismissModule