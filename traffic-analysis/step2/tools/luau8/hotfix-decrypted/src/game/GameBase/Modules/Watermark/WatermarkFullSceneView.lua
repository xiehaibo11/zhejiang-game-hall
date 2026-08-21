local WatermarkFullSceneView = CF.gameClass("WatermarkFullSceneView", CF.ViewBase)

function WatermarkFullSceneView:ctor()
    WatermarkFullSceneView.super.ctor(self)
end

function WatermarkFullSceneView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/WatermaskFullScene.csb"
end

function WatermarkFullSceneView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = { varName = "_imgBg"},
    }
end

return WatermarkFullSceneView�