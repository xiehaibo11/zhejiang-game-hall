local MatchLinkProtocol = {}

MatchLinkProtocol.MatchAwardLog = {
    id = 0,
    matchid = 0,
    gameid = 0,
    subid = 0,
    matchname = "",
    areaid = 0,
    numid = 0,
    nickname = "",
    createdate = 0,
    rank = 0,
    awardsr = 0,
    awardpropid1 = 0,
    awardpropcnt1 = 0,
    awardpropid2 = 0,
    awardpropcnt2 = 0,
    awardpropid3 = 0,
    awardpropcnt3 = 0,
    awardpropid4 = 0,
    awardpropcnt4 = 0,
    status = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    ReadFromBistream = function(self, bis)
        self.id = bis:readInt64()
        self.matchid = bis:readInt32()
        self.gameid = bis:readInt32()

        self.subid = bis:readInt32()
        self.matchname = bis:readString()

        self.areaid = bis:readInt32()
        self.numid = bis:readInt32()

        self.nickname = bis:readString()
        self.createdate = bis:readInt32()
        self.rank = bis:readInt32()
        self.awardsr = bis:readInt32()
        self.awardpropid1 = bis:readInt32()
        self.awardpropcnt1 = bis:readInt32()
        self.awardpropid2 = bis:readInt32()
        self.awardpropcnt2 = bis:readInt32()
        self.awardpropid3 = bis:readInt32()
        self.awardpropcnt3 = bis:readInt32()
        self.awardpropid4 = bis:readInt32()
        self.awardpropcnt4 = bis:readInt32()
        self.status = bis:readInt32()
    end
}

MatchLinkProtocol.ReqMatchAwardLog = {
    XY_ID = 25102,

    askid = 0,
    areaid = 0,
    numid = 0,
    matchid = 0,
    gameid = 0,
    pageindex = 0,
    matchlistappid = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.matchid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.pageindex)
        bos:writeInt32(self.matchlistappid)

        return bos
    end
}

MatchLinkProtocol.RespMatchAwardLog = {
    XY_ID = 25103,

    askid = 0,
    pageindex = 0,
    pagecnt = 0,
    pagedatacnt = 0,
    pagedata = {},

    new = function(self, o)
        o = o or {}
        self.pagedata = {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()
        self.pageindex = bis:readInt32()
        self.pagecnt = bis:readInt32()
        self.pagedatacnt = bis:readInt32()
        for index = 1, self.pagedatacnt do
            self.pagedata[index] = MatchLinkProtocol.MatchAwardLog:new()
            self.pagedata[index]:ReadFromBistream(bis)
        end

        return self
    end
}

MatchLinkProtocol.RespMatchMsgToClient = {
    XY_ID = 25105,

    type = 0,
    szMsg = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.type = bis:readUInt8()
        self.szMsg = bis:readString()

        return self
    end
}

MatchLinkProtocol.ReqJoin = {
    XY_ID = 25100,

    askid = 0,
    areaid = 0,
    numid = 0,
    matchlistappid = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.matchlistappid)

        return bos
    end
}

MatchLinkProtocol.RespJoin = {
    XY_ID = 25101,

    askid = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readInt32()

        return self
    end
}

MatchLinkProtocol.ReqInvite = {
    XY_ID = 25106,

    TYPE = {
        TYPE_SEND = 0,
        TYPE_REFUSE = 1,
        TYPE_AGREE = 2
    },
    nAskid = 0,
    nFromAreaid = 0,
    nFromNumid = 0,
    nToAreaid = 0,
    nToNumid = 0,
    ucType = 0,
    szMsg = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nFromAreaid = bis:readInt32()
        self.nFromNumid = bis:readInt32()
        self.nToAreaid = bis:readInt32()
        self.nToNumid = bis:readInt32()
        self.ucType = bis:readUInt8()
        self.szMsg = bis:readString()

        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nFromAreaid)
        bos:writeInt32(self.nFromNumid)
        bos:writeInt32(self.nToAreaid)
        bos:writeInt32(self.nToNumid)
        bos:writeUInt8(self.ucType)
        bos:writeString(self.szMsg)

        return bos
    end
}

MatchLinkProtocol.RespInvite = {
    XY_ID = 25107,

    TYPE = {
        TYPE_SEND = 0,
        TYPE_REFUSE = 1,
        TYPE_AGREE = 2,
        TYPE_PROMOTE = 3,
        TYPE_LEVEL_UP = 4,
        TYPE_RECALL_NEW = 5
    },
    nAskid = 0,
    nFromAreaid = 0,
    nFromNumid = 0,
    nToAreaid = 0,
    nToNumid = 0,
    ucType = 0,
    szMsg = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nFromAreaid = bis:readInt32()
        self.nFromNumid = bis:readInt32()
        self.nToAreaid = bis:readInt32()
        self.nToNumid = bis:readInt32()
        self.ucType = bis:readUInt8()
        self.szMsg = bis:readString()

        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nFromAreaid)
        bos:writeInt32(self.nFromNumid)
        bos:writeInt32(self.nToAreaid)
        bos:writeInt32(self.nToNumid)
        bos:writeUInt8(self.ucType)
        bos:writeString(self.szMsg)

        return bos
    end
}

MatchLinkProtocol.ReqGetOrSetHead = {
    XY_ID = 25110,

    TYPE = {TYPE_GET = 0, TYPE_SET = 1},
    nAskid = 0,
    ucType = 0,
    szHead = "",
    nAreaid = 0,
    nNumid = 0,
    szNick = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskid)
        bos:writeUInt8(self.ucType)
        bos:writeString(self.szHead)
        bos:writeInt32(self.nAreaid)
        bos:writeInt32(self.nNumid)
        bos:writeString(self.szNick)
        return bos
    end
}

MatchLinkProtocol.RespGetOrSetHead = {
    XY_ID = 25111,

    nAskid = 0,
    ucType = 0,
    szHead = "",
    szNick = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.ucType = bis:readUInt8()
        self.szHead = bis:readString()
        if bis:getAvailableSize() > 0 then
            self.szNick = bis:readString()
        end
        return self
    end
}

----任务奖励通知
MatchLinkProtocol.RespNotifyTaskPercent = {
    XY_ID = 25201,

    STATE = {AWARD_NOT_SEND = 0, AWARD_SEND = 1},

    nTaskId = 0,
    ucState = 0,
    nComplete = 0, -- 完成的
    nTotal = 0, -- 总数
    acData = "", -- 通知字符串

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nTaskId = bis:readInt32()
        self.ucState = bis:readUInt8()
        self.nComplete = bis:readInt32()
        self.nTotal = bis:readInt32()
        self.acData = bis:readString()

        return self
    end
}

MatchLinkProtocol.BroadcastMessage = {
    XY_ID = 25112,
    nMsgId = 0,
    acMsgParam = "",

    MSGID = {
        UPDATE_CLIENT = 0, -- 更新客户端版本
        NOTIFY_AWARD = 1, -- 广播奖励信息
        NOTIFY_NEW_MAIL = 10002, -- 通知新邮件
        NOTIFY_TEA_INVITE = 11601, -- 比赛场通知有邀请函
        NOTIFY_WATCH_TABLE = 3001, -- 通知旁观
    },

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nMsgId = bis:readInt32()
        self.acMsgParam = bis:readString()
        return self
    end
};

MatchLinkProtocol.ReqInviteMore = {
    XY_ID = 25114,

    MAX_INVITE_COUNT = 100,
    TYPE = {
        TYPE_SEND = 0,
        TYPE_REFUSE = 1,
        TYPE_AGREE = 2,
        TYPE_PROMOTE = 3
    },

    nAskid = 0,
    nFromAreaid = 0,
    nFromNumid = 0,
    nCount = 0,
    nToAreaid = {},
    nToNumid = {},
    ucType = 0,
    szMsg = "",

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nAskid = bis:readInt32()
        self.nFromAreaid = bis:readInt32()
        self.nFromNumid = bis:readInt32()
        self.nCount = bis:readInt32()
        for i = 1, self.nCount do
            self.nToAreaid[i] = bis:readInt32()
            self.nToNumid[i] = bis:readInt32()
        end
        self.ucType = bis:readUInt8()
        self.szMsg = bis:readString()

        return self
    end,
    
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.nAskid)
        bos:writeInt32(self.nFromAreaid)
        bos:writeInt32(self.nFromNumid)
        bos:writeInt32(self.nCount)
        for i = 1, self.nCount do
            bos:writeInt32(self.nToAreaid[i])
            bos:writeInt32(self.nToNumid[i])
        end
        bos:writeUInt8(self.ucType)
        bos:writeString(self.szMsg)

        return bos
    end
};

-- 请求关服公告
MatchLinkProtocol.ReqStopSvrMsg  = {
    XY_ID = 25115,
    TYPE = {TYPE_GET = 0, TYPE_SET = 1},
    nAskid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskid)
        return bos
    end
};


MatchLinkProtocol.RespStopSvrMsg  = {
    XY_ID = 25116,
    UCFLAG = {
        NORMAL = 0, --正常
        STOPED = 1, --已关闭
    },
    nAskid = 0,
    ucflag = 0,
    errorMsg = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskid = bis:readInt32()
        self.ucflag = bis:readInt8()
        self.errorMsg = bis:readString()
        return self
    end
};

-- for k, v in pairs(MatchLinkProtocol) do
--     v.processid = 1006
-- end

for _, v in pairs(MatchLinkProtocol) do
    v.processid = 1006
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end

MatchLinkProtocol.processid = 1006

return MatchLinkProtocol
X0