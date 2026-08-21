local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")

-- 与 BasicMahjong/Define/GameDefine.lua 中 MAH_VALUE.BACK 一致；CF.GameDefine 未就绪时兜底（热更/边界时序）
local MAH_VALUE_BACK_FALLBACK = 7 * 16 + 2
local function safeMahValueBack()
    local gd = CF and CF.GameDefine
    if gd and gd.MAH_VALUE and gd.MAH_VALUE.BACK ~= nil then
        return gd.MAH_VALUE.BACK
    end
    return MAH_VALUE_BACK_FALLBACK
end

local UIMahBase = CF.gameClass("UIMahBase", CF.ViewBase)

UIMahBase.IconType = {
    Joker = 1,
    Flower = 2,
    Ting = 3,
}

function UIMahBase:ctor(mahType, mahValue)
    assert(mahType, "UIMahBase:ctor: mahType is nil")
    UIMahBase.super.ctor(self)
    self._mahType = mahType
    self._mahValue = mahValue or CF.GameDefine.MAH_VALUE.NONE
    self._bSelected = false
    self._bTouchLimit = false
    
    self:_initView()
end

function UIMahBase:_initView()
    self._rootNode = nil
    self._jokerIcon = nil -- 财神标识
    self._flowerIcon = nil -- 花牌标识
    self._UIConfig = nil
    
    self:_initRootNode()

    self:setCascadeOpacityEnabled(true)
    self:setCascadeColorEnabled(true)
end

function UIMahBase:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfigBase")
    end
    return self._UIConfig
end

------------------------------------------------------------
-- root节点
------------------------------------------------------------

function UIMahBase:_initRootNode()
    self._rootNode = cc.Node:create()
    self:addChild(self._rootNode)
end

function UIMahBase:_addToRootNode(node, zorder)
    if not self._rootNode or not node then
        return
    end
    if zorder ~= nil then
        self._rootNode:addChild(node, zorder)
    else
        self._rootNode:addChild(node)
    end
end

------------------------------------------------------------
-- 牌值
------------------------------------------------------------

-- 设置牌值
function UIMahBase:setMahValue(value)
    if not value or self._mahValue == value then
        return false
    end
    if not MahLogic.isShowFaceByMahType(self._mahType) then
        return false
    end
    self._mahValue = value
    return true
end

-- 获取牌值
function UIMahBase:getMahValue()
    if not MahLogic.isShowFaceByMahType(self._mahType) then
        return safeMahValueBack()
    end
    return self._mahValue
end

function UIMahBase:getMahType()
    return self._mahType
end

------------------------------------------------------------
-- 选中状态
------------------------------------------------------------

-- 设置选中状态
function UIMahBase:setSelected(bSelected)
    self._bSelected = bSelected
    self:_updateSelectState()
end

-- 是否被选中
function UIMahBase:isSelected()
    if self._bSelected then
        return true
    end
    return false
end

function UIMahBase:_updateSelectState()
    
end

-- 设置选中麻将时的提起高度
function UIMahBase:setSelectedAdd(selectedAdd)
    self._selectedAdd = selectedAdd
end

function UIMahBase:getSelectedAdd()
    return self._selectedAdd or 0
end

------------------------------------------------------------
-- 触摸限制
------------------------------------------------------------

-- 设置麻将是否可以触摸选择
function UIMahBase:setMahTouchLimit(bLimit)
    self._bTouchLimit = bLimit or false
    
    self:_updateMaskColor()
end

-- 是否被限制触摸
function UIMahBase:isMahTouchLimit()
    return self._bTouchLimit
end

function UIMahBase:_updateMaskColor()
    if self._bTouchLimit then
        self:setColor(self:_getLimitMahColor())
    else
        self:setColor(self:_getNormalMahColor())
    end
end

function UIMahBase:_getLimitMahColor()
    return self:_getUIConfig().MahColor.Limit
end

function UIMahBase:_getNormalMahColor()
    return self:_getUIConfig().MahColor.Normal
end

------------------------------------------------------------
-- 听牌信息图标
------------------------------------------------------------

function UIMahBase:showTingIcon(bShow)
    if not self._mahType == CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
        return
    end
    self._bShowTing = bShow
    self:_updateTingIcon()
end

function UIMahBase:isTing()
    if self._bShowTing then
        return true
    end
    return false
end

function UIMahBase:_removeTingIcon()
    if self._tingIcon then
        self._tingIcon:removeFromParent()
        self._tingIcon = nil
    end
end

function UIMahBase:_updateTingIcon()
    if not self._bShowTing then
        self:_removeTingIcon()
        return
    end

    if not self._tingIcon then
        self:_initTingIcon()
    end

    self:_updateTingIconPosition()
end

function UIMahBase:_initTingIcon()
    
end

function UIMahBase:_updateTingIconPosition()
    
end

------------------------------------------------------------
-- 财神图标
------------------------------------------------------------

function UIMahBase:showJokerIcon(bShow)
    self._bShowJoker = bShow
    self:_updateJokerIcon()
end

function UIMahBase:_removeJokerIcon()
    if self._jokerIcon then
        self._jokerIcon:removeFromParent()
        self._jokerIcon = nil
    end
end

function UIMahBase:_updateJokerIcon()
    if not self._bShowJoker then
        self:_removeJokerIcon()
        return
    end

    if not self._jokerIcon then
        self:_initJokerIcon()
    end

    self:_updateJokerIconPosition()
end

function UIMahBase:_initJokerIcon()
    
end

function UIMahBase:_updateJokerIconPosition()

end

------------------------------------------------------------
-- 花牌图标
------------------------------------------------------------

function UIMahBase:showFlowerIcon(bShow)
    if self._mahType ~= CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP then
        return 
    end
    self._bShowFlower = bShow
    self:_updateFlowerIcon()
end

function UIMahBase:_removeFlowerIcon()
    if self._flowerIcon then
        self._flowerIcon:removeFromParent()
        self._flowerIcon = nil
    end
end

function UIMahBase:_updateFlowerIcon()
    if not self._bShowFlower then
        self:_removeFlowerIcon()
        return
    end

    if not self._flowerIcon then
        self:_initFlowerIcon()
    end

    self:_updateFlowerIconPosition()
end

function UIMahBase:_initFlowerIcon()
    
end

function UIMahBase:_updateFlowerIconPosition()

end

return UIMahBase<