--[[
请神/请财神整合桌面教程弹层（FA 3.3）

触发条件（QingShenModule:shouldShowTableGodTips）：
  · 活动列表含 god_tips 目标用户
  · 本机该用户尚未展示过（UserDefault 按 uid 记）
  · 未到 GOD_TIPS_EXPIRE_TIME
  · 当前玩法支持请神且未开局

UI 使用 QingShenGodTipsGuideLayer.csb（结构对齐 QingShenIntegrateView）。
关闭方式：点「知道啦」/ 点遮罩任意处 / 超时自动关闭；关闭后回调 markTableGodTipsShown。
气泡位置根据桌面请神 Icon 世界坐标换算到本层，贴近入口。
]]
local GodTipsGuideView = class("GodTipsGuideView", XH.ViewBase)
local Define = require("lobby.Modules.QingShen.Define")

function GodTipsGuideView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/PropPush/QingShenGodTipsGuideLayer.csb"
end

function GodTipsGuideView:getBindingInfo()
    return {
        ["_KW_TOUCH_LAYER"] = { varName = "_touchLayer", type = XH.UI_TYPE.LAYER, onTouchEnded = "closeGuide" },
        ["_KW_ROOT_LAYER"] = { varName = "_rootNode" },
        ["_KW_PANEL_TIP"] = { varName = "_panelTip" },
        ["_KW_TEXT_TIP"] = { varName = "_textTip" },
        ["_KW_PANEL_ICON_POS"] = { varName = "_panelIconPos" },
        ["_KW_BTN_KNOW"] = { varName = "_btnKnow", type = XH.UI_TYPE.BUTTON, onTouchEnded = "closeGuide" },
        ["_KW_TEXT_KNOW"] = { varName = "_textKnow" },
        ["_KW_GOD_ANI"] = { varName = "_qsAni" },
        ["_KW_GOD_ANI1"] = { varName = "_godAni1" },
        ["_KW_GOD_ANI2"] = { varName = "_godAni2" },
        ["_KW_PANEL_MOVE"] = { varName = "_panelMove" },
    }
end

function GodTipsGuideView:ctor(param)
    self._param = type(param) == "table" and param or {}
    self._autoCloseSec = tonumber(self._param.autoCloseSec) or Define.GOD_TIPS_TABLE_AUTO_CLOSE_SEC
    self._onClose = self._param.onClose
    self._closed = false
    GodTipsGuideView.super.ctor(self)
    self:_initGuideContent()
    self:_startAutoClose()
end

function GodTipsGuideView:initCodeBind()
    -- if not self._rootNode or not self._touchLayer then
    --     return
    -- end
    -- local selfSize = self:getContentSize()
    -- local rootSize = self._rootNode:getContentSize()
    -- local scaleX = selfSize.width / rootSize.width
    -- local scaleY = selfSize.height / rootSize.height
    -- self._rootScale = scaleX > scaleY and scaleY or scaleX
    -- self._rootNode:setScale(self._rootScale)
    -- self._rootNode:setPosition(selfSize.width / 2, selfSize.height / 2)
    -- self._touchLayer:setPosition(selfSize.width / 2, selfSize.height / 2)
end

function GodTipsGuideView:_initGuideContent()
    if self._godAni1 and not tolua.isnull(self._godAni1) then
        XH.SpineManager:playAni(self._godAni1,"animation/GameCommon/propPush/","bb_qcs_rukou","animation",true)
    end
    if self._godAni2 and not tolua.isnull(self._godAni2) then
        XH.SpineManager:playAni(self._godAni2,"animation/GameCommon/propPush/","bb_qcs_rukou","animation",true)
    end
    self:_playQsIconLoopAni()
    self:_layoutNearIcon()
end

--- 在 _qsAni 上播放与桌面 IconView 循环立绘相同的 spine（QS_ICON_ANIM_LOOP）
function GodTipsGuideView:_playQsIconLoopAni()
    if not self._qsAni or tolua.isnull(self._qsAni) then
        return
    end
    local module = XH.lobby:getModule("QingShen")
    if not module or not module.safeCreateSpine then
        return
    end
    local iconView = self._param.iconView
    local propId, level
    if iconView and not tolua.isnull(iconView) then
        propId = tonumber(iconView._loopPropId)
        level = tonumber(iconView._loopLevel)
    end
    if not propId or propId <= 0 then
        propId = module.getIconDisplayPropId and module:getIconDisplayPropId() or 0
    end
    if not level or level < 1 then
        if iconView and not tolua.isnull(iconView) and iconView._getDisplayLevel then
            level = iconView:_getDisplayLevel(module)
        else
            level = 1
        end
    end
    level = math.max(tonumber(level) or 1, 1)

    local loopCfg = Define.QS_ICON_ANIM_LOOP[propId]
    local loopSpine = module:safeCreateSpine(loopCfg)
    if not loopSpine then
        return
    end
    loopSpine:update(0)
    local size = self._qsAni:getContentSize()
    loopSpine:setPosition(cc.p(size.width / 2, size.height / 2))
    self._qsAni:addChild(loopSpine)
    local aniTrack = (loopCfg.anim and loopCfg.anim[level]) or (loopCfg.anim and loopCfg.anim[1]) or "animation1"
    local trackid = 0
    if XH and XH.askIDManager and XH.askIDManager.getAskID then
        trackid = XH.askIDManager:getAskID()
    end
    loopSpine:setAnimation(trackid, aniTrack, true)
end

--- 根据桌面请神 Icon 位置，调整提示气泡与指示点
function GodTipsGuideView:_layoutNearIcon()
    local iconView = self._param.iconView
    if not iconView or tolua.isnull(iconView) or not self._rootNode then
        return
    end
    local panelIcon = iconView._panelIcon
    if not panelIcon or tolua.isnull(panelIcon) then
        return
    end
    local iconSize = panelIcon:getContentSize()
    local world = panelIcon:convertToWorldSpace(cc.p(iconSize.width / 2, iconSize.height / 2))
    local localPos = self._rootNode:convertToNodeSpace(world)
    if self._panelMove and not tolua.isnull(self._panelMove) then
        self._panelMove:setPosition(localPos)
    end
    -- if self._panelTip and not tolua.isnull(self._panelTip) then
    --     self._panelTip:setPosition(localPos.x + 260, localPos.y + 80)
    -- end
end

function GodTipsGuideView:_startAutoClose()
    local sec = math.max(1, self._autoCloseSec or 10)
    self:runAction(cc.Sequence:create(
        cc.DelayTime:create(sec),
        cc.CallFunc:create(function()
            self:closeGuide()
        end)
    ))
end

function GodTipsGuideView:closeGuide()
    if self._closed or tolua.isnull(self) then
        return
    end
    self._closed = true
    self:stopAllActions()
    if type(self._onClose) == "function" then
        self._onClose()
    end
    self:removeFromParent()
end

function GodTipsGuideView:showSelf()
    local parent = display.getRunningScene()
    if not parent or tolua.isnull(parent) then
        return
    end
    local old = parent:getChildByName("QingShenGodTipsGuideView")
    if old and not tolua.isnull(old) then
        old:removeFromParent()
    end
    self:setName("QingShenGodTipsGuideView")
    parent:addChild(self, 200)
end

return GodTipsGuideView
