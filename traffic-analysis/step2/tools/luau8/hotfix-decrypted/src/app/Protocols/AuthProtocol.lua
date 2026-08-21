local AuthProtocol = {}

local CMDT_REPORTNEWPLAYER = 11 --<通知客户端此次大厅登录为首次登录


AuthProtocol.ReportNewPlayer = {
    XY_ID = CMDT_REPORTNEWPLAYER,

    ucTmp = 0,

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucTmp)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucTmp = bis:readUInt8()
        return self
    end
}

for _, v in pairs(AuthProtocol) do
    v.processid = 3
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end
AuthProtocol.processid = 3

return AuthProtocolS