local ToolMProtocol = {}

local CMDT_LOBBYPLAYERCONNECT = 12013 --请求大厅登录
local CMDT_PLAYERDATA = 12002 --认证结果,由认证服务向游戏服务端发送,如果通过,则包含用户的数据

-- local EKEYNUM_LEN = 20
-- local EKEYPSW_LEN = 20
local FILEPAK_MAXSIZE = 3000
-- local FILENAME_MAXSIZE = 255
-- local FILELIST_MAXSIZE = 50
local MAXUSERID = 50
local MAXNICKNAME = 20

local CMDT_FIRST_CLIENT = 10000 --客户服务间协议起始编号
local CMDT_FIRST_CLIENT_TOOL = CMDT_FIRST_CLIENT + 2000 --工具协议起始编号
local CMDT_REQGETPROPATTRS = CMDT_FIRST_CLIENT_TOOL + 9 --请求背包信息
local CMDT_RESPGETPROPATTRS = CMDT_FIRST_CLIENT_TOOL + 10 --返回背包信息
local CMDT_GAMEUPDATE_INFO = CMDT_FIRST_CLIENT_TOOL + 58 --游戏更新信息

local CMDT_REQSR = CMDT_FIRST_CLIENT_TOOL + 11
local CMDT_RESPSR = CMDT_FIRST_CLIENT_TOOL + 12

ToolMProtocol.MsgBox = {
    MODE = {
        SIMPLE = 0, --简单模式
        COMPLEX = 1, --复杂模式
        SETTOPEST = 2 --最前面的
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
        QUIT = 0, -- 退出游戏（房间）
        IE = 1, -- 弹出ie
        DIALOG = 2, -- 弹对话框
        CHATFRAME = 3, -- 聊天框
        GAME_ROLL = 4, -- 游戏界面滚动
        GAME_DIALOG = 5, -- 游戏弹出对话框
        GAME_CHATFRAME = 6, -- 游戏界面聊天框
        ALL_DIALOG = 7,
        ALL_CHATFRAME = 8
        --...等等
    },
    COLOUR = {
        BLACK = 0x0, --黑色
        BLUE = 0x0000FF,
        GREEN = 0x008000,
        RED = 0xFF0000,
        YELLOW = 0xFFFF00
    },
    m_type = 0, --简单模式or复杂模式
    m_szCaption = "系统提示",
    m_szText = "",
    m_dwIconBtn = 0x00000000 + 0x00000030,
    m_delay = 10, --MessageBox停留时间(单位：秒)
    m_colour = 0x0, --字体颜色
    m_szWeb = "", --要链接的web地址
    m_dwAction = 2,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end
}

--Tool::PlayerData协议data的内容
ToolMProtocol.PlayerPlusData = {
    --帐号权限标志
    URIGHT = {
        ADMIN = 0x0001, --副领队
        LOCKUSER = 0x0002,
        LOCKCHAT = 0x0004, --封聊天
        VIP = 0x0008, --会员
        LOCKMAC = 0x0010, --锁机
        LOCKMOBILE = 0x0040, --是否绑定手机
        IPSID = 0x0080, --sessionid是否与ip绑定(验sessionid的时候是否要验ip)
        AUTHSMS = 0x0100, --是否有发短信验证码的会员权限
        ROBOT = 0x0200 --是否是机器人
    },
    CLIENTTYPE = {
        PC = 0, -- 计算机
        TV = 1, -- 电视
        MOBILE = 2, -- 手机
        WEB = 3 -- 浏览器
    },
    userid = "", --平台帐号
    ptid = "", --盛大通行证
    ptnumid = "", --盛大数字帐号
    nickname = "", --昵称
    identify = "", --明文
    sex = "0", --性别
    head = 0, --头像
    right = 0, --权限
    regtime = 0, --注册时间
    vipid = 0, --会员类型
    vipendtime = 0, --会员到期时间
    ip = 0, --客户端ip
    osver = 0, --客户端操作系统版本号
    clienttype = 0, --客户端类型
    keylen = 0, --m_key 的长度, 允许的取值: 16, 24, 32
    key = "", --协议加密密钥
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeString(self.userid)
        bos:writeString(self.ptid)
        bos:writeString(self.ptnumid)
        bos:writeString(self.nickname)
        bos:writeString(self.identify)

        bos:writeUInt8(self.sex)
        bos:writeInt32(self.head)
        bos:writeInt32(self.right)
        bos:writeInt32(self.regtime)
        bos:writeInt32(self.vipid)
        bos:writeUInt32(self.vipendtime)
        bos:writeInt32(self.ip)
        bos:writeInt32(self.osver)
        bos:writeInt32(self.clienttype)

        bos:writeUInt8(self.keylen)
        bos:write(self.key, self.keylen)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.userid = bis:readCString()
        self.ptid = bis:readCString()
        self.ptnumid = bis:readCString()
        self.nickname = bis:readCString()
        self.identify = bis:readCString()

        self.sex = bis:readUInt8()
        self.head = bis:readUInt32()
        self.right = bis:readUInt32()
        self.regtime = bis:readUInt32()
        self.vipid = bis:readUInt32()
        self.vipendtime = bis:readUInt32()
        self.ip = bis:readUInt32()
        self.osver = bis:readUInt32()
        self.clienttype = bis:readUInt32()

        if (bis:getAvailableSize() > 0) then
            self.keylen = bis:readUInt8()
            self.key = bis:read(self.keylen)
        end

        return self
    end
}

ToolMProtocol.LobbyPlayerConnect = {
    XY_ID = CMDT_LOBBYPLAYERCONNECT,
    USERTYPE = {
        USERID = 0, -- 平台帐号
        PTID = 1, -- PT帐号
        GLOBAL_ANONYMITY = 3, -- 全局匿名帐号
        IDENTIFY = 5, -- 硬件码登录(移动设备)
        ANONYMITY = 255 -- 匿名
    },
    CLIENTTYPE = {
        PC = 0, -- 计算机
        TV = 1, -- 电视
        MOBILE = 2, -- 手机
        WEB = 3 -- 浏览器
    },
    ConnectType = {
        CT_LOGIN = 0, -- 登录
        CT_LOGIN_LOCK = 1, -- 登录并绑定
        CT_LOGIN_UNLOCK = 2, -- 登录并解绑
        CT_LOGIN_PUBLIC_LOCK = 3 -- 登录并绑定,限定24小时
    },
    OS_VERSION = {
        --pc 0-199
        OS_WND_UNKNOWN = 0,
        OS_WND_95 = 10,
        OS_WND_98 = 20,
        OS_WND_ME = 30,
        OS_WND_NT_351 = 40,
        OS_WND_NT_40 = 50,
        OS_WND_2000 = 60,
        OS_WND_XP = 70,
        OS_WND_2003 = 80,
        OS_WND_VISTA = 90,
        OS_WND_SERVER_2008 = 92,
        OS_WND_7 = 94,
        OS_WND_SERVER_2008_R2 = 96,
        OS_WND_VISTA_PLUS = 100,
        OS_WND_8 = 101
    },
    askid = 0,
    clienttype = 2, -- 用于区分是哪种类型的客户端登录的，如TV大厅，PC大厅
    usertype = 1, -- 用户类型，定义在USERTYPE枚举中
    areaid = 0, -- 地区号
    userid = "",
    pwd = "", -- 密码
    identify = "", -- 硬件识别码(RC4加密,老的用的是协议的加密key, 其他都是用默认的key加密)
    osver = 0, -- 操作系统版本
    userip = 0, -- 用户自己提交的ip
    sockip = 0, -- SRS获取的ip
    byconnecttype = 0, -- 连接类型
    screenw = 960, -- 屏幕分辨率宽
    screenh = 640, -- 屏幕分辨率高
    areatypeid = 0, -- 分站编号
    ad = 0, -- 推广识别码
    brver = 0, -- 浏览器版本
    mac = "", -- 客户端mac地址
    lobbyver = "", -- 客户端版本号
    data = "", -- 平台附加数据
    md5 = "", -- 交验协议是否被修改(userid,identify,screenh)
    gameid = "", -- 从哪款游戏登录,普通pc登录传0
    port = 0, -- 客户端连接端口(用于移动)
    channelid = 0, --渠道号
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeUInt8(self.clienttype)
        bos:writeUInt8(self.usertype)
        bos:writeUInt32(self.areaid)
        bos:writeString(self.userid)
        bos:writeString(self.pwd)
        bos:writeString(self.identify)
        bos:writeInt32(self.osver)
        bos:writeInt64(self.userip)
        bos:writeInt64(self.sockip)

        bos:writeUInt8(self.byconnecttype)
        bos:writeInt32(self.areatypeid)
        bos:writeInt32(self.screenw)
        bos:writeInt32(self.screenh)
        bos:writeInt32(self.ad)
        bos:writeInt32(self.brver)
        bos:writeString(self.mac)
        bos:writeInt32(self.lobbyver)

        bos:writeString(self.data)

        local bosMD5 = un.network.IStream.new()
        bosMD5:writeString("pC@#!")
        bosMD5:writeString(self.userid)
        bosMD5:writeInt32(self.screenh)
        bosMD5:writeString(self.identify)
        self.md5 = CF.SysTool.CheckMd5(bosMD5:getBuff(), bosMD5:getBuffLen())
        bos:write(self.md5, 16)

        bos:writeInt32(self.gameid)
        bos:writeUInt8(self.port)
        bos:writeInt32(self.channelid)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.clienttype = bis:readUInt8()
        self.usertype = bis:readUInt8()
        self.areaid = bis:readUInt32()
        self.userid = bis:readCString()
        self.pwd = bis:readCString()
        self.identify = bis:readCString()
        self.osver = bis:readUInt32()
        self.userip = bis:readInt32()
        self.sockip = bis:readInt32()

        self.byconnecttype = bis:readUInt8()
        self.areatypeid = bis:readUInt32()
        self.screenw = bis:readUInt32()
        self.screenh = bis:readUInt32()
        self.ad = bis:readUInt32()
        self.brver = bis:readUInt32()
        self.mac = bis:readCString()
        self.lobbyver = bis:readUInt32()

        self.data = bis:readCString()

        self.md5 = bis:read(16)
        local bosMD5 = un.network.IStream.new()
        bosMD5:writeString("pC@#!")
        bosMD5:writeString(self.userid)
        bosMD5:writeInt32(self.screenh)
        bosMD5:writeString(self.identify)

        CF.SysTool.CheckMd5(self.md5, 16, bosMD5:getBuff(), bosMD5:getBuffLen())

        if (bis:getAvailableSize() > 0) then
            self.gameid = bis:readUInt32()
        end

        if (bis:getAvailableSize() > 0) then
            self.port = bis:readUInt16()
        end

        if (bis:getAvailableSize() > 0) then
            self.channelid = bis:readUInt32()
        end

        return self
    end
}

ToolMProtocol.PlayerConnect = {
    XY_ID = 12001,
    CLIENTTYPE = {
        PC = 0,
        TV = 1,
        MOBILE = 2,
        WEB = 3
    },
    askid = 0,
    areaid = 0,
    userid = "",
    sessionid = "",
    identify = "",
    nickname = "",
    clienttype = 0,
    osver = 0,
    ip = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeString(self.userid)
        bos:write(self.sessionid, 16)
        bos:writeString(self.identify)
        bos:writeString(self.nickname)
        bos:writeUInt8(self.clienttype)
        bos:writeInt32(self.osver)
        bos:writeInt32(self.ip)
        return bos
    end
}

ToolMProtocol.PlayerData = {
    XY_ID = CMDT_PLAYERDATA,
    ERRORCODE = {
        --authsvr返回的flag
        SUCCESS = 0, --认证成功
        SHOW_MESSAGE = 1, --错误信息在errmsg中
        PTUSER_NEED_REGISTER = 2, --PT帐号正确，需要注册平台帐号
        UNKNOW_USERID = 3, --数据库users表中没有该平台帐号信息
        INVALID_PASSWORD = 4, --密码错误（本地认证）
        UNKNOW_USERTYPE = 5, --未知的帐号类型
        LOCALAUTH_USERTYPE_ERR = 6, --本地认证帐号类型错误（本地认证只能使用USERID类型）
        PLAYERCENTER_SEND_ERR = 7, --向玩家中心发送协议失败
        PTSVR_SEND_ERR = 8, --向PTSVR发送协议失败
        NO_PTINFO = 9, --数据库users_pt表中没有该帐号数据
        NO_AUTHFLAG = 10, --没有认证标志（游戏认证）
        DBERR = 11, --数据库错误
        DBCONNERR = 12, --表所在数据库连接未找到
        FORBID_USERID = 13,
        LOCK_BY_USER_SELF = 14, --帐号被自己锁定
        INVALID_HARDWARE = 15, --硬件码错误
        PT_TIME_OUT = 16, --ptsvr返回超时
        PC_SEND_ERR = 17, --向playercenter发送协议失败
        PC_TIME_OUT = 18, --playercenter返回超时
        AD_SEND_ERR = 19, --AccountDataSvr服务发送失败
        AD_TIME_OUT = 20, --AccountDataSvr返回超时
        --lobbysvr返回的flag
        POST_SENDERR = 23, --向post服务发送协议失败
        POST_TIMEOUT = 24, --post服务返回超时
        RISK_REFUSE = 25, --控制器被挡
        LOBBYVER_OLDR = 26, --需要升级,但当前版本依然可用
        LOBBYVER_TOOOLD = 27, --版本太旧,必须升级
        LOBBYVER_TOONEW = 28, --版本比最近版本还要新,认为异常,必须升级
        SMS_SEND_ERR = 30, --短信服务发送协议失败
        INVALID_SMSCODE = 31, --短信验证码错误
        NO_SMSCODE = 32, --回复短信验证码时发现memcache已经没有验证码了
        UNKNOW_AREAID = 33, --areaid非法(==0)
        POST_SEND_ERR = 34, --post发送协议失败
        OTP_TIME_OUT = 35, --otpsvr返回超时
        INVALID_SCREEN = 36, --分辨率非法
        NO_GAMEPOST = 37,
        INVALID_SESSIONID = 72, --令牌错误
        NO_SESSIONID = 74, --没有这个玩家的令牌信息
        INVALID_SESSIONID_PC = 75, --令牌错误, 且机器码错误
        INVALID_SESSIONID_IP = 76 --令牌错误, 且ip错误(机器码也错误)
    },
    askid = 0,
    flag = 0, --错误号
    areaid = 0, --区号(即areaid)
    areatypeid = 0,
    numid = 0, --数字帐号
    msgbox = ToolMProtocol.MsgBox:new(), --弹出消息
    --秘宝相关;
    elimited = 0, --是否成年,0未成年1成年
    eprotected = 0, --是否补填防沉迷,0没有1有
    eUsedTime = 0, --盛大秘宝使用次数
    eUsedDays = 0,
    eLevel = 0,
    protecturl = "", --实名认证登记地址
    notify = "", --PT返回,对玩家的一些通知
    iparea = 0, --本次登录的ip所属地区(格式: 省+两位市+两位区县组成的整型, 如省=3,市=5,县=23,则iparea=30523)
    sp = 0, --本次登录的ip所属运营商
    lastip = 0, --上次登录的ip
    lastiparea = 0, --上次登录的ip所属地区(格式同iparea)
    lastsp = 0, --上次登录的ip所属运营商
    lobbyver = 0, --服务端配的当前大厅版本号(curversion)
    sessionid = "",
    datasize = 0,
    data = "", --内容为定义在agsvrdef.h的PlayerPlusData结构
    --防沉迷相关
    lastleavetime = 0, --上一次离开房间的时间
    onlinetime = 0, --当前累计游戏在线时间(在房间内的时间, 所有游戏的, 双进了会不准, 不管)
    breaktime = 0, --上次进房间前累计的休息时间
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeUInt8(self.flag)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)

        if (self.flag == self.ERRORCODE.SHOW_MESSAGE) then
            bos:writeUInt8(self.msgbox.m_type)
            bos:writeString(self.msgbox.m_szCaption)
            bos:writeString(self.msgbox.m_szText)
            bos:writeUInt32(self.msgbox.m_dwIconBtn)
            bos:writeUInt8(self.msgbox.m_delay)
            bos:writeUInt32(self.msgbox.m_colour)
            bos:writeString(self.msgbox.m_szWeb)
            bos:writeUInt8(self.msgbox.m_dwAction)
        end

        bos:writeUInt8(self.datasize)
        bos:write(self.data, self.datasize)

        bos:writeInt32(self.areatypeid)
        bos:writeInt32(self.elimited)
        bos:writeInt32(self.eprotected)
        bos:writeInt32(self.eUsedTime)
        bos:writeInt32(self.eUsedDays)
        bos:writeInt32(self.eLevel)
        bos:writeString(self.protecturl)
        bos:writeInt32(self.iparea)
        bos:writeInt32(self.sp)
        bos:writeInt64(self.lastip)
        bos:writeInt32(self.lastiparea)
        bos:writeInt32(self.lastsp)
        bos:writeInt32(self.lobbyver)
        bos:write(self.sessionid, 16)

        bos:writeUInt32(self.lastleavetime)
        bos:writeInt32(self.onlinetime)
        bos:writeInt32(self.breaktime)
        bos:writeString(self.notify)

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        self.areaid = bis:readUInt32()
        self.numid = bis:readUInt32()

        if (self.flag == self.ERRORCODE.SHOW_MESSAGE) then
            self.msgbox.m_type = bis:readUInt8()
            self.msgbox.m_szCaption = bis:readString()
            self.msgbox.m_szText = bis:readString()
            self.msgbox.m_dwIconBtn = bis:readUInt32()
            self.msgbox.m_delay = bis:readUInt8()
            self.msgbox.m_colour = bis:readUInt32()
            self.msgbox.m_szWeb = bis:readString()
            self.msgbox.m_dwAction = bis:readUInt8()
        end

        self.datasize = bis:readUInt16()
        self.data = bis:read(self.datasize)

        if (bis:getAvailableSize() > 0) then
            self.areatypeid = bis:readUInt32()
            self.elimited = bis:readUInt32()
            self.eprotected = bis:readUInt32()
            self.eUsedTime = bis:readUInt32()
            self.eUsedDays = bis:readUInt32()
            self.eLevel = bis:readUInt32()
            self.protecturl = bis:readCString()
            self.iparea = bis:readUInt32()
            self.sp = bis:readUInt32()
            self.lastip = bis:readInt32()
            self.lastiparea = bis:readUInt32()
            self.lastsp = bis:readUInt32()
            self.lobbyver = bis:readUInt32()
            self.sessionid = bis:read(16)
        end

        if (bis:getAvailableSize() > 0) then
            self.lastleavetime = bis:readUInt32()
            self.onlinetime = bis:readUInt32()
            self.breaktime = bis:readUInt32()
        end

        if (bis:getAvailableSize() > 0) then
            self.notify = bis:readCString(256)
        end

        return self
    end
}

ToolMProtocol.ReqPlayerPlace = {
    XY_ID = 12003,
    askid = 1,
    areaid = 1,
    numid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.ReqPlayerPlace})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readUInt32()
        self.areaid = bis:readUInt32()
        self.numid = bis:readUInt32()
        return self
    end
}

ToolMProtocol.PlayerPlace = {
    appid = 0,
    appsession = 0,
    gameid = 0,
    state = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.PlayerPlace})
        return o
    end
}

ToolMProtocol.RespPlayerPlace = {
    XY_ID = 12004,
    askid = 1,
    placecount = 1,
    playerPlace = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.RespPlayerPlace})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.placecount = bis:readUInt8()
        if self.placecount > 10 then
            self.placecount = 10
        end
        for i = 1, self.placecount do
            local playerPlace = ToolMProtocol.PlayerPlace:new()
            playerPlace.appid = bis:readUInt32()
            playerPlace.appsession = bis:readUInt32()
            playerPlace.gameid = bis:readUInt32()
            playerPlace.state = bis:readUInt8()
            self.playerPlace[i] = playerPlace
        end
        return self
    end
}

ToolMProtocol.ReqPlayerGameData = {
    XY_ID = 12005,
    askid = 1,
    numid = 0,
    gameid = 0,
    areaid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.ReqPlayerGameData})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.areaid)

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.numid = bis:readUInt32()
        self.gameid = bis:readUInt32()
        self.areaid = bis:readUInt32()

        return self
    end
}

ToolMProtocol.ReqEAuth = {
    XY_ID = 12015,
    askid = 0,
    saskid = 0,
    etype = 0,
    subetype = 0,
    num = "",
    ETYPE = {
        EKEY = 1, -- 密保
        ECARD = 2, -- 安全卡
        EMOBILE = 3 -- 令牌
    },
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.ReqEAuth})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.saskid)
        bos:writeUInt8(self.etype)
        bos:writeUInt8(self.subetype)
        bos:writeString(self.num)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readUInt32()
        self.saskid = bis:readUInt32()
        self.etype = bis:readUInt8()
        self.subetype = bis:readUInt8()
        self.num = bis:readCString(21)
        return self
    end
}

ToolMProtocol.RespEAuth = {
    XY_ID = 12016,
    askid = 0,
    saskid = 0,
    epwd = "",
    time_terminal = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.RespEAuth})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.saskid)
        bos:writeString(self.epwd)
        bos:writeInt32(self.time_terminal)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readUInt32()
        self.saskid = bis:readUInt32()
        self.epwd = bis:writeString()
        self.time_terminal = bis:readUInt32()
        return self
    end
}

ToolMProtocol.RespPlayerGameData = {
    XY_ID = 12006,
    FLAG = {
        SUCCESS = 0,
        GAMETABLENOTFIND = 1,
        DBCONNNOTFIND = 2,
        DBERR = 3,
        POST_SENDERR = 11,
        POST_TIMEOUT = 12
    },
    flag = 0,
    askid = 0,
    numid = 0,
    areaid = 0,
    jf = 0,
    sr = 0,
    bank = 0,
    win = 0,
    lost = 0,
    peace = 0,
    escape = 0,
    jy = 0,
    playsr = 0,
    newplayer = "0",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.RespPlayerGameData})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeInt32(self.askid)
        bos:writeUInt8(self.flag)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.areaid)
        bos:writeInt64(self.jf)
        bos:writeInt64(self.sr)
        bos:writeInt32(self.win)
        bos:writeInt32(self.lost)
        bos:writeInt32(self.peace)
        bos:writeInt32(self.escape)
        bos:writeInt32(self.jy)
        bos:writeInt32(self.playsr)
        bos:writeUInt8(self.newplayer)
        bos:writeInt64(self.bank)

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        self.numid = bis:readUInt32()
        self.areaid = bis:readUInt32()
        self.jf = bis:readInt32()
        self.sr = bis:readInt32()
        self.win = bis:readUInt32()
        self.lost = bis:readUInt32()
        self.peace = bis:readUInt32()
        self.escape = bis:readUInt32()
        self.jy = bis:readUInt32()
        self.playsr = bis:readUInt32()
        self.newplayer = bis:readUInt8()
        if (bis:getAvailableSize() > 0) then
            self.bank = bis:readInt32()
        end

        return self
    end
}

ToolMProtocol.ReqFileVer = {
    XY_ID = 12025,
    askid = 0,
    areaid = 0,
    areatypeid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.ReqFileVer})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.areatypeid)

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.areaid = bis:readUInt32()
        self.areatypeid = bis:readUInt32()

        return self
    end
}

ToolMProtocol.RespFileVer = {
    XY_ID = 12026,
    askid = 0,
    id = 0,
    fileCount = 0,
    fileList = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.RespFileVer})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.id)
        bos:writeUInt16(self.fileCount)
        for i = 1, self.fileCount do
            self.fileList[i] = {}
            bos:write(self.fileList[i].md5, 16)
            bos:writeUInt32(self.fileList[i].fileSize)
            bos:writeUInt32(self.fileList[i].fileOrgSize)
            bos:writeUInt16(self.fileList[i].fileIndex)
            bos:writeString(self.fileList[i].fileName)
        end

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.id = bis:readUInt32()
        self.fileCount = bis:readUInt16()
        for i = 1, self.fileCount do
            self.fileList[i] = {}
            self.fileList[i].md5 = bis:read(16)
            self.fileList[i].fileSize = bis:readUInt32()
            self.fileList[i].fileOrgSize = bis:readUInt32()
            self.fileList[i].fileIndex = bis:readUInt16()
            self.fileList[i].fileName = bis:readCString(260)
        end

        return self
    end
}

ToolMProtocol.ReqFile = {
    XY_ID = 12027,
    askid = 0,
    id = 0,
    areaid = 0,
    areatypeid = 0,
    fileIndex = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.ReqFile})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.id)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.areatypeid)
        bos:writeUInt16(self.fileIndex)

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.id = bis:readUInt32()
        self.areaid = bis:readUInt32()
        self.areatypeid = bis:readUInt32()
        self.fileIndex = bis:readUInt16()

        return self
    end
}

ToolMProtocol.RespFile = {
    XY_ID = 12028,
    FLAG = {
        SUCCESS = 0,
        RE_FILEVER = 1, --需要重新请求ReqFileVer
        UNKNOWN_AREA = 2,
        UNKNOWN_AREATYPE = 3,
        INVALID_INDEX = 4 --fileindex无效
    },
    askid = 0,
    flag = 0,
    fileName = "", --文件名
    totalPak = 0, --总包数
    currPak = 0, --当前包数
    pakLength = 0, --包长度
    pak = "", --包内容
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = ToolMProtocol.RespFile})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeUInt8(self.flag)
        bos:writeString(self.fileName)
        bos:writeUInt32(self.totalPak)
        bos:writeUInt32(self.currPak)
        local paklen = self.pakLength > FILEPAK_MAXSIZE and FILEPAK_MAXSIZE or self.pakLength
        bos:writeUInt32(paklen)
        bos:write(self.pak, self.pakLength)

        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        self.fileName = bis:readString()
        self.totalPak = bis:readUInt32()
        self.currPak = bis:readUInt32()
        self.pakLength = bis:readUInt32()
        if (self.pakLength > FILEPAK_MAXSIZE) then
            self.pakLength = FILEPAK_MAXSIZE
        end
        self.pak = bis:read(self.pakLength)

        return self
    end
}

ToolMProtocol.ReqDispatchRoom = {
    datasize = 0,
    data = "",
    XY_ID = 13501,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.datasize)
        if self.datasize > 0 then
            bos:write(self.data, self.datasize)
        end
        return bos
    end
}

ToolMProtocol.RespDispatchRoom = {
    XY_ID = 13502,
    data = {},
    roomCount = 3,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        for i = 1, self.roomCount do
            self.data[i] = bis:readUInt16()
        end
        return self
    end
}

ToolMProtocol.RespPlayerAct = {
    XY_ID = 11017,
    FLAG = {
        SUCCESS = 0,
        SHOW_MESSAGE = 1 --错误由MsgBox定义
    },
    askid = 0,
    flag = 0,
    msgbox = ToolMProtocol.MsgBox:new(),
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()

        if self.flag == ToolMProtocol.RespPlayerAct.FLAG.SHOW_MESSAGE then
            self.msgbox.m_type = bis:readUInt8()
            self.msgbox.m_szCaption = bis:readString()
            self.msgbox.m_szText = bis:readString()
            self.msgbox.m_dwIconBtn = bis:readUInt32()
            self.msgbox.m_delay = bis:readUInt8()
            self.msgbox.m_colour = bis:readUInt32()
            self.msgbox.m_szWeb = bis:readString()
            self.msgbox.m_dwAction = bis:readUInt8()
        end

        if bis:getAvailableSize() > 0 then
            self.askid = bis:readUInt32()
        end
        return self
    end
}

ToolMProtocol.EnterRoomFinish = {
    XY_ID = 11041,
    roomID = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.roomID = bis:readUInt32()

        return self
    end
}

ToolMProtocol.StartGame = {
    XY_ID = 11013,
    m_CanStart = 0,
    szPasswd = "", -- 进入包房密码
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.m_CanStart)
        bos:writeString(self.szPasswd)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_CanStart = bis:readUInt8()
        self.szPasswd = bis:readString()
        return self
    end
}

ToolMProtocol.ReqCheckClientVer = {
    XY_ID = 113,
    version = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.version)
        return bos
    end
}

ToolMProtocol.RespCheckClientVer = {
    XY_ID = 114,
    FLAG = {
        SUCCESS = 0, --版本通过
        SHOW_MESSAGE_OK = 1, --通过，但附带提示消息(有新版本，但是当前版本可以继续使用)
        SHOW_MESSAGE_MUSTUPDATE = 2, --错误由MsgBox定义(必须升级才能继续)
        SHOW_MESSAGE_OLDSVR = 3 --错误由MsgBox定义(服务器版本低于客户端版本)
    },
    flag = 0,
    nowVersion = 0,
    msgbox = ToolMProtocol.MsgBox:new(),
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        self.nowVersion = bis:readUInt32()
        if
            self.flag == ToolMProtocol.RespCheckClientVer.FLAG.SHOW_MESSAGE_OK or self.flag == ToolMProtocol.RespCheckClientVer.FLAG.SHOW_MESSAGE_MUSTUPDATE or
                self.flag == ToolMProtocol.RespCheckClientVer.FLAG.SHOW_MESSAGE_OLDSVR
         then
            self.msgbox.m_type = bis:readUInt8()
            self.msgbox.m_szCaption = bis:readString()
            self.msgbox.m_szText = bis:readString()
            self.msgbox.m_dwIconBtn = bis:readUInt32()
            self.msgbox.m_delay = bis:readUInt8()
            self.msgbox.m_colour = bis:readUInt32()
            self.msgbox.m_szWeb = bis:readString()
            self.msgbox.m_dwAction = bis:readUInt8()
        end

        return self
    end
}

ToolMProtocol.ReqPlayerConnect = {
    XY_ID = 11100,
    roomID = 0,
    brandID = 0,
    numID = 0,
    sessionID = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:write(self.sessionID, 16)
        bos:writeUInt32(self.brandID)
        bos:writeUInt32(self.numID)
        bos:writeUInt32(self.roomID)
        return bos
    end
}

ToolMProtocol.CheckAct = {
    XY_ID = 11079,
    active = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt16(self.active)
        return bos
    end
}

ToolMProtocol.RespPlayerConnect = {
    XY_ID = 11103,
    FLAG = {
        SUCCEED = 0,
        ERRROOMID = 1, --错误房间id
        NOUSER = 2, --没有此用户
        ERRUSER = 3, --用户错误
        ERRSTEP = 4, --错误启动步骤
        ERRUUID = 5, --错误uuid
        ERRSTATE = 6, --错误用户状态
        HASTUOGUAN = 7, --用户被强制托管
        LIMITED = 8 --用户被限制
    },
    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        return self
    end
}

ToolMProtocol.ReqLeaveRoom = {
    XY_ID = 11073,
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

ToolMProtocol.RespLeaveRoom = {
    XY_ID = 11074,
    LEAVEROOMTYPE = {
        NORMAL = 0,
        KICK = 1
    },
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

ToolMProtocol.ReqLeaveRoom = {
    XY_ID = 11073,
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

ToolMProtocol.RespAwardInfo = {
    XY_ID = 12046,
    numid = 0,
    areaid = 0,
    jf = 0,
    sr = 0,
    data = "",
    msg = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.numid = bis:readUInt32()
        self.areaid = bis:readUInt32()
        self.jf = bis:readUInt32()
        self.sr = bis:readUInt32()
        self.data = bis:readCString(500)
        self.msg = bis:readCString(201)
        return self
    end
}

ToolMProtocol.ReqPlayerCnt = {
    XY_ID = 12044,
    areaid = 0,
    size = 0,
    roomid = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.areaid)
        if self.size <= 300 then
            bos:writeInt32(self.size)
            for i = 1, self.size do
                bos:writeInt32(self.roomid[i])
            end
        end

        return bos
    end
}

ToolMProtocol.RespPlayerCnt = {
    XY_ID = 12045,
    FLAG = {
        SUCCESS = 0, --简单模式
        FAILED = 1, --复杂模式
        POST_SENDERR = 2, --最前面的
        POST_TIMEOUT = 3
    },
    flag = 0,
    size = 0,
    roomid = {},
    cnt = {},
    ctor = function(self)
        self.flag = 0
        self.size = 0
        self.roomid = {}
        self.cnt = {}
    end,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        self:ctor()
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.flag = bis:readUInt8()
        self.size = bis:readUInt32()
        if self.size <= 300 then
            for i = 1, self.size do
                self.roomid[i] = bis:readUInt32()
                self.cnt[i] = bis:readUInt32()
            end
        end
        return self
    end
}

ToolMProtocol.ReqTempSessionID = {
    XY_ID = 12007,
    askid = 0,
    areaid = 0,
    numid = 0,
    userid = "",
    source = 0,
    sessionid = "", --正式sessionid
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.source)
        bos:write(self.sessionid, 16)
        bos:writeString(self.userid)
        return bos
    end
}

ToolMProtocol.RespTempSessionID = {
    XY_ID = 12008,
    FLAG = {
        SUCCESS = 0, --认证成功
        SHOW_MESSAGE = 1, --错误信息在errmsg中
        PTUSER_NEED_REGISTER = 2, --PT帐号正确，需要注册平台帐号
        UNKNOW_USERID = 3, --数据库users表中没有该平台帐号信息
        INVALID_PASSWORD = 4, --密码错误（本地认证）
        UNKNOW_USERTYPE = 5, --未知的帐号类型
        LOCALAUTH_USERTYPE_ERR = 6, --本地认证帐号类型错误（本地认证只能使用USERID类型）
        PLAYERCENTER_SEND_ERR = 7, --向玩家中心发送协议失败
        PTSVR_SEND_ERR = 8, --向PTSVR发送协议失败
        NO_PTINFO = 9, --数据库users_pt表中没有该帐号数据
        NO_AUTHFLAG = 10, --没有认证标志（游戏认证）
        DBERR = 11, --数据库错误，错误信息在errmsg中
        DBCONNERR = 12, --表所在数据库连接未找到
        FORBID_USERID = 13,
        LOCK_BY_USER_SELF = 14, --账号被自己锁定
        INVALID_HARDWARE = 15,
        PT_TIME_OUT = 16,
        PC_SEND_ERR = 17,
        PC_TIME_OUT = 18,
        AD_SEND_ERR = 19, --AccountDataSvr服务发送失败
        AD_TIME_OUT = 20,
        POST_SENDERR = 23, --向认证服务发送协议失败
        POST_TIMEOUT = 24, --认证服务返回超时
        AUTH_TOO_FREQUENTLY = 25, --认证太过于频繁
        IP_TOO_FREQUENTLY = 26, --同ip登录太过于频繁
        PASS_ERR_OVER_TIMES = 27, --密码重试次数太多
        SMS_ERR_OVER_TIMES = 28, --验证码重试次数太多
        IPPASS_ERR_OVER_TIMES = 29, --同ip密码重试次数太多
        INVALID_SESSIONID = 72,
        NO_SESSIONID = 74
    },
    askid = 0,
    flag = 0,
    tempsessionid = "",
    source = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        self.tempsessionid = bis:read(16)
        self.source = bis:readUInt32()
        return self
    end
}

ToolMProtocol.ReqDiBao = {
    XY_ID = 12049,
    FLAG = {
        SUCCESS = 0,
        POST_SENDERR = 1,
        POST_TIMEOUT = 2,
        --以下为TallySvr返回的错误
        DBERR = 21
    },
    askid = 0,
    numid = 0,
    gameid = 0,
    areaid = 0,
    vipid = 0,
    clienttype = 2,
    osver = 0,
    ip = 0,
    channelid = 0,
    identify = "",
    data = {},
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    type = 0,
    bostream = function(self, buff, bufflen)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.numid)
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.areaid)
        bos:writeInt32(self.vipid)

        bos:writeUInt8(self.clienttype)
        bos:writeInt32(self.osver)
        bos:writeInt32(self.ip)
        bos:writeInt32(self.channelid)
        bos:writeString(self.identify)

        local datastr = ""
        for i, v in pairs(self.data) do
            datastr = i .. "=" .. v .. ";"
        end
        bos:writeString(datastr)
        bos:writeInt32(self.type)
        return bos
    end
}

ToolMProtocol.PlayerInfo = {
    XY_ID = 11009,
    SEX = {
        FEMALE = 0, --女
        MALE = "1" --男
    },
    CLIENTTYPE = {
        PC = 0, -- 计算机
        TV = 1, -- 电视
        MOBILE = 2, -- 手机
        WEB = 3 -- 浏览器
    },
    HARDWAREFLAG = {
        -- 带硬件标识
        HF_NONE = 0,
        HF_CAMERA = 1, -- 摄像头
        HF_MICROPHONE = 2, -- 麦克风
        HF_JOYPAD = 4 -- 游戏手柄，不区分有线无线
    },
    m_brandid = 0, --区号,即areaid
    m_numid = 0, --数字账号
    m_customerid = "", --平台帐号,即userid
    m_nickname = "", --昵称
    m_right = 0, --基本权限,复杂的权限由另外的协议传
    m_sex = 0, --性别(取值见SEX定义)
    m_sr = 0, --财富数量(银子)
    m_jf = 0, --游戏优胜值
    m_jy = 0, --经验
    m_Win = 0, --本游戏累计总胜盘数
    m_Lost = 0, --本游戏累计总负盘数
    m_Peace = 0, --本游戏累计总和盘数
    m_Escape = 0, --本游戏累计断线盘数
    m_bhid = 0, --帮会id(暂时未使用)
    m_bhname = 0, --帮会名字(暂时未使用)
    m_state = 0, --玩家房间内状态
    m_tableorder = 0, --桌号(即tableid)
    m_sitorder = 0, --桌上的座位号
    m_netspeed = 0, --网速
    m_headid = 0, --服装id
    m_vipid = 0, --会员号
    m_clienttype = 0, --客户端类型(见CLIENTTYPE定义)
    m_hardwareflag = 0, --硬件标识(见HARDWAREFLAG定义)
    m_pictureid = 0, --玩家自定义头像标记
    m_typescore = 0, --根据游戏的优胜值类型, 如果是玩财富的, 就等于m_sr的值, 如果是玩优胜值的, 就等于m_jf
    -- add ptnumid
    m_ptnumid = "", --盛大通行证数字账号
    m_osver = 0, --操作系统版本号
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_brandid = bis:readUInt32()
        self.m_numid = bis:readUInt32()

        local nlen = tonumber(bis:readUInt8())
        if nlen > MAXUSERID then
            return
        end
        self.m_customerid = bis:read(nlen)
        nlen = tonumber(bis:readUInt8())
        if nlen > MAXNICKNAME then
            return
        end
        self.m_nickname = bis:read(nlen)
        self.m_right = bis:readUInt32()
        self.m_sex = bis:readUInt8()
        self.m_sr = bis:readInt32()
        self.m_jf = bis:readInt32()
        self.m_jy = bis:readUInt32()
        self.m_Win = bis:readUInt32()
        self.m_Lost = bis:readUInt32()
        self.m_Peace = bis:readUInt32()
        self.m_Escape = bis:readUInt32()
        self.m_bhid = bis:readUInt32()
        nlen = tonumber(bis:readUInt8())
        if nlen >= string.len(self.m_bhname) then
            return
        end
        self.m_bhname = bis:read(nlen)
        self.m_state = bis:readUInt16()
        self.m_tableorder = bis:readUInt16()
        self.m_sitorder = bis:readUInt8()
        self.m_netspeed = bis:readUInt16()
        self.m_headid = bis:readUInt32()
        self.m_vipid = bis:readUInt32()
        self.m_clienttype = bis:readUInt32()
        self.m_hardwareflag = bis:readUInt32()
        self.m_pictureid = bis:readUInt32()
        if bis:getAvailableSize() > 0 then
            self.m_typescore = bis:readUInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.m_ptnumid = bis:readUInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.m_osver = bis:readUInt32()
        end
        return self
    end
}

ToolMProtocol.GameUpdateInfo = {
    XY_ID = CMDT_GAMEUPDATE_INFO,
    gameid = 0,
    state = -1,
    -- 更新结果，0：成功，1：失败，2：没有发生更新
    szGamePreVer = "",
    -- 更新前版本
    szGameCurrVer = "",
    -- 当前版本
    channelid = 0,
    updatetime = 0,
    szMachineType = "",
    -- 机型
    szOsVer = "",
    -- 系统版本
    szPackageName = "",
    -- 包名
    szDeviceType = "",
    -- 设备类型

    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.gameid)
        bos:writeInt32(self.state)
        bos:writeString(self.szGamePreVer)
        bos:writeString(self.szGameCurrVer)
        bos:writeInt32(self.channelid)
        bos:writeString(self.updatetime)
        bos:writeString(self.szMachineType)
        bos:writeString(self.szOsVer)
        bos:writeString(self.szPackageName)
        bos:writeString(self.szDeviceType)
        return bos
    end
}

ToolMProtocol.ReqPlayerPropsData = {
    XY_ID = CMDT_REQGETPROPATTRS,
    askid = 1,
    gameid = 40162,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)
        return bos
    end
}

ToolMProtocol.RespPlayerPropsData = {
    XY_ID = CMDT_RESPGETPROPATTRS,
    FLAG = {
        SUCCESS = 0,
        POST_SENDERR = 1,
        POST_TIMEOUT = 2,
        -- 以下为道具服务返回的错误
        DBCONNNOTFIND = 21,
        NETBUSY = 28,
        DBERR = 29
    },
    flag = 0,
    askid = 0,
    yb = 0, --元宝
    charm = 0, --魅力
    contribution = 0,
    attsize = 0,
    att = {}, --属性
    propssize = 0,
    props = {}, --普通道具编号
    timesize = 0,
    timeprops = {}, --时间道具编号
    timeend = {}, --user_prop表endtime字段
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.flag = bis:readUInt8()
        self.askid = bis:readInt32()
        self.yb = bis:readInt32()
        self.charm = bis:readInt32()
        self.contribution = bis:readInt32()
        self.attsize = bis:readUInt8()
        self.att = {}
        for i = 1, self.attsize do
            self.att[i] = bis:readInt32()
        end

        self.propssize = bis:readUInt8()
        self.props = {}
        for i = 1, self.propssize do
            self.props[i] = {id = bis:readInt32(), count = bis:readInt32()}
        end

        self.timesize = bis:readUInt8()
        self.timeprops = {}
        for i = 1, self.timesize do
            self.timeprops[i] = {id = bis:readInt32(), time = bis:readInt32()}
        end

        self.timeend = {}
        for i = 1, self.propssize do
            self.timeend[i] = bis:readInt32()
        end

        return self
    end
}

ToolMProtocol.ReqSR = {
    XY_ID = CMDT_REQSR,
    askid = 0,
    gameid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.gameid)

        return bos
    end
}

ToolMProtocol.ResSR = {
    XY_ID = CMDT_RESPSR,
    FLAG = {
        SUCCESS = 0,
        POST_SENDERR = 1,
        POST_TIMEOUT = 2,
        DBERR = 21,
        GAMETABLENOTFIND = 22,
        DBCONNNOTFIND = 23,
        SVRSCORETYPEERR = 24
    },
    askid = 0,
    flag = 0,
    purse = 0,
    bank = 0,
    havepwd = 0, --0 = no pwd//1 = have pwd
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.purse = bis:readInt64()
        self.bank = bis:readInt64()
        self.havepwd = bis:readUInt8()

        return self
    end
}

for _, v in pairs(ToolMProtocol) do
    v.processid = 62
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end

return ToolMProtocol
