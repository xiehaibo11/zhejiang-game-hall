local TimeLoginActWheelView = class("TimeLoginActWheelView", XH.ViewBase)
local TimeLoginActConfig = require("lobby.Modules.TimeLoginAct.Config")
local ViewAniConfig = require("app.Base.ViewAniConfig")

local spinePath = "res/animation/Lobby/Activity/TimeLoginAct/"

function TimeLoginActWheelView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TimeLoginAct/TimeLoginActWheelLayer.csb"
end

function TimeLoginActWheelView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootPanel}
end

function TimeLoginActWheelView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = { varName = "_rootPanel"},
        ["_KW_RING"] = { varName = "_imgRing"},
        
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_ROLL"] = { varName = "_btnRoll", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnRoll"},
        ["_KW_TEXT_ROLL"] = { varName = "_textRollImg"},
        ["_KW_BTN_ROLL_END"] = { varName = "_btnRollEnd", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnRollEnd"},
        ["_KW_ITEM_1"] = { varName = "_item1"},
        ["_KW_ITEM_2"] = { varName = "_item2"},
        ["_KW_ITEM_3"] = { varName = "_item3"},
        ["_KW_ITEM_4"] = { varName = "_item4"},
        ["_KW_ITEM_5"] = { varName = "_item5"},
        ["_KW_ITEM_6"] = { varName = "_item6"},
        ["_KW_ITEM_7"] = { varName = "_item7"},
        ["_KW_ITEM_8"] = { varName = "_item8"},
        ["_KW_TEXT_ROLL_TIPS"] = { varName = "_roll_text"},
        ["_KW_ANIM_TITLE"] = { varName = "_animTitle"},
        ["_KW_ANIM_RING"] = { varName = "_animRing"},
        ["_KW_ANIM_ROLL"] = { varName = "_animRoll"}
    }
end

function TimeLoginActWheelView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "FLUSH_TIMELOGIN_WHEEL_STATE", callBack = "onUpdateWheel" },
        { module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "PLAY_TIMELOGIN_WHEEL_ROLL", callBack = "onStartRollWheel" },
    }
end

function TimeLoginActWheelView:ctor()
    TimeLoginActWheelView.super.ctor(self)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010803,{page_item_id = "抽奖界面"})
    self.targetIndex = 0;
    self.currentIndex = 0;
    self.rollState = 0;
    self:initUI()
end

function TimeLoginActWheelView:initUI()
    for i = 1,8 do
        self["_light_"..i] = XH.UITool.seekNodeByName(self["_item"..i],"_KW_IMG_SELECT")
        self["_reward_"..i] = XH.UITool.seekNodeByName(self["_item"..i],"_KW_LAYER_REWARD")
        self["_reward_img_"..i] = XH.UITool.seekNodeByName(self["_item"..i],"_KW_ITEM_IMAGE")
        self["_reward_txt1_"..i] = XH.UITool.seekNodeByName(self["_item"..i],"_KW_ITEM_TEXT_1")
        self["_reward_txt2_"..i] = XH.UITool.seekNodeByName(self["_item"..i],"_KW_ITEM_TEXT_2")
    end
    self:setWheelState(0)
    self:updateReward()
    self:onUpdateWheel()
    XH.SpineManager:playAni(self._animTitle, spinePath, "zzb_dt_xyzp", "xia", true)
    XH.SpineManager:playAni(self._animRing, spinePath, "zzb_dt_xyzp", "shang", true)
    self._animRollNode = XH.SpineManager:playAni(self._animRoll, spinePath, "zzb_dt_xyzp", "", false)
    self._animRollNode:stopAllActions()
    self._animRollNode:setVisible(false)
end

function TimeLoginActWheelView:updateReward()
    local wheelReward = XH.lobby:getModule("TimeLoginAct"):getWheelReward()
    if wheelReward and wheelReward[1] and wheelReward[1].props and #wheelReward[1].props > 0 and #wheelReward[1].props == 8 then
        for i = 1, 8 do
            local awardInfo = wheelReward[1].props[i]
            local imgAward = self["_reward_img_"..i]
            local propImage = XH.RemoteImage.new()
            propImage:setAnchorPoint(cc.p(0.5, 0.5))
            propImage:setPosition(imgAward:getContentSize().width * 0.5, imgAward:getContentSize().height * 0.5)
            propImage:ignoreContentAdaptWithSize(false)
            propImage:setContentSize(imgAward:getContentSize().width, imgAward:getContentSize().height)
            propImage:setMaxContentSize(cc.size(imgAward:getContentSize().width, imgAward:getContentSize().height))
            propImage:setUrl(awardInfo.image or "")
            propImage:setScale(0.8)
            imgAward:addChild(propImage)
            local propCnt = awardInfo.propCnt
            if awardInfo.propId == XH.areaData:getPropLimitedTimeRoomCardID() then
                if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                    propCnt = awardInfo.propCnt / XH.areaData:getPropLimitedTimeRoomCardRatio()
                end
            end
            if awardInfo.name == "金币" then
                self["_reward_txt1_"..i]:setText(propCnt.."")
            else
                self["_reward_txt1_"..i]:setText(propCnt.."x")
            end
            self["_reward_txt2_"..i]:setText(awardInfo.name)
            local textWidth = self["_reward_txt1_"..i]:getContentSize().width + self["_reward_txt2_"..i]:getContentSize().width;
            self["_reward_txt1_"..i]:setPositionX(101 - textWidth*0.5)
            self["_reward_txt2_"..i]:setPositionX(101 - textWidth*0.5 + self["_reward_txt1_"..i]:getContentSize().width)
        end
    else
        XH.TipTool.showToast("转盘奖励读取错误")
    end
end

function TimeLoginActWheelView:onUpdateWheel()
    local canTurnWheel = XH.lobby:getModule("TimeLoginAct"):isCanTurnWheel()
    if canTurnWheel then
        self._roll_text:setText("剩余1次")
    else
        self._roll_text:setText("剩余0次")
    end
    self._btnRoll:setVisible(canTurnWheel)
    self._textRollImg:setVisible(true)
    self._btnRollEnd:setVisible(not canTurnWheel)
end

function TimeLoginActWheelView:onBtnRoll()
    self._btnRoll:setTouchEnabled(false)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010804,{page_item_id = "抽奖界面"})
    XH.lobby:getModule("TimeLoginAct"):reqClaimWheelReward()
end

function TimeLoginActWheelView:onBtnRollEnd()
    XH.TipTool.showToast("次数不足，定时登录累计抽奖进度")
end

function TimeLoginActWheelView:onStartRollWheel(event)
    self._isRolling = true
    self.targetIndex = event.targetIndex or 0
    if self._animRollNode ~= nil then
        self._animRollNode:setVisible(true)
        self._animRollNode:setAnimation(0,"choujiang",false)
    end
    self._btnRoll:runAction(cc.Sequence:create(cc.EaseQuadraticActionOut:create(cc.RotateTo:create(5.7,2520+(self.targetIndex%8)*45)),cc.CallFunc:create(function()
        self:setWheelState(2)
        self._isRolling = false
        self._btnRoll:setTouchEnabled(true)
        self:playRewardAni(event)
    end)))
    self._imgRing:runAction(cc.EaseQuadraticActionOut:create(cc.RotateTo:create(5.8,2520+(self.targetIndex%8)*45)))
    self:setWheelState(1)
end

-- 0等待 1旋转 2停止
function TimeLoginActWheelView:setWheelState(rollState)
    self.rollState = rollState
    self:removeScheduler()
    for i = 1,8 do
        self["_light_"..i]:stopAllActions()
        self["_light_"..i]:setOpacity(0)
    end
    self.currentIndex = 0
    if self.rollState == 0 then
        self:startScheduler(2)
    elseif self.rollState == 1 then
        self:startScheduler(0)
    end
    self._btnRollEnd:setRotation(self._btnRoll:getRotation())
end

function TimeLoginActWheelView:playRewardAni(event)
    local index = self.targetIndex % 8 + 1
    self["_light_"..index]:stopAllActions();
    self["_light_"..index]:setOpacity(255)
    self["_reward_"..index]:runAction(cc.Sequence:create(cc.EaseCubicActionOut:create(cc.ScaleTo:create(0.2,2.25)),cc.ScaleTo:create(0.2,0.92),cc.ScaleTo:create(0.1,1),cc.CallFunc:create(function()
        self:setWheelState(0)
        if event and event.callBack then event.callBack() end
        self:onUpdateWheel()
    end)));
end

function TimeLoginActWheelView:startScheduler(interval)
    self:rollScheduler();
    self.rollSchedulerHandler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(handler(self, self.rollScheduler),interval,false)
end

function TimeLoginActWheelView:rollScheduler()
    if self.rollState == 0 then
        local index = self.currentIndex % 8 + 1
        self["_light_"..index]:stopAllActions()
        self["_light_"..index]:setOpacity(255)
        self["_light_"..index]:runAction(cc.FadeOut:create(2))
        self.currentIndex = self.currentIndex + 1
    elseif self.rollState == 1 then
        local rotation = self._btnRoll:getRotation() % 360
        if rotation < 0 then rotation = rotation + 360 end 
        local index = math.floor(rotation / 45)
        if self.currentIndex ~= index then
            self["_light_"..(index + 1)]:stopAllActions()
            self["_light_"..(index + 1)]:setOpacity(255)
            self["_light_"..(index + 1)]:runAction(cc.Sequence:create(cc.DelayTime:create(0.2),cc.FadeOut:create(0.3)))
            self.currentIndex = index
        end
    end
end

function TimeLoginActWheelView:removeScheduler()
    if self.rollSchedulerHandler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.rollSchedulerHandler)
        self.rollSchedulerHandler = nil
    end
end

function TimeLoginActWheelView:onCleanup()
    self:removeScheduler()
    TimeLoginActWheelView.super.onCleanup(self)
end

function TimeLoginActWheelView:onBtnClose()
    if self._isRolling then
        return
    end
    self:close()
end

return TimeLoginActWheelView