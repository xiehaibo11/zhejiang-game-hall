--ganpengjin

local baseLayer     = require("newgold.MatchGames.PDK.LYPDK.common.baseLayer")
local pukeWarning   = class("pukeWarning", baseLayer)

function pukeWarning:onCreate()
    -- body
    pukeWarning.super.onCreate(self)
    self:initUIS()

    self.playStatus = false
end

function pukeWarning:initUIS()
    -- body
    self.warningNode = cc.Node:create();
    if not self.warningNode then
        return;
    end
    self:addChild(self.warningNode);

    local light = display.newSprite("game/lyPuKe/deskUIs/deng1.png")
    light:setAnchorPoint(cc.p(0.5, 0.5));
    light:setPosition(cc.p(0, 0));
    self.warningNode:addChild(light);

    -- self.warningNode:setScale(0.8)

    local action = self:createFrameAnimal(LYPDKResource.WarmRes.res)
    if not action then
        return;
    end
    light:runAction(cc.RepeatForever:create(action))
end

-- 创建帧动画
-- 参数：帧动画属性
function pukeWarning:createFrameAnimal(property)
    local an = cc.Animation:create()
    for i = 1, property.count do 
        local frameName = string.format(property.path, i)
 
        an:addSpriteFrameWithFile(frameName)
    end 
    an:setDelayPerUnit(property.speed)
    an:setRestoreOriginalFrame(true)
    local action = cc.Animate:create(an)
    return action
end


function pukeWarning:playStartAnimation()
    -- body
    if not self.warningNode then
        return;
    end
end

function pukeWarning:hideWarningAnimation()
    -- body
    if not self.warningNode then
        return;
    end

    self:enbaleWaringAnimation(false);
    self.playStatus = false
end

function pukeWarning:showWarningAnimation()
    -- body
    if not self.warningNode or self.playStatus == true then
        return;
    end
    self:enbaleWaringAnimation(true);
    self.playStatus = true 
end

function pukeWarning:enbaleWaringAnimation( enable )
    -- body
    if enable == nil then
        return;
    end

    if enable then
        self.audio:playCardsSound(1, GameCMD.ALERR_SOUND)
    end
    self.warningNode:setVisible(enable);
end

return pukeWarning;