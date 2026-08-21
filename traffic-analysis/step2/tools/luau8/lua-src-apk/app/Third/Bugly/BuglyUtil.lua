local BuglyUtil = {}

local isNewVersion = nil
function BuglyUtil.isNewBuglyetVersion() 
    if isNewVersion == nil then
        isNewVersion = cc.Application:getInstance():getVersion() >= "1.4.5"
    end
    return isNewVersion
end

-- 上报异常
function BuglyUtil.reportException(msg, track, title)
    if msg and track then
        if device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.06") then
            local param = {
                ["functionName"] = "bugly_upload_exception",
                ["args"] = {
                    ["traceback"] = track,
                    ["errormes"] = msg,
                }
            }
            XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", param)
        else
            if device.platform == "android" and BuglyUtil.isNewBuglyetVersion() then
                local luaj = require("cocos.cocos2d.luaj")
                luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "buglyReportLuaException", { json.encode({title = title ,msg = msg, track = track}) }, "(Ljava/lang/String;)V")
                return
            end
            if buglyReportLuaException then
                buglyReportLuaException(msg, track)
            end
        end
    end
end

-- 设置用户id
function BuglyUtil.setUserId(userId)
    if userId then
        if device.platform == "ios" and XH.SysTool:CompareToBundleVersion("1.3.06") then
            local param = {
                ["functionName"] = "bugly_setuserid",
                ["args"] = {
                    ["userid"] = userId,
                }
            }
            XH.sdkManager:xhCallOCFunc("UserInterface", "callFunction", param)
        else
            if device.platform == "android" and BuglyUtil.isNewBuglyetVersion() then
                local luaj = require("cocos.cocos2d.luaj")
                luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "buglySetUserId", { json.encode({userid = userId}) }, "(Ljava/lang/String;)V")
                return
            end
            if buglySetUserId and userId then
                buglySetUserId(userId)
            end
        end
    end
end

-- 设置用户数据
function BuglyUtil.setUserData(value, forKey)
    if value and forKey then
        if device.platform == "android" and BuglyUtil.isNewBuglyetVersion() then
            local luaj = require("cocos.cocos2d.luaj")
            luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "buglyAddUserValue", { json.encode({key = forKey, value = value}) }, "(Ljava/lang/String;)V")
            return
        end
        if buglyAddUserValue then
            buglyAddUserValue(value, forKey)
        end
    end
end

-- 设置用户数据
function BuglyUtil.buglyLog(tag, msg, level)
    tag = tag or "default"
    msg = msg or "default"
    level = level or 5
    
    if device.platform == "android" and BuglyUtil.isNewBuglyetVersion() then
        local luaj = require("cocos.cocos2d.luaj")
        if isBuglyInit then
            luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "buglyLog", { json.encode({level = level, tag = tag, log = msg}) }, "(Ljava/lang/String;)V")
        end
        return
    end
    if buglyLog then
        buglyLog(level, tag, msg)
    end
end

return BuglyUtil
