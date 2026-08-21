local PlayerData = CF.gameClass("PlayerData", CF.ModuleBase)

--玩家游戏中状态的定义
PlayerData.USER_STATE = {
    US_STAND = 0,       -- 站立
    US_SITDOWN = 1,         -- 坐下,但房间中开始并没有按
    US_READY = 2,           -- 房间中按下了开始，准备好
    US_START = 3,           -- 参与游戏，这个状态的作用：1，全员启动模式中所有玩家准备后，那么所有玩家状态转化成此状态
                            --  2，若玩家处于这个状态，但客户端很久没有启动，那么将被踢出游戏
    US_GAMING = 4,          -- 正在参与游戏中(在游戏中点了开始)
    US_SEEING = 5 -- 旁观游戏
}

PlayerData.USER_STATEEX = {
    psNull = 0, -- 空
    psWait = 1,         -- 等待(按下开始按钮前)
    psReady = 2,        -- 准备(按下开始按钮后)
    psPlaying = 3,      -- 游戏(正在进行游戏)
    psEscape = 4,       -- 逃跑(游戏被中断)
    psExitEarly = 5 -- 提前退出
}

PlayerData.EVENT_CHANGED = "EVENT_CHANGED"
PlayerData.EVENT_WIRE_BREAK_CHANGED = "EVENT_WIRE_BREAK_CHANGED"
PlayerData.EVENT_READY_STATE_CHANGED = "EVENT_READY_STATE_CHANGED"
PlayerData.EVENT_HEAD_FRAME_CHANGED = "EVENT_HEAD_FRAME_CHANGED"
PlayerData.EVENT_USER_TITLE_CHANGED = "EVENT_USER_TITLE_CHANGED"
PlayerData.EVENT_CARD_HOLDER_CHANGED = "EVENT_CARD_HOLDER_CHANGED"
PlayerData.EVENT_MAH_BACK_CHANGED = "EVENT_MAH_BACK_CHANGED"
PlayerData.EVENT_TABLE_BG_PROP_CHANGED = "EVENT_TABLE_BG_PROP_CHANGED"
PlayerData.EVENT_ENTER_ANI_PROP_CHANGED = "EVENT_ENTER_ANI_PROP_CHANGED"

function PlayerData:ctor()
    PlayerData.super.ctor(self)
    self:initDatas()
end

function PlayerData:initDatas()
    self._nBrandID = 0
    self._nNumberID = 0

    self._szNickname = ""       -- 昵称
    self._szNickname2 = ""
    self._szPTNumberID = ""     -- PT数字帐号
    self._nSex = "" -- 性别, 男:'1' 女:'0' (变量内容为字符)

    self._nVipID = 0            -- 得到会员, 可修改
    self._nBankRich = 0

    self._nRight = 0            -- 权利, 可修改
    self._nCharm = 0            -- 魅力, 可修改
    self._nContribution = 0
    self._nYuanBao = 0          -- 获取元宝, 可修改

    self._nFamily = 0           -- 家族, 可修改
    self._nFamilyDatePower = 0  -- 家族内职务权利, 可修改
    self._nFaceID = 0           -- 面, 可修改

    self._nPlayTypeScore = 0    -- 会根据不同PlayType取得不同的数值
    self._nGameMoney = 0        -- 游戏财富, 可修改
    self._nGameScore = 0        -- 游戏优胜值, 可修改
    self._nGameDou = 0          -- 游戏豆, 可修改
    self._nGameExp = 0          -- 游戏经验, 可修改

    self._nWin = 0              -- 游戏胜盘数, 可修改
    self._nLose = 0             -- 游戏负盘数, 可修改
    self._nDraw = 0             -- 游戏平局, 可修改
    self._nEscape = 0           -- 游戏逃跑, 可修改

    self._nState = 0            -- UserStateOfGame 玩家状态
    self._nSeat = 0             -- 玩家座位
    self._isClientEntered = 0   -- 游戏socket是否有效进入(客户端启动起来了并且通过了认证)

    self._nIP = 0               -- IP，数字
    self._szIPName = ""         -- IP，字符串
    self._nNetSpeed = 0         -- 网速

    self._nClientType = 0       -- 客户端是什么类型
    self._nHardWareFlag = 0     -- 客户端带什么硬件, 可修改

    self._nLeftBreakCount = 0   -- 剩余断线次数
    self._isRobot = 0           -- 是否机器人
    self._isAnonymity = false   -- 是否是匿名
    self._nStateEx = 0          -- 玩家状态
    self._szAvatarUrl = ""      -- 玩家头像

    --是否离线状态 --add by louis
    self._isWireBreak = false

    self._playerHeartTime = 0
    self._gpsInfo = nil
    self._headFrameData = nil
    self._userTitleData = nil
    self._cardHolderData = nil
    self._mahBackData = nil
    self._tableBgData = nil
    self._enterAniData = nil
end

function PlayerData:cloneDataEx(playerData)
    self._nStateEx = clone(playerData:getStateEx())
    self._playerHeartTime = clone(playerData:getPlayerHeartTime())
    self._gpsInfo = clone(playerData:getGpsInfo())
    self._headFrameData = clone(playerData:getHeadFrameData())
    self._userTitleData = clone(playerData:getUserTitleData())
    self._cardHolderData = clone(playerData:getCardHolderData())
    self._mahBackData = clone(playerData:getMahBackData())
    self._tableBgData = clone(playerData:getTableBgData())
    self._enterAniData = clone(playerData:getEnterAniData())
end

function PlayerData:initFromServerData(playerDataMsg)
    self._nBrandID = playerDataMsg.nBrandID
    self._nNumberID = playerDataMsg.nNumberID
    if CF.roomData:is50() then
        self._szNickname = playerDataMsg.szNickname
    else
        self._szNickname = CF.SysTool.GB_18030_2000_TO_UTF8(playerDataMsg.szNickname)
    end
    self._szNickname2 = playerDataMsg.szNickname2
    self._szPTNumberID = playerDataMsg.szPTNumberID
    self._nSex = playerDataMsg.nSex
    self._nVipID = playerDataMsg.nVipID
    self._nBankRich = playerDataMsg.nBankRich
    self._nRight = playerDataMsg.nRight
    self._nCharm = playerDataMsg.nCharm
    self._nContribution = playerDataMsg.nContribution
    self._nYuanBao = playerDataMsg.nYuanBao
    self._nFamily = playerDataMsg.nFamily
    self._nFamilyDatePower = playerDataMsg.nFamilyDatePower
    self._nFaceID = playerDataMsg.nFaceID
    self._nPlayTypeScore = playerDataMsg.nPlayTypeScore
    self._nGameMoney = playerDataMsg.nGameMoney
    self._nGameScore = playerDataMsg.nGameScore
    self._nGameDou = playerDataMsg.nGameDou
    self._nGameExp = playerDataMsg.nGameExp
    self._nWin = playerDataMsg.nWin
    self._nLose = playerDataMsg.nLose
    self._nDraw = playerDataMsg.nDraw
    self._nEscape = playerDataMsg.nEscape
    self._nState = playerDataMsg.nState
    self._nSeat = playerDataMsg.nSeat
    self._isClientEntered = playerDataMsg.isClientEntered
    self._nIP = playerDataMsg.nIP
    self._szIPName = playerDataMsg.szIPName
    self._nNetSpeed = playerDataMsg.nNetSpeed
    self._nClientType = playerDataMsg.nClientType
    self._nHardWareFlag = playerDataMsg.nHardWareFlag
    self._nLeftBreakCount = playerDataMsg.nLeftBreakCount
    self._isRobot = playerDataMsg.isRobot
    self._isAnonymity = playerDataMsg.isAnonymity
    if playerDataMsg.szHeadUrl and playerDataMsg.szHeadUrl ~= "" then
        self._szAvatarUrl = playerDataMsg.szHeadUrl
    end

    -- self._playerHeartTime = 0

    self:dispatch()
end

function PlayerData:updatePlayerState(nPlayState)
    self._nStateEx = nPlayState
    print("玩家游戏状态变更：", nPlayState)
    self:dispatchEvent({name = self.EVENT_READY_STATE_CHANGED})
end

function PlayerData:updataAvatarUrl(url)
    self._szAvatarUrl = url
    self:dispatch()
end

function PlayerData:getBrandID()
    return self._nBrandID
end

function PlayerData:getNumberID()
    if self._szPTNumberID and self._szPTNumberID ~= '' then
        return tonumber(self._szPTNumberID) or self._nNumberID
    end
    return self._nNumberID
end

function PlayerData:getNickName()
    if CF.roomData:is50() then
        return self:getNickName50()
    end
    return self:getNickName2()
end

function PlayerData:getNickName50()
    if string.len(self._szNickname) > 12 then
        local validBytes = CF.StringTool.getMinimumValidBytesUTF8(self._szNickname, 12)
        local subNickName = string.sub(self._szNickname, 1, validBytes) .. "..."
        return subNickName
    end
    return self._szNickname
end

function PlayerData:getNickName2()
    if string.len(self._szNickname2) > 12 then
        local validBytes = CF.StringTool.getMinimumValidBytesUTF8(self._szNickname2, 12)
        local subNickName = string.sub(self._szNickname2, 1, validBytes) .. "..."
        return subNickName
    end
    return self._szNickname2
end

function PlayerData:setNickName(nickname)
    self._szNickname = nickname
    self:dispatch()
end

function PlayerData:getPTNumberID()
    return self._szPTNumberID
end

function PlayerData:setSex(sex)
    self._nSex = sex
end

function PlayerData:getSex()
    if self._nSex == 1 or self._nSex == 49 then
        return 1
    elseif self._nSex == 0 or self._nSex == 48 then
        return 0
    else
        return 0
    end
    -- return self._nSex
end

function PlayerData:getVipID()
    return self._nVipID
end

function PlayerData:getBankRich()
    return self._nBankRich
end

function PlayerData:getRight()
    return self._nRight
end

function PlayerData:getCharm()
    return self._nCharm
end

function PlayerData:getContribution()
    return self._nContribution
end

function PlayerData:getYuanBao()
    return self._nYuanBao
end

function PlayerData:getFamily()
    return self._nFamily
end

function PlayerData:getFamilyDatePower()
    return self._nFamilyDatePower
end

function PlayerData:getFaceID()
    return self._nFaceID
end

function PlayerData:getPlayTypeScore()
    if CF.roomData:is50() then
        return self._nPlayTypeScore
    end
    if CF.roomData:isGoldRoom() then
        return self:getGameDou()
    end
    return self._nPlayTypeScore
end

function PlayerData:getGameMoney()
    return self._nGameMoney
end

function PlayerData:getGameScore()
    return self._nGameScore
end

function PlayerData:getGameDou()
    return self._nGameDou
end

function PlayerData:getGameExp()
    return self._nGameExp
end

function PlayerData:getWin()
    return self._nWin
end

function PlayerData:getLose()
    return self._nLose
end

function PlayerData:getDraw()
    return self._nDraw
end

function PlayerData:getEscape()
    return self._nEscape
end

function PlayerData:getState()
    return self._nState
end

function PlayerData:isSeeing()
    return self:getState() == self.USER_STATE.US_SEEING
end

function PlayerData:getSeat()
    return self._nSeat
end

function PlayerData:setSeat(seat)
    self._nSeat = seat or self._nSeat
end

function PlayerData:isClientEntered()
    return self._isClientEntered
end

function PlayerData:getIP()
    return self._nIP
end

function PlayerData:getIPName()
    --315敏感信息处理
    local ipList = string.split(self._szIPName, ".")
    local ret = ""
    for i = 1, #ipList - 1 do
        local str = ipList[i]
        local len = string.len(str)
        ret = ret .. "*" .. string.sub(str, 2, len) .. "."
    end
    ret = ret .. (ipList[#ipList] or "")
    self._szIPName = ret
    return self._szIPName
end

function PlayerData:getNetSpeed()
    return self._nNetSpeed
end

function PlayerData:getClientType()
    return self._nClientType
end

function PlayerData:getHardWareFlag()
    return self._nHardWareFlag
end

function PlayerData:getLeftBreakCount()
    return self._nLeftBreakCount
end

function PlayerData:getIsRobot()
    return self._isRobot
end

function PlayerData:getIsAnonymity()
    return self._isAnonymity
end

function PlayerData:getStateEx()
    return self._nStateEx
end

function PlayerData:getAvatarUrl()
    local url = self._szAvatarUrl
    if url == "" then
        if self:getSex() > 0 then
            url = "https://palmstatic.hzxuanming.com/Download/avatar/default/head_boy.png"
        else
            url = "https://palmstatic.hzxuanming.com/Download/avatar/default/head_girl.png"
        end
    end
	local rtn = CF.StringTool.urlToHttps(url)
    return rtn
end

function PlayerData:getIsWireBreak()
    return self._isWireBreak
end

function PlayerData:setIsWireBreak(isBreak)
    self._isWireBreak = isBreak
    self:dispatchEvent({name = self.EVENT_WIRE_BREAK_CHANGED})
end

function PlayerData:dispatch()
    self:dispatchEvent({name = self.EVENT_CHANGED})
end

function PlayerData:setPlayerHeartTime(time)
    self._playerHeartTime = time
end

function PlayerData:getPlayerHeartTime()
    return self._playerHeartTime
end

function PlayerData:setGpsInfo(tData)
    self._gpsInfo = tData or {}
end

function PlayerData:getGpsInfo()
    return self._gpsInfo
end

function PlayerData:setHeadFrameData(tData)
    self._headFrameData = tData or {}
    self:dispatchEvent({name = self.EVENT_HEAD_FRAME_CHANGED})
end

function PlayerData:getHeadFrameData()
    return self._headFrameData
end

function PlayerData:setUserTitleData(tData)
    self._userTitleData = tData or {}
    self:dispatchEvent({name = self.EVENT_USER_TITLE_CHANGED, data = self._userTitleData})
end

function PlayerData:getUserTitleData()
    return self._userTitleData
end

function PlayerData:setCardHolderData(tData)
    self._cardHolderData = tData or {}
    self:dispatchEvent({name = self.EVENT_CARD_HOLDER_CHANGED})
end

function PlayerData:getCardHolderData()
    return self._cardHolderData
end

function PlayerData:setMahBackData(data)
    self._mahBackData = data
    self:dispatchEvent({name = self.EVENT_MAH_BACK_CHANGED})
end

function PlayerData:getMahBackData()
    return self._mahBackData
end

function PlayerData:setTableBgData(data)
    self._tableBgData = data
    self:dispatchEvent({name = self.EVENT_TABLE_BG_PROP_CHANGED})
end

function PlayerData:getTableBgData()
    return self._tableBgData
end

function PlayerData:setEnterAniData(data)
    self._enterAniData = data
    self:dispatchEvent({name = self.EVENT_ENTER_ANI_PROP_CHANGED})
end

function PlayerData:getEnterAniData()
    return self._enterAniData
end

return PlayerData�5