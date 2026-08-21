-- 匹配玩家UI
local MatchUI = CF.gameClass("MatchUI", CF.ViewBase)

function MatchUI:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/MatchUI.csb"
end

function MatchUI:getBindingInfo()
    return {
        ["_KW_PANEL_MATCH_ANI"] = {varName = "_matchAni"}
    }
end

function MatchUI:ctor(param)
    param = param or {}
    MatchUI.super.ctor(self, param)
    self:initUI()
end

function MatchUI:getProxyEvents()
    return {}
end

function MatchUI:initUI()
end

function MatchUI:updateMatchStatus(reMatch)
    if reMatch then
        CF.SpineManager:playAniWithComplete(self._matchAni, CF.gameResourceRootPath .. "DarkShuangKou/Spine/BoBao/", "zzb_ap_djks", "cx", false, "loop", true)
        CF.soundManager:playSoundMatching()
    end
end

--将窗体显示到屏幕
function MatchUI:showSelf(zOrder)
    zOrder = zOrder or 35
    CF.addViewToGameScene(self, zOrder)
    return self
end

return MatchUI
�