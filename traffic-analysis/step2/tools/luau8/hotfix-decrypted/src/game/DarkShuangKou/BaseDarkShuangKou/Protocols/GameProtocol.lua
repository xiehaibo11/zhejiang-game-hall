local GameProtocol = {}
local CT_COUNT = 29

local XYIDEnum = {
    GLXY_FIRST = 1024,
    GLXY_GAME_START = 1025,
    GLXY_GAME_STEP = 1026,
    GLXY_GAME_DATA = 1027,
    GLXY_GAME_ROUND = 1028,
    GLXY_SPECF_SEND_ALL_CARDS = 1029,
    GLXY_SPECF_HAND_CARD = 1030,
    GLXY_ALL_DIRECTION_CARDS = 1031,
    GLXY_CLOCK = 1032,
    GLXY_POWER = 1033,
    GLXY_OUT_CARD = 1034,
    GLXY_WIN_LOST = 1035,
    GLXY_REVIVE = 1036,
    GLXY_REVIVE_STATE = 1037,
    GLXY_TOTAL_RESULT = 1038,
    GLXY_TRUST = 1039,
    GLXY_GAME_END = 1040,
    GLXY_FEIGN_OUT_CARD = 1041, -- 给机器人用的
    GLXY_ANIMATION_FINISHED = 1042, -- 动画结束
    GLXY_UPDATE_GOLD = 1043, -- 用来推送游戏中的金币变化
    GLXY_GAME_CONFIG = 1044, --游戏配置
    GLXY_GAME_REVENUE_REQ = 1045, -- 游戏流水请求
    GLXY_GAME_REVENUE_RESP = 1046, -- 游戏流水回应
    GLXY_GAME_RELINK = 1047 -- 重连结束
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
        QiaoPiHua = 12,
        AvatarUrl = 13,
        AMap = 14,
        VIPEffect = 15
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

GameProtocol.msgGameStart = {
    XY_ID = XYIDEnum.GLXY_GAME_START,
    bIsStart = false,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nFlag = bis:readBool()
        return self
    end
}

GameProtocol.msgGameStep = {
    XY_ID = XYIDEnum.GLXY_GAME_STEP,
    iGameStep = 0,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.iGameStep = bis:readInt32()
        return self
    end
}

GameProtocol.msgGameData = {
    XY_ID = XYIDEnum.GLXY_GAME_DATA,
    iBaseScore = 0,
    iRound = 0,
    iTotalRound = 0,
    iMaximumLimit = 0,
    iTableFee = 0,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iBaseScore = bis:readInt32()
        self.iRound = bis:readInt32()
        self.iTotalRound = bis:readInt32()
        self.iMaximumLimit = bis:readInt64()
        self.iTableFee = bis:readInt32()
        return self
    end
}

GameProtocol.msgGameRound = {
    XY_ID = XYIDEnum.GLXY_GAME_ROUND,
    iRound = 0,
    iMult = 0,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.iRound = bis:readInt32()
        self.iMult = bis:readInt32()
        return self
    end
}

-- 做牌时下发所有牌
GameProtocol.msgSpecfAllCards = {
    XY_ID = XYIDEnum.GLXY_SPECF_SEND_ALL_CARDS,
    sSeat = 0,
    ucCount = 0,
    ucCards = {},
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeUChar(self.ucCount)
        for i = 1, self.ucCount do
            bos:writeUChar(self.ucCards[i])
        end
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        self.ucCards = {}
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

-- 做牌
GameProtocol.msgSpecfHandCard = {
    XY_ID = XYIDEnum.GLXY_SPECF_HAND_CARD,
    sSeat = 0,
    ucCount = 0,
    ucCards = {},
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
        self.sSeat = bis:readInt16()
        self.ucCount = bis:readUInt8()
        for i = 1, self.ucCount do
            self.ucCards[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgAllDirCards = {
    XY_ID = XYIDEnum.GLXY_ALL_DIRECTION_CARDS,
    ucHandCount = {}, -- 手牌张数
    ucHandCards = {}, -- 手牌数据
    ucDrawCount = {}, -- 补牌张数
    ucDrawCards = {}, -- 补牌数据
    ucShowCount = {}, -- 明牌张数
    ucShowCards = {}, -- 明牌数据
    ucOutCount = {}, -- 出牌张数
    ucOutCards = {}, -- 出牌数据
    ucOutCardType = {}, -- 出牌牌型
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        local maxPlayerCount = 4
        self.ucHandCount = {}
        self.ucHandCards = {}
        for i = 0, maxPlayerCount - 1 do
            self.ucHandCount[i] = bis:readUInt8()
            self.ucHandCards[i] = {}
            for t = 1, self.ucHandCount[i] do
                self.ucHandCards[i][t] = bis:readUInt8()
            end
        end
        self.ucDrawCount = {}
        self.ucDrawCards = {}
        for i = 0, maxPlayerCount - 1 do
            self.ucDrawCount[i] = bis:readUInt8()
            self.ucDrawCards[i] = {}
            for t = 1, self.ucDrawCount[i] do
                self.ucDrawCards[i][t] = bis:readUInt8()
            end
        end
        self.ucShowCount = {}
        self.ucShowCards = {}
        for i = 0, maxPlayerCount - 1 do
            self.ucShowCount[i] = bis:readUInt8()
            self.ucShowCards[i] = {}
            for t = 1, self.ucShowCount[i] do
                self.ucShowCards[i][t] = bis:readUInt8()
            end
        end
        self.ucOutCount = {}
        self.ucOutCards = {}
        for i = 0, maxPlayerCount - 1 do
            self.ucOutCount[i] = bis:readUInt8()
            self.ucOutCards[i] = {}
            for t = 1, self.ucOutCount[i] do
                self.ucOutCards[i][t] = bis:readUInt8()
            end
        end
        self.ucOutCardType = {}
        for i = 0, maxPlayerCount - 1 do
            self.ucOutCardType[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgClock = {
    XY_ID = XYIDEnum.GLXY_CLOCK,
    sClock = 0,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sClock)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sClock = bis:readInt16()
        return self
    end
}

GameProtocol.msgPower = {
    XY_ID = XYIDEnum.GLXY_POWER,
    playStatus = {},
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        local maxPlayerCount = 4
        self.playStatus = {}
        for i = 0, maxPlayerCount - 1 do
            self.playStatus[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgOutCard = {
    XY_ID = XYIDEnum.GLXY_OUT_CARD,
    ucCard = {},
    ucCardCount = 0,
    sSeat = 0,
    sCardType = 0,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucCardCount)
        for i = 1, self.ucCardCount do
            bos:writeUInt8(self.ucCard[i])
        end
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sCardType)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucCardCount = bis:readUInt8()
        self.ucCard = {}
        for i = 1, self.ucCardCount do
            self.ucCard[i] = bis:readUInt8()
        end
        self.sSeat = bis:readInt16()
        self.sCardType = bis:readInt16()
        return self
    end
}

GameProtocol.msgWinLost = {
    XY_ID = XYIDEnum.GLXY_WIN_LOST,
    iResultType = 0, -- 结算类型 //枚举 tagWinLostType 当前处于的结束类型
    iResultScore = {}, -- 分数
    iResultMult = {}, -- 倍数
    iResultAttack = {}, -- 暴击数
    iResultArrayCount = 0,
    iResultArray = {}, -- 当前轮 所有得结束类型
    iResultStatus = {}, -- 当前轮 所有得结束类型 的结束状态
    iMax = {}, -- 封顶
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.iResultType = bis:readInt32()
        local maxPlayerCount = 4
        self.iResultScore = {}
        for i = 0, maxPlayerCount - 1 do
            self.iResultScore[i] = bis:readInt64()
        end
        self.iResultMult = {}
        for i = 0, maxPlayerCount - 1 do
            self.iResultMult[i] = bis:readInt32()
        end
        self.iResultAttack = {}
        for i = 0, maxPlayerCount - 1 do
            self.iResultAttack[i] = bis:readInt32()
        end
        self.iResultArrayCount = bis:readInt32()
        self.iResultArray = {}
        self.iResultStatus = {}
        for i = 1, self.iResultArrayCount do
            self.iResultArray[i] = bis:readInt32()
            self.iResultStatus[i] = bis:readInt32()
        end
        self.iMax = {}
        if bis:getAvailableSize() > 0 then
            for i = 0, maxPlayerCount - 1 do
                self.iMax[i] = bis:readInt32()
            end
        end
        return self
    end
}

GameProtocol.msgRevive = {
    XY_ID = XYIDEnum.GLXY_REVIVE,
    iRevive = 0,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.iRevive = bis:readInt32()
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.iRevive)
        return bos
    end
}

GameProtocol.msgReviveState = {
    XY_ID = XYIDEnum.GLXY_REVIVE_STATE,
    iState = {},
    iTime = {},
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        local maxPlayerCount = 4
        self.iState = {}
        for i = 0, maxPlayerCount - 1 do
            self.iState[i] = bis:readInt32()
        end
        self.iTime = {}
        for i = 0, maxPlayerCount - 1 do
            self.iTime[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgTotalResult = {
    XY_ID = XYIDEnum.GLXY_TOTAL_RESULT,
    iMaxCardType = {},
    iAttackTimes = {},
    iScore = {},
    iBankruptcy = {}, -- 1标识破产
    bIsException = false,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        local maxPlayerCount = 4
        self.iMaxCardType = {}
        for i = 0, maxPlayerCount - 1 do
            self.iMaxCardType[i] = bis:readInt32()
        end
        self.iAttackTimes = {}
        for i = 0, maxPlayerCount - 1 do
            self.iAttackTimes[i] = bis:readInt32()
        end
        self.iScore = {}
        for i = 0, maxPlayerCount - 1 do
            self.iScore[i] = bis:readInt64()
        end
        self.iBankruptcy = {}
        for i = 0, maxPlayerCount - 1 do
            self.iBankruptcy[i] = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.bIsException = bis:readBool()
        end
        return self
    end
}

GameProtocol.msgTrust = {
    XY_ID = XYIDEnum.GLXY_TRUST,
    sTrustSeat = 0,
    bTrust = false,
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

GameProtocol.msgGameEnd = {
    XY_ID = XYIDEnum.GLXY_GAME_END,
    bIsGameEnd = false,
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

GameProtocol.msgAnimationFinished = {
    XY_ID = XYIDEnum.GLXY_ANIMATION_FINISHED,
    sSeat = 0,
    sStep = 0, -- 枚举 tagGameStep 当前处于的 game step
    sResultType = 0, -- 结束协议里面发的 结束类型
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sSeat)
        bos:writeInt16(self.sStep)
        bos:writeInt16(self.sResultType)
        return bos
    end
}

GameProtocol.msgUpdateGold = {
    XY_ID = XYIDEnum.GLXY_UPDATE_GOLD,
    llAllScore = {}, -- 金币最终值
    source = 0,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        local maxPlayerCount = 4
        self.llAllScore = {}
        for i = 0, maxPlayerCount - 1 do
            self.llAllScore[i] = bis:readInt64()
        end
        self.source = bis:readInt32()
        return self
    end
}

GameProtocol.msgGameConfig = {
    XY_ID = XYIDEnum.GLXY_GAME_CONFIG,
    mult = {},
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.mult = {}
        bis:readInt32() -- 第一位没用
        for i = 1, CT_COUNT do
            self.mult[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgGameRevenueReq = {
    XY_ID = XYIDEnum.GLXY_GAME_REVENUE_REQ,
    bostream = function(self)
        local bos = un.network.IStream.new()
        return bos
    end
}

GameProtocol.msgGameRevenueResp = {
    XY_ID = XYIDEnum.GLXY_GAME_REVENUE_RESP,
    bIsFromReq = false,
    count = 0,
    round = {},
    winSeat = {},
    loseSeat = {},
    cardType = {},
    score = {},
    attack = {},
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bIsFromReq = bis:readBool()
        self.count = bis:readInt32()
        self.round = {}
        self.winSeat = {}
        self.loseSeat = {}
        self.cardType = {}
        self.score = {}
        self.attack = {}
        for i = 1, self.count do
            self.round[i] = bis:readInt32()
            self.winSeat[i] = bis:readInt32()
            self.loseSeat[i] = bis:readInt32()
            self.cardType[i] = bis:readInt32()
            self.score[i] = bis:readInt32()
            self.attack[i] = bis:readInt32()
        end
        return self
    end
}

GameProtocol.msgGameRelink = {
    XY_ID = XYIDEnum.GLXY_GAME_RELINK,
    bIsRelink = false, -- 是否重连
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bIsRelink = bis:readBool()
        return self
    end
}

for _, v in pairs(GameProtocol) do
    if type(v) == "table" then
        if v.XY_ID then
            v.new = function(self, o)
                o = o or {}
                setmetatable(o, {__index = v})
                return o
            end
        end
    end
end

return GameProtocol
�?