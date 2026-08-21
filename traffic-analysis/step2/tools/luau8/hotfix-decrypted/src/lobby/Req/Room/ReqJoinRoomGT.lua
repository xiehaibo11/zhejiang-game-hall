local ReqJoinRoomGT = class("ReqJoinRoomGT", XH.ReqProtocol)

function ReqJoinRoomGT:ctor()
    ReqJoinRoomGT.super.ctor(self)
    self._retMsgData = {}
    self._roomMode = 4
end

function ReqJoinRoomGT:start(roomID,appID,srsGroupID,timeoutTime, param)
    if ReqJoinRoomGT.super.start(self, timeoutTime, srsGroupID) == false then
        return
    end
    self._retMsgData = {}
    self._srsGroupID = srsGroupID
    self._levelInfo = param and param.levelInfo
    local hardWareFlag = XH.GameProtocolGT.ReqJoinRoom.HARDWAREFLAG.HF_NONE
    if self._levelInfo then
        self._roomMode = self._levelInfo.roommode or 4
        hardWareFlag = self._levelInfo.vrRoomLv or hardWareFlag
    end
    local reqJoinRoom = XH.GameProtocolGT.ReqJoinRoom:new()
    reqJoinRoom.roomID = roomID
    reqJoinRoom.clientType = XH.GameProtocolGT.ReqJoinRoom.CLIENTTYPE.MOBILE
    reqJoinRoom.hardWareFlag = hardWareFlag
    reqJoinRoom.ver = 20090420
    reqJoinRoom.channelid = XH.SysTool:getChannelID()
    reqJoinRoom.m_osver = XH.SysTool:GetOsVersion()
    reqJoinRoom.m_Identify = XH.SysTool:GetDevid()
    reqJoinRoom.m_breconnect = param.bReconnect or false
    local extData = XH.lobby:getModule("Gold"):getExtDataInfo(roomID, appID)
    if extData then
        reqJoinRoom.dataSize = string.len(extData)
        reqJoinRoom.data = extData
    end
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onMsgRespJoinRoom, XH.GameProtocolGT.processid, srsGroupID)
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onMsgPlayerInfo, XH.GameProtocolGT.processid, srsGroupID)
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onMsgEnterRoomFinish, XH.GameProtocolGT.processid, srsGroupID)
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onMsgStartGame, XH.GameProtocolGT.processid, srsGroupID)
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onMsgRespPlayerAct, XH.GameProtocolGT.processid, srsGroupID)
    XH.netEngine:sendProtocol(reqJoinRoom, XH.GameProtocolGT.processid, appID, srsGroupID)

end

function ReqJoinRoomGT:onMsgRespJoinRoom(XYID, buff, len)
    if XYID ~= XH.GameProtocolGT.RespJoinRoom.XY_ID then
        return
    end
    
    local msgData = XH.GameProtocolGT.RespJoinRoom:new()
    msgData:bistream(buff, len)
    self._retMsgData.msgRespJoinRoom = msgData
    local flag = msgData.flag
    if flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.SUCCESS then
        --self:success(msgData)--EnterRoomFinish才算真正意义上的结束
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.SHOW_MESSAGE then
        if msgData.msgbox and msgData.msgbox.m_szText and #msgData.msgbox.m_szText > 0 then
            if string.find(msgData.msgbox.m_szText,"|") then
                local strSplited = string.split(msgData.msgbox.m_szText, "|")
                self:setMessage(strSplited[2] or "")
            else
                self:setMessage(msgData.msgbox.m_szText)
            end
        else
            self:setMessage("哎呀，好像出了点问题，需要修复一下")
        end
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.RECONNECTNOINROOM then
        self:setMessage("找不到你的位置啦，请重新连接！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.RECONNECTNOINTABLE then
        self:setMessage("哎哟，走错房间了吧？再试一下看看！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.OTHERERR then
        self:setMessage("糟糕，发生了未知错误！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.REPORTSTATUSFAIL then
        self:setMessage("状态更新失败，再尝试一次吧！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.REPORTSTATUSTIMEOUT then
        self:setMessage("状态汇报超时，网络信号好吗？")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.REPORTSTATUSSENDFAIL then
        self:setMessage("发送状态失败，一会再发一次吧！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.DENYLOGIN then
        self:setMessage("登录被拒绝，检查一下权限吧！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.GAMETABLENOTFIND then
        self:setMessage("游戏桌不见了，稍等片刻！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.DBCONNNOTFIND then
        self:setMessage("数据库连接无法建立，重试一下！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.NOMATCHDATA then
        self:setMessage("匹配数据丢失，稍候再试！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.NETBUSY then
        self:setMessage("网络繁忙，稍后再来吧！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.DBERR then
        self:setMessage("数据库出错了，管理员正在努力修复！")
    elseif flag == XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.MAXPLAYSR then
        self:setMessage("人数已满，等一下再尝试吧！")
    else
        self:setMessage("进入房间失败，请稍后再试(".. flag.. ")")
    end
    if flag ~= XH.GameProtocolGT.RespJoinRoom.JOINROOMFLAG.SUCCESS then
        self:fail(self._retMsgData)
    end
end

function ReqJoinRoomGT:onMsgPlayerInfo(XYID, buff, len)
    if XYID ~= XH.GameProtocolGT.PlayerInfo.XY_ID then
        return
    end
    local msgData = XH.GameProtocolGT.PlayerInfo:new()
    msgData:bistream(buff, len)
    self._retMsgData.msgPlayerInfo = msgData
end

function ReqJoinRoomGT:onMsgEnterRoomFinish(XYID, buff, len)
    if XYID ~= XH.GameProtocolGT.EnterRoomFinish.XY_ID then
        return
    end
    local msgData = XH.GameProtocolGT.EnterRoomFinish:new()
    msgData:bistream(buff, len)
    if self._roomMode == XH.ROOM_TYPE.GOLD_ROOM_BW then
        self:success(self._retMsgData)
    end
end

function ReqJoinRoomGT:onMsgStartGame(XYID, buff, len)
    if XYID ~= XH.GameProtocolGT.StartGame.XY_ID then
        return
    end
    local msgData = XH.GameProtocolGT.StartGame:new()
    msgData:bistream(buff, len)
    if msgData.canStart == 1 then 
        self:success(self._retMsgData)
    else
        self:setMessage("进入房间失败，请稍后再试(0)")
        self:fail(self._retMsgData)
    end
   
end

function ReqJoinRoomGT:onMsgRespPlayerAct(XYID, buff, len)
    if XYID ~= XH.GameProtocolGT.RespPlayerAct.XY_ID then
        return
    end
    local msgData = XH.GameProtocolGT.RespPlayerAct:new()
    msgData:bistream(buff, len)
    if XH.GameProtocolGT.RespPlayerAct.FLAG.SUCCESS ~= msgData.flag then 
        local msg = un.StringUtils.GB_18030_2000_TO_UTF8(msgData.msgbox.m_szText)
        local delimiter = "|"
        local parts = {}
        for part in msg:gmatch("[^" .. delimiter .. "]+") do
            table.insert(parts, part)
        end

        local firstPart = parts[1]
        local secondPart = parts[2]

        if #parts < 2 then
            secondPart = firstPart
            -- firstPart = nil
        end
        self:setMessage(secondPart)
        self:fail(self._retMsgData)
    end
end

return ReqJoinRoomGTU