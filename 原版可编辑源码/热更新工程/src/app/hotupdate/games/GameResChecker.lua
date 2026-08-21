-- 资源检查模块
local ResChecker = {}

-- 初始化数据
function ResChecker:_initData()
    self._scene = nil
	self._loader = nil
	self._needUpdate = false
	self._gamesHotUpdata = {}
	self._gameName = nil
	self._gameid = nil
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
	--如果子游戏还没热更过，则必须为强更
	local gameVersionPath = "games"..key
	if (not cc.FileUtils:getInstance():isFileExist(gameVersionPath.."/LobbyVersion.luac") and not cc.FileUtils:getInstance():isFileExist(gameVersionPath.."/LobbyVersion.lua")) then
		if hotfixType > un.const.HotFixType.FORCE then
			hotfixType = un.const.HotFixType.FORCE
		end
	end
    if hotfixType == un.const.HotFixType.FORCE then -- 强制更新
        print("force")
		cc.UserDefault:getInstance():setBoolForKey("KW_DATA_NEED_FORCE_UPDATE"..key, true)
		ResChecker._needUpdate = true
		ResChecker._scene:start(ResChecker._gameid, ResChecker._gameName)
		ResChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        cc.UserDefault:getInstance():setStringForKey(key .. "_startUpdateTime_", os.date("%Y-%m-%d %H:%M:%S", os.time()))
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.NORMAL then -- 普通更新
        print("choose")
		cc.UserDefault:getInstance():setBoolForKey("KW_DATA_NEED_FORCE_UPDATE"..key, false)
		ResChecker._needUpdate = true
		ResChecker._scene:start(ResChecker._gameid, ResChecker._gameName)
		ResChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        cc.UserDefault:getInstance():setStringForKey(key .. "_startUpdateTime_", os.date("%Y-%m-%d %H:%M:%S", os.time()))
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.SILENT then -- 静默更新
        print("slient")
		cc.UserDefault:getInstance():setBoolForKey("KW_DATA_NEED_FORCE_UPDATE"..key, false)
		ResChecker._needUpdate = false
        cc.UserDefault:getInstance():setStringForKey(key .. "_startUpdateTime_", os.date("%Y-%m-%d %H:%M:%S", os.time()))
        self._manager:doUpdate(hotfixType, false)
		--进入游戏操作
		ResChecker._scene:showProgress(100)
		ResChecker._loader.load()
		ResChecker._scene.isHotUpdate = false
		ResChecker._scene._gameName = ResChecker._gameName
		ResChecker._scene:hotUpdateSuccess()
    else -- 无需更新
		ResChecker._needUpdate = false
        print("noupdate")
        -- 在此做启动游戏的相关处理
		ResChecker._scene:showProgress(100)
		ResChecker._loader.load()
		ResChecker._scene._gameName = ResChecker._gameName
		ResChecker._scene.isHotUpdate = false
		ResChecker._scene:hotUpdateSuccess()
		ResChecker._gameName = nil
    end
end

-- 热更成功通知函数
-- @param key       热更成功的模块名
function hotfixListener:onSuccess(key)
    -- 在此做热更成功的相关处理，如 Reload，启动游戏等
    if ResChecker._needUpdate == true then
        ResChecker._loader.reload()
    else
        ResChecker._loader.load()
    end
	lobby = lobby or {}
	lobby._needUpdate = lobby._needUpdate  or {} 
	if ResChecker._gameName then
		lobby._needUpdate[ResChecker._gameName] = false
		ResChecker._gameName = nil
		ResChecker._scene:hotUpdateSuccess()
	else
		ResChecker._scene:hotUpdateSuccess()
	end
end

-- 热更失败通知函数
-- @param key       热更失败的模块名
-- @param error     错误
-- @param msg       错误消息
-- @param data      错误数据
function hotfixListener:onFailed(key, error, msg, data)
	XH.throwDataManager:throwData(XH.ThrowDataDefine.GoldGamesLoaded, {error = error.code})
    print("onFailed_error_" .. error.code)
    -- NEED_RESTART 错误需要做特殊处理，遇到此错误应该尝试一下强制清理资源
    if error == un.const.HotFixError.NEED_RESTART then
		ResChecker._startHotFix(ResChecker._gameid, ResChecker._gameName, ResChecker._priority, true)
	elseif error == un.const.HotFixError.DOWNLOAD_VERSION_FILE_FAILED then
		cc.UserDefault:getInstance():setBoolForKey("KW_DATA_NEED_FORCE_UPDATE"..key, true)
		ResChecker._scene:hotUpdateFaile(msg,ResChecker._gameName)
    else
        -- 热更失败，做相关处理
		ResChecker._scene:hotUpdateFaile(msg,ResChecker._gameName)
    end
end

-- 热更进度通知函数
-- @param stage     当前进行的是哪一步
-- @param progress  当前的进度
function hotfixListener:onProgress(stage, progress)
    -- 进度条显示的是下载进度
    if stage == un.const.HotFixStage.DOWNLOAD then
        -- 这里可以更新进度条
		ResChecker._scene:showProgress(progress * 100)
    end
end

-- 启动热更函数
function ResChecker._startHotFix(gameid, key, priority, isFirst)
	--初始化和赋值
	ResChecker:_initData()
	ResChecker._priority = priority
	ResChecker._gameName = key
	ResChecker._gameid = gameid
	package.loaded["app.hotupdate.games.GameHotUpdateData"] = nil; --为了防止新增游戏热更新检测不到
	ResChecker._gamesHotUpdata = require("app.hotupdate.games.GameHotUpdateData")
	ResChecker._scene = require(ResChecker._gamesHotUpdata.HotUpdateScenePath).new()
	ResChecker._loader = require(ResChecker._gamesHotUpdata.HotUpdateLoaderPath)
    isFirst = isFirst or false

    -- 热更信息，可以放在这里，也可以像老热更一样放在一个单独的文件里面
    local hotfixData = {
        HotUpdateList = {},
    }
	local key2 = key
	if key == "LiangBang" or key == "DoubleKou" or key == "ShutCards" or key == "Landlords" or key == "HongShi" or key == "DaTong" or key == "LookAnxiously" or key == "WuLong" then
		-- 兼容，将之前的牌类游戏关键字转为Card
		key2 = "Card"
	end
	hotfixData.HotUpdateList[key2] = ResChecker._gamesHotUpdata.HotUpdateList[key]
   
    local manager = un.hotfix.HotFixManager.new(hotfixListener, "GameHotUpdate3", isFirst, true, priority)
    hotfixListener._manager = manager
    -- 调用 start 函数启动热更
    manager:start(hotfixData)
end

return ResChecker