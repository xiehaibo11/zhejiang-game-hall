local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")

function UIMahLayer:createChildren()
    UIMahLayer.super.createChildren(self)
    -- 生成悔胡按钮
    if self._actionButton5 and not self._actionRegret then
        cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/MahjongNew/GameLayer/Image/HangZhou/hangzhou.plist")
        self._actionButton5:loadTextures("action_hu.png", "action_hu.png", "action_hu_gray.png", ccui.TextureResType.plistType)
        self._actionRegret = self._actionButton5:clone()
        self._actionRegret:ignoreContentAdaptWithSize(true)
        self._actionRegret:loadTextures("action_regret.png", "action_regret.png", "action_regret.png", ccui.TextureResType.plistType)
        self._actionRegret:addTouchEventListener(handler(self, self.onTouchEventActionButton))
        self._actionRegret:setVisible(false)
        self._actionRegret:setEnabled(false)
        self._actionButton5:getParent():addChild(self._actionRegret)
    end
end

function UIMahLayer:onEventShowAction(event)
    -- 重置悔胡阶段显示
    self._actionRegret:setVisible(false)
    self._actionRegret:setEnabled(false)
    self._actionButton1:setVisible(true)
    self._actionButton1:setEnabled(true)
    self._actionButton5:setEnabled(true)
    UIMahLayer.super.onEventShowAction(self, event)
end

-- 杭麻添加悔胡功能
function UIMahLayer:onTouchEventActionButton(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end

    -- 自己牌权有胡权限时，点取消无效
    if send == self._actionButton1 then
        self._actionButton1:setEnabled(false)
        CF.msgManager:sendForwardOperatePass(tostring(CF.GameDefine.ACTION.PASS))
        if self:getGameData():getPlayPower() 
            and self._actionButton5 and self._actionButton5:isVisible()
            and self._actionRegret then
                self._actionRegret:setVisible(true)
                self._actionRegret:setEnabled(true)
                self._actionButton1:setVisible(false)
                self._actionButton5:setEnabled(false)
                local x = self._actionButton5:getPositionX() + 120
                local y = self._actionButton5:getPositionY() + 160
                self._actionRegret:setPosition(x, y)
                return
        else
            CF.SysTool.performWithDelayGlobal(function()
                self._actionButton1:setEnabled(true)
            end,1)
            CF.msgManager:sendCancel(self:getGameData():getActionID())
            self:showAction({}, false)
        end
    elseif send == self._actionRegret then
        self._actionRegret:setVisible(false)
        self._actionRegret:setEnabled(false)
        self._actionButton1:setVisible(true)
        self._actionButton1:setEnabled(true)
        self._actionButton5:setEnabled(true)
    else
        UIMahLayer.super.onTouchEventActionButton(self, send, eventType)
    end
end

return UIMahLayer�