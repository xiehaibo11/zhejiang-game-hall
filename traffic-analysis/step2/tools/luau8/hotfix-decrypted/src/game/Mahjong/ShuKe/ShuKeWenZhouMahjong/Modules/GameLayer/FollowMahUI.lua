local FollowMahUI = CF.gameClass("FollowMahUI", CF.ViewBase)

function FollowMahUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ShuKe/GengFengAniLayer.csb"
end

function FollowMahUI:getBindingInfo()
    return  {
        ["_KW_POS_FOLLOWMAH_ANI"] = {varName="_follwMahPanel"},
    }
end

function FollowMahUI:ctor(param)
    param = param or {}
	FollowMahUI.super.ctor(self,param)
end

function FollowMahUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_FOLLOWMAH_SHOW_ANI", callBack = "onShowFollowMahAni"},
    }
end

--跟风动画
function FollowMahUI:onShowFollowMahAni(event)
    self._follwMahPanel:removeAllChildren()
    self._follwMahPanel:setVisible(true)
    local aniPath = "res/animation/Mahjong/Base/genpai_ani/genpai_ani.ExportJson"
    CF.UITool.playJsonAnimation(self._follwMahPanel, "genpai_ani", aniPath, 0, nil, nil, function()
        self._follwMahPanel:setVisible(false)
    end)
end

return FollowMahUI