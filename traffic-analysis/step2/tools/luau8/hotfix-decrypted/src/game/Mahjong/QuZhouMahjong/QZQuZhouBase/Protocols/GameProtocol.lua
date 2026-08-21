local GameProtocol = CF.gameClass("GameProtocol", "game.Mahjong.BasicMahjong.Protocols.GameProtocol")

GameProtocol.msgRoomNumEx =
{
    XY_ID = 29,

    nRoomNum = 0,

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nRoomNum)
        return bos
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

GameProtocol.msgShowDismiss =
{
   XY_ID = 1050,
   bShow = false,
   bIsDismiss = false,
   nLeftTime = nil,
   new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
   end,
   bistream = function (self,buff, bufflen)
      local bis = un.network.OStream.new(buff)
      self.bShow = bis:readBool()
      self.bIsDismiss = bis:readBool()
      if bis:getAvailableSize() > 0 then
          self.nLeftTime = bis:readInt32()
      end
      return self
   end
}

return GameProtocol�