-- 对外接口 具体参照TDAnalytics文件
local Sdk = class("Sdk")
local TDAnalytics = require("app.Third.ThinkData.TDAnalytics")
local GeneralParam = require("app.Third.ThinkData.GeneralParam")

-- 初始化
function Sdk:init()
    TDAnalytics:init({
        appId = GeneralParam.getAppId(),
        serverUrl = GeneralParam.getServerUrl(),
        autoTrack = {}
    })
end

-- 设置公共属性
-- TDAnalytics:setSuperProperties(
--     {
--         channel_id = 234,
--     }
--     )
function Sdk:setSuperProperties(dataTable)
    TDAnalytics:setSuperProperties(dataTable)
end

-- 设置用户属性
-- TDAnalytics:userSet({
--         properties = {
--             key = 555,
--         }
--     })
function Sdk:userSet(dataTable)
    TDAnalytics:userSet({
        properties = dataTable
    })
end

-- 设置登陆信息
function Sdk:setUserId(id)
    TDAnalytics:login(tostring(id))
end

-- 抛送数据
-- TDAnalytics:track(
--     {
--         eventName = eventName,
--         properties = {
--             behavior_types = "test",
--             popup_creat_time = os.date("%Y-%m-%d %H:%M:%S")
--         }
--     }
--     )
function Sdk:track(eventName, eventTable)
    TDAnalytics:track({
        eventName = eventName,
        properties = eventTable
    })
end

return Sdk