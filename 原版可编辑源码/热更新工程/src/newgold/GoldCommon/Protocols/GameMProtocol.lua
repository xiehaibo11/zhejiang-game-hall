local GameMProtocol = {}
local CMDT_FIRST_CLIENT_GAME = 11000 --游戏协议起始编号
local CMDT_REQCHARGE = CMDT_FIRST_CLIENT_GAME + 107
local CMDT_RESPCHARGE = CMDT_FIRST_CLIENT_GAME + 108

local CMDT_REQUSEPROPS = CMDT_FIRST_CLIENT_GAME + 52 -- 请求使用道具(c->s)
local CMDT_RESPUSEPROPS = CMDT_FIRST_CLIENT_GAME + 53 -- 返回使用道具(s->c)
local CMDT_REQOWNERKICKUSER = CMDT_FIRST_CLIENT_GAME + 95 -- 请求桌主踢人
local CMDT_RESPOWNERKICKUSER = CMDT_FIRST_CLIENT_GAME + 96 -- 应答

local CMDT_REQ_CEHCK_PROP_ACTTABLE = CMDT_FIRST_CLIENT_GAME + 127 -- 动态检测玩家道具是否足够
local CMDT_RESP_CEHCK_PROP_ACTTABLE = CMDT_FIRST_CLIENT_GAME + 128 -- 应答

local CMDT_REQPLAYERDISMISS = CMDT_FIRST_CLIENT_GAME + 320 --发起解散/同意解散/不同意解散
local CMDT_RESPPLAYERDISMISS = CMDT_FIRST_CLIENT_GAME + 321 --解散情况返回

local CMDT_REQCONTINUETABLE = CMDT_FIRST_CLIENT_GAME + 333 -- 请求续桌
local CMDT_RESPCONTINUETABLE = CMDT_FIRST_CLIENT_GAME + 334 -- 返回
local CMDT_BROADCASTCONTINUESTATUS = CMDT_FIRST_CLIENT_GAME + 335 -- 续桌状态广播
local CMDT_REQDEALCONTINUEREQUEST = CMDT_FIRST_CLIENT_GAME + 336 -- 处理续桌邀请
local CMDT_RESPDEALCONTINUEREQUEST = CMDT_FIRST_CLIENT_GAME + 337 -- 返回并广播

local CMDT_REQPLAYERCONNECTGP = CMDT_FIRST_CLIENT_GAME + 325
local CMDT_RESPPLAYERCONNECTGP = CMDT_FIRST_CLIENT_GAME + 326

local CMDT_REQPLAYERCONNECT2 = CMDT_FIRST_CLIENT_GAME + 310
local CMDT_RESPPLAYERCONNECT2 = CMDT_FIRST_CLIENT_GAME + 311

local CMDT_REQPLAYERJOINMATCH = CMDT_FIRST_CLIENT_GAME + 327
local CMDT_RESPPLAYERJOINMATCH = CMDT_FIRST_CLIENT_GAME + 328

local CMDT_REQUSEEMOJIPROP   =   CMDT_FIRST_CLIENT_GAME + 366
local CMDT_RESPUSEEMOJIPROP  =   CMDT_FIRST_CLIENT_GAME + 367

local CMDT_NOTIFY_JOIN_DISPATCHQUEQUE = CMDT_FIRST_CLIENT_GAME + 500 -- 重回匹配队列
local CMDT_NOTIFY_GOLD_PROPS_CHANGE = CMDT_FIRST_CLIENT_GAME + 501 -- 通知道具变化

GameMProtocol.MsgBox = {
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

GameMProtocol.PlayerStateInfo = {
    XY_ID = 11027,
    state = 0,
    roomid = 0,
    tableid = 0,
    sitorder = 0,
    brandid = 0,
    numid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.state = bis:readUInt8()
        self.roomid = bis:readUInt32()
        self.tableid = bis:readUInt16()
        self.sitorder = bis:readUInt8()
        self.brandid = bis:readUInt32()
        self.numid = bis:readUInt32()
        return self
    end
}

GameMProtocol.PlayerLeaveEx_ToClient = {
    XY_ID = 11104,
    msgbox = GameMProtocol.MsgBox:new(),
    new = function(self, o)
        o = o or {}
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

GameMProtocol.PlayerNumInfo = {
    XY_ID = 11028,
    m_sr = 0,
    m_jf = 0,
    m_jy = 0,
    m_Win = 0,
    m_Lost = 0,
    m_Peace = 0,
    m_Escape = 0,
    m_brandid = 0,
    m_numid = 0,
    m_typescore = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.m_sr = bis:readInt64()
        self.m_jf = bis:readInt64()
        self.m_jy = bis:readInt32()
        self.m_Win = bis:readInt32()
        self.m_Lost = bis:readInt32()
        self.m_Peace = bis:readInt32()
        self.m_Escape = bis:readInt32()
        self.m_brandid = bis:readUInt32()
        self.m_numid = bis:readUInt32()
        self.m_typescore = bis:readInt64()
        return self
    end
}

GameMProtocol.PlayerLeave = {
    XY_ID = 11101,
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

GameMProtocol.ReqAwardClient = {
    reqtimeBoxAward = 2100,
    reqtimeBoxEnterRoom = 2200,
    reqTableTaskEnterRoom = 3000
}

GameMProtocol.ReqClientAward = {
    XY_ID = 11086,
    data = "",
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

GameMProtocol.WaitingStart = {
    XY_ID = 11091,
    brandid = 0,
    numid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.brandid = bis:readUInt32()
        self.numid = bis:readUInt32()
        return self
    end
}

GameMProtocol.WaitingEnd = {
    XY_ID = 11092,
    brandid = 0,
    numid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.brandid = bis:readUInt32()
        self.numid = bis:readUInt32()
        return self
    end
}

GameMProtocol.ServerToClientMessage = {
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

GameMProtocol.ClientToServerMessage = {
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

GameMProtocol.ReqPlayerAct = {
    XY_ID = 11016,
    ACTION = {
        NONE = 0,
        SITDOWN = 1, --坐下
        STANDUP = 2, --站起
        READY = 3, --房间模块按了开始
        SEEGAME = 4, --普通旁观(桌上有人才可旁观)
        CHANGETOSTART = 5, --桌子里面按了开始
        CHANGETOSEEGAME = 6, --坐着的变成旁观
        CHANGESEAT = 7, --换座位
        LEAVEROOM = 8, --离开房间
        SEEGAME2 = 9 --新增旁观(空桌也可旁观)
    },
    askid = 0,
    action = 0,
    tableID = 0,
    sitorder = 0,
    password = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeUInt8(self.action)
        bos:writeUInt16(self.tableID)
        bos:writeUInt8(self.sitorder)
        bos:writeString(self.password)
        bos:writeUInt32(self.askid)

        return bos
    end
}

GameMProtocol.TableInfo = {
    XY_ID = 11014,
    DeskState = {
        DS_IDLE = 0, -- 桌子无人的状态
        DS_READY = 1, -- 桌子上有人但游戏没有开始状态
        DS_GAME = 2, -- 游戏开始状态
        DS_OCCU = 3, -- 桌子被占用
        DS_DISMISS = 4, -- 桌子已解散
        DS_CNT = 5
    },
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

GameMProtocol.ReqCharge = {
    XY_ID = CMDT_REQCHARGE,
    PLAYTYPE = {
        TYPE_JF = 1, --只玩优胜值
        TYPE_SR = 2 --只玩财富
    },
    nScore = 0,
    ucType = 0,
    gameID = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.nScore = bis:readInt32()
        self.ucType = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.gameID = bis:readInt32()
        end
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeUInt32(self.nScore)
        bos:writeUInt8(self.ucType)
        bos:writeUInt32(self.gameID)
        return bos
    end
}

GameMProtocol.RespCharge = {
    XY_ID = CMDT_RESPCHARGE,
    FLAG = {
        SUCCESS = 0,
        NOT_SCORE = 1, --没有足够的财富
        ERRDB = 2, --数据库错误
        FAILED = 3, --其他错误
        PLAYER_SR_MUST_GE_MIN_SR = 11 --需大于准入限制
    },
    ucFlag = 0,
    ucType = 0,
    nScore = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)

        self.ucFlag = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.ucType = bis:readUInt8()
            self.nScore = bis:readInt32()
        end
        return self
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()

        bos:writeUInt8(self.ucFlag)
        bos:writeUInt8(self.ucType)
        bos:writeUInt32(self.nScore)
        return bos
    end
}

GameMProtocol.ReqUseProps = {
    XY_ID = CMDT_REQUSEPROPS,
    propsid = 0, -- 请求使用用户的道具，不规范的Id为请求使用失败
    count = 0, -- count小于1 强制等于1， 再进行计算
    param = "msgsrc=0;", -- 参数，比如说小喇叭是所
    priceid = 0, -- 道具价格ID
    type = 0, -- 1：玄学表情 0：洗牌
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

GameMProtocol.RespUseProps = {
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
        AD_TIMEOUT = 12, --AccountDataSvr返回超时
        NOT_COST = 13,
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

GameMProtocol.ReqOwnerKickUser = {
    XY_ID = CMDT_REQOWNERKICKUSER,
    nAskid = 0,
    nAreaid = 0, -- 被踢玩家区号
    nNumid = 0, -- 被踢玩家数字账号
    strMsg = "", -- 提示消息
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.nAskid)
        bos:writeUInt32(self.nAreaid)
        bos:writeUInt32(self.nNumid)
        bos:writeString(self.strMsg)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskid = bis:readInt32()
        self.nAreaid = bis:readInt32()
        self.nNumid = bis:readInt32()
        self.strMsg = un.StringUtils.GB_18030_2000_TO_UTF8(bis:readString())
        return self
    end
}

GameMProtocol.RespOwnerKickUser = {
    XY_ID = CMDT_RESPOWNERKICKUSER,
    FLAG = {
        SUCCEED = 0,
        NOTTABLE = 1, -- 不在桌子上
        NOTOWNER = 2, -- 玩家不是桌主
        NOUSERINROOM = 3, -- 被踢得人不在房间中
        NOUSERINTAB = 4, -- 被踢得人不在桌子上
        ERRGAMESTATE = 5, -- 错误游戏状态，即游戏已经开始
        ERRSELF = 6, -- 目标是自己
        OTHER = 7 -- 其他原因
    },
    ucFlag = 0,
    nAskid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.nAskid)
        bos:writeUInt8(self.ucFlag)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskid = bis:readInt32()
        self.ucFlag = bis:readUInt8()
        return self
    end
}

GameMProtocol.ReqCheckPropAccTable = {
    XY_ID = CMDT_REQ_CEHCK_PROP_ACTTABLE,
    askid = 0,
    tableid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.tableid)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.tableid = bis:readInt32()
        return self
    end
}

GameMProtocol.RespCheckPropAccTable = {
    XY_ID = CMDT_RESP_CEHCK_PROP_ACTTABLE,
    FLAG = {
        NOTENGOUGH = 0,
        ENGOUGH = 1,
        EXCEPTION = 2
    },
    askid = 0,
    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeUInt8(self.flag)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

--玩家发起解散或者对于解散的反馈
GameMProtocol.ReqPlayerDismiss = {
    XY_ID = CMDT_REQPLAYERDISMISS,
    TYPE = {
        LAUNCH_DISMISS = 0, --发起解散
        AGREE_DISMISS = 1, --同意解散
        DISAGREE_DISMISS = 2 --不同意解散
    },
    m_askid = 0,
    m_type = 0, --发起类型
    m_dissmissReason = "", --解散原因
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.m_askid)
        bos:writeUInt8(self.m_type)
        bos:writeString(self.m_dissmissReason)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_askid = bis:readInt32()
        self.m_type = bis:readUInt8()
        if bis:getAvailableSize() > 0 then
            self.m_dissmissReason = bis:readString()
        end
        return self
    end
}

--解散情况的反馈（玩家同意或拒绝，或者解散成功与否）
GameMProtocol.RespPlayerDismiss = {
    XY_ID = CMDT_RESPPLAYERDISMISS,
    FLAG = {
        SUCCEED = 0, --操作成功(同意或者不同意)
        DISMISS_SUCCEED = 1, --解散成功
        DISMISS_FAILED = 2, --解散失败（一票否决）
        DISMISS_TIMEOUT_SUCCESSED = 3, --超时解散成功
        DISMISS_TIMEOUT_FALLED = 4 --超时解散失败
    },
    m_askid = 0,
    m_type = 0,
    m_flag = 0,
    m_lasttime = -1, --剩余倒计时时间(-1表示不起用倒计时)
    m_launchid = 0, --发起者numid
    m_areaid = 0, --发起者areaid
    m_totalcnt = 0, --参与解散的人的总数量
    m_agreecnt = 0, --同意者数量
    m_agreeid = {}, --同意者numid
    m_agreeareaid = {}, --同意者areaid
    m_disagreecnt = 0, --不同意者数量
    m_disagreeid = {}, --不同意者numid
    m_disagreeareaid = {}, --不同意者areaid
    m_dismissReason = "", --解散原因
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_askid = bis:readInt32()
        self.m_type = bis:readUInt8()
        self.m_flag = bis:readUInt8()
        self.m_lasttime = bis:readInt32()
        self.m_launchid = bis:readInt32()
        self.m_areaid = bis:readInt32()
        self.m_totalcnt = bis:readUInt8()
        self.m_agreecnt = bis:readUInt8()
        self.m_agreeid = {}
        self.m_agreeareaid = {}
        for i = 1, self.m_agreecnt do
            self.m_agreeid[i] = bis:readInt32()
            self.m_agreeareaid[i] = bis:readInt32()
        end
        self.m_disagreecnt = bis:readUInt8()
        self.m_disagreeid = {}
        self.m_disagreeareaid = {}
        for i = 1, self.m_disagreecnt do
            self.m_disagreeid[i] = bis:readInt32()
            self.m_disagreeareaid[i] = bis:readInt32()
        end
        if bis:getAvailableSize() > 0 then
            self.m_dismissReason = bis:readString()
        end
        return self
    end
}

GameMProtocol.ReqPlayerConnect2 = {
    XY_ID = CMDT_REQPLAYERCONNECT2,
    askid = 0,
    roomid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.roomid)
        return bos
    end
}

GameMProtocol.RespPlayerConnect2 = {
    XY_ID = CMDT_RESPPLAYERCONNECT2,
    FLAG = {
        SUCCEED = 0,
        ERR_JOINING = 1,
        ERR_TABLE_DISMISS = 2
    },
    askid = 0,
    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

GameMProtocol.ReqLeaveRoom = {
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

GameMProtocol.RespLeaveRoom = {
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

GameMProtocol.StartGame = {
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

GameMProtocol.StartGame = {
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

GameMProtocol.ReqPlayerConnectGP = {
    XY_ID = CMDT_REQPLAYERCONNECTGP,
    askid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        return bos
    end
}

GameMProtocol.RespPlayerConnectGP = {
    XY_ID = CMDT_RESPPLAYERCONNECTGP,
    FLAG = {
        SUCCEED = 0,
        ERR_NO_USER = 1
    },
    m_askid = 0,
    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

GameMProtocol.CheckAct = {
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

GameMProtocol.ReqPlayerJoinMatch = {
    XY_ID = CMDT_REQPLAYERJOINMATCH,
    askid = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        return bos
    end
}

GameMProtocol.RespPlayerJoinMatch = {
    XY_ID = CMDT_RESPPLAYERJOINMATCH,
    FLAG = {
        SUCCEED = 0,
        ERR_NO_USER = 1,
        ERR_USER_GAMING = 2,
        ERR_USER_MATCHING = 3,
        ERR_USER_GOLD_OVER = 4, -- 玩家金币超过
        ERR_USER_GOLD_NOENOUGH = 5 -- 玩家金币不足
    },
    m_askid = 0,
    flag = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.m_askid = bis:readUInt32()
        self.flag = bis:readUInt8()
        return self
    end
}

--续桌相关的流程
GameMProtocol.ReqContinueTable = {
    XY_ID = CMDT_REQCONTINUETABLE,
    nAskId = 0,
    nTableId = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTableId)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.nTableId = bis:readInt32()
        return self
    end
}

GameMProtocol.RespContinueTable = {
    XY_ID = CMDT_RESPCONTINUETABLE,
    FLAG = {
        ALREADY_CONTINUE = 100 --已经有人发起续桌了
    },
    ucFlag = 0,
    nAskId = 0,
    nTableId = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucFlag)
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTableId)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTableId = bis:readInt32()
        return self
    end
}

GameMProtocol.BroadCastContinueStatus = {
    XY_ID = CMDT_BROADCASTCONTINUESTATUS,
    STATUS = {
        END_GAME = 1, -- 游戏结束
        REQ_SUCCESS = 2, -- 续桌请求成功
        REQ_FAIL = 3, -- 续桌请求失败,比赛场卡不足
        END_CONTINUE = 4, -- 续桌流程结束
        END_TIMEOUT = 5, -- 续桌超时
        END_REFUSE = 6, -- 续桌流程被拒绝结束
        END_PLAYERLEAVE = 7, -- 玩家离开
        CONTINUE_NOTICE = 8, --通知当前为GP续桌
        SPONSOR_FAIL = 9 -- 发起者不满足续桌
    },
    nTableId = 0,
    nStatus = 0,
    nContinueTotalTime = 0, -- 整个续桌流程时间，单位秒
    nContinueLeftTime = 0, -- 整个续桌流程剩下的时间，单位秒
    nSponsorNumId = 0, -- 续桌发起者
    acData = "",
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nTableId)
        bos:writeInt32(self.nStatus)
        bos:writeInt32(self.nContinueTotalTime)
        bos:writeInt32(self.nContinueLeftTime)
        bos:writeInt32(self.nSponsorNumId)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nTableId = bis:readInt32()
        self.nStatus = bis:readInt32()
        self.nContinueTotalTime = bis:readInt32()
        self.nContinueLeftTime = bis:readInt32()
        self.nSponsorNumId = bis:readInt32()
        if bis:getAvailableSize() > 0 then
            self.acData = bis:readString()
        end
        return self
    end
}

GameMProtocol.ReqDealContinueRequest = {
    XY_ID = CMDT_REQDEALCONTINUEREQUEST,
    DEALRET = {
        AGREE = 1, -- 同意续桌请求
        REFUSE = 2 -- 拒绝续桌请求
    },
    nAskId = 0,
    nTableId = 0,
    nDealRet = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTableId)
        bos:writeInt32(self.nDealRet)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nAskId = bis:readInt32()
        self.nTableId = bis:readInt32()
        self.nDealRet = bis:readInt32()
        return self
    end
}

GameMProtocol.RespDealContinueRequest = {
    XY_ID = CMDT_RESPDEALCONTINUEREQUEST,
    DEALRET = {
        AGREE = 1, -- 同意续桌请求
        REFUSE = 2 -- 拒绝续桌请求
    },
    ucFlag = 0,
    nAskId = 0,
    nTableId = 0,
    nNumId = 0,
    nDealRet = 0,
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt8(self.ucFlag)
        bos:writeInt32(self.nAskId)
        bos:writeInt32(self.nTableId)
        bos:writeInt32(self.nNumId)
        bos:writeInt32(self.nDealRet)
        return bos
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.ucFlag = bis:readUInt8()
        self.nAskId = bis:readInt32()
        self.nTableId = bis:readInt32()
        self.nNumId = bis:readInt32()
        self.nDealRet = bis:readInt32()
        return self
    end
}

GameMProtocol.NotifyJoinDispatchQueue = {
    XY_ID = CMDT_NOTIFY_JOIN_DISPATCHQUEQUE,
    FLAG = {
        NOT_ENOUGH_SR = 1, -- 金币不足
        TOO_MUCH_SR = 2, -- 金币过多
        GAME_CONTINUE_OVER = 3, -- 游戏最大局数结束，需要重新匹配
        NO_READY = 4 -- 长时间未准备
    },
    askid = 0,
    flag = 0,
    content = "",
    sr = 0, -- 当前玩家金币信息
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.content = bis:readString()
        self.sr = bis:readInt32()
        return self
    end
}

GameMProtocol.NotiyGoldPropsChange = {
    XY_ID = CMDT_NOTIFY_GOLD_PROPS_CHANGE,
    rich = 0, -- 金币数
    pcnt = 0, -- 数量道具不同的id数量
    props_id = {}, -- 数量道具id
    props_cnt = {}, -- 数量道具数量
    tcnt = 0, -- 时效道具不同的id数量
    time_props_id = {}, -- 时效道具id
    time_props_endtime = {}, -- 时效道具失效时间戳
    time_props_cnt = {}, -- 时效道具数量
    new = function(self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.rich = bis:readInt64()
        self.pcnt = bis:readUInt8()
        self.props_id = {}
        self.props_cnt = {}
        for i = 1, self.pcnt do
            self.props_id[i] = bis:readInt32()
        end
        for i = 1, self.pcnt do
            self.props_cnt[i] = bis:readInt32()
        end

        self.tcnt = bis:readUInt8()
        self.time_props_id = {}
        self.time_props_endtime = {}
        self.time_props_cnt = {}
        for i = 1, self.tcnt do
            self.time_props_id[i] = bis:readInt32()
        end
        for i = 1, self.tcnt do
            self.time_props_endtime[i] = bis:readInt64()
        end
        for i = 1, self.tcnt do
            self.time_props_cnt[i] = bis:readInt32()
        end
        return self
    end
}

GameMProtocol.ReqUseEmojiProps = {
    XY_ID = CMDT_REQUSEEMOJIPROP,
    askid  = 0,
    propid  = 0,
    propcnt  = 0,
    exchangerate = false,
    param = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bostream = function (self)
        local bos = un.network.IStream.new()
        bos:writeInt32(self.askid)
        bos:writeInt32(self.propid)
        bos:writeInt32(self.propcnt)
        bos:writeBool(self.exchangerate)
        bos:writeString(self.param)
        return bos
    end,
}

GameMProtocol.RespUseEmojiProps = {
    XY_ID = CMDT_RESPUSEEMOJIPROP,
    askid  = 0,
    flag  = 0,
    propid  = 0,
    param = "",

    new = function (self, o)
        o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,

    bistream = function (self,buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.askid = bis:readInt32()
        self.flag = bis:readUInt8()
        self.propid = bis:readInt32()
        self.param = bis:readString()
        return self
    end
}

for _, v in pairs(GameMProtocol) do
    v.processid = 1
    if v.XY_ID then
        v.event_key = v.processid .. "_" .. v.XY_ID
    end
end

GameMProtocol.processid = 1

return GameMProtocol
