local BigWinLostView = CF.gameClass("BigWinLostView", "game.Mahjong.NingBoMahjong.NBMahjongBase.Modules.BigWinLost.View")

--设置房间信息
function BigWinLostView:setPlayCountStr(param)
    if param.maxCount == 1100 then --慈溪打节特殊模式
        self._playCount:setString("局数:  " .. (param.playCount or 0) .. "局")
    else
        self._playCount:setString("局数:  " .. (param.playCount or 0) .. "/" .. (param.maxCount or 0))
    end
end

--继续
function BigWinLostView:onBtnContinue(send, eventType)
    if CF.game:getModule("Continue"):onMsgContinueGetState() then
        CF.TipTool.showTipsOk("有玩家房卡不足，续桌失败！")
        return
    end
    BigWinLostView.super.onBtnContinue(self, send, eventType)
end

return BigWinLostView