local RLProtocol = {}
local MAX_PLAYER = 3

RLProtocol.RL_XYID = {
    RLXY_FIRST = 0x200,
    RLXY_TEST = 513, -- 测试
    RLXY_RESULT = 514, -- 结算
    RLXY_REQ_JIESAN = 515, -- 包厢房-请求解散
    RLXY_RESP_JIESAN = 516, -- 包厢房-返回请求解散信息
    RLXY_CUR_PAN_SHU = 517, -- 包厢房-当前的盘数，用于包厢中，当前盘数/目标盘数
    RLXY_TOTAL_WINLOST = 518, -- 包厢房-房卡模式玩家总结算 
    RLXY_SHOW_START_BTN = 519, -- 包厢房-4人开始房主显示开始按钮
    RLXY_ROOM_RULE = 520, -- 包厢房-游戏规则，
    RLXY_JIESAN_SUC = 521, -- 包厢房-解散成功
    RLXY_RESULT_TALLY = 522, -- 全模式-玩家实时结算
    RLXY_PLAYER_STATE = 523, -- 排位匹配-玩家状态
    RLXY_BROKE_PLAYER = 524, -- 排位匹配,普通房间-玩家破产(破产和封顶)
    RLXY_PLAYER_SORT = 525, -- 排位匹配-玩家排序
    RLXY_RANK_END_RESULT = 526, -- 排位匹配-结算信息（对局费，增减星等）
    RLXY_BUY_AND_USE_PROP = 527, -- 购买和使用道具
    RLXY_BUY_PROP_EXPEND = 528, -- 购买道具的花费
    RLXY_BUY_PROP_LIST = 529, -- 购买道具的记录
    RLXY_GIVEUP_PLAYER = 530, -- 玩家认输状态
    RLXY_PLAYER_GIVEUP = 531, -- 玩家认输
    RLXY_LUAAWARD_STRING = 532, -- 通知奖励脚本（带实时金币）
    RLXY_PLAY_LEVEL = 533, -- 客户端通知游戏逻辑玩法等级
    RLXY_REQ_USING_PROP = 534, -- 玩家请求使用互动道具
    RLXY_RESP_USING_PROP = 535, -- 回复请求使用道具结果
    RLXY_FEE_BASESCORE = 640, -- 普通房-对局费,底分
    RLXY_EXTRA_BONUS = 641, -- 结算额外加成 S=>C
    RLXY_HEAD_PROP = 642, -- 头像框信息 S=>C
    RLXY_SHOW_PLAYER_READY = 643, -- 匹配成功后准备阶段按钮倒计时展示
    RLXY_TIMEOUT_CHANGESEAT = 644, -- 匹配成功后准备超时，需要换桌
    RLXY_PLAYER_DRESS_PROPS = 645,
    RLXY_LAST = 0x300 -- 框架协议ID到此为止
}

-- 结算
RLProtocol.msgResult = {
    cmdid = RLProtocol.RL_XYID.RLXY_RESULT,
    ResultType = {
        nError = 0,
        nWin = 1, -- 赢
        nLose = 2, -- 输
        nDrawn = 3 -- 平
    },
    nWinLost = {}, -- 得分
    nResult = {}, -- 输赢
    nMult = {}, -- 倍数信息
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nWinLost = {}
        self.nResult = {}
        self.nMult = {}
        for i = 1, MAX_PLAYER do
            self.nWinLost[i] = bi:readInt64()
        end
        for i = 1, MAX_PLAYER do
            self.nResult[i] = bi:readUInt8()
        end
        for i = 1, MAX_PLAYER do
            self.nMult[i] = bi:readInt64()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        for i = 1, MAX_PLAYER do
            bo:writeInt64(self.nWinLost[i])
        end
        for i = 1, MAX_PLAYER do
            bo:writeInt8(self.nResult[i])
        end
        for i = 1, MAX_PLAYER do
            bo:writeInt64(self.nMult[i])
        end
        return bo
    end
}

-- 破产和封顶
RLProtocol.msgPlayerGoBroke = {
    cmdid = RLProtocol.RL_XYID.RLXY_BROKE_PLAYER,
    m_Broke = {}, -- 破产
    m_BCap = {}, -- 封顶
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.m_Broke = {}
        self.m_BCap = {}
        for i = 1, MAX_PLAYER do
            self.m_Broke[i] = bi:readBool()
            self.m_BCap[i] = bi:readBool()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        for i = 1, MAX_PLAYER do
            bo:writeBool(self.m_Broke[i])
            bo:writeBool(self.m_BCap[i])
        end
        return bo
    end
}

-- 额外加成 vip、头像框加成
RLProtocol.msgExtraBonus = {
    cmdid = RLProtocol.RL_XYID.RLXY_EXTRA_BONUS,
    nHeadBonus = {}, -- 头像增益
    nHeadBonusRate = {}, -- 头像增幅比例
    nVipBonus = {}, -- vip增益
    nVipBonusRate = {}, -- vip增幅比例
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nHeadBonus = {}
        self.nHeadBonusRate = {}
        self.nVipBonus = {}
        self.nVipBonusRate = {}
        for i = 1, MAX_PLAYER do
            self.nHeadBonus[i] = bi:readInt32()
            self.nHeadBonusRate[i] = bi:readInt32()
            self.nVipBonus[i] = bi:readInt32()
            self.nVipBonusRate[i] = bi:readInt32()
        end
        return bi
    end
}

-- 头像框道具信息
RLProtocol.msgHeadProp = {
    cmdid = RLProtocol.RL_XYID.RLXY_HEAD_PROP,
    nSeat = 0, -- 座位、
    nPropTypeCount = 0,
    nPropID = {}, -- 道具id
    nPropCount = {}, -- 道具数目（时效道具是时间戳）
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt32()
        self.nPropTypeCount = bi:readUInt32()
        self.nPropID = {}
        self.nPropCount = {}
        for i = 1, self.nPropTypeCount do
            self.nPropID[i] = bi:readUInt32()
            self.nPropCount[i] = bi:readInt64()
        end
        return bi
    end
}

-- 匹配成功后准备阶段按钮倒计时展示
RLProtocol.msgShowPlayerReady = {
    cmdid = RLProtocol.RL_XYID.RLXY_SHOW_PLAYER_READY,
    nTime = 0, -- 倒计时，超时踢
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nTime = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nTime)
        return bo
    end
}
-- 匹配成功后准备超时，需要换桌
RLProtocol.msgTimeOutChangeSeat = {
    cmdid = RLProtocol.RL_XYID.RLXY_TIMEOUT_CHANGESEAT,
    nNum = 0, -- 预留字段
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nNum = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nNum)
        return bo
    end
}

-- 普通房-对局飞，底分
RLProtocol.msgFeeAndBaseScore = {
    cmdid = RLProtocol.RL_XYID.RLXY_FEE_BASESCORE,
    nServcieFee = 0, -- 服务费
    nBaseScore = 0, -- 底分
    nNum1 = 0, -- 预留1
    nNum2 = 0, -- 预留1
    nMaxWin = 0, -- 输赢封顶
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nServcieFee = bi:readInt32()
        self.nBaseScore = bi:readInt32()
        self.nNum1 = bi:readInt32()
        self.nNum2 = bi:readInt32()
        self.nMaxWin = bi:readInt64()
        return bi
    end
}

RLProtocol.msgPlayerDressProps = {
    cmdid = RLProtocol.RL_XYID.RLXY_PLAYER_DRESS_PROPS,
    nSeat = 0,
    nCount = 0,
    nDressProp = {},
    -- :{
    --     nDressType?: Int,
    --     nPropID?: Int,
    --     lPropCount?: LongLong,
    -- }[]=[]
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nCount = bi:readUInt32()
        self.nDressProp = {}
        for i = 1, self.nCount do
            self.nDressProp[i] = {}
            self.nDressProp[i].nDressType = bi:readInt32()
            self.nDressProp[i].nPropID = bi:readInt32()
            self.nDressProp[i].lPropCount = bi:readInt64()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

return RLProtocol
