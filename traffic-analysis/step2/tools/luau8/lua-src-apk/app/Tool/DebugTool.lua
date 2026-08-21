local DebugTool = class("DebugTool")
-- 日志级别->对应日志输出级别->XH.DEBUG_TYPE
local DebugTool_LOGTYPE = XH.DEBUG_TYPE.DEBUG

-- 日志场景->日志输出场景->XH.SCENE_TAG
local DebugTool_LOGSCENE = {XH.SCENE_TAG.LOBBY, XH.SCENE_TAG.LOGIN}

-- 场景是否应该被输出
local function DebugTool_Should_Be_Print(scene)
    local logScene = 0
    for i = 1, #DebugTool_LOGSCENE do
        logScene = logScene + 2 ^ DebugTool_LOGSCENE[i]
    end
    local debugPringScene = bit:d2b(logScene)
    if debugPringScene[64 - scene] == 1 then
        return true
    end
    return false
end

-- 输出DEBUG级别的日志
function DebugTool.printDebug(scene, value)
    if DebugTool_Should_Be_Print(scene) and DebugTool_LOGTYPE ~= XH.DEBUG_TYPE.INFO then
        print("debug:" .. value)
    end
end

-- 输出INFO级别的日志
function DebugTool.printInfo(scene, value)
    if DebugTool_Should_Be_Print(scene) and DebugTool_LOGTYPE ~= XH.DEBUG_TYPE.DEBUG then
        print("info:" .. value)
    end
end

return DebugTool/