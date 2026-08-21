local PopLayer = class("PopLayer")

PopLayer.ENUM_ANI_DATA_TYPE = 
    {
        none = "none",
        csb = "csb",
        csbs = "csbs",
        action = "action",
        actions = "actions"
    }

PopLayer.LAYER_ANI_DATA = {
    aniType = PopLayer.ENUM_ANI_DATA_TYPE.none, -- 0.none 1.csb 2.action
    aniLayer = "",
    -----csb
    startIndex = 0,
    endIndex = 0,
    csbEventName = "",
    csbResourcePath = "",
    ---action
    action = "",  
}

function PopLayer:ctor()
    self._popLayer = nil
    self._canTouchBackground = true
    self._isRender = false
    self._afterCloseLayerFunc = function()

    end

    self._startCloseLayerFunc = function()

    end

    self._startShowLayerFunc = function()

    end

    self._haveBackGroud = true

    self._csbResourcePath = ""
    self._enterAniData = clone(PopLayer.LAYER_ANI_DATA)
    self._exitAniData = clone(PopLayer.LAYER_ANI_DATA)
end

function PopLayer:init()
    local s = cc.Director:getInstance():getWinSize()


    self._popLayer = ccui.Layout:create() 
    if self._haveBackGroud then
        self._popLayer:setBackGroundColorType(ccui.LayoutBackGroundColorType.solid)
        self._popLayer:setBackGroundColor(cc.c3b(0,0,0))  
        --self._popLayer:setOpacity(0)
        --self._popLayer:setVisible(false)         
    end

    self._popLayer:setTouchEnabled(self._haveBackGroud)
    self._popLayer:setName(self.__cname)

    self._popLayer:setContentSize(cc.size(2000,2000))
    self._popLayer:setAnchorPoint(cc.p(0,0))      
    self._popLayer:setPosition( cc.p( 0, 0))
    local csbLayer = cc.CSLoader:createNode(self._csbResourcePath)
    if csbLayer~= nil then
        self._popLayer:addChild(csbLayer)  
    end

    if csbLayer then
        local description = csbLayer:getDescription() 
        local widgetNode = nil
        if string.match(description,"Node") then
            widgetNode = ccui.Widget:create()
            widgetNode:setName(csbLayer:getName()) 
            widgetNode:setPosition(csbLayer:getPosition())
            widgetNode:setVisible(csbLayer:isVisible())
            widgetNode:setScaleX(csbLayer:getScaleX())
            widgetNode:setScaleY(csbLayer:getScaleY())
            widgetNode:setOpacity(csbLayer:getOpacity())
            widgetNode:setCascadeOpacityEnabled(csbLayer:isCascadeOpacityEnabled())
            if csbLayer.getActionTag then
                widgetNode:setActionTag(csbLayer:getActionTag()) 
            end 

            local parentNode = csbLayer:getParent()
            if parentNode then         
                parentNode:addChild(widgetNode)  
                --widgetNode:setOrderOfArrival(csbLayer:getOrderOfArrival())         
                csbLayer:removeSelf()
            end

            local childrennode = csbLayer:getChildren()
            for i = 1,#childrennode do 
                childrennode[i]:removeSelf()
                widgetNode:addChild(childrennode[i])
            end
        end
    end


    local function onTouchEvent(send,eventType)
        self:onTouchEventBackground(send,eventType)
    end
    self._popLayer:addTouchEventListener(onTouchEvent)
    self._popLayer:setVisible(false)             
    self._isRender = false
end

function PopLayer:showLayer(render)
    if self._isRender == render then
        return
    end
    self._isRender = render

    if render then
        self._popLayer:setVisible(true)
        local function showLayer()

        end
        self._startShowLayerFunc()
        self:playAni(self._enterAniData,showLayer)
    else
        local function hideLayer(frame)           
            if self._exitAniData.aniType == PopLayer.ENUM_ANI_DATA_TYPE.csb then
                if frame == nil then
                    return
                end
                local event = frame:getEvent()

                if self._exitAniData.csbEventName ~= event then
                    return
                end
            end

            self._popLayer:setVisible(false)              
            self._afterCloseLayerFunc()         
        end
        self._startCloseLayerFunc()
        self:playAni(self._exitAniData,hideLayer)     
    end
end

function PopLayer:isShow()
    return self._isRender
end

function PopLayer:playAni(aniData,calBackFun)
    if aniData.aniType == PopLayer.ENUM_ANI_DATA_TYPE.none then
        calBackFun()    
    end

    if aniData.aniType == PopLayer.ENUM_ANI_DATA_TYPE.csb then
        XH.GT.UIFunction.playCsbFrameAni(self._popLayer,aniData.aniLayer,self._csbResourcePath,aniData.startIndex,aniData.endIndex,false,calBackFun)    
    end

    if aniData.aniType == PopLayer.ENUM_ANI_DATA_TYPE.action then
        local node = XH.GT.UIFunction.seekWidgetByName(self._popLayer,aniData.aniLayer)
        node:stopAllActions()

        local actionScprit = string.format("local newAction = %s return newAction",aniData.action)
        local action = assert(loadstring(actionScprit))()

        local sequence = cc.Sequence:create(action, cc.CallFunc:create(calBackFun))
        node:runAction(sequence)   
    end
end

function PopLayer:onTouchEventBackground(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._canTouchBackground == false then
        return
    end

    self:showLayer(false)
end

function PopLayer:setAfterCloseLayerFunc(func)
    self._afterCloseLayerFunc = func
end

function PopLayer:setStartCloseLayerFunc(func)
    self._startCloseLayerFunc = func
end

function PopLayer:setStartShowLayerFunc(func)
    self._startShowLayerFunc = func
end

return PopLayer~