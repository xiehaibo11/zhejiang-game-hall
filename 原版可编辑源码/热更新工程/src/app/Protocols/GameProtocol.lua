-- 游戏协议模块
local GameProtocol = {}

local CMDT_FIRST_CLIENT_GAME = 11000 -- 游戏协议起始编号

local CMDT_REQLEAVEROOM = CMDT_FIRST_CLIENT_GAME + 73
local CMDT_RESPLEAVEROOM = CMDT_FIRST_CLIENT_GAME + 74

GameProtocol.ReqLeaveRoom = {
    XY_ID = CMDT_REQLEAVEROOM,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        return bos
    end
}

GameProtocol.RespLeaveRoom = {
    XY_ID = CMDT_RESPLEAVEROOM,
    LEAVEROOMTYPE = {NORMAL = 0, KICK = 1},

    type = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.type = bis:readUInt8()
        return self
    end
}

GameProtocol.TableInfo = {
    XY_ID = 11014,

    m_TableID = 0,
    m_State = 0,
    m_TableStyle = 0,
    m_HavePWD = 0,
    m_Chairs = 0,
    m_JoinRule = "", -- 坐下规则
    m_GameRule = "", -- 游戏规则
    m_SeeRule = "", -- 旁观规则
    m_HaveOwner = 0, -- 是否有桌长
    m_OwnerBrandID = 0, -- 桌长的区ID
    m_OwnerNumberID = 0, -- 桌长的数字ID

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.m_TableID = bis:readUInt16()
        self.m_State = bis:readUInt8()
        self.m_TableStyle = bis:readUInt8()
        self.m_HavePWD = bis:readUInt8()
        self.m_Chairs = bis:readUInt8()
        self.m_JoinRule = bis:readString()
        self.m_GameRule = bis:readString()
        self.m_SeeRule = bis:readString()

        self.m_HaveOwner = bis:readUInt8()
        if self.m_HaveOwner == 1 then
            self.m_OwnerBrandID = bis:readUInt32()
            self.m_OwnerNumberID = bis:readUInt32()
        end
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeUInt16(self.m_TableID)
        bos:writeUInt8(self.m_State)
        bos:writeUInt8(self.m_TableStyle)
        bos:writeUInt8(self.m_HavePWD)
        bos:writeUInt8(self.m_Chairs)
        bos:writeString(self.m_JoinRule)
        bos:writeString(self.m_GameRule)
        bos:writeString(self.m_SeeRule)
        bos:writeUInt8(self.m_HaveOwner)
        if self.m_HaveOwner ~= 0 then
            bos:writeUInt32(self.m_OwnerBrandID)
            bos:writeUInt32(self.m_OwnerNumberID)
        end
        bos:writeString(self.m_GameKeyWord)

        return bos
    end
}

for _, v in pairs(GameProtocol) do
    v.processid = 1
end
GameProtocol.processid = 1

return GameProtocol
