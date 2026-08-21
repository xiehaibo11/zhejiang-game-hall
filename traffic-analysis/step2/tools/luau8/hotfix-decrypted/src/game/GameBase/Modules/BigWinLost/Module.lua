local BigWinLostModule = CF.gameClass("BigWinLostModule", CF.ModuleBase)

function BigWinLostModule:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_SEER_SHOW_DISMISS", callBack = "showSeerDismiss"}
    }
end

-- 在显示大结束之后触发
function BigWinLostModule:doAfterShowBigWinLost()
    CF.getLobbyModule("BackActivity"):onEventShowBigWinLost()
    CF.game:getModule("PropUse"):reqPreShuffle(CF.GameDefine and CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_DEL or 2)
    CF.game:getModule("PropUse"):clear()
    -- 大结束直接unwatch,确保不会进入续桌
    if CF.roomData and CF.roomData:getIsSeer() then
        CF.reqUnwatchRealtimeGameRecord(CF.roomData:getRoomID())
    end
    XH.lobby:getModule("Sxvip.FriendInfo"):onGameEnd()
    local unBoxModule = XH.lobby:getModule("UnlimitBoxAct")
    local isActive = unBoxModule:getRemainTime(0) > 0 and unBoxModule:getLeftCnt() > 0
    if isActive then
        unBoxModule:minusPropCnt()
        unBoxModule:reqActInfo(false)
    end
end

function BigWinLostModule:showSeerDismiss()
    if not CF.roomData:getIsSeer() then
        return
    end
    if CF.roomData:getIsDismiss() then
        CF.roomData:setIsDismiss(false)
        CF.TipTool.showTip({
            type = CF.TIP_LAYER_TYPE.OK,
        }, "房间已解散")
    end
end


return BigWinLostModuleu