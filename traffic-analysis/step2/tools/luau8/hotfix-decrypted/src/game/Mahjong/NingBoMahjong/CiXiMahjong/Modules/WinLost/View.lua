local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

function WinLostView:ctor(param)
    WinLostView.super.ctor(self, param)
    self:setFanImgToLong()
end

function WinLostView:initPlayCountLabel()
    WinLostView.super.initPlayCountLabel(self)
    if self._maxPlayCount == 1100 then  --慈溪麻将打节特殊显示
        self._roomJuShuLabel:setString("第"..self._playCount.."局")
    end
end

function WinLostView:getListPlayerCount()
    if CF.game:getModule("RoomInfo"):isDynamicTable() then
        return CF.game:getModule("GameLayer"):getDynamicTablePlayerCnt()
    end
    return WinLostView.super.getListPlayerCount(self)
end

function WinLostView:setFanImgToLong()
    self._imgFan:loadTexture("winlost_long.png", ccui.TextureResType.plistType)
end

return WinLostViewY