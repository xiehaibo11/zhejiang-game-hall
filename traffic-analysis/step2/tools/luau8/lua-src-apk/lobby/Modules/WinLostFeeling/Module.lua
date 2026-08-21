local WinLostFeelModule = class("WinLostFeelModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

function WinLostFeelModule:ctor() 
    WinLostFeelModule.super.ctor(self)
    self._bigWinLostAwardData = {}
end

function WinLostFeelModule:getProxyEvents()
    return {
        { module = XH.netEngine, eventName = XH.MatchLinkProtocol.RespNotifyTaskPercent.event_key, callBack = "onRespNotifyTaskPercent" },
    }
end

function WinLostFeelModule:onRespNotifyTaskPercent(event)
    local respData = XH.MatchLinkProtocol.RespNotifyTaskPercent:new()
    respData:bistream(event.msg.buff, event.msg.len)

    if respData.nTaskId == TaskDefine.TASK_ID.TASK_TYPE_WINLOST_FEEL_STRATEGY then
        self:onShowWinlostFeelStrategy(respData.acData)
    end
end

function WinLostFeelModule:onShowWinlostFeelStrategy(data)
    if data  and data ~= "" then 
        local acData
        local ok = pcall(function()
            acData = cjson.decode(data)
        end)
        if not ok then
            return
        end
        acData.index = #self._bigWinLostAwardData + 1
        table.insert(self._bigWinLostAwardData, acData)
        if acData.index == 1 then
            self:openWinLostFeelView(acData.index-1)
        end
    end
end

function WinLostFeelModule:onShowEightMahAward(data)
    if data  and data ~= "" then 
        local acData
        local ok = pcall(function()
            acData = cjson.decode(data)
        end)
        if not ok then
            return
        end
        local awardData = {}
        awardData.awards = {}
        awardData.awards[1] = clone(acData)
        awardData.upstrWords = acData.msgstr or ""
        awardData.index = #self._bigWinLostAwardData + 1
        table.insert(self._bigWinLostAwardData, awardData)
        if awardData.index == 1 then
            self:openWinLostFeelView(awardData.index-1)
        end
    end
end

function WinLostFeelModule:openWinLostFeelView(index)
    if index and index < #self._bigWinLostAwardData then
        local awardData = clone(self._bigWinLostAwardData[index+1])
        --XH.viewManager:openView("WinLostFeelView", nil, awardData)
        require("lobby.Modules.WinLostFeeling.View").new(awardData):showSelf()
    else
        self._bigWinLostAwardData = {}
    end
end

return WinLostFeelModuleI	