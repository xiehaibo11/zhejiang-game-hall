local JuBaoPenDesView = CF.gameClass("JuBaoPenDesView", CF.ViewBase)
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

function JuBaoPenDesView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenDesView.csb"
end

function JuBaoPenDesView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClick"},
        ["_KW_TXT_CONTENT"] = {varName = "_txtContent"},
    }
end

function JuBaoPenDesView:ctor(param)
    JuBaoPenDesView.super.ctor(self)
    self:initUI()

end

function JuBaoPenDesView:initUI()
    self._txtContent:setText(Config.ActDes)
end


function JuBaoPenDesView:onBtnCloseClick()
    self:close()
end

function JuBaoPenDesView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

return JuBaoPenDesView
