local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgReqTingFan = {
    XY_ID = 1148,	-- 请求听牌番数

    seat = -1,
    mah = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeUInt8(self.mah)
        return bos
    end,
}

GameProtocol.msgTWaitCancel = {
    XY_ID = 1210,

    nSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.nSeat)
        return bos
    end
}

GameProtocol.msgRelinkBegin = {
    XY_ID = 1047,

    nIndex = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nIndex = bis:readUInt8()

        return self
    end
}

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

GameProtocol.msgShowTkongMah = {
    XY_ID = 1059,

    nSeat = 0,
    nManCount=0,
    combIndex = {},
    nMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nManCount = bis:readUInt8()
        self.nMahs = {}
        self.combIndex = {}
        for i=1, self.nManCount do
            self.combIndex[i] = bis:readUInt8()
        end
        for i=1, self.nManCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgEndLeftMahs = {
    XY_ID = 1060,

    whoplay = 0,
    nLeftCnt = {},
    nLeftMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.whoplay = bis:readInt16()
        self.nLeftCnt = {}
        self.nLeftMahs = {}
        for i = 0,3 do
            self.nLeftCnt[i] = bis:readUInt8()
        end
        for i = 0,3 do
            self.nLeftMahs[i] = {}
            for j = 1,self.nLeftCnt[i] do
                self.nLeftMahs[i][j] = bis:readUInt8()
            end
        end
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    show = false,
    playCount = 0,
    boxRoomTotalWinLost = {},

    ziMoCnt={},
    jiePaoCnt = {},
    dianPaoCnt = {},

    beiLv = 1,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.show = bis:readBool()
        self.playCount = bis:readInt16()
        self.boxRoomTotalWinLost = {}
        self.ziMoCnt = {}
        self.jiePaoCnt = {}
        self.dianPaoCnt = {}
        for i = 0, 3 do
            self.ziMoCnt[i] = bis:readInt16()
            self.jiePaoCnt[i] = bis:readInt16()
            self.dianPaoCnt[i] = bis:readInt16()
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
        end
        if bis:Avail() > 0 then
            self.beiLv = bis:readInt16()
            for i = 0, 3 do
                for j = 1,self.playCount do
                    self.boxRoomTotalWinLost[i][j] = self.boxRoomTotalWinLost[i][j]/self.beiLv
                end
            end
        else
            self.beiLv = 1
        end
        return self
    end
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    nRemainingTime = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeUInt32(self.nRemainingTime)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.nRemainingTime = bis:readInt32()
        return self
    end
}

GameProtocol.msgHuExNew = {
    XY_ID = 1146,

    nCount = 0,
    nSeats = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readUInt8()
        self.nSeats = {}
        for i = 1, self.nCount do
            self.nSeats[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgTeaRoomRule = {
    XY_ID = 1180,

    steaid = 0,
    said = 0,
    snid  = 0,
    sright = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.steaid)
        bos:writeUInt32(self.said)
        bos:writeUInt32(self.snid)
        bos:writeUInt32(self.sright)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.steaid = bis:readInt32()
        self.said = bis:readInt32()
        self.snid = bis:readInt32()
        self.sright = bis:readInt32()
        return self
    end
}

GameProtocol.msgTingMahInfo = {
    XY_ID = 1147, --  562,

    sDelMahSize = 9,    --  出那几张能听cnt
    nDealMah = {},
    sTingSize = {},
    bUniversalHu = {},
    nTingMah = {},
    sTingMahCount = {},
    sTingMahFan = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:WriteBool(self.bFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nDealMah = {}
        self.sTingSize = {}
        self.bUniversalHu = {}
        self.nTingMah = {}
        self.sTingMahCount = {}
        self.sTingMahFan = {}

        self.sDelMahSize = bis:readInt16()
        for i = 1, self.sDelMahSize do
            self.nDealMah[i] = bis:readUInt8()
            self.sTingSize[i] = bis:readInt16()
            self.bUniversalHu[i] = bis:readBool()
            self.nTingMah[i] = {}
            self.sTingMahCount[i] = {}
            self.sTingMahFan[i] = {}
            for j = 1, self.sTingSize[i] do
                self.nTingMah[i][j] = bis:readUInt8()
                self.sTingMahCount[i][j] = bis:readInt16()
                self.sTingMahFan[i][j] = bis:readInt16()
            end
        end

        return self
    end
}

GameProtocol.msgRespTingFan = {
    XY_ID = 1149, --  562,

    nDealMah = 0,    --  出那几张能听cnt
    sTingSize = 0,
    bUniversalHu = false,
    nTingMah = {},
    sTingMahCount = {},
    sTingMahFan = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:WriteBool(self.bFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nTingMah = {}
        self.sTingMahCount = {}
        self.sTingMahFan = {}

        self.nDealMah = bis:readUInt8()
        self.sTingSize = bis:readInt16()
        self.bUniversalHu = bis:readBool()
        for j = 1, self.sTingSize do
            self.nTingMah[j] = bis:readUInt8()
            self.sTingMahCount[j] = bis:readInt16()
            self.sTingMahFan[j] = bis:readInt16()
        end

        return self
    end
}

GameProtocol.msgPlayerGangMahs = {
    XY_ID = 1212,
    seat = -1, --short
    mahCnt = 0, -- byte
    mahs = {}, --
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.mahCnt = bis:readUInt8()
        self.mahs = {}
        for i=1, self.mahCnt do
            self.mahs[i] = bis:readUInt8()
        end
        return self
    end
}

-- 换座
GameProtocol.msgExchangeSeat = {
    XY_ID = 1210,

    sSeatOne = -1,
    sSeatTwo = -1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
     bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeatOne = bis:readInt16()
        self.sSeatTwo = bis:readInt16()
        return self
    end
}

GameProtocol.msgOutMah = {
    XY_ID = 547,

    nSeat = 0,
    nCount = 0,
    nMahs = {},
    nLastOutMah = 0;

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1 , self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.nLastOutMah = bis:readUInt8()
        end
        return self
    end
}

return GameProtocol