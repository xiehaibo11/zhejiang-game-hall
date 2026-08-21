local CURRENT_MOUDLE_NAME = ...
local CellProtocol = import("...GameTea.CellProtocol",CURRENT_MOUDLE_NAME)
local CellMatchHeartBeat = class("CellMatchHeartBeat", CellProtocol)

CellMatchHeartBeat._cellRoomHeartBeat  = nil
CellMatchHeartBeat._roomHeartBeatScheduleID  = 0
CellMatchHeartBeat._srsGroupID = 0
CellMatchHeartBeat._processID = 0
CellMatchHeartBeat._heartBeatAppID = {}

function CellMatchHeartBeat.start(processid, appIDs, groupid)
    

    if CellMatchHeartBeat._roomHeartBeatScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(CellMatchHeartBeat._roomHeartBeatScheduleID)
        CellMatchHeartBeat._roomHeartBeatScheduleID = 0 
    end
    CellMatchHeartBeat._srsGroupID = nil
    CellMatchHeartBeat._processID = processid or 0
    
    CellMatchHeartBeat._roomHeartBeatScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function ()
            if CellMatchHeartBeat._roomHeartBeatScheduleID == 0 then
                return 
            end
            local cellHeartBeat = XH.bf.Match32XY.PlayerCheckAt:new()
            cellHeartBeat.askid = 0
            
            for key, var in pairs(appIDs) do
                for index, value in pairs(var) do
                    XH.GT.sendPacket(cellHeartBeat, value, CellMatchHeartBeat._srsGroupID, CellMatchHeartBeat._processID)
                end
            end
        end
        ,10,false)
end

function CellMatchHeartBeat.stop()
    if CellMatchHeartBeat._roomHeartBeatScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(CellMatchHeartBeat._roomHeartBeatScheduleID)
        CellMatchHeartBeat._roomHeartBeatScheduleID = 0 
    end
end

return CellMatchHeartBeat
�