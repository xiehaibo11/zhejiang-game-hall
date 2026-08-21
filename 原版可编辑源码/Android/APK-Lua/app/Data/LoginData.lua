local LoginData = class("LoginData")

function LoginData:ctor()
    self._isFirstLogin = false
end

function LoginData:resetData()
    
end

function LoginData:setLobbyID(lobbyID)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.LOBBYID, lobbyID)
end

function LoginData:getLobbyID()
    return XH.userDefault:getValue(XH.userDefault.KEY_ID.LOBBYID, 0)
end

function LoginData:setIsTodayFirstLogin(isFirstLogin)
    self._isFirstLogin = isFirstLogin
end

function LoginData:isTodayFirstLogin()
    return self._isFirstLogin
end

function LoginData:getSessionLoginDataFileName(lobbyID)
    lobbyID = lobbyID or self:getLobbyID()
    return cc.FileUtils:getInstance():getWritablePath() .. "SessionLoginData_" .. lobbyID .. ".dat"
end

function LoginData:clearSessionLoginInfo(lobbyID)
    local pathFile = self:getSessionLoginDataFileName(lobbyID)
    cc.FileUtils:getInstance():removeFile(pathFile)
end

function LoginData:cleanAllAreasSessionLoginInfo()
    for _, lobbyID in pairs(XH.LOBBY_ID) do
        self:clearSessionLoginInfo(lobbyID)
    end
end

function LoginData:getSessionLoginInfo()
    local pathFile = self:getSessionLoginDataFileName()
    if not cc.FileUtils:getInstance():isFileExist(pathFile) then
        return nil
    end
    local sessionInfo = {}
    sessionInfo.userid = "" 
    sessionInfo.password = ""
    sessionInfo.pid = ""
    sessionInfo.wechatUrl = ""
    sessionInfo.sessionTime = "0"
    local file = io.open(pathFile,"rb")
    local len = tonumber(file:read(2),10)
    sessionInfo.userid = file:read(len)
    len = tonumber(file:read(2),10)
    sessionInfo.password = file:read(len)
    len = tonumber(file:read(2),10)
    sessionInfo.pid = file:read(len)
    len = tonumber(file:read(3),10)
    sessionInfo.wechatUrl = file:read(len) 
    local lenBuffer = file:read(3)
    if lenBuffer then
        len = tonumber(lenBuffer,10)
        sessionInfo.unionId = file:read(len)
    end
    lenBuffer = file:read(2)
    if lenBuffer then
        len = tonumber(lenBuffer,10)
        sessionInfo.sessionTime = file:read(len)
    end
    file:close()
    return sessionInfo
end

function LoginData:saveSessionLoginInfo(sessionInfo)
    sessionInfo = sessionInfo or {}
    local pathFile = self:getSessionLoginDataFileName()
    local file = io.open(pathFile,"wb+")
    local userid = sessionInfo.userid or XH.playerData:getUserID()
    file:write(string.format("%02d",string.len(userid))) 
    file:write(userid)
    local password = sessionInfo.password or XH.playerData:getSessionID(false)
    file:write(string.format("%02d",string.len(password)))
    file:write(password)
    local pid = sessionInfo.pid or XH.playerData:getPid()
    file:write(string.format("%02d",string.len(pid)))
    file:write(pid)
    local wechatUrl = sessionInfo.wechatUrl or XH.playerData:getWeChatURL() or ""
    file:write(string.format("%03d",string.len(wechatUrl)))
    file:write(wechatUrl)
    local unionId = sessionInfo.unionId or XH.playerData:getUnionId()
    file:write(string.format("%03d",string.len(unionId)))
    file:write(unionId)
    local sessionTime = sessionInfo.sessionTime or 0
    file:write(string.format("%02d",string.len(sessionTime)))
    file:write(sessionTime)
    file:close()
end

function LoginData:getLocalSessionTime()
    local sessionInfo = self:getSessionLoginInfo()
    if sessionInfo and sessionInfo.sessionTime then
        return tonumber(sessionInfo.sessionTime)
    end
    return 0
end

function LoginData:cleanLocalSessionTime()
    local sessionInfo = self:getSessionLoginInfo()
    if not sessionInfo then
        return
    end
    sessionInfo.sessionTime = "0"
    self:saveSessionLoginInfo(sessionInfo)
end

return LoginData