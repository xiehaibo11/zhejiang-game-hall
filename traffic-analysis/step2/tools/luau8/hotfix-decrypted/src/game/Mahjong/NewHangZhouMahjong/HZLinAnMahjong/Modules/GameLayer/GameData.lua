local GameData = CF.gameClass("GameData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.GameData")

function GameData:ctor()
    GameData.super.ctor(self)
    self._bShaomao = false
end

-- 烧毛模式
function GameData:setShaoMao(bShaoMao)
    self._bShaomao = bShaoMao or false
end

-- 烧毛模式
function GameData:getShaoMao()
   return self._bShaomao
end

function GameData:getNoJokerHandMahs()
	local jokerData = self:getJokerData()
    local handMahs = self:getHandMahData(CF.roomData:localToSeat(2))
    local noJokerHandMahs = clone(handMahs)
    --删除手牌的财神
    for i = #noJokerHandMahs,1,-1 do
        for j = 1,#jokerData do
            if jokerData[j] == noJokerHandMahs[i] then
                table.remove(noJokerHandMahs,i)
                break
            end
        end
    end

    return noJokerHandMahs
end

return GameData�