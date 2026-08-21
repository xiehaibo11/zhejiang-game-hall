local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgDynamicTableRespond = {
    XY_ID = 1410,

    RESPOND = {
        NONE = 0,
        REQUEST = 1,
        AGREE = 2,
        DISAGREE = 3,
    },

    sSeat = 0,
    sRespond = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sSeat)
        bos:writeUInt16(self.sRespond)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.sRespond = bis:readUInt16()
        return self
    end
}

GameProtocol.msgGameRule = {
    XY_ID = 1037,

    strGameRule = "",
    strOriginalGameRule = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        bos:writeString(self.strOriginalGameRule)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        if bis:getAvailableSize() > 0 then
            self.strOriginalGameRule = bis:readString()
        end
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,
    showex = 0,
    nContinueCounts = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        for i = 0, 3 do
            local onePlayerTotalWinLost = {}
            for j = 1, self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}
            for j = 1, self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end
        end
        self.show = bis:readBool()
        self.showex = bis:readBool()
        if bis:getAvailableSize() > 0 then
            self.nContinueCounts = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgDismissInfo = {
    XY_ID = 1100,

    ntime = -1,
    nflag = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ntime = bis:readInt32()
        for i = 1, 4 do
            self.nflag[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgChessGameRule = {
    XY_ID = 1300,

    strGameRule = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        return self
    end
}

GameProtocol.msgChessGameMaxWaitTime = {
    XY_ID = 1301,

    ntime = 4,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ntime = bis:readInt32()
        return self
    end
}

GameProtocol.msgChipSwapSeat = {
    XY_ID = 1303,

    sPlayerCount = 0,
    tChips = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayerCount = bis:readUInt16()

        self.tChips = {}
        for i = 1, self.sPlayerCount do
            self.tChips[i] = {}
            self.tChips[i].nSeat = bis:readUInt8()
            self.tChips[i].nCount = bis:readUInt8()

            self.tChips[i].nChips = {}
            for j = 1, self.tChips[i].nCount do
                self.tChips[i].nChips[j] = {}
                self.tChips[i].nChips[j] = bis:readUInt8()
            end
        end
        return self
    end
}

GameProtocol.msgSwapSeat = {
    XY_ID = 1304,

    sNowseat = 0,
    sOtherseat = 0,
    bIsSwapSeatEnd = 0,
    bIsHuanWei = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sNowseat = bis:readUInt16()
        self.sOtherseat = bis:readUInt16()
        self.bIsSwapSeatEnd = bis:readBool()
        self.bIsHuanWei = bis:readBool()

        return self
    end
}

GameProtocol.msgChessProxyid = {
    XY_ID = 1405,

    proxyid = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.proxyid = bis:readInt32()
        return self
    end
}

GameProtocol.msgContinueConfig = {
    XY_ID = 1408,

    bContinue = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bContinue = bis:readBool()
        return self
    end
}

GameProtocol.msgDynamicTableRequest = {
    XY_ID = 1409,

    sSeat = 0,
    sPlayerCount = 0,
    nTime = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sSeat)
        bos:writeUInt16(self.sPlayerCount)
        bos:writeInt32(self.nTime)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.sPlayerCount = bis:readUInt16()
        self.nTime = bis:readInt32()
        return self
    end
}

GameProtocol.msgDynamicTableFlag = {
    XY_ID = 1411,

    FLAG = {
        SUCCESS = 0,
        PLAYER_ENTER = 1,
        PLAYER_LEAVE = 2,
        TIMEOUT = 3,
        DISAGREE = 4,
        PLAYER_COUNT = 5,
    },

    sFlag = 0,
    sSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sFlag)
        bos:writeUInt16(self.sSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sFlag = bis:readUInt16()
        self.sSeat = bis:readUInt16()
        return self
    end
}

GameProtocol.msgDynamicTableChairs = {
    XY_ID = 1412,

    STATE = {
        NONE = 0,
        DTS_REQUEST = 1,
        DTS_DONE = 2,
    },

    sChairs = 0,
    sState = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sChairs)
        bos:writeUInt16(self.sState)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sChairs = bis:readUInt16()
        self.sState = bis:readUInt16()
        return self
    end
}

GameProtocol.msgDynamicTableChangeSeat = {
    XY_ID = 1413,

    sPlayerSeat = 0,
    sEmptySeat = 0,
    sChairs = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sPlayerSeat)
        bos:writeUInt16(self.sEmptySeat)
        bos:writeUInt16(self.sChairs)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayerSeat = bis:readUInt16()
        self.sEmptySeat = bis:readUInt16()
        self.sChairs = bis:readUInt16()
        return self
    end
}


GameProtocol.msgTingMahInfoEx = {  --  公共库暂无562 msgTingMahInfo 协议，先在逻辑新增一条一样的协议
    XY_ID = 1453,

    sDelMahSize = 0, --  有几张牌出了之后能听牌
    nDealMah = {}, --  哪几张出了之后能听
    sTingSize = {}, --  出了某张牌，能听几张
    bUniversalHu = {}, --  出了某张牌，是否万能听
    nTingMah = {}, --  具体听那几张
    sTingMahCount = {}, --  具体听的那张剩余几张
    sTingMahFan = {}, --  具体听的那张番数


    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sDelMahSize = bis:readUInt16()
        for i = 1, self.sDelMahSize do
            self.nDealMah[i] = bis:readUInt8()
            self.sTingSize[i] = bis:readUInt16()
            self.bUniversalHu[i] = bis:readBool()
            self.nTingMah[i] = {}
            self.sTingMahCount[i] = {}
            self.sTingMahFan[i] = {}
            for j = 1, self.sTingSize[i] do
                self.nTingMah[i][j] = bis:readUInt8()
                self.sTingMahCount[i][j] = bis:readUInt16()
                self.sTingMahFan[i][j] = bis:readUInt16()
            end
        end
        return self
    end
}

-- 公共库暂无562 msgTingMahInfo 协议，先新增一条一样的协议
GameProtocol.msgTingMahInfo = GameProtocol.msgTingMahInfo or {
    XY_ID = 562,

    sDelMahSize = 0, --  出那几张能听cnt
    nDealMah = {}, --  出那几张能听
    sTingSize = {}, --  出的那张 能听几张
    bUniversalHu = {}, --  出的那张  是否万能听
    nTingMah = {}, --  具体听那几张
    sTingMahCount = {}, --  具体听的那张剩余几张
    sTingMahFan = {}, --  具体听的那张番数


    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
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

return GameProtocol