local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgTotalResult = {
    XY_ID = 1038,

    playCount = 0,
    boxRoomTotalWinLost = {},
    maxHuCount = {},
    maxFanNum = {},
    maxFanCount = {},
    maxFanName = {},
    show = false,
    m_iMaxNewResult = {},--0 最高分, 1 总财神数,2 双番次数,3 自摸次数,4 接炮次数


    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.playCount = bis:readUInt16()
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

        if bis:getAvailableSize() > 0 then
            for i = 0,3 do
                local onePlayerNewResult = {}
                for j = 0,2 do
                    onePlayerNewResult[j] = bis:readInt32()
                end
                self.m_iMaxNewResult[i] = onePlayerNewResult
            end
        end
        return self
    end
}

GameProtocol.msgGangNums = {
    XY_ID = 1046,

    nKongCount = {},     --限制补杠的牌

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        for i = 0,3 do
            local onePlayerKongCount = {}
            for j = 0,2 do
                onePlayerKongCount[j] = bis:readInt32()
            end
            self.nKongCount[i] = onePlayerKongCount
        end
        return self
    end
}

GameProtocol.msgCrossHu = {
    XY_ID = 1048,

    sSeat = 0,     --座位
    bCrossHu = 0,  --是否过胡

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readUInt16()
        self.bCrossHu = bis:readBool()
        return self
    end
}

GameProtocol.msgSurplusMah = {
    XY_ID = 1160,

    surNum = 0,
    nMah = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.surNum = bis:readInt32()
        self.nMah = {}
        for i = 1, self.surNum do
            self.nMah[i] = bis:readUInt8()
        end
        return self
    end
}

GameProtocol.msgPlayTings = {
    XY_ID = 558,

    nSeat = 0,
    nCount = 0,
    tingmahs = {},

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt8()
        self.nCount = bis:readUInt8()
        self.tingmahs = {}
        for i = 1 , 17 do
            self.tingmahs[i] = {}
            self.tingmahs[i].nCount = bis:readUInt8()
            self.tingmahs[i].from = bis:readUInt8()
            self.tingmahs[i].tmahs = {}
            for k = 1, 34 do
                self.tingmahs[i].tmahs[k] = {}
                self.tingmahs[i].tmahs[k].mah = bis:readUInt8()
                self.tingmahs[i].tmahs[k].ft = bis:readInt32()
            end
        end
        return self
    end
}

return GameProtocol