local TeaHouseHotUpdateData = {
    HotUpdateScene = "app.hotupdate.teahouse.TeaHouseHotUpdateScene",
    HotUpdateLoader = "app.hotupdate.teahouse.TeaHouseHotUpdateLoader",
}

local targetPlatform = cc.Application:getInstance():getTargetPlatform()
if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform then
    TeaHouseHotUpdateData["HotUpdateManifest"] = "TeaHouse/project_20001.manifest"
else
    TeaHouseHotUpdateData["HotUpdateManifest"] = "TeaHouse/project_10001.manifest"
end

return TeaHouseHotUpdateData