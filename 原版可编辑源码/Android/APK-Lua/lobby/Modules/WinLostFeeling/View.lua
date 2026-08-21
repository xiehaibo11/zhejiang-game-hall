local WinLostFeelingView = class("WinLostFeelingView", XH.ViewBase)

local KW_AWARD_IMG = "_KW_UI_IMG_TYPE"
local KW_AWARD_NAME = "_KW_UI_TEXT_COUNT"
local KW_UI_TEXT_WORD_UP = "_KW_UI_TEXT_WORD_UP"
local KW_UI_TEXT_WORD_DOWN = "_KW_UI_TEXT_WORD_DOWN"

local RULE_TYPE = {
	WIN_TIMES = 1,
	LOST_TIMES = 2,
	LOST_SCORE = 3,
	BIG_LOST_TIMES = 4,
}

function WinLostFeelingView:getCSBPath()
    return "cocosStudio/hall/CSB/window/WinLostFeeling/WinLostFeelingLayer.csb"
end

function WinLostFeelingView:getBindingInfo()
    return {
        ["_KW_UI_ANI_REWARD"] = { varName = "_rewardAni" },
        ["_KW_UI_IMG_TYPE"] = { varName = "_rewardType" },
        ["_KW_UI_TEXT_COUNT"] = { varName = "_rewardCnt" },
        ["_KW_UI_AWARD_BG"] = { varName = "_rewardBg"},
        ["_KW_UI_REWARD_ROOT"] = { varName = "_rootNode"},
        ["_KW_UI_BTN_SHARE"] = { varName = "_btnShare",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventShareBtn"},
        ["_KW_UI_BTN_CLOSE"] = { varName = "_btnClose",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCloseBtn"},

        ["_KW_PANEL_LOST"] = { varName = "_lostPanel" },
        ["_KW_PANEL_WIN"] = { varName = "_winPanel" },

        ["_KW_AWARD_LISTVIEW"] = {varName="_awardListView"},
        ["_KW_PANEL_AWARD_ITEM"] = {varName="_panelAwardItem"},
    }
end

function WinLostFeelingView:ctor(awardData) 
    WinLostFeelingView.super.ctor(self)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/shop/shop.plist")
    self._awardData = awardData or {}
    self:initListView()
    self:initUI(awardData)
    XH.audioManager:play("ACT_GET_AWARD")
end

function WinLostFeelingView:initListView()
     if self._awardListView and self._panelAwardItem then
        self._awardListView:setItemModel(self._panelAwardItem)
        self._awardListView:removeAllChildren()
    end
end

function WinLostFeelingView:initUI(awardData)
    if awardData.type == RULE_TYPE.WIN_TIMES then
        self:showWinUI(awardData)
    else
        self:showLostUI(awardData)
    end
    self:playAni(awardData)
    XH.playerData:flushPlayerDrop()
    XH.playerData:flushGoldCoin()
end

function WinLostFeelingView:showWinUI(awardData)
    if self._winPanel then 
        self._winPanel:setVisible(true)
    end
    if self._btnClose then
        self._btnClose:setPositionX(-200)
    end
    self:toastWinAwards(awardData.awards)
end

function WinLostFeelingView:toastWinAwards(awards)
    if not awards or #awards == 0 then
        return
    end

    local awardStr = "恭喜获得："
    for _, data in pairs(awards) do
        awardStr = awardStr .. data.prop_name .. "x" .. (data.prop_count or 0) .. ","
    end
    awardStr = string.sub(awardStr, 1, -2)
    self:showToast(awardStr, 3)
end

function WinLostFeelingView:showToast(str, time)
    local ToastUI = require("app.Tip.ToastView")
    local toast = ToastUI.new(str, 1, time)
    local function startRemove()
        toast:hideSelf()
    end

    local fadeOutTime = 1 --最后一秒淡出
    local delayAct = cc.DelayTime:create(time - fadeOutTime)
    local updateCallAct = cc.CallFunc:create(startRemove)

    local showToastFunc = cc.CallFunc:create(function()
        toast:setVisible(true)
    end)
    
    self._rootNode:addChild(toast)
    toast:setPosition(display.cx, display.cy / 4)
    local sequenceAct = cc.Sequence:create(showToastFunc, delayAct, cc.FadeOut:create(fadeOutTime), updateCallAct)
    toast:runAction(sequenceAct)
end

function WinLostFeelingView:showLostUI(awardData)
    if not awardData or not self._awardListView then
        return
    end
    if self._lostPanel then 
        self._lostPanel:setVisible(true) 
    end
    XH.UITool.setText(self._lostPanel, KW_UI_TEXT_WORD_DOWN, awardData.strWords or "")
    XH.UITool.setText(self._lostPanel, KW_UI_TEXT_WORD_UP, awardData.upstrWords or "")

    for _, var in pairs(awardData.awards) do
        self._awardListView:pushBackDefaultItem()
        local  awardItems = self._awardListView:getItems()
        local awardItem = awardItems[#awardItems]
        self:updateAwardItem(awardItem, var)   
    end
    local awardCount = self._awardListView:getChildrenCount()
    if awardCount > 0 then
        local itemsMargin = self._awardListView:getItemsMargin() * (awardCount -1)
        local itemSize = self._panelAwardItem:getContentSize()
        local listViewSize = cc.size(itemSize.width * awardCount + itemsMargin, itemSize.height)
        self._awardListView:setContentSize(listViewSize.width, listViewSize.height)
        self._awardListView:setInnerContainerSize(listViewSize)
    end
end

function WinLostFeelingView:updateAwardItem(awardItem, data)
    if not awardItem or not data then
        return
    end
    awardItem:setVisible(true)
    local awardText = XH.UITool.seekNodeByName(awardItem, KW_AWARD_NAME)
    if awardText then
        awardText:setString("x" .. data.prop_count or "")
    end
    local awardImg = XH.UITool.seekNodeByName(awardItem, KW_AWARD_IMG)
    if awardImg and data.prop_id then
        local awardImgUrl = XH.propsData:getExtendPropImgUrlByPropid(tonumber(data.prop_id))
        if awardImgUrl == "" then
            awardImgUrl = data.image_url or ""
        end
        if awardImgUrl ~= "" then
            local downloadImage = require("app.Req.DownloadImage")
            local reqDownloadImage = downloadImage:new()
            reqDownloadImage:addReqCallBack(self, function (node ,cell, ctype)
                if ctype == XH.Req.TYPE.SUCCESS then
                    local imageName = XH.StringTool.getImageNameByUrl(awardImgUrl)
                    local imagePath = device.writablePath .. "tmpImageCachDir/" .. imageName
                    awardImg:loadTexture(imagePath, ccui.TextureResType.localType)
                end
            end)
            reqDownloadImage:setUrl(awardImgUrl, false)
        end
    end
end

function WinLostFeelingView:playAni(awardData)
    self._rewardAni:getAnimation():play("in",-1,0)
    self._rewardAni:getAnimation():setMovementEventCallFunc(handler(self, self.playLoopAni))

    if awardData and awardData.awards then
        if self._awardListView then
            self._awardListView:setScale(0.01)
            self._awardListView:runAction(cc.ScaleTo:create(0.2,1.0))
        end
    end
end

function WinLostFeelingView:playLoopAni(arm,eventType,id)
    if eventType == ccs.MovementEventType.complete and id == "in" then
        self._rewardAni:getAnimation():play("loop",-1,1)
    end
end

function WinLostFeelingView:onTouchEventCloseBtn(send, eventType)
    local index = self._awardData.index
    self:close()
    XH.lobby:getModule("WinLostFeeling"):openWinLostFeelView(index)
end

function WinLostFeelingView:onTouchEventShareBtn(send, eventType)
    local gameData = {
        headUrl = XH.playerData:getWeChatURL(),
        playerName = XH.playerData:getNickName(),
        winCount = self._awardData.value or 0
    }
    XH.viewManager:openView("WinLostFeelShare", nil, gameData)
end

--将窗体显示到屏幕
function WinLostFeelingView:showSelf(zorder)
    zorder = zorder or (XH.ZORDER.TIPLAYER + 1)
	local runningScene = display.getRunningScene()
	if runningScene then
        runningScene:addChild(self, zorder)
	end
	return self
end

return WinLostFeelingView