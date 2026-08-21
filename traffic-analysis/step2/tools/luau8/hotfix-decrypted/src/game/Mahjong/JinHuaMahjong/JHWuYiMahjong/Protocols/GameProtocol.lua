local GameLogicProtocol = CF.gameClass("GameLogicProtocol", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Protocols.GameProtocol")

GameLogicProtocol.msgbarscore = {
    XY_ID = 1050,

    barwinscore = {},
    barlostscore = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.barwinscore = {}
        self.barlostscore = {}
        for i = 0,3 do
            self.barwinscore[i] = bis:readInt32()
            self.barlostscore[i] = bis:readInt32()
        end
        return self
    end
}

GameLogicProtocol.msgPlayMahIndex = {
    XY_ID = 1051,

    nSeat = 0,
    nMahIndex = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeInt32(self.nMahIndex)
        return bos
    end
}

return GameLogicProtocolg