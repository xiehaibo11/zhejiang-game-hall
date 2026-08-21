local RewardView = class("RewardView", XH.ViewBase)

local KW_AWARD = "_KW_UI_AWARD_BG_"
local KW_AWARD_IMG = "_KW_UI_IMG_TYPE"
local KW_AWARD_NAME = "_KW_UI_TEXT_COUNT"

function RewardView:getCSBPath()
    return "cocosStudio/hall/CSB/goldroom/GoldRewardLayer.csb"
end

function RewardView:getBindingInfo()
    return {
        ["_KW_UI_ANI_REWARD"] = { varName = "_rewardAni" },
        ["_KW_UI_IMG_TYPE"] = { varName = "_rewardType" },
        ["_KW_UI_TEXT_COUNT"] = { varName = "_rewardCnt" },
        ["_KW_UI_AWARD_BG"] = { varName = "_rewardBg"},
        ["_KW_UI_REWARD_ROOT"] = { varName = "_rootNode", onTouchEnded = "onTouchEventCloseBtn"},

        ["_KW_PANEL_AWARD_1"] = {varName="_panelAward1"},
		["_KW_PANEL_AWARD_2"] = {varName="_panelAward2"},
		["_KW_PANEL_AWARD_3"] = {varName="_panelAward3"},
        ["_KW_PANEL_AWARD_4"] = {varName="_panelAward4"},
        ["_KW_PANEL_AWARD_5"] = {varName="_panelAward5"},
        ["_KW_PANEL_AWARD_6"] = {varName="_panelAward6"},
        ["_KW_PANEL_AWARD_7"] = {varName="_panelAward7"},
        ["_KW_BGANI_NODE"] = {varName = "_aniNode"},
        ["_KW_TOPANI_NODE"] = {varName = "_aniTopNode"},
        ["_KW_TITLEANI_NODE"] = {varName = "_aniTitleNode"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
    }
end


function RewardView:ctor(awardData) 
    RewardView.super.ctor(self)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/shop/shop.plist")

    self._panelAward = {
        [1] = self._panelAward1,
        [2] = self._panelAward2,
        [3] = self._panelAward3,
        [4] = self._panelAward4,
        [5] = self._panelAward5,
        [6] = self._panelAward6,
        [7] = self._panelAward7,
    }

    self:initEvents()
    self:show(awardData)
    XH.audioManager:play("ACT_GET_AWARD")
end

function RewardView:initUI(awardData)
    self:initAni()
    if awardData then
       local awardCnt = #awardData
       local awardPanel 
       if awardCnt >= 1 and awardCnt <= #self._panelAward then
            awardPanel = self._panelAward[awardCnt]
            awardPanel:setVisible(true)
       end
       if awardPanel then
           for index = 1,#awardData do
                local awardNode = XH.UITool.seekNodeByName(awardPanel,  KW_AWARD .. index)
                local awardImg = XH.UITool.seekNodeByName(awardNode, KW_AWARD_IMG)
                local awardText = XH.UITool.seekNodeByName(awardNode, KW_AWARD_NAME)
                 awardImg:ignoreContentAdaptWithSize(true)
                if awardNode then
                    local aniNode = ccui.Widget:create()
                    aniNode:setPosition(cc.p(awardNode:getContentSize().width/2, awardNode:getContentSize().height/2 + 5))
                    awardNode:addChild(aniNode)
                    self:addSpine(aniNode, "zzb_ty_jlgx", "animation", true)
                    self:delayShow(awardNode, 0.1 * index)

                    local nIndexAward = awardData[index]
                    if nIndexAward.type == XH.areaData:getPropRoomCardID() or nIndexAward.type == XH.areaData:getPropBindRoomCardID() then
                       if nIndexAward.cnt == 1 then
                            awardImg:loadTexture("ico_card_1.png", ccui.TextureResType.plistType)
                       elseif nIndexAward.cnt == 2 then
                            awardImg:loadTexture("ico_card_2.png", ccui.TextureResType.plistType)
                       elseif nIndexAward.cnt == 3 then
                            awardImg:loadTexture("ico_card_3.png", ccui.TextureResType.plistType)
                       elseif nIndexAward.cnt >= 4  then
                            awardImg:loadTexture("ico_card_4.png", ccui.TextureResType.plistType)
                        end
                    elseif nIndexAward.type == -1 then
                         if nIndexAward.cnt >=0 and nIndexAward.cnt < 1000 then
                            awardImg:loadTexture("ico_gold_1.png", ccui.TextureResType.plistType)
                         elseif nIndexAward.cnt >=1000 and nIndexAward.cnt < 10000 then
                            awardImg:loadTexture("ico_gold_2.png", ccui.TextureResType.plistType)
                         elseif nIndexAward.cnt >=10000 and nIndexAward.cnt < 100000 then
                            awardImg:loadTexture("ico_gold_3.png", ccui.TextureResType.plistType)
                         elseif nIndexAward.cnt >=100000  then
                            awardImg:loadTexture("ico_gold_4.png", ccui.TextureResType.plistType)
                         end
                    elseif nIndexAward.type == XH.areaData:getPropDiamndID() then
                        if nIndexAward.cnt <= 8 then
                            awardImg:loadTexture("ico_diamond_1.png", ccui.TextureResType.plistType)
                         elseif nIndexAward.cnt > 8 and nIndexAward.cnt <= 28 then
                            awardImg:loadTexture("ico_diamond_2.png", ccui.TextureResType.plistType)
                         elseif nIndexAward.cnt > 28 and nIndexAward.cnt <= 88 then
                            awardImg:loadTexture("ico_diamond_3.png", ccui.TextureResType.plistType)
                         elseif nIndexAward.cnt > 88  then
                            awardImg:loadTexture("ico_diamond_4.png", ccui.TextureResType.plistType)
                         end                        
                    end

                    awardText:setString("x"..nIndexAward.cnt)
                    awardNode:setVisible(true)
                end
           end
       end
   end
end

function RewardView:initEvents()
    self._listenerEvent = cc.EventListenerCustom:create("GoldBaseLive.CloseReward", handler(self,self.onCloseEvent))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEvent, 1)    
end

function RewardView:show(awardData)
    self:initUI(awardData)
end

function RewardView:addSpine(node, fileName, aniName, loop, completFunc)
    local armature = display.playDargonBonesSpine({
        path = "animation/Lobby/Base/zzb_jbdt_gxhd/",
        tex = fileName .. ".json",
        ske = fileName .. ".atlas",
        armatureName = aniName,
        loop = loop,
        scale = 1
    })
    if armature then
        if completFunc then
            armature:registerSpineEventHandler(function(event)
                if event.type == 'complete' then
                    completFunc(armature)
                end
            end, sp.EventType.ANIMATION_COMPLETE)
        end
        node:addChild(armature)
    end
    return armature
end
function RewardView:initAni()
    self:addSpine(self._aniNode, "zzb_jbdt_gxhd", "gx_cx", false, function(armature)
        armature:setAnimation(0, "gx_loop", true)
    end)
    self:addSpine(self._aniTopNode, "zzb_ty_jbdl", "animation", false)
    self:addSpine(self._aniTitleNode, "zzb_ty_btgx", "cx", false, function(armature)
        armature:setAnimation(0, "loop", true)
    end)

    local endPos = self._imgTitle:getPositionX()
    self._imgTitle:setPositionX(endPos + 250)
    self._imgTitle:setVisible(false)
    self._imgTitle:runAction(cc.Sequence:create(cc.DelayTime:create(0.2), cc.Show:create(), 
        cc.EaseBackOut:create(cc.MoveBy:create(0.5, cc.p(-250,0))), cc.CallFunc:create(function()
    end)))
end

function RewardView:delayShow(node, delay)
    node:setScale(0)
    node:setOpacity(0)
    node:runAction(cc.Sequence:create(cc.DelayTime:create(delay), cc.Spawn:create(cc.EaseBackOut:create(cc.ScaleTo:create(0.2, 1)), cc.FadeIn:create(0.2))))
end


function RewardView:onTouchEventCloseBtn(send, eventType)
    self:close()
end

function RewardView:onCloseEvent(event)
    if tolua.isnull(self) then
        return
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
        self:close()
    end)))
end

function RewardView:close()
    if self._listenerEvent then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        eventDispatcher:removeEventListener(self._listenerEvent)
    end
    RewardView.super.close(self)
end

function RewardView:onTouchEventOpenGetui(send, eventType)
    XH.sdkManager:openGeTuiPremission()

    self:close()
end

return RewardView� 