local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.ShengZhou.ShengZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgThrowChipRelink = {
    XY_ID = 1057,

    nSeat = 0,
    nCount = 0,
    nChips = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nChips = {}
        for i = 1,self.nCount do
            self.nChips[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgChengBaoCount = {
    XY_ID = 1058,

    nSeat = 0,
    nCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        return self
    end
}

GameProtocol.msgShowTkongMah = {
    XY_ID = 1059,

    nSeat = 0,
    nMahCount = 0,
    nCombIndex = {},
    nMah = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nMahCount = bis:readUInt8()
        for i = 1,self.nMahCount do
            self.nCombIndex[i] = bis:readUInt8()
        end
        for i = 1,self.nMahCount do
            self.nMah[i] = bis:readUInt8()
        end
        return self
    end
}

return GameProtocol