local SxvipDailyGiftItem = class("SxvipDailyGiftItem", require("lobby.Modules.Sxvip.SxvipDailyGiftItem"))

local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function SxvipDailyGiftItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipDailyGiftView.csb"
end

function SxvipDailyGiftItem:getBindingInfo()
    local info = SxvipDailyGiftItem.super.getBindingInfo(self)
    info["_KW_BODY"] = {varName = "_KW_BODY"}
    info["_KW_BG1"] = {varName = "_bg1"}
    info["_ANI_BACK_W"] = {varName = "_ANI_BACK_W"}
    info["_ANI_FRONT_W"] = {varName = "_ANI_FRONT_W"}
    info["_KW_BTN_CLOSE"] = {varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"}
    return info
end

function SxvipDailyGiftItem:ctor()
    SxvipDailyGiftItem.super.ctor(self)
    self._bg1:setVisible(false)
    self:initView()
    self:playAniFront()

    XH.lobby:getModule("Sxvip"):reqDailyRewardStatus()
end

function SxvipDailyGiftItem:playAniFront()
    local qianAni = self:createBgAni("qian")
    self._ANI_FRONT_W:addChild(qianAni)

    local houAni = self:createBgAni("hou")
    self._ANI_BACK_W:addChild(houAni)

    self._KW_BODY:setScale(0.35)
    local scaleAni = cc.ScaleTo:create(8/30, 1.08)
    local scaleAni2 = cc.ScaleTo:create(5/30, 0.99)
    local scaleAni3 = cc.ScaleTo:create(3/30, 1)
    local allAction3 = cc.Sequence:create(scaleAni, scaleAni2, scaleAni3)
    self._KW_BODY:runAction(allAction3)
end

-- 外部动画
function SxvipDailyGiftItem:createBgAni(aniName)
    local config = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hy_lblq/zzb_hy_lblq.atlas",
        tex = "animation/Lobby/Base/zzb_hy_lblq/zzb_hy_lblq.json",
        armatureName = aniName,
        scale = 1,
        loop = true,
        lastArmatureName = "loop",
    }
    local dargonBones = display.playDargonBonesSpine(config)
    dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
    return dargonBones
end

function SxvipDailyGiftItem:onBtnClose(sender, eventType)
    self:close()
end

function SxvipDailyGiftItem:playAniSingle()
    
end

return SxvipDailyGiftItem
g