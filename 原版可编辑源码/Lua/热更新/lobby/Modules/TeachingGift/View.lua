local TeachingGiftView = class("TeachingGiftView", XH.ViewBase)

function TeachingGiftView:getCSBPath()
    return "hall/CSB/TeachingGift/TeachingGiftLayer.csb"
end

function TeachingGiftView:getBindingInfo()
    return {
        ["_KW_PANEL_ITEM"] = {varName = "_itemPanel"},
        ["_KW_ANI_NODE"] = {varName = "_aniNode"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
        ["_KW_BTN_GO"] = {varName = "_goBtn", onTouchEnded = "onTouchEventGo"}
    }
end

local D = {
    KW_PANEL_ITEM = "_KW_PANEL_ITEM",
    KW_PIC_AWARD = "_KW_PIC_AWARD",
    KW_TEXT_NAME = "_KW_TEXT_NAME"
}

function TeachingGiftView:ctor(param, awardData)
    param = param or {}
    TeachingGiftView.super.ctor(self, param)
    self._downloadImageUrlList = {}
    self._downloadImageNodeList = {}
    self._closeCallBack = param.closeCallBack

    self:init(awardData)
end

function TeachingGiftView:init(data)
    if not data then
        return
    end
    local spinePath = "animation/Lobby/Base/zzb_jbdt_gxhd/"

    self:setText(self._itemPanel, D.KW_TEXT_NAME, data.prize_names[1])

    local awardPic = self._itemPanel:getChildByName("_KW_PIC_AWARD")
    if awardPic then
        if data.prize_pic and data.prize_pic[1] then
            awardPic:loadTexture(data.prize_pic[1], ccui.TextureResType.plistType)
        end
    end
    local itemAniNode = self._itemPanel:getChildByName("_KW_ITEM_ANI_NODE")
    if itemAniNode then
        XH.SpineManager:playAni(itemAniNode, spinePath, "zzb_jbdt_gxhd", "jxjl", true)
    end
    XH.SpineManager:playAniWithComplete(self._aniNode, spinePath, "zzb_jbdt_gxhd", "jx_cx", false, "jx_loop", true)
    XH.SpineManager:playAniWithComplete(self._aniTitleNode, spinePath, "zzb_ty_btgx", "cx", false, "loop", true)

    self._imgTitle:setPositionX(434)
    self._imgTitle:setVisible(false)
    self._imgTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.Show:create(), cc.EaseBackOut:create(cc.MoveBy:create(0.5, cc.p(-434, 0)))))

    local spineAnimation = spinePath .. "zzb_jbdt_gxhd_animation.json"
    self._itemPanel:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spineAnimation, animationName = "jx_cx", boneName = "jl", slotName = "jl"})
    self._goBtn:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spineAnimation, animationName = "jx_cx", boneName = "btn", slotName = "btn"})
end

function TeachingGiftView:setText(node, name, text)
    local childNode = ccui.Helper:seekWidgetByName(node, name)
    if childNode then
        childNode:setString(text)
    end
end

function TeachingGiftView:onTouchEventGo()
    if self._closeCallBack then
        self._closeCallBack()
    end
    XH.lobby:getModule("TeachingGift"):setAfterTeachingFirst(true)
    -- self:close() -- 场景销毁就关闭了
end

return TeachingGiftView
