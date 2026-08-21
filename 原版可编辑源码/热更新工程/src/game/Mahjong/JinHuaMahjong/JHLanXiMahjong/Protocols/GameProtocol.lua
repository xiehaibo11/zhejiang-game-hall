local GameLogicProtocol = CF.gameClass("GameLogicProtocol", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Protocols.GameProtocol")

GameLogicProtocol.msgPlayCount = {
    XY_ID = 1036,

    playCount = 0,
    maxPlayCount = 0,
    quanCount = 0,
    maxQuanCount = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.maxPlayCount = bis:readUInt16()
        self.quanCount = bis:readUInt16()
        self.maxQuanCount = bis:readUInt16()
        return self
    end
}
--大结束扩展
GameLogicProtocol.msgTotalResultEx = {
    XY_ID = 1050,
    playCount = 0,
    baseScore = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,
    delayTimeShow = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
        self.baseScore = bis:readUInt16()
        for i = 0,3 do
            local onePlayerTotalWinLost = {}
            for j = 1,self.playCount do
                onePlayerTotalWinLost[j] = bis:readInt32()
            end
            self.boxRoomTotalWinLost[i] = onePlayerTotalWinLost
            self.maxHuCount[i] = bis:readInt32()
            self.maxFanNum[i] = bis:readInt32()
            self.maxFanCount[i] = bis:readInt32()
            self.maxFanName[i] = {}
            for j = 1,self.maxFanCount[i] do
                self.maxFanName[i][j] = bis:readInt32()
            end
        end
        self.show = bis:readBool()
        self.delayTimeShow = bis:readBool()
        return self
    end
}
--买子协议 兰溪特殊
GameLogicProtocol.msgRequestMaiZi = {
    XY_ID = 1051,

    seat = 0,
    maiziValue = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeInt32(self.maiziValue)
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.maiziValue = bis:writeInt32()
        return self
    end
}

GameLogicProtocol.msgRespondMaiZi = {
    XY_ID = 1052,
    seat = 0,
    canMaizi = false,
    maiziMaxNum = 0,
    maiziValue = {};


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.seat)
        bos:writeBool(self.canMaizi)
        bos:writeInt32(self.maiziMaxNum)
        for i = 1,4 do
            if bos:getAvailableSize() > 0 then
                bos:writeInt32(self.maiziValue[i])
            end
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.seat = bis:readUInt16()
        self.canMaizi = bis:readBool()
        self.maiziMaxNum = bis:readInt32()
        self.maiziValue = {}
        for i = 1,4 do
            if bis:getAvailableSize() > 0 then
                local temp = bis:readInt32()
                self.maiziValue[i] = temp
            end
        end
        return self
    end
}
GameLogicProtocol.msgMaiZiInfo = {
    XY_ID = 1053,
    maiziValue = {};


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()

        for i = 1,4 do
            if bos:getAvailableSize() > 0 then
                bos:writeInt32(self.maiziValue[i])
            end
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.maiziValue = {}
        for i = 1,4 do
            if bis:getAvailableSize() > 0 then
                local temp = bis:readInt32()
                self.maiziValue[i] = temp
            end
        end
        return self
    end
}

return GameLogicProtocol