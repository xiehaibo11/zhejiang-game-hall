--[[    agbasexy协议
]]
local agbasexy = {}

local CMDT_FIRST_PUBLIC = 0                         --不经POST公共协议起始编号
local CMDT_REPORTSRSERR = CMDT_FIRST_PUBLIC + 118  --SRS通知其他服务一些错误(如转发失败等)(s->s)
local CMDT_POPUPMSGBOX = CMDT_FIRST_PUBLIC + 101    --公共提示框

agbasexy.ReportSRSErr = {
    XY_ID = CMDT_REPORTSRSERR,

    SRSERR = {
        SENDGAMEPOSTFAIL = 1,
        APPID2GAMEIDFAIL = 2,
        ROOMIDNOTAPPID = 3,
        ANOTHERLOGIN = 4,
        ALREADYINGAME = 5,
        SRSNOROUTE = 6,
    },

    flag = '0', --BYTE
    xyid = 0, -- short

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.flag)
        bos:writeUInt16(self.xyid)
        return bos
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        self.xyid = bis:readUInt16()
        return self
    end
}


agbasexy.ChatMsg = {
    XY_ID = 107,

    CHANNEL = {
        USER = 0,
        TABLE = 1,
        ROOM = 2,
        SERVER = 3,
        GAME = 4,
        All = 5,
    },

    COLORTYPE = {
        CT_COMMON = 0,
        CT_VIP = 1,

        CT_INFO = 2,
        CT_ERROR = 3,
        CT_WARNING = 4,

        CT_MANAGE_1 = 5,
        CT_MANAGE_2 = 6,
        CT_MANAGE_3 = 7,

        CT_AD_1 = 8,
        CT_AD_2 = 9,
        CT_AD_3 = 10,

        CT_SYSTEM_1 = 11,
        CT_SYSTEM_2 = 12,
        CT_SYSTEM_3 = 13,

        CT_OTHER = 14,
    },
    m_channel = 0,
    m_color = 0,
    m_areaid = 0,
    m_numberid = 0,

    m_msg = "",
    --new
    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end,

    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_channel = bis:readUInt8()
        self.m_color = bis:readUInt32()
        self.m_areaid = bis:readUInt32()
        self.m_numberid = bis:readUInt32()
        self.m_msg = bis:readCString()
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.m_channel)
        bos:writeUInt32(self.m_color)
        bos:writeUInt32(self.m_areaid)
        bos:writeUInt32(self.m_numberid)
        bos:writeString(self.m_msg)
        return bos
    end
}

agbasexy.MsgBox = {
    MODE = {
        SIMPLE = 0, -- 简单模式
        COMPLEX = 1, -- 复杂模式
        SETTOPEST = 2, -- 最前面的
    },

    BTNFLAG = {
        MBMB_OK = 0,
        MBMB_OKCANCEL = 1,
        MBMB_ABORTRETRYIGNORE = 2,
        MBMB_YESNOCANCEL = 3,
        MBMB_YESNO = 4,
        MBMB_RETRYCANCEL = 5,
    },

    ICONFLAG = {
        MBMB_ICONHAND = 16,
        MBMB_ICONQUESTION = 32,
        MBMB_ICONEXCLAMATION = 48,
        MBMB_ICONASTERISK = 64,
    },

    ACTION = {
        QUIT = 0, -- 退出游戏（房间）
        IE = 1, -- 弹出ie
        DIALOG = 2, -- 弹对话框
        CHATFRAME = 3, -- 聊天框
        GAME_ROLL = 4, -- 游戏界面滚动
        GAME_DIALOG = 5, -- 游戏弹出对话框
        GAME_CHATFRAME = 6, -- 游戏界面聊天框
        ALL_DIALOG = 7,
        ALL_CHATFRAME = 8,
    --...等等
    },

    COLOUR = {
        BLACK = 0, --黑色
        BLUE    = 255,
        GREEN = 32768,
        RED    = 16711680,
        YELLOW = 16776960,
    },

    m_type = 0, --简单模式or复杂模式
    m_szCaption = "系统提示",
    m_szText = "",
    m_dwIconBtn = 0 + 48,
    m_delay = 10, --MessageBox停留时间(单位：秒)
    m_colour = 0, --字体颜色
    m_szWeb = "", --要链接的web地址
    m_dwAction = 2,

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
        return o
    end
}


agbasexy.PopupMsgBox = {
    XY_ID = CMDT_POPUPMSGBOX,
    msgbox = agbasexy.MsgBox:new(),

    new = function(self, o)
        o = o or {}
        setmetatable(o, { __index = self })
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

return agbasexy