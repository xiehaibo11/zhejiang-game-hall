local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")

local UIMahBase = NG.GAME.gameClass("UIMahBase", NG.ViewBase)

UIMahBase.IconType = {
    Joker = 1,
    Flower = 2,
    Ting = 3,
    BaiBian = 4,
    BaiBianBtn = 5,
}

function UIMahBase:ctor(mahType, mahValue)
    assert(mahType, "UIMahBase:ctor: mahType is nil")
    UIMahBase.super.ctor(self)
    -- self:setCascadeColorEnabled(true)
    self._mahType = mahType
    self._mahValue = mahValue or NG.GAME.GameDefine.MAH_VALUE.NONE
    self._bSelected = false
    self._bTouchLimit = false
    
    self:_initView()
end


function UIMahBase:getProxyEvents()
    return {
        -- {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_START", callBack = "onHuanPaiStart"},
        -- {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HUAN_PAI_END", callBack = "onHuanPaiEnd"},
    }
end

function UIMahBase:_initView()
    self._rootNode = nil
    self._jokerIcon = nil -- 财神标识
    self._baiBianIcon = nil -- 百变标识
    self._baiBianBtn = nil -- 百变按钮
    self._baiBianCnt = 0
    self._flowerIcon = nil -- 花牌标识
    self._UIConfig = nil
    
    self:_initRootNode()

    self:setCascadeOpacityEnabled(true)
    self:setCascadeColorEnabled(true)
end

function UIMahBase:_getUIConfig()
    if not self._UIConfig then
        self._UIConfig = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfigBase")
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
        return NG.GAME.GameDefine.MAH_VALUE.BACK
    end
    return self._mahValue
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
    if not self._mahType == NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD then
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
-- 百变图标
------------------------------------------------------------

function UIMahBase:isBaiBian()
    return self._bShowBaiBian
end
function UIMahBase:getBaiBianCnt()
    return self._baiBianCnt or -1
end

function UIMahBase:showBaiBianIcon(bShow)
    self._bShowBaiBian = bShow
    self:_updateBaiBianIcon()
end

function UIMahBase:_removeBaiBianIcon()
    if self._baiBianIcon then
        self._baiBianIcon:removeFromParent()
        self._baiBianIcon = nil
    end
end

function UIMahBase:_updateBaiBianIcon()
    if not self._bShowBaiBian then
        self:_removeBaiBianIcon()
        return
    end

    if not self._baiBianIcon then
        self:_initBaiBianIcon()
    end

    self:_updateBaiBianIconPosition()
end

function UIMahBase:_initBaiBianIcon()
    
end

function UIMahBase:_updateBaiBianIconPosition()

end


------------------------------------------------------------
-- 百变按钮
------------------------------------------------------------

function UIMahBase:BaiBianSyn(valueAfter, cnt, newIdx)
    self:setMahValue(valueAfter)
    if self._bShowBaiBianBtn then
        self._baiBianCnt = cnt
        if newIdx then
            self._baiBianIdx = newIdx
        end
        self:updateBaiBianCnt(cnt)
    end
end
function UIMahBase:showBaiBianBtn(bShow, cnt, baiBianIdx)
    self._bShowBaiBianBtn = bShow
    self._baiBianCnt = cnt
    self._baiBianIdx = baiBianIdx
    self:_updateBaiBianBtn()
    if bShow then
        self:updateBaiBianCnt(cnt)
    end
end

function UIMahBase:_removeBaiBianBtn()
    if self._baiBianBtn then
        self._baiBianBtn:removeFromParent()
        self._baiBianBtn = nil
    end
end

function UIMahBase:_updateBaiBianBtn()
    if not self._bShowBaiBianBtn then
        self:_removeBaiBianBtn()
        return
    end

    if not self._baiBianBtn then
        self:_initBaiBianBtn()
    end

    self:_updateBaiBianBtnPosition()
end

function UIMahBase:_initBaiBianBtn()
    
end

function UIMahBase:_updateBaiBianBtnPosition()

end

function UIMahBase:updateBaiBianCnt(cnt)

end
------------------------------------------------------------
-- 花牌图标
------------------------------------------------------------

function UIMahBase:showFlowerIcon(bShow)
    if self._mahType ~= NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP then
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
function UIMahBase:onHuanPaiStart()

end
function UIMahBase:onHuanPaiEnd()

end

function UIMahBase:showFire()
end

function UIMahBase:hideFire()
end
function UIMahBase:showBianAni()
end
return UIMahBase