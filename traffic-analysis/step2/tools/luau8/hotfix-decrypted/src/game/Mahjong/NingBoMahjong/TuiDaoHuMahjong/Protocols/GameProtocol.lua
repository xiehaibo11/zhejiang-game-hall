local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.NingBoMahjong.NBMahjongBase.Protocols.GameProtocol")

GameProtocol.msgFanCntEx = {
    XY_ID = 548,

    nSeat = 0,
    nCount = 0,
    Fans = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1, self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readInt16()
            self.Fans[i].nCount = bis:readInt32()
        end
        return self
    end
}

--抓鸟
GameProtocol.msgCatchBird = {
    XY_ID = 1049,

    nSeat = 0,
    nCount = 0,
    nbirds = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readInt8()
        self.nbirds = {}
        for i = 1, self.nCount do
            self.nbirds[i] = bis:readUInt8()
        end
        return self
    end
}

return GameProtocolA