local Launcher = class("Launcher")

local targetPlatform = cc.Application:getInstance():getTargetPlatform()
local HOTUPDATE_OPEN = false
if device.platform == "windows" and WINDOWS_HOTUPDATE_OPEN then
    HOTUPDATE_OPEN = true
end
if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform or cc.PLATFORM_OS_ANDROID == targetPlatform then
    HOTUPDATE_OPEN = true
end
local PACKAGE_UPDATE_OPEN = false
if cc.PLATFORM_OS_ANDROID == targetPlatform then
    PACKAGE_UPDATE_OPEN = true
end

function Launcher:getInstance()
    if Launcher._launcher == nil then
        Launcher._launcher = Launcher.new()
    end
    return Launcher._launcher
end

function Launcher:setSelfLauncher(bFlag)
    Launcher._selfLauncher = bFlag
end

function Launcher:getSelfLauncher()
    return Launcher._selfLauncher
end

function Launcher:startCallBack()
    -- 如果不需要强更，才进行热更
    XH.NewThrowDataManager:AnalyseStartData("开始热更")
    if HOTUPDATE_OPEN then
        require("app.hotupdate.universe.init")
        local ResChecker = require("app.hotupdate.lobby.ResChecker")
        ResChecker.start()
        return
    end
    self:onLaunchSuccess()
end

function Launcher:start()
    local isNeedDelayInitSDK = cc.Application:getInstance():getVersion() >= "1.5.0"
    if cc.Application:getInstance():getTargetPlatform() == cc.PLATFORM_OS_ANDROID then
        require("app.init")
        if not isNeedDelayInitSDK then
            -- 延后初始化ymnsdk
            XH.ThirdDefine.INIT_SDK_FUNC()  
        end
    end
    --隐私权限相关修改，将共享服务SDK初始化延后
    if device.platform == "ios" and cc.Application:getInstance():getVersion() >= "1.3.10" then
        xh.XHBridge:xhCallOCFunc("", "sdk_init", json.encode(nil))
    end
    if cc.PLATFORM_OS_ANDROID ~= targetPlatform or isNeedDelayInitSDK then
        -- 安卓延后初始化ymnsdk，所以这里放开，直接进游戏
        self:gotoStartLaunch()
    end
end

local isAlreadyLaunch = false
function Launcher:gotoStartLaunch()
    if isAlreadyLaunch then
        return
    end
    isAlreadyLaunch = true
    -- 安卓包体热更 由于高仿机制暂时注释，防止玩家异常
    -- local bYSCL = cc.UserDefault:getInstance():getIntegerForKey("KW_YSCL_YSQX", 0)
    -- if PACKAGE_UPDATE_OPEN and bYSCL == 1 then
    --     require("app.hotupdate.universe.init")
    --     local ui = require("app.PackageDownload.UI").new()
    --     ui:start(handler(self, self.startCallBack))
    --     local check = require("app.PackageDownload.Check").new()
    --     check:start(handler(self, self.startCallBack))
    --     return
    -- else
    self:startCallBack()
    -- end
end

function Launcher:setAlreadyLaunch()
    isAlreadyLaunch = true
end

function Launcher:onLaunchSuccess()
    --加载资源搜索路径
    local writablePath = cc.FileUtils:getInstance():getWritablePath()
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/src/")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/hall")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/Common")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/Lobby32")
    cc.FileUtils:getInstance():addSearchPath(writablePath .. "hotfix/res/cocosStudio/TeaHouse")

    cc.FileUtils:getInstance():addSearchPath("src/")
    cc.FileUtils:getInstance():addSearchPath("res/")
    cc.FileUtils:getInstance():addSearchPath("res/cocosStudio")
    cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/hall")
    cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/Common")
    cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/Lobby32")
    cc.FileUtils:getInstance():addSearchPath("res/cocosStudio/TeaHouse")
    self:reloadFileExists()
    self:setAlreadyLaunch()
    require("app.MyApp").new():afterHotUpdateRun()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.HOTUPDATE_SUCCESS, nil, {user_ip=un.Device.getIp()})
end

-- 优化fileexists接口，不多次查询文件是否存在
local Cache_FILE_LISTS = { ".lua", ".luac", ".json" }
function Launcher:reloadFileExists()
    local originalFileUtils = cc.FileUtils:getInstance()
    local originalIsFileExist = originalFileUtils.isFileExist
    function originalFileUtils:isFileExist(filePath)
        if XH.FileCache == nil then
            XH.FileCache = {}
        end
        -- 只有true先返回，公共接口 因为动画热更，可能一开始不存在，后续存在的情况
        if XH.FileCache[filePath] == true then
            return XH.FileCache[filePath]
        end
        local exists = originalIsFileExist(self, filePath)
        if exists then
            for i = 1, #Cache_FILE_LISTS do
                if string.find(filePath, Cache_FILE_LISTS[i]) then
                    XH.FileCache[filePath] = exists
                    break
                end
            end
        end
        return exists
    end
end

return Launcher
�