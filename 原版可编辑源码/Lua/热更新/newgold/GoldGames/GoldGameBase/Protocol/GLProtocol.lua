local GLProtocol = {}
local MAX_PLAYER = 3

GLProtocol.GL_XYID = {
    GLXY_FIRST = 1024,
    -- 以下协议游戏必须实现	
    -- GLXY_TEST,				-- 测试
    -- GLXY_RESULT,			-- 结算
    -- GLXY_SPEAK,				-- 俏皮话 c->s
    -- GLXY_GAMETYPE,			-- 1积分，2开心豆
    -- GLXY_BASE,				-- 底分
    -- GLXY_WINORDER,			-- 胜利名次
    -- GLXY_CURLEVEL,			-- 当前牌级，和每个玩家牌级
    -- GLXY_WINLOSTTIMES,		-- 连续头游、末游次数
    -- GLXY_KANGGONG,			-- 抗贡
    -- GLXY_TRICARD,			-- 进贡
    -- GLXY_RECARD,			-- 还贡
    -- GLXY_HISTORY,			-- 历史记录
    -- GLXY_READYSIGN,			-- 准备标志
    -- GLXY_ISAUTOLEVEL,		-- 是否随机级牌
    -- GLXY_MAX_TIMES,			-- 最大局数
    -- CLXY_SWAP_SEAT,         -- 换座
    -- GLXY_PLAYERSIGN,        -- 玩家状态协议（托管等）
    -- GLXY_OPEN_CARD,			-- 开牌
    -- GLXY_OPEN_CARD_SEAT,    -- 明牌位置
    -- GLXY_HIDE_HEAD,			-- 隐藏头像
    -- GLXY_USE_CARD_RECORD,	-- 是否使用记牌器
    -- GLXY_OUT_CARDS_RECORD,	-- 出牌记录
    -- GLXY_LEVEL_STAGE,		-- 升级级牌阶段
    -- GLXY_LEAVE_GAME,		-- 离开游戏
    -- GLXY_CLIENT_FORWARD,	-- 客户端转发
    -- GLXY_PLAYER_FORBIDINFO, -- 托管聊天逃跑惩罚
    -- GLXY_SEEING_SET,		-- 旁观看牌设置
    -- GLXY_PLAYER_RANKINFO,	-- 段位
    -- GLXY_CONFIG_DATA,		-- 服务端配置字段
    -- GLXY_ROOM_LEVEL,		-- 房间等级配置信息
    -- GLXY_WIRE_BREAK,		-- 断线
    -- GLXY_GAMECOMMON_LOGIC,  -- 通用协议
    -- GLXY_REQUEST_DISMISS,	-- 请求解散
    -- GLXY_RESPOND_DISMISS,	-- 回复解散
    -- GLXY_DISMISS_FLAG,		-- 解散标志
    -- GLXY_MATCH_CUR_RESULT,  -- 当前局比赛结果
    -- GLXY_EVERY_MATCH_INFO,	-- 天天赛信息
    -- GLXY_EVERY_FRESH_HEADFREAME,  -- 刷新图像框
    -- GLXY_EVERY_DOUBLE_CARD,	-- 时效道具信息
    -- GLXY_EVERY_FRESH_DOUBLE_CARD,  -- 刷新时效道具
    -- GLXT_GAME_TIPS_MESSAGE,	-- 游戏提示信息
    -- GLXY_CLIENT_FRESH_JFSR,	-- 通知客户端刷新积分银子
    -- GLXY_CHANGE_LUCK,		-- 换手气
    -- GLXY_REQ_CHANGE_LUCK,	-- 请求换手气
    -- GLXY_RESP_CHANGE_LUCK,	-- 回复换手气
    -- GLXY_SHUFFLE_CARD,		-- 洗牌
    -- GLXY_TRIINFO_BEFORE_JINGGONG,  -- 进贡之前的信息 移动用
    -- GLXY_LIFT_TABLE,		-- 升桌信息
    -- GLXY_BOMB_MAX_TIMES,	-- 炸弹最大倍数
    -- GLXY_BOMB_CUR_TIMES,	-- 炸弹当前倍数
    -- GLXY_AVATAR_URL,		-- 玩家头像地址
    -- GLXY_BOX_CREATE_RULE,	-- 开房模式的创建规则
    -- GLXY_BOX_RULE_NOTIFY,	-- 开房模式规则通知
    -- GLXY_BOX_CUR_GAME,		-- 当前游戏局数
    -- GLXY_BOX_TOTAL_RESULT,	-- 总战绩
    -- GLXY_BOX_CUR_RESULT,    -- 当前房间以前战绩
    -- GLXY_BOX_SELECTCARD,	-- 选牌过程
    ------/火拼斗地主
    GLXY_SPEC_BASE = 1280 + 1, -- 特殊底数据
    GLXY_MULT_DATA = 1282, -- 游戏倍数
    GLXY_CARDNUM_LEFT = 1283, -- 记牌器
    GLXY_PLAY_LEVEL = 1284, -- 玩法级别
    GLXY_ADDUP_GAME = 1285, -- 标签
    GLXY_PLAYERINFO = 1286, -- 玩家用户信息
    GLXY_CALL_DOUBLE = 1287, -- 加倍信息
    GLXY_TEST_MSG = 1288, -- 测试输出
    ------/ 三扣一
    GLXY_SANKOUYI_START = 2000,
    GLXY_LOGICDATA = 2001, -- 逻辑数据     四人斗地主通用
    GLXY_SPECBASE = 2002, -- 特殊底数据   
    GLXY_TASKDATA = 2003, -- 任务数据     
    GLXY_TASKFINISH = 2004, -- 任务完成     
    GLXY_MULTDATA = 2005, -- 倍数数据
    GLXY_DAFUXING = 2006, -- 大福星
    GLXY_XIAOFUXING = 2007, -- 小福星
    GLXY_RESULT_EX = 2008, -- 结算
    GLXY_FEIGUA = 2009, -- 废瓜        
    GLXY_LIMITDATA = 2010, -- 废瓜废弹受限数据    废弹 四人斗地主通用
    GLXY_RULE_DATA = 2011, -- （废弃）规则协议
    GLXY_BASEINFO = 2012, -- 基本信息
    GLXY_URL = 2013, -- （废弃）
    GLXY_FACE_INDEX = 2014, -- （废弃）头像索引
    GLXY_ALL_WIN_LOST = 2015, -- （废弃）总输赢
    GLXY_PLAY_TYPE = 2016, -- （废弃）
    GLXY_KILL_TABLE = 2017, -- （废弃）
    GLXY_PLAYER_BLACKLIST = 2018,
    GLXY_ACTION_BLACKLIST = 2019,
    GLXY_BLACKLIST_UNREADY = 2020,
    -- add sqy
    GLXY_KICK_REASON = 2021, -- 踢人原因
    GLXY_HEAD_PROPS = 2022, -- 玩家头像
    GLXY_HEAD_BONUS = 2023, -- 头像增益
    GLXY_REQ_USE_PROP = 2024, -- 请求使用道具
    GLXY_RESP_USE_PROP = 2025, --
    GLXY_PLAYER_USE_PROP = 2026,
    GLXY_PLAYER_USE_PROPS = 2027, -- 客户端使用道具，服务转发
    GLXY_CARD_BACK_PROPS = 2028, -- 牌背道具
    GLXY_EXTRA_BONUS = 2029, -- 额外结算奖励 vip+头像
    ------ 四人斗地主
    GLXY_SIDOU_START = 3000,
    GLXY_TOP_BASE_CARD = 3001,
    GLXY_OPENCARD = 3002,
    GLXY_RESULT_SIDOU = 3003, -- 结算
    GLXY_PLAYER_MATCH_TICKET_STATE = 3004, -- 玩家当前参赛票状态
    GLXY_PLAYER_COST_MATCH_TICKET = 3005, -- 玩家使用参赛票参数
    GLXY_PLAYER_REQ_MATCH_TICKET_STATE = 3006,
    GLXY_PLAYER_REQ_COST_MATCH_TICKET = 3007,
    GLXY_PLAYER_MATCH_UNREADY = 3008,
    GLXY_LAST = 3009,
    GLXY_COUNT = 3010
}


---------------------poker----------------------
GLProtocol.msgOpenCard = {
    cmdid = GLProtocol.GL_XYID.GLXY_OPENCARD,
    nSeat = 0, -- 座位
    nCount = 0, -- 手牌张数
    nCards = {}, -- 手牌数据
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nCount = bi:readUInt8()
        self.nCards = {}
        for i = 1, self.nCount do
            self.nCards[#self.nCards + 1] = bi:readUInt8()
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
GLProtocol.msgTopBaseCard = {
    cmdid = GLProtocol.GL_XYID.GLXY_TOP_BASE_CARD,
    nSeat = 0,
    nCount = 0, -- 底牌张数
    nCards = {}, -- 底牌数据
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readUInt8()
        self.nCards = {}
        for i = 1, self.nCount do
            self.nCards[#self.nCards + 1] = bi:readUInt8()
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

GLProtocol.msgLogicData = {
    cmdid = GLProtocol.GL_XYID.GLXY_LOGICDATA,
    BasePlayTypeScore = 0, -- 底
    InitialMul = 0, -- 初始倍数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.BasePlayTypeScore = bi:readInt32()
        -- self.InitialMul = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.BasePlayTypeScore)
        -- bo:writeInt32(self.InitialMul)
        return bo
    end
}

GLProtocol.msgSpecBase = {
    cmdid = GLProtocol.GL_XYID.GLXY_SPEC_BASE,
    -- 特殊底牌型
    FLAG = {
        OTHER = 0, -- 散牌
        BAO_ZHI = 1, -- 豹子
        DOUBLE_JOKE = 2, -- 双王
        JOKER_DOUBLE = 3, -- 单王+对子
        SINGLE_JOKER = 4, -- 单王
        TONG_HUA_SHUN = 5, -- 同花顺
        SHUN_ZI = 6, -- 顺子
        TONG_HUA = 7, -- 同花
        DOUBLE = 8 -- 对子
    },
    nFlag = 0, -- 标志
    nMult = 0, -- 倍数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        self.nMult = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        bo:writeInt16(self.nMult)
        return bo
    end
}
GLProtocol.msgTaskData = {
    cmdid = GLProtocol.GL_XYID.GLXY_TASKDATA,
    nTaskType = 0, -- 数据
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nTaskType = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nTaskType)
        return bo
    end
}

GLProtocol.msgTaskFinish = {
    cmdid = GLProtocol.GL_XYID.GLXY_TASKFINISH,
    nSeat = 0, -- 数据
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
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

GLProtocol.msgDaFuXing = {
    cmdid = GLProtocol.GL_XYID.GLXY_DAFUXING,
    nFlag = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
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

GLProtocol.msgXiaoFuXing = {
    cmdid = GLProtocol.GL_XYID.GLXY_XIAOFUXING,
    nSeat = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
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

GLProtocol.WinLostAndBombTimes = {
    FLAG = {
        RESULT_NORMAL = 0,
        RESULT_WIN_TOP = 1, -- 赢到上限
        RESULT_LOSE_TOP = 2 -- 输到上限
    },
    nResultStatus = {}, -- 结果状态是否异常
    nBombTimes = 0, -- 炸弹倍数
    nTotalEscapeScore = 0, -- 逃跑总扣除
    nEscapeCompScore = 0, -- 逃跑补偿扣除
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nResultStatus = {}
        for i = 1, MAX_PLAYER do
            self.nResultStatus[i] = bi:readInt32()
        end
        self.nBombTimes = bi:readInt32()
        self.nTotalEscapeScore = bi:readInt32()
        self.nEscapeCompScore = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        for i = 1, MAX_PLAYER do
            bo:writeInt32(self.nResultStatus[i])
        end
        bo:writeInt32(self.nBombTimes)
        bo:writeInt32(self.nTotalEscapeScore)
        bo:writeInt32(self.nEscapeCompScore)
        return bo
    end
}

GLProtocol.msgResultEx = {
    cmdid = GLProtocol.GL_XYID.GLXY_RESULT_EX,
    nWinLost = {},
    nWinnerSeat = 0, -- 头游
    nBankerSeat = 0, -- 庄
    nEscapeSeat = 0, -- 逃跑的人,,,没有逃跑=MAX_PLAYER
    wat = {}, -- todo new WinLostAndBombTimes(),		--结果状态以及炸弹翻倍信息等
    bNoTally = false, -- 不计分
    bPoChan = {}, -- 破产
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nWinLost = {}
        for i = 1, MAX_PLAYER do
            self.nWinLost[i] = bi:readInt64()
        end
        self.nWinnerSeat = bi:readUInt8()
        self.nBankerSeat = bi:readUInt8()
        self.nEscapeSeat = bi:readUInt8()
        self.wat = {}
        self.wat.bistream(buff, bi)
        if bi:getAvailableSize() > 0 then
            self.bNoTally = bi:readBool()
            self.bPoChan = {}
            for i = 1, MAX_PLAYER do
                self.bPoChan[i] = bi:readBool()
            end
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

GLProtocol.msgLimitData = {
    cmdid = GLProtocol.GL_XYID.GLXY_LIMITDATA,
    n_bLimitSeat = {}, -- 受限的几个玩家座位
    n_Bomb = {}, -- 已经出的炸弹数量
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.n_bLimitSeat = {}
        self.n_Bomb = {}
        for i = 1, MAX_PLAYER do
            self.n_bLimitSeat[i] = bi:readUInt8()
            self.n_Bomb[i] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        for i = 1, MAX_PLAYER do
            bo:writeInt8(self.n_bLimitSeat[i])
            bo:writeInt8(self.n_Bomb[i])
        end
        return bo
    end
}

GLProtocol.msgRuleData = {
    cmdid = GLProtocol.GL_XYID.GLXY_RULE_DATA,
    n_RuleCallPointMode = 0, -- 叫分方式
    n_bBombMaxLimit = 0, -- 废弹
    n_bFeiGua = 0, -- 废瓜
    n_bHavePrize = 0, -- 奖励
    n_BombMaxNum = 0, -- 最多出几个炸弹
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.n_RuleCallPointMode = bi:readUInt8()
        self.n_bBombMaxLimit = bi:readUInt8()
        self.n_bFeiGua = bi:readUInt8()
        self.n_bHavePrize = bi:readUInt8()
        self.n_BombMaxNum = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.n_RuleCallPointMode)
        bo:writeInt8(self.n_bBombMaxLimit)
        bo:writeInt8(self.n_bFeiGua)
        bo:writeInt8(self.n_bHavePrize)
        bo:writeInt8(self.n_BombMaxNum)
        return bo
    end
}

GLProtocol.msgBaseInfo = {
    cmdid = GLProtocol.GL_XYID.GLXY_BASEINFO,
    nPlayPoint = 0, -- 包含奖励
    nPlayPoint2 = 0, -- 不包含奖励
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nPlayPoint = bi:readInt32()
        self.nPlayPoint2 = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nPlayPoint)
        bo:writeInt32(self.nPlayPoint2)
        return bo
    end
}

GLProtocol.msgFeiGua = {
    cmdid = GLProtocol.GL_XYID.GLXY_FEIGUA,
    nFeiGuaCards = {}, -- 出牌牌值
    nCount = {}, -- 牌数
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFeiGuaCards = {}
        self.nCount = {}
        for i = 1, MAX_PLAYER do
            self.nFeiGuaCards[i] = self.nFeiGuaCards[i] or {}
            for j = 1, 55 do
                self.nFeiGuaCards[i][j] = bi:readUInt8()
            end
        end
        for i = 1, MAX_PLAYER do
            self.nCount[i] = bi:readUInt8()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        for i = 1, MAX_PLAYER do
            self.nFeiGuaCards[i] = self.nFeiGuaCards[i] or {}
            for j = 1, 55 do
                bo:writeInt8(self.nFeiGuaCards[i][j])
            end
        end
        for i = 1, MAX_PLAYER do
            bo:writeInt8(self.nCount[i])
        end
        return bo
    end
}

-- 结算
GLProtocol.msgResult = {
    cmdid = GLProtocol.GL_XYID.GLXY_RESULT_SIDOU,
    nToEnd = false,
    nScore = {}, -- 所有人的输赢
    nRewards = {}, -- 喜分
    nWinLost = {}, -- 合计
    nRewardCoun = {}, -- 七炸、八炸、天王炸
    nBankerSeat = 0, -- 庄座位号 
    nWinnerSeat = 4, -- 头游座位号，4表示不存在头游
    nEscapeSeat = -1, -- 逃跑玩家
    wat = {}, -- todo new WinLostAndBombTimes(),		--结果状态以及炸弹翻倍信息等
    bPoChan = {},
    iMatchWinLost = {},
    bPlayerInMatch = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nScore = {}
        self.nRewards = {}
        self.nWinLost = {}
        self.nRewardCoun = {}
        self.wat = {}
        self.bPoChan = {}
        self.iMatchWinLost = {}
        self.bPlayerInMatch = {}
        self.nToEnd = bi:readBool()
        for i = 1, MAX_PLAYER do
            self.nScore[i] = bi:readInt64() -- long8  readLongLong
            self.nRewards[i] = bi:readInt64()
            self.nWinLost[i] = bi:readInt64()
            self.nRewardCoun[i] = {}
            for j = 1, 3 do
                self.nRewardCoun[i][j] = bi:readInt32()
            end
        end
        self.nBankerSeat = bi:readUInt8()
        self.nWinnerSeat = bi:readUInt8()
        if bi:getAvailableSize() > 0 then
            self.nEscapeSeat = bi:readUInt8()
        end
        if bi:getAvailableSize() > 0 then
            self.wat.bistream(buff, bi)
        end
        for i = 1, MAX_PLAYER do
            if bi:getAvailableSize() > 0 then
                self.bPoChan[i] = bi:readUInt8()
            end
        end
        for i = 1, MAX_PLAYER do
            if bi:getAvailableSize() > 0 then
                self.iMatchWinLost[i] = bi:readInt32()
                self.bPlayerInMatch[i] = bi:readUInt8()
            end
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeBool(self.nToEnd)
        for i = 1, MAX_PLAYER do
            bo:writeInt64(self.nScore[i])
            bo:writeInt64(self.nRewards[i])
            bo:writeInt64(self.nWinLost[i])
            for j = 1, 3 do
                bo:writeInt32(self.nRewardCoun[i][j])
            end
        end
        bo:writeInt8(self.nBankerSeat)
        bo:writeInt8(self.nWinnerSeat)
        bo:writeInt8(self.nEscapeSeat)
        return bo
    end
}

-- 黑名单信息
GLProtocol.msgPlayerBlackList = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_BLACKLIST,
    nCount = 0,
    nAreaid = {},
    nNumid = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nCount = bi:readInt32()
        self.nAreaid = {}
        self.nNumid = {}
        for i = 1, self.nCount do
            self.nAreaid[i] = bi:readInt32()
            self.nNumid[i] = bi:readInt32()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nCount)
        for i = 1, self.nCount do
            bo:writeInt32(self.nAreaid[i])
            bo:writeInt32(self.nNumid[i])
        end
        return bo
    end
}

-- 黑名单操作
GLProtocol.msgActionBlackList = {
    cmdid = GLProtocol.GL_XYID.GLXY_ACTION_BLACKLIST,
    action = 0, -- 0:load 1:add 2:remove
    blackareaid = 0,
    blacknumid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.action = bi:readInt32()
        self.blackareaid = bi:readInt32()
        self.blacknumid = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.action)
        bo:writeInt32(self.blackareaid)
        bo:writeInt32(self.blacknumid)
        return bo
    end
}

-- 黑名单unready
GLProtocol.msgBlackListUnready = {
    cmdid = GLProtocol.GL_XYID.GLXY_BLACKLIST_UNREADY,
    areaid = 0, --
    numid = 0, --
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.areaid = bi:readInt32()
        self.numid = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.areaid)
        bo:writeInt32(self.numid)
        return bo
    end
}

GLProtocol.msgPlayerMatchTicketState = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_MATCH_TICKET_STATE,
    sSeat = 0, -- 座位
    sState = 0,
    iValidity = 0,
    sTicketCount = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.sSeat = bi:readInt16()
        self.sState = bi:readInt16()
        self.iValidity = bi:readInt32()
        self.sTicketCount = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.sSeat)
        bo:writeInt16(self.sState)
        bo:writeInt32(self.iValidity)
        bo:writeInt16(self.sTicketCount)
        return bo
    end
}

GLProtocol.msgPlayerCostMatchTicket = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_COST_MATCH_TICKET,
    sSeat = 0, -- 座位
    sState = 0,
    iValidity = 0,
    sTicketCount = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.sSeat = bi:readInt16()
        self.sState = bi:readInt16()
        self.iValidity = bi:readInt32()
        self.sTicketCount = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.sSeat)
        bo:writeInt16(self.sState)
        bo:writeInt32(self.iValidity)
        bo:writeInt16(self.sTicketCount)
        return bo
    end
}

GLProtocol.msgPlayerReqCostMatchTicket = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_REQ_COST_MATCH_TICKET,
    sSeat = 0, -- 座位
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.sSeat = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.sSeat)
        return bo
    end
}

GLProtocol.msgPlayerReqMatchTicketState = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_REQ_MATCH_TICKET_STATE,
    sSeat = 0, -- 座位
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.sSeat = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.sSeat)
        return bo
    end
}

GLProtocol.msgPlayerMatchUnReady = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_MATCH_UNREADY,
    sSeat = 0, -- 座位
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.sSeat = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.sSeat)
        return bo
    end
}

GLProtocol.msgKickReason = {
    cmdid = GLProtocol.GL_XYID.GLXY_KICK_REASON,
    FLAG = {
        KICK_REASON_VS_LOW_LIMIT = 0, -- 虚拟分低于房间下限被踢出
        KICK_REASON_VS_HIGH_LIMIT = 1, -- 虚拟分高于房间上限被踢出
        KICK_REASON_RS_LOW_LIMIT = 2, -- 真实分低于房间下限被踢出
        KICK_REASON_RS_HIGH_LIMIT = 3, -- 真实分高于房间上限被踢出
        KICK_REASON_LOST_CONNECTION = 4, -- 掉线时间太长被踢出
        KICK_REASON_NOT_READY = 5, -- 未准备
        KICK_REASON_NONE = 6
    },
    nSeat = 0,
    nReason = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nReason = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nSeat)
        bo:writeInt32(self.nReason)
        return bo
    end
}

-- /**请求使用道具*/
GLProtocol.msgReqUseProp = {
    cmdid = GLProtocol.GL_XYID.GLXY_REQ_USE_PROP,
    nPropID = 0,
    nTargetSeat = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nPropID = bi:readInt32()
        self.nTargetSeat = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nPropID)
        bo:writeInt32(self.nTargetSeat)
        return bo
    end
}

GLProtocol.msgRespUseProp = {
    cmdid = GLProtocol.GL_XYID.GLXY_RESP_USE_PROP,
    FLAG = {
        RESP_USE_PROP_SUCCESS = 0,
        RESP_USE_PROP_OUT_OF_LIMIT = 1, -- 超出限制
        RESP_USE_PROP_OUT_OF_SR = 2, -- 财富不足
        RESP_USE_PROP_INVALID_PROP_ID = 3, -- 无效的道具ID
        RESP_USE_PROP_FAILED_TO_COST = 4 -- 扣钱失败
    },
    nPropID = 0,
    nFlag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nPropID = bi:readInt32()
        self.nFlag = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nPropID)
        bo:writeInt32(self.nFlag)
        return bo
    end
}

-- /**使用道具结果通知*/
GLProtocol.msgPlayerUseProp = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_USE_PROP,
    nSeat = 0,
    nTargetSeat = 0,
    nPropID = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nTargetSeat = bi:readInt32()
        self.nPropID = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nSeat)
        bo:writeInt32(self.nTargetSeat)
        bo:writeInt32(self.nPropID)
        return bo
    end
}

GLProtocol.msgPlayerUseProps = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYER_USE_PROPS,
    seat = 0,
    info = "",

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.seat = bi:readInt32()
        self.info = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.seat)
        bo:readBool(self.info)
        return bo
    end
}

GLProtocol.msgHeadProps = {
    cmdid = GLProtocol.GL_XYID.GLXY_HEAD_PROPS,
    nSeat = 0,
    nPropTypeCount = 0,
    nPropID = {},
    nPropCount = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nPropTypeCount = bi:readInt32()
        if self.nPropTypeCount > 0 then
            for i = 1, self.nPropTypeCount do
                self.nPropID = {}
                self.nPropCount = {}
                if bi:getAvailableSize() > 0 then
                    self.nPropID[#self.nPropID + 1] = bi:readInt32()
                else
                    self.nPropID[#self.nPropID + 1] = 0
                end
            end
            for i = 1, self.nPropTypeCount do
                if bi:getAvailableSize() > 0 then
                    self.nPropCount[#self.nPropCount + 1] = bi:readInt64()
                else
                    self.nPropCount[#self.nPropCount + 1] = 0
                end
            end
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nSeat)
        bo:writeInt32(self.nPropTypeCount)
        if self.nPropTypeCount > 0 then
            for i = 1, self.nPropTypeCount do
                if self.nPropID[i] ~= nil then
                    bo:writeInt32(self.nPropID[i])
                else
                    bo:writeInt32(0)
                end
            end
            for i = 1, self.nPropTypeCount do
                if self.nPropCount[i] ~= nil then
                    bo:writeInt64(self.nPropCount[i])
                else
                    bo:writeInt64(0)
                end
            end
        end
        return bo
    end
}

-- /**头像增益*/
GLProtocol.msgHeadBonus = {
    cmdid = GLProtocol.GL_XYID.GLXY_HEAD_BONUS,
    nBonus = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBonus = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nBonus)
        return bo
    end
}

GLProtocol.msgCardBackProps = {
    cmdid = GLProtocol.GL_XYID.GLXY_CARD_BACK_PROPS,
    nSeat = 0,
    nPropID = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt32()
        self.nPropID = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nSeat)
        bo:writeInt32(self.nPropID)
        return bo
    end
}

GLProtocol.msgExtraBonus = {
    cmdid = GLProtocol.GL_XYID.GLXY_EXTRA_BONUS,
    nHeadBonus = {},
    nHeadBonusRate = {},
    nVipBonus = {},
    nVipBonusRate = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
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
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        for i = 1, MAX_PLAYER do
            bo:writeInt32(self.nHeadBonus[i])
            bo:writeInt32(self.nHeadBonusRate[i])
            bo:writeInt32(self.nVipBonus[i])
            bo:writeInt32(self.nVipBonusRate[i])
        end
        return bo
    end
}

-- /**火拼斗地主*/
GLProtocol.msgSpecBaseHpDddz = {
    cmdid = GLProtocol.GL_XYID.GLXY_SPECBASE,
    -- 特殊底牌型
    FLAG = {
        NONE = 0, -- 0
        BLACK_JOKE = 1, -- 小王 1
        RED_JOKE = 2, -- 大王 2
        TONG_HUA = 3, -- 同花 3
        SHUN_ZI = 4, -- 顺子 4
        BAO_ZI = 5, -- 豹子 5 三条
        TONG_HUA_SHUN = 6, -- 同花顺 6
        JOKES = 7, -- 火箭 7
        DOUBLE_TWO = 8, -- 对2  8
        DOUBLE_AND_ONE_KING = 9, -- 对子+单王 9
        DOUBLE = 10 -- 对子    10
    },
    nFlag = 0, -- 标志
    nMult = 0, -- 倍数

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        self.nMult = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        bo:writeInt16(self.nMult)
        return bo
    end
}

GLProtocol.msgMultData = {
    cmdid = GLProtocol.GL_XYID.GLXY_MULT_DATA,
    FLAG = {
        NONE = -1,
        DEFAULTMULT = 0, -- 游戏基础倍数，由游戏逻辑服务配置
        BASECARDMULT = 1, -- 底倍数
        BOMBMULT = 2, -- 炸弹倍数
        ROBMULT = 3, -- 抢地主倍数
        CHUNTIANMULT = 4, -- 春天倍数
        FANCHUNMULT = 5, -- 反春天倍数
        DOUBLEMULT = 6, -- 加倍倍数
        ALLMULT = 7, -- 所有倍数
        COUNT = 8
    },
    nData = 0, -- 数据
    nFlag = 0, -- 标志
    nStep = 0, -- 步骤

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nData = bi:readInt32()
        self.nFlag = bi:readUInt8()
        self.nStep = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.nData)
        bo:writeInt8(self.nFlag)
        bo:writeInt8(self.nStep)
        return bo
    end
}

GLProtocol.msgCallDouble = {
    cmdid = GLProtocol.GL_XYID.GLXY_CALL_DOUBLE,
    nCallDoubleType = { -- 等同power
        nError = 0,
        nNotCall = 1,
        nNormal = 2,
        nSuper = 4
    },
    nSeat = 0,
    nType = 0, -- 加倍类型 nCallDoubleType
    bRelink = false, -- 是否断线重连标志

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nType = bi:readUInt8()
        self.bRelink = bi:readBool()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nType)
        bo:writeBool(self.bRelink)
        return bo
    end
}
-- 协议：记牌器
GLProtocol.msgCardNumLeft = {
    cmdid = GLProtocol.GL_XYID.GLXY_CARDNUM_LEFT,
    -- 每张牌出牌张数
    card3count = 0,
    card4count = 0,
    card5count = 0,
    card6count = 0,
    card7count = 0,
    card8count = 0,
    card9count = 0,
    card10count = 0,
    cardJcount = 0,
    cardQcount = 0,
    cardKcount = 0,
    cardAcount = 0,
    card2count = 0,
    cardFcount = 0,
    cardZcount = 0,
    baseCardsCount = 0,
    baseCards = {},
    baseCardsOutCount = 0,
    baseCardsOutInfo = {}, -- 1未出  2已出

    nData = 0, -- 数据
    nFlag = 0, -- 标志

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.card3count = bi:readUInt8()
        self.card4count = bi:readUInt8()
        self.card5count = bi:readUInt8()
        self.card6count = bi:readUInt8()
        self.card7count = bi:readUInt8()
        self.card8count = bi:readUInt8()
        self.card9count = bi:readUInt8()
        self.card10count = bi:readUInt8()
        self.cardJcount = bi:readUInt8()
        self.cardQcount = bi:readUInt8()
        self.cardKcount = bi:readUInt8()
        self.cardAcount = bi:readUInt8()
        self.card2count = bi:readUInt8()
        self.cardFcount = bi:readUInt8()
        self.cardZcount = bi:readUInt8()
        self.baseCards = {}
        self.baseCardsOutInfo = {}
        local length = bi:readInt8()
        if length > 0 then
            for i = 1, length do
                self.baseCards[#self.baseCards + 1] = bi:readUInt8()
            end
        end
        local length = bi:readInt8()
        if length > 0 then
            for i = 1, length do
                self.baseCardsOutInfo[#self.baseCardsOutInfo + 1] = bi:readUInt8()
            end
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.card3count)
        bo:writeInt8(self.card4count)
        bo:writeInt8(self.card5count)
        bo:writeInt8(self.card6count)
        bo:writeInt8(self.card7count)
        bo:writeInt8(self.card8count)
        bo:writeInt8(self.card9count)
        bo:writeInt8(self.card10count)
        bo:writeInt8(self.cardJcount)
        bo:writeInt8(self.cardQcount)
        bo:writeInt8(self.cardKcount)
        bo:writeInt8(self.cardAcount)
        bo:writeInt8(self.card2count)
        bo:writeInt8(self.cardFcount)
        bo:writeInt8(self.cardZcount)
        bo:writeString(self.baseCards)
        bo:writeString(self.baseCardsOutInfo)
        return bo
    end
}

GLProtocol.msgTestMsg = {
    cmdid = GLProtocol.GL_XYID.GLXY_TEST_MSG,
    msg = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        local length = bi:readInt8()
        self.msg = {}
        if length > 0 then
            for i = 1, length do
                self.msg[#self.msg + 1] = bi:readUInt8()
            end
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.msg)
        return bo
    end
}
GLProtocol.msgPlayLevelGame = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAY_LEVEL,
    nSeat = 0,
    nLevel = 0, -- 等级

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nLevel = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nLevel)
        return bo
    end
}

GLProtocol.msgAddupGame = {
    cmdid = GLProtocol.GL_XYID.GLXY_ADDUP_GAME,
    nSeat = 0,
    nLabel = 0, -- 闯关赛标签

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.nLabel = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt8(self.nLabel)
        return bo
    end
}

GLProtocol.msgPlayerInfo = {
    cmdid = GLProtocol.GL_XYID.GLXY_PLAYERINFO,
    nSeat = 0,
    numid = 0,
    win = 0,
    lose = 0,
    nSeat1 = 0,
    numid1 = 0,
    win1 = 0,
    lose1 = 0,
    nSeat2 = 0,
    numid2 = 0,
    win2 = 0,
    lose2 = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readUInt8()
        self.numid = bi:readInt32()
        self.win = bi:readInt64()
        self.lose = bi:readInt64()
        self.nSeat1 = bi:readUInt8()
        self.numid1 = bi:readInt32()
        self.win1 = bi:readInt64()
        self.lose1 = bi:readInt64()
        self.nSeat2 = bi:readUInt8()
        self.numid2 = bi:readInt32()
        self.win2 = bi:readInt64()
        self.lose2 = bi:readInt64()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nSeat)
        bo:writeInt32(self.numid)
        bo:writeInt64(self.win)
        bo:writeInt64(self.lose)
        bo:writeInt8(self.nSeat1)
        bo:writeInt32(self.numid1)
        bo:writeInt64(self.win1)
        bo:writeInt64(self.lose1)
        bo:writeInt8(self.nSeat2)
        bo:writeInt32(self.numid2)
        bo:writeInt64(self.win2)
        bo:writeInt64(self.lose2)
        return bo
    end
}

return GLProtocol