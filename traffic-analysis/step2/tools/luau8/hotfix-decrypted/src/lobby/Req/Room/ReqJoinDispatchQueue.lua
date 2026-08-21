local ReqJoinDispatchQueue = class("ReqJoinDispatchQueue", XH.ReqProtocol)
--local GlobalCfg = require("app.Config.GlobalConfig")
--local DEBUG = GlobalCfg.IsDebug
 
function ReqJoinDispatchQueue:ctor()
    ReqJoinDispatchQueue.super.ctor(self)
end

function ReqJoinDispatchQueue:getPlayerHeadUrl()
    local playerData = XH.playerData
    return playerData:getWeChatURL() or ""
end

function ReqJoinDispatchQueue:start(gameId,chaircnt,srsGroupId,roomFlag,timeoutTime)
    local srsGroupID = srsGroupId
    if ReqJoinDispatchQueue.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end

    local reqJoin = XH.DispatchProtocol.ReqJoinDispatchQueue:new()
    reqJoin.askid = os.time()
    reqJoin.gameid = gameId
    reqJoin.roomflag = roomFlag or -1
    reqJoin.chaircnt = chaircnt or -1
    reqJoin.clienttype = XH.DispatchProtocol.CLIENTTYPE.MOBILE
    reqJoin.hardwareflag = XH.DispatchProtocol.HARDWAREFLAG.HF_NONE
    reqJoin.channelid = XH.SysTool:getChannelID()
    reqJoin.osver = XH.SysTool:GetOsVersion()
    reqJoin.identify = XH.SysTool:GetDevid()
    reqJoin.szheadurl = self:getPlayerHeadUrl()
    local srslobby = 0

    print("srsGroupID:"..srsGroupID .. "  reqJoin.processid:" .. reqJoin.processid)
    self:sendMsg(reqJoin, XH.DispatchProtocol.RespJoinDispatchQueue, srsGroupID, srslobby)
end

function ReqJoinDispatchQueue:onMsgReceive(msgData)
    local errorcode = msgData.errorcode
    print("onReceiveJoinDispatchQueue errorcode:"..errorcode)
    if errorcode == XH.DispatchProtocol.ERRORCODE.SUCCESS then
        self:success(msgData)
    elseif errorcode == XH.DispatchProtocol.ERRORCODE.GOLDLOWLIMIT then
        self:fail(msgData)
    elseif errorcode == XH.DispatchProtocol.ERRORCODE.GOLDOVERLIMIT then
        self:fail(msgData)
    elseif errorcode == XH.DispatchProtocol.ERRORCODE.EXISTQUEUE then
        self:fail(msgData)
    elseif errorcode == XH.DispatchProtocol.ERRORCODE.EXISTGAME then
        self:fail(msgData)
    else
        local msg = self:getErrInfoMsg(errorcode) or ""
        if msg == "" then
            msg = "加入队列失败:" .. errorcode
        end
        self:fail(msg)
    end
end

function ReqJoinDispatchQueue:getErrInfoMsg(flag)
    if flag then
         for i,v in pairs(XH.DispatchProtocol.ERRORCODE) do
            if flag == v then
                return XH.ConstString.getStr(i)
            end
         end
    end
    return ""
end

return ReqJoinDispatchQueue�	