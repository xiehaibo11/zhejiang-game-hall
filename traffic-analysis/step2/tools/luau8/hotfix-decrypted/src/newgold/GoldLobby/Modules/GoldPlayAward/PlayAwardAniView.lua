local PlayAwardAniView = class("PlayAwardAniView", NG.ViewBase)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

-- 超值畅玩
function PlayAwardAniView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/PlayAwardLayer/PlayAwardGetLayer.csb"
end

function PlayAwardAniView:getBindingInfo()
    return {
        -- 
        ["_KW_ANI"] = {varName = "_KW_ANI"},
        ["_KW_BG"] = {varName = "_KW_BG", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"}
    }
end

function PlayAwardAniView:ctor(param)
    PlayAwardAniView.super.ctor(self, param)
    NG.TipTool.showToast("已成功将您的欢乐豆补足至" .. GoldPlayerData.JoyBean)
    self:initUI()
    NG.SysTool.performDelayOnce(function()
        if self and self.close then
            self:close()
        end
    end, 2.2)
end

function PlayAwardAniView:initUI()
    local params = {path = "cocosStudio/GoldNew/Lobby/Json/Wuxianjinbi/", tex = "Wuxianjinbi.json", ske = "Wuxianjinbi.atlas", armatureName = "animation"}
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        self._KW_ANI:addChild(spineNode)
        spineNode:setScale(2.5)
    end
end

function PlayAwardAniView:onClickClose()
    self:close()
end

return PlayAwardAniView

#