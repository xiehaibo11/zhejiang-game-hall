-- 资源检查模块
local AniChecker = {}

AniChecker.KW_ANI_TYPE = {
	GAMECOMMON = "GameCommonAni",
	DATONG = "DaTongAni",
	DOUBLEKOU = "DoubleKouAni",
	LANDLORDS = "LandlordsAni",
	MAHJONG = "MahjongAni",
	SHUTCARDS = "ShutCardsAni",
}

-- 初始化数据
function AniChecker:_initData()
    self._scene = nil
	self._loader = nil
	self._needUpdate = false
	self._gameAniHotUpdata = {}
	self._gameType = nil
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
		cc.UserDefault:getInstance():setBoolForKey("KW_DATA_NEED_FORCE_UPDATE_GAME_ANI"..key, true)
		AniChecker._needUpdate = true
		AniChecker._scene:start(AniChecker._gameType)
		AniChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.NORMAL then -- 普通更新
        print("choose")
		AniChecker._needUpdate = true
		AniChecker._scene:start(AniChecker._gameType)
		AniChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    elseif hotfixType == un.const.HotFixType.SILENT then -- 静默更新
        print("slient")
		AniChecker._needUpdate = false
        self._manager:doUpdate(hotfixType, false)
		AniChecker._scene:showProgress(100)
		AniChecker._loader.load()
		AniChecker._scene.isHotUpdate = false
		AniChecker._scene:hotUpdateSuccess()
    else -- 无需更新
		AniChecker._needUpdate = false
        print("noupdate")
		AniChecker._scene:showProgress(100)
		AniChecker._loader.load()
		AniChecker._scene.isHotUpdate = false
		AniChecker._scene:hotUpdateSuccess()
    end
end

-- 热更成功通知函数
-- @param key       热更成功的模块名
function hotfixListener:onSuccess(key)
    -- 在此做热更成功的相关处理，如 Reload，启动游戏等
    if AniChecker._needUpdate == true then
        AniChecker._loader.reload()
    else
        AniChecker._loader.load()
    end
	AniChecker._scene:hotUpdateSuccess()
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
		AniChecker._startHotFix(AniChecker._gameType, AniChecker._priority, true)
    else
        -- 热更失败，做相关处理
		AniChecker._scene:hotUpdateFaile()
    end
end

-- 热更进度通知函数
-- @param stage     当前进行的是哪一步
-- @param progress  当前的进度
function hotfixListener:onProgress(stage, progress)
end

-- 启动热更函数
function AniChecker._startHotFix(gametype, priority, isFirst)
	--初始化和赋值
	AniChecker:_initData()
	AniChecker._priority = priority
	AniChecker._gameType = gametype
	AniChecker._gameAniHotUpdata = require("app.hotupdate.gameani.GameAniHotUpdateData")
	AniChecker._manifestPath = AniChecker._gameAniHotUpdata.getGameAniHotUpdateManifest(gametype)
	AniChecker._scene = require(AniChecker._gameAniHotUpdata.HotUpdateScenePath)
	AniChecker._loader = require(AniChecker._gameAniHotUpdata.HotUpdateLoaderPath)
    isFirst = isFirst or false

    -- 热更信息，可以放在这里，也可以像老热更一样放在一个单独的文件里面
    local hotfixData = {
        HotUpdateList = {},
    }
	hotfixData.HotUpdateList[gametype] = AniChecker._manifestPath
   
    local manager = un.hotfix.HotFixManager.new(hotfixListener, "GameHotUpdate3", isFirst, true, priority)
    hotfixListener._manager = manager
    -- 调用 start 函数启动热更
    manager:start(hotfixData)
end

return AniChecker