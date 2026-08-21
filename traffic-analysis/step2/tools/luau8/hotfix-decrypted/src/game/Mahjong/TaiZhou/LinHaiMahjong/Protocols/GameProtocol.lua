local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.TaiZhou.BasicTaiZhouMahjong.Protocols.GameProtocol")

GameProtocol.msgWaitZhuaGanTou = {
    XY_ID = 1055,

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

GameProtocol.msgZhuaGanTouResult = {
    XY_ID = 1056,

    betMahCount = 0,
    mahType = 0,
    everyMahList = {},
    singleMahList = {},
    huCount = 0,
    huSeat = {},
    disCardSeat = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.betMahCount = bis:readUInt8()
        self.mahType = bis:readUInt8()
        if tonumber(self.mahType) == 1 or tonumber(self.mahType) == 2 then
            for i = 1, self.betMahCount do
                self.singleMahList[i] = bis:readUInt8()
            end
        elseif tonumber(self.mahType) == 3 then
            for i = 1, 4 do
                self.everyMahList[i] = {}
                for j = 1, self.betMahCount do
                    self.everyMahList[i][j] = bis:readUInt8()
                end
            end
        end
        self.huCount = bis:readUInt8()
        for i = 1, 4 do
            self.huSeat[i] = bis:readBool()
        end
        self.disCardSeat = bis:readUInt8()
        return self
    end
}

GameProtocol.msgFanCntEx = {
    XY_ID = 1057,
    huSeats = {},
    nCount = {},
    Fans = {},

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.huSeats = {}
        self.nCount = {}
        self.Fans = {}
        for i = 1, 4 do
            self.huSeats[i] = bis:readBool()
        end
        for i = 1, 4 do
            self.nCount[i] = bis:readUInt8()
        end
        for i = 1, 4 do
            self.Fans[i] = {}
            for j = 1, self.nCount[i] do
                self.Fans[i][j] = {}
                self.Fans[i][j].nFanID = bis:readUInt16()
                self.Fans[i][j].nCount = bis:readUInt8()
            end
        end
        return self
    end
}

GameProtocol.msgChengBaoFlag = {
    XY_ID = 1058,
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
y