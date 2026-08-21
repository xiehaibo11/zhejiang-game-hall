local PlayerData = class("PlayerData")

--玩家游戏中状态的定义
PlayerData.USER_STATE = {
    US_STAND = 0,       -- 站立
    US_SITDOWN = 1,         -- 坐下,但房间中开始并没有按
    US_READY = 2,           -- 房间中按下了开始，准备好
    US_START = 3,           -- 参与游戏，这个状态的作用：1，全员启动模式中所有玩家准备后，那么所有玩家状态转化成此状态
    --  2，若玩家处于这个状态，但客户端很久没有启动，那么将被踢出游戏
    US_GAMING = 4,          -- 正在参与游戏中(在游戏中点了开始)
    US_SEEING = 5,          -- 旁观游戏
}

PlayerData.USER_STATEEX = {
    psNull=0,           -- 空
    psWait = 1,         -- 等待(按下开始按钮前)
    psReady = 2,        -- 准备(按下开始按钮后)
    psPlaying = 3,      -- 游戏(正在进行游戏)
    psEscape = 4,       -- 逃跑(游戏被中断)
    psExitEarly = 5,    -- 提前退出
}

PlayerData._nBrandID = 0
PlayerData._nNumberID = 0
    
PlayerData._szNickname = ""       -- 昵称
PlayerData._szPTNumberID = ""     -- PT数字帐号
PlayerData._nSex = ''             -- 性别, 男:'1' 女:'0' (变量内容为字符)

PlayerData._nVipID = 0            -- 得到会员, 可修改
PlayerData._nBankRich = 0         -- 银行财富, 可修改, 当前未实现

PlayerData._nRight = 0            -- 权利, 可修改
PlayerData._nCharm = 0            -- 魅力, 可修改
PlayerData._nContribution = 0     -- 贡献, 可修改
PlayerData._nYuanBao = 0          -- 获取元宝, 可修改

PlayerData._nFamily = 0           -- 家族, 可修改
PlayerData._nFamilyDatePower = 0  -- 家族内职务权利, 可修改
PlayerData._nFaceID = 0           -- 面, 可修改

PlayerData._nPlayTypeScore = 0    -- 会根据不同PlayType取得不同的数值
PlayerData._nGameMoney = 0        -- 游戏财富, 可修改
PlayerData._nGameScore = 0        -- 游戏优胜值, 可修改
PlayerData._nGameDou = 0          -- 游戏豆, 可修改
PlayerData._nGameExp = 0          -- 游戏经验, 可修改

PlayerData._nWin = 0              -- 游戏赢盘数, 可修改
PlayerData._nLose = 0             -- 游戏输盘数, 可修改
PlayerData._nDraw = 0             -- 游戏平局, 可修改
PlayerData._nEscape = 0           -- 游戏逃跑, 可修改

PlayerData._nState = 0            -- UserStateOfGame 玩家状态
PlayerData._nSeat = 0             -- 玩家座位
PlayerData._isClientEntered = 0   -- 游戏socket是否有效进入(客户端启动起来了并且通过了认证)

PlayerData._nIP = 0               -- IP，数字
PlayerData._szIPName = ""         -- IP，字符串
PlayerData._nNetSpeed = 0         -- 网速

PlayerData._nClientType = 0       -- 客户端是什么类型
PlayerData._nHardWareFlag = 0     -- 客户端带什么硬件, 可修改

PlayerData._nLeftBreakCount = 0   -- 剩余断线次数
PlayerData._isRobot = 0           -- 是否机器人
PlayerData._isAnonymity = false   -- 是否是匿名
PlayerData._nStateEx = 0          -- 玩家状态
PlayerData._szAvatarUrl = ""      -- 玩家头像

function PlayerData:updatePlayerData(playerDataMsg)
    self._nBrandID = playerDataMsg.nBrandID
    self._nNumberID = playerDataMsg.nNumberID
    self._szNickname = un.StringUtils.GB_18030_2000_TO_UTF8(playerDataMsg.szNickname)      
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
    if playerDataMsg.szNickname2 and playerDataMsg.szNickname2 ~= "" then
        self._szNickname2 = playerDataMsg.szNickname2
    end
end

function PlayerData:updatePlayerState(nPlayState)
    self._nStateEx = nPlayState
end

function PlayerData:updataAvatarUrl(url)
    self._szAvatarUrl = url
end       

function PlayerData:getBrandID()
    return self._nBrandID
end
  
function PlayerData:getNumberID()
    return self._nNumberID
end

function PlayerData:getNickName()
    if string.len(self._szNickname) > 16 then
        local validBytes = Game.StringFunction.getMinimumValidBytesUTF8(self._szNickname, 12)
        local subNickName = string.sub(self._szNickname,1,validBytes) .. "..."
        return subNickName
    end
    return self._szNickname
end

function PlayerData:getNickName2()
    if not (self._szNickname2 and self._szNickname2 ~= "") then
        return self:getNickName()
    end
    if string.len(self._szNickname2) > 18 then
        local validBytes = Game.StringFunction.getMinimumValidBytesUTF8(self._szNickname2, 12)
        local subNickName = string.sub(self._szNickname2,1,validBytes) .. "..."
        return subNickName
    end
    return self._szNickname2
end

function PlayerData:setNickName(nickname)
    self._szNickname = nickname
end 

function PlayerData:getPTNumberID()
    return self._szPTNumberID
end  

function PlayerData:getSex()
    if self._nSex == 1 or self._nSex == 49 then
        return 1
    elseif self._nSex == 0 or self._nSex == 48 then
        return 0
    else
        return 0
    end
    return self._nSex
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

function PlayerData:getSeat()
    return self._nSeat
end 

function PlayerData:isClientEntered()
    return self._isClientEntered
end 

function PlayerData:getIP()
    return self._nIP 
end        
  
function PlayerData:getIPName()
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
      
function PlayerData: getIsAnonymity() 
    return self._isAnonymity
end  

function PlayerData: getStateEx() 
    return self._nStateEx
end  

function PlayerData:getAvatarUrl()
    return self._szAvatarUrl
end

return PlayerData