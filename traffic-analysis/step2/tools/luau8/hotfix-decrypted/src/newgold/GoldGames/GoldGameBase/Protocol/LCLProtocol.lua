local LCLProtocol = {}

LCLProtocol.CL_XYID = {
    CLXY_FIRST = 0x0400,
    CLXY_ALL_CARD = 1025, -- 所有牌
    CLXY_ALL_BACK = 1026, -- 所有牌(牌背)
    CLXY_BASE_CARD = 1027, -- 底牌
    CLXY_BASE_BACK = 1028, -- 底牌(牌背)
    CLXY_HAND_CARD = 1029, -- 手牌
    CLXY_HAND_BACK = 1030, -- 手牌(牌背)
    CLXY_OUT_CARD = 1031, -- 出的牌(0张表示不出)
    CLXY_BANKER = 1032, -- 庄家（地主）
    CLXY_STATE = 1033, -- 游戏状态
    CLXY_GAME_STEP = 1034, -- 游戏步骤
    CLXY_POWER = 1035, -- 权限
    CLXY_CLOCK = 1036, -- 时钟
    CLXY_TAKE_FIRST = 1037, -- 发牌
    CLXY_ADD_BASE = 1038, -- 加底
    CLXY_PLAY_CARD = 1039, -- 出牌
    CLXY_END_WAIT = 1040, -- 等待结束
    CLXY_RESP_POWER = 1041, -- 回应权限
    CLXY_RESP_POWER_EX = 1042, -- 回应权限扩展（用于旁观续完）
    CLXY_TURN_DATA = 1043, -- 轮数据（用于旁观续完）
    CLXY_START_GAME = 1044, -- 开始游戏
    CLXY_END_GAME = 1045, -- 结束游戏
    CLXY_RELINK_ENTER = 1046, -- 重连
    CLXY_LOOKER_ENTER = 1047, -- 旁观
    CLXY_TRUST = 1048, -- 托管
    CLXY_BASE_OWNER = 1049, -- 得底牌者
    CLXY_SPECF_DATA = 1050, -- 可做牌的牌
    CLXY_SPECF_HAND = 1051, -- 做手牌
    CLXY_COUNT = 1052,
    CLXY_LAST = 0x0500 -- 框架协议ID到此为止
}

-- 底牌
LCLProtocol.msgBaseCard = {
    cmdid = LCLProtocol.CL_XYID.CLXY_BASE_CARD,
    nCount = 0, -- 底牌张数
    nCards = {}, -- 底牌数据
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readUInt8()
        self.nCards = {}
        for i = 1, self.nCount do
            self.nCards[#self.nCards+1] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.nCards, self.nCount)
        return bo
    end
}

-- 底牌牌背
LCLProtocol.msgBaseBack = {
    cmdid = LCLProtocol.CL_XYID.CLXY_BASE_BACK,
    nCount = 0, -- 底牌张数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nCount)
        return bo
    end
}
-- 手牌
LCLProtocol.msgHandCard = {
    cmdid = LCLProtocol.CL_XYID.CLXY_HAND_CARD,
    nSeat = 0, -- 座位
    nCount = 0, -- 手牌张数
    nCards = {}, -- 手牌数据
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nCount = bi:readUInt8()
        self.nCards = {}
        for i = 1, self.nCount do
            self.nCards[#self.nCards+1] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeString(self.nCards, self.nCount)
        return bo
    end
}
-- 手牌(牌背)
LCLProtocol.msgHandBack = {
    cmdid = LCLProtocol.CL_XYID.CLXY_HAND_BACK,
    nSeat = 0, -- 座位
    nCount = 0, -- 手牌张数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nCount = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nCount)
        return bo
    end
}
-- 出牌
LCLProtocol.msgOutCard = {
    cmdid = LCLProtocol.CL_XYID.CLXY_OUT_CARD,
    nSeat = 0, -- 座位
    nCardCount = 0, -- 出牌张数。0，表示放弃
    nCards = {}, -- 出牌牌值
    nTypeID = 0, -- 牌型ID
    nPower = 0, -- 牌型枚举权重
    nOutNum = 0, -- 出牌轮数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nCardCount = bi:readUInt8()
        if self.nCardCount ~= 0 then
            self.nCards = {}
            for i = 1, self.nCardCount do
                self.nCards[#self.nCards+1] = bi:readUInt8()
            end
            self.nTypeID = bi:readUInt8()
            self.nPower = bi:readUInt8()
        else
            self.nCards = {}
        end
        if bi:getAvailableSize() > 0 then
            self.nOutNum = bi:readInt16()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        if self.nCardCount == 0 then
            bo:writeInt8(self.nCardCount)
        else
            bo:writeString(self.nCards, self.nCardCount)
            bo:writeInt8(self.nTypeID)
            bo:writeInt8(self.nPower)
        end
        bo:writeInt16(self.nOutNum)
        return bo
    end
}
-- 庄家（地主）
LCLProtocol.msgBanker = {
    cmdid = LCLProtocol.CL_XYID.CLXY_BANKER,
    nSeat = 0, -- 庄家座位
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        return bo
    end
}
LCLProtocol.msgBaseOwner = {
    cmdid = LCLProtocol.CL_XYID.CLXY_BASE_OWNER,
    nSeat = 0, -- 庄家座位
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        return bo
    end
}
-- 发牌
LCLProtocol.msgTakeFirst = {
    cmdid = LCLProtocol.CL_XYID.CLXY_TAKE_FIRST,
    nFlag = 0, -- 保留字
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        return bo
    end
}
-- 加底
LCLProtocol.msgAddBase = {
    cmdid = LCLProtocol.CL_XYID.CLXY_ADD_BASE,
    nSeat = 0, -- 加底玩家的座位
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        return bo
    end
}
-- 出牌
LCLProtocol.msgPlayCard = {
    cmdid = LCLProtocol.CL_XYID.CLXY_PLAY_CARD,
    nSeat = 0, -- 座位
    nCardCount = 0, -- 出牌张数。0，表示放弃
    nCards = {}, -- 出牌牌值
    nTypeID = 0, -- 牌型ID
    nPower = 0, -- 牌型枚举权重
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nCardCount = bi:readUInt8()
        if self.nCardCount ~= 0 then
            self.nCards = {}
            for i = 1, self.nCardCount do
                self.nCards[#self.nCards+1] = bi:readUInt8()
            end
            self.nTypeID = bi:readUInt8()
            self.nPower = bi:readUInt8()
        else
            self.nCards = {}
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        if self.nCardCount == 0 then
            bo:writeInt8(self.nCardCount)
        else
            bo:writeInt8(#self.nCards)
            for i = 1, #self.nCards do
                bo:writeInt8(self.nCards[i])
            end
            bo:writeInt8(self.nTypeID)
            bo:writeInt8(self.nPower)
        end
        return bo
    end
}
-- 游戏状态
LCLProtocol.msgState = {
    cmdid = LCLProtocol.CL_XYID.CLXY_STATE,
    nState = 0, -- 游戏状态
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nState = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nState)
        return bo
    end
}
-- 等待结束
LCLProtocol.msgEndWait = {
    cmdid = LCLProtocol.CL_XYID.CLXY_END_WAIT,
    nSeat = 0, -- 结束
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        return bo
    end
}
-- 游戏步骤
LCLProtocol.msgGameStep = {
    STEP_ID = {
        GAME_STEP_START_GAME = 1, -- 开始游戏
        GAME_STEP_TAKE_FIRST = 2, -- 抓牌 
        GAME_STEP_CALL_POINT = 3, -- 叫分  
        GAME_STEP_CALL_BANKER = 4, -- 叫主  敞牌阶段
        GAME_STEP_ROB_BANKER = 5, -- 抢主 
        GAME_STEP_ADD_BASE = 6, -- 加底 
        GAME_STEP_PLAY_CARD = 7, -- 打牌 
        GAME_STEP_WIN_LOST = 8, -- 结算 
        GAME_STEP_END_GAME = 9, -- 结束游戏
        GAME_STEP_CHOOSE_BANKER = 26 -- 抢地主阶段
    },
    cmdid = LCLProtocol.CL_XYID.CLXY_GAME_STEP,
    nStepID = 0, -- 步骤ID
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nStepID = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nStepID)
        return bo
    end
}
-- 权限
LCLProtocol.msgPower = { -- 打牌阶段 
    cmdid = LCLProtocol.CL_XYID.CLXY_POWER,
    powerType = {
        PID_PC_OPEN_CARD = 0x01, -- 明牌   
        PID_PC_NOT_PLAY = 0x02, -- 不出  
        PID_PC_PLAY_CARD = 0x04 -- 出牌 
    },
    -- -- 抢地主权限ID
    -- enum powerType{ 
    --     PID_RB_NOT_ROB = 0x01,  -- 不抢 
    --     PID_RB_ROB_BANKER = 0x02 -- 抢地主 
    -- }
    -- -- 敞牌权限 
    -- enum powerType{ 
    --     PID_RB_NOT_ROB = 0x01,  -- 不敞
    --     PID_RB_ROB_BANKER = 0x02 -- 敞 
    -- }
    nSeat = 0, -- 座位
    nPower = 0, -- 权限
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nPower = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nPower)
        return bo
    end
}
-- 时钟
LCLProtocol.msgClock = {
    cmdid = LCLProtocol.CL_XYID.CLXY_CLOCK,
    nSeat = 0, -- 座位
    nTime = 0, -- 时钟
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nTime = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nTime)
        return bo
    end
}
-- 回应权限
LCLProtocol.msgRespPower = {
    cmdid = LCLProtocol.CL_XYID.CLXY_RESP_POWER,
    PWOER = {
        PID_RB_NOT_ROB = 0x01, -- 不叫/不抢
        PID_RB_ROB_BANKER = 0x02 -- 叫地主/抢地主 
    },
    nSeat = 0, -- 座位
    nPower = 0, -- 权限
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nPower = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nPower)
        return bo
    end
}
-- 回应权限扩展
LCLProtocol.msgRespPowerEx = {
    cmdid = LCLProtocol.CL_XYID.CLXY_RESP_POWER_EX,
    nStepID = 0, -- 步骤ID
    nSeat = 0, -- 座位
    nPower = 0, -- 权限
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nStepID = bi:readUInt8()
        self.nSeat = bi:readUInt8()
        self.nPower = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nStepID)
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nPower)
        return bo
    end
}
-- 轮数据（用于旁观、续完）
LCLProtocol.msgTurnData = {
    cmdid = LCLProtocol.CL_XYID.CLXY_TURN_DATA,
    nPreSeat = 0,
    nNowSeat = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nPreSeat = bi:readUInt8()
        self.nNowSeat = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nPreSeat)
        bo:writeInt8(self.nNowSeat)
        return bo
    end
}
-- 游戏开始
LCLProtocol.msgStartGame = {
    cmdid = LCLProtocol.CL_XYID.CLXY_START_GAME,
    nFlag = 0, -- 标志（保留字）
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        return bo
    end
}
-- 游戏结束
LCLProtocol.msgEndGame = {
    cmdid = LCLProtocol.CL_XYID.CLXY_END_GAME,
    nFlag = 0, -- 标志（保留字）
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        return bo
    end
}
-- 重连
LCLProtocol.msgRelinkEnter = {
    cmdid = LCLProtocol.CL_XYID.CLXY_RELINK_ENTER,
    nFlag = 0, --
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        return bo
    end
}
-- 旁观
LCLProtocol.msgLookerEnter = {
    cmdid = LCLProtocol.CL_XYID.CLXY_LOOKER_ENTER,
    nFlag = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        return bo
    end
}
-- 托管
LCLProtocol.msgTrust = {
    cmdid = LCLProtocol.CL_XYID.CLXY_TRUST,
    nSeat = 0, -- 座位
    nFlag = 0, -- 托管标志  1托管 0非or取消
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nFlag = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nFlag)
        return bo
    end
}
-- 做牌数据（可做的牌）
LCLProtocol.msgSpecfData = {
    cmdid = LCLProtocol.CL_XYID.CLXY_SPECF_DATA,
    nCount = 0, -- 张数
    nCards = {}, -- 可做的牌
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readUInt8()
        self.nCards = {}
        for i = 1, self.nCount do
            self.nCards[#self.nCards+1] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.nCards, self.nCount)
        return bo
    end
}
-- 做手牌
LCLProtocol.msgSpecfHand = {
    cmdid = LCLProtocol.CL_XYID.CLXY_SPECF_HAND,
    nSeat = 0, -- 座位
    nCount = 0, -- 张数
    nCards = {}, -- 要做的牌
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nCount = bi:readUInt8()
        self.nCards = {}
        for i = 1, self.nCount do
            self.nCards[#self.nCards+1] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nCount)
        -- bo:writeString(self.nCards)
        bo:writeInt8(#self.nCards)
        for i = 1, #self.nCards do
            bo:writeInt8(self.nCards[i])
        end
        return bo
    end
}

return LCLProtocol
>N