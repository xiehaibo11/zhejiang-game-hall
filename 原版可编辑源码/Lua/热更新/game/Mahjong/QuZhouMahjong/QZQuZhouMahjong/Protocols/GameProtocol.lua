local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Protocols.GameProtocol")

GameProtocol.msgGameType = {
    XY_ID = 1051,

    sGameType = 0,
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.sGameType =  bis:readUInt16()
        return self
    end
}

GameProtocol.msgGameResultExInfo = {
    XY_ID = 1052,

    nSeat = 0,
    bMinusFan = false,
    bAddFan = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nSeat = bis:readUInt16()
        self.bMinusFan = bis:readBool()
        self.bAddFan = bis:readBool()
        return self
    end
}

GameProtocol.msgGameJuMaEnd = {
    XY_ID = 1030,

    bEndGame = false,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.bEndGame = bis:readBool()
        return self
    end
}

GameProtocol.msgCanTWait =
{
   XY_ID = 1101,
   flag = false,
   new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
   end,
   bistream = function (self,buff, bufflen)
      local bis = un.network.OStream.new(buff)
      self.flag = bis:readBool()
      return self
   end,
   bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeBool(self.flag)
        return bos
    end,
}

return GameProtocol