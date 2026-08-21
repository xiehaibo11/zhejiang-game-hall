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
        DoubleKou = "DoubleKou/project_" .. platformPath ..  ".manifest",
        ShutCards = "ShutCards/project_" .. platformPath ..  ".manifest",
        Landlords = "Landlords/project_" .. platformPath ..  ".manifest",
        HongShi = "HongShi/project_" .. platformPath ..  ".manifest",
        DaTong = "DaTong/project_" .. platformPath ..  ".manifest",
        ["20096"] = "20096/project_" .. platformPath ..  ".manifest",
    },
}

return Games�