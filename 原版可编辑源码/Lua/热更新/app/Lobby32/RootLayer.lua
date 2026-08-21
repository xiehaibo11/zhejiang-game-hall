local RootLayer = class("RootLayer")

local TOTAL_BACKGROUND_OPACITY = 255 * 0.7

function RootLayer:ctor()
    self._popLayers = {}
    self._topLayerInstance = nil
    self._rootNode = nil
end

function RootLayer:getInstance()
    if RootLayer._topLayerInstance == nil then
        RootLayer._topLayerInstance = RootLayer.new()
    end
    return RootLayer._topLayerInstance
end

function RootLayer:init()         
    if self._rootNode == nil then
        self._rootNode = cc.Layer:create()   
        local s = XH.GT.UIFunction.getDesignSize() 
        self._rootNode:setPosition(cc.p(0,0))
        self._rootNode:setAnchorPoint(cc.p(0,0))     
        self._rootNode:setContentSize(s)
        self._rootNode:retain()
        self:moveToRunningScene()     
    end 
end

function RootLayer:moveToRunningScene() 
    local runScene = display.getRunningScene()
    if runScene ~= self._rootNode:getParent() then
        self._rootNode:removeSelf()
        runScene:addChild(self._rootNode,9999)
    end
end

function RootLayer:adjustBackgroundLayerOpacity()  
    local haveBackGroudLayer = {}  
    for i = 1,#self._popLayers do
        if self:judgeHaveBackGroud(self._popLayers[i]._popLayer) then
            table.insert(haveBackGroudLayer,i)
        end
    end   
    
    for i = 1,#haveBackGroudLayer do
        local nOp = TOTAL_BACKGROUND_OPACITY / #haveBackGroudLayer  
        --local action = cc.FadeTo:create(0.2,nOp)
        --self._popLayers[haveBackGroudLayer[i]]._popLayer:stopAllActions()          
        --self._popLayers[haveBackGroudLayer[i]]._popLayer:runAction(action)    
        self._popLayers[haveBackGroudLayer[i]]._popLayer:setOpacity(nOp)      
    end   
end

function RootLayer:judgeHaveBackGroud(layer)    
    if layer.getBackGroundColorType == nil then
        return false
    end
    
    if layer:getBackGroundColorType() ~= ccui.LayoutBackGroundColorType.solid then
        return false
    end    
    
    if layer:isVisible() == false then
        return false
    end
    return true 
end


function RootLayer:pushLayer(layer)
    self._rootNode = nil
    self:init() 
    --local classCount = 1
    local layerName = layer.__cname
    if layerName ~= nil then  
        for i = #self._popLayers,1,-1 do
            if self._popLayers[i]._popLayer:getName() == layerName then
                self._popLayers[i]._popLayer:removeSelf()
                table.remove(self._popLayers,i)
                --classCount = classCount + 1
            end
        end
    end
    
    --if layer._refCount ~= nil then
    --    layer._refCount = classCount
    --end
--    if layerName == "LoadingLayer" then
--        print("LoadingLayer count add"..classCount)
--    end
    
    self._rootNode:addChild(layer._popLayer)  
    local children = layer._popLayer:getChildren()
    for i = 1,#children do
        XH.GT.adapt9Box(children[i])
--        children[i]:setScaleX(layer._popLayer:getScaleX())
--        children[i]:setScaleY(layer._popLayer:getScaleY())
--        XH.GT.adaptNewCreate(children[i])
    end 

    table.insert(self._popLayers,layer)
    self:adjustBackgroundLayerOpacity()
end

function RootLayer:popLayer(layername)    
    local removeLayerIndex = #self._popLayers  
    
    local className = layername or self._popLayers[#self._popLayers].__cname
    for i = #self._popLayers,1,-1 do
        if self._popLayers[i].__cname == className or self._popLayers[i].__cname == string.match(className,self._popLayers[i].__cname) then
            removeLayerIndex = i
            break
        end
    end
    
    if self._popLayers[removeLayerIndex] == nil then
        return
    end
    if self._popLayers[removeLayerIndex].__cname ~= className and self._popLayers[removeLayerIndex].__cname ~= string.match(className,self._popLayers[removeLayerIndex].__cname) then
        return
    end
         
--    if self._popLayers[removeLayerIndex]._refCount ~= nil then
--        print("self._popLayers[removeLayerIndex]._refCount className :"..className .. " "..self._popLayers[removeLayerIndex]._refCount)
--        self._popLayers[removeLayerIndex]._refCount = self._popLayers[removeLayerIndex]._refCount - 1
--        
--        if className == "LoadingLayer" then
--        print("LoadingLayer count remove"..self._popLayers[removeLayerIndex]._refCount)
--        end
--    
--        if self._popLayers[removeLayerIndex]._refCount > 0 then
--            return
--        end   
--    end
    self._popLayers[removeLayerIndex]._popLayer:removeSelf()
    --self._popLayers[removeLayerIndex]._popLayer = nil
    table.remove(self._popLayers,removeLayerIndex)
       
    self:adjustBackgroundLayerOpacity()
end

function RootLayer:getLayer(layername)    
    for i = #self._popLayers,1,-1 do
        if self._popLayers[i].__cname == layername then
            return self._popLayers[i]
        end
    end  
end

function RootLayer:getTopLayer()
    return self._popLayers[#self._popLayers]
end

--清除所有的弹窗
function RootLayer:clearLayers()
    for i = #self._popLayers,1,-1 do
        if self._popLayers[i]._popLayer:isVisible() then
            self._popLayers[i]:showLayer(false)
        end
    end
end

function RootLayer:setVisibleLayer(layername, isVisible)    
    local layerIndex = #self._popLayers  

    local className = layername or self._popLayers[#self._popLayers].__cname
    for i = #self._popLayers,1,-1 do
        if self._popLayers[i].__cname == className then
            layerIndex = i
            break
        end
    end

    if self._popLayers[layerIndex] == nil then
        return
    end
    if self._popLayers[layerIndex].__cname ~= className and self._popLayers[layerIndex].__cname ~= string.match(className,self._popLayers[layerIndex].__cname) then
        return
    end
    if self._popLayers[layerIndex]._isRender == false then
        return
    end
    self._popLayers[layerIndex]._popLayer:setVisible(isVisible)
end

function RootLayer:setLocalZOrder(layername, zorder)
    local cls = self:getLayer(layername)
    if cls then
        cls._popLayer:setLocalZOrder(zorder)
    end
end

return RootLayer