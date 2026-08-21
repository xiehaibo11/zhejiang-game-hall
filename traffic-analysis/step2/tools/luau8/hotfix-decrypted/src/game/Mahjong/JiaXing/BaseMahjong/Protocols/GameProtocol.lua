local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgFanData = {
    nFanID = 0,                         -- 番种ID
    nCount = 0,                         -- 番种个数
}

GameProtocol.msgPlayerTimer = {
    XY_ID = 9,

    nBrandID = 0,           -- 品牌ID
    nNumberID = 0,          -- 数字ID
    nSecond = 0,           --定时器时间（单位秒）
    nPower = 0,            --定时器权限
    nSeat = 0,             --定时器位置

     new = function( self, o )
         o = o or {}
         setmetatable( o, { __index = self })
         return o
     end,

     bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.nBrandID = bis:readUInt32()
         self.nNumberID = bis:readUInt32()
         self.nSecond = bis:readUInt32()
         self.nPower = bis:readUInt32()
         self.nPower = bis:readUInt32()
         return self
     end
}

-- 玩家头像
GameProtocol.msgAvatarUrl =
{
    XY_ID = 30,
    seat = 0,                 -- 座位号
    avatarUrl = "",           -- 头像地址

    new = function(self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        local encodeURL = string.urlencode(self.avatarUrl)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.avatarUrl = string.urldecode(bis:readString())
        return self
    end
}
GameProtocol.msgRoomNumEx = {
    XY_ID = 31,
    nRoomNum = 0,
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nRoomNum)
        bos:writeDouble(1.0)
        return bos
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nRoomNum = bis:readInt32()
        return bis
    end
}
GameProtocol.msgUUID = {
    XY_ID = 32,

    uluuid = 0,
    strUUID = "",
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt64((self.uluuid))
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.uluuid = bis:readInt64()
        if (bis:getAvailableSize() > 0 ) then
            self.strUUID = bis:readString()
        end
        return self
    end 
}
GameProtocol.msgAskContinue = {
    XY_ID = 33,

    nflag = 0,

    ENUM_FLAG = {
        NONE = 0,
        RELINK = 1,
        WAITING = 2,
        CAN_CONTINUE = 3,
    },
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nflag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nflag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgRespContinue = {
    XY_ID = 34,

    nSeat = 0,
    bContinue = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeBool(self.bContinue)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nSeat = bis:readInt32()
        self.bContinue = bis:readBool()
        return self
    end 
}

GameProtocol.msgContinueFlag = {
    XY_ID = 35,

    sFlag = 0,
    
    ENUM_FLAG = {
        NONE = 0,
        DISAGREE = 1,
        SUCCESS = 2,
        TIME_OUT = 3,
    },
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.sFlag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgContinueTips = {
    XY_ID = 36,

    nFlag = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nFlag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.nFlag = bis:readInt32()
        return self
    end 
}
GameProtocol.msgWaitOtherAction = {
    XY_ID = 555,
    nSeat = 0,      -- 座位,如果后期需要可以提示是等哪个座位的玩家
    nPowerID = 0,   -- 权限，如果后期需要可以提示等的那个玩家是在碰，杠，胡？

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.nSeat = bis:readUInt8()
         self.nPowerID = bis:readUInt16()
         return self
    end
}
GameProtocol.msgWaitActionPower = {
    XY_ID = 556,
    nSeat = 0,      -- 座位,如果后期需要可以提示是等哪个座位的玩家
    nPowerID = 0,   -- 权限，如果后期需要可以提示等的那个玩家是在碰，杠，胡？

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.nSeat = bis:readUInt8()
         self.nPowerID = bis:readUInt16()
         return self
    end
}
GameProtocol.msgObviousMahsData = {
    XY_ID = 557,
    nCount = 0,
    mahsData = {},

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
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
            self.mahsData[i] = data
        end
        self.mahsData[0] = nil
         return self
    end
}
GameProtocol.msgResult = {
    XY_ID = 1026,
    nWinLost = {},
    nHuDanFang = 0,
    isFinal = 0,       --是否是最后一局
    huType = 0,
    buyScore = 0,
    hufan = -1,
    issan = 0,
    maxHuFan = {-1,-1,-1,-1},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)       
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end
        self.nHuDanFang = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.isFinal = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.huType = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.buyScore = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.hufan = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.issan = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            for i=0, 3 do
                self.maxHuFan[i] = bis:readInt32()
            end
        end
        return self
    end 
}
GameProtocol.msgAllWinLost = {
    XY_ID = 1031,
    nSeat = 0,
    nAllWinLost = 0,    -- long

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAllWinLost = bis:readInt32()
        return self
    end
}
GameProtocol.msgGameReqJieSan = {
    XY_ID = 1032,
    nSeat = -1,  -- int
    nFlag = -1,  -- int  0:请求 1:同意 2：拒绝
    nRemainingTime = 0,  -- int 自动同意剩余时间

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nFlag = bis:readInt32()
        self.nRemainingTime = bis:readInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt32(self.nFlag)
        bos:writeInt32(self.nRemainingTime)
        return bos
    end
}
GameProtocol.msgGameWaitLastType = {
    XY_ID = 1033,
    nGameWaitLatType = 0, -- BYTE 等待最后一个玩家的方式。1，自动开始；2，自动退出；其它，等待

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.nGameWaitLatType = bis:readUInt8()
         return self
    end
}
GameProtocol.msgSpeak = {
    XY_ID = 1034,
    id        = 0, --long
    bIsMan    = 0, -- byte
    speakSeat = 0, -- int

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.id = bis:readUInt32()
         self.bIsMan = bis:readBool()
         self.speakSeat = bis:readUInt32()
         return self
    end
}
GameProtocol.msgPlayTypeBF = {
    XY_ID = 1035,
    playType = 0, -- int 0优胜值 1开心豆 2银子
    extenal  = 0, -- int

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.playType = bis:readUInt32()
         self.extenal = bis:readUInt32()
         return self
    end
}
GameProtocol.msgCurPanShu = {
    XY_ID = 1036,
    cur = 0,         -- 当前多少局
    goal = 0,        -- 目标多少局

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
         self.cur = bis:readInt32()
         self.goal = bis:readInt32()
         return self
    end
}
GameProtocol.msgGameRule = {
    XY_ID = 1037,

    nBaseScore = 0,         -- 底分
    gameHuType = 0,         -- 胡牌方式；1:自摸，0：点炮
    canChow = 0,            -- 是否可吃
    maxWin = 0,             -- 赢取最大片数量

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBaseScore = bis:readInt32()
        self.gameHuType = bis:readInt32()
        self.canChow = bis:readInt32()
        self.maxWin = bis:readInt32()
        return self
    end 
}
GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    nSeat = 0,         -- 座位
    huCnt = 0,         -- 胡牌次数
    nCount = 0,        -- 个数
    Fans = {},         -- 番种数据
    nTotalWinLost = 0, -- 胜负
    maxHuFan = {},     -- 吴江最大胡番

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.huCnt = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1, self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readUInt16()
            self.Fans[i].nCount = bis:readUInt8()
        end
        self.nTotalWinLost = bis:readInt64()
        if bis:getAvailableSize() > 0 then
            for i=0, 3 do
                self.maxHuFan[i] = bis:readInt32()
            end            
        end
        return self
    end 
}
GameProtocol.msgShowStartBtn = {
    XY_ID = 1039,
    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        return self
    end
}
GameProtocol.msgHuangFan = {
    XY_ID = 1040,
    isHuangFan = false,    -- bool
    huangFanCnt = 0,       -- int

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.isHuangFan = bis:readBool()
        self.huangFanCnt = bis:readInt32()
        return self
    end
}
GameProtocol.msgNewRoomRule = {
    XY_ID = 1041,
    nBaseScore = 0,         -- 底分
    gameHuType = 0,         -- 胡牌方式；1:自摸，0：点炮
    canChow = 0,            -- 是否可吃
    maxWin = 0,             -- 赢取最大片数量
    openSanTan = false,     -- 是否开启三滩
    openHuangFan = false,   -- 是否开启黄番
    taiTouHuQuanShu = 0,    -- 抬头胡圈数
    gameType = 0,           -- 规则类型
    nFangKa = 0,           -- 规则类型
    followSanTan = false,       -- 三摊选择跟牌
    WuJiangYZM = 0,     --吴江硬自摸
    WJQiangGang = 0,    --吴江抢杠胡
    WJBuyScore = 0,     --吴江买籽

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end,
    -- 流出
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBaseScore = bis:readInt32()
        self.gameHuType = bis:readInt32()
        self.canChow = bis:readInt32()
        self.maxWin = bis:readInt32()
        self.openSanTan = bis:readBool()
        self.openHuangFan = bis:readBool()
        self.taiTouHuQuanShu = bis:readInt32()
        self.gameType = bis:readInt32()
        self.nFangKa = bis:readInt32()
        if bis:getAvailableSize() >= 1 then
            self.followSanTan = bis:readBool()
        end
        if bis:getAvailableSize() > 0 then
            self.WuJiangYZM = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.WJQiangGang = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.WJBuyScore = bis:readInt32()
        end
        return self
    end
}
GameProtocol.msgCheckSoVer = {
    XY_ID = 1042,
    ver = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ver = bis:readInt32()
        return self
    end
}
GameProtocol.msgQuanFengCnt = {
    XY_ID = 1043,
    curQuanShu = 0,     -- 当前圈数
    nCount=0,           -- 圈风信息个数
    quanFengs={},       -- 圈风数据

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.curQuanShu=bis:readInt32()
        self.nCount = bis:readInt32()
        self.quanFengs = {}
        for i = 1, self.nCount do
            self.quanFengs[i] = {}
            self.quanFengs[i].seatid =  bis:readInt32()
            self.quanFengs[i].fengNum = bis:readInt32()
            self.quanFengs[i].isFengBanker = bis:readBool()
        end
        return self
    end
}
GameProtocol.msgTai = {
    XY_ID = 1044,
    nSeat = 0,    -- BYTE 座位
    tCount = 0,     -- 台型个数
    Tais = {},      -- 台型名字

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.tCount = bis:readUInt8()
        self.Tais = {}
        for i = 1, self.tCount do
            self.Tais[i] = {}
            self.Tais[i].TaiID = bis:readUInt16()
            self.Tais[i].tCount = bis:readUInt8()
        end
        return self
    end
}
GameProtocol.msgChengBaoAsk = {
    XY_ID = 1045,
    remainingTime = 0,     --倒计时剩余时间
    tCount = 0,     -- 承包数据个数
    ChengBaoInfo = {},      -- 承包信息

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.remainingTime)
        bos:writeUInt8(self.tCount)
        for i=1, self.tCount do
            bos:writeUInt8(self.ChengBaoInfo[i].nSeat)
            bos:writeUInt8(self.ChengBaoInfo[i].cbType)
            bos:writeUInt8(self.ChengBaoInfo[i].nRelativeSeat)
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.remainingTime = bis:readUInt8()
        self.tCount = bis:readUInt8()
        self.ChengBaoInfo = {}
        for i = 1, self.tCount do
            self.ChengBaoInfo[i] = {}
            self.ChengBaoInfo[i].nSeat = bis:readUInt8()
            self.ChengBaoInfo[i].cbType = bis:readUInt8()
            self.ChengBaoInfo[i].nRelativeSeat = bis:readUInt8()
        end
        return self
    end
}
GameProtocol.msgNewTotalWinLost = {
    XY_ID = 1046,
    nSeat = 0,    -- BYTE 座位
    huCnt = 0,    -- BYTE 胡牌次数
    nCount = 0,   -- BYTE 番型个数
    Fans = {},    -- msgFanData 番种数据
    nTotalWinLost = 0,  -- long long胜负

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.huCnt = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.Fans = {}
        for i = 1, self.nCount do
            self.Fans[i] = {}
            self.Fans[i].nFanID = bis:readUInt16()
            self.Fans[i].nCount = bis:readUInt8()
        end
        self.nTotalWinLost = bis:readInt64()
        return self
    end
}
GameProtocol.msgDrawCnt = {
    XY_ID = 1047,
    nDrawCnt = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nDrawCnt = bis:readUInt8()
        return self
    end
}
GameProtocol.msgLocation = {
    XY_ID = 1048,
    nSeat = 0, 
    lon = 0.0,   -- 经度
    lat = 0.0,    -- 纬度

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.lon = bis:readDouble()
        self.lat = bis:readDouble()
        return self
    end
}

GameProtocol.msgBuyScore = {
    XY_ID = 1324,
    nSeat = -1,
    nBuyScore = -1,
    nFirst = -1,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeInt32(self.nBuyScore)
        bos:writeInt32(self.nFirst)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt32()
        self.nBuyScore = bis:readInt32()
        self.nFirst = bis:readInt32()
        return self
    end
}

GameProtocol.msgBaseClientForwardEx =
{
    XY_ID = 1424,
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
        OPERATE_PASS = 160
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
return GameProtocol2[