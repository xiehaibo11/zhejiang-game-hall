----create by lcy 2017.12.1
local CURRENT_MOUDLE_NAME = ...
local UICardsLayerBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsLayer")
local UICardsLayer = class("UICardsLayer",UICardsLayerBase)
local UICardDefine = import(".UICardDefine")

local UICard = import("GameCommon.Code.CardLayer.CardLayerBase.UICard")

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_ADAPT_CARD_NODE = "KW_ADAPT_CARDS_"
local KW_TOUCH_LAYER = "KW_TOUCH_LAYER"
local KW_PANEL_OPEN_CARD = "KW_PANEL_OPEN_CARD_"

local scriptPath = {}
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsLayer")
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsLayerInterface")
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsLayerConfig")
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsLayerTouchEvent")
table.insert(scriptPath,".UICardsLayerInterface")
table.insert(scriptPath,".UICardsLayerConfig")
local tmpmetatable = {}
for i,v in ipairs(scriptPath) do
    local script = import(v,CURRENT_MOUDLE_NAME)
    local object = script.new()
    local objectemetatable = getmetatable(object)
    for scripti,scriptv in pairs(objectemetatable.__index) do
        tmpmetatable[scripti] = scriptv
    end
end
local metatable = UICardsLayer
for i,v in pairs(metatable) do
    tmpmetatable[i] = v
end
setmetatable(UICardsLayer, {__index = tmpmetatable})

function UICardsLayer:ctor()
    UICardsLayer.super.ctor(self)
    self._openCards = {}
    self._adaptOpenCardNode = {}
    
    self._flyCard = {}
    self._playerBombCards = {}
end

function UICardsLayer:init(node)
    -- cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_CARD_IMG)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_CARD_IMG_LIANGBANG)

    local csbNode = cc.CSLoader:createNode(UICardDefine.KW_UI_CARD_LAYER_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end

    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    -- self:adapt9BoxOnlyChild(self._rootNode)
   UICardsLayer.adapt9BoxOnlyChild(self._rootNode)
    
    --iPhoneX适配
    local viewSize = cc.Director:getInstance():getOpenGLView():getFrameSize()
    if viewSize.width == 2436 then
        UICardsLayer.adaptForIphoneX(self._rootNode,40)
    end
    
    self._touchPanel = self._rootNode:getChildByName(KW_TOUCH_LAYER)

    for i = 1 , Game.FrameworkFunction.getMaxPlayer() do
        local adaptCardNode = self._rootNode:getChildByName(KW_ADAPT_CARD_NODE .. i)
        if adaptCardNode then
            self._adaptCardNode[i] = adaptCardNode
        end
    end
    
    for i = 1,Game.FrameworkFunction.getMaxPlayer() do
        self._openCards[i] = {}
    end
    
    for i = 1 , Game.FrameworkFunction.getMaxPlayer() do
        local adaptOpenCardNode = self._rootNode:getChildByName(KW_PANEL_OPEN_CARD .. i)
        if adaptOpenCardNode then
            self._adaptOpenCardNode[i] = adaptOpenCardNode
        end
    end

    self:initTouchEvent()

end

function UICardsLayer.adaptForIphoneX(node,startPosX)
    if node == nil then
        return
    end
    local designSize = cc.size(1920, 1080)
    local safeSize = cc.size(designSize.width - startPosX * 2 ,designSize.heigth)

    local childrenNode = node:getChildren() 
    for i = 1 , #childrenNode do
        local nodePos = cc.p(childrenNode[i]:getPosition())
        local newPos = cc.p(startPosX + nodePos.x / designSize.width * safeSize.width , nodePos.y)
        childrenNode[i]:setPosition(newPos)
    end
end

function UICardsLayer.adapt9BoxOnlyChild(node)
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = Game.UIFunction.getDesignSizeHD()
    local scaleY = screenSize.height / designSize.height
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
    if kuangaobi < 1 then
        node:setScale(kuangaobi)
    else
        node:setScale(1/ kuangaobi)
    end
    if glView:getResolutionPolicy() == cc.ResolutionPolicy.FIXED_WIDTH then
        local childrenNode = node:getChildren() 
        for i = 1 , #childrenNode do
            if kuangaobi < 1 then
                childrenNode[i]:setScaleX(scaleY * kuangaobi )
                childrenNode[i]:setScaleY(kuangaobi)
            else
                childrenNode[i]:setScaleX(scaleY) 
            end
        end
    end
end

return UICardsLayer