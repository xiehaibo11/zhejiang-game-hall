local GameProtocol = CF.gameClass("GameProtocol", "game.DoubleKou.BaseDoubleKou.Protocols.GameProtocol")

GameProtocol.msgTrust = {
    XY_ID = 1475,
    sTrustSeat = 0,
    bTrust = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sTrustSeat)
        bos:writeBool(self.bTrust)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sTrustSeat = bis:readInt16()
        self.bTrust = bis:readBool()

        return self
    end
}

return GameProtocol
