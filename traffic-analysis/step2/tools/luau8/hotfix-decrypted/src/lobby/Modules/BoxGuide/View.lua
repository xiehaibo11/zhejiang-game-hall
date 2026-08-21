local BoxGuideView = class("BoxGuideView", XH.ViewBase)

-- UI名字定义
function BoxGuideView:getCSBPath()
    return "cocosStudio/hall/CSB/BoxGuide/BoxGuideLayer.csb"
end

--- 获得节点的绑定信息
function BoxGuideView:getBindingInfo()
    return {
        ["_KW_BTN_CREATE"] = {varName = "_btnCreate", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventCreate"},
        ["_KW_ROOT_LAYER_ANI"] = {varName = "_rootLayerAni",onTouchEnded = "onTouchEventRootLayerAni"},
        ["_KW_TITLE_IMG"] = {varName = "_titleImg"},
        ["_KW_ROOT_BG"] = {varName = "_rootBg"},
        ["_KW_TEXT_LINE_1_1"] = {varName = "_textLine11"},
        ["_KW_TEXT_LINE_1_2"] = {varName = "_textLine12"},
        ["_KW_TEXT_LINE_1_3"] = {varName = "_textLine13"},
        ["_KW_TEXT_LINE_2"] = {varName = "_textLine2"},
        ["_KW_PANEL_GIRL"] = {varName = "_panelGirl"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
    }
end

function BoxGuideView:ctor(param)
    BoxGuideView.super.ctor(self, param)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25062603, {block_item_id = "创建包厢"})
    XH.UITool.fullWidth(self._rootBg)
    self:initAni()
end

function BoxGuideView:initAni()
    XH.SpineManager:playAni(self._panelGirl, "animation/Lobby/Base/zzb_ty_rwlb/", "zzb_ty_rwlb", "animation", true)
    XH.SpineManager:playAniWithComplete(self._aniTitleNode, "animation/Lobby/Base/zzb_jbdt_gxhd/", "zzb_ty_btgx", "cx", false, "loop", true)
    self._titleImg:setPositionX(self._titleImg:getPositionX() + 250)
    self._titleImg:setOpacity(0)
    self._titleImg:runAction(cc.Sequence:create(cc.DelayTime:create(0.2),  cc.Spawn:create(cc.EaseBackOut:create(cc.MoveBy:create(0.5, cc.p(-250, 0))), cc.FadeIn:create(0.2))))

    self._rootLayerAni:setOpacity(0)
    self._rootLayerAni:runAction(cc.Sequence:create(cc.DelayTime:create(0.0), cc.FadeIn:create(0.3)))
end

function BoxGuideView:onTouchEventCreate()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25062604, {block_item_id = "创建包厢", page_item_id = "创建"})
    XH.lobby:getModule("BoxGuide"):reqBoxCreateFreeGain()
    self:close()
end

function BoxGuideView:onTouchEventRootLayerAni()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25062604, {block_item_id = "创建包厢", page_item_id = "关闭"})
    self:close()
end

return BoxGuideView
�	