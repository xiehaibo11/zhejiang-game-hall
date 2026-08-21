local PermissionTipView = class("PermissionTipView", XH.ViewBase)

function PermissionTipView:getCSBPath()
    return "cocosStudio/hall/CSB/window/YinSiCeLue/PermissionTipView.csb"
end

function PermissionTipView:getBindingInfo()
    return {
        ["_KW_TXT_TITLE"] = {varName = "_txtTitle" },
        ["_KW_TXT_CONTENT"] = {varName = "_txtContent" },
    }
end

function PermissionTipView:ctor(title, content)
    PermissionTipView.super.ctor(self)

    self:setPosition(cc.p(0, -5))
    self._title = title
    self._content = content
    self:initUI()
end

function PermissionTipView:initUI()
    self._txtTitle:setString(self._title)
    self._txtContent:setString(self._content)

    local x, _ = self:getPosition()
    local delay = cc.DelayTime:create(3)
    local hide = cc.MoveTo:create(0.3, cc.p(x, 120))
    local close = function()
        self:close()
    end
    local sequence = cc.Sequence:create(delay, hide, cc.CallFunc:create(close))
    self:runAction(sequence)
end

return PermissionTipView