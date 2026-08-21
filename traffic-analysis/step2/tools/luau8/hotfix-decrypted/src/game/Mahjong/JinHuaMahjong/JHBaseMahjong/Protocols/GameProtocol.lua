local GameLogicProtocol = CF.gameClass("GameLogicProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameLogicProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    time = 180,             -- 倒计时
    respondDismiss = {};    -- -1：初始化未做选择 0：拒绝解散 2：同意解散

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        if bos:getAvailableSize() > 0 then
            bos:writeUInt32(self.time)
        end
        for i = 1,4 do
            if bos:getAvailableSize() > 0 then
                bos:writeUInt32(self.respondDismiss[i])
            end
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        if bis:getAvailableSize() > 0 then
            self.time = bis:readUInt32()
        end
        for i = 1,4 do
            if bis:getAvailableSize() > 0 then
                local temp = bis:readUInt32()
                self.respondDismiss[i] = temp
            end
        end
        return self
    end
}

GameLogicProtocol.msgRespondDismiss = {
    XY_ID = 1040,

    seat = 4,
    agree = false,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.agree = bis:readBool()
        return self
    end
}

GameLogicProtocol.msgDismissFlag = {
    XY_ID = 1041,

    flag = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.flag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt16()
        return self
    end
}
GameLogicProtocol.msgPlayTings = {
    XY_ID = 556,

    nSeat = 0,
    nCount = 0,
    tingmahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.tingmahs = {}

        for i = 1 , 14 do
            self.tingmahs[i] = {}
            self.tingmahs[i].nCount = bis:readUInt8()
            self.tingmahs[i].from = bis:readUInt8()
            self.tingmahs[i].tmahs = {}

            --print("msgPlayTings11111111:", self.tingmahs[i].nCount, self.tingmahs[i].from)
            for k = 1, 9 do
                self.tingmahs[i].tmahs[k] = {};
                self.tingmahs[i].tmahs[k].mah = bis:readUInt8()
                self.tingmahs[i].tmahs[k].ft = bis:readInt32()
                --print("msgPlayTings22222222:", self.tingmahs[i].tmahs[k].mah , self.tingmahs[i].tmahs[k].ft)
            end
        end
        return self
    end
}

GameLogicProtocol.msgTotalResultEx = {
    XY_ID = 1050,
    playCount = 0,
    baseScore = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.baseScore = bis:readUInt16()
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
        return self
    end
}

GameLogicProtocol.msgClientForward =
    {

        XY_ID = 1043,
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
            Location = 11,
        },
        seat = 0,                 -- 座位号
        id = 0,
        strData = "",
        new = function(self,o)
            o = o or {}
            setmetatable(o,{__index = self})
            return o
        end,

        bostream = function (self)
            local bos = un.network.IStream.new()
            bos:writeUInt16(self.seat)
            bos:writeUInt16(self.id)
            local encodeURL = string.urlencode(self.strData)
            bos:writeString(encodeURL)
            return bos
        end,

        bistream = function( self, buff, bufflen )
            local bis = un.network.OStream.new(buff)
            self.seat = bis:readUInt16()
            self.id = bis:readUInt16()
            self.strData = string.urldecode(bis:readString())
            return self
        end
    }
return GameLogicProtocol�