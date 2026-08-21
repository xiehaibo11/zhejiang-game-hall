local WinLostScoreView = CF.gameClass("WinLostScoreView", CF.ViewBase)

local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/"

function WinLostScoreView:ctor()
    WinLostScoreView.super.ctor(self)
    self._panelLose:setVisible(false)
    self._panelWin:setVisible(false)
end

function WinLostScoreView:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/AniNode/WinLostScoreAni.csb"
end

function WinLostScoreView:getBindingInfo()
    return {
        ["_KW_PANEL_LOSE"] = {varName = "_panelLose"},
        ["_KW_PANEL_WIN"] = {varName = "_panelWin"},
        ["_KW_POS_SCORE_QIAN_ANI"] = {varName = "_posScoreQianAni"},
        ["_KW_TEXT_WIN_LOST_SCORE"] = {varName = "_textWinLostScore"}
    }
end

function WinLostScoreView:onShowScoreAni(score, flags, callback)
    if self._scoreQianPos == nil then
        self._scoreQianPos = cc.p(self._posScoreQianAni:getPosition())
    end

    if score > 0 then
        self._textWinLostScore:setString("+" .. CF.StringTool.numberToStringNew(score, 2))
        self._textWinLostScore:setFntFile("DarkShuangKou/Font/Txt_win-export.fnt")
        self._textWinLostScore:stopAllActions()
        self._textWinLostScore:setOpacity(0)
        self._textWinLostScore:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "Score/zzb_ap_piaofen_sz.json", animationName = "sl_qian", boneName = "slsz", slotName = "sdsz"})

        CF.SpineManager:playAni(self._posScoreQianAni, spinePath .. "Score/", "zzb_ap_piaofen", "sl_qian")
        self._posScoreQianAni:setPositionY(self._scoreQianPos.y - 20)

        if flags and flags.boom == true then
            self._panelWin:loadTexture("DarkShuangKou_Table_Img_fd.png", ccui.TextureResType.plistType)
        else
            self._panelWin:loadTexture("DarkShuangKou_Table_Img_h.png", ccui.TextureResType.plistType)
        end
        self._panelWin:ignoreContentAdaptWithSize(true)
        self._panelWin:stopAllActions()
        -- self._panelWin:setOpacity(0)
        self._panelWin:setVisible(true)
        self._panelWin:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "Score/zzb_ap_piaofen_sz.json", animationName = "sl_hou", boneName = "mydi3", slotName = "mydi3"})
    else
        local numString = CF.StringTool.numberToStringNew(score, 2)
        if flags and flags.limit == true then
            numString = numString .. "（封顶）"
        end
        self._textWinLostScore:setString(numString)
        self._textWinLostScore:setFntFile("DarkShuangKou/Font/Txt_lose-export.fnt")
        self._textWinLostScore:stopAllActions()
        self._textWinLostScore:setOpacity(0)
        self._textWinLostScore:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "Score/zzb_ap_piaofen_sz.json", animationName = "sb", boneName = "sbsz", slotName = "sbsz"})
        local textSize = self._textWinLostScore:getContentSize()
        self._panelLose:setContentSize(cc.size(textSize.width + 150, self._panelLose:getContentSize().height))
        self._panelLose:stopAllActions()
        self._panelLose:setOpacity(0)
        self._panelLose:setVisible(true)
        self._panelLose:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "Score/zzb_ap_piaofen_sz.json", animationName = "sb", boneName = "sbsz", slotName = "sbsz"})
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1.5), cc.CallFunc:create(callback)))
end

return WinLostScoreView
�