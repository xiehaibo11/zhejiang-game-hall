local TeaHouseManager = class("TeaHouseManager")

function TeaHouseManager:isInTeaHouse()
    return XH.teaHouseManager:isInTeaHouse()
end

function TeaHouseManager:getTeaHousePwd()
    return XH.teaHouseManager:getTeaHousePwd()
end

function TeaHouseManager:isShowTeaHouseOnlineListInGame()
    return XH.teaHouseManager:isShowTeaHouseOnlineListInGame()
end

function TeaHouseManager:openTeaHouseOnlineListInGame(inviteOfflineFunc)
    XH.teaHouseManager:openTeaHouseOnlineListInGame(inviteOfflineFunc)
end

function TeaHouseManager:getTeaHouseOnlineModule()
    return XH.teaHouseManager:getTeaHouseOnlineModule()
end

function TeaHouseManager:getPlayModeInfos()
    return XH.teaHouseManager:getPlayModeInfos()
end

function TeaHouseManager:getTeaHouseData()
    return XH.teaHouseManager:getTeaHouseData()
end

function TeaHouseManager:openTeaHouseList()
    local scheduleID
    scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
        require("teahouse.init")
        if TeaHouse and TeaHouse.init and TeaHouse.openTeaHouseList then
            XH.bugly.buglyLog("onJoinTeaHouse", "onJoinTeaHouse")
            TeaHouse.init()
            TeaHouse.openTeaHouseList()
        end
    end, 0.1, false)
end

return TeaHouseManager