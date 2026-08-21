local PopLayerManager = class("PopLayerManager")

function PopLayerManager:ctor()
    self._allPopLayer = {}
end

function PopLayerManager:showLayer(layerClassName, initArvg)
    local classPath = "game.Common.Tip." .. layerClassName
    if not CF.FileTool.isFileExist(classPath) then
        return
    end
    
    local popLayer = require(classPath).new()
    popLayer:init(unpack(initArvg or {}))
    local layerName = popLayer.__cname
    self:removeLayer(layerName)
    popLayer:showSelf()
    table.insert(self._allPopLayer, popLayer)
    return popLayer
end

function PopLayerManager:getLayer(layerName)
    if not layerName or layerName == "" then
        return
    end
    for _, layer in pairs(self._allPopLayer) do
        if layerName == layer.__cname then
            return layer
        end
    end
end

function PopLayerManager:removeLayer(layerName)
    if not layerName or layerName == "" then
        return
    end
    for index, layer in ipairs(self._allPopLayer) do
        if layerName == layer.__cname then
            layer:closeSelf()
            table.remove(self._allPopLayer, index)
            return
        end
    end
end

function PopLayerManager:onDestroy()
    for _, layer in pairs(self._allPopLayer) do
        layer:closeSelf()
    end
    self._allPopLayer = {}
end

return PopLayerManagerg