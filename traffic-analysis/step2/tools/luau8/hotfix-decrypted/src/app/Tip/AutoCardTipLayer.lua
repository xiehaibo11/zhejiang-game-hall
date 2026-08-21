local AutoCardTipLayer = class("AutoCardTipLayer", XH.ViewBase)

AutoCardTipLayer.showPos = {
    [XH.SCENE_TAG.TEAHOUSE] = "_posTea",
    [XH.SCENE_TAG.GAME] = "_posGame",
}

AutoCardTipLayer.itemType = {
    OWNER = 0,
    TEAHOUSE = 1,
}

function AutoCardTipLayer:getCSBPath()
    return "cocosStudio/Common/TipLayer/CSB/LackCardTipsLayer.csb"
end

function AutoCardTipLayer:getBindingInfo()
    return {
        ["_KW_POS_NOTIFY_TEA"] = { varName = "_posTea" },
        ["_KW_POS_NOTIFY_GAME"] = { varName = "_posGame" },
        ["_KW_TIPS_ITEM_AUTO_ADD"] = { varName = "_itemAutoAdd" },
        ["_KW_TIPS_ITEM_LACK_CARD"] = { varName = "_itemLackCard" },
    }
end

function AutoCardTipLayer:ctor(args)
    AutoCardTipLayer.super.ctor(self)
    if not args.sceneTag or not args.type then
        self:close()
        return
    end
    self._sceneTag = args.sceneTag
    self._type = args.type
    self:initUI()
end

function AutoCardTipLayer:initUI()
    local showPos = self[self.showPos[self._sceneTag]]
    XH.UITool.setText(self._itemLackCard, "Text_2", XH.UITool.getText(self._itemLackCard, "Text_2"))
    local showItem = self._type == self.itemType.OWNER and self._itemAutoAdd:clone() or self._itemLackCard:clone()
    showItem:setPosition(0, 0)
    showPos:addChild(showItem)
end

--显示窗口
function AutoCardTipLayer:showSelf(zOrder)
    local zorder = zOrder or XH.ZORDER.TIPLAYER
	local runningScene = display.getRunningScene()
	if runningScene then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(3),cc.CallFunc:create(function()
            self:close()
        end)))
        runningScene:addChild(self, zorder)
	end
end

return AutoCardTipLayer�