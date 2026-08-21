----create by lcy 2017.12.1
local UICardsLayer = class("UICardsLayer")
local CURRENT_MOUDLE_NAME = ...
local UICardDefine = import(".UICardDefine",CURRENT_MOUDLE_NAME)
local SetData = import("GameCommon.Code.GameData.SetData")         
local UICard = import(".UICard",CURRENT_MOUDLE_NAME)

local scriptPath = {}
table.insert(scriptPath,".UICardsLayerInterface")
table.insert(scriptPath,".UICardsLayerTouchEvent")
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

local KW_ROOT_LAYER = "KW_ROOT_LAYER"
local KW_ADAPT_CARD_NODE = "KW_ADAPT_CARDS_"
local KW_TOUCH_LAYER = "KW_TOUCH_LAYER"

local MAX_PLAYER = 4

function UICardsLayer:ctor()
    self._rootNode = {}
    self._adaptCardNode = {}
    
    self._touchPanel = nil
    
    self._playerCards = {}
    self._playerOutCards = {}
end

function UICardsLayer:init(node)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(UICardDefine.KW_PATH_CARD_IMG)
    local cardFaceType = SetData:getCardFaceType() or 1
    UICard:setCardFaceType(cardFaceType)

    local csbNode = cc.CSLoader:createNode(UICardDefine.KW_UI_CARD_LAYER_CSB_PATH)
    self._rootNode = csbNode:getChildByName(KW_ROOT_LAYER)
    if self._rootNode == nil then
        return
    end
    
    self._rootNode:removeFromParent(false)
    node:addChild(self._rootNode)
    self:adapt9BoxOnlyChild(self._rootNode)

    self._touchPanel = self._rootNode:getChildByName(KW_TOUCH_LAYER)
    
    for i = 1 , MAX_PLAYER do
        local adaptCardNode = self._rootNode:getChildByName(KW_ADAPT_CARD_NODE .. i)
        if adaptCardNode then
            self._adaptCardNode[i] = adaptCardNode
        end
    end
    
    self:initTouchEvent()
    
end


function UICardsLayer:initTouchEvent()
    self._touchPanel:addTouchEventListener(handler(self,self.onTouchEventTouchLayer))
    self._touchPanel:setSwallowTouches(false)

end

function UICardsLayer:adapt9BoxOnlyChild(node)
    local glView = cc.Director:getInstance():getOpenGLView()
    local screenSize = cc.Director:getInstance():getWinSize()
    local designSize = cc.size(960, 640)   
    local scaleY = screenSize.height / designSize.height
    local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
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