---@class TeaHouseResChecker 比赛场资源检查模块
local TeaHouseResChecker = {}

---初始化数据
function TeaHouseResChecker._initData()
    local TeaHouseHotUpdateData = require("app.hotupdate.teahouse.TeaHouseHotUpdateData")
    TeaHouseResChecker._scene = require(TeaHouseHotUpdateData.HotUpdateScene)
    TeaHouseResChecker._loader = require(TeaHouseHotUpdateData.HotUpdateLoader)
    TeaHouseResChecker._manifestPath = TeaHouseHotUpdateData.HotUpdateManifest
    TeaHouseResChecker._needUpdate = false
end

-- 热更监听器
local HotUpdateListener = {}

-- 选择热更类型通知函数
-- @param key			游戏热更的key为游戏名+区号
-- @param hotfixType    更新类型
-- @param oldVersion    老版本号
-- @param newVersion    更新版本号
-- @param msg           更新消息
function HotUpdateListener:onChooseHotFixType(key, hotfixType, oldVersion, newVersion, msg)
    print("更新宝返回信息：" .. msg .. "  hotfixType:" .. hotfixType)
    if hotfixType > un.const.HotFixType.FORCE then
        hotfixType = un.const.HotFixType.FORCE
    end
    if hotfixType == un.const.HotFixType.FORCE then -- 强制更新
        print("TeaHouse force update")
        TeaHouseResChecker._needUpdate = true
        TeaHouseResChecker._scene.start()
        TeaHouseResChecker._scene.needHotUpdate(key, oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.NORMAL then -- 普通更新
        print("TeaHouse choose update")
        TeaHouseResChecker._needUpdate = true
        TeaHouseResChecker._scene.start()
        TeaHouseResChecker._scene.needHotUpdate(key, oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.SILENT then -- 静默更新
        print("TeaHouse slient update")
        TeaHouseResChecker._needUpdate = true
        TeaHouseResChecker._scene.start()
        TeaHouseResChecker._scene.needHotUpdate(key, oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    else -- 无需更新
        TeaHouseResChecker._needUpdate = false
        TeaHouseResChecker._scene.hotUpdateProgress(100)
        TeaHouseResChecker._loader.load()
        TeaHouseResChecker._scene.isHotUpdate = false
        TeaHouseResChecker._scene.hotUpdateSuccess()
    end
end

-- 热更成功通知函数
-- @param key       热更成功的模块名
function HotUpdateListener:onSuccess(key)
    if TeaHouseResChecker._needUpdate then
        TeaHouseResChecker._loader.reload()
    else
        TeaHouseResChecker._loader.load()
    end
    TeaHouseResChecker._needUpdate = false
    TeaHouseResChecker._scene.hotUpdateSuccess()
end

-- 热更失败通知函数
-- @param key       热更失败的模块名
-- @param error     错误
-- @param msg       错误消息
-- @param data      错误数据
function HotUpdateListener:onFailed(key, error, msg, data)
    print("TeaHouse onFailed error " .. error.code)
    -- NEED_RESTART 错误需要做特殊处理，遇到此错误应该尝试一下强制清理资源
    if error == un.const.HotFixError.NEED_RESTART then
        TeaHouseResChecker.start(true)
    else
        -- 热更失败，做相关处理
        TeaHouseResChecker._scene.hotUpdateFaile(msg)
    end
end

---热更进度通知函数
-- @param stage     当前进行的是哪一步
-- @param progress  当前的进度
function HotUpdateListener:onProgress(stage, progress)
    -- 进度条显示的是下载进度
    if stage == un.const.HotFixStage.DOWNLOAD then
        -- 这里可以更新进度条
        TeaHouseResChecker._scene.hotUpdateProgress(progress * 100)
    end
end

---启动热更函数
function TeaHouseResChecker.start(isFirst)
    isFirst = isFirst or false

    TeaHouseResChecker._initData()

    local hotUpdateData = {
        HotUpdateList = {
            TeaHouse = TeaHouseResChecker._manifestPath
        },
    }
    local manager = un.hotfix.HotFixManager.new(HotUpdateListener, "GameHotUpdate3", isFirst, true, 0)
    HotUpdateListener._manager = manager
    manager:start(hotUpdateData)
end

function TeaHouseResChecker.isHotUpdate()
    return TeaHouseResChecker._needUpdate
end

function TeaHouseResChecker.setDelegate(delegate)
    if TeaHouseResChecker._scene then
        TeaHouseResChecker._scene.setDelegate(delegate)
    end
end

return TeaHouseResChecker�