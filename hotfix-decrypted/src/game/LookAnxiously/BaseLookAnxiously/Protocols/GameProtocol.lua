local GameProtocol = CF.gameClass("GameProtocol", "game.GameBase.Protocols.GameProtocol")

GameProtocol.msgBaseClientForwardEx = {

    XY_ID = 22,
    CF_ID = {
        FastVoice = 1,
        GPS_MSG = 2,
        Mobile_Signal = 3,
        Speed_Test = 4,
        WireBreak_Signal = 5,
        Expression = 6,
        FaceAni = 7,
        PlayerHeadEffect = 8,
        PropAni = 9,
        PlayerHeadTrust = 10,
        Emoji = 11,
        QiaoPiHua = 12,
        HeadUrl = 13,
        AMap = 14,
        VIPEffect = 15,
    },

    CT_ID = {

        XY_FORWARD = 1,
        XY_SAVE_FORWARD = 2,
    },

    sSeat = 0,
    toSeat = -1,
    sID = 0,
    sType = 0,
    strData = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.toSeat)
        bos:writeInt16(self.sID)
        bos:writeInt16(self.sType)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sSeat = bis:readInt16()
        self.toSeat = bis:readInt16()
        self.sID = bis:readInt16()
        self.sType = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgGameStart = {
    XY_ID = 1025,

    bIsStart = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bIsStart = bis:readBool()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bIsStart)
        return bos
    end,
}

GameProtocol.msgGameStep = {
    XY_ID = 1026,

    nStepID = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nStepID = bis:readInt32()
        return self
    end
}

GameProtocol.msgBaseScore = {
    XY_ID = 1027,

    iBaseScore = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iBaseScore = bis:readInt32()
        return self
    end
}

GameProtocol.msgAllCards = {
    XY_ID = 1028,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.ucCount = bis:readUInt8()
        --清空一波
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgSpecfCard = {
    XY_ID = 1029,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.ucCount = bis:readUInt8()
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgHandCards = {
    XY_ID = 1030,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},
    bAni = false,
    nIndex = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        bos:writeBool(self.bAni)
        bos:writeInt32(self.nIndex)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        self.bAni = bis:readBool()
        self.nIndex = bis:readInt32()
        return self
    end
}

GameProtocol.msgPlayerCardsCount = {
    XY_ID = 1031,

    sSeat = 0,
    ucCount = 0,
    bShow = false,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)
        bos:writeBool(self.bShow)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.ucCount = bis:readUInt8()
        self.bShow = bis:readBool()
        return self
    end
}

GameProtocol.msgClock = {
    XY_ID = 1032,

    seat = 0,
    clock = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.clock = bis:readInt16()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.clock)
        return bos
    end,
}

GameProtocol.msgPower = {
    XY_ID = 1033,

    sPowerSeat = 0, -- 当前玩家位置
    sPrePowerSeat = 0, -- 上一个玩家位置
    sTurn = 0, -- 下一个玩家位置

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sPowerSeat)
        bos:writeInt16(self.sPrePowerSeat)
        bos:writeInt16(self.sTurn)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPowerSeat = bis:readUInt8()
        self.sPrePowerSeat = bis:readUInt8()
        self.sTurn = bis:readUInt8()
        return self
    end
}

GameProtocol.msgOutCard = {
    XY_ID = 1034,

    ucCard = {},
    ucCardCount = 0,
    sSeat = 0,
    sCardType = 0,
    sEndPower = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCardCount)
        for i = 1, self.ucCardCount do
            bos:writeUInt8(self.ucCard[i])
        end
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sCardType)
        bos:writeInt16(self.sEndPower)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucCardCount = bis:readUInt8()
        self.ucCard = {}
        for i = 1, self.ucCardCount do
            self.ucCard[i] = bis:readUInt8()
        end
        self.sSeat = bis:readUInt16()
        self.sCardType = bis:readUInt16()
        self.sEndPower = bis:readUInt16()
        return self
    end
}

GameProtocol.msgEndType = {
    XY_ID = 1035,

    sEndType = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sEndType = bis:readUInt16()
        return self
    end
}

GameProtocol.msgWinLost = {
    XY_ID = 1036,

    iLeftNum = {},
    iScore = {},
    iSelfMult = {},
    iPublicMult = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.iLeftNum[i] = bis:readInt32()
            self.iScore[i] = bis:readInt32()
            self.iSelfMult[i] = bis:readInt32()
        end
        self.iPublicMult = bis:readInt32()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            bos:writeInt32(self.iLeftNum[i])
            bos:writeInt32(self.iScore[i])
            bos:writeInt32(self.iSelfMult[i])
        end
        bos:writeInt32(self.iPublicMult)
        return bos
    end,

}

GameProtocol.msgGameEnd = {
    XY_ID = 1037,

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

GameProtocol.msgRoomHostSeat = {
    XY_ID = 1038,

    seat = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt8()
        return self
    end
}

GameProtocol.msgPlayCount = {
    XY_ID = 1039,

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
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.playCount)
        bos:writeInt16(self.maxPlayCount)
        return bos
    end,
}

GameProtocol.msgGameRule = {
    XY_ID = 1040,

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

GameProtocol.msgTotalResult = {
    XY_ID = 1041,

    sPlayCount = 0,
    show = false,
    sWinCount = {},
    sLostCount = {},
    sBoomCount = {},
    iTotalScore = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayCount = bis:readUInt16()
        self.show = bis:readBool()
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.sWinCount[i] = bis:readUInt16()
            self.sLostCount[i] = bis:readUInt16()
            self.sBoomCount[i] = bis:readUInt16()
            self.iTotalScore[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1042,

    seat = 0,

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
        self.seat = bis:readUInt16()
        return self
    end
}

GameProtocol.msgRespondDismiss = {
    XY_ID = 1043,

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
        self.seat = bis:readUInt16()
        self.agree = bis:readBool()
        return self
    end
}

GameProtocol.msgDismissFlag = {
    XY_ID = 1044,

    flag = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        return self
    end
}

GameProtocol.msgTrust = {
    XY_ID = 1045,

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

GameProtocol.msgMultiple = {
    XY_ID = 1046,

    iMultiple = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.iMultiple = bis:readInt32()
        return self
    end
}


GameProtocol.msgMustOutCard = {
    XY_ID = 1047,

    ucMustOutCardID = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucMustOutCardID = bis:readUInt8()
        return self
    end
}

--msgAllHandCards协议与msgAllDirCards协议结构需要保持一致
--(或者需要在GameSceneFillRecordGameMsg中调整两者协议转换的方式)
GameProtocol.msgAllHandCards = {
    XY_ID = 1048,

    ucPlayerCount = 0,
    ucCount = {},
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucPlayerCount = bis:readUInt8()
        for i = 1, self.ucPlayerCount do
            self.ucCount[i] = bis:readUInt8()
            self.ucCards[i] = {}
            for t = 1, self.ucCount[i] do
                self.ucCards[i][t] = bis:readUInt8()
            end
        end

        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucPlayerCount)
        for i = 1, self.ucPlayerCount do
            bos:writeUInt8(self.ucCount[i])
            for t = 1, self.ucCount[i] do
                bos:writeUInt8(self.ucCards[i][t])
            end
        end
        return bos
    end
}

--msgAllHandCards协议与msgAllDirCards协议结构需要保持一致
--(或者需要在GameSceneFillRecordGameMsg中调整两者协议转换的方式)
GameProtocol.msgAllDirCards = {
    XY_ID = 1049,

    ucPlayerCount = 0,
    ucCount = {},
    ucCards = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucPlayerCount = bis:readUInt8()
        for i = 1, self.ucPlayerCount do
            self.ucCount[i] = bis:readUInt8()
            self.ucCards[i] = {}
            for t = 1, self.ucCount[i] do
                self.ucCards[i][t] = bis:readUInt8()
            end
        end

        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucPlayerCount)
        for i = 1, self.ucPlayerCount do
            bos:writeUInt8(self.ucCount[i])
            for t = 1, self.ucCount[i] do
                bos:writeUInt8(self.ucCards[i][t])
            end
        end
        return bos
    end
}

GameProtocol.msgDismissCountdown = {
    XY_ID = 1050,
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
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
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
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.iAgrees[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgGameRuleUser = {
    XY_ID = 1051,

    strRule = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strRule)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strRule = bis:readString()
        return self
    end
}

GameProtocol.msgPlayerWait = { --取消准备
    XY_ID = 1052,

    nBrandID = 0,
    nNumberID = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.nBrandID)
        bos:writeUInt32(self.nNumberID)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        return self
    end
}

GameProtocol.msgUseMarker = {
    XY_ID = 1053,

    seat = 4,
    markerState = 0,
    endTime = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt16(self.seat)
        bos:writeInt16(self.markerState)
        bos:writeInt64(self.endTime)

        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readUInt16()
        self.markerState = bis:readUInt16()
        self.endTime = bis:readInt64()

        return self
    end
}

GameProtocol.msgJiPaiQi = {
    XY_ID = 1054,

    ucJPQ = {},
    ucFlag = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        for i = 1, 15 do
            bos:writeUInt8(self.ucJPQ[i])
        end
        bos:writeUInt8(self.ucFlag)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucJPQ = {}
        for i = 1, 15 do
            self.ucJPQ[i] = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.ucFlag = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgDrawCards = {
    XY_ID = 1055,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},
    nIndex = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        self.nIndex = bis:readInt32()
        return self
    end
}

GameProtocol.msgLeftCardsCount = {
    XY_ID = 1056,

    sTotalCardsCount = 54,
    sLeftCardsCount = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sTotalCardsCount)
        bos:writeUInt16(self.sLeftCardsCount)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sTotalCardsCount = bis:readUInt16()
        self.sLeftCardsCount = bis:readUInt16()
        return self
    end
}


GameProtocol.msgObviousCardsDataEx = {
    XY_ID = 1057,

    nCount = 0,
    cardsData = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readInt32()
        for i = 0, self.nCount do
            local data = {}
            data.takeCardsCount = bis:readUInt8()
            data.takeCards = {}
            for j = 1, data.takeCardsCount do
                data.takeCards[j] = bis:readUInt8()
            end
            data.handCardsCount = bis:readUInt8()
            data.handCards = {}
            for j = 1,data.handCardsCount do
                data.handCards[j] = bis:readUInt8()
            end
            self.cardsData[i] = data
        end
        self.cardsData[0] = nil
        return self
    end
}

GameProtocol.msgSpring = {
    XY_ID = 1058,
    ucSpringCount = 0,
    sSpringSeat = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucSpringCount = bis:readUInt8()
        self.sSpringSeat = {}
        for i = 1, self.ucSpringCount do
            self.sSpringSeat[i] = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.msgSpecfGetAllCards = {
    XY_ID = 1059,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        return bos
    end 
}

GameProtocol.msgSpecfWallCards = {
    XY_ID = 1060,

    ucCount = 0,
    ucCards = {},

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
        return bos
    end
}

GameProtocol.msgFirstOutInfo = {
    XY_ID = 1061,
    bFirstOut = false,
    sSeat = 0,
    bAni = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bFirstOut = bis:readBool()
        self.bAni = bis:readBool()
        return self
    end
}

GameProtocol.msgAddMulti = {
    XY_ID = 1478,
    seat = 4,
    multi = 0,
    ADDMULTITYPE = {  
        NONE = 0,        -- 未操作加倍
        PASS = 1,        -- 不加倍
        DEFAULT = 2,     -- 普通加倍
        SUPER = 3        -- 超级加倍
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt16(self.multi)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.multi = bis:readInt16()
        return self
    end 
}

GameProtocol.msgReturnProp = {
    XY_ID = 1479,
    propID = 0,
    propCount = 0,
    returnReason = 0, --1为抄底
    REASON = {  
        NONE = 0,        -- 
        CHAODI = 1,      -- 抄底
        TIMEOUT = 2,     -- 超时
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
   
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.propID = bis:readInt32()
        self.propCount = bis:readInt32()
        self.returnReason = bis:readInt32()
        return self
    end 
}

return GameProtocol l  