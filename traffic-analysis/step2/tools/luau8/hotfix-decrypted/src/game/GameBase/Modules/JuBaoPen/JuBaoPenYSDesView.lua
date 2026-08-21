local JuBaoPenYSDesView = CF.gameClass("JuBaoPenYSDesView", CF.ViewBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

function JuBaoPenYSDesView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenYSDesView.csb"
end

function JuBaoPenYSDesView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClick"},
        ["_KW_ROOT"] = {varName = "_panelRoot"},
    }
end

function JuBaoPenYSDesView:ctor(param)
    JuBaoPenYSDesView.super.ctor(self)
    self:initUI()
end

function JuBaoPenYSDesView:initUI()
    for i=1,5 do
        local config = Config.YS_TITLE_CONFIG
        local txtNum = self._panelRoot:getChildByName("_KW_TXT_NUM_"..i)
        if i == 5 then
            txtNum:setText(string.format("%d以上", config[i].ysStart))
        else
            txtNum:setText(string.format("%d-%d", config[i].ysStart, config[i].ysEnd))
        end
        local txtTitle = self._panelRoot:getChildByName("_KW_TXT_TITLE_"..i)
        txtTitle:setText(config[i].title)
    end
end

function JuBaoPenYSDesView:onBtnCloseClick()
    self:close()
end

function JuBaoPenYSDesView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

return JuBaoPenYSDesView
�