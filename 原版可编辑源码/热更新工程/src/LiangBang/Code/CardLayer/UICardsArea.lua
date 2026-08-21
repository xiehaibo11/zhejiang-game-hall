local CURRENT_MOUDLE_NAME = ...

local UICardsAreaBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")
local UICardsArea = class("UICardsArea", UICardsAreaBase)

local scriptPath = {}
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsArea")
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsAreaInterface")
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsAreaAnimation")
table.insert(scriptPath,"GameCommon.Code.CardLayer.CardLayerBase.UICardsAreaFunction")
table.insert(scriptPath,"LiangBang.Code.CardLayer.UICardsAreaInterface")

local tmpmetatable = {}
for i,v in ipairs(scriptPath) do
    local script = import(v,CURRENT_MOUDLE_NAME)
    local object = script.new()
    local objectemetatable = getmetatable(object)
    for scripti,scriptv in pairs(objectemetatable.__index) do
        tmpmetatable[scripti] = scriptv
    end
end
local metatable = UICardsArea
for i,v in pairs(metatable) do
    tmpmetatable[i] = v
end
setmetatable(UICardsArea, {__index = tmpmetatable})

function UICardsArea:ctor()
    UICardsArea.super.ctor(self)
end

function UICardsArea:init(node)
    self._rootNode = node
end

return UICardsArea