local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgMaResult = {
    XY_ID = 1053,

    betMahCount = 0,
    betMahList = {},
    maPoint = {},
    totalPoint = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.betMahCount = bis:readUInt8()
        self.betMahList = {}
        self.maPoint = {}
        for i = 1, self.betMahCount do
            self.betMahList[i] = bis:readUInt8()
        end
        for i = 1, self.betMahCount do
            self.maPoint[i] = bis:readUInt8()
        end
        self.totalPoint = bis:readUInt8()
        return self
    end
}

GameProtocol.msgWaitMaiMa = {
    XY_ID = 1054,

    nPlayerState = {},
    nDanFang = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nPlayerState = {}
        for i = 0, 3 do
            self.nPlayerState[i] = bis:readUInt8()
        end
        self.nDanFang = bis:readUInt8()
        return self
    end
}

GameProtocol.msgChengBaoFlag = {
    XY_ID = 1055,
    nChengBaoFlag = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nChengBaoFlag = {}
        for i = 0, 3 do
            self.nChengBaoFlag[i] = bis:readUInt8()
        end
        return self
    end
}

return GameProtocol
