local ____utils = require("app.Third.ThinkData.Utils")
local _ = ____utils._
local ____R_PLATFORM_IMPORT = require("app.Third.ThinkData.ThinkingDataAPI")
local ThinkingDataAPIOld = ____R_PLATFORM_IMPORT.default
local ____Config = require("app.Third.ThinkData.Config")
local Config = ____Config.Config
--- TDAnalytics, ThinkingData Analytics SDK for Mini Game & App.
-- 
-- @example //引入SDK
-- var TDAnalytics = require('./thinkingdata.wx.min.js');
-- //初始化SDK
-- var config = {
--   appId: 'your-app-id', // 项目的 App ID
--   serverUrl: 'https://your.serverurl.com' // 数据上报地址
-- };
-- TDAnalytics.init(config);
-- //用户登录
-- TDAnalytics.login('thinker');
-- //设置事件公共属性
-- var superProperties = {
--     channel : 'td', //字符串
--     age : 1,//数字
--     isSuccess : true,//布尔
--     birthday :  new Date(),//日期
--     array : [ 'value' ],//数组
--     row : { key : 'value' },//对象
--     array_rows : [ { key : 'value' } ]//对象组
-- };
-- TDAnalytics.setSuperProperties(superProperties);
-- //上报事件
-- var eventProperties = {
--     product_name: '钻石'
-- };
-- TDAnalytics.track({
--     eventName: 'product_buy', // 事件名称
--     properties: eventProperties //事件属性
-- });
-- //上报用户属性
-- var userProperties = {
--     username: 'tiki'
-- };
-- TDAnalytics.userSet({
--     properties: userProperties
-- });
local TDAnalytics = _.__TS__Class()
TDAnalytics.name = "TDAnalytics"
function TDAnalytics.prototype.____constructor(self)
end
function TDAnalytics._shareInstance(self, appId)
    if self._instanceMaps[appId] ~= nil then
        return self._instanceMaps[appId]
    elseif self._defaultInstance ~= nil then
        return self._defaultInstance
    else
        return nil
    end
end
function TDAnalytics.init(self, config)
    local td = _.__TS__New(ThinkingDataAPIOld, config)
    td:init()
    if td ~= nil then
        if self._defaultInstance == nil then
            self._defaultInstance = td
            self._instanceMaps = {}
        end
        self._instanceMaps[config.appId] = td
    end
end
function TDAnalytics.lightInstance(self, appId)
    return self:_shareInstance(appId):lightInstance()
end
function TDAnalytics.track(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):track(options.eventName, options.properties, options.time, options.onComplete)
end
function TDAnalytics.trackFirst(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):trackFirstEvent(options)
end
function TDAnalytics.trackUpdate(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):trackUpdate(options)
end
function TDAnalytics.trackOverwrite(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):trackOverwrite(options)
end
function TDAnalytics.timeEvent(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):timeEvent(options.eventName, options.time)
end
function TDAnalytics.userSet(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userSet(options.properties, options.time, options.onComplete)
end
function TDAnalytics.userSetOnce(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userSetOnce(options.properties, options.time, options.onComplete)
end
function TDAnalytics.userUnset(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userUnset(options.property, options.time, options.onComplete)
end
function TDAnalytics.userAdd(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userAdd(options.properties, options.time, options.onComplete)
end
function TDAnalytics.userAppend(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userAppend(options.properties, options.time, options.onComplete)
end
function TDAnalytics.userUniqAppend(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userUniqAppend(options.properties, options.time, options.onComplete)
end
function TDAnalytics.userDelete(self, options, appId)
    if options == nil then
        options = {}
    end
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):userDel(options.time, options.onComplete)
end
function TDAnalytics.setSuperProperties(self, properties, appId)
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):setSuperProperties(properties)
end
function TDAnalytics.unsetSuperProperty(self, property, appId)
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):unsetSuperProperty(property)
end
function TDAnalytics.clearSuperProperties(self, appId)
    self:_shareInstance(appId):clearSuperProperties()
end
function TDAnalytics.getSuperProperties(self, appId)
    return self:_shareInstance(appId):getSuperProperties()
end
function TDAnalytics.setDynamicSuperProperties(self, dynamicProperties, appId)
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):setDynamicSuperProperties(dynamicProperties)
end
function TDAnalytics.getPresetProperties(self, appId)
    return self:_shareInstance(appId):getPresetProperties()
end
function TDAnalytics.login(self, accountId, appId)
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):login(accountId)
end
function TDAnalytics.logout(self, appId)
    self:_shareInstance(appId):logout()
end
function TDAnalytics.setDistinctId(self, distinctId, appId)
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):identify(distinctId)
end
function TDAnalytics.getDistinctId(self, appId)
    return self:_shareInstance(appId):getDistinctId()
end
function TDAnalytics.getSDKVersion(self)
    return Config.LIB_VERSION
end
function TDAnalytics.getDeviceId(self, appId)
    return self:_shareInstance(appId):getDeviceId()
end
function TDAnalytics.flush(self, appId)
    self:_shareInstance(appId):flush()
end
function TDAnalytics.setTrackStatus(self, status, appId)
    if appId == nil then
        appId = ""
    end
    self:_shareInstance(appId):setTrackStatus(status)
end
function TDAnalytics.ThinkingDataAPI(self)
    return ThinkingDataAPIOld
end

return TDAnalytics