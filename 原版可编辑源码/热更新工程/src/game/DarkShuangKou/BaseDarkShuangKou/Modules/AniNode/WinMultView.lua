local WinMultView = CF.gameClass("WinMultView", CF.ViewBase)

local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/"

function WinMultView:ctor()
    WinMultView.super.ctor(self)
end

function WinMultView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/AniNode/WinMultAni.csb"
end

function WinMultView:getBindingInfo()
    return {
        ["_KW_POS_QIAN_ANI"] = {varName = "_posQianAni"},
        ["_KW_POS_HOU_ANI"] = {varName = "_posHouAni"},
        ["_KW_TEXT_MULT"] = {varName = "_textMult"}
    }
end

function WinMultView:onShowMultAni(score, callback)
    self._textMult:setString("x" .. score .. "倍")
    self._textMult:stopAllActions()
    self._textMult:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "Compare/zzb_ap_slbs_sz.json", animationName = "qian", boneName = "sz", slotName = "5"})

    CF.SpineManager:playAni(self._posQianAni, spinePath .. "Compare/", "zzb_ap_slbs", "qian")
    CF.SpineManager:playAni(self._posHouAni, spinePath .. "Compare/", "zzb_ap_slbs", "hou")

    self:runAction(cc.Sequence:create(cc.DelayTime:create(1.5), cc.CallFunc:create(callback)))
end

return WinMultView
