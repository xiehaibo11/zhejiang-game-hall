local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,

    nWinLost = {},      -- 本局优胜值
    nJiDao = {},        -- 计道
    nZongDao = {},      -- 总道
    nBaoDao = {},       -- 包牌道数
    nPlayerState = {},  -- 玩家状态
    nYaPoType = {},     -- 压迫类型
    nDanFang = 0,       -- 胡单放
    bFinal = false,
    bFirstTaoHua = false,   -- 是否首抓逃花
    bTaoHua = {},           -- 是否逃花

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nWinLost = {}
        self.nJiDao = {}
        self.nZongDao = {}
        self.nBaoDao = {}
        self.nPlayerState = {}
        self.nYaPoType = {}
        self.nDanFang = 0
        self.bFinal = false
        self.bFirstTaoHua = false
        self.bTaoHua = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nJiDao[i] = bis:readInt32()
            self.nZongDao[i] = bis:readInt32()
            self.nBaoDao[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
            self.nYaPoType[i] = bis:readUInt8()
        end
        self.nDanFang = bis:readInt32()
        self.bFinal = bis:readBool()
        if bis:getAvailableSize() > 0 then
            self.bFirstTaoHua = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.bTaoHua[i] = bis:readBool()
            end
        end
        return self
    end
}

GameProtocol.msgSpeak = {
    XY_ID = 1028,

    id = 0,
    bIsMan = false,
    speakSeat = 0,
    strData = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.id = bis:readInt32()
        self.bIsMan = bis:readBool()
        self.speakSeat = bis:readInt32()
        self.strData = bis:readString()

        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    show = false,

    nWinByOwn = {},         -- 自摸胡次数
    nJiePaoNum = {},        -- 接炮次数
    nDiscardNum = {},       -- 点炮次数
    nChengBaoNum = {},      -- 包三家次数
    nTaoHuaNum = {},        -- 逃花次数
    nYaPoNum = {},          -- 压迫次数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.boxRoomTotalWinLost = {}

        self.playCount = bis:readUInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
        end
        self.show = bis:readBool()
        if bis:getAvailableSize() > 0 then
            self.nWinByOwn = {}
            self.nJiePaoNum = {}
            self.nDiscardNum = {}
            self.nChengBaoNum = {}
            self.nTaoHuaNum = {}
            self.nYaPoNum = {}
            for i = 0, 3 do
                self.nWinByOwn[i] = bis:readInt32()
                self.nJiePaoNum[i] = bis:readInt32()
                self.nDiscardNum[i] = bis:readInt32()
                self.nChengBaoNum[i] = bis:readInt32()
                self.nTaoHuaNum[i] = bis:readInt32()
                self.nYaPoNum[i] = bis:readInt32()
            end
        end
        return self
    end
}

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    nRemainingTime = 0,
    bAgree = {},

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
        self.seat = bis:readUInt16()
        self.nRemainingTime = bis:readInt32()
        for i = 0, 3 do
            if bis:getAvailableSize() > 0 then
                self.bAgree[i] = bis:readBool()
            end
        end
        return self
    end
}

GameProtocol.msgWallCnt = {
    XY_ID = 1044,
    cnt = 0,

    new = function( self, o )
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.cnt = bis:readUInt16()
        return self
    end
}

GameProtocol.msgShuffleSeatsTZ = {
    XY_ID = 1045,

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

GameProtocol.msgLeftBanker = {
    XY_ID = 1046,

    leftBanker = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.leftBanker = bis:readUInt16()
        return self
    end
}

GameProtocol.msgTaoHua = {
    XY_ID = 1047,

    sSeat = 0,
    bTaoHua = false,
    bFirst = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeBool(self.bTaoHua)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.bTaoHua = bis:readBool()
        self.bFirst = bis:readBool()
        return self
    end
}

GameProtocol.msgPowerWH = {
    XY_ID = 1048,

    nSeat = 0,
    nPower = 0,
    nActionID = 0,
    nCount = 0,
    nPowerMahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nPower = bis:readInt32()
        self.nActionID = bis:readInt32()
        self.nCount = bis:readUInt8()
        self.nPowerMahs = {}
        for i = 1, self.nCount do
            self.nPowerMahs[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgAction = {
    XY_ID = 1049,

    nSeat = 0,
    tComb = {},
    nPowerID = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.tComb.nFlag)
        bos:writeUInt8(self.tComb.nFromSeat)
        bos:writeUInt8(self.tComb.nCount)
        for i = 1 , self.tComb.nCount do
            bos:writeUInt8(self.tComb.nMahs[i])
        end
        bos:writeUInt8(self.tComb.nInCount)
        for i = 1 , self.tComb.nInCount do
            bos:writeUInt8(self.tComb.nInMahs[i])
        end

        bos:writeInt32(self.nPowerID)
        bos:writeInt32(self.nActionID)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readUInt8()
        self.tComb = {}
        self.tComb.nFlag = bis:readUInt8()
        self.tComb.nFromSeat = bis:readUInt8()
        self.tComb.nCount = bis:readUInt8()

       self.tComb.nMahs = {}
        for i = 1 , self.tComb.nCount do
            self.tComb.nMahs[i] = {}
            self.tComb.nMahs[i] = bis:readUInt8()
        end
        self.tComb.nInCount = bis:readUInt8()

        self.tComb.nInMahs = {}
        for i = 1 , self.tComb.nInCount do
            self.tComb.nInMahs[i] = {}
            self.tComb.nInMahs[i] = bis:readUInt8()
        end
        self.nPowerID = bis:readInt32()
        return self
    end
}

GameProtocol.msgYaoZhang = {
    XY_ID = 1050,

    bAni = false,
    nCount = 0,
    nYaoZhang = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bAni = bis:readBool()
        self.nCount = bis:readUInt8()
        self.nYaoZhang = {}
        for i = 1, self.nCount do
            self.nYaoZhang[i] = bis:readUInt8()
        end

        return self
    end
}

GameProtocol.msgPlayerMahHu = {
    XY_ID = 1051,

    nSeat = 0,                  --座位
    nCombCount = 0,             --牌组个数
    tCombs = {},                --牌组
    nHuMah = 0,
    nCombScore = {},            --每一道的分数
    nDangTouScore = 0,          --宕头分数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCombCount = bis:readUInt8()

        self.tCombs = {}
        for i = 1,self.nCombCount do
            self.tCombs[i] = {}
            self.tCombs[i].nFlag = bis:readUInt8()
            self.tCombs[i].nFromSeat = bis:readUInt8()
            self.tCombs[i].nCount = bis:readUInt8()

            self.tCombs[i].nMahs = {}
            for j = 1 , self.tCombs[i].nCount do
                self.tCombs[i].nMahs[j] = {}
                self.tCombs[i].nMahs[j] = bis:readUInt8()
            end
            self.tCombs[i].nInCount = bis:readUInt8()
            self.tCombs[i].nInMahs = {}
            for j = 1 , self.tCombs[i].nInCount do
                self.tCombs[i].nInMahs[j] = {}
                self.tCombs[i].nInMahs[j] = bis:readUInt8()
            end
        end

        if bis:getAvailableSize() > 0 then
            self.nHuMah = bis:readUInt8()
        end

        self.nCombScore = {}
        if bis:getAvailableSize() > 0 then
            for i = 1, self.nCombCount do
                self.nCombScore[i] = bis:readInt16()
            end
        end
        if bis:getAvailableSize() > 0 then
            self.nDangTouScore = bis:readInt16()
        end

        return self
    end
}

GameProtocol.msgTaoHuaPower =
{
    XY_ID = 1052,

    sSeat = 0,
    havePower = false,
    bFirst = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.havePower = bis:readBool()
        self.bFirst = bis:readBool()

        return self
    end
}

GameProtocol.msgXianHua = {
    XY_ID = 1053,

    sSeat = 0,
    nMah = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.nMah)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.nMah = bis:readUInt8()

        return self
    end
}

GameProtocol.msgSongZhang = {
    XY_ID = 1054,

    nSeat = 0,
    nCount = 0,             --张数
    nMahs = {},             --限制的牌

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.nCount = bis:readUInt8()
        self.nMahs = {}
        for i = 1, self.nCount do
            self.nMahs[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgGameDaoShu = {
    XY_ID = 1055,

    nSeat = 0,
    nScore = 0,             --张数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.nScore = bis:readInt32()
        return self
    end
}

GameProtocol.msgChaoShiTaoHua = {
    XY_ID = 1056,

     nTime = 0,
     bShow = false,

     new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nTime = bis:readInt32()
        self.bShow = bis:readBool()
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nTime)
        bos:writeBool(self.bShow)
        return bos
    end,
}

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
        HeadUrl = 12,
        AMap = 13,
        QiaoPiHua = 14,
        TouchPoint = 15,
        OperatePass = 16, --转发过操作
        OPERATE_PASS = 160
    },
    CT_ID = {
        XY_FORWARD = 1,
        XY_SAVE_FORWARD = 2
    },
    sSeat = 0,
    toSeat = -1,
    sID = 0,
    sType = 0,
    strData = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
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

return GameProtocol
