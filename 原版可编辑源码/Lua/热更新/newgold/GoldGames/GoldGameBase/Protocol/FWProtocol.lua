local FWProtocol = {}

local FWXY_FIRST_ID = 0
local FWXY_LAST_ID = 0x0100

FWProtocol.FW_XYID = {
    FWXY_FIRST = 0,
    FWXY_MESSAGEBOX = 1, -- 提示消息
    FWXY_PLAYERITEM = 3, -- 玩家列表项 s->c
    FWXY_TABLEDATA = 2, -- 桌子数据 s->c
    FWXY_PLAYERDATA = 4, -- 玩家数据 s->c
    FWXY_PLAYERDATAEX = 5, -- 玩家数据扩展 s->c
    FWXY_PLAYERENTER = 6, -- 玩家进入 s->c
    FWXY_PLAYERLEAVE = 7, -- 玩家离开 s->c
    FWXY_PLAYERSTART = 8, -- 玩家开始 c->s
    FWXY_PLAYERTIMER = 9, -- 玩家计时 s->c
    FWXY_STARTED = 10, -- 开始游戏 s->c
    FWXY_ENDING = 11, -- 结束游戏 s->c
    FWXY_QUERYACTION = 12, -- 请求动作 c->s s->c (请求者 -> 服务器 -> 回复者)
    FWXY_REPLYACTION = 13, -- 回复动作 c->s s->c (回复者 -> 服务器 -> 请求者)
    FWXY_REPLYACTIONSETUP = 14, -- 回复动作设定 c->s (回复者 -> 服务器)
    FWXY_VIDEOLOGINDATA = 15, -- 视频登录数据
    FWXY_VIDEOID = 16, -- 视频ID
    FWXY_SHOWBTN = 17, -- 显示按钮 s->c
    FWXY_ADURL = 18, -- 广告URL s->c
    FWXY_BTNTOROOM = 19, -- 在游戏客户端但需大厅处理的按钮 s->c
    FWXY_TALKMSG = 20, -- 俏皮话 c->s s->c
    FWXY_DIALECT_TYPE = 27, -- 配音类型 c->s s->c 客户端可以选择多种播放语言时使用，逻辑负责记录和转发
    FWXY_KICK_PLAYER = 28, -- 包厢踢人 房主请求踢人 c->s
    FWXY_SERVICE_FEE = 29, -- 服务费 s->c
    FWXY_AVATAR_URL = 30, -- 玩家头像 c->s s->c 三方用户or自定义头像，逻辑负责记录和转发
    FWXY_COMMON_STRING = 31, -- 通用协议 c->s s->c (传递并分发一个字符串)
    FWXY_PLAYER_BREAK = 32, -- 玩家断线 s->c
    FWXY_PLAYER_RELINK = 33, -- 玩家重连回来 s->c
    FWXY_REQ_GAMEDATA = 34,
    FWXY_RESP_GAMEDATA = 35,
    FWXY_REPORT_GAMEDATA = 36,
    FWXY_REQ_CHECK_GAMEDATA = 37,
    FWXY_RESP_CHECK_GAMEDATA = 38,
    FWXY_PLAYER_GAME_INFO = 39,
    FWXY_FUPAN_HEAD = 200, -- 复盘头
    FWXY_FUPAN_BODY0 = 201, -- 复盘体
    FWXY_FUPAN_BODY1 = 202, -- 复盘体
    FWXY_FUPAN_BODY2 = 203, -- 复盘体
    FWXY_FUPAN_BODY3 = 204, -- 复盘体
    FWXY_FUPAN_MD5 = 205,
    FWXY_LAST = FWXY_LAST_ID -- 框架协议ID到此为止
}

FWProtocol.msgMessageBox = {
    cmdid = FWProtocol.FW_XYID.FWXY_MESSAGEBOX,
    SHOWMETHOD = {
        SM_DIALOG = 0x01, -- 对话框
        SM_FLOAT = 0x02, -- 浮动框
        SM_CHAT = 0x04, -- 聊天
        SM_LINK = 0x08, -- 链接
        SM_PAGE = 0x10, -- 网页
        SM_TALK = 0x20, -- 聊天
        SM_TIP = 0x40 -- 弹出消息框
    },
    -- 说明
    -- nShowMethod:SM_DIALOG	对话框消息
    -- nShowStyle:				对话框内容文本风格
    -- nPlayAction:			对话框关闭后的动作
    -- nTimeDelay:				对话框停留的时间
    -- nTextColor:				对话框内容文本颜色
    -- szTitle:				指定对话框标题
    -- szText:					指定对话框内容
    -- nShowMethod:SM_FLOAT	浮动消息
    -- nShowStyle:				浮动消息层内容文本风格
    -- nPlayAction:			浮动消息层结束后动作
    -- nTimeDelay:				浮动消息层停留的时间
    -- nTextColor:				浮动消息层内容文本颜色
    -- szTitle:				指定浮动消息层标题
    -- szText:					指定浮动消息层内容
    -- nShowMethod:SM_CHAT		聊天消息
    -- nShowStyle:				聊天消息内容文本风格
    -- nPlayAction:			聊天消息结束后动作
    -- nTimeDelay:				聊天消息停留多久才显示
    -- nTextColor:				聊天消息内容文本颜色
    -- szTitle:				指定聊天消息标题(标识发言者或系统消息)
    -- szText:					指定聊天消息内容
    -- nShowMethod:SM_LINK		链接消息
    -- nShowStyle:				链接消息风格
    -- nPlayAction:			链接消息结束后动作
    -- nTimeDelay:				链接消息停留多久才显示
    -- nTextColor:				链接消息内容文本颜色
    -- szTitle:				指定链接消息标题
    -- szText:					指定链接指向地址
    -- nShowMethod:SM_PAGE		网页显示
    -- nShowStyle:				网页显示风格
    -- nPlayAction:			网页显示结束后动作
    -- nTimeDelay:				网页停留多久才显示
    -- nTextColor:				网页内容文本颜色
    -- szTitle:				网页标题
    -- szText:					网页地址

    PLAYACTION = {
        PA_NORMAL = 0, -- 普通
        PA_QUIT = 1 -- 结束
    },
    nBrandID = 0, -- 区号
    nNumberID = 0, -- 数字id
    nShowMethod = 0x01,
    nShowStyle = 0,
    nPlayAction = 0,
    nTimeDelay = 0,
    nTextColor = 0,
    szTitleArr = {},
    szTextArr = {},

    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bis = un.network.OStream.new(buff)
        self.nBrandID = bis:readUInt32()
        self.nNumberID = bis:readUInt32()
        self.nShowMethod = bis:readUInt8()
        self.nShowStyle = bis:readUInt8()
        self.nPlayAction = bis:readUInt8()
        self.nTimeDelay = bis:readUInt32()
        self.nTextColor = bis:readUInt32()
        self.szTitle = bis:readString()
        if bis:getAvailableSize() > 0 then
            self.szText = bis:readString()
        end
        return self
    end,

    bostream = function(self)
        local bos = un.network.IStream.new()
        bos:writeUInt32(self.nBrandID)
        bos:writeUInt32(self.nNumberID)
        bos:writeInt8(self.nShowMethod)
        bos:writeInt8(self.nShowStyle)
        bos:writeInt8(self.nPlayAction)
        bos:writeUInt32(self.nTimeDelay)
        bos:writeUInt32(self.nTextColor)
        bos:writeString(self.szTitle)
        bos:writeString(self.szText)
        return bos
    end
}

FWProtocol.msgTableData = {
    cmdid = FWProtocol.FW_XYID.FWXY_TABLEDATA,
    nGameID = 0, -- 游戏id
    nRoomID = 0, -- 房间id
    nTableID = 0, -- 桌子id
    nRoomMode = 0, -- 房间模式
    nPlayType = 0, -- 游戏类型，积分、财富、双结算
    nMatchMode = 0, -- 比赛模式（现在没啥用了）
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nGameID = bi:readUInt32()
        self.nRoomID = bi:readUInt32()
        self.nTableID = bi:readUInt16()
        self.nRoomMode = bi:readUInt16()
        self.nPlayType = bi:readUInt16()
        self.nMatchMode = bi:readUInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

FWProtocol.msgPlayerItem = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERITEM,
    ShowItem = {
        SI_BRANDID = 0, -- 区域ID
        SI_NUMBERID = 1, -- 数字ID
        SI_NICKNAME = 2, -- 昵称
        SI_SEX = 3, -- 性别
        SI_VIPID = 4, -- 会员
        SI_BANKRICH = 5, -- 银行财富
        SI_RIGHT = 6, -- 权利
        SI_CHARM = 7, -- 魅力
        SI_CONTRIBUTION = 8, -- 贡献
        SI_YUANBAO = 9, -- 元宝
        SI_FAMILY = 10, -- 家族, 可修改
        SI_FAMILYDATEPOWER = 11, -- 家族内职务权利, 可修改
        SI_FACEID = 12, -- 面, 可修改
        SI_PLAYTYPESCORE = 13, -- 会根据不同PlayType取得不同的数值
        SI_GAMEMONEY = 14, -- 财富
        SI_GAMESCORE = 15, -- 积分
        SI_GAMEDOU = 16, -- 游戏豆
        SI_GAMEEXP = 17, -- 经验
        SI_WIN = 18, -- 胜数
        SI_LOSE = 19, -- 败数
        SI_DRAW = 20, -- 平局
        SI_ESCAPE = 21, -- 逃数
        SI_STATE = 22, -- 状态
        SI_SEAT = 23, -- 座位
        SI_CLIENTENTERED = 24, -- 游戏socket是否有效进入(客户端启动起来了并且通过了认证)
        SI_IP = 25, -- IP
        SI_IPNAME = 26, -- IPNAME
        SI_NETSPEED = 27, -- 网速
        SI_CLIENTTYPE = 28, -- 客户端是什么类型
        SI_HARDWAREFLAG = 29, -- 客户端带什么硬件, 可修改
        SI_ROBOT = 30, -- 是否机器人
        SI_ANONYMITY = 31, -- 是否是匿名
        SI_MONEYTITLE = 32, -- 财富等级
        SI_SCORETITLE = 33, -- 积分等级
        SI_EXPTITLE = 34, -- 经验等级
        SI_ROUNDCOUNT = 35, -- 总盘数
        SI_PLAYSTATE = 36, -- 游戏状态
        SI_FRIEND = 37, -- 好友
        SI_FOLLOW = 38, -- 关注
        SI_WIN_PRO = 39, -- 赢率
        SI_LOSE_PRO = 40, -- 输率
        SI_DRAW_PRO = 41, -- 平率
        SI_ESCAPE_PRO = 42, -- 逃跑率
        SI_SEE_NICKNAME = 43, -- 旁观对象昵称
        SI_COUNT = 44, -- 当前项总数
        SI_TOTAL = 64 -- 确定最大项数为32个(这样定义可以避免协议长度变化)
    },
    nShowItemCount = 0,
    nShowItems = {},
    nShowItemWidth = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nShowItemCount = bi:readUInt8()
        self.nShowItems = bi:readString()
        self.nShowItemWidth = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

FWProtocol.msgPlayerData = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERDATA,
    nBrandID = 0, -- 区号
    nNumberID = 0, -- 数字id
    szNickname = {}, -- 昵称
    szPTNumberID = "", -- pt账号
    nSex = "", -- 性别
    nVipID = 0,
    nBankRich = 0,
    nRight = 0,
    nCharm = 0,
    nContribution = 0,
    nYuanBao = 0,
    nFamily = 0,
    nFamilyDatePower = 0,
    nFaceID = 0,
    nPlayTypeScore = 0,
    nGameMoney = 0,
    nGameScore = 0,
    nGameDou = 0,
    nGameExp = 0,
    nWin = 0,
    nLose = 0,
    nDraw = 0,
    nEscape = 0,
    nState = 0,
    nSeat = 0,
    isClientEntered = 0,
    nIP = 0,
    szIPName = "",
    nNetSpeed = 0,
    nClientType = 0,
    nHardWareFlag = 0,
    nLeftBreakCount = 0,
    isRobot = 0,
    isAnonymity = false,
    szNickname2 = "",
    szHeadUrl = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        -- local tempNameByteArr = {}
        -- local length = bi:readInt8()
        -- if length > 0 then
        --     for i = 1, length do
        --         tempNameByteArr[#tempNameByteArr + 1] = bi:readUInt8()
        --     end
        -- end
        local tempNameByteArr = bi:readByteArray()
        self.szNickname = string.char(unpack(tempNameByteArr)) 
        self.szNickname = un.StringUtils.GB_18030_2000_TO_UTF8(self.szNickname)
        self.szPTNumberID = bi:readString()
        self.nSex = bi:readInt8()
        self.nVipID = bi:readInt32()
        self.nBankRich = bi:readInt64()
        self.nRight = bi:readInt32()
        self.nCharm = bi:readInt32()
        self.nContribution = bi:readInt32()
        self.nYuanBao = bi:readInt32()
        self.nFamily = bi:readUInt32()
        self.nFamilyDatePower = bi:readInt16()
        self.nFaceID = bi:readUInt32()
        self.nPlayTypeScore = bi:readInt64()
        self.nGameMoney = bi:readInt64()
        self.nGameScore = bi:readInt64()
        self.nGameDou = bi:readInt64()
        self.nGameExp = bi:readInt32()
        self.nWin = bi:readInt32()
        self.nLose = bi:readInt32()
        self.nDraw = bi:readInt32()
        self.nEscape = bi:readInt32()
        self.nState = bi:readInt16()
        self.nSeat = bi:readInt16()
        self.isClientEntered = bi:readInt32()
        self.nIP = bi:readInt32()
        self.szIPName = bi:readString()
        self.nNetSpeed = bi:readInt16()
        self.nClientType = bi:readInt32()
        self.nHardWareFlag = bi:readInt32()
        self.nLeftBreakCount = bi:readInt32()
        self.isRobot = bi:readInt32()
        self.isAnonymity = bi:readBool()
        if bi:getAvailableSize() > 0 then
            self.szNickname2 = bi:readString()
        end
        if bi:getAvailableSize() > 0 then
            self.szHeadUrl = bi:readString()
        end
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        return bo
    end
}

FWProtocol.msgPlayerDataEx = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERDATAEX,
    tagPlayerState = {
        psNull = 0, -- 空
        psWait = 1, -- 等待(按下开始按钮前)
        psReady = 2, -- 准备(按下开始按钮后)
        psPlaying = 3, -- 游戏(正在进行游戏)
        psEscape = 4, -- 逃跑(游戏被中断)
        psCount = 5 -- 提起退出
    },
    nBrandID = 0,
    nNumberID = 0,
    nPlayState = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        self.nPlayState = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        bo:writeInt8(self.nPlayState)
        return bo
    end
}

FWProtocol.msgPlayerEnter = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERENTER,
    nBrandID = 0,
    nNumberID = 0,
    IsContinue = 0, -- 是否断线重连后继续玩
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        self.IsContinue = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        bo:writeInt8(self.IsContinue)
        return bo
    end
}

FWProtocol.msgPlayerLeave = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERLEAVE,
    nBrandID = 0,
    nNumberID = 0,
    szCause = {}, -- 离开原因 最大长度64
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        self.szCause = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        bo:writeString(self.szCause)
        return bo
    end
}

FWProtocol.msgPlayerStart = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERSTART,
    nBrandID = 0,
    nNumberID = 0,
    nReserved = 0, -- 保留字段
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        self.nReserved = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        bo:writeUInt32(self.nReserved)
        return bo
    end
}

FWProtocol.msgPlayerTimer = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYERTIMER,
    nBrandID = 0,
    nNumberID = 0,
    nSecond = 0, -- 定时器时间（单位秒）
    nPower = 0, -- 定时器权限
    nSeat = 0, -- 定时器位置
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        self.nSecond = bi:readUInt32()
        self.nPower = bi:readUInt32()
        self.nSeat = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        bo:writeUInt32(self.nSecond)
        bo:writeUInt32(self.nPower)
        bo:writeUInt32(self.nSeat)
        return bo
    end
}

FWProtocol.msgStarted = {

    cmdid = FWProtocol.FW_XYID.FWXY_STARTED,

    nReserved = 0, -- 保留字段
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nReserved = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nReserved)
        return bo
    end
}

FWProtocol.msgEnding = {

    cmdid = FWProtocol.FW_XYID.FWXY_ENDING,
    EndGameType = {
        endGameType_Null = 0,
        endGameType_Forc = 1, -- 逃跑造成的结束
        endGameType_Normal = 2, -- 正常游戏结束
        endGameType_Count = 3
    },

    nReserved = 0, -- 保留字段
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nReserved = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nReserved)
        return bo
    end
}

FWProtocol.msgQueryAction = {

    cmdid = FWProtocol.FW_XYID.FWXY_QUERYACTION,

    nToBrandID = 0, -- 区号ID(发给谁)
    nToNumberID = 0,
    nFromBrandID = 0, -- 区号ID(来自谁)
    nFromNumberID = 0,
    nActionFlags = 0, -- 动作标志
    nActionStatus = 0, -- 动作状态
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nToBrandID = bi:readUInt32()
        self.nToNumberID = bi:readUInt32()
        self.nFromBrandID = bi:readUInt32()
        self.nFromNumberID = bi:readUInt32()
        self.nActionFlags = bi:readUInt32()
        self.nActionStatus = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nToBrandID)
        bo:writeUInt32(self.nToNumberID)
        bo:writeUInt32(self.nFromBrandID)
        bo:writeUInt32(self.nFromNumberID)
        bo:writeUInt32(self.nActionFlags)
        bo:writeUInt32(self.nActionStatus)
        return bo
    end
}

FWProtocol.msgReplyAction = {
    cmdid = FWProtocol.FW_XYID.FWXY_REPLYACTION,
    nToBrandID = 0, -- 区号ID(发给谁)
    nToNumberID = 0,
    nFromBrandID = 0, -- 区号ID(来自谁)
    nFromNumberID = 0,
    nActionFlags = 0, -- 动作标志
    nActionResult = 0, -- 动作结果
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nToBrandID = bi:readUInt32()
        self.nToNumberID = bi:readUInt32()
        self.nFromBrandID = bi:readUInt32()
        self.nFromNumberID = bi:readUInt32()
        self.nActionFlags = bi:readUInt32()
        self.nActionResult = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nToBrandID)
        bo:writeUInt32(self.nToNumberID)
        bo:writeUInt32(self.nFromBrandID)
        bo:writeUInt32(self.nFromNumberID)
        bo:writeUInt32(self.nActionFlags)
        bo:writeUInt32(self.nActionResult)
        return bo
    end
}

FWProtocol.msgReplyActionSetup = {
    cmdid = FWProtocol.FW_XYID.FWXY_REPLYACTIONSETUP,
    ACTION_SETUP = {
        RAS_ALL_NO = 0, -- 全部拒绝
        RAS_ALL_YES = 1, -- 全部同意
        RAS_ALL_ASK = 2 -- 全部转发目标确认
    },
    nActionFlags = 0, -- 动作标志
    nActionSetup = 0, -- 动作设定
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nActionFlags = bi:readUInt32()
        self.nActionSetup = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nActionFlags)
        bo:writeUInt32(self.nActionSetup)
        return bo
    end
}

FWProtocol.msgShowBtn = {
    cmdid = FWProtocol.FW_XYID.FWXY_SHOWBTN,
    BTN = {
        BTN_START = 0x01, -- 开始按钮
        BTN_MATCH = 0x02 -- 报名按钮
    },
    nBtns = 0, -- 按钮类型
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBtns = bi:readUInt8()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nBtns)
        return bo
    end
}

FWProtocol.msgAdUrl = {
    cmdid = FWProtocol.FW_XYID.FWXY_ADURL,
    AD_TYPE = {
        ADURL = 0, -- 右边广告
        ADTOP = 1, -- 上方广告
        ADGAME = 2 -- 游戏区广告
    },
    nFlag = 0,
    szUrl = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nFlag = bi:readUInt8()
        self.szUrl = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.nFlag)
        bo:writeString(self.szUrl)
        return bo
    end
}

FWProtocol.msgBtnToRoom = {
    cmdid = FWProtocol.FW_XYID.FWXY_BTNTOROOM,
    szKey = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.szKey = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.szKey)
        return bo
    end
}

FWProtocol.msgTalkMsg = {
    cmdid = FWProtocol.FW_XYID.FWXY_TALKMSG,
    CHANNEL = {USER = 0, TABLE = 1, ROOM = 2, SERVER = 3, GAME = 4, All = 5},
    COLORTYPE = {CT_COMMON = 0, CT_VIP = 1, CT_INFO = 2, CT_ERROR = 3, CT_WARNING = 4, CT_MANAGE_1 = 5, CT_MANAGE_2 = 6, CT_MANAGE_3 = 7, CT_AD_1 = 8, CT_AD_2 = 9, CT_AD_3 = 10, CT_SYSTEM_1 = 11, CT_SYSTEM_2 = 12, CT_SYSTEM_3 = 13, CT_OTHER = 14},
    m_channel = 0,
    m_color = 0,
    m_areaid = 0,
    m_numberid = 0,
    m_talkindex = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.m_channel = bi:readUInt8()
        self.m_color = bi:readUInt32()
        self.m_areaid = bi:readUInt32()
        self.m_numberid = bi:readUInt32()
        self.m_talkindex = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt8(self.m_channel)
        bo:writeUInt32(self.m_color)
        bo:writeUInt32(self.m_areaid)
        bo:writeUInt32(self.m_numberid)
        bo:writeInt16(self.m_talkindex)
        return bo
    end
}

FWProtocol.msgFpHead = {
    cmdid = FWProtocol.FW_XYID.FWXY_FUPAN_HEAD,
    len = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.len = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.len)
        return bo
    end
}

FWProtocol.msgFpBody0 = {
    cmdid = FWProtocol.FW_XYID.FWXY_FUPAN_BODY0,
    stream = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.stream = bi:readString(1024 * 2)
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.stream, 2048)
        return bo
    end
}

FWProtocol.msgFpBody1 = {
    cmdid = FWProtocol.FW_XYID.FWXY_FUPAN_BODY1,
    stream = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.stream = bi:readString(1024 * 2)
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.stream, 2048)
        return bo
    end
}

FWProtocol.msgFpBody2 = {
    cmdid = FWProtocol.FW_XYID.FWXY_FUPAN_BODY2,
    stream = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.stream = bi:readString(1024 * 2)
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.stream, 2048)
        return bo
    end
}

FWProtocol.msgFpBody3 = {
    cmdid = FWProtocol.FW_XYID.FWXY_FUPAN_BODY3,
    stream = {},
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.stream = bi:readString(1024 * 2)
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeString(self.stream, 2048)
        return bo
    end
}

FWProtocol.msgDialectType = {
    cmdid = FWProtocol.FW_XYID.FWXY_DIALECT_TYPE,
    nSeat = 0,
    nType = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt16()
        self.nType = bi:readInt16()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.nSeat)
        bo:writeInt16(self.nType)
        return bo
    end
}

FWProtocol.msgKickPlayer = {
    cmdid = FWProtocol.FW_XYID.FWXY_KICK_PLAYER,
    nBrandID = 0,
    nNumberID = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        return bo
    end
}

FWProtocol.msgServiceFee = {
    cmdid = FWProtocol.FW_XYID.FWXY_SERVICE_FEE,
    serviceFee = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.serviceFee = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.serviceFee)
        return bo
    end
}

FWProtocol.msgAvatarUrl = {
    cmdid = FWProtocol.FW_XYID.FWXY_AVATAR_URL,
    nSeat = 0,
    url = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt16()
        self.url = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.nSeat)
        bo:writeString(self.url)
        return bo
    end
}

FWProtocol.msgCommonString = {
    cmdid = FWProtocol.FW_XYID.FWXY_COMMON_STRING,
    TypeEnum = {
        headurl = 1, -- 头像地址
        gps = 2, -- gps
        chat = 3, -- 聊天
        charm = 4 -- 魅力值
    },
    nSeat = 0,
    nType = 0,
    strInfo = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nSeat = bi:readInt16()
        self.nType = bi:readInt32()
        self.strInfo = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt16(self.nSeat)
        bo:writeInt32(self.nType)
        bo:writeString(self.strInfo)
        return bo
    end
}

FWProtocol.msgPlayerBreak = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYER_BREAK,
    nBrandID = 0,
    nNumberID = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        return bo
    end
}

FWProtocol.msgPlayerRelink = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYER_RELINK,
    nBrandID = 0,
    nNumberID = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        return bo
    end
}

FWProtocol.msgReqGameData = {
    cmdid = FWProtocol.FW_XYID.FWXY_REQ_GAMEDATA,
    askid = 0,
    gameid = 0,
    roundid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.askid = bi:readInt32()
        self.gameid = bi:readInt32()
        self.roundid = bi:readInt64()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.askid)
        bo:writeInt32(self.gameid)
        bo:writeInt64(self.roundid)
        return bo
    end
}

FWProtocol.msgRespGameData = {
    cmdid = FWProtocol.FW_XYID.FWXY_RESP_GAMEDATA,
    askid = 0,
    flag = 0,
    totalcnt = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.askid = bi:readInt32()
        self.flag = bi:readInt32()
        self.totalcnt = bi:readInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.askid)
        bo:writeInt32(self.flag)
        bo:writeInt32(self.totalcnt)
        return bo
    end
}

FWProtocol.msgReportGameData = {
    cmdid = FWProtocol.FW_XYID.FWXY_REPORT_GAMEDATA,
    askid = 0,
    gameid = 0,
    roundid = 0,
    playercount = 0,
    current = 0,
    total = 0,
    length = 0,
    data = "",
    md5check = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.askid = bi:readInt32()
        self.gameid = bi:readInt32()
        self.roundid = bi:readInt64()
        self.playercount = bi:readInt32()
        self.current = bi:readInt32()
        self.total = bi:readInt32()
        self.length = bi:readInt32()
        self.data = bi:readString(self.length)
        self.md5check = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.askid)
        bo:writeInt32(self.gameid)
        bo:writeInt64(self.roundid)
        bo:writeInt32(self.playercount)
        bo:writeInt32(self.current)
        bo:writeInt32(self.total)
        bo:writeInt32(self.length)
        bo:writeString(self.data, self.length)
        bo:writeString(self.md5check)
        return bo
    end
}

FWProtocol.msgReqCheckGameData = {
    cmdid = FWProtocol.FW_XYID.FWXY_REQ_CHECK_GAMEDATA,
    gameid = 0,
    roundid = 0,
    md5check = "",
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.gameid = bi:readInt32()
        self.roundid = bi:readInt64()
        self.md5check = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.gameid)
        bo:writeInt64(self.roundid)
        bo:writeString(self.md5check)
        return bo
    end
}

FWProtocol.msgRespCheckGameData = {
    cmdid = FWProtocol.FW_XYID.FWXY_RESP_CHECK_GAMEDATA,
    flag = 0,
    gameid = 0,
    roundid = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.flag = bi:readInt32()
        self.gameid = bi:readInt32()
        self.roundid = bi:readInt64()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(self.flag)
        bo:writeInt32(self.gameid)
        bo:writeInt64(self.roundid)
        return bo
    end
}

FWProtocol.msgPlayerGameInfo = {
    cmdid = FWProtocol.FW_XYID.FWXY_PLAYER_GAME_INFO,
    nBrandID = 0,
    nNumberID = 0,
    nGameID = 0,
    start = 0,
    enter = 0,
    win = 0,
    total = 0,
    allstart = 0,
    allenter = 0,
    allwin = 0,
    alltotal = 0,
    viplevel = 0,
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.nBrandID = bi:readUInt32()
        self.nNumberID = bi:readUInt32()
        self.nGameID = bi:readUInt32()
        self.start = bi:readUInt32()
        self.enter = bi:readUInt32()
        self.win = bi:readUInt32()
        self.total = bi:readUInt32()
        self.allstart = bi:readUInt32()
        self.allenter = bi:readUInt32()
        self.allwin = bi:readUInt32()
        self.alltotal = bi:readUInt32()
        self.viplevel = bi:readUInt32()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeUInt32(self.nBrandID)
        bo:writeUInt32(self.nNumberID)
        bo:writeUInt32(self.nGameID)
        bo:writeUInt32(self.start)
        bo:writeUInt32(self.enter)
        bo:writeUInt32(self.win)
        bo:writeUInt32(self.total)
        bo:writeUInt32(self.allstart)
        bo:writeUInt32(self.allenter)
        bo:writeUInt32(self.allwin)
        bo:writeUInt32(self.alltotal)
        bo:writeUInt32(self.viplevel)
        return bo
    end
}

FWProtocol.msgFpMD5 = {
    cmdid = FWProtocol.FW_XYID.FWXY_FUPAN_MD5,
    saveid = 0,
    md5 = {}, -- 35位长度的数组
    new = function(self, o)
        local o = o or {}
        setmetatable(o, {__index = self})
        return o
    end,
    bistream = function(self, buff, bufflen)
        local bi = un.network.OStream.new(buff)
        self.saveid = bi:readInt64()
        self.md5 = bi:readString()
        return bi
    end,
    bostream = function(self)
        local bo = un.network.IStream.new()
        bo:writeInt32(1)
        bo:writeInt32(0)
        bo:writeString(self.md5)
        return bo
    end
}

return FWProtocol
