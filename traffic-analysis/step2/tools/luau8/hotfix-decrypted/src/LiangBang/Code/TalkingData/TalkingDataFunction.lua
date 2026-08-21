local TKFunction = {}

require("LiangBang.Code.TalkingData.TalkingDataKeyword")

local btnClickCount = {}

TKFunction._doubleBuckleScheduleID = 0

function TKFunction.addBtnClickCount(buttonID)
    btnClickCount[buttonID] = btnClickCount[buttonID] or 0
    btnClickCount[buttonID] = btnClickCount[buttonID] + 1
end

function TKFunction.sendBtnClickCount(buttonID)
    local map = {}
    map["buttonId"] = tostring(buttonID)
    map["amount"] = tostring(btnClickCount[buttonID])
    -- XH.bf.CDataCollect:sharedData():onCustomTimesEveBF(4005,"btnClickCount",map)
end

function TKFunction.sendAllBtnClickCount()
    for k,v in pairs(btnClickCount) do
        TKFunction.sendBtnClickCount(k)
    end
end

function TKFunction.clearAllBtnClickCount()
    for k,v in pairs(btnClickCount) do
        btnClickCount[k] = nil
    end
end

function TKFunction.startSendTKData()
    if TKFunction._doubleBuckleScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(TKFunction._doubleBuckleScheduleID)
        TKFunction._doubleBuckleScheduleID = 0
    end
    TKFunction._doubleBuckleScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(
        function ()
            TKFunction.sendAllBtnClickCount()
            TKFunction.clearAllBtnClickCount()
        end
        ,1*60,false)
end

function TKFunction.stopSendTKData()
    TKFunction.sendAllBtnClickCount()
    TKFunction.clearAllBtnClickCount()
    if TKFunction._doubleBuckleScheduleID ~= 0 then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(TKFunction._doubleBuckleScheduleID)
        TKFunction._doubleBuckleScheduleID = 0 
    end
end

return TKFunction�