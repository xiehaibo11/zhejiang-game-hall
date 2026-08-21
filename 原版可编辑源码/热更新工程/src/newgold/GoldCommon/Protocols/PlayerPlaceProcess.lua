local PlayerPlaceProcess = {}

PlayerPlaceProcess.ReqPlayerPlace = {
    XY_ID = 1,
    askid = 0,
    gameid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        return self
    end
}

PlayerPlaceProcess.RespPlayerPlace = {
    XY_ID = 2,
    FLAG =    {
        SUCCESS = 0,
        INROOMTABLENOTFIND = 1, --游戏互斥表没找到
        DBCONNNOTFIND = 2, --数据库连接未找到
        DBERR = 3, --数据库操作异常(段位)
    };

    askid = 0,
    flag = 0,
    ucSize = 0,
    placeData = {},
    errcode = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.ucSize = bis:readUInt8()
        self.placeData = {}
        for i = 1, self.ucSize do
            self.placeData[i] = {
                appid = bis:readInt32(),
                gameid = bis:readInt32(),
            }
        end
        self.errcode = bis:readInt32()
        return self
    end
}

for _, v in pairs(PlayerPlaceProcess) do
    v.processid = 69
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end


return PlayerPlaceProcess