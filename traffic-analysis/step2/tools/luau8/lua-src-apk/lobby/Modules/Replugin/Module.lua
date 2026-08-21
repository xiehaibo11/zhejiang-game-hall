local RepluginModule = class("RepluginModule", XH.ModuleBase)
local repluginSdk = require("lobby.Modules.Replugin.RePluginSdk")
RepluginModule.APP_ID = "194add14-f880-43e1-a252-0953b6fc0465"
RepluginModule.EVENT_REPLUGIN_CALLBACK = "EVENT_REPLUGIN_CALLBACK"

RepluginModule.DownloadCode = {
   REQ_FAIL = 0,
   FILE_ERROR = 1,
   FILE_DWONLOADING = 2,
   MD5_FAIL = 3,
   NET_ERROR = 4 
}

RepluginModule.UPDATETYPE = {
    NORMAL = 0,
    FORCE = 1
}

RepluginModule.DownloadMsg = {
    [0] = "请求错误，请检查网络状态",
    [1] = "文件校验失败",
    [2] = "正在下载",
    [3] = "下载校验失败",
    [4] = "网络异常，请检查网络正常后，重新下载"
}

function RepluginModule:ctor()
    RepluginModule.super.ctor(self)
    self:addRepluginListener()
end

function RepluginModule:isSupportRePlugin()
    if device.platform == "android" then
        if XH.sdkManager:isSupportFunctionAndroid("check_has_replugin") and XH.SysTool:CompareToBundleVersion("1.3.1") then
            if XH.SysTool:CompareToBundleVersion("1.4.1") then
                return true, true
            end
            return true, false
        end
    end
    return false
end

function RepluginModule:addRepluginListener()
    if device.platform ~= "android" then
        return
    end
    -- java回调过来的数据  msg为json支付串，含有code和msg，业务可自行解析获取code和msg
    repluginSdk.addRepluginSDKListener(function(msg)
        print("Replugin -> recieve msg = " .. msg)
        if msg then
            local data = json.decode(msg)
            if data then
                self:dispatchEvent( { name = self.EVENT_REPLUGIN_CALLBACK, data = { code = data.code, msg = data.msg } })
            end
        end
    end)
end

--- 获取插件列表
--- @function getPluginsInfo
--- @param app_id  应用id String 必填
--- @param hostAppInfo 宿主应用信息，含有package_id / channel_id / user_id / user_type字段  非必填（如果没有可填空字符）  类型：json字符串
function RepluginModule:getPluginsInfo(extraData)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> getPluginsInfo")
    local jsonStr = ""  
    if extraData and type(extraData) == "string" then
        jsonStr = extraData
    end
    repluginSdk.getPluginsInfo(self.APP_ID,jsonStr) 
end

--- 查询某个插件状态
--- @function queryPluginStatus
--- @param plugin_id 插件id
function RepluginModule:queryPluginStatus(pluginid)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> queryPluginStatus")
    repluginSdk.queryPluginStatus(pluginid)
end

--- 判断某个插件是否安装
--- @function isInstallPlugin
--- @param plugin_id 插件id
function RepluginModule:isInstallPlugin(pluginid)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> isInstallPlugin")
    repluginSdk.isInstallPlugin(pluginid)
end

--- 安装某个插件
--- @function installPlugin
--- @param plugin_id 插件id
function RepluginModule:installPlugin(pluginid)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> installPlugin")
    repluginSdk.installPlugin(pluginid)
end

function RepluginModule:installPluginWithTimeOut(pluginid,noNetTimeout,weakNetTimeout)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> installPluginWithTimeOut")
    repluginSdk.installPlugin(pluginid,noNetTimeout,weakNetTimeout)
end

--- 启动某个插件
--- @function startApk
--- @param plugin_id 插件id
--- @param loginJsonStr  登录信息，一定要含有 hostPackageName:宿主包名 / hostActivity:宿主主Activity 字段   类型：json字符串
function RepluginModule:startApk(pluginid,loginJsonStr)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> startApk loginJsonStr = " .. loginJsonStr)
    repluginSdk.startApk(pluginid,loginJsonStr)
end

--- @function unInstallPlugin
--- @param plugin_id 插件id
function RepluginModule:unInstallPlugin(pluginid)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> unInstallPlugin")
    repluginSdk.unInstallPlugin(pluginid)
end

function RepluginModule:clearDownloadCache(pluginid)
    if device.platform ~= "android" then
        return
    end
    print("Replugin -> clearDownloadCache")
    repluginSdk.clearDownloadCache(pluginid)
end

function RepluginModule:checkPluginUpdateStatus(pluginInfo)
    if next(pluginInfo) then
        -- 强制更新
        if pluginInfo.update_type == RepluginModule.UPDATETYPE.FORCE then
            if pluginInfo.plugin_last_version ~= pluginInfo.plugin_current_version then
                return true
            end
        end
    end
    return false
end

function RepluginModule:openPlugin(pluginid,loginJsonStr)
    local isSupportRePlugin,isNewRePlugin = self:isSupportRePlugin()
    if not isSupportRePlugin or not isNewRePlugin then
        return
    end
    print("Replugin -> openPlugin loginJsonStr = " .. loginJsonStr)
    repluginSdk.openPlugin(pluginid,loginJsonStr)
end

function RepluginModule:allowStartPlugin(pluginid,loginJsonStr,isAllow)
    local isSupportRePlugin,isNewRePlugin = self:isSupportRePlugin()
    if not isSupportRePlugin or not isNewRePlugin then
        return
    end
    print("Replugin -> allowStartPlugin loginJsonStr = " .. loginJsonStr)
    repluginSdk.allowStartPlugin(pluginid,loginJsonStr,isAllow)
    self:postToSepperllitaIsAllow(isAllow)
end

-- 北极星埋点上抛(曝光)
-- sourceID 1是icon 2是弹窗广告 3是活动中心
function RepluginModule:postToSepperllitaExposure(sourceID)
    local isSupportRePlugin,isNewRePlugin = self:isSupportRePlugin()
    if not isSupportRePlugin or not isNewRePlugin then
        return
    end
    local info =
    {
        ["pg"]       = "P1175",
        ["blk"]      = "BHO999",
        ["bl"]       = "宿主埋点",
        ["label"]    = "曝光",
        ["Act"]      = "push",
        ["eventId"]      = "1001",
        ["source"]     = sourceID,
    }
    local deInfo = json.encode(info)
    repluginSdk.postToSepperllita(deInfo)
end

-- 北极星埋点上抛(openPlugin)
-- sourceID 1是icon 2是弹窗广告 3是活动中心
function RepluginModule:postToSepperllitaPlugin(sourceID)
    local isSupportRePlugin,isNewRePlugin = self:isSupportRePlugin()
    if not isSupportRePlugin or not isNewRePlugin then
        return
    end
    local info =
    {
        ["pg"]       = "P1175",
        ["blk"]      = "BHO999",
        ["bl"]       = "宿主埋点",
        ["label"]    = "openPlugin接口调用",
        ["Act"]      = "push",
        ["source"]     = sourceID,
    }
    local deInfo = json.encode(info)
    repluginSdk.postToSepperllita(deInfo)
end

-- 北极星埋点上抛(is_allow)
-- isAllow 是否可以进入捕鱼
function RepluginModule:postToSepperllitaIsAllow(isAllow)
    local isSupportRePlugin,isNewRePlugin = self:isSupportRePlugin()
    if not isSupportRePlugin or not isNewRePlugin then
        return
    end
    local info =
    {
        ["pg"]       = "P1175",
        ["blk"]      = "BHO999",
        ["bl"]       = "宿主埋点",
        ["label"]    = "是否允许启动捕鱼",
        ["Act"]      = "push",
        ["is_allow"]     = isAllow and 1 or 0,
    }
    local deInfo = json.encode(info)
    repluginSdk.postToSepperllita(deInfo)
end

return RepluginModule