--弹窗类
local PopLayer = class("PopLayer")

function PopLayer:ctor()
    self._popLayer = nil                                --挂载csb的Layer
    self._canTouchBackGround = true                     --是否可以触碰背景层
    self._haveBackGroud = true                          --是否有背景层
    self._csbResourcePath = ""                          --csb路径，子类赋值
end

function PopLayer:init()
    self._popLayer = ccui.Layout:create()
    if self._haveBackGroud then
        self._popLayer:setBackGroundColorType(ccui.LayoutBackGroundColorType.solid)
        self._popLayer:setBackGroundColor(cc.c3b(0,0,0))  
    end

    self._popLayer:setTouchEnabled(self._haveBackGroud)
    self._popLayer:setName(self.__cname)
    self._popLayer:setContentSize(cc.Director:getInstance():getWinSize())
    local csbLayer = cc.CSLoader:createNodeWithVisibleSize(self._csbResourcePath)

    if csbLayer~= nil then
        self._popLayer:addChild(csbLayer)
    end

    local function onTouchEvent(send,eventType)
        self:onTouchEventBackGround(send,eventType)
    end
    self._popLayer:addTouchEventListener(onTouchEvent)
    self._popLayer:setOpacity(0.7*255)
end

function PopLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self._popLayer, XH.ZORDER.TIPLAYER)
end

function PopLayer:closeSelf()
    self._popLayer:removeSelf()
end

--点击背景事件
function PopLayer:onTouchEventBackGround(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    if self._canTouchBackGround == false then
        return
    end
    
    CF.popLayerManager:removeLayer(self.__cname)
end

return PopLayer