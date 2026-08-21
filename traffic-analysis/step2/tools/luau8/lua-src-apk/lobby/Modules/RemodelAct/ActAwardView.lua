local RemodelActAwardView = class("RemodelActAwardView", XH.ViewBase)

local KW_AWARD = "_KW_UI_AWARD_BG_"
local KW_AWARD_IMG = "_KW_UI_IMG_TYPE"
local KW_AWARD_NAME = "_KW_UI_TEXT_COUNT"

function RemodelActAwardView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/RemodelAct/RemodelRewardLayer.csb"
end

function RemodelActAwardView:getBindingInfo()
    return {
        ["_KW_UI_REWARD_ROOT"] = { varName = "_rootNode", onTouchEnded = "onTouchEventCloseBtn"},
        ["_KW_UI_ANI_REWARD"] = { varName = "_rewardAni" },
        ["_KW_PANEL_AWARD_1"] = {varName="_panelAward1"},
		["_KW_PANEL_AWARD_2"] = {varName="_panelAward2"},
		["_KW_PANEL_AWARD_3"] = {varName="_panelAward3"},
    }
end


function RemodelActAwardView:ctor(awardData) 
    RemodelActAwardView.super.ctor(self)
    
    self._panelAward = {
        [1] = self._panelAward1,
        [2] = self._panelAward2,
        [3] = self._panelAward3,
    }

    self:initEvents()
    self:show(awardData)
    XH.audioManager:play("ACT_GET_AWARD")
end

function RemodelActAwardView:initUI(awardData)
    if awardData then
       local awardCnt = #awardData
       local awardPanel 
       if awardCnt >= 1 and awardCnt <= 3 then
            awardPanel = self._panelAward[awardCnt]
            awardPanel:setVisible(true)
       end
       if awardPanel then
           for index = 1,#awardData do
                local awardNode = XH.UITool.seekNodeByName(awardPanel, KW_AWARD .. index)
                local awardImg = XH.UITool.seekNodeByName(awardNode, KW_AWARD_IMG)
                local awardText = XH.UITool.seekNodeByName(awardNode, KW_AWARD_NAME)
                awardImg:ignoreContentAdaptWithSize(true)
                awardImg:setScale(1.5)
                if awardNode then
                    awardData = awardData[index]
                    XH.UITool.reloadNodeRemoteImage(awardImg, awardData.url)
                    awardText:setString(awardData.prize_name)
                    awardNode:setVisible(true)
                end
           end
       end
   end
end

function RemodelActAwardView:initEvents()
    self._listenerEvent = cc.EventListenerCustom:create("GoldBaseLive.CloseReward", handler(self,self.onCloseEvent))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEvent, 1)    
end

function RemodelActAwardView:show(awardData)
    self:initUI(awardData)
    self:playAni(awardData)
end

function RemodelActAwardView:playAni(awardData)
    if not awardData then return end
    self._rewardAni:getAnimation():play("in",-1,0)
    self._rewardAni:getAnimation():setMovementEventCallFunc(handler(self, self.playLoopAni))


    for index = 1,#awardData do
        local awardPanel 
        if #awardData >= 1 and #awardData <= 3 then
             awardPanel = self._panelAward[#awardData]
             awardPanel:setVisible(true)
        end
        local awardNode = XH.UITool.seekNodeByName(awardPanel,  KW_AWARD .. index)
        awardNode:setScale(0.01)
        awardNode:runAction(cc.ScaleTo:create(0.2,1.0))
    end
end

function RemodelActAwardView:playLoopAni(arm,eventType,id)
    if eventType == ccs.MovementEventType.complete and id == "in" then
        self._rewardAni:getAnimation():play("loop",-1,1)
    end
end

function RemodelActAwardView:onTouchEventCloseBtn(send, eventType)
    self:close()
end

function RemodelActAwardView:onCloseEvent(event)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
        self:close()
    end)))
end

function RemodelActAwardView:close()
    if self._listenerEvent then
        local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
        eventDispatcher:removeEventListener(self._listenerEvent)
    end
    RemodelActAwardView.super.close(self)
end

return RemodelActAwardView`