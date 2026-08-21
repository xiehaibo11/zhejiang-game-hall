local LimitFreeActModule = class("LimitFreeActModule", XH.ModuleBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local LimitFreeActConfig = require("lobby.Modules.LimitFreeAct.Config")

LimitFreeActModule.EVENT_FLUSH_FREE_ACT_INFO = "EVENT_FLUSH_FREE_ACT_INFO"

function LimitFreeActModule:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end

function LimitFreeActModule:onGetConfiguration(event)
    local key = event.data.key
    local matchKey = string.format(ConfigurationDefine.Config.LOBBY, XH.areaData:getLobbyID())
    if key ~= matchKey then
        return
    end
    self:dispatchEvent({ name = LimitFreeActModule.EVENT_FLUSH_FREE_ACT_INFO })
    if self:isActEnd() then
        return
    end
    local hallTiems = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_LIMIT_FREE_ACT, 0)
    if hallTiems < 3 then
        -- XH.viewManager:openView("LimitFreeActView")
        XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_LIMIT_FREE_ACT, hallTiems + 1)
    end
end

-- 获取活动配置
function LimitFreeActModule:getActConfig()
    local configJsonData = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    if not configJsonData or not configJsonData.LimitFree then
        return nil
    end
    return configJsonData.LimitFree
end

function LimitFreeActModule:isServerFree()
    local limitFree = self:getActConfig()
    if not limitFree then
        return false
    end
    return limitFree.serverfree
end

function LimitFreeActModule:isInFreeDateServer(gameid)
    if self:isTargetGameID(gameid) and self:isServerFree() then
        return true
    end
    return false
end

-- 打开活动界面
function LimitFreeActModule:openMainView()
    -- XH.viewManager:openView("LimitFreeActView")
end

-- 打开提示界面
function LimitFreeActModule:openTipView()
    local config = self:getActConfig()
    if config == nil or config.tip == nil then
        return
    end
    XH.TipTool.showTip(
    {
        type = XH.TIP_LAYER_TYPE.CLOSE_ONLY,
        bLeft = true
    },
    config.tip
    )
end

function LimitFreeActModule:isTargetGameID(gameid)
    if self:isActEnd() then
        return false
    end
    local config = self:getActConfig()
    if config == nil then
        return false
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time > config.endtime or time < config.starttime then
        return false
    end
    if config.games and #config.games > 0 then
        for i = 1, #config.games do
            if config.games[i] == gameid then
                return true
            end
        end
    end
    return false
end

-- 是否活动结束
function LimitFreeActModule:isActEnd()
    local config = self:getActConfig()
    if config == nil then
        return true
    end
    local time = XH.lobby:getModule("Shop"):getServerTime()
    if time > config.endtime or time < config.starttime then
        return true
    end
    return false
end

function LimitFreeActModule:getDayTime()
    local currentDate = os.date("*t")
    currentDate.hour = 0
    currentDate.min = 0
    currentDate.sec = 0
    return XH.lobby:getModule("Shop"):getServerTime() - os.time(currentDate)
end

function LimitFreeActModule:getNextFreeTimeIdx()
    local config = self:getActConfig()
    if config == nil or self:isActEnd() then
        return 0
    end
    local time = self:getDayTime()
    for i = 1, #config.timeslot do
        local slot = config.timeslot[i]
        if time < slot.start then
            return i
        end
    end
    return 1
end

-- 下次免费时间
function LimitFreeActModule:getNextFreeTime()
    local config = self:getActConfig()
    if config == nil or self:isActEnd() then
        return nil
    end
    local time = self:getDayTime()
    local default = nil
    for i = 1, #config.timeslot do
        local slot = config.timeslot[i]
        if i == 1 then
            default = self:getStringByTime(config.timeslot[i].start, config.timeslot[i]["end"])
        end
        if time < slot.start then
            return self:getStringByTime(slot.start, slot["end"])
        end
    end
    return default
end

function LimitFreeActModule:getStringByTime(startTime, endTime)
    local shours = math.floor(startTime / 3600)
    local sminutes = math.floor((startTime % 3600) / 60)
    local ehours = math.floor(endTime / 3600)
    local eminutes = math.floor((endTime % 3600) / 60)
    return string.format("%02d:%02d", shours, sminutes) .. "-" .. string.format("%02d:%02d", ehours, eminutes)
end

function LimitFreeActModule:getStringByTimeNew(startTime, endTime)
    local shours = math.floor(startTime / 3600)
    local sminutes = math.floor((startTime % 3600) / 60)
    local ehours = math.floor(endTime / 3600)
    local eminutes = math.floor((endTime % 3600) / 60)
    return string.format("%d", shours) .. "-" .. string.format("%d", ehours) .. "点"
end

-- 是否在免费时间内
function LimitFreeActModule:isInFreeTimeAll()
    local config = self:getActConfig()
    if config == nil or self:isActEnd() then
        return false
    end
    -- 时间
    local time = self:getDayTime()
    local isFree = false
    for i = 1, #config.timeslot do
        local slot = config.timeslot[i]
        if time > slot.start and time < slot["end"] then
            isFree = true
        end
    end
    return isFree
end

-- 是否在免费时间内
function LimitFreeActModule:isInFreeTime(gameid)
    local config = self:getActConfig()
    if config == nil or self:isActEnd() then
        return false
    end
    -- 时间
    local time = self:getDayTime()
    local isFree = false
    for i = 1, #config.timeslot do
        local slot = config.timeslot[i]
        if time > slot.start and time < slot["end"] then
            isFree = true
        end
    end
    if not isFree then
        return false
    end
    if gameid == nil then
        return false
    else
        for i = 1, #config.games do
            if config.games[i] == gameid then
                return true
            end
        end
    end
    return false
end

-- 获取免费时间段
function LimitFreeActModule:getShareStrByTime(splitStr, type)
    local config = self:getActConfig()
    if config == nil then
        return ""
    end
    local str = ""
    for i = 1, #config.timeslot do
        if type == 1 then
            str = str .. self:getStringByTimeNew(config.timeslot[i].start, config.timeslot[i]["end"])
        else
            str = str .. self:getStringByTime(config.timeslot[i].start, config.timeslot[i]["end"])
        end
        if i ~= #config.timeslot then
            if splitStr == nil then
                str = str .. "、"
            else
                str = str .. splitStr
            end
        end
    end
    return str
end

-- 分享卡片内容
function LimitFreeActModule:getExCardStr()
    if self:isActEnd() then
        return ""
    end
    local card = LimitFreeActConfig.CardStr[XH.areaData:getLobbyID()]
    if not card then
        return ""
    end
    local index = math.floor(math.random(1, #card))
    return string.gsub(card[index], "x", self:getShareStrByTime())
end

-- 分享链接内容
function LimitFreeActModule:getExLinkStr()
    if self:isActEnd() then
        return ""
    end
    local link = LimitFreeActConfig.LinkStr[XH.areaData:getLobbyID()]
    if not link then
        return ""
    end
    local index = math.floor(math.random(1, #link))
    return string.gsub(link[index], "x", self:getShareStrByTime())
end

return LimitFreeActModule