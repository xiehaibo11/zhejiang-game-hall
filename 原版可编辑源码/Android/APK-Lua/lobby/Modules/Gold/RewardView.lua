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
    self:playAni(awardData)
end

function RewardView:playAni(awardData)
    if not awardData then return end
    self._rewardAni:getAnimation():play("in",-1,0)
    self._rewardAni:getAnimation():setMovementEventCallFunc(handler(self, self.playLoopAni))


    for index = 1,#awardData do
        local awardPanel 
        if #awardData >= 1 and #awardData <= #self._panelAward then
             awardPanel = self._panelAward[#awardData]
             awardPanel:setVisible(true)
        end
        local awardNode = XH.UITool.seekNodeByName(awardPanel,  KW_AWARD .. index)
        awardNode:setScale(0.01)
        awardNode:runAction(cc.ScaleTo:create(0.2,1.0))
    end
end

function RewardView:playLoopAni(arm,eventType,id)
    if eventType == ccs.MovementEventType.complete and id == "in" then
        self._rewardAni:getAnimation():play("loop",-1,1)
    end
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

return RewardView