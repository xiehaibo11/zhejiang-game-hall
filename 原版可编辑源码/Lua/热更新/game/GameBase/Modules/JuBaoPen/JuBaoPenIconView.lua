local JuBaoPenIconView = CF.gameClass("JuBaoPenIconView", CF.ViewBase)


function JuBaoPenIconView:ctor()
    JuBaoPenIconView.super.ctor(self)
    self._layout:setVisible(true)

    local module = CF.game:getModule("IconAnimationManager")
    if module:GetPlayAnimationIndex() == module.PlayType.JuBaoPen then
        local ani = CF.SpineManager:playAni(self._icon, "res/animation/GameCommon/prop_ani/jubaopen/", "zzb_jbp_icon", "animation", true)
        local size = self._icon:getContentSize()
        ani:setPosition(cc.p(size.width / 2, 0))
        self._imgJuBaoPen:setVisible(false)
    else
        self._imgJuBaoPen:setVisible(true)
    end
end

function JuBaoPenIconView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenIcon.csb"
end

function JuBaoPenIconView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" }
    }
end

function JuBaoPenIconView:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot"},
        ["_KW_PANEL_ICON"] = {varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouch = "onBtnClick"}, --处理点击监听
        ["_KW_PANEL_LAYOUT"] = {varName = "_layout"}, --进行移动的
        ["_KW_IMG_JUBAOPEN"] = {varName = "_imgJuBaoPen"},
    }
end

function JuBaoPenIconView:onGameStartChanged(event)
    self._layout:setVisible(false)
end

function JuBaoPenIconView:onBtnClick(send, eventType)
    if eventType == ccui.TouchEventType.ended then
        CF.gameRequire("Modules.JuBaoPen.JuBaoPenMainView").new():showSelf()
        CF.game:getModule("JuBaoPen"):thowData(XH.NewThrowDataDefine.dj25090501)
    end
end

function JuBaoPenIconView:updatePositionX(posX)
    self._layout:setPositionX(posX)
end

return JuBaoPenIconView
