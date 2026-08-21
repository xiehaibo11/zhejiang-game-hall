local WatermarkModule = CF.gameClass("WatermarkModule", CF.ModuleBase)

function WatermarkModule:ctor()
	WatermarkModule.super.ctor(self)
end

function WatermarkModule:addWatermark(node, pos, scale)
    if not CF or not CF.roomData then return end
    local showWaterMark = CF.roomData:getIsSeer()
    if not showWaterMark then return end
    if not node or node._watermark then return end
    local Watermark = CF.gameRequire("Modules.Watermark.WatermarkView")
    local watermarkNode = Watermark.new()
    watermarkNode:setName("Watermark")
    watermarkNode:setPosition(pos or cc.p(0,0))
    watermarkNode:setScale(scale or 1)
    node._watermark = watermarkNode
    node:addChild(watermarkNode, 512)
end

function WatermarkModule:addWatermarkFullScene(node)
    if not CF or not CF.roomData then return end
    local showWaterMark = CF.roomData:getIsSeer()
    if not showWaterMark then return end
    if not node or node._watermarkFullScene then return end
    local WatermarkFullScene = CF.gameRequire("Modules.Watermark.WatermarkFullSceneView")
    local watermarkFullSceneNode = WatermarkFullScene.new()
    watermarkFullSceneNode:setName("WatermarkFullScene")
    node._watermarkFullScene = watermarkFullSceneNode
    node:addChild(watermarkFullSceneNode, 512)
end

return WatermarkModule