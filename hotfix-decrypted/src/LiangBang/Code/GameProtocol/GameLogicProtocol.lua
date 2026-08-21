local GameLogicProtocol = GameLogicProtocol or {}
local CURRENT_MOUDLE_NAME = ...
local GameKeyWord = import("..Config.GameKeyWord", CURRENT_MOUDLE_NAME)

-- 只有4人，暂时写死
local MaxPlayer = 4 

GameLogicProtocol.msgHaveMingPai = {
    XY_ID = 1057,

    bMingPai = false,
    sSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.bMingPai = bis:readBool()
        self.sSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgGameStart = {
    XY_ID = 1401,

    bIsStart = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nFlag = bis:readUInt8()
        return self
    end
}

GameLogicProtocol.msgGameStep = {
    XY_ID = 1402,

    iGameStep = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iGameStep = bis:readInt32()
        return self
    end
}

GameLogicProtocol.msgHandCard = {
    XY_ID = 1403,

    ucSeat = 0,
    ucCount = 0,
    ucCards = {},
    bIsShow = 0,
    bPlayAni = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucSeat)
        bos:writeUInt8(self.ucCount)
        bos:writeBool(self.bIsShow)
        bos:writeBool(self.bPlayAni)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucSeat = bis:readUInt8()
        self.ucCount = bis:readUInt8()
        self.bIsShow = bis:readBool()
        self.bPlayAni = bis:readBool()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

GameLogicProtocol.msgSwapSeat = {
    XY_ID = 1405,
    ucnowseat = 0,
    ucotherseat = 0,
    bIsHuanWei = false,
    bPlayAni = false,
    bIsSwapSeatEnd = false,


    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucnowseat = bis:readUInt8()
        self.ucotherseat = bis:readUInt8()
        self.bIsHuanWei = bis:readBool()
        self.bPlayAni = bis:readBool()
        self.bIsSwapSeatEnd = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgWaitTakeCard = {
    XY_ID = 1406,
    sSeat = 0,
    bSuccess = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bSuccess)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.bSuccess = bis:readBool()
        return self
    end
}



GameLogicProtocol.msgWaitSwapSeat = {
    XY_ID = 1408,
    sSeat = 0,
    bSuccess = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bSuccess)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.bSuccess = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgOpenCard = {
    XY_ID = 1410,

    ucCardID = 0,
    bPlayAni = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCardID)
        bos:writeBool(self.bPlayAni)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucCardID = bis:readUInt8()
        self.bPlayAni = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgWaitOpenCard = {
    XY_ID = 1411,
    sSeat = 0,
    bSuccess = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bSuccess)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.bSuccess = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgOpenCardSeat = {
    XY_ID = 1412,

    sFirstSeat = 0,
    sSecondSeat = 0,
    bPlayAni = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sFirstSeat = bis:readInt16()
        self.sSecondSeat = bis:readInt16()
        self.bPlayAni = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgBase = {
    XY_ID = 1415,

    iBase = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:WriteInt(self.iBase)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iBase = bis:readInt32()
        return self
    end
}

GameLogicProtocol.msgGameMut = {
    XY_ID = 1416,

    iWinTime = 0,
    iLostTime = 0,
    iGong = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iWinTime = bis:readInt32()
        self.iLostTime = bis:readInt32()
        self.iGong = bis:readInt32()
        return self
    end
}

GameLogicProtocol.msgPower = {
    XY_ID = 1418,

    sPowerSeat = 0,
    sPrePowerSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sPowerSeat)
        bos:writeInt16(self.sPrePowerSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sPowerSeat = bis:readInt16()
        self.sPrePowerSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgClock = {
    XY_ID = 1419,

    sSeat = 0,
    sClock = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sClock)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.sClock = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgSendAllCard = {
    XY_ID = 1421,

    ucCard = {},
    ucCardCount = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucCard = {}
        for i = 1, 162 do
            self.ucCard[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.ucCardCount = bis:readUInt8()
        end
        return self
    end
}

GameLogicProtocol.msgWaitSelecrCard = {
    XY_ID = 1422,

    ucCard = {},
    ucCardCount = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 1, 27 do
            local cardID = 0
            if i <= self.ucCardCount then
                cardID = self.ucCard[i]
            end
            bos:writeUInt8(cardID)
        end
        bos:writeUInt8(self.ucCardCount)
        return bos
    end,
}

GameLogicProtocol.msgQiaoPiHua = {
    XY_ID = 1423,

    sSeat = 0,
    sIndex = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sIndex)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.sIndex = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgCanChaoDi = {
    XY_ID = 1427,

    bCanChaodi = 0,
    sSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.bCanChaodi = bis:readBool()
        self.sSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgPlayerChaoDi = {
    XY_ID = 1428,

    bCanChaodi = 0,
    sSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bCanChaodi)
        bos:writeInt16(self.sSeat)
        return bos
    end,
}

GameLogicProtocol.msgOutCards = {
    XY_ID = 1429,

    ucCards = {},
    ucCount = 0,
    sSeat = 0,
    sCardType = 0,
    bIsReconntce = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sCardType)
        bos:writeBool(self.bIsReconntce)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end

        self.sSeat = bis:readInt16()
        self.sCardType = bis:readInt16()
        self.bIsReconntce = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgShowOutCards = {
    XY_ID = 1430,

    ucCards = {},
    ucCount = 0,
    sSeat = 0,
    sCardType = 0,
    bIsReconntce = false,


    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeUInt8(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sCardType)
        bos:writeBool(self.bIsReconntce)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end

        self.sSeat = bis:readInt16()
        self.sCardType = bis:readInt16()
        self.bIsReconntce = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgWinOrder = {
    XY_ID = 1431,

    ucSeat = 0,
    ucOrder = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucSeat)
        bos:writeUInt8(self.ucOrder)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucSeat = bis:readUInt8()
        self.ucOrder = bis:readUInt8()
        return self
    end
}

GameLogicProtocol.msgJokerData = {
    XY_ID = 1433,

    ucCards = {},
    ucCount = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

GameLogicProtocol.msgAllOutRecord = {
    XY_ID = 1434,

    ucOutRecordCards = {},
    ucOutRecordCardsCount = {},
    sOutRecorfCardsType = {},
    sOutRecordCount = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 0, MaxPlayer - 1 do
            self.sOutRecordCount[i] = bis:readInt16()
            self.sOutRecorfCardsType[i] = {}
            self.ucOutRecordCardsCount[i] = {}
            self.ucOutRecordCards[i] = {}
            for j = 1, self.sOutRecordCount[i] do
                self.sOutRecorfCardsType[i][j] = bis:readInt16()
                self.ucOutRecordCardsCount[i][j] = bis:readUInt8()
                self.ucOutRecordCards[i][j] = {}
                for k = 1, self.ucOutRecordCardsCount[i][j] do
                    self.ucOutRecordCards[i][j][k] = bis:readUInt8()
                end
            end
        end
        return self
    end
}

GameLogicProtocol.msgWinLost = {
    XY_ID = 1435,

    sEndType = 0,
    sGong = {},
    iScore = {},
    sXianShu = {},
    sWinOrder = {},
    sChaoDiSeat = 0,
    sEscapeSeat = 0,
    sWinMut = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sGong = {}
        self.iScore = {}
        self.sXianShu = {}
        self.sWinOrder = {}
        self.sEndType = bis:readInt16()
        local maxPlayerCount = MaxPlayer
        for i = 0, maxPlayerCount - 1 do
            self.sGong[i] = bis:readInt16()
            self.iScore[i] = bis:readInt32()
            self.sXianShu[i] = {}
            for j = 0, 12 do
                self.sXianShu[i][j] = bis:readInt16()
            end
            self.sWinOrder[i] = bis:readInt16()
        end
        self.sChaoDiSeat = bis:readInt16()
        self.sEscapeSeat = bis:readInt16()
        self.sWinMut = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgTrust = {
    XY_ID = 1437,

    sTrustSeat = 0,
    bTrust = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
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

GameLogicProtocol.msgLianZhaBuDai = {
    XY_ID = 1443,

    bLianZhaBuDai = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.bLianZhaBuDai = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgGameEnd = {
    XY_ID = 1445,

    bIsGameEnd = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bIsGameEnd)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.bIsGameEnd = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgGameType = {
    XY_ID = 1447,

    ucGameType = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucGameType)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucGameType = bis:readUInt8()
        return self
    end
}

GameLogicProtocol.msgGameGong = {
    XY_ID = 1450,

    sSeat = 4,
    iGongXian = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.iGongXian = bis:readInt32()
        return self
    end
}

GameLogicProtocol.msgRoomHostSeat = {
    XY_ID = 1453,

    seat = 4,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgPlayCount = {
    XY_ID = 1454,

    playCount = 0,
    maxPlayCount = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readInt16()
        self.maxPlayCount = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgGameRule = {
    XY_ID = 1455,

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


GameLogicProtocol.msgTotalResult = {
    XY_ID = 1456,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxXian = {},
    maxWin = {},
    totalDoubleKou = {},
    show = false,
    onePlayerTotalWinLost = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readInt16()
        for i = 0, 3 do
            self.onePlayerTotalWinLost = {}
            for j = 1, self.playCount do
                self.onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = self.onePlayerTotalWinLost
            self.maxXian[i] = bis:readInt32()
            self.maxWin[i] = bis:readInt32()
            self.totalDoubleKou[i] = bis:readInt32()
        end
        self.show = bis:readBool()
        return self
    end

}

GameLogicProtocol.msgRequestDismiss = {
    XY_ID = 1457,

    seat = 4,
    nRemainingTime = 0,
    bAgree = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt32(self.nRemainingTime)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        if bis:getAvailableSize() then
            self.nRemainingTime = bis:readInt32()
        end
        for i = 0, MaxPlayer do
            if bis:getAvailableSize() then
                self.bAgree[i] = bis:readBool()
            end
        end
        return self
    end
}

GameLogicProtocol.msgRespondDismiss = {
    XY_ID = 1458,

    seat = 4,
    agree = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        self.agree = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgDismissFlag = {
    XY_ID = 1459,

    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.flag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgAvatarUrl = {
    XY_ID = 1460,
    seat = 0, -- 座位号
    avatarUrl = "", -- 头像地址

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        local encodeURL = string.urlencode(self.avatarUrl)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.avatarUrl = string.urldecode(bis:readString())
        return self
    end
}

GameLogicProtocol.msgClientForward = {

    XY_ID = 1461,
    CF_ID = {
        FastVoice = 1,
        PlayerHeadEffect = 2,
        WireBreakSignal = 3,
        MobileSignal = 4,
        Speak = 5,
        ChatMsgEmoji = 6,
        ChatMsgText = 7,
        PropAni = 8,
    },
    seat = 0, -- 座位号
    id = 0,
    strData = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.id)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.id = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameLogicProtocol.msgRequestSwapSeat = {
    XY_ID = 1462,
    srcSeat = 4,
    destSeat = 4,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.srcSeat)
        bos:writeInt16(self.destSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.srcSeat = bis:readInt16()
        self.destSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgRespondSwapSeat = {
    XY_ID = 1463,
    seat = 0,
    agree = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.agree = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgSwapSeatFlag = {
    XY_ID = 1464,
    srcSeat = 0,
    destSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.srcSeat)
        bos:writeInt16(self.destSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.srcSeat = bis:readInt16()
        self.destSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgShowSwapSeat = {
    XY_ID = 1465,

    bIsShowSwapSeat = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.bIsShowSwapSeat = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgObviousCardsData = {
    XY_ID = 1472,
    allRoundCount = 0,
    ObviousCards = {},
    playerID = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.allRoundCount = bis:readInt32()
        for i = 1, self.allRoundCount do
            self.ObviousCards[i] = {}
            self.ObviousCards[i].ucCount = bis:readUInt8()
            self.ObviousCards[i].ucCards = {}
            for j = 1, self.ObviousCards[i].ucCount do
                self.ObviousCards[i].ucCards[j] = bis:readUInt8()
            end
        end
        if bis:getAvailableSize() > 0 then
            for i = 1, self.allRoundCount do
                self.playerID[i] = bis:readInt32()
            end
        end

        return self
    end
}

GameLogicProtocol.msgDismissCountdown = {
    XY_ID = 1473,
    sSeat = 0,
    reqSeat = 0,
    nTime = 0, --剩余倒计时时间
    iAgrees = {}, --玩家同意信息
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.reqSeat)
        bos:writeInt16(self.nTime)
        for i = 0, MaxPlayer - 1 do
            bos:writeInt16(self.iAgrees[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.reqSeat = bis:readInt16()
        self.nTime = bis:readInt16()
        self.iAgrees = {}
        for i = 0, MaxPlayer - 1 do
            self.iAgrees[i] = bis:readInt16()
        end
        return self
    end
}

GameLogicProtocol.msgAllHandCards = {
    XY_ID = 1474,
    allRoundCount = 0,
    ObviousCards = {},
    playerID = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        self.ObviousCards = {}
        self.playerID = {}
        local bis = un.network.OStream.new(buff)
        self.allRoundCount = bis:readInt32()
        for i = 1, self.allRoundCount do
            self.ObviousCards[i] = {}
            self.ObviousCards[i].ucCount = bis:readUInt8()
            self.ObviousCards[i].ucCards = {}
            for j = 1, self.ObviousCards[i].ucCount do
                self.ObviousCards[i].ucCards[j] = bis:readUInt8()
            end
        end
        if bis:getAvailableSize() > 0 then
            for i = 1, self.allRoundCount do
                self.playerID[i] = bis:readInt32()
            end
        end

        return self
    end
}

GameLogicProtocol.msgNoOutGong = {
    XY_ID = 1475,
    iCaiXiang = false,
    sNoOutGong = {},
    sCaiXiang = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iCaiXiang = bis:readBool()
        self.sNoOutGong = {}
        for i = 0, MaxPlayer - 1 do
            self.sNoOutGong[i] = bis:readInt16()
        end
        self.sCaiXiang = {}
        for i = 0, MaxPlayer - 1 do
            self.sCaiXiang[i] = bis:readInt16()
        end
        return self
    end
}

--请求投降
GameLogicProtocol.msgRequestSurrender = {
    XY_ID = 1474,

    sReqSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sReqSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sReqSeat = bis:readInt16()
        return self
    end
}
-- 点击投降或者买牌
GameLogicProtocol.msgRespondSurrender = {
    XY_ID = 1475,
    sResSeat = 0,
    -- 1投降 2 买牌
    sFlag    = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sResSeat)
        bos:writeInt16(self.sFlag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sResSeat = bis:readInt16()
        self.sFlag = bis:readInt16()
        return self
    end
}
-- 投降买牌
GameLogicProtocol.msgSurrenderCountDown = {
    XY_ID = 1476,

    sReqSeat = 0, -- 请求投降玩家的座位号
    sResSeat = 0, -- 投降或者是买牌玩家的座位号
    sFlag = 0, -- 0啥也没做  1 投降 2 买牌
    nTime = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sReqSeat)
        bos:writeInt16(self.sResSeat)
        bos:writeInt16(self.sFlag)
        bos:writeInt16(self.nTime)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sReqSeat = bis:readInt16()
        self.sResSeat = bis:readInt16()
        self.sFlag = bis:readInt16()
        self.nTime = bis:readInt16()
        return self
    end
}

-- 桌面闷拿分
GameLogicProtocol.msgScoreTableShowTurn = {
    XY_ID = 1477,
    sScore = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sScore)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sScore = bis:readInt16()
        return self
    end
}

-- 每人的闷拿分
GameLogicProtocol.msgScoreEveryPlayerTurn = {
    XY_ID = 1478,
    sScore = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 1, MaxPlayer do
            bos:writeInt16(self.sScore[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1, MaxPlayer do
            self.sScore[i] = bis:readInt16()
        end
        return self
    end
}

-- 炸弹分
GameLogicProtocol.msgScoreBombTurn = {
    XY_ID = 1479,
    sBombScore = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 1, MaxPlayer do
            bos:writeInt16(self.sBombScore[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1, MaxPlayer do
            self.sBombScore[i] = bis:readInt16()
        end
        return self
    end
}
--总
GameLogicProtocol.msgTotalResultDT = {
    XY_ID = 1480,
    sPlayCount = 0,
    bShow = false, -- 是否显示总
    sTotalScore = {},
    sEveryScore = {}, -- 二维
    sBigWinnerSeat = -1,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayCount = bis:readInt16()
        self.bShow = bis:readBool()
        for i = 0, MaxPlayer - 1 do
            self.sTotalScore[i] = bis:readInt16()
            local everyScore = {}
            for j = 0, self.sPlayCount - 1 do
                everyScore[j] = bis:readInt16()
            end
            self.sEveryScore[i] = everyScore
        end
        if bis:getAvailableSize() > 0 then
            self.sBigWinnerSeat = bis:readInt16()
        end
        return self
    end
}

--小
GameLogicProtocol.msgWinLostDT = {
    XY_ID = 1481,
    sEndType = 0,
    sGraspScore = {}, -- 本轮抓分
    sOneScore = {}, -- 单局总优胜值
    sTotalScore = {}, -- 历史总优胜值
    sWinOrder = {}, --名次 {[0] = 2 ,[1] = 3, [2] = 4, [3] = 1}  服务端座位号-> 名次（出完牌顺序）
    bIsFinal = false, --是否最后一局

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sEndType = bis:readInt16()
        for i = 1, MaxPlayer do
            if bis:getAvailableSize() > 0 then
                self.sGraspScore[i] = bis:readInt16()
            end
            if bis:getAvailableSize() > 0 then
                self.sOneScore[i] = bis:readInt16()

            end
            if bis:getAvailableSize() > 0 then
                self.sTotalScore[i] = bis:readInt16()
            end
            if bis:getAvailableSize() > 0 then
                self.sWinOrder[i] = bis:readInt16()
            end
        end
        if bis:getAvailableSize() > 0 then
            self.bIsFinal = bis:readBool()
        end
        return self
    end
}
--投降标记
GameLogicProtocol.msgSurrenderFlag = {
    XY_ID = 1482,
    sflag = {}, -- 标记，0能投降，1不能投降

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1, MaxPlayer do
            self.sflag[i] = bis:readInt16()
        end
        return self
    end
}
-- 每个玩家总优胜值
GameLogicProtocol.msgTotalScore = {
    XY_ID = 1483,
    sTotalScore = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1, MaxPlayer do
            self.sTotalScore[i] = bis:readInt16()
        end
        return self
    end
}

GameLogicProtocol.msgReqShuffle = {
    XY_ID = 1484,

    sSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgShuffleSeats = {
    XY_ID = 1485,

    sSeat = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 0, MaxPlayer - 1 do
            bos:writeInt16(self.sSeat[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0, MaxPlayer - 1 do
            self.sSeat[i] = bis:readInt16()
        end
        return self
    end
}

GameLogicProtocol.msgShuffleFinish = {
    XY_ID = 1486,

    bFlag = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bFlag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bFlag = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgWaitShowBombAni = {
    XY_ID = 1487,

    sSeat = 0,
    bIsSuccess = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bIsSuccess)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bIsSuccess = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgWaitShowBomb = {
    XY_ID = 1488,

    sSeat = 0,
    bIsSuccess = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bIsSuccess)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bIsSuccess = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgFourJokerScore = {
    XY_ID = 1489,

    sSeat = 0,
    sScore = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sScore)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.sScore = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgStableBombSeat = {
    XY_ID = 1490,

    sSeat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        return self
    end
}

GameLogicProtocol.msgFFZSeat = {
    XY_ID = 1491,
    sSeat = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 0, MaxPlayer - 1 do
            bos:writeInt16(self.sSeat[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0, MaxPlayer - 1 do
            self.sSeat[i] = bis:readInt16()
        end
        return self
    end
}

GameLogicProtocol.msgFFZBomb = {
    XY_ID = 1492,

    sSeat = 0,
    bAnimation = true,
    sCombCount = 0,
    bIsNoBomb = false,
    allComb = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        self.sSeat = 0
        self.bAnimation = true
        self.sCombCount = 0
        self.bIsNoBomb = false
        self.allComb = {}
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bAnimation = bis:readBool()
        self.sCombCount = bis:readInt16()
        self.bIsNoBomb = bis:readBool()
        if self.sCombCount > 0 then
            for i = 1, self.sCombCount do
                self.allComb[i] = {}
                self.allComb[i].combScore = bis:readInt16()
                self.allComb[i].cardType = bis:readInt16()
                self.allComb[i].isTongSe = bis:readBool()
                self.allComb[i].ucCount = bis:readUInt8()
                self.allComb[i].ucCards = {}
                for j = 1, self.allComb[i].ucCount do
                    self.allComb[i].ucCards[j] = bis:readUInt8()
                end
            end
        end
        return self
    end
}

--小
GameLogicProtocol.msgFFZBombOnce = {
    XY_ID = 1493,
    sCombCount = {}, --炸弹数量
    allComb = {}, --炸弹牌

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        self.sCombCount = {}
        self.allComb = {}
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1, MaxPlayer do
            self.sCombCount[i] = bis:readInt16()
            local combCount = self.sCombCount[i]
            self.allComb[i] = {}
            if combCount > 0 then
                for j = 1, combCount do
                    self.allComb[i][j] = {}
                    self.allComb[i][j].combScore = bis:readInt16()
                    self.allComb[i][j].cardType = bis:readInt16()
                    self.allComb[i][j].ucCount = bis:readUInt8()
                    self.allComb[i][j].ucCards = {}
                    for k = 1, self.allComb[i][j].ucCount do
                        self.allComb[i][j].ucCards[k] = bis:readUInt8()
                    end
                end
            end
        end
        return self
    end
}

GameLogicProtocol.msgFFZJoker = {
    XY_ID = 1494,
    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        self.sSeat = 0
        self.ucCount = 0
        self.ucCards = {}
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        if self.ucCount > 0 then
            for i = 1, self.ucCount do
                self.ucCards[i] = bis:readUInt8()
            end
        end
        return self
    end
}

GameLogicProtocol.msgSpecialBomb = {
    XY_ID = 1495,
    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        self.sSeat = 0
        self.ucCount = 0
        self.ucCards = {}
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        if self.ucCount > 0 then
            for i = 1, self.ucCount do
                self.ucCards[i] = bis:readUInt8()
            end
        end
        return self
    end
}

GameLogicProtocol.msgScoreCard = {
    XY_ID = 1496,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        self.ucCount = 0
        self.ucCards = {}
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucCount = bis:readUInt8()
        if self.ucCount > 0 then
            for i = 1, self.ucCount do
                self.ucCards[i] = bis:readUInt8()
            end
        end
        return self
    end
}

GameLogicProtocol.msgTouJiaScore = {
    XY_ID = 1497,
    sScore = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        self.sScore = 0
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sScore = bis:readInt16()
        return self
    end
}

return GameLogicProtocol   ��  