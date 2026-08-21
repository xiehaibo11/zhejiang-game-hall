local DailyLuckyRewardView = class("DailyLuckyRewardView", XH.ViewBase)

local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"

local KW_AWARD = "_KW_UI_AWARD_BG_"
local KW_AWARD_IMG = "_KW_UI_IMG_TYPE"
local KW_AWARD_NAME = "_KW_UI_TEXT_COUNT"

local prizeIndex = 1

function DailyLuckyRewardView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/DailyLuckyDraw/DailyLuckyRewardView.csb"
end

function DailyLuckyRewardView:getBindingInfo()
    return {
        ["_KW_UI_ANI_REWARD"] = { varName = "_rewardAni" },
        ["_KW_UI_IMG_TYPE"] = { varName = "_rewardType" },
        ["_KW_UI_TEXT_COUNT"] = { varName = "_rewardCnt" },
        ["_KW_UI_AWARD_BG"] = { varName = "_rewardBg" },
        ["_KW_UI_REWARD_ROOT"] = { varName = "_rootNode", onTouchEnded = "onTouchEventCloseBtn"},
        ["_KW_BTN_FREEADS_AGAIN"] = { varName = "_freeAdsAgain", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgainPrize"},
        ["_KW_BTN_NOCHANCE"] = { varName = "_btnNoTimes" },
        ["_KW_BTN_TIMELIMITS"] = { varName = "_btnTimelimits" },
        ["_KW_TEXT_TIMELIMITS"] = { varName = "_kwTime" },

        ["_KW_PANEL_AWARD_1"] = {varName="_panelAward1"},
		["_KW_PANEL_AWARD_2"] = {varName="_panelAward2"},
		["_KW_PANEL_AWARD_3"] = {varName="_panelAward3"},
        ["_KW_TEXT_GETPRIZE_TIMES"] = {varName="_textGetprizeTimes"},
    }
end

function DailyLuckyRewardView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("DailyLuckyDraw"), eventKeyName = "EVENT_NEED_TIME", callBack = "onTimeRefreshSuccess" },
    }
end

function DailyLuckyRewardView:ctor(awardData) 
    DailyLuckyRewardView.super.ctor(self, awardData)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/shop/shop.plist")

    self._panelAward = {
        [1] = self._panelAward1,
        [2] = self._panelAward2,
        [3] = self._panelAward3,
    }

    self:show(awardData.prizeMsg)
    self:initCanGetUI(awardData.info)
    XH.audioManager:play("ACT_GET_AWARD")
end

-- 获取玩家个人信息回调
function DailyLuckyRewardView:initCanGetUI(playerData)
    local boolCanGetPrize = (playerData.sendMax == playerData.sendTimes)
    if XH.lobby:getModule("DailyLuckyDraw"):onGetTimeLimits() > 1 then
        self._btnTimelimits:setVisible(true)
        self._kwTime:setText("（" .. XH.lobby:getModule("DailyLuckyDraw"):onGetTimeLimits() .. "秒）")
    end
    self._textGetprizeTimes:setText("（".. playerData.sendMax - playerData.sendTimes .. "次）")
    self._btnNoTimes:setVisible(boolCanGetPrize)
    self._freeAdsAgain:setVisible(not boolCanGetPrize)
end

function DailyLuckyRewardView:initUI(awardData)
    if awardData then
        local awardPanel = self._panelAward[prizeIndex]
        awardPanel:setVisible(true)
        if awardPanel then
            local awardNode = XH.UITool.seekNodeByName(awardPanel, KW_AWARD .. prizeIndex)
            local awardImg = XH.UITool.seekNodeByName(awardNode, KW_AWARD_IMG)
            local awardText = XH.UITool.seekNodeByName(awardNode, KW_AWARD_NAME)
            awardImg:ignoreContentAdaptWithSize(true)
            if awardNode then
                local downloadImage = require("app.Req.DownloadImage")
                local reqDownloadImage = downloadImage:new()
                reqDownloadImage:addReqCallBack(self, function(node, cell, type)
                    if type == XH.Req.TYPE.SUCCESS then
                        local imageName = XH.StringTool.getImageNameByUrl(awardData.imageUrl)
                        local imagePath = DEFAULT_DOWNLOAD_IMAGE_DIR .. imageName
                        awardImg:loadTexture(imagePath, ccui.TextureResType.localType)
                    end
                end )
                reqDownloadImage:setUrl(awardData.imageUrl, false)
                awardText:setString("x" .. awardData.propValue)
                awardNode:setVisible(true)
            end
        end
    end
end

function DailyLuckyRewardView:show(awardData)
    self:initUI(awardData)
    self:playAni(awardData)
end

function DailyLuckyRewardView:playAni(awardData)
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

function DailyLuckyRewardView:playLoopAni(arm,eventType,id)
    if eventType == ccs.MovementEventType.complete and id == "in" then
        self._rewardAni:getAnimation():play("loop",-1,1)
    end
end

function DailyLuckyRewardView:onTouchEventCloseBtn(send, eventType)
    self:close()
end

function DailyLuckyRewardView:onCloseEvent(event)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
        self:close()
    end)))
end

function DailyLuckyRewardView:onTouchEventAgainPrize(send, eventType)
    XH.sdkManager:startToponAds("show")
    XH.lobby:getModule("DailyLuckyDraw"):setClickState()
    self:close()
end

-- 刷新倒计时
function DailyLuckyRewardView:onTimeRefreshSuccess(event)
    if event then
        local time = event.data
        if time == 0 then
            self._btnTimelimits:setVisible(false)
            self._kwTime:setText("（" .. time .. "秒）")
        else
            self._btnTimelimits:setVisible(true)
            self._kwTime:setText("（" .. time .. "秒）")
        end
    end
end

return DailyLuckyRewardView