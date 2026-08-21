local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._IsIPLmt = false
end

function RoomData:setGameRule(rule)
    self._IsIPLmt = false
    local textSet = string.split(rule,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "IP限制") then
            self._IsIPLmt = true
        end
    end
    RoomData.super.setGameRule(self, rule)
end

function RoomData:isIpLimit()
    return self._IsIPLmt
end

return RoomData