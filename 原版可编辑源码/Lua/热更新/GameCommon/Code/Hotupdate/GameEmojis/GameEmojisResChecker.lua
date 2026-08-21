-- 资源检查模块
local GameEmojisResChecker = class("GameEmojisResChecker")

-- 初始化数据
function GameEmojisResChecker:ctor()
    self._scene = nil
end
---------------------------------------------------------------------------
--    热更功能
---------------------------------------------------------------------------

-- 启动热更函数
-- @param rootPath		表示本地manifest的根路径
-- @param manifestPath  表示本地manifest的路径
-- @param key		    表示下载下来的manifest放在热更目录下的文件夹名字
-- @param isFirst		是否是清理资源后第一次热更
function GameEmojisResChecker._startHotFix(rootNode, rootPath, manifestPath, key, isFirst)
    -- isFirst 默认值为 false
    isFirst = isFirst or false
	GameEmojisResChecker._rootNode = rootNode
	GameEmojisResChecker._rootPath = rootPath
	GameEmojisResChecker._manifestPath = manifestPath
	GameEmojisResChecker._keyName = key
	local EmojisScene = require("GameCommon.Code.Hotupdate.GameEmojis.GameEmojisScene") 
	GameEmojisResChecker._scene = EmojisScene:new()
	GameEmojisResChecker._scene:start(rootNode,key)
    -- 热更信息，可以放在这里，也可以像老热更一样放在一个单独的文件里面
    local hotfixData = {
        HotUpdateList = {},
    }
	hotfixData.HotUpdateList[key] = manifestPath
    -- HotFixManager 是热更对外提供的接口， "HotUpdate" 表示manifest的路径
    -- 将这个值拼在 project.manifest 前面，如 HotUpdate/Lobby/project.manifest
	-- 最后一个参数为热更新优先级
	local HotfixListener = require("GameCommon.Code.Hotupdate.GameEmojis.HotfixListener")
	local hotfixListenerTmp = HotfixListener:new(GameEmojisResChecker,rootNode,key)
    local manager = un.hotfix.HotFixManager.new(hotfixListenerTmp, rootPath, isFirst, true, 99)
    hotfixListenerTmp._manager = manager
    -- 调用 start 函数启动热更
    manager:start(hotfixData)
end

return GameEmojisResChecker