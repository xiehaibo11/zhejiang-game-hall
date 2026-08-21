local LogicBaseProtocol = {}

LogicBaseProtocol.msgPlayerData = {
    XY_ID = 4,
    nBrandID = 0, -- 获得品牌ID
    nNumberID = 0, -- 获得数字ID
    szNickname = "", -- 昵称
    szPTNumberID = "", -- PT数字帐号
    nSex = "", -- 性别, 男:'1' 女:'0' (变量内容为字符)
    nVipID = 0, -- 得到会员, 可修改
    nBankRich = 0,
    nRight = 0, -- 权利, 可修改
    nCharm = 0, -- 魅力, 可修改
    nContribution = 0,
    nYuanBao = 0, -- 获取元宝, 可修改
    nFamily = 0, -- 家族, 可修改
    nFamilyDatePower = 0, -- 家族内职务权利, 可修改
    nFaceID = 0, -- 面, 可修改
    nPlayTypeScore = 0, -- 会根据不同PlayType取得不同的数值
    nGameMoney = 0, -- 游戏财富, 可修改
    nGameScore = 0, -- 游戏优胜值, 可修改
    nGameDou = 0, -- 游戏豆, 可修改
    nGameExp = 0, -- 游戏经验, 可修改
    nWin = 0, -- 游戏胜盘数, 可修改
    nLose = 0, -- 游戏负盘数, 可修改
    nDraw = 0, -- 游戏平局, 可修改
    nEscape = 0, -- 游戏逃跑, 可修改
    nState = 0, -- UserStateOfGame 玩家状态
    nSeat = 0, -- 玩家座位
    isClientEntered = 0, -- 游戏socket是否有效进入(客户端启动起来了并且通过了认证)
    nIP = 0, -- IP，数字
    szIPName = "", -- IP，字符串
    nNetSpeed = 0, -- 网速
    nClientType = 0, -- 客户端是什么类型
    nHardWareFlag = 0, -- 客户端带什么硬件, 可修改
    nLeftBreakCount = 0, -- 剩余断线次数
    isRobot = 0, -- 是否机器人
    isAnonymity = false, -- 是否是匿名
    szNickname2 = "", -- 昵称2
    szHeadUrl = "", -- 用户头像url
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        self.szNickname = bis:readString()
        self.szPTNumberID = bis:readString()
        self.nSex = bis:readInt8()
        self.nVipID = bis:readInt32()
        self.nBankRich = bis:readInt64()
        self.nRight = bis:readInt32()
        self.nCharm = bis:readInt32()
        self.nContribution = bis:readInt32()
        self.nYuanBao = bis:readInt32()
        self.nFamily = bis:readUInt32()
        self.nFamilyDatePower = bis:readInt16()
        self.nFaceID = bis:readUInt32()
        self.nPlayTypeScore = bis:readInt64()
        self.nGameMoney = bis:readInt64()
        self.nGameScore = bis:readInt64()
        self.nGameDou = bis:readInt64()
        self.nGameExp = bis:readInt32()
        self.nWin = bis:readInt32()
        self.nLose = bis:readInt32()
        self.nDraw = bis:readInt32()
        self.nEscape = bis:readInt32()
        self.nState = bis:readInt16()
        self.nSeat = bis:readInt16()
        self.isClientEntered = bis:readInt32()
        self.nIP = bis:readInt32()
        self.szIPName = bis:readString()
        self.nNetSpeed = bis:readInt16()
        self.nClientType = bis:readInt32()
        self.nHardWareFlag = bis:readInt32()
        self.nLeftBreakCount = bis:readInt32()
        self.isRobot = bis:readInt32()
        self.isAnonymity = bis:readBool()
        if (bis:getAvailableSize() > 0) then
            self.szNickname2 = bis:readString()
        end
        if (bis:getAvailableSize() > 0) then
            self.szHeadUrl = bis:readString()
        end
        return self
    end
}

LogicBaseProtocol.msgPlayerDataEx = {
    XY_ID = 5,
    nBrandID = 0,
    nNumberID = 0,
    nPlayState = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        self.nPlayState = bis:readUInt8()
        return self
    end
}

LogicBaseProtocol.msgPlayerEnter = {
    XY_ID = 6,
    nBrandID = 0,
    nNumberID = 0,
    IsContinue = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        self.IsContinue = bis:readUInt8()
        return self
    end
}

LogicBaseProtocol.msgPlayerLeave = {
    XY_ID = 7,
    nBrandID = 0,
    nNumberID = 0,
    szCause = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        self.szCause = bis:readString()
        return self
    end
}

LogicBaseProtocol.msgPlayerStart = {
    XY_ID = 8,
    nBrandID = 0,
    nNumberID = 0,
    nReserved = 0, -- 保留
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.nBrandID)
        bos:writeUInt32(self.nNumberID)
        bos:writeUInt32(self.nReserved)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        self.nReserved = bis:readUInt32()
        return self
    end
}

LogicBaseProtocol.msgStarted = {
    XY_ID = 10,
    nReserved = 0, -- 保留
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nReserved = bis:readUInt32()
        return self
    end
}

LogicBaseProtocol.msgRoomHostSeatEx = {
    XY_ID = 23,
    seat = 4,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        return self
    end
}

LogicBaseProtocol.msgPlayCountEx = {
    XY_ID = 24,
    playCount = 0,
    maxPlayCount = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.playCount = bis:readInt16()
        self.maxPlayCount = bis:readInt16()
        return self
    end
}

LogicBaseProtocol.msgGameRuleEx = {
    XY_ID = 25,
    strGameRule = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeString(self.strGameRule)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.strGameRule = bis:readString()
        return self
    end
}

LogicBaseProtocol.msgRequestDismissEx = {
    XY_ID = 26,
    seat = 4,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        return self
    end
}

LogicBaseProtocol.msgRespondDismissEx = {
    XY_ID = 27,
    seat = 4,
    agree = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.seat)
        bos:writeBool(self.agree)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.seat = bis:readInt16()
        self.agree = bis:readBool()
        return self
    end
}

LogicBaseProtocol.msgDismissFlagEx = {
    XY_ID = 28,
    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.flag)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readInt16()
        return self
    end
}

LogicBaseProtocol.msgRoomNumEx = {
    XY_ID = 29,
    nRoomNum = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nRoomNum)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nRoomNum = bis:readInt32()
        return self
    end
}

LogicBaseProtocol.msgUUID = {
    XY_ID = 30,
    uluuid = 0,
    strUUID = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt64((self.uluuid))
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.uluuid = bis:readInt64()
        if (bis:getAvailableSize() > 0) then
            self.strUUID = bis:readString()
        end
        return self
    end
}

LogicBaseProtocol.msgAskContinue = {
    XY_ID = 31,
    nflag = 0,
    ENUM_FLAG = {
        NONE = 0,
        RELINK = 1,
        WAITING = 2,
        CAN_CONTINUE = 3
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.nflag)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nflag = bis:readInt16()
        return self
    end
}

LogicBaseProtocol.msgRespContinue = {
    XY_ID = 32,
    nSeat = 0,
    bContinue = false,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nSeat)
        bos:writeBool(self.bContinue)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nSeat = bis:readInt32()
        self.bContinue = bis:readBool()
        return self
    end
}

LogicBaseProtocol.msgContinueFlag = {
    XY_ID = 33,
    sFlag = 0,
    ENUM_FLAG = {
        NONE = 0,
        DISAGREE = 1,
        SUCCESS = 2,
        TIME_OUT = 3
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt16(self.sFlag)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.sFlag = bis:readInt16()
        return self
    end
}

LogicBaseProtocol.msgContinueTips = {
    XY_ID = 34,
    nFlag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nFlag)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nFlag = bis:readInt32()
        return self
    end
}

for _, v in pairs(LogicBaseProtocol) do
    v.processid = 1
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end

return LogicBaseProtocol
�2