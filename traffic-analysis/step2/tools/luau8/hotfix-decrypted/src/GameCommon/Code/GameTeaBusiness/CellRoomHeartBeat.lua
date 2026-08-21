local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("..GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellRoomHeartBeat = class("CellRoomHeartBeat", CellProtocol)

CellRoomHeartBeat._cellRoomHeartBeat  = nil
CellRoomHeartBeat._roomHeartBeatScheduleID  = 0
CellRoomHeartBeat._srsGroupID = 0
    
function CellRoomHeartBeat:ctor()
    CellRoomHeartBeat.super.ctor(self)
end


function CellRoomHeartBeat.start(groupid,processid,appid)   
    if CellRoomHeartBeat._roomHeartBeatScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(CellRoomHeartBeat._roomHeartBeatScheduleID)
        CellRoomHeartBeat._roomHeartBeatScheduleID = 0 
    end
    CellRoomHeartBeat._appID = appid
    CellRoomHeartBeat._roomHeartBeatScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function ()
            if CellRoomHeartBeat._roomHeartBeatScheduleID == 0 then
            	return 
            end

            local tReqDispatchRoomData = XH.bf.GameXY.CheckAct:new()
            XH.GT.sendPacket(tReqDispatchRoomData,CellRoomHeartBeat._appID,nil,XH.bf.ProcessIDList.Game)
        end
    ,10,false)
end

function CellRoomHeartBeat.stop()
    if CellRoomHeartBeat._roomHeartBeatScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(CellRoomHeartBeat._roomHeartBeatScheduleID)
        CellRoomHeartBeat._roomHeartBeatScheduleID = 0 
    end
end

return CellRoomHeartBeat�