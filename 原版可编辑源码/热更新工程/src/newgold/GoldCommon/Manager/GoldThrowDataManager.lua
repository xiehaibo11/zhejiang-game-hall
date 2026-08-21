local GoldThrowDataManager = class("GoldThrowDataManager")
local ThinkingDataMap = require("app.Third.ThinkData.Define")
local pathKey = "NewGoldRes/configure/GoldThrowDataJson.json";
local ThrowDataJson
if cc.FileUtils:getInstance():isFileExist(pathKey) then
    ThrowDataJson = cc.FileUtils:getInstance():getStringFromFile(pathKey)
end
local JsonData
local ok = pcall(function()
    JsonData = cjson.decode(ThrowDataJson)
end)
function GoldThrowDataManager:throwData(eventName, conventionData, extraData)
    if ThrowDataJson == nil then
        return
    end
    if not ok or not JsonData then
        print("cjson failed: ")
        return
    end

    --处理json表，获取当前传的事件名称
    local eventTag = self:AnalyseJsonName(eventName)
    if eventTag == nil then
        return
    end
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
            }
            )
        end
        print("newThrowDataManager throw ok")
        -- XH.dhsdk:debug(eventTag)--调试时开启校验埋点使用
        XH.dhsdk:track(eventTag) --正式环境使用该方法上抛
    end
end

function GoldThrowDataManager:AnalyseJsonName(eventName)
    if JsonData and JsonData[eventName] then
        return JsonData[eventName]
    else
        return nil
    end
end

return GoldThrowDataManager