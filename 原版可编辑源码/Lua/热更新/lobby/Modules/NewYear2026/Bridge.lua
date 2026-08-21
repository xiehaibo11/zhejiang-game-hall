local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

return {
    setImgUrl = function(...)
        Utils:setImgUrl(...)
    end,
    updateProps = function()
        XH.playerData:flushPlayerDrop()
    end,
    changePropCnt = function(reward, keyPropId, keyCount)
        if reward[keyPropId] == XH.areaData:getPropLimitedTimeRoomCardID() then
            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                reward[keyCount] = reward[keyCount] / XH.areaData:getPropLimitedTimeRoomCardRatio()
            end
        end
    end,
    clone = function(widget)
        return widget:clone()
    end,
    throwData = function(dataName, recordData, custom)
        XH.NewThrowDataManager:throwData(dataName, recordData)
    end,
    openLuckyTaskView = function(dataName, recordData, custom)
        XH.viewManager:openView("LuckyMissionView", nil, nil, "NEWYEAR")
    end,
    playEffect = function(path)
        XH.audioManager:playEffect(path)
    end,
    getLuckyTaskInfo = function()
        return {
            type = "LuckyTask",
            title = "对局有礼",
            sort = 2,
            canGetAward = XH.lobby:getModule("LuckyMission"):isShowRedPointList(),
            url = "",
            view = "",
            show = XH.lobby:getModule("LuckyMission"):isValid()
        }
    end,
    getRecallInfo = function()
        local isValid = XH.lobby:getModule("RecallNew"):isInAct()
        if isValid then
            return {
                type = "Recall",
                title = "回归有礼",
                sort = 3,
                canGetAward = XH.lobby:getModule("RecallNew"):isShowRedPointList(),
                url = "",
                view = "",
                show = XH.lobby:getModule("RecallNew"):isInAct()
            }
        else
            return {
                type = "ActivityCenter",
                title = "活动中心",
                sort = 3,
                canGetAward = false,
                url = "",
                view = "TabsActivityView",
                show = true
            }
        end
    end
}
