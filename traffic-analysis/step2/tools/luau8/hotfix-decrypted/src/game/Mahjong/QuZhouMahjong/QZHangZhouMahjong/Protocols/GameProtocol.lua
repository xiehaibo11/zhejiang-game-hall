local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Protocols.GameProtocol")


GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},
    bFengDing = {}, --封顶情况

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.bFengDing[i] = bis:readBool()
            end
        end
        return self
    end
}

return GameProtocol�