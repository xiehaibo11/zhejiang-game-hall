local GameProtocol = CF.gameClass("GameProtocol", "game.ShutCards.BaseShutCards.Protocols.GameProtocol")

GameProtocol.msgDismissCountdown =
{
    XY_ID = 1054,
    sSeat = 0,
    reqSeat = 0,
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
        bos:writeInt16(self.reqSeat)
        bos:writeInt16(self.nTime)
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            bos:writeInt16(self.iAgrees[i])
        end
        return bos
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sSeat = bis:readInt16()
        self.reqSeat = bis:readInt16()
        self.nTime = bis:readInt16()
        self.iAgrees = {}
        for i = 0, CF.roomData:getMaxPlayer() - 1 do
            self.iAgrees[i] = bis:readInt16()
        end
        return self
    end 
}

return GameProtocolz