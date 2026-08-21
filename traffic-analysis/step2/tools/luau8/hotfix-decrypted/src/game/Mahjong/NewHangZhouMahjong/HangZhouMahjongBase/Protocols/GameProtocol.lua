local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgRequestDismiss = {
    XY_ID = 1039,

    seat = 4,
    time = 300,
    respondDismiss = {};

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeInt32(self.time)
        for i = 1,4 do
            bos:writeInt32(self.respondDismiss[i])
        end

        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        self.time = bis:readInt32()
        for i = 1,4 do
            self.respondDismiss[i] = bis:readInt32()
        end

        return self
    end  
}

GameProtocol.msgTotalResultEx = {
    XY_ID = 1070,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,
    over = false,

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
        end
        self.show = bis:readBool()
        self.over = bis:readBool()
        return self
    end 
}

GameProtocol.msgBaseScore = {
    XY_ID = 1091,

    nBaseScore = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBaseScore = bis:readInt32()
        return self
    end 
}

GameProtocol.msgEndTypeEx = {
    XY_ID = 1092,

    sEndType = 0,
    sSeat = 0,--自摸：胡牌，放冲：点炮玩家
    sHuSeat = 0,--胡牌座位

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sEndType = bis:readUInt16()
        self.sSeat = bis:readUInt16()
        self.sHuSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgCaiPiao = {
    XY_ID = 1093,

    sSeat = 0,--打出财神的玩家座位

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        return self
    end 
}

GameProtocol.msgContractRelationships = {
    XY_ID = 1094,
    bContractStatus = {},
    bFContractStatus = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 1 , 4 do
            self.bContractStatus[i] = bis:readBool()
        end
        for i = 1 , 4 do
            self.bFContractStatus[i] = bis:readBool()
        end
        return self
    end 
}

GameProtocol.msgPlayTingsEx = {
    XY_ID = 1095,
    
    nSeat = 0,
    nCount = 0,
    tingmahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.tingmahs = {}

        for i = 1 , 14 do
            self.tingmahs[i] = {}
            self.tingmahs[i].nCount = bis:readUInt8()
            self.tingmahs[i].from = bis:readUInt8()
            self.tingmahs[i].tmahs = {}
            
            for k = 1, 10 do
                self.tingmahs[i].tmahs[k] = {};
                self.tingmahs[i].tmahs[k].mah = bis:readUInt8()
                self.tingmahs[i].tmahs[k].ft = bis:readInt32()
            end
        end
    end 
}

GameProtocol.msgPlayerScore = {
    XY_ID = 1098,
    nWinLost = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        for i = 0 , 4 - 1 do
            self.nWinLost[i] = bis:readInt64()
        end
        return self
    end 
}

GameProtocol.msgPlayerAction = {
    XY_ID = 1099,
    
    nSeat = 0,
    nFlag = 0, 
    nIndex = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        bis:attach(buff, bufflen)
        self.nSeat = bis:readUInt8()
        self.nFlag = bis:readUInt8()
        self.nIndex = bis:readInt32()
        return self
    end 
}

GameProtocol.msgPowerEx = {
    XY_ID = 1100,

    nSeat = 0,
    nPower = 0,
    nIndex = 0,
    nActionID = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nPower = bis:readInt32()
        self.nIndex = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.nActionID = bis:readInt32()
        end
        return self
    end 
}

GameProtocol.msgAheadStartSelected = {
    XY_ID = 1102,
    selectedFlag = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.selectedFlag = bis:readInt16()
        return self
    end, 

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.selectedFlag)
        return bos
    end 
}


GameProtocol.msgAheadStartInfo = {
    CFS = 
    {
        aspsNull = 0,       --没在续桌
        aspsAheadStartWait = 1, --等待提前开局
        aspsAheadStarting = 2,      --提前开局流程中
        aspsAheadStartEnd = 3,      --提前开局完成
        aspsAheadStartChange = 4,       --提前开局完成
        aspsAheadTimeOut = 5,
        aspsAheadOk = 6,
        aspsAheadNo = 7,

    },
    
    XY_ID = 1103,
    sCurrentNum = 0,   -- 当前椅子数
    sCurrentFlag = 0,   --当前流程状态
    lStartTime = 0,     --开始计时
    nDuration = 0,      --倒计时时间
    sAheadFirstSeat = -1,
    sAgreeSeatCount = 0,
    sAheadAgreeSeat = {},
    nAheadSeatId = {},
    lSoSendTime = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sCurrentNum = bis:readInt16()
        self.sCurrentFlag = bis:readInt16()
        self.lStartTime = bis:readInt64()
        self.nDuration = bis:readInt32()
        self.sAheadFirstSeat = bis:readInt16()
        self.sAgreeSeatCount = bis:readInt16()
        self.sAheadAgreeSeat = {}
        self.nAheadSeatId = {}

        for i = 1, self.sAgreeSeatCount do
            self.sAheadAgreeSeat[i] = bis:readInt16()
        end
        for i = 1, self.sAgreeSeatCount do
            self.nAheadSeatId[i] = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.lSoSendTime = bis:readInt64()
        end
        return self
    end 
}

GameProtocol.msgClientForwardEx = {

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
        Location = 12,
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
    
    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.toSeat)
        bos:writeInt16(self.sID)
        bos:writeInt16(self.sType)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.toSeat = bis:readInt16()
        self.sID = bis:readInt16()
        self.sType = bis:readInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgClientForward =
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
    sSeat = 0,                 -- 座位号
    sID = 0,
    strData = "",

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.sSeat)
        bos:writeUInt16(self.sID)
        local encodeURL = string.urlencode(self.strData)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.sID = bis:readUInt16()
        self.strData = string.urldecode(bis:readString())
        return self
    end
}

GameProtocol.msgObviousMahsData = {
    XY_ID = 1101,

    nCount = 0,
    mahsData = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nCount = bis:readInt32()
        for i = 0,self.nCount do
            local data = {}
            data.handMahsCount = bis:readUInt8()
            data.handMahs = {}
            for j = 1,data.handMahsCount do
                data.handMahs[j] = bis:readUInt8()
            end
            data.takeMahsCount = bis:readUInt8()
            data.takeMahs = {}
            for j = 1,data.takeMahsCount do
                data.takeMahs[j] = bis:readUInt8()
            end
            data.nPower = bis:readInt32()
            data.nFlag = bis:readUInt8()
            self.mahsData[i] = data
        end
        self.mahsData[0] = nil
        return self
    end
}

GameProtocol.msgGenZhangResult =
{
    XY_ID = 1047,
    seat = 0,                 -- 座位号
    result = 0,
    score = 0,
    score2 = 0,

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.result = bis:readInt16()
        if bis:getAvailableSize() > 0 then
            self.score = bis:readInt32()
            self.score2 = bis:readInt32()
        end
        return self
    end
}

return GameProtocol
�1