local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},
    nDianMo = {},
    nKongScore = {},
    nHuType = 0,
    nMaiDi = {},
    bFinal = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        self.nDianMo = {}
        self.nKongScore = {}
        self.nMaiDi = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nDianMo[i] = bis:readInt16()
            self.nKongScore[i] = bis:readInt16()
        end
        self.nHuType = bis:readInt16()
        for i = 0, 3 do
            self.nMaiDi[i] = bis:readInt16()
        end
        self.bFinal = bis:readBool()
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    mMaxMKongNum = {},
    mMaxAKongNum = {},
    mMaxDianPao = {},
    mMaxJiePao = {},
    maxResultSelf = {},
    show = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.boxRoomTotalWinLost = {}
        self.mMaxMKongNum = {}
        self.mMaxAKongNum = {}
        self.mMaxDianPao = {}
        self.mMaxJiePao = {}
        self.maxResultSelf = {}
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1, self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.mMaxMKongNum[i] = bis:readInt32()
            self.mMaxAKongNum[i] = bis:readInt32()
            self.mMaxDianPao[i] = bis:readInt32()
            self.mMaxJiePao[i] = bis:readInt32()
            self.maxResultSelf[i] = bis:readInt32()
        end
        self.show = bis:readBool()
        return self
    end
}

GameProtocol.msgMaiDi = {
    XY_ID = 1047,

    nSeat = 0,          
    maiDi = 0,
    bFinish = false,

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.nSeat)
        bos:writeUInt16(self.maiDi)
        bos:writeBool(self.bFinish)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.maiDi = bis:readUInt16()
        self.bFinish = bis:readBool()
        return self
    end
}

GameProtocol.msgResidue = {
    XY_ID = 1048,

    residueBanker = 0,
    flag = 0,                    

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.residueBanker = bis:readInt16()
        self.flag = bis:readInt16()
        return self
    end
}

GameProtocol.msgShuffleSeatsTZ = {
    XY_ID = 1049,

    sSeat = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 0, 3 do
            bos:writeUInt16(self.sSeat[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = {}

        for i = 0, 3 do
            self.sSeat[i] = bis:readUInt16()
        end
        return self
    end
}

return GameProtocol
