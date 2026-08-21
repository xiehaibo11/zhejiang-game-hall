local SvrDef = {}

SvrDef.MsgBox = {
    MODE = {
        SIMPLE = 0,          --简单模式
        COMPLEX = 1,         --复杂模式
        SETTOPEST = 2,       --最前面的
    },

    --MessageBox() Button Flags
    BTNFLAG = {
        MBMB_OK = 0x00000000,
        MBMB_OKCANCEL = 0x00000001,
        MBMB_ABORTRETRYIGNORE = 0x00000002,
        MBMB_YESNOCANCEL = 0x00000003,
        MBMB_YESNO = 0x00000004,
        MBMB_RETRYCANCEL = 0x00000005
    },

    --MessageBox() Icon Flags
    ICONFLAG = {
        MBMB_ICONHAND = 0x00000010,
        MBMB_ICONQUESTION = 0x00000020,
        MBMB_ICONEXCLAMATION = 0x00000030,
        MBMB_ICONASTERISK = 0x00000040
    },

    ACTION = {
        QUIT = 0,           -- 退出游戏（房间）
        IE = 1,             -- 弹出ie
        DIALOG = 2,         -- 弹对话框
        CHATFRAME = 3,      -- 聊天框
        GAME_ROLL = 4,      -- 游戏界面滚动
        GAME_DIALOG = 5,    -- 游戏弹出对话框
        GAME_CHATFRAME = 6, -- 游戏界面聊天框
        ALL_DIALOG = 7,
        ALL_CHATFRAME = 8,
        --...等等
    },

    COLOUR = {
        BLACK   = 0x0,      --黑色
        BLUE    = 0x0000FF,
        GREEN   = 0x008000,
        RED     = 0xFF0000,
        YELLOW  = 0xFFFF00
    },

    m_type = 0,     --简单模式or复杂模式
    m_szCaption = "系统提示",
    m_szText = "",
    m_dwIconBtn = 0x00000000 + 0x00000030,
    m_delay = 10,               --MessageBox停留时间(单位：秒)
    m_colour = 0x0,     --字体颜色
    m_szWeb = "",                --要链接的web地址
    m_dwAction = 2,

    new = function (self, o)
         o = o or {}
         setmetatable(o, {__index = self})
         return o
    end
}

return SvrDef