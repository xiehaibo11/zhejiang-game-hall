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
        XH.viewManager:openView("LimitFreeActView")
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

-- 打开活动界面
function LimitFreeActModule:openMainView()
    XH.viewManager:openView("LimitFreeActView")
end

-- 打开提示界面
function LimitFreeActModule:openTipView()
    local lobbyID = XH.areaData:getLobbyID()
    local text = "游戏包厢限时创建免费\n1.免费时间：2月6日-2月15日\n每日10点-11点、20点-21点 2个时间段创建房间免费，免费时间以创建时间为准\n2.免费场景：包厢（非亲友圈）\n3.免费人员：所有玩家"
    if lobbyID == 900023 then
        text = "游戏包厢限时创建免费\n1.免费时间：2月6日-2月15日\n每日10点-11点、20点-21点 2个时间段创建房间免费，免费时间以创建时间为准\n2.免费场景：包厢（不包含牌友列表内创建）\n3.免费人员：所有玩家"
    end
    XH.TipTool.showTip(
    {
        type = XH.TIP_LAYER_TYPE.OK,
        bLeft = true
    },
    text
    )
end

-- 是否活动结束
function LimitFreeActModule:isActEnd()
    local config = self:getActConfig()
    if config == nil then
        return true
    end
    local time = os.time()
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
    return os.time() - os.time(currentDate)
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
    if gameid == nil or config.freeall then
        return true
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
function LimitFreeActModule:getShareStrByTime(splitStr)
    local config = self:getActConfig()
    if config == nil then
        return ""
    end
    local str = ""
    for i = 1, #config.timeslot do
        str = str .. self:getStringByTime(config.timeslot[i].start, config.timeslot[i]["end"])
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
    local card = LimitFreeActConfig.CardStr
    local index = math.floor(math.random(1, #card))
    return string.gsub(card[index], "x", self:getShareStrByTime())
end

-- 分享链接内容
function LimitFreeActModule:getExLinkStr()
    if self:isActEnd() then
        return ""
    end
    local link = LimitFreeActConfig.LinkStr
    local index = math.floor(math.random(1, #link))
    return string.gsub(link[index], "x", self:getShareStrByTime())
end

return LimitFreeActModule}