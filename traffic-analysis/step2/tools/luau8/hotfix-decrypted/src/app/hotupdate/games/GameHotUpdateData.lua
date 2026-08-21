local targetPlatform = cc.Application:getInstance():getTargetPlatform()
local platformPath = "10001"
if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform  then       
    platformPath = "20001"
end

local Games = {
    HotUpdateLoaderPath = "app.hotupdate.games.GameHotUpdateLoader",        
    HotUpdateScenePath  = "app.hotupdate.games.GameHotUpdateScene",         
    HotUpdateList = {               
        Mahjong = "Mahjong/project_" .. platformPath ..  ".manifest",
        DoubleKou = "Card/project_" .. platformPath ..  ".manifest",
        ShutCards = "Card/project_" .. platformPath ..  ".manifest",
        Landlords = "Card/project_" .. platformPath ..  ".manifest",
        HongShi = "Card/project_" .. platformPath ..  ".manifest",
        DaTong = "Card/project_" .. platformPath ..  ".manifest",
        LookAnxiously = "Card/project_" .. platformPath ..  ".manifest",
        Card = "Card/project_" .. platformPath ..  ".manifest",
        ["20096"] = "20096/project_" .. platformPath ..  ".manifest",
    },
}

local function isSupportASTC()
    if device.platform == "android" then
        local luaj = require("cocos.cocos2d.luaj")
        local ok, retVal = luaj.callStaticMethod("org/cocos2dx/lib/Cocos2dxRenderer", "getSupportAstc", {}, "()Ljava/lang/String;")
        if ok and retVal == "1" then
            return true
        end
    end
    if device.platform == "ios" then
        local luaoc = require("cocos.cocos2d.luaoc")
        local ok, retVal = luaoc.callStaticMethod("AppController", "isSupportASTC", {})
        if ok and retVal == "1" then
            return true
        end
    end
    return false
end

if isSupportASTC() then
    Games.HotUpdateList.Mahjong = "Mahjong/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.DoubleKou = "Card/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.ShutCards = "Card/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.Landlords = "Card/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.HongShi = "Card/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.DaTong = "Card/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.LookAnxiously = "Card/project_" .. platformPath .. "_astc.manifest"
    Games.HotUpdateList.Card = "Card/project_" .. platformPath .. "_astc.manifest"
end

return Games�	