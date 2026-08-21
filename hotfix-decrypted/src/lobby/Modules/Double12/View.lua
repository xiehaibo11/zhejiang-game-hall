-- 转盘活动界面
local Double12ActView = class("Double12ActView", XH.ViewBase)
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")
Double12ActView.LIGHT_ANI_PATH = "animation/Lobby/Base/lucky_turn_table/Ios_zhuanpan/Ios_zhuanpan.ExportJson"
Double12ActView.WIN_ANI_PATH = "animation/Lobby/Base/lucky_turn_table/Ios_zhuanpan_guang/Ios_zhuanpan_guang.ExportJson"

local KW_ITEM_ANGLE = 36 -- 圆盘共10格，每格36度

function Double12ActView:getCSBPath()
    return "hall/CSB/Activity/Double12_2025/Double12TurnTableLayer.csb"
end

function Double12ActView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_RULE"] = {varName = "_btnActRule", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventActRule"},
        ["_KW_BTN_AWARD_CENTER"] = {varName = "_btnAwardCenter", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAwardCenter"},
        ["_KW_BTN_START"] = {varName = "_btnStart", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventStart"},
        ["_KW_BTN_START2"] = {varName = "_btnStart2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventStart"},
        ["_KW_UI_ARROW"] = {varName = "_uiArrow"},
        ["_KW_IMG_IN"] = {varName = "_turnTable"},
        ["_KW_TIP_SHARE"] = {varName = "_shareTips"},
        ["_KW_UI_LIGHT_ANI"] = {varName = "_lightAni"},
        ["_KW_UI_WIN_ANI"] = {varName = "_winAni"},
        ["_KW_ITEM_"] = {beginIndex = 1, endIndex = 10, varName = "_award"},
        ["_KW_BODY"] = {varName = "_body"}
    }
end

function Double12ActView:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Double12"), eventKeyName = "EVENT_ACT_INFO", callBack = "updateAwards"},
        {module = XH.lobby:getModule("Double12"), eventKeyName = "EVENT_ON_REWARD", callBack = "showGotAward"}
        -- { module = XH.sdkManager, eventKeyName = "EVENT_TOPONSDK_CALLBACK", callBack = "onToponAdsShowCallBack" },
    }
end

function Double12ActView:ctor(param)
    cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/Activity/LuckyTurnTableAct/activity_luckyTurnTable.plist")
    param = param or {}
    self._param = param
    Double12ActView.super.ctor(self, param)
    self:initData()
    self:initView()
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TURN_TABLE_PUSH)
end

function Double12ActView:getAniConfig()
    local ViewAniConfig = require("app.Base.ViewAniConfig")
    return {aniType = ViewAniConfig.AniName.NORMAL, rootNode = nil, popNode = self._body, btnList = {}}
end

function Double12ActView:initData()
    self._awardsData = nil
    self._award = nil
    XH.lobby:getModule("Double12"):reqInfo()

    -- self:onGetActData({data = {leftDraw = 100, totalDrawCount = 100}})
end

function Double12ActView:initView()
    -- self:showShareTips()
    -- self:updateAwards()
    self:showStandbyAni()
    -- self:setHorseAwardText()
    -- self:showHorseAni()
end

function Double12ActView:onTouchEventClose(send, eventType)
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TURN_TABLE_CLOSE_CLICK)
    local actInfo = XH.lobby:getModule("Double12"):getActInfo()
    if not self._isGot and actInfo and actInfo.join_status == 0 and XH.lobby:getModule("Double12"):isInAutoStartTime() then
        self:onTouchEventStart()
        self._btnClose:runAction(cc.Sequence:create(cc.Hide:create(), cc.DelayTime:create(5), cc.Show:create()))
    else
        self:close()
    end
end

function Double12ActView:onTouchEventActRule(send, eventType)
    -- TODO 活动规则
    XH.viewManager:openView("Double12ActHelpView")
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TURN_TABLE_RULE_CLICK)
end

function Double12ActView:onTouchEventAwardCenter(send, eventType)
    XH.viewManager:openView("AwardCenterView")
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TURN_TABLE_AWARD_CENTER_CLICK)
    -- self:close()
end

function Double12ActView:onTouchEventStart(send, eventType)
    self._btnStart:setEnabled(false)
    self._btnStart2:setEnabled(false)
    XH.UITool.gray(self._btnStart)
    
    local actInfo = XH.lobby:getModule("Double12"):getActInfo()
    if actInfo.join_status == 1 then
        XH.TipTool.showToast("您已抽奖，感谢参与！")
        -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TURN_TABLE_START_CLICK)
        return
    end

    XH.lobby:getModule("Double12"):reqGetAward()
    self:showWinAni(false)
    self._isGot = true
    -- test
    -- self:showGotAward({data = {award = self._awardsData[1]}})
    -- XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.LUCKY_TURN_TABLE_START_CLICK)
end

function Double12ActView:showShareTips()
    self._shareTips:stopAllActions()
    local opacity = self._shareTips:getOpacity()
    if opacity == 255 then
        self._shareTips:setOpacity(0)
    else
        self._shareTips:runAction(cc.Sequence:create(cc.FadeIn:create(0.2), cc.DelayTime:create(5), cc.FadeOut:create(0.2)))
    end
end

function Double12ActView:showStandbyAni()
    self:showLightAni("daiji")

    self._turnTable:stopAllActions()
    local actionTime = 1 + 1 / 3
    local angle = 5
    local actRotate = cc.Sequence:create(cc.RotateTo:create(actionTime, angle / 2), cc.RotateTo:create(actionTime, -angle / 2))
    local repeatAct = cc.RepeatForever:create(actRotate)
    self._turnTable:runAction(repeatAct)
end

function Double12ActView:showLightAni(AniName)
    self._lightAni:stopAllActions()
    self._lightAni:removeAllChildren()
    if not cc.FileUtils:getInstance():isFileExist(self.LIGHT_ANI_PATH) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(self.LIGHT_ANI_PATH)
    local armature = ccs.Armature:create("Ios_zhuanpan")
    self._lightAni:addChild(armature)
    armature:setAnchorPoint(cc.p(0.5, 0.5))
    armature:setPosition(cc.p(0, 0))
    armature:getAnimation():play(AniName, -1, 1)
end

function Double12ActView:showWinAni(bShow)
    self._winAni:stopAllActions()
    self._winAni:removeAllChildren()
    if not bShow then
        return
    end
    if not cc.FileUtils:getInstance():isFileExist(self.WIN_ANI_PATH) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(self.WIN_ANI_PATH)
    local armature = ccs.Armature:create("Ios_zhuanpan_guang")
    self._winAni:addChild(armature)
    armature:setAnchorPoint(cc.p(0.5, 0))
    armature:setPosition(cc.p(0, 0))
    armature:getAnimation():play("zhongjiang_guang", -1, 0)
    armature:getAnimation():setMovementEventCallFunc(function()
        self:showAwardView()
        -- self._btnStart:setEnabled(true)
        -- self._btnStart2:setEnabled(true)
        self:showWinAni(false)
        -- XH.lobby:getModule("Double12"):reqInfo()
    end)
end

function Double12ActView:isJinliCard()
    return self._award and (self._award.prop_id == nil or self._award.prop_id == 0)
end

function Double12ActView:getRichContent(content, color, font)
    return string.format("<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='%s' color='%s'>%s</font>", font or 40, color, content)
end

function Double12ActView:getAwardTip()
    local awardInfo = self._award.prize_name
    local isCard = self:isJinliCard()
    local msg = string.format("%s%s%s", self:getRichContent("恭喜您抽中【", '#fffdef', 44), self:getRichContent(awardInfo, '#f5fe6b', 44),
                              self:getRichContent("】，已成功发到您的游戏账户", '#fffdef', 44))
    if isCard then
        msg = device.platform == "android" and
                  string.format("%s%s%s%s%s%s%s", self:getRichContent("恭喜您抽中", '#fffdef', 36),
                                self:getRichContent(awardInfo, '#f5fe6b', 36), self:getRichContent("！请登录“", '#fffdef', 36),
                                self:getRichContent(XH.lobby:getModule("Double12"):getWxPublic(), '#f5fe6b', 36),
                                self:getRichContent("”微信公众号，点击", '#fffdef', 36),
                                self:getRichContent("『充值中心-卡包』", '#f5fe6b', 36),
                                self:getRichContent("查看。如有问题，请联系客服", '#fffdef', 36)) or
                  string.format("%s%s%s", self:getRichContent("恭喜您抽中", '#fffdef'), self:getRichContent(awardInfo, '#f5fe6b'),
                                self:getRichContent("！请前往「领奖中心」查看，如有疑问请联系客服。", '#fffdef'))

    end
    return msg
end

function Double12ActView:showAwardView()
    -- XH.viewManager:openView("Double12AwardView", nil, self._award)
    local awardInfo = {}
    awardInfo.prize_names = {self._award.prize_name or ""}
    awardInfo.image_urls = {self._award.image or ""}
    awardInfo.prize_count = {self._award.prop_value or 0}
    awardInfo.text = self:getAwardTip()
    if #awardInfo.prize_names == 0 then
        return
    end
    XH.viewManager:openView("Double12AwardView", nil, {isJinliCard = self:isJinliCard()}, awardInfo)
end

function Double12ActView:showArrowAni()
    self._uiArrow:stopAllActions()
    local actionTime = 10 / 60
    local angle1 = 2
    local angle2 = -2
    local actRotate = cc.Sequence:create(cc.RotateTo:create(actionTime, angle1), cc.RotateTo:create(actionTime, angle2))
    local repeatAct = cc.Repeat:create(actRotate, 8) -- 循环动画8次
    self._uiArrow:runAction(repeatAct)
end

function Double12ActView:showTurnTableAni(offSetAngle)
    self._turnTable:stopAllActions()
    self._turnTable:setRotation(0)
    local actionTime1 = 35 / 60 -- 根据动画帧率计算时间，60帧为1秒
    local actionTime2 = 75 / 60
    local actionTime3 = 70 / 60
    local angle1 = 180
    local angle2 = 900
    local angle3 = offSetAngle
    local actRotate = cc.Sequence:create(cc.RotateBy:create(actionTime1, angle1), cc.RotateBy:create(actionTime2, angle2),
                                         cc.RotateBy:create(actionTime3, angle3))
    local actWinAward = cc.CallFunc:create(function()
        self:showLightAni("zhongjiang")
        self:showWinAni(true)
    end)
    local action = cc.Sequence:create(actRotate, actWinAward)
    self._turnTable:runAction(action)
end

---刷新转盘奖池
function Double12ActView:updateAwards(event)
    local actInfo = XH.lobby:getModule("Double12"):getActInfo()
    self._awardsData = actInfo.pool_prize or {}
    local awardNum = #self._awardsData
    for i = 1, 10 do
        local award = self._awardsData[i] or self._awardsData[((i - 1) % awardNum) + 1]
        local awardPanel = XH.UITool.seekNodeByName(self["_award" .. i], "_KW_IMG_AWARD")
        if awardPanel then
            Utils:setImgUrl(awardPanel, award.image, true)
        end
        XH.UITool.setText(self["_award" .. i], "_KW_TXT_VALUE", "" .. award.prop_value)
    end
    if actInfo.join_status == 1 then
        XH.TipTool.showToast("您已抽奖，感谢参与！")
        self._btnStart:setEnabled(false)
        self._btnStart2:setEnabled(false)
        XH.UITool.gray(self._btnStart)
        return
    end
end

-- 收到中奖信息
function Double12ActView:showGotAward(event)
    if not event.data or event.data.award == nil then
        self._btnStart:setEnabled(true)
        self._btnStart2:setEnabled(true)
        XH.TipTool.showToast("抽奖失败")
        return
    end
    local award = event.data.award
    self._award = award
    local tmpIdx = 0
    for i = 1, #self._awardsData do
        if award.ppid == self._awardsData[i].ppid then
            tmpIdx = i
            break
        end
    end
    if tmpIdx == 0 then
        XH.TipTool.showToast("抽奖数据异常")
        XH.lobby:getModule("Double12"):reqInfo()
        self._btnStart:setEnabled(true)
        self._btnStart2:setEnabled(true)
        return
    end
    local actInfo = XH.lobby:getModule("Double12"):getActInfo()
    actInfo.join_status = 1
    -- 偏移角度
    local offSetAngle = 360 - ((tmpIdx - 1) * KW_ITEM_ANGLE)
    if offSetAngle == 0 then
        offSetAngle = 360
    end

    self:showLightAni("star")
    self:showArrowAni()
    self:showTurnTableAni(offSetAngle)

    self._param.block_item_id = award.ppid
    XH.NewThrowDataManager:throwData("cc2025112103", self._param)
end

return Double12ActView
 k1  