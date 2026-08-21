local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")
GameProtocol.msgDynamicTableRespond = {
    XY_ID = 1410,
    RESPOND = {
        NONE = 0,
        REQUEST = 1,
        AGREE = 2,
        DISAGREE = 3
    },
    sSeat = 0,
    sRespond = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sSeat)
        bos:writeUInt16(self.sRespond)
        return bos
    end
}

GameProtocol.msgGameRule = {
    XY_ID = 1037,
    strGameRule = "",
    strOriginalGameRule = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
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
    delayTime = 0,
    gameInfo = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
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
        self.delayTime = bis:readInt32()
        self.gameInfo = {}
        for i = 0, 3 do
            self.gameInfo[i] = bis:readString()
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
        setmetatable(o, {__index = self})
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

GameProtocol.msgHeadScore = {
    XY_ID = 1052,
    nHeadScore = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nHeadScore = {}
        for i = 1, 4 do
            self.nHeadScore[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgResultNew = {
    XY_ID = 1056,
    endtype = -1,
    jokercnt = 0,
    szGameLua = {},
    szPlayerLua = {},
    szPlayerMah = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.endtype = bis:readInt32()
        self.jokercnt = bis:readInt32()
        self.szGameLua = bis:readString()
        self.szPlayerLua = {}
        self.szPlayerMah = {}
        for i = 1, 4 do
            self.szPlayerLua[i] = bis:readString()
        end
        for i = 1, 4 do
            self.szPlayerMah[i] = bis:readString()
        end
        return self
    end
}

-- 重写小结束协议，增加杠分
GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},
    bIsJiGangFen = false,
    nKongScore = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end
        self.bIsJiGangFen = bis:readBool()
        for i = 0, 3 do
            self.nKongScore[i] = bis:readInt64()
        end
        return self
    end
}

GameProtocol.msgNowTingInfo = {
    XY_ID = 1157,
    seat = 0,
    sTingSize = 0,
    bUniversalHu = false,
    nTingMah = {},
    sTingMahCount = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.sTingSize)
        bos:writeBool(self.bUniversalHu)
        for i = 1, self.sTingSize do
            bos:writeUInt8(self.nTingMah[i])
            bos:writeInt16(self.sTingMahCount[i])
        end
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.sTingSize = bis:readInt16()
        self.bUniversalHu = bis:readBool()
        for i = 1, self.sTingSize do
            self.nTingMah[i] = bis:readUInt8()
            self.sTingMahCount[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgGangFeng = {
    XY_ID = 1455,
    nTotalScore = {},
    -- nCurScore = {},
    -- sType = 0,
    -- sSeat = 0,
    -- bRelink = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nTotalScore = {}
        -- self.nCurScore = {}
        for i = 0, 3 do
            self.nTotalScore[i] = bis:readInt32()
            -- self.nCurScore[i] = bis:readInt32()
        end
        -- self.sType = bis:readUInt16()
        -- self.sSeat = bis:readUInt16()
        -- self.bRelink = bis:readBool()
        return self
    end
}

return GameProtocol
m