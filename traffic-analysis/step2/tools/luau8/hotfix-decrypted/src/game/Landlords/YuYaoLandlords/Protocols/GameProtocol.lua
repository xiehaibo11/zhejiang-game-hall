local GameProtocol = CF.gameClass("GameProtocol", "game.Landlords.BaseLandlords.Protocols.GameProtocol")

local GLXY_GAME_START           = 1025  -- 游戏开始
local GLXY_GAME_STEP            = 1026  -- 游戏步骤
local GLXY_BASE_SCORE           = 1027  -- 游戏底分
local GLXY_SEND_ALL_CARDS       = 1028  -- 做牌时下发所有牌
local GLXY_SPECF_CARD           = 1029  -- 做牌
local GLXY_HAND_CARDS           = 1030  -- 发牌时发给玩家手牌
local GLXY_PLAYER_CARDS_COUNT   = 1031  -- 断线重连时发送所有玩家当前手牌数
local GLXY_CLOCK                = 1032  -- 发送时钟
local GLXY_POWER                = 1033  -- 出牌权限
local GLXY_OUT_CARD             = 1034  -- 出牌
local GLXY_END_TYPE             = 1035  -- endtype
local GLXY_WIN_LOST             = 1036  -- 小结束
local GLXY_GAME_END             = 1037  -- 游戏结束

local GLXY_ROOM_HOST_SEAT       = 1038  -- 房主
local GLXY_PLAY_COUNT           = 1039  -- 局数
local GLXY_GAME_RULE            = 1040  -- 游戏规则
local GLXY_TOTAL_RESULT         = 1041  -- 大结束
local GLXY_REQUEST_DISMISS      = 1042  -- 请求解散
local GLXY_RESPOND_DISMISS      = 1043  -- 解散响应
local GLXY_DISMISS_FLAG         = 1044  -- 解散标志
local GLXY_TRUST                = 1045  -- 托管
local GLXY_ALL_HAND_CARDS       = 1046  -- 发送所有人手牌
local GLXY_ALL_DIRECTION_CARDS  = 1047  -- 全视角初始手牌

-- 追加
local GLXY_BANKER               = 1050  -- 庄家
local GLXY_PRE_OUT_CARD         = 1051  -- 上一手出的牌

-- 余姚斗地主添加
local GLXY_SPECIAL_POWER        = 1052  -- 特殊权限（叫抢地主）
local GLXY_RESP_SPECIAL_POWER   = 1053  -- 回应权限
local GLXY_BASE_CARDS           = 1054  -- 底牌
local GLXY_CALL_POINT           = 1055  -- 叫分

local GLXY_REQUEST_COUNTDOWN    = 1088  -- 请求解散

local GLXY_JI_PAI_QI = 1100
local GLXY_USE_MARKER = 1101


-- 游戏开始
GameProtocol.msgGameStart = {
    XY_ID = GLXY_GAME_START,

    bIsStart = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bIsStart = bis:readUInt8()
        return self
    end
}

-- 游戏步骤
GameProtocol.msgGameStep = {
    XY_ID = GLXY_GAME_STEP,

    nGameStep = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nGameStep = bis:readInt32()
        return self
    end
}

-- 游戏底分
GameProtocol.msgBaseScore = {
    XY_ID = GLXY_BASE_SCORE,

    iBaseScore = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.iBaseScore = bis:readInt32()
        return self
    end
}

-- 做牌时下发所有牌
GameProtocol.msgAllCards = {
    XY_ID = GLXY_SEND_ALL_CARDS,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUChar(self.ucCount)
        for i = 1 , self.ucCount do
            bos:writeUChar(self.ucCards[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        --清空一波
        self.ucCards = {}
        for i = 1 , self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

-- 做牌
GameProtocol.msgSpecfCard = {
    XY_ID = GLXY_SPECF_CARD,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUInt8(self.ucCount)
        for i = 1 , self.ucCount do
            bos:writeUInt8(self.ucCards[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        for i = 1 , self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

-- 发牌时发给玩家手牌
GameProtocol.msgHandCards = {
    XY_ID = GLXY_HAND_CARDS,

    sSeat = 0,
    ucCount = 0,
    ucCards = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUChar(self.ucCount)
        for i = 1 , self.ucCount do
            bos:writeUChar(self.ucCards[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1 , self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

-- 断线重连时发送所有玩家当前手牌数
GameProtocol.msgPlayerCardsCount = {
    XY_ID = GLXY_PLAYER_CARDS_COUNT,

    nSeat = 0,
    ucCount = 0,
    bShow = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        bos:writeUChar(self.ucCount)
        bos:writeBool(self.bShow)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        self.bShow = bis:readBool()
        return self
    end
}

-- 发送时钟
GameProtocol.msgClock = {
    XY_ID = GLXY_CLOCK,

    sSeat = 0,
    sClock = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.sClock = bis:readInt16()
        return self
    end
}

-- 出牌权限
GameProtocol.msgPower = {
    XY_ID = GLXY_POWER,

    sPowerSeat = 0,     -- 当前玩家位置
    sPrePowerSeat = 0,  -- 上一个玩家位置
    sTurn = 0,          -- 下一个玩家位置

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sPowerSeat)
        bos:writeInt16(self.sPrePowerSeat)
        bos:writeInt16(self.sTurn)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPowerSeat = bis:readUInt8()
        self.sPrePowerSeat = bis:readUInt8()
        self.sTurn = bis:readUInt8()
        return self
    end
}

-- 出牌
GameProtocol.msgOutCard = {
    XY_ID = GLXY_OUT_CARD,

    nPlayCard = {},
    nPlayCardCnt = 0,
    nSeat = 0,
    nPlayCardType = 0,
    sEndPower = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nPlayCardCnt)
        for i = 1 , self.nPlayCardCnt do
            bos:writeUInt8(self.nPlayCard[i])
        end
        bos:writeInt16(self.nSeat)
        bos:writeInt16(self.nPlayCardType)
        bos:writeInt16(self.sEndPower)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayCardCnt = bis:readUInt8()
        self.nPlayCard = {}
        for i = 1 , self.nPlayCardCnt do
            self.nPlayCard[i] = bis:readUInt8()
        end
        self.nSeat = bis:readInt16()
        self.nPlayCardType = bis:readInt16()
        self.sEndPower = bis:readInt16()
        return self
    end
}

-- endtype
GameProtocol.msgEndType = {
    XY_ID = GLXY_END_TYPE,

    sEndType = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sEndType = bis:readInt16()
        return self
    end
}

-- 小结束
GameProtocol.msgWinLost = {
    XY_ID = GLXY_WIN_LOST,

    bShowBig = false,
    iScore = {},
    iTotalScore = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bShowBig = bis:readBool()
        for i = 0 , 3 do
            self.iScore[i] = bis:readInt32()
            self.iTotalScore[i] = bis:readInt32()
        end
        return self
    end
}

-- 游戏结束
GameProtocol.msgGameEnd = {
    XY_ID = GLXY_GAME_END,

    bIsGameEnd = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bIsGameEnd = bis:readBool()
        return self
    end
}

-- 房主
GameProtocol.msgRoomHostSeat = {
    XY_ID = GLXY_ROOM_HOST_SEAT,

    sSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt8()
        return self
    end
}

-- 局数
GameProtocol.msgPlayCount = {
    XY_ID = GLXY_PLAY_COUNT,

    playCount = 0,
    maxPlayCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readInt16()
        self.maxPlayCount = bis:readInt16()
        return self
    end
}

-- 游戏规则
GameProtocol.msgGameRule = {
    XY_ID = GLXY_GAME_RULE,

    strGameRule = "",
    strOriginalGameRule = "";
    iDismissWay = 3,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        bos:writeString(self.strOriginalGameRule)
        bos:writeInt32(self.iDismissWay)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.strGameRule = bis:readString()
        self.strOriginalGameRule = bis:readString()
        self.iDismissWay = bis:readInt32()
        return self
    end
}

-- 托管
GameProtocol.msgTrust = {
    XY_ID = GLXY_TRUST,

    sTrustSeat = 0,
    bTrust = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sTrustSeat)
        bos:writeBool(self.bTrust)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sTrustSeat = bis:readInt16()
        self.bTrust = bis:readBool()
        return self
    end
}

--msgAllHandCards协议与msgAllDirCards协议结构需要保持一致
--(或者需要在GameSceneFillRecordGameMsg中调整两者协议转换的方式)
-- 发送所有人手牌
GameProtocol.msgAllHandCards = {
    XY_ID = GLXY_ALL_HAND_CARDS,

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
        bos:writeUChar(self.ucPlayerCount)
        for i = 1, self.ucPlayerCount do
            bos:writeUChar(self.ucCount[i])
            for t = 1, self.ucCount[i] do
                bos:writeUChar(self.ucCards[i][t])
            end
        end
        return bos
    end
}

--msgAllHandCards协议与msgAllDirCards协议结构需要保持一致
--(或者需要在GameSceneFillRecordGameMsg中调整两者协议转换的方式)
-- 全视角初始手牌
GameProtocol.msgAllDirCards = {
    XY_ID = GLXY_ALL_DIRECTION_CARDS,

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
        bos:writeUChar(self.ucPlayerCount)
        for i = 1, self.ucPlayerCount do
            bos:writeUChar(self.ucCount[i])
            for t = 1, self.ucCount[i] do
                bos:writeUChar(self.ucCards[i][t])
            end
        end
        return bos
    end
}

-- 庄家
GameProtocol.msgBanker = {
    XY_ID = GLXY_BANKER,

    nSeat = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readInt16()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nSeat)
        return bos
    end
}

-- 上一手牌出的牌
GameProtocol.msgPreOutCard = {
    XY_ID = GLXY_PRE_OUT_CARD,

    nPlayCard = {},
    nPlayCardCnt = 0,
    nSeat = 0,
    nPlayCardType = 0,
    sEndPower = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nPlayCardCnt)
        for i = 1 , self.nPlayCardCnt do
            bos:writeUInt8(self.nPlayCard[i])
        end
        bos:writeInt16(self.nSeat)
        bos:writeInt16(self.nPlayCardType)
        bos:writeInt16(self.sEndPower)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nPlayCardCnt = bis:readUInt8()
        self.nPlayCard = {}
        for i = 1 , self.nPlayCardCnt do
            self.nPlayCard[i] = bis:readUInt8()
        end
        self.nSeat = bis:readInt16()
        self.nPlayCardType = bis:readInt16()
        self.sEndPower = bis:readInt16()
        return self
    end
}

-- 特殊权限
GameProtocol.msgSpecialPower = {
    XY_ID = GLXY_SPECIAL_POWER,

    sSeat = 0,
    power = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.power = bis:readInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt32(self.power)
        return bos
    end
}

-- 回应特殊权限
GameProtocol.msgRespSpecialPower = {
    XY_ID = GLXY_RESP_SPECIAL_POWER,

    sSeat = 0,
    power = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.power = bis:readInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt32(self.power)
        return bos
    end
}

-- 底牌
GameProtocol.msgBaseCards = {
    XY_ID = GLXY_BASE_CARDS,

    nBackCardCnt = 0,
    nBackCards = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBackCardCnt = bis:readUInt8()
        self.nBackCards = {}
        for t = 1, self.nBackCardCnt do
            self.nBackCards[t] = bis:readUInt8()
        end
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.nBackCardCnt)
        for t = 1, self.nBackCardCnt do
            bos:writeUInt8(self.nBackCards[t])
        end
        return bos
    end
}

-- 叫分
GameProtocol.msgCallPoint = {
    XY_ID = GLXY_CALL_POINT,

    sSeat = 0,
    point = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.point = bis:readInt32()
        return self
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt32(self.point)
        return bos
    end
}
-- 大结束
GameProtocol.msgTotalResult = {
    XY_ID = GLXY_TOTAL_RESULT,

    sPlayCount = 0,
    show = false,
    m_iBoxRoomTotalWinLost = {},
    iTotalScore = {},
    iWinCount = {},
    iBankerCount = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sPlayCount = bis:readInt16()
        self.show = bis:readBool()
        for i = 0, 3 do
            self.m_iBoxRoomTotalWinLost[i] = {}
            for j = 1 , self.sPlayCount do
                self.m_iBoxRoomTotalWinLost[i][j] = bis:readInt32()
            end
            self.iTotalScore[i] = bis:readInt32()
            self.iWinCount[i] = bis:readInt32()
            self.iBankerCount[i] = bis:readInt32()
        end
        return self
    end
}

-------------chess-------------
-- 解散相关
-- 解散最后的反馈
GameProtocol.msgDismissFlagEx = {
    XY_ID = GLXY_DISMISS_FLAG,

    flag = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.flag)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readInt16()
        return self
    end
}

GameProtocol.msgRequestDismissEx = {
    XY_ID = GLXY_REQUEST_DISMISS,

    seat = 4,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        return self
    end
}

GameProtocol.msgRespondDismissEx = {
    XY_ID = GLXY_RESPOND_DISMISS,

    seat = 4,
    agree = false,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readInt16()
        self.agree = bis:readBool()
        return self
    end
}
GameProtocol.msgDismissCountdown =
{
    XY_ID = GLXY_REQUEST_COUNTDOWN,
    sSeat = 0,
    nTime = 0,--剩余倒计时时间
    iAgrees = {},    --玩家同意信息
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.nTime)
            for i = 0,3 do
            bos:writeInt16(self.iAgrees[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.nTime = bis:readInt16()
        for i = 0,3 do
            self.iAgrees[i] = bis:readInt16()
        end
        return self
    end
}

GameProtocol.msgBaseClientForwardEx = {
    XY_ID = 22, -- 转发协议
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

GameProtocol.msgJiPaiQi = {
    XY_ID = GLXY_JI_PAI_QI,

    ucJPQ = {},

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
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucJPQ = {}
        for i = 1, 15 do
            self.ucJPQ[i] = bis:readUInt8()
        end
        return self
    end
}

----瑞安，温茶，丽水 记牌器
GameProtocol.msgUseMarker = {
    XY_ID = GLXY_USE_MARKER,

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

return GameProtocol�d