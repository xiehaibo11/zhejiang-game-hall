local GameProtocolGT = {}
local CMDT_FIRST_CLIENT			  = 10000	 
local CMDT_FIRST_CLIENT_GAME	  = CMDT_FIRST_CLIENT+1000
local CMDT_PLAYERCONNECT		  = CMDT_FIRST_CLIENT_GAME+100
local CMDT_RESP_PLAYERCONNECT 	  = CMDT_FIRST_CLIENT_GAME+103
local CMDT_PLAYERLEAVEEX_TOCLIENT = CMDT_FIRST_CLIENT_GAME+104 
local CMDT_CHECKACT				  = CMDT_FIRST_CLIENT_GAME + 79
local CMDT_STARTGAME = CMDT_FIRST_CLIENT_GAME + 13
local CMDT_RESPPLAYERACT = CMDT_FIRST_CLIENT_GAME + 17
local CMDT_REQUSEPROPS = CMDT_FIRST_CLIENT_GAME + 52 -- 请求使用道具(c->s)
local CMDT_RESPUSEPROPS  = CMDT_FIRST_CLIENT_GAME + 53 -- 请求使用道具(c->s)
local CMDT_RESPLEAVEROOM = CMDT_FIRST_CLIENT_GAME + 74
local CMDT_POPUPMSGBOX = 101                        --目前积分异常提示协议
local CMDT_CHATMSG =  107  
local SvrDef = require("app.Define.SvrDef")

local CMDT_REQVIPKICKUSER     =    CMDT_FIRST_CLIENT_GAME + 39;    -- 会员请求踢出同桌其他玩家(c->s) 11039
local CMDT_RESPVIPKICKUSER    =    CMDT_FIRST_CLIENT_GAME + 40;    -- 会员踢人结果应答(s->c) 11040

GameProtocolGT.PlayerConnect =
{
    XY_ID = CMDT_PLAYERCONNECT,

    m_roomid = 0,            --房间编号
    m_brandid = 0,           --玩家区号(areaid)
    m_numid = 0,             --玩家数字账号
    m_sessionid = {},        --令牌(RoomClient::PlayerData返回的sessionid)

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:write(self.m_sessionid, 32)
        bos:writeUInt32(self.m_brandid)
        bos:writeUInt32(self.m_numid)
        bos:writeUInt32(self.m_roomid)
        return bos
    end,
}


GameProtocolGT.ServerToClientMessage = {
    XY_ID = 11200,
    cmdid = 0,
    msglen = 0,
    message = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.cmdid = bis:readUInt16()
        self.msglen = bis:readUInt16()
        if self.msglen <= 3072 and self.msglen >= 0 then
            self.message = bis:read(self.msglen)
        end
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.cmdid)
        bos:writeUInt16(self.msglen)
        if self.msglen >= 0 and self.msglen <= 3072 then
            bos:write(self.message, self.msglen)
        end
        return bos
    end
}

GameProtocolGT.ClientToServerMessage = {
    XY_ID = 11201,
    cmdid = 0,
    msglen = 0,
    message = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.cmdid)
        bos:writeUInt16(self.msglen)
        if self.msglen >= 0 and self.msglen <= 3072 then
            bos:write(self.message, self.msglen)
        end
        return bos
    end
}

GameProtocolGT.RespPlayerConnect =
{
    XY_ID = CMDT_RESP_PLAYERCONNECT,
    
    FLAG =
    {
        SUCCEED = 0,
        ERRROOMID = 1,      
        NOUSER = 2,         
        ERRUSER = 3,        
        ERRSTEP = 4,        
        ERRUUID = 5,        
        ERRSTATE = 6,       
        HASTUOGUAN = 7,     
        LIMITED = 8,        
    },

    flag = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)

        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()

        return self
    end
}

GameProtocolGT.CheckAct =
{
    XY_ID = CMDT_CHECKACT,
    m_nActive = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.m_nActive)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_nActive = bis:readUInt16()

        return self
    end
}

GameProtocolGT.PlayerLeaveEx_ToClient =
{
    XY_ID = CMDT_PLAYERLEAVEEX_TOCLIENT,

    msgbox = SvrDef.MsgBox:new(),  -- 弹出提示框消息

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.msgbox.m_type = bis:readUInt8()
        self.msgbox.m_szCaption = bis:readString()
        self.msgbox.m_szText = bis:readString()
        self.msgbox.m_dwIconBtn = bis:readUInt32()
        self.msgbox.m_delay = bis:readUInt8()
        self.msgbox.m_colour = bis:readUInt32()
        self.msgbox.m_szWeb = bis:readString()
        self.msgbox.m_dwAction = bis:readUInt8()

        return self
    end
}

GameProtocolGT.RespLeaveRoom = 
{
    XY_ID = CMDT_RESPLEAVEROOM,
    LEAVEROOMTYPE = {
        NORMAL = 0,
        KICK = 1,
    },

    type = 0,

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.type = bis:readUInt8()
        return self
    end
}


GameProtocolGT.StartGame = {
    XY_ID = CMDT_STARTGAME,

    canStart = 0,

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.canStart = bis:readUInt8()

        return self
    end
}


GameProtocolGT.ChatMsg =
{
    -- 公共聊天协议
    XY_ID = CMDT_CHATMSG,

    CHANNEL =
    {
        USER   = 0,
        TABLE  = 1,
        ROOM   = 2,
        SERVER = 3,
        GAME   = 4,
        All    = 5,
    },
    COLORTYPE =
    {
        CT_COMMON   = 0,
        CT_VIP      = 1,
        
        CT_INFO     = 2,
        CT_ERROR    = 3,
        CT_WARNING  = 4,
        
        CT_MANAGE_1 = 5,
        CT_MANAGE_2 = 6,
        CT_MANAGE_3 = 7,
        
        CT_AD_1     = 8,
        CT_AD_2     = 9,
        CT_AD_3     = 10,
        
        CT_SYSTEM_1 = 11,
        CT_SYSTEM_2 = 12,
        CT_SYSTEM_3 = 13,
        
        CT_OTHER    = 14
    },
    m_channel   = "",
    m_color     = 0,
    m_areaid    = 0,
    m_numberid  = 0,
    msg         = "",

    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.m_channel)
        bos:writeUInt32(self.m_color)
        bos:writeUInt32(self.m_areaid)
        bos:writeUInt32(self.m_numberid)
        bos:writeString(self.msg)
        return bos
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_channel  = bis:readUInt8()
        self.m_color    = bis:readUInt32()
        self.m_areaid   = bis:readUInt32()
        self.m_numberid = bis:readUInt32()
        self.msg        = un.StringUtils.GB_18030_2000_TO_UTF8(bis:readString())
        return self
    end
}

GameProtocolGT.PopupMsgBox =
{
    XY_ID = CMDT_POPUPMSGBOX,
    msgbox = SvrDef.MsgBox:new(),       -- 弹出提示框消息
  
    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.msgbox.m_type     = bis:readUInt8()
        self.msgbox.m_szCaption = bis:readString()
        self.msgbox.m_szText    = bis:readString()
        self.msgbox.m_dwIconBtn = bis:readUInt32()
        self.msgbox.m_delay     = bis:readUInt8()
        self.msgbox.m_colour    = bis:readUInt32()
        self.msgbox.m_szWeb     = bis:readString()
        self.msgbox.m_dwAction  = bis:readUInt8()
            
        return self
    end
}

GameProtocolGT.ReqVipKickUser = {
    XY_ID = CMDT_REQVIPKICKUSER,
    areaid  = 0, --被踢玩家区号
    numid  = 0, --被踢玩家数字账号
    msg  = "", --提示消息

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        bos:writeString(self.msg)
        return bos
    end,
}

GameProtocolGT.RespVipKickUser = {
    XY_ID = CMDT_RESPVIPKICKUSER,

    FLAG = {
        SUCCEED = 0,
        NOTVIP = 1,            --玩家不是vip, 或者已经失效
        NOTABLE = 2,           --Vip还没有坐下
        NOUSER = 3,            --被踢得人不在vip的桌子上
        ERRGAMESTATE = 4,      --错误游戏状态，即游戏已经开始
        DESTVIP = 5,           --目标也是会员
        ERRSELF = 6,           --目标是自己
        OTHER = 7,             --其他原因
        PLAYERNOTFOUND = 8,    -- 玩家未找到
		NOROOM = 9             -- 还没进房间
    };

    flag  = 0,
    errorCode  = 0,
    areaid  = 0, --被踢玩家区号
    numid  = 0, --被踢玩家数字账号
    
    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        return self
    end
}

GameProtocolGT.ReqUseProps = {
    XY_ID = CMDT_REQUSEPROPS,
    propsid = 0, -- 请求使用用户的道具，不规范的Id为请求使用失败
    count = 0, -- count小于1 强制等于1， 再进行计算
    param = "msgsrc=0;", -- 参数，比如说小喇叭是所
    priceid = 0, -- 道具价格ID
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.propsid)
        bos:writeUInt32(self.count)
        bos:writeString(self.param)
        bos:writeUInt32(self.priceid)
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

GameProtocolGT.RespUseProps = {
    XY_ID = CMDT_RESPUSEPROPS,
    FLAG = {
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
        SCOREABOVEZERO = 30 -- 优胜值清零但分数>=0
    },
    flag = 0, -- 标识
    propsid = 0, --使用道具ID
    count = 0, --使用道具个数
    useyb = 0, -- 使用元宝数目
    param = "", --返回参数 就是请求的时候传入的
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
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


GameProtocolGT.RespPlayerAct = 
{
    XY_ID = CMDT_RESPPLAYERACT,
    
    FLAG = 
    {
        SUCCESS = 0,
        SHOW_MESSAGE = 1,              --错误由MsgBox定义
    },
    
    askid = 0,
    flag = 0,
    msgbox = nil,
    
    new = function (self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt8()  -- 修改bis:ReadUChar()为bis:readUInt8()

        if self.flag == GameProtocolGT.RespPlayerAct.FLAG.SHOW_MESSAGE then
            self.msgbox = SvrDef.MsgBox:new()
            self.msgbox.m_type = bis:readUInt8()  -- 修改bis:ReadUChar()为bis:readUInt8()
            self.msgbox.m_szCaption = bis:readString()  -- 修改bis:ReadCharPtr()为bis:readString()
            self.msgbox.m_szText = bis:readString()  -- 修改bis:ReadCharPtr()为bis:readString()
            self.msgbox.m_dwIconBtn = bis:readUInt32()  -- 修改bis:ReadUInt()为bis:readUInt32()
            self.msgbox.m_delay = bis:readUInt8()  -- 修改bis:ReadUChar()为bis:readUInt8()
            self.msgbox.m_colour = bis:readUInt32()  -- 修改bis:ReadUInt()为bis:readUInt32()
            self.msgbox.m_szWeb = bis:readString()  -- 修改bis:ReadCharPtr()为bis:readString()
            self.msgbox.m_dwAction = bis:readUInt8()  -- 修改bis:ReadUChar()为bis:readUInt8()
        end

        if bis:getAvailableSize() > 0 then
            self.askid = bis:readInt32()  -- 修改bis:ReadInt()为bis:readInt32()
        end

        return self
    end
}

for _, v in pairs(GameProtocolGT) do
    v.processid = 140
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end

GameProtocolGT.processid = 140

return GameProtocolGT K9  