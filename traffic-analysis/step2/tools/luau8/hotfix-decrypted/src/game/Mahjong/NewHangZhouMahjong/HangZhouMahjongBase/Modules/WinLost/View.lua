local WinLostView = CF.gameClass("WinLostView", "game.Mahjong.BasicMahjong.Modules.WinLost.View")

WinLostView.EndTypeEx =
    {
        [0] = "img_result_win.png",  --胜利
		[1] = "img_result_lost.png",  --失败
		[2] = "settle_text_liuju.png",  --流局
    }

function WinLostView:createChildren()
	cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/HangZhou/hangzhou.plist")
	WinLostView.super.createChildren(self)
end

function WinLostView:onUpdateUI()
	WinLostView.super.onUpdateUI(self)
	local gameData = CF.game:getModule("GameLayer"):getGameData()
	local huseats = gameData:getHuSeat()
    local endType = self:getWinLostData():getEndType()
    if endType ~= CF.GameDefine.END_TYPE.ET_DRAWN then
        local bHuSeat = false
        for i = 1, #huseats do
            if huseats[i] == self:getWinLostData():getSelfSeat() then
                bHuSeat = true
                break
            end
        end
        if bHuSeat then
            endType = 0
        else
            endType = 1
        end
    else
        endType = 2
    end

	self._titleSp:loadTexture(WinLostView.EndTypeEx[endType], ccui.TextureResType.plistType)
end

return WinLostView�