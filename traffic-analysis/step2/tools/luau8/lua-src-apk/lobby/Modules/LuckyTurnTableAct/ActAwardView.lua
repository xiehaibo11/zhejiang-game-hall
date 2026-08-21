local LuckyTurnTableAwardView = class("LuckyTurnTableAwardView", XH.ViewBase)

function LuckyTurnTableAwardView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LuckyTurnTableAct/LuckyTurnTableAwardLayer.csb"
end

function LuckyTurnTableAwardView:getBindingInfo()
    return {
        ["_KW_UI_ANI_REWARD"] = { varName = "_rewardAni" },
        ["_KW_UI_IMG_TYPE"] = { varName = "_rewardType" },
        ["_KW_UI_TEXT_COUNT"] = { varName = "_rewardCnt" },
        ["_KW_UI_AWARD_BG"] = { varName = "_rewardBg"},
        ["_KW_UI_AWARD_ROOT"] = { varName = "_rootNode", onTouchEnded = "onTouchEventCloseBtn"},
        ["_KW_UI_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCloseBtn"},

        ["_KW_PANEL_AWARD"] = {varName="_panelAward"},
        ["_KW_AWARD_LISTVIEW"] = {varName="_awardListView"},
        ["_KW_PANEL_AWARD_ITEM"] = {varName="_panelAwardItem"},

        ["_KW_PANEL_NO_AWARD"] = {varName="_panelNoAward"},
        ["_KW_TEXT_NO_AWARD"] = {varName="_textNoAward"},
    }
end

function LuckyTurnTableAwardView:ctor(awardData) 
    LuckyTurnTableAwardView.super.ctor(self)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/shop/shop.plist")
    self._awardData = awardData
    self:initListView()
    self:initUI(awardData)
    XH.audioManager:play("ACT_GET_AWARD")
    
    -- 刷新玩家道具信息
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
end

function LuckyTurnTableAwardView:initListView()
     if self._awardListView and self._panelAwardItem then
        self._awardListView:setItemModel(self._panelAwardItem)
        self._awardListView:removeAllChildren()
    end
end

function LuckyTurnTableAwardView:initUI(awardData)
    if awardData.val == 0 then
        self:showNoAwardPanel()
    else
        self:showAwardPanel(awardData)
    end
    self:playAni()
end

function LuckyTurnTableAwardView:showNoAwardPanel()
    if self._panelNoAward then
        self._panelNoAward:setVisible(true)
    end
    if self._textNoAward then
        self._textNoAward:setString(XH.ConstString.getStr("NATIONAL_DAY_ACT_INFO_NO_PRIZE"))
    end
end

function LuckyTurnTableAwardView:showAwardPanel(awardData)
    if not awardData then
        return
    end
    if self._panelAward then
        self._panelAward:setVisible(true)
    end
    self:updateAwardInfo(awardData)
end

function LuckyTurnTableAwardView:updateAwardInfo(data)
    if not data or not data.name then
        return
    end
    XH.UITool.setText(self._panelAward, "KW_TEXT_AWARD_INFO", data.name)
    local awardPanel = XH.UITool.seekNodeByName(self._panelAward, "KW_UI_IMG_TYPE")
    XH.UITool.reloadNodeRemoteImage(awardPanel, data.url)
end

function LuckyTurnTableAwardView:playAni()
    self._rewardAni:getAnimation():play("in",-1,0)
    self._rewardAni:getAnimation():setMovementEventCallFunc(function (arm,eventType,id)
        if eventType == ccs.MovementEventType.complete and id == "in" then
            self._rewardAni:getAnimation():play("loop", -1, 1)
        end
    end)

    if self._panelAward then
        self._panelAward:setScale(0.01)
        self._panelAward:stopAllActions()
        self._panelAward:runAction(cc.ScaleTo:create(0.2, 1.0))
    end
end

function LuckyTurnTableAwardView:onTouchEventCloseBtn(send, eventType)
    self:close()
end

return LuckyTurnTableAwardView�