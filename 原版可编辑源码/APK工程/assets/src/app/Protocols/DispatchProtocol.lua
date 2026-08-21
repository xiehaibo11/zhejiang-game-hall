local DispatchProtocol = {}

local CMDT_CHECKACT = 1; -- 心跳
-- local CMDT_REQCLIENTSOCKETIP        = 2;	-- ip
-- local CMDT_REQCLIENTSOCKETCLOSE     = 3;    -- srs
local CMDT_REQJOINDISPATCHQUEUE = 4; -- 请求加入匹配队列
local CMDT_RESPJOINDISPATCHQUEUE = 5; -- s->c
local CMDT_REQLEAVEDISPATCHQUEUE = 6; -- 请求离开匹配队列
local CMDT_RESPLEAVEDISPATCHQUEUE = 7; -- s->c
local CMDT_NOTIFYUSERJOINTABLEINFO = 8; -- s->c返回开始游戏结果
local CMDT_FORCELEAVEDISPATCHQUEUE = 9; -- s->c强制回到大厅
local CMDT_REQDISPATCHAPPIDLIST = 10; -- 请求匹配服Appid列表
local CMDT_RESPDISPATCHAPPIDLIST = 11; -- 返回Appid列表

DispatchProtocol.CLIENTTYPE = {
    PC = 0, -- 计算机
    TV = 1, -- 电视
    MOBILE = 2, -- 手机
    WEB = 3 -- 浏览器
}

DispatchProtocol.HARDWAREFLAG = -- 带硬件标识
{
    HF_NONE = 0,
    HF_CAMERA = 1, -- 摄像头
    HF_MICROPHONE = 2, -- 麦克风
    HF_JOYPAD = 4 -- 游戏手柄，不区分有线无线
}

DispatchProtocol.ERRORCODE = {
    SUCCESS = 0, -- 正常
    REDISFAIL = 1, -- redis操作失败
    DBPNORESP = 2, -- 数据库没返回
    GPNORESP = 3, -- GP没返回
    NORULE = 4, -- 数据库没返回
    GOLDLOWLIMIT = 5, -- 金币低于下限
    GOLDOVERLIMIT = 6, -- 金币超过上限
    IPLIMIT = 7, -- 同ip限制
    DAY_ESCAPE = 8, -- 当天逃跑率
    TOTAL_ESCAPE = 9, -- 总逃跑率
    NO_RULE = 10, -- 没有规则
    REGAME_ERROR = 11, -- 重连game错误
    EXISTGAME = 12, -- 加入失败,玩家还在游戏中
    PARAM_ERROR = 13, -- 参数错误
    EXISTQUEUE = 14 -- 加入失败,玩家还在队列中
}

DispatchProtocol.ReqJoinDispatchQueue = {
    XY_ID = CMDT_REQJOINDISPATCHQUEUE,
    askid = 0,
    gameid = 0, -- 游戏id
    roomflag = 0, -- 房间场次
    chaircnt = 0, -- 人数
    clienttype = 0, -- 客户端类型, 见宏clienttypebos <<
    hardwareflag = 0, -- 硬件标识
    channelid = 0, -- 渠道号
    osver = 0, -- client os版本号
    identify = "",
    szheadurl = "", -- 玩家头像url

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.roomflag)
        bos:writeInt32(self.chaircnt)
        bos:writeInt32(self.clienttype)
        bos:writeInt32(self.hardwareflag)
        bos:writeInt32(self.channelid)
        bos:writeInt32(self.osver)
        bos:writeString(self.identify)
        bos:writeString(self.szheadurl)
        return bos
    end
}

DispatchProtocol.RespJoinDispatchQueue = {
    XY_ID = CMDT_RESPJOINDISPATCHQUEUE,

    askid = 0,
    errorcode = 0,
    gameid = 0,
    roomflag = 0,
    chaircnt = 0,
    gameappid = 0, -- GameProcess的appid
    roommode = 0,
    srsgroupid = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.errorcode = bis:readUInt8()
        self.gameid = bis:readInt32()
        self.roomflag = bis:readInt32()
        self.chaircnt = bis:readInt32()
        self.gameappid = bis:readInt32()
        self.roommode = bis:readInt32()
        self.srsgroupid = bis:readInt32()
        return self
    end
}

DispatchProtocol.ReqLeaveDispatchQueue = {
    XY_ID = CMDT_REQLEAVEDISPATCHQUEUE,

    askid = 0,
    gameid = 0,
    roomflag = 0,
    chaircnt = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.roomflag)
        bos:writeInt32(self.chaircnt)
        return bos
    end
}

DispatchProtocol.RespLeaveDispatchQueue = {
    XY_ID = CMDT_RESPLEAVEDISPATCHQUEUE,

    FLAG = {SUCCESS = 0, FAILED = 1},

    askid = 0,
    flag = 0,
    gameid = 0,
    roomflag = 0,
    chaircnt = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.gameid = bis:readInt32()
        self.roomflag = bis:readInt32()
        self.chaircnt = bis:readInt32()
        return self
    end
}

DispatchProtocol.CheckAct = {
    XY_ID = CMDT_CHECKACT,
    m_nActive = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.m_nActive)
        return bos
    end
}

DispatchProtocol.NotifyUserJoinTableInfo = {
    XY_ID = CMDT_NOTIFYUSERJOINTABLEINFO,

    askid = 0,
    gameid = 0,
    roomflag = 0,
    chaircnt = 0,
    gameappid = 0,
    tableid = 0,
    chairid = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.gameid = bis:readInt32()
        self.roomflag = bis:readInt32()
        self.chaircnt = bis:readInt32()
        self.gameappid = bis:readInt32()
        self.tableid = bis:readInt32()
        self.chairid = bis:readInt32()
        return self
    end
}

DispatchProtocol.NotifyForceLeaveDispatchQueue = {
    XY_ID = CMDT_FORCELEAVEDISPATCHQUEUE,

    FLAG = {
        SUCCESS = 0,
        GAMERESP_ERROR = 1, -- 参考RespJoinGameByDispatch的错误码
        USER_OFFLINE = 2 -- 掉线
    },

    askid = 0,
    flag = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

DispatchProtocol.ReqDispatchAppIDList = {
    XY_ID = CMDT_REQDISPATCHAPPIDLIST,
    askid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        return bos
    end
}

DispatchProtocol.RespDispatchAppIDList = {
    XY_ID = CMDT_RESPDISPATCHAPPIDLIST,

    askid = 0,
    count = 0,
    appids = {},

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.count = bis:readInt32()
        self.appids = {}
        for i = 1, self.count do
            self.appids[i] = bis:readInt32()
        end
        return self
    end
}

for _, v in pairs(DispatchProtocol) do
    v.processid = 147
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end

return DispatchProtocol
