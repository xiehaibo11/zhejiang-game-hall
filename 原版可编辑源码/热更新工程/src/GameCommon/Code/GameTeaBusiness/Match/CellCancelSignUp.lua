local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellCancelSignUp = class("CellCancelSignUp", CellProtocol)

function CellCancelSignUp:ctor()
    CellCancelSignUp.super.ctor(self)
end

function CellCancelSignUp:start(timeoutTime, processID, appID, matchid, subid, srsGroupID)
    if CellCancelSignUp.super.start(self, timeoutTime, srsGroupID,processID) == false then
        return
    end
    
    local repJoin = XH.bf.Match32XY.ReqCancelMatch:new()
    
    repJoin.matchid = matchid or 0
    repJoin.subid = subid or 0
    
    XH.GT.addProtocolScriptFuncByObj(self,self.onReceiveCancelSignUp,srsGroupID,processID)
    XH.GT.sendPacket(repJoin,appID or XH.GT.getAppID(srsGroupID),srsGroupID,processID)
end

function CellCancelSignUp:onReceiveCancelSignUp(XYID, buff, len)
    if XYID ~= XH.bf.Match32XY.RespCancelMatch.XY_ID then
        return
    end

    local respCancelSignup = XH.bf.Match32XY.RespCancelMatch:new()
    respCancelSignup:bistream(buff, len)
        
    if respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.SUCCESS then
        self:success(respCancelSignup)
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.NOSIGNUP then
        self:setMessage("matchid不存在")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.NOMATCHID then
        self:setMessage("matchid不存在")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.NOSUBID then
        self:setMessage("subid不存在")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.RETURNFEEFAILED then
        self:setMessage("退还报名费失败")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.REFUSECANCEL then
        self:setMessage("该比赛不允许退赛")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.ERRMATCHSTATE then
        self:setMessage("比赛状态不正确")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.DBNOMATCHID then
        self:setMessage("db返回matchid不正确")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.DBNOSUBID then
        self:setMessage("db返回subid不正确")
        self:fail()
    elseif respCancelSignup.flag == XH.bf.Match32XY.RespCancelMatch.FLAG.NOMATCHCONFIG then
        self:setMessage("未找到比赛配置信息")
        self:fail()
    else
        self:setMessage("退赛失败("..respCancelSignup.flag..")")
        self:fail()    
    end
end

return CellCancelSignUp