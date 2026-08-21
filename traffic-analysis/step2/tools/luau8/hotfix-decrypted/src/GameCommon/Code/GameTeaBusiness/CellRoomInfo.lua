local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellRoomInfo = class("CellTableInfo", CellProtocol)

function CellRoomInfo:ctor()
    CellRoomInfo.super.ctor(self)
end


function CellRoomInfo:start(roomid,timeoutTime)
    if CellRoomInfo.super.start(self,timeoutTime) == false then
        return
    end
    
    local reqRoomInfo = XH.bf.GameXY.ReqRoomInfo:new()
    reqRoomInfo.m_RoomID = roomid
    reqRoomInfo.m_NeedRule = 0

    Game.Interface.addProtocolScriptFuncByObj(self,self.onRespRoomInfo,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
    Game.Interface.sendMessage(reqRoomInfo,nil,XH.bf.ProcessIDList and XH.bf.ProcessIDList.Game or 1)
end

function CellRoomInfo:onRespRoomInfo(XYID, buff, len)
    if XYID ~= XH.bf.GameXY.RespRoomInfo.XY_ID then
        return
    end

    local tRespRoomInfo = XH.bf.GameXY.RespRoomInfo:new()
    tRespRoomInfo:bistream(buff, len)

    if XH.bf.GameXY.RespRoomInfo.TYPE.SUCCESS == tRespRoomInfo.m_flag then
        self:success(tRespRoomInfo)
    elseif XH.bf.GameXY.RespRoomInfo.TYPE.SHOW_MESSAGE == tRespRoomInfo.m_flag then
        self:setMessage(tRespRoomInfo.msgbox)
        self:fail(tRespRoomInfo.m_flag)
    else
        self:setMessage("请求服务器超时，请稍后重试")
        self:fail()
    end

end

return CellRoomInfo