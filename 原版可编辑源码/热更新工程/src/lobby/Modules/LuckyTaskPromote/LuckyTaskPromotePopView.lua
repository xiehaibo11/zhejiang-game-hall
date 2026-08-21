-- 幸运任务推广专用弹窗（独立 View，不走 PopSystem 通用远程图弹窗）
local LuckyTaskPromotePopView = class("LuckyTaskPromotePopView", XH.ViewBase)

function LuckyTaskPromotePopView:ctor(param)
    self._param = param or {}
    self._forbidClose = false
    self._isClosing = false
    LuckyTaskPromotePopView.super.ctor(self)
    self:initUI()
    self:throwDataShow()
end

function LuckyTaskPromotePopView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LuckyTask/LuckyTaskPromotePopLayer.csb"
end

function LuckyTaskPromotePopView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = {varName = "_panelBG", onTouch = "onTouchEventBGClose"},
        ["_KW_BTN_TIMESHOWCLOSE"] = {varName = "_btnTimeShowClose", type = XH.UI_TYPE.IMAGE_TOBUTTON},
        ["_KW_BTN_OPEN_LUCKY_TASK"] = {varName = "_btnOpenLuckyTask", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGoLuckyTask"},
        ["_KW_BTN_COPY"] = {varName = "_btnCopy", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCopy"},
        ["_KW_BTN_CUSTOMER"] = {varName = "_btnCustomer", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCustomer"},
        ["_KW_TEXT_CUR_TWO_PLAYER"] = {varName = "_textCurTwoPlayer"},
        ["_KW_TEXT_TARGET_TWO_PLAYER"] = {varName = "_textTargetTwoPlayer"},
        ["_KW_TEXT_NEED_UP"] = {varName = "_textNeedUp"},
        ["_KW_TEXT_REWARD_CARD"] = {varName = "_textRewardCard"},
        ["_KW_TEXT_TITLE"] = {varName = "_textTitle"},
    }
end

function LuckyTaskPromotePopView:initUI()
    self:refreshPromoteTexts()
    -- timeshowclose：倒计时结束后才可点击关闭（期间不绑定关闭回调）
    if self._btnTimeShowClose then
        self:addTimeShowClose(self._btnTimeShowClose)
    end
end

function LuckyTaskPromotePopView:getFromSceneStr()
    if self._param and self._param.fromScene and self._param.fromScene ~= "" then
        return self._param.fromScene
    end
    if XH.teaHouseManager ~= nil and XH.teaHouseManager:isInTeaHouse() then
        return "比赛场"
    end
    return "大厅"
end

-- 曝光：jsh26080601
function LuckyTaskPromotePopView:throwDataShow()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jsh26080601, {
        block_label = self:getFromSceneStr(),
    })
end

-- 点击：jsh26080602（复制 / 客服 / 参与领奖）
function LuckyTaskPromotePopView:throwDataClick(btnLabel)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.jsh26080602, {
        block_label = btnLabel,
    })
end

function LuckyTaskPromotePopView:refreshPromoteTexts()
    local conf = self._param or {}
    local cur = conf.curTwoPlayer or 0
    local target = conf.targetTwoPlayer or 0
    local needUp = conf.needUp
    if needUp == nil then
        needUp = math.max(0, tonumber(target) - tonumber(cur))
    end
    local reward = conf.rewardCard or 0

    if self._textCurTwoPlayer then
        self._textCurTwoPlayer:setString(tostring(cur) .. "人")
    end
    if self._textTargetTwoPlayer then
        self._textTargetTwoPlayer:setString(tostring(target).. "人")
    end
    if self._textNeedUp then
        self._textNeedUp:setString(tostring(needUp))
    end
    if self._textRewardCard then
        self._textRewardCard:setString(tostring(reward).. " 房卡")
    end
    if self._textTitle then
        local title = conf.title or conf.name
        if title and title ~= "" then
            self._textTitle:setString(title)
        end
    end
end

function LuckyTaskPromotePopView:close()
    if self._isClosing then
        return
    end
    self._isClosing = true
    LuckyTaskPromotePopView.super.close(self)
end

function LuckyTaskPromotePopView:onTouchEventBGClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._forbidClose then
        return
    end
    self:close()
end

function LuckyTaskPromotePopView:onTouchEventGoLuckyTask(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:throwDataClick("参与领奖")
    -- LuckyTask / LuckyMission 互斥来源，跳转对应任务界面
    if self._param and self._param.promoteSource == "luckyTask" then
        XH.viewManager:openView("LuckyTaskView")
    else
        XH.viewManager:openView("LuckyMissionView")
    end
    self:close()
end

function LuckyTaskPromotePopView:onTouchEventCopy(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:throwDataClick("复制")
    local copyText = '【重要通知】本群以后建议打2人对局。 2人局好处： • 组局快，2人就能开，无需等待 • 续桌快，本局结束，立马再来一局 • 更公平，2人对局，无其他干扰 操作：进房间选"2人模式"即可'
    if copyText and copyText ~= "" then
        XH.SysTool.copyString(copyText)
        XH.TipTool.showToast("复制成功!", 1)
    end
end

function LuckyTaskPromotePopView:onTouchEventCustomer(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:throwDataClick("客服")
    XH.lobby:getModule("CusService"):oponCusServerView(nil, "POPSYSTEM")
end

-- 序列帧倒计时关闭：倒计时期间不可关闭，播完停留在最后一帧后可点击关闭
function LuckyTaskPromotePopView:addTimeShowClose(goActBtn)
    if not goActBtn then
        return
    end
    self._forbidClose = true
    local panelTouchEnabled = self._panelBG:isTouchEnabled()
    self._panelBG:setTouchEnabled(false)

    local plistPath = "animation/Common/frames/popsys_timedown.plist"
    local cache = cc.SpriteFrameCache:getInstance()
    cache:addSpriteFrames(plistPath)

    local frames = {}
    for i = 1, 4 do
        local frame = cache:getSpriteFrame(string.format("%d.png", i))
        if frame then
            table.insert(frames, frame)
        end
    end
    if #frames == 0 then
        self._forbidClose = false
        self._panelBG:setTouchEnabled(panelTouchEnabled)
        goActBtn:setClickCallBack(handler(self, self.onTouchEventBGClose))
        return
    end

    local interval = 1
    local sprite = cc.Sprite:createWithSpriteFrame(frames[1])
    sprite:setAnchorPoint(cc.p(0.5, 0.5))
    local size = goActBtn:getContentSize()
    sprite:setPosition(size.width / 2, size.height / 2)
    goActBtn:addChild(sprite)

    local animation = cc.Animation:createWithSpriteFrames(frames, interval)
    local animate = cc.Animate:create(animation)
    sprite:runAction(cc.Sequence:create(animate, cc.CallFunc:create(function()
        if tolua.isnull(self) then
            return
        end
        self._forbidClose = false
        self._panelBG:setTouchEnabled(panelTouchEnabled)
        goActBtn:setClickCallBack(handler(self, self.onTouchEventBGClose))
    end)))
end

return LuckyTaskPromotePopView
