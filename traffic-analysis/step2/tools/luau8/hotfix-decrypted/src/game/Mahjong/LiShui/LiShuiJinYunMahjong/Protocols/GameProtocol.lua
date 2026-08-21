local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgFanCnt = {
    XY_ID = 548,

    nSeat = 0,
    nCount = 0,
    Fans = {},
    fanValue = -1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1 , self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readUInt16()
            self.Fans[i].nCount = bis:readUInt8()
        end

        if bis:getAvailableSize() > 0 then
            self.fanValue = bis:readInt32()
        end
        return self
    end
}


GameProtocol.msgAnte = {
    XY_ID = 1049,

    seat = 0,
    anteNum = -1,
    anteMinNum = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos =un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.anteNum)
        bos:writeInt16(self.anteMinNum)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.anteNum = bis:readInt16()
        self.anteMinNum = bis:readInt16()

        return self
    end
}

return GameProtocol6