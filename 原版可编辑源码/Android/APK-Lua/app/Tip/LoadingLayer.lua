local LoadingLayer = class("LoadingLayer", XH.ViewBase)

local ArmatureFileConf = {
    ExportJsonPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani.ExportJson",
    PlistPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.plist",
    PngPath = "animation/Lobby/Base/loading_small_ani/loading_small_ani0.png",
}

function LoadingLayer:ctor()
    LoadingLayer.super.ctor(self)
    self:initView()
end

function LoadingLayer:getCSBPath()
    return "cocosStudio/Common/TipLayer/CSB/LoadingLayer.csb"
end

function LoadingLayer:getBindingInfo()
    return {
        ["_LOADING_ANI_PANEL"] = {varName="_panelAni"},
    }
end

function LoadingLayer:initView()
    if not cc.FileUtils:getInstance():isFileExist(ArmatureFileConf.ExportJsonPath) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(
        ArmatureFileConf.PngPath, 
        ArmatureFileConf.PlistPath,
        ArmatureFileConf.ExportJsonPath)
    XH.UITool.retainPlistAllSpriteFrames(ArmatureFileConf.PlistPath)

    cc.SpriteFrameCache:getInstance():addSpriteFrames(ArmatureFileConf.PlistPath)
    local lastCreatArmature = ccs.Armature:create("loading_small_ani")
    if lastCreatArmature then
        self._panelAni:addChild(lastCreatArmature)
        lastCreatArmature:getAnimation():play("Animation1", -1, 1)
    end
end

return LoadingLayer