local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgResult = {
    XY_ID = 1026,

    nWinLost = {},      -- 本局优胜值
    nCountHu = {},      -- 牌面胡数
    nCountTai = {},     -- 麻将台数
    nToTalCountHu = {}, -- 总计弧数
    nPlayerState = {},  -- 玩家状态
    bLazi = false,      -- 是否腊子
    nDanFang = 0,       -- 胡单放
    bFinal = false,
    bFengDing = {}, --封顶情况

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nWinLost = {}
        self.nCountHu = {}
        self.nCountTai = {}
        self.nToTalCountHu = {}
        self.nPlayerState = {}
        self.bLazi = false
        self.nDanFang = 0
        self.bFinal = false
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt32()
            self.nCountHu[i] = bis:readInt32()
            self.nCountTai[i] = bis:readInt32()
            self.nToTalCountHu[i] = bis:readInt32()
            self.nPlayerState[i] = bis:readUInt8()
        end
        self.bLazi = bis:readBool()
        self.nDanFang = bis:readInt32()
        self.bFinal = bis:readBool()
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.bFengDing[i] = bis:readBool()
            end
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

    nWinByOwn = {},         -- 自摸胡次数
    nWinScoreNum = {},      -- 胜分次数
    nJiePaoNum = {},        -- 接炮次数
    nDiscardNum = {},       -- 点炮次数
    nMaxSorceOfTotal = {},  -- 最高分
    nLaZiNum = {},          -- 辣子次数
    nChengBaoNum = {},      -- 包三家次数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.boxRoomTotalWinLost = {}
        self.maxHuCount = {}
        self.maxFanNum = {}
        self.maxFanCount = {}
        self.maxFanName = {}

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
        end
        self.show = bis:readBool()
        if bis:getAvailableSize() > 0 then
            self.nWinByOwn = {}
            self.nWinScoreNum = {}
            self.nJiePaoNum = {}
            self.nDiscardNum = {}
            self.nMaxSorceOfTotal = {}
            self.nLaZiNum = {}
            self.nChengBaoNum = {}
            for i = 0, 3 do
                self.nWinByOwn[i] = bis:readInt32()
                self.nWinScoreNum[i] = bis:readInt32()
                self.nJiePaoNum[i] = bis:readInt32()
                self.nDiscardNum[i] = bis:readInt32()
                self.nMaxSorceOfTotal[i] = bis:readInt32()
                self.nLaZiNum[i] = bis:readInt32()
                self.nChengBaoNum[i] = bis:readInt32()
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

GameProtocol.msgTaiName = {
    XY_ID = 1045,
    nFanCount = {},     -- 台数
    nTaiName = {},      -- 台数名称

    new = function( self, o )
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        for i = 0, 3 do
            self.nFanCount[i] = bis:readInt32()
            self.nTaiName[i] = {}
            for j = 0,self.nFanCount[i] do
                self.nTaiName[i][j] = bis:readInt32()
            end
        end
        return self
    end
}

GameProtocol.msgWallCnt = {
    XY_ID = 1048,
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

GameProtocol.msgShengPaiCnt = {
    XY_ID = 1049,

    cnt = 0,
    bFirst = false,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.cnt = bis:readUInt16()
        self.bFirst = bis:readBool()
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

GameProtocol.msgLeftBanker =
{
    XY_ID = 1050,

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

GameProtocol.msgShuffleSeatsTZ = {
    XY_ID = 1052,

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

GameProtocol.msgTingMahInfo = {
    XY_ID = 562,
    sDelMahSize = 0,    --  出那几张能听cnt
    nDealMah = {},      --  出那几张能听
    sTingSize = {},     --  出的那张 能听几张
    bUniversalHu = {},  --  出的那张  是否万能听
    nTingMah = {},      --  具体听那几张
    sTingMahCount = {}, --  具体听的那张剩余几张
    sTingMahFan = {},   --  具体听的那张番数
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
        self.nDealMah = {}
        self.sTingSize = {}
        self.bUniversalHu = {}
        self.nTingMah = {}
        self.sTingMahCount = {}
        self.sTingMahFan = {}
        self.sDelMahSize = bis:readUInt16()
        for i = 0, self.sDelMahSize - 1 do
            self.nDealMah[i] = bis:readUInt8()
            self.sTingSize[i] = bis:readUInt16()
            self.bUniversalHu[i] = bis:readBool()
            self.nTingMah[i] = {}
            self.sTingMahCount[i] = {}
            self.sTingMahFan[i] = {}
            for j = 0, self.sTingSize[i] - 1 do
                self.nTingMah[i][j] = bis:readUInt8()
                self.sTingMahCount[i][j] = bis:readUInt16()
                self.sTingMahFan[i][j] = bis:readUInt16()
            end
        end
        return self
    end
}

GameProtocol.msgTestSingleTingMah = {
    XY_ID = 1053,

    nSeat = 0,              --座位
    outmah = 0,             --牌组个数
    count = 0,              --牌组
    nMahFan = {},           --手牌张数

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readUInt16()
        self.outmah = bis:readUInt8()
        self.count = bis:readUInt8()

        self.nMahFan = {}
        for i = 1, self.count do
            self.nMahFan[i] = bis:readUInt16()
        end
        return self
    end
}

--23人提前开局相关
GameProtocol.msgAdvanceStart = {
    XY_ID = 1200,

    nSeat = 0,
    nPlayerCnt = 4,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.nPlayerCnt = bis:readInt32()

        return self
    end
}

GameProtocol.msgReqAdvanceStart = {
    XY_ID = 1201,

    nSeat = 0,
    nTime = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.nSeat)
        bos:writeInt32(self.nTime)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.nTime = bis:readInt32()

        return self
    end
}

GameProtocol.msgAdvanceStartFlag = {
    XY_ID = 1202,

    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readInt32()

        return self
    end
}

GameProtocol.msgReqAdPlayerAgree = {
    XY_ID = 1203,

    nSeat = 0,
    bAgree = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.nSeat)
        bos:writeBool(self.bAgree)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.bAgree = bis:readBool()

        return self
    end
}

--同意 提前开局 换座协议
GameProtocol.msgDynamicTableChangeSeat = {
    XY_ID = 1204,

    sPlayerSeat = 0,
    sEmptySeat = 0,
    sChairs = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayerSeat = bis:readUInt16()
        self.sEmptySeat = bis:readUInt16()
        self.sChairs = bis:readUInt16()

        return self
    end
}

--听牌信息
GameProtocol.msgAllWaitInfo = {
     XY_ID = 1500,

     nOutMahCnt = 0,
     bShowFanNum = false,
     bShowHuNum = false,
     waitMahInfo = {},

     new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nOutMahCnt = bis:readUInt8()
        self.bShowFanNum = bis:readBool()
        self.bShowHuNum = bis:readBool()

        self.waitMahInfo = {}
        for i = 1, self.nOutMahCnt do
            self.waitMahInfo[i] = {}
            self.waitMahInfo[i].nOutMah = bis:readUInt8()
            local nWaitCnt = bis:readUInt8()
            self.waitMahInfo[i].nWaitCnt = nWaitCnt
            self.waitMahInfo[i].nWaitMahs = {}
            self.waitMahInfo[i].nLeftCnt = {}
            self.waitMahInfo[i].nFanPoint = {}
            self.waitMahInfo[i].nHuPoint = {}
            for j = 1, nWaitCnt do
                self.waitMahInfo[i].nWaitMahs[j] = bis:readUInt8()
            end
            for j = 1, nWaitCnt do
                self.waitMahInfo[i].nLeftCnt[j] = bis:readUInt8()
            end
            for j = 1, nWaitCnt do
                self.waitMahInfo[i].nFanPoint[j] = bis:readInt32()
            end
            for j = 1, nWaitCnt do
                self.waitMahInfo[i].nHuPoint[j] = bis:readInt32()
            end
        end
        return self
    end
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
�?