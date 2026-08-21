-- 资源检查模块
local MahFaceChecker = {}

-- 初始化数据
function MahFaceChecker:_initData()
    self._scene = nil
	self._loader = nil
	self._needUpdate = false
	self._mahfaceHotUpdata = {}
	self._gameName = nil
	self._areaid = nil
	self._priority = 0
end
---------------------------------------------------------------------------
--    热更功能
---------------------------------------------------------------------------

-- 热更监听器
local hotfixListener = {}

-- 选择热更类型通知函数
-- @param key			游戏热更的key为游戏名+区号
-- @param hotfixType    更新类型
-- @param oldVersion    老版本号
-- @param newVersion    更新版本号
-- @param msg           更新消息
function hotfixListener:onChooseHotFixType(key, hotfixType, oldVersion, newVersion, msg)
	print("更新宝返回信息："..msg.."  hotfixType:"..hotfixType)
	if hotfixType > un.const.HotFixType.FORCE then
		hotfixType = un.const.HotFixType.FORCE
	end
    if hotfixType == un.const.HotFixType.FORCE then -- 强制更新
        print("force")
		cc.UserDefault:getInstance():setBoolForKey("KW_DATA_NEED_FORCE_UPDATE_GAME_MahFace"..key, true)
		MahFaceChecker._needUpdate = true
		MahFaceChecker._scene:start()
		MahFaceChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.NORMAL then -- 普通更新
        print("choose")
		MahFaceChecker._needUpdate = true
		MahFaceChecker._scene:start()
		MahFaceChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.SILENT then -- 静默更新
        print("slient")
		MahFaceChecker._needUpdate = false
        self._manager:doUpdate(hotfixType, false)
		MahFaceChecker._scene:showProgress(100)
		MahFaceChecker._loader.load()
		MahFaceChecker._scene.isHotUpdate = false
		MahFaceChecker._scene._gameName = MahFaceChecker._gameName
		MahFaceChecker._scene:hotUpdateSuccess()
    else -- 无需更新
		MahFaceChecker._needUpdate = false
        print("noupdate")
		MahFaceChecker._scene:showProgress(100)
		MahFaceChecker._loader.load()
		MahFaceChecker._scene._gameName = MahFaceChecker._gameName
		MahFaceChecker._scene.isHotUpdate = false
		MahFaceChecker._scene:hotUpdateSuccess()
		MahFaceChecker._gameName = nil
    end
end

-- 热更成功通知函数
-- @param key       热更成功的模块名
function hotfixListener:onSuccess(key)
    -- 在此做热更成功的相关处理，如 Reload，启动游戏等
    if MahFaceChecker._needUpdate == true then
        MahFaceChecker._loader.reload()
    else
        MahFaceChecker._loader.load()
    end
	MahFaceChecker._gameName = nil
	MahFaceChecker._scene:hotUpdateSuccess()
end

-- 热更失败通知函数
-- @param key       热更失败的模块名
-- @param error     错误
-- @param msg       错误消息
-- @param data      错误数据
function hotfixListener:onFailed(key, error, msg, data)
    print("onFailed_error_" .. error.code)
    -- NEED_RESTART 错误需要做特殊处理，遇到此错误应该尝试一下强制清理资源
    if error == un.const.HotFixError.NEED_RESTART then
		MahFaceChecker._startHotFix(MahFaceChecker._areaid, MahFaceChecker._gameName, MahFaceChecker._rootPath, MahFaceChecker._priority, true)
    else
        -- 热更失败，做相关处理
		MahFaceChecker._scene:hotUpdateFaile(msg,MahFaceChecker._gameName)
    end
end

-- 热更进度通知函数
-- @param stage     当前进行的是哪一步
-- @param progress  当前的进度
function hotfixListener:onProgress(stage, progress)
    -- 进度条显示的是下载进度
    if stage == un.const.HotFixStage.DOWNLOAD then
        -- 这里可以更新进度条
		MahFaceChecker._scene:showProgress(progress * 100)
    end
end

-- 启动热更函数
function MahFaceChecker._startHotFix(areaid, key, priority, isFirst)
	--初始化和赋值
	MahFaceChecker:_initData()
	MahFaceChecker._priority = priority
	MahFaceChecker._mahfaceHotUpdata = require("app.hotupdate.mahface.MahFaceHotUpdateData")
	areaid = areaid or MahFaceChecker._mahfaceHotUpdata.getAreaIdWithSameMahFaceRes()
	key = key or "MahFace_" .. areaid
	MahFaceChecker._areaid = areaid
	MahFaceChecker._gameName = key
	MahFaceChecker._manifestPath = MahFaceChecker._mahfaceHotUpdata.getMahFaceHotUpdateManifest()
	MahFaceChecker._scene = require(MahFaceChecker._mahfaceHotUpdata.HotUpdateScenePath)
	MahFaceChecker._loader = require(MahFaceChecker._mahfaceHotUpdata.HotUpdateLoaderPath)
    isFirst = isFirst or false

    -- 热更信息，可以放在这里，也可以像老热更一样放在一个单独的文件里面
    local hotfixData = {
        HotUpdateList = {},
    }
	hotfixData.HotUpdateList[key] = MahFaceChecker._manifestPath
   
    local manager = un.hotfix.HotFixManager.new(hotfixListener, "GameHotUpdate3", isFirst, true, priority)
    hotfixListener._manager = manager
    -- 调用 start 函数启动热更
    manager:start(hotfixData)
end

return MahFaceCheckerY