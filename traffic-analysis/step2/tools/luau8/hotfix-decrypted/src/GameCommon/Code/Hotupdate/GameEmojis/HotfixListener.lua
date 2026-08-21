-- 热更监听器
local hotfixListener = class("hotfixListener")
local GameResChecker = nil
function hotfixListener:ctor(hotfixListener, ResChecker)
	GameResChecker = ResChecker
end

-- 选择热更类型通知函数
-- @param key			热更失败的模块名
-- @param hotfixType    更新类型
-- @param oldVersion    老版本号
-- @param newVersion    更新版本号
-- @param msg           更新消息
function hotfixListener:onChooseHotFixType(key, hotfixType, oldVersion, newVersion, msg)
	print("更新宝返回信息："..msg.."  hotfixType:"..hotfixType)
	--表情包下载不做静默热更
    if hotfixType >= un.const.HotFixType.FORCE then -- 强制更新
        print("force")
		GameResChecker._scene:needHotUpdate(key,  oldVersion, newVersion)
        self._manager:doUpdate(hotfixType, true)
    else -- 无需更新
        print("noupdate")
		GameResChecker._scene:hotUpdateSuccess(key)
    end
end

-- 热更成功通知函数
-- @param key       热更失败的模块名
function hotfixListener:onSuccess(key)
    -- 在此做热更成功的相关处理，如 Reload，启动游戏等
	GameResChecker._scene:hotUpdateSuccess(key, true)
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
		GameResChecker._startHotFix(GameResChecker._rootNode, GameResChecker._rootPath, GameResChecker._manifestPath,GameResChecker._keyName,  true)
    else
        -- 热更失败，做相关处理
		GameResChecker._scene:hotUpdateFailed(key, msg)
    end
end

-- 热更进度通知函数
-- @param stage     当前进行的是哪一步
-- @param progress  当前的进度
-- @param key		当前热更的模块
function hotfixListener:onProgress(stage, progress, key)
    -- 进度条显示的是下载进度
    if stage == un.const.HotFixStage.DOWNLOAD then
        -- 这里可以更新进度条
		GameResChecker._scene:hotUpdateProgress(progress * 100, key)
		print("key:"..key.." progress:"..progress * 100)
    end
end

return hotfixListenerX	