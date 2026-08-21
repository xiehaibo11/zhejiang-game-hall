local NewThrowDataManager = class("NewThrowDataManager")
local ThinkingDataMap = require("app.Third.ThinkData.Define")
local pathKey = "configure/ThrowDataJson.json";
local DEBUG = require("app.Config.GlobalConfig").IsDebug
local cjson = require("cjson")
local ThrowDataJson
if cc.FileUtils:getInstance():isFileExist(pathKey) then
    ThrowDataJson = cc.FileUtils:getInstance():getStringFromFile(pathKey)
end
local JsonData
local _ = pcall(function()
    JsonData = cjson.decode(ThrowDataJson)
end)

local function get_time_with_ms()
    local time = socket.gettime()
    local sec = math.floor(time)
    local msec = math.floor((time - sec) * 1000)
    return os.date("%Y-%m-%d %H:%M:%S", sec) .. string.format(".%03d", msec)
end

function NewThrowDataManager:throwData(eventName, conventionData, extraData)
    local sdk = XH.dhsdk
    --处理json表，获取当前传的事件名称
    local eventTag = self:AnalyseJsonName(eventName)
    if eventTag == nil then
        return
    end
    eventTag = clone(eventTag)
    if conventionData then
        for i, v in pairs(conventionData) do
            if eventTag[i] then
                eventTag[i] = v
            end
        end
    end
    if extraData and eventTag.customize then
        eventTag.customize = cjson.encode(extraData)
    end

    if eventTag then
        if XH.TDSDK then
            local duration = 0
            if duration ~= nil and type(eventTag.duration) == "number" then
                duration = tonumber(eventTag.duration)
            end
            local throwKey = ThinkingDataMap.APP_EVENT
            -- 首字母不为P的走新埋点
            if eventName and type(eventName) == "string" and string.sub(eventName, 1, 1) ~= "P" then
                throwKey = ThinkingDataMap.APP_EVENT_V2
            end
            XH.TDSDK:track(throwKey,
            {
                action = eventTag.action or "",
                block = eventTag.block or "",
                block_item_id = eventTag.block_item_id or "",
                block_label = eventTag.block_label or "",
                customize = extraData or { area_id = XH.areaData:getAreaID() },
                duration = duration,
                event_id = eventTag.event_id or "",
                item_id = eventTag.item_id or "",
                label = eventTag.label or "",
                page = eventTag.page or "",
                page_item_id = eventTag.page_item_id or "",
                page_label = eventTag.page_label or "",
                game_id = eventTag.game_id or "",
                room_level = eventTag.room_level or "",
                room_mode = eventTag.room_mode or "",
                device_brand = un.Device.getDeviceName() or "",
                scene = eventTag.scene or "",
                mini_scene = eventTag.mini_scene or "",
                props_count_arr = eventTag.props_count_arr or {},
                players = eventTag.players or 0,
                room_id = eventTag.room_id or "",
                club_id = eventTag.club_id or ""
            },
            get_time_with_ms()
            )
        end
        print("newThrowDataManager throw ok")
        -- sdk:debug(eventTag)--调试时开启校验埋点使用
        sdk:track(eventTag) --正式环境使用该方法上抛
    end
end

function NewThrowDataManager:AnalyseJsonName(eventName)
    if JsonData and JsonData[eventName] then
        return JsonData[eventName]
    else
        return nil
    end
end

--通用程序监控上抛埋点
function NewThrowDataManager:reportCommonMonitor(info)
    if XH.TDSDK == nil or DEBUG then
        return
    end
    XH.TDSDK:track("Monitoring_program", info)
end

function NewThrowDataManager:startData()
    _G.FIRST_ENTER = cc.UserDefault:getInstance():getIntegerForKey("IS_FIRST_ENTER_KEY", 0) == 0
    pcall(function()
        local lobbyID = cc.UserDefault:getInstance():getIntegerForKey("LOBBYID", 0)
        if lobbyID ~= 0 then
            local pathFile = cc.FileUtils:getInstance():getWritablePath() .. "SessionLoginData_" .. lobbyID .. ".dat"
            if cc.FileUtils:getInstance():isFileExist(pathFile) then
                _G.FIRST_ENTER = false
            end
        end
    end)
end

function NewThrowDataManager:endData()
    _G.FIRST_ENTER = false
    cc.UserDefault:getInstance():setIntegerForKey("IS_FIRST_ENTER_KEY", 1)
end

-- 启动数据分析
function NewThrowDataManager:AnalyseStartData(state)
    local custom = {
        state = state,
        type = _G.FIRST_ENTER and "首次登录前" or "非首次登录前",
    }
    self:throwData(XH.NewThrowDataDefine.start250919, {}, custom)
end

return NewThrowDataManager