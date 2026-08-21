local GameMXY = {}
local CMDT_FIRST_CLIENT_GAME    = 11000                     --游戏协议起始编号
local CMDT_REQCHARGE    = CMDT_FIRST_CLIENT_GAME + 107;     --请求扣费(client->gs)
local CMDT_RESPCHARGE    = CMDT_FIRST_CLIENT_GAME + 108;     --返回扣费请求(gs->client)

local CMDT_REQUSEPROPS        = CMDT_FIRST_CLIENT_GAME + 52;  -- 请求使用道具(c->s)
local CMDT_RESPUSEPROPS    = CMDT_FIRST_CLIENT_GAME + 53;  -- 返回使用道具(s->c)

GameMXY.ReqUseProps = {
    XY_ID = CMDT_REQUSEPROPS,

    propsid = 0, -- 请求使用用户的道具，不规范的Id为请求使用失败
    count = 0, -- count小于1 强制等于1， 再进行计算
    param = "msgsrc=0;", -- 参数，比如说小喇叭是所

    priceid = 0, -- 道具价格ID
    type = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.propsid)
        bos:writeUInt32(self.count)
        bos:writeString(self.param)
        bos:writeUInt32(self.priceid)
        bos:writeUInt32(self.type)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.propsid = bis:readInt32()
        self.count = bis:readInt32()
        self.param = bis:writeString()
        self.priceid = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.type = bis:readInt32()
        end
        return self
    end
}

GameMXY.RespUseProps = {
    XY_ID = CMDT_RESPUSEPROPS,
    FLAG =     {
        SUCCESS = 0,
        DBCONNNOTFIND = 1,
        ERRPROPSID = 2,
        NOENOUGHPROPS = 3,
        PRICEIDERR = 4,
        YBDBCONNNOTFIND = 5,
        NOENOUGHYB = 6,
        PARAMERR = 7,
        PROPSSCPTERR = 8,
        PPIDERR = 9,
        DBERR = 10,
        AD_SENDERR = 11, --向AccountDataSvr发送请求失败
        AD_TIMEOUT = 12, --AccountDataSvr返回超时

        SCOREABOVEZERO = 30, -- 优胜值清零但分数>=0

    --accountdatasvr返回的错误
    --41, 数据库连接未找到
    --42, 数据库错误
    --43, 未知的玩家(找不到area+numid)
    --44, vipid或者addday无效
    },
    flag = 0, -- 标识
    propsid = 0, --使用道具ID
    count = 0, --使用道具个数
    useyb = 0, -- 使用元宝数目
    param = "", --返回参数 就是请求的时候传入的
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeByteArray(self.flag)
        bos:writeUInt32(self.propsid)
        bos:writeUInt32(self.count)
        bos:writeUInt8(self.useyb)
        bos:writeString(self.param)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        self.propsid = bis:readInt32()
        self.count = bis:readInt32()
        self.useyb = bis:readInt32()
        self.param = bis:readString()
        return self
    end
}

return GameMXY�