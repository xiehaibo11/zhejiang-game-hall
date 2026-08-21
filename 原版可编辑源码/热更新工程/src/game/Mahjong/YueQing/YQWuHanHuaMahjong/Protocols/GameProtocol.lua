local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1050,

    nWinLost = {},           --本局优胜值
    iDuiJuFei = {},          --对局分
    sBaoPaiSeat = 0,         --包牌座位
    sBiHuSeat = 0,           --逼胡座位
    sBiHuType = 0,           --逼胡类型
    bIsFanBei = false,       --是否翻倍

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.iDuiJuFei[i] = bis:readInt32()
        end
        self.sBaoPaiSeat =  bis:readUInt16()
        self.sBiHuSeat =  bis:readUInt16()
        self.sBiHuType =  bis:readUInt16()
        self.bIsFanBei =  bis:readBool()

        return self
    end
}

GameProtocol.msgQiaoPiHua = {
    XY_ID = 1052,

    ucQiaoPiHua = 0,
    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucQiaoPiHua)
        bos:writeUInt16(self.sSeat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucQiaoPiHua = bis:readUInt8()
        self.sSeat = bis:readUInt16()

        return self
    end
}

GameProtocol.msgFlowerType = {
    XY_ID = 1059,

    bFlowerType = {},
    sFlowerCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0, 3 do
            self.bFlowerType[i] = {}
            for j = 0, 34 do
                self.bFlowerType[i][j] = bis:readUInt8()
            end
            self.sFlowerCount[i] = bis:readUInt16()
        end
        return self
    end
}

GameProtocol.msgTaiCount = {
    XY_ID = 1060,

    sTaiCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sTaiCount = bis:readUInt16()
        return self
    end
}

GameProtocol.msgTiaoCount = {
    XY_ID = 1081,

    sTiaoCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0, 3 do
            self.sTiaoCount[i] = {}
            self.sTiaoCount[i] = bis:readUInt16()
        end
        return self
    end
}

GameProtocol.msgBase = {
    XY_ID = 1064,

    lBase = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.lBase = bis:readInt32()
        return self
    end
}

GameProtocol.msgHuDanFang = {
    XY_ID = 1071,

    tDanFang = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.tDanFang = bis:readUInt8()
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1078,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    maxHuaCount = {},
    show = false,
    boxRoomAllBanker = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readUInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}
            for j = 1,self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end
            self.maxHuaCount[i] = bis:readInt32()
        end
        self.show = bis:readBool()

        for i = 0,3 do
            local onePlayerAllBanker = {}
            for j = 1,self.playCount do
                if bis:getAvailableSize() > 0 then
                    onePlayerAllBanker[j] = bis:readBool()
                end
            end
            self.boxRoomAllBanker[i] = onePlayerAllBanker
        end
        return self
    end
}

GameProtocol.msgOutMahDir = {
    XY_ID = 1079,

    sDirType = 1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sDirType = bis:readUInt16()
        return self
    end
}

GameProtocol.msgWaitingData = {
    XY_ID = 1082,

    checkOutMahSize = 0,
    tingInfoLen = {},
    tingMsgInfo = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.tingInfoLen = {}
        self.tingMsgInfo = {}
        self.checkOutMahSize = bis:readUInt8()
        for i = 1, self.checkOutMahSize do
            self.tingInfoLen[i] = bis:readUInt16()
        end

        for i = 1, self.checkOutMahSize do
            self.tingMsgInfo[i] = {}
            for j = 1, self.tingInfoLen[i] do
                self.tingMsgInfo[i][j] = bis:readUInt16()
            end
        end

        return self
    end
}

GameProtocol.msgWallCount = {
    XY_ID = 1084,

    cnt = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.cnt = bis:readUInt16()

        return self
    end
}

return GameProtocol