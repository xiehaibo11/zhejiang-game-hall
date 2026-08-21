-- 资源检查模块
local EntryResChecker = {}

local hotfixListener = {}

function hotfixListener:onChooseHotFixType(_, hotfixType)
    self._manager:doUpdate(hotfixType, true)
end

function hotfixListener:onSuccess()
    XH.TipTool.showToast("成功", 3)
end

function hotfixListener:onFailed()
    print("失败")
end

function hotfixListener:onProgress()
end

function EntryResChecker._startHotFix()
    local hotfixData = {
        HotUpdateList = {
            ["Entry"] = "Entry/project.manifest"
        }
    }
    local manager = un.hotfix.HotFixManager.new(hotfixListener, "GameHotUpdate3", true, true, 0)
    hotfixListener._manager = manager
    manager:start(hotfixData)
end

return EntryResChecker
