local GameProtocol = CF.gameClass("GameProtocol", "game.Landlords.BaseLandlords.Protocols.GameProtocol")

GameProtocol.msgTotalResult = { 
    XY_ID = 525,    --大结束

    nPlayerCount = 0,
    sPlayCount = 0,
    sWinCount = {},
    sBoomCount = {},
    iTotalScore = {},
    nSpringCount = {},
    sLandLordCount = {},
    
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayerCount = bis:readInt16()
        self.sPlayCount = bis:readInt16()

        self.sWinCount = {}
        for i = 1, self.nPlayerCount do
            self.sWinCount[i] = bis:readInt16()
        end

        self.sBoomCount = {}
        for i = 1, self.nPlayerCount do
            self.sBoomCount[i] = bis:readInt16()
        end

        self.iTotalScore = {}
        for i = 1, self.nPlayerCount do
            self.iTotalScore[i] = bis:readInt16()
        end

        self.nSpringCount = {}
        for i = 1, self.nPlayerCount do
            self.nSpringCount[i] = bis:readInt16()
        end

        self.sLandLordCount = { }
        for i = 1, self.nPlayerCount do
            self.sLandLordCount[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgRobLandlordInfo = { 
    XY_ID = 1027,    --抢地主类型

    isSendAllSign = false,
    nLandlordType = 0,
    nRobLandlordRateCnt = 0,
    nRobLandlordRate = {},
    bForceRobLandLord = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.isSendAllSign)
        bos:writeInt32(self.nLandlordType)
        bos:writeInt32(self.nRobLandlordRateCnt)

        for i = 1, self.nRobLandlordRateCnt do
            bos:writeInt32(self.nRobLandlordRate[i])
        end
        bos:writeBool(self.bForceRobLandLord)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.isSendAllSign = bis:readBool()
        self.nLandlordType = bis:readInt32()
        self.nRobLandlordRateCnt = bis:readInt32()

        self.nRobLandlordRate = {}
        for i = 1, self.nRobLandlordRateCnt do
            self.nRobLandlordRate[i] = bis:readInt32()
        end
        self.bForceRobLandLord = bis:readBool()
        return self
    end
}

return GameProtocolI
