---@class TeaHouseToastView : View
local TeaHouseToastView = class("TeaHouseToastView", TeaHouse.View)

TeaHouseToastView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseToastView.csb",
    binding = {
        ["_KW_IMG_BG"] = { tag = "_KW_IMG_BG", name = "_imgBg", class = "img" },
        ["_KW_TEXT_CONTENT"] = { tag = "_KW_TEXT_CONTENT", name = "_textContent", class = "img" },
    }
}

function TeaHouseToastView:setMessage(msg)
    if self._textContent then
        self._textContent:setString(msg)
        if self._imgBg then
            local textSize = self._textContent:getContentSize()
            local width = textSize.width + 120
            local height = textSize.height + 4
            self._imgBg:setContentSize(cc.size(width, textSize.height))
        end
        self._textContent:setPositionPercent(cc.p(0.5, 0.5))
    end
    if self._imgBg then
        self._imgBg:stopAllActions()
        self._imgBg:setOpacity(0)
        self._imgBg:runAction(cc.Sequence:create(cc.FadeIn:create(0.2), cc.DelayTime:create(2), cc.FadeOut:create(0.2),
        cc.CallFunc:create(function()
            self:close()
        end)))
    end
end

return TeaHouseToastView�