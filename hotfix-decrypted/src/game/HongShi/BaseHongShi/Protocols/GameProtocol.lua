local GameProtocol = CF.gameClass("GameProtocol", "game.GameBase.Protocols.GameProtocol")

GameProtocol.msgBaseClientForwardEx =
{
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
        AvatarUrl = 13,
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

--玩家头像
GameProtocol.msgAvatarUrl =
{
    XY_ID = 30,
    nSeat = 0,          -- 座位号
    url = "",           -- 头像地址

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        local encodeURL = string.urlencode(self.url)
        bos:writeString(encodeURL)
        return bos
    end,

    bistream = function( self, buff, bufflen )
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.url = string.urldecode(bis:readString())
        return self
    end
}

-- 房间号
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
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nRoomNum = bis:readInt32()
        return self
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

GameProtocol.msgRoomRule = {
    XY_ID = 1025,
    rule = "",     --底分
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.rule)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.rule = bis:readString()
        return self
    end 
}

GameProtocol.msgAllWinLost = {
    XY_ID = 1026,
    seat = '0',
    nAllWinLost = 0,
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeInt32(self.nAllWinLost)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt8()
        self.nAllWinLost = bis:readInt32()
        return self
    end 
}

GameProtocol.msgCurPanShu = {
    XY_ID = 1027,
    cur = 0,      --当前盘数
    goal =0,      --总盘数
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.cur)
        bos:writeInt16(self.goal)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.cur = bis:readInt16()
        self.goal = bis:readInt16()
        return self
    end 
}

GameProtocol.msgShowStartBtn = {
    XY_ID = 1028,
    seat = '0',
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgGameReqJieSan = {
    XY_ID = 1029,
    seat = 0,
    flag = 0,             --0:请求 1:同意 2:拒绝
    remainingTime = 0,      --自动同意剩余时间
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.flag)
        bos:writeInt32(self.remainingTime)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt8()
        self.flag = bis:readUInt8()
        self.remainingTime = bis:readInt32()
        return self
    end 
}

GameProtocol.msgCheckSoVer = {
    XY_ID = 1030,
    ver = 0,
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.ver)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ver = bis:readInt32()
        return self
    end
}

GameProtocol.msgGameSpeak = {
    XY_ID     = 1031,
    nickName  = '', -- char
    id        = 0, --long
    bIsMan    = 0, -- byte
    speakSeat = 0, -- int
    new = function (self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nickName)
        bos:writeUInt32(self.id)
        bos:writeUInt8(self.bIsMan)
        bos:writeUInt32(self.speakSeat)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nickName = bis:readUInt8()
        self.id = bis:readUInt32()
        self.bIsMan = bis:readUInt8()
        self.speakSeat = bis:readUInt32()
        return self
    end
}

GameProtocol.msgGameClose = {
    XY_ID = 1032,
    nFlag = 0,
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nFlag)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readInt16()
        return self
    end 
}

GameProtocol.msgRedTenPower = {
    XY_ID = 1033,
    seat = '0',                 --byte 座位
    hongType = '0',             --权限// 0:没有红十 1:方块10 2：红桃10 3：双十
    openOne = '0',              --是否可以双十单亮
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.hongType)
        bos:writeUInt8(self.openOne)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat       = bis:readUInt8()
        self.hongType   = bis:readUInt8()
        self.openOne    = bis:readUInt8()
        return self
    end 
}


GameProtocol.msgOpenRedTen = {
    XY_ID = 1034,
    seat = '0',                 --byte 座位
    openType = '0',             --// 0 没有  1 单方块  2 亮红桃  3 双亮 4 不亮 
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.openType)
        return bos
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt8()
        self.openType = bis:readUInt8()
        return self
    end 
}

--名次
GameProtocol.msgRank = {
    XY_ID = 1035,
    --arg
    seat = '0',   --座号
    rank = '0',   --名次
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = self})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.rank)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt8()
        self.rank = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgResult = {
    XY_ID = 1036,
    nWinLost = {},      -- longlong 胜负
    bOver = '0',        --是否是最后一局

    new = function (self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 0, 3 do
            bos:writeInt64(self.nWinLost[i])
        end
        bos:writeUInt8(self.bOver)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end
        self.bOver = bis:readUInt8()
        return self
    end
}

-- 旁观玩家小结束协议,增加手牌
GameProtocol.msgResultWatch = {
    XY_ID = 1136,
    nWinLost = {},      -- longlong 胜负
    bOver = '0',        --是否是最后一局
    handCount = {},     -- 手牌数量
    handCards = {},     -- 手牌

    new = function (self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        for i = 0, 3 do
            bos:writeInt64(self.nWinLost[i])
        end
        bos:writeUInt8(self.bOver)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nWinLost = {}
        for i = 0, 3 do
            self.nWinLost[i] = bis:readInt64()
        end
        self.bOver = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            for i = 0, 3 do
                self.handCount[i] = bis:readUInt8()
                self.handCards[i] = {}
                for j=1,self.handCount[i] do
                    self.handCards[i][j] = bis:readUInt8()
                end
            end
        end
        return self
    end
}

GameProtocol.msgTotalWinLost = {
    XY_ID = 1037,
    
    nSeat = '0',
    nWinCnt = '0',
    nMaxScore = 0,
    nTotalWinLost = 0,
    nCount = 0,
    vecWinLosts  ={},
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeUInt8(self.nWinCnt)
        bos:writeInt64(self.nMaxScore)
        bos:writeInt64(self.nTotalWinLost)
        bos:writeUInt8(self.nCount) 
        for i = 1, self.nCount do
            bos:writeInt64(self.vecWinLosts[i])
        end
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nWinCnt = bis:readUInt8()
        self.nMaxScore = bis:readInt64()
        self.nTotalWinLost = bis:readInt64()
        self.nCount = bis:readUInt8()
        self.vecWinLosts = {}
        for i = 1, self.nCount do
            self.vecWinLosts[i] = bis:readInt64()
        end
        return self
    end
}

GameProtocol.msgPanInfo = {
    XY_ID = 1038,
    bDoubleOpen = '0',        --是否双亮

    new = function (self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.bDoubleOpen)
        return bos
    end,
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bDoubleOpen = bis:readBool()
        
        return self
    end
}

GameProtocol.msgLocation =
{
    XY_ID = 1039,
    nSeat = 0, 
    lon = 0.0,   -- 经度
    lat = 0.0,    -- 纬度

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    -- 流入
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nSeat)
        bos:writeDouble(self.lon)
        bos:writeDouble(self.lat)
        return bos
    end,

    -- 流出
    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.lon = bis:readDouble()
        self.lat = bis:readDouble()
        return self
    end
}

GameProtocol.msgBaseClientForward = {
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

local CLXY_ALL_BACK         = 514             --所有牌(牌背)
local CLXY_HAND_CARD        = 517             --手牌
local CLXY_HAND_BACK        = 518             --手牌(牌背)
local CLXY_OUT_CARD         = 519         
local CLXY_BANKER           = 520             --庄家（地主）
local CLXY_GAME_STEP        = 522             --游戏步骤
local CLXY_POWER            = 523             --权限
local CLXY_CLOCK            = 524             --时钟
local CLXY_TAKE_FIRST       = 525             --发牌
local CLXY_PLAY_CARD        = 527             --出牌

local CLXY_TURN_DATA        = 531             --轮数据
local CLXY_START_GAME       = 532             --开始游戏
local CLXY_END_GAME         = 533             --结束游戏
local CLXY_RELINK_ENTER     = 534             --重连

local CLXY_SPECF_DATA       = 538             -- 可做牌的牌
local CLXY_SPECF_HAND       = 539             -- 做手牌
local CLXY_TALKMSG          = 540             --俏皮话
local CLXY_ALL_DIRECTION_CARDS = 542          -- 全视角回放初始手牌


GameProtocol.msgAllBack = {
    XY_ID = CLXY_ALL_BACK,
    --arg
    count = '0', --short
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgAllBack})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.count)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.count = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgStartGame = {
    XY_ID = CLXY_START_GAME,
    --arg
    flag = '0',
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgStartGame})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.flag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgHandCard = {
    XY_ID = CLXY_HAND_CARD,
    --arg
    seat = '0',            --byte 座位
    count = '0',           --byte 手牌张数
    cards = {},            --byte[] 手牌数据
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgHandCard})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.count)
        for i=1,self.count do
            bos:writeUInt8(self.cards[i])
        end
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.count = bis:readUInt8()
        self.cards = {}
        for i = 1, self.count do
            self.cards[i] = bis:readUInt8()
        end
        return self
    end 
}

GameProtocol.msgHandBack = {
    XY_ID = CLXY_HAND_BACK,
    --arg
    seat = '0',            --byte 座位
    count = '0',           --byte 手牌张数
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgHandBack})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.count)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.count = bis:readUInt8()
        return self
    end 
}

--outCard
--TODO:容错 参见c++
GameProtocol.msgOutCard = {
    XY_ID = CLXY_OUT_CARD,
    --arg
    seat = '0',                          --byte 座位
    cardCount = '0',                     --byte 出牌张数。0，表示放弃
    cards = "",                           --byte 出牌牌值
    typeID = '0',                        --byte 牌型ID
    power = '0',                         --byte 牌型枚举权重
    outNum = 0,                          --short 出牌轮数
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgOutCard})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        if tonumber(self.cardCount) == 0 then
            bos:writeUInt8(self.cardCount)
        else
            bos:writeString(self.cards)
            bos:writeUInt8(self.typeID)
            bos:writeUInt8(self.power)
        end
        bos:writeInt16(self.outNum)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.cardCount = bis:readUInt8()
        if tonumber(self.cardCount) ~= 0 then
--            bis:Seekg(0-1)
--            self.cards = bis:readString()
            self.cards = {}
            for _ = 1, self.cardCount do
                local b = bis:readUInt8()
                table.insert(self.cards, b)
            end
            self.typeID = bis:readUInt8()
            self.power = bis:readUInt8()
        end
        if bis:getAvailableSize() > 0 then
            self.outNum = bis:readInt16()
        end
        return self
    end 
}

GameProtocol.msgGameStep = {
    XY_ID = CLXY_GAME_STEP,
    --arg
    stepID = '0',            --byte 座位
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgGameStep})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.stepID)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.stepID = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgPower = {
    XY_ID = CLXY_POWER,
    --arg
    seat = '0',            --byte 座位
    power = 0,             --权限
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgPower})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeInt32(self.power)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.power = bis:readInt32()
        return self
    end 
}

GameProtocol.msgClock = {
    XY_ID = CLXY_CLOCK,
    --arg
    seat = '0',            --byte 座位
    time = '0',             -- byte 时间
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgClock})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.time)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.time = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgBanker = {
    XY_ID = CLXY_BANKER,
    --arg
    seat = '0',            --byte 座位
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgBanker})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgPlayCard = {
    XY_ID = CLXY_PLAY_CARD,
    --arg
    seat = 0,                          --座位
    cardCount = 0,                     --出牌张数。0，表示放弃
    cards = {},                          -- byte[] 出牌牌值
    typeID = 0,                        --牌型ID
    power = 0,                         --牌型枚举权重
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgPlayCard})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.cardCount)
        for i=1,self.cardCount do
            bos:writeUInt8(self.cards[i])
        end
        bos:writeUInt8(self.typeID)
        bos:writeUInt8(self.power)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.cardCount = bis:readUInt8()
        self.cards = {}
        if self.cardCount ~= 0 then
            for i=1, self.cardCount do
                self.cards[i] = bis:readUInt8()
            end
            self.typeID = bis:readUInt8()
            self.power = bis:readUInt8()
        end
        return self
    end 
}

--轮数据CLXY_TURN_DATA
GameProtocol.msgTurnData = {
    XY_ID = CLXY_TURN_DATA,
    --arg
    preSeat = '', --byte
    nowSeat = '', --byte
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgTurnData})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.preSeat)
        bos:writeUInt8(self.nowSeat)
        return bos
    end,

    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.preSeat = bis:readUInt8()
        self.nowSeat = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgTakeFirst = {
    XY_ID = CLXY_TAKE_FIRST,
    --arg
    flag = '0',              -- 保留字
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgTakeFirst})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.flag = bis:readUInt8()
        return self
    end 
}

GameProtocol.msgEndGame = {
    XY_ID = CLXY_END_GAME,
    --arg
    flag = '0',              --byte保留字
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgEndGame})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.flag = bis:readUInt8()
        return self
    end 
}

--重连
GameProtocol.msgRelinkEnter = {
    XY_ID = CLXY_RELINK_ENTER,
    --arg
    flag = '0',              --byte保留字
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgRelinkEnter})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.flag = bis:readUInt8()
        return self
    end 
}

-- 做牌数据（可做的牌）
GameProtocol.msgSpecfData = {
    XY_ID = CLXY_SPECF_DATA,

    count = '0',                     --张数
    cards = {},                      --可做的牌
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgSpecfData})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.count)
        for i=1, self.count do
            bos:writeUInt8(self.cards[i])
        end
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.count = bis:readUInt8()
        bis:readUInt8()
        for i = 1, self.count do
            self.cards[i] = bis:readUInt8()
        end
        return self
    end 
}

-- 做手牌
GameProtocol.msgSpecfHand = {
    XY_ID = CLXY_SPECF_HAND,

    seat  = '0',                     -- 座位
    count = '0',                     -- 张数
    cards = {} ,                      --要做的牌

    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgSpecfHand})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.seat)
        bos:writeUInt8(self.count)
        bos:writeUInt8(self.count)              --C++要再拿一次
        for i=1, self.count do
            bos:writeUInt8(self.cards[i])
        end
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.seat = bis:readUInt8()
        self.count = bis:readUInt8()
        for i = 1, self.count do
            self.cards[i] = bis:readUInt8()
        end
        return self
    end 
}

--俏皮话
GameProtocol.msgTalkMsg = {
    XY_ID = CLXY_TALKMSG,
    --arg

    CHATKIND = {
        COMMON = 0,        --常用语聊天
        HISTORY = 1,           --历史记录
        CHAT = 2,              --聊天
        EMOTION = 3,            --表情
    },

    CHANNEL =  {
        USER  = 0,
        TABLE = 1,
        ROOM  = 2,
        SERVER= 3,
        GAME  = 4,
        All   = 5,
    },
    COLORTYPE = {
        CT_COMMON= 0,
        CT_VIP=1,

        CT_INFO=2,
        CT_ERROR=3,
        CT_WARNING=4,

        CT_MANAGE_1=5,
        CT_MANAGE_2=6,
        CT_MANAGE_3=7,

        CT_AD_1=8,
        CT_AD_2=9,
        CT_AD_3=10,

        CT_SYSTEM_1=11,
        CT_SYSTEM_2=12,
        CT_SYSTEM_3=13,

        CT_OTHER=14
    },

    chatKind = 0,      --unsigned int
    channel = '0',      --unsigned char
    color = 0,         --unsigned int
    areaID = 0,        --unsigned int
    m_numberid = 0,    --unsigned int
    m_talkindex =0,     --short
    --new
    new = function (self,o)
        o = o or {}
        setmetatable(o,{__index = GameProtocol.msgTalkMsg})
        return o
    end,
    --bostream
    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.chatKind)
        bos:writeUInt8(self.channel)
        bos:writeUInt32(self.color)
        bos:writeUInt32(self.areaID)
        bos:writeUInt32(self.m_numberid)
        bos:writeInt16(self.m_talkindex)
        return bos
    end,
    --bistream
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        
        self.chatKind = bis:readUInt32()
        self.channel = bis:readUInt8()
        self.color = bis:readUInt32()
        self.areaID = bis:readUInt32()
        self.m_numberid = bis:readUInt32()
        self.m_talkindex = bis:readInt16()
        return self
    end 
}

GameProtocol.msgAllDirCards = {
    XY_ID = CLXY_ALL_DIRECTION_CARDS,

    ucPlayerCount = 0,
    ucCount = {},
    ucCards = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
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
    
    bostream = function (self)
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

GameProtocol.msgGameRuleUser = {
    XY_ID = 1476,
    strRule = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
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

return GameProtocol   q�  