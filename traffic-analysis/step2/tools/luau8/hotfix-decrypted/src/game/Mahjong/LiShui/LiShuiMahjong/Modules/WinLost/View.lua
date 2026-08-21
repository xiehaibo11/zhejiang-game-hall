local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

-- 丽水麻将：Settle.csd 中新增了 _KW_POS_FAN_BET 位置节点，
-- 把番图片 _imgFan 的位置设置到该节点位置
function WinLostView:getBindingInfo()
    local bindingInfo = WinLostView.super.getBindingInfo(self)
    bindingInfo["_KW_POS_FAN_BET"] = { varName = "_posFanBet" }
    bindingInfo["_KW_IMG_BET_MAH"] = { varName = "_imgBetMah" }
    return bindingInfo
end

function WinLostView:onUpdateUI()
    WinLostView.super.onUpdateUI(self)
    self:showBetMah()
end

function WinLostView:showBetMah()
    local winLostData = self:getWinLostData()
    local buyMahList = winLostData:getBuyMahList()
    if not buyMahList or #buyMahList <= 0 then
        self._imgBetMah:setVisible(false)
        return
    end
    if self._imgBetMah then
        self._imgBetMah:setVisible(true)
    end
    if self._posFanBet and self._imgFan then
        self._imgFan:setPosition(self._posFanBet:getPosition())
    end
end

return WinLostView7