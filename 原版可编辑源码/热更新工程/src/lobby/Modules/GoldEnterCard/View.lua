local GoldEnterCardView = class("GoldEnterCardView", XH.ViewBase)

function GoldEnterCardView:ctor(param)
    self._param = param or {}
    GoldEnterCardView.super.ctor(self, param)
    self:initUI()
end

function GoldEnterCardView:getCSBPath()
    return "GoldNew/Lobby/CSB/GoldEnterCard/GoldEnterCard.csb"
end

function GoldEnterCardView:getBindingInfo()
    return {
        ["_KW_ANIMNODE"] = { varName = "_KW_ANIMNODE" },
        ["_KW_ANIMNODE2"] = { varName = "_KW_ANIMNODE2" },
        ["_KW_LEFTNUM"] = { varName = "_KW_LEFTNUM" }
    }
end

function GoldEnterCardView:initUI()
    self._KW_LEFTNUM:setVisible(self._param.originCount == 2)
    local spinePath = "animation/Lobby/GoldEnterCard/"
    local spinePath2 = "animation/Lobby/Base/zzb_ty_baojinbi/"
    local animName = self:getAnimNameByPropId()
    if animName == "" then
        XH.TipTool.showToast("道具动画缺失")
        if self._param.callback then
            self._param.callback()
        else
            XH.lobby:getModule("Gold"):reqJoinGoldRoom(self._param.confID, self._param.level, nil, nil, self._param.propId)
        end
        self:close()
    else
        self._animScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._animScheduler)
            if tolua.isnull(self) then
                return
            end
            if self._param.callback then
                self._param.callback()
            else
                XH.lobby:getModule("Gold"):reqJoinGoldRoom(self._param.confID, self._param.level, nil, nil, self._param.propId)
            end
            self:close()
        end, 2, false)
        local goldAnim = XH.SpineManager:playAni(self._KW_ANIMNODE2, spinePath2, self:getBaoJinbiAnim(), "", false)
        local playBaoJinbi = function()
            XH.audioManager:play("ACT_GET_AWARD")
            goldAnim:setAnimation(0,"animation",false)
            self._KW_ANIMNODE2:setVisible(true)
        end
        self._KW_ANIMNODE2:setVisible(false)
        XH.SpineManager:playAni(self._KW_ANIMNODE, spinePath, "zzb_ap_posji", animName, false, nil, {["cx"] = playBaoJinbi})
    end
end

function GoldEnterCardView:getAnimNameByPropId()
    local animName = {
        [150755] = "yin",
        [150758] = "yin",
        [150756] = "jin",
        [150759] = "jin",
        [150757] = "zuan",
        [150760] = "zuan",
        [150767] = "wuyou",
        [150768] = "wuyou",
        [150779] = "duiju",--无限对局体验卡
        [150780] = "duiju",--无限对局卡
    }
    return animName[self._param.propId] or ""
end

function GoldEnterCardView:getBaoJinbiAnim()
    local animName = {
        [150779] = "zzb_ty_baofangka",--无限对局体验卡
        [150780] = "zzb_ty_baofangka",--无限对局卡
    }
    return animName[self._param.propId] or "zzb_ty_baojinbi2"
end

return GoldEnterCardView