local RoomPlayerData = NG.GAME.gameClass("RoomPlayerData", NG.ModuleBase)

RoomPlayerData.ENUM_PLAYER_STATE = {
    KW_PLAYER_STATE_NULL = 0,           --空
    KW_PLAYER_STATE_WAIT = 1,           --等待(按下开始按钮前)
    KW_PLAYER_STATE_READY = 2,          --准备(按下开始按钮后)
    KW_PLAYER_STATE_PLAYING = 3,        --游戏(正在进行游戏)
    KW_PLAYER_STATE_ESCAPE = 4,         --逃跑(游戏被中断)
    KW_PLAYER_STATE_EXITEARLY = 5,      --提前退出
    KW_PLAYER_STATE_COUNT = 6,          --
}

function RoomPlayerData:ctor()
    RoomPlayerData.super.ctor(self)

    self:initData()
end

function RoomPlayerData:initData()
    self._nickname = ""
    self._userId = ""

	self._sex = 1-- 1--male男  其余--female女
	self._avatar = ""

    self._sr = 0

    self._areaid = 0--区号,即areaid
    self._numid = 0--数字账号

    self._shortName = ""   
    self._right = ""                  --基本权限,复杂的权限由另外的协议传
    self._exp = 0                      --经验
    self._win = 0
    self._lose = 0
    self._draw = 0
    self._escape = 0          --赢输和逃
    self._state = 0                    --玩家状态
    self._sitorder = 0                 --桌上的座位号
    self._netspeed = 0                  --网速
    self._vipid = 0                     --会员号
    self._clienttype = 0                --客户端类型(见CLIENTTYPE定义)
    self._gift = 0
    self._szIPName = ""
    self._gameMoney = 0

    self._localSeat = -1
    self._headUrl = ""

    self._gong = 0

    self._playState = RoomPlayerData.ENUM_PLAYER_STATE.KW_PLAYER_STATE_NULL;

    self._isWireBreak = false --玩家是否断线

    self._charm = 0 --魅力值
    self._initExp = 0 --初始化积分
end

function RoomPlayerData:setLocalSeat(seat)
    self._localSeat = seat
end

function RoomPlayerData:getLocalSeat()
    return self._localSeat
end

function RoomPlayerData:getAreaID()
    return self._areaid
end

function RoomPlayerData:getNickname()
    return self._nickname
end

function RoomPlayerData:setNickname(name)
    self._nickname = name
end

function RoomPlayerData:getNumId()
    return self._numid
end

function RoomPlayerData:setNumId(numid)
    self._numid = numid
end

function RoomPlayerData:getUserId()
    return self._userId
end

function RoomPlayerData:setUserId(userid)
    self._userId = userid
end

function RoomPlayerData:getSr()
    return self._sr
end

function RoomPlayerData:setSr(sr)
    self._sr = sr
end

function RoomPlayerData:getGong()
    return self._gong
end

function RoomPlayerData:setGong(gong)
    self._gong = gong
end

function RoomPlayerData:setData(data)
    self._areaid = data.nBrandID                 
    self._numid = data.nNumberID                  
    self._nickname = data.szNickname
    self._right = data.nRight                  
    self._sex = data.nSex                   
    self._sr = data.nPlayTypeScore          
    self._exp = data.nGameExp                      
    self._win = data.nWin
    self._lose = data.nLose
    self._draw = data.nDraw
    self._escape = data.nEscape           
    self._state = data.nState                     
    self._sitorder = data.nSeat                 
    self._netspeed = data.nNetSpeed                  
    self._vipid = data.nVipID                     
    self._clienttype = data.nClientType                
    self._gift = data.nYuanBao
    self._szIPName = data.szIPName
    self._gameMoney = data.nGameMoney
    self._charm = data.nCharm
    if data.szNickname2 ~= "" then
        self._nickname = data.szNickname2
    end
    self._headUrl = data.szHeadUrl
end

function RoomPlayerData:getExp()
    return self._exp
end

function RoomPlayerData:getHeadUrl()
    return self._headUrl
end

function RoomPlayerData:setDataEx(data)
    self._playState = data.nPlayState -- 游戏状态
end

function RoomPlayerData:getPlayState()
    return self._playState
end

function RoomPlayerData:setPlusData(data)
    self._nickname = data.nickname
    self._userId = data.userid
    self._sex = data.sex
end

function RoomPlayerData:getSex()
    return self._sex
end

function RoomPlayerData:setWireBreak(isWireBreak)
    self._isWireBreak = isWireBreak
end

function RoomPlayerData:getPlayerBaseInfoCopy()
    return {
        ["numid"] = self._numid,
        ["nickname"] = self._nickname,
        ["shortName"] = self._shortName,
        ["sitorder"] = self._sitorder
    }
end

function RoomPlayerData:setInitExp(exp)
    self._initExp = exp
end

function RoomPlayerData:getInitExp()
    return self._initExp
end

function RoomPlayerData:isVaildPlayer()
    return self._numid ~= nil and self._numid > 0
end

return RoomPlayerData