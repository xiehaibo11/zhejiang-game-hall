local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellReqSignUpMatch = class("CellReqSignUpMatch", CellProtocol)

function CellReqSignUpMatch:ctor()
    CellReqSignUpMatch.super.ctor(self)
    self._matchID = 0
    self._subID = 0
    self._processID = 0
end

function CellReqSignUpMatch:start(timeoutTime, processID, appID, signInMatch, srsGroupID)
    processID = processID or 0
    self._processID = processID
    appID = appID or 0
    srsGroupID = nil
    if CellReqSignUpMatch.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end

    local reqSignUpMatch = XH.bf.Match32XY.ReqSignUpMatch:new()
    reqSignUpMatch.askid = 0
    reqSignUpMatch.matchid = signInMatch.matchid
    reqSignUpMatch.subid = signInMatch.subid
    reqSignUpMatch.signuptype = signInMatch.signuptype
    reqSignUpMatch.idx = signInMatch.idx
    reqSignUpMatch.head =signInMatch.head
    
    -- ID 备份
    self._matchID = signInMatch.matchid
    self._subID = signInMatch.subid
    
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveSignInUpMatch,srsGroupID,processID)
    XH.GT.sendPacket(reqSignUpMatch,appID,srsGroupID,processID)
end

function CellReqSignUpMatch:onReceiveSignInUpMatch(XYID, buff, len, processID)
    if processID ~= self._processID then
        return
    end
    if XYID ~= XH.bf.Match32XY.RespSignUpMatch.XY_ID then
        return
    end

    local respSignUpMatch = XH.bf.Match32XY.RespSignUpMatch:new()
    respSignUpMatch:bistream(buff, len)

    if respSignUpMatch.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.SUCCESS then  
        respSignUpMatch.matchid = self._matchID
        respSignUpMatch.subid = self._subID
        self:success(respSignUpMatch)
    elseif respSignUpMatch.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.NOMATCHID then
        self:setMessage("比赛ID 不存在")
        self:fail()
    elseif respSignUpMatch.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.NOSUBID then
        self:setMessage("比赛进程ID 不存在")
        self:fail()
    elseif respSignUpMatch.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.NOENOUGHSR then
        self:setMessage("比赛报名银子不足")
        self:fail()
    elseif respSignUpMatch.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.NOENOUGHPROPS then
        self:setMessage("比赛报名道具不足")
        self:fail()
    elseif respSignUpMatch.flag == XH.bf.Match32XY.RespSignUpMatch.FLAG.FAILED then
        self:setMessage("比赛报名失败")
        self:fail()
    end
end

return CellReqSignUpMatch