
local MahFace = {
    HotUpdateLoaderPath = "app.hotupdate.mahface.MahFaceHotUpdateLoader",
    HotUpdateScenePath  = "app.hotupdate.mahface.MahFaceHotUpdateScene",
    HotUpdateManifest = "MahFace/project_%d" ..  ".manifest",
}

local AreaidSameMahFaceRes = 
{
    [7129] = 7128, --青田丽水同一套
    [7119] = 7107, --嘉兴和余姚是同一套
    [7133] = 7104, --舟山和绍兴是同一套
    [7105] = 7126, --熟客和瑞安是同一套
}


function MahFace.getMahFaceHotUpdateManifest()
    local areaid = MahFace.getAreaIdWithSameMahFaceRes()
    local stringManifest = string.format( MahFace.HotUpdateManifest, areaid )
    return stringManifest
end

function MahFace.getAreaIdWithSameMahFaceRes()
    local areaid = XH.areaData:getAreaID()
    if AreaidSameMahFaceRes[areaid] then
        areaid = AreaidSameMahFaceRes[areaid] 
    end

    return areaid 
end

return MahFace