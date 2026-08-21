local TimeLoginActView = class("TimeLoginActView", XH.ViewBase)
local TimeLoginActConfig = require("lobby.Modules.TimeLoginAct.Config")
local ViewAniConfig = require("app.Base.ViewAniConfig")

local spinePath = "res/animation/Lobby/Activity/TimeLoginAct/"

function TimeLoginActView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TimeLoginAct/TimeLoginActLayer.csb"
end

function TimeLoginActView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootPanel}
end

function TimeLoginActView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = { varName = "_rootPanel"},
        ["_KW_IMG_BG"] = { varName = "_imgBg"},
        ["_KW_IMG_TITLE"] = { varName = "_imgTitle"},
        ["_KW_IMG_FRESH_TIPS"] = { varName = "_imgFreshTips"},
        
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_IMG_BAOXIANG"] = {varName = "_imgBaoxiang", type = XH.UI_TYPE.IMAGE_TOBUTTON, style = XH.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onTouchBaoXiang"},
        ["_KW_LISTVIEW_ITEM"] = { varName = "_listItem"},
        ["_KW_PANEL_ITEM"] = { varName = "_panelItem"},
        ["_KW_PANEL_ITEM_WHEEL"] = { varName = "_panelItemWheel"},
        ["_KW_TEXT_GOLDOVER_TIPS"] = { varName = "_textGoldOvertTips"},
        ["_KW_TEXT_BAOXIANG_TIPS"] = { varName = "_textBaoXiangTips"},
        ["_KW_TEXT_BAOXIANG_AWARD"] = { varName = "_textBaoXiangAward"},
        ["_KW_PANEL_BAOXIANG"] = { varName = "_panelBaoXiang"},

        ["_KW_WHEEL_BOTTOM"] = {varName = "_wheelBottom"},
        ["_KW_MAX_REWARD"] = { varName = "_maxGoldNum"},
        ["_KW_ANIM_LIGHT"] = { varName = "_animLight"},
        ["_KW_ANIM_WHEEL_FLASH"] = { varName = "_animWheelFlash"},
        ["_KW_BTN_LINGQU_WHEEL"] = { varName = "_wheelBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnWheelItem"},
        ["_KW_ANIM_WHEEL_FLASH"] = { varName = "_wheelFlash"},
        ["_KW_PROGRESS_TIPS"] = { varName = "_progressTips"},
        ["_KW_PROGRESS_1"] = { varName = "_progress1" },
        ["_KW_PROGRESS_2"] = { varName = "_progress2" },
        ["_KW_PROGRESS_3"] = { varName = "_progress3" },
    }
end

function TimeLoginActView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "FLUSH_TIMELOGIN_ACT_INFO", callBack = "onUpdateTimeLoginStatus" },
        { module = XH.lobby:getModule("TimeLoginAct"), eventKeyName = "FLUSH_TIMELOGIN_REWARD_STATUS", callBack = "onUpdateItemRewardStatus" },
    }
end

function TimeLoginActView:ctor(param)
    TimeLoginActView.super.ctor(self)
    self._isAutoPop = param and param.auto
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010803,{page_item_id = "定时登录界面"})
    XH.lobby:getModule("TimeLoginAct"):reqGetTimeLoginReward()
    --self._bgSize = self._imgBg:getContentSize()
    self:initUI()
    self:startScheduler()
end

function TimeLoginActView:onUpdateTimeLoginStatus()
    self.timeUpRequest = false
    self:initListView()
    self:initUI()
    --self:onUpdateBoxStatus()
end

function TimeLoginActView:initUI()
    local goldOver = XH.lobby:getModule("TimeLoginAct"):getGoldOver()
    self._textGoldOvertTips:setString(string.format(self._textGoldOvertTips:getString(), XH.StringTool.numberToString(goldOver)))
    self._panelBaoXiang:setVisible(false)
    self._wheelBottom:runAction(cc.RepeatForever:create(cc.RotateBy:create(0.5, 10)))
    XH.SpineManager:playAni(self._animLight, spinePath, "zzb_dt_dlyl2", "deng", true)
    self._wheelFlash:runAction(cc.Sequence:create(cc.DelayTime:create(0.15),cc.CallFunc:create(function() 
        XH.SpineManager:playAni(self._wheelFlash, spinePath, "zzb_dt_dlyl2", "btn", true)
    end)))
end

-- 刷新宝箱UI
function TimeLoginActView:onUpdateBoxStatus()
    local curReward = XH.lobby:getModule("TimeLoginAct"):getCurShowBoxReward()
    if curReward then
        self._panelBaoXiang:setVisible(true)
        -- 宝箱奖励已领取
        self._imgBaoxiang:ignoreContentAdaptWithSize(true)
        self._imgBaoxiang:stopAllActions()
        if curReward.rewardFlag == TimeLoginActConfig.STATUS.Rewarded then
            -- 加载已打开的图片
            self._imgBaoxiang:loadTexture("TimeLogin_BTN_baoxiang.png", ccui.TextureResType.plistType)
            self._textBaoXiangTips:setString("已领取")
            return
        end
        -- 加载未打开的图片
        self._imgBaoxiang:loadTexture("TimeLogin_BTN_baoxiang_close.png", ccui.TextureResType.plistType)
        self._textBaoXiangTips:setString(string.format(self._textBaoXiangTips:getString(), tostring(curReward.boxCnt)))
        local tmpStr = ""
        for i = 1, #curReward.props do
            tmpStr = tmpStr .. curReward.props[i].name .. "x" .. curReward.props[i].propCnt
            if i ~= #curReward.props then
                tmpStr = tmpStr .. "\n"
            end
        end
        self._textBaoXiangAward:setString(tmpStr)
        if curReward.rewardFlag == TimeLoginActConfig.STATUS.CanReward then
            self:showAwardBtnAni()
        end
    end
end

-- 根据奖励阶段数，刷新界面大小以及位置
function TimeLoginActView:resetDisPlayContentSize()
    local loginRewards = XH.lobby:getModule("TimeLoginAct"):getLoginRewards()
    local totalCnt = #loginRewards
    local itemModSize = self._panelItem:getContentSize()

    -- local width = self._bgSize.width + (totalCnt - 3)*(itemModSize.width-5)
    -- local winSize = cc.Director:getInstance():getWinSize()
    -- width = math.min(width, winSize.width - 60)

    -- self._imgBg:setContentSize(width, self._bgSize.height)
    -- self._btnClose:setPositionX(width - 180)
    -- self._imgTitle:setPositionX(width/2)
    -- self._imgFreshTips:setPositionX(width/2-470)
    -- self._textGoldOvertTips:setPositionX(width/2)
    -- self._listItem:setPositionX(width/2 + 10)

    self._listItem:setInnerContainerSize(cc.size(itemModSize.width*totalCnt, itemModSize.height))
    -- self._listItem:setContentSize(cc.size(width - 390, itemModSize.height))
end

-- 刷新阶段奖励list
function TimeLoginActView:initListView()
    local loginRewards = XH.lobby:getModule("TimeLoginAct"):getLoginRewards()
    local totalNeedCount = #loginRewards
    -- 动态初始化滑动区域大小
    table.sort(loginRewards, function(a, b)
        local realATime = a.startTime
        if a.startTime >= a.endTime then
            realATime = a.startTime - 86400
        end
        local realBTime = b.startTime
        if b.startTime >= b.endTime then
            realBTime = b.startTime - 86400
        end
        return realATime < realBTime
    end)
    self:resetDisPlayContentSize()
    self.isTimeRewardCanGet = XH.lobby:getModule("TimeLoginAct"):isTimeRewardCanGet()
    self.cdIndex = -1
    for i = 1, totalNeedCount do
        local itemData = loginRewards[i]
        local item = self:getAwardItemByIndex(i)
        if not item then
            item = self:createNewAwardItem()
        end
        self:updateItemUI(item, itemData, i)
    end
    if self.cdIndex == -1 then
        self.cdIndex = 1
        self:updateItemTime();
    end
    local wheelReward = XH.lobby:getModule("TimeLoginAct"):getWheelReward()
    if wheelReward and #wheelReward > 0 then
        self._panelBaoXiang:setVisible(false)
        self:updateWheelItemUI()
    end
end

-- 通过索引获得item
function TimeLoginActView:getAwardItemByIndex(index)
    return self._listItem:getChildByName(tostring(index))
end

-- 添加一个item到界面上.挂载到ListView中去
function TimeLoginActView:createNewAwardItem()
    local item = self._panelItem:clone()
    if item then
        item:retain()
        item:removeFromParent()
        self._listItem:addChild(item)
        item:release()
    end
    return item
end

function TimeLoginActView:updateItemUI(item, itemData, index)
    if tolua.isnull(item) then
        return
    end
    item:setVisible(true)
    item:setName(tostring(index))
    local function transTimeStamp2Str(time)
        local hours = math.floor(time / 3600)
        local minutes = math.floor((time % 3600) / 60)
        return string.format("%d:%02d", hours, minutes)
    end

    -- 刷新时间段文本
    XH.UITool.setText(item, "_KW_TEXT_TIME", transTimeStamp2Str(itemData.startTime) .. '-' .. transTimeStamp2Str(itemData.endTime))
    -- 刷新奖励数量文本
    local awardCnt
    if itemData.props and #itemData.props > 0 then
        awardCnt = itemData.props[1].propCnt
    end
    XH.UITool.setText(item, "_KW_TEXT_COUNT", "x"..awardCnt)
    -- XH.UITool.setTextColor(item, "_KW_TEXT_COUNT", cc.c3b(223, 77, 33))
    XH.UITool.setVisible(item, "_KW_IMG_LIGHT", false)
    -- 刷新领取状态文本和颜色
    XH.UITool.setVisible(item, "_KW_IMG_REWARDED", false)
    XH.UITool.setVisible(item, "_KW_TEXT_TIME_CD", false)
    XH.UITool.setVisible(item, "_KW_TEXT_STATE", false)
    if itemData.rewardFlag == TimeLoginActConfig.STATUS.NotInTime then  -- 未到时间
        if self.cdIndex == -1 then
            self.cdIndex = index
            XH.UITool.setVisible(item, "_KW_TEXT_TIME_CD", true)
        else
            XH.UITool.setVisible(item, "_KW_TEXT_STATE", true)
            XH.UITool.setText(item, "_KW_TEXT_STATE", "未到时间")
        end
    elseif itemData.rewardFlag == TimeLoginActConfig.STATUS.Rewarded then   -- 已领取
        XH.UITool.setVisible(item, "_KW_TEXT_STATE", true)
        XH.UITool.setText(item, "_KW_TEXT_STATE", "已领取")
        XH.UITool.setVisible(item, "_KW_IMG_REWARDED", true)
    elseif itemData.rewardFlag == TimeLoginActConfig.STATUS.OverTime then   -- 已到期
        XH.UITool.setVisible(item, "_KW_TEXT_STATE", true)
        XH.UITool.setText(item, "_KW_TEXT_STATE", "明日再来")
    end
    -- 刷新背景
    local realStartTime = itemData.startTime
    if itemData.startTime >= itemData.endTime then
        realStartTime = itemData.startTime - 86400
    end
    local timeState = 1
    if realStartTime < TimeLoginActConfig.TIME.MORNING then
        XH.UITool.loadTexture(item, "_KW_IMG_ITEM_BG", "Img_dlyl_jl_1.png", ccui.TextureResType.plistType)
        XH.UITool.setTextColor(item, "_KW_TEXT_TIME", cc.c3b(16, 117, 91))
        XH.UITool.setTextColor(item, "_KW_TEXT_COUNT", cc.c3b(16, 117, 91))
        timeState = 1
    elseif realStartTime >= TimeLoginActConfig.TIME.MORNING and realStartTime < TimeLoginActConfig.TIME.NOON then
        XH.UITool.loadTexture(item, "_KW_IMG_ITEM_BG", "Img_dlyl_jl_2.png", ccui.TextureResType.plistType)
        XH.UITool.setTextColor(item, "_KW_TEXT_TIME", cc.c3b(192, 82, 32))
        XH.UITool.setTextColor(item, "_KW_TEXT_COUNT", cc.c3b(192, 82, 32))
        timeState = 2
    elseif realStartTime >= TimeLoginActConfig.TIME.NOON and realStartTime < TimeLoginActConfig.TIME.EVENING then
        XH.UITool.loadTexture(item, "_KW_IMG_ITEM_BG", "Img_dlyl_jl_3.png", ccui.TextureResType.plistType)
        XH.UITool.setTextColor(item, "_KW_TEXT_TIME", cc.c3b(41, 55, 157))
        XH.UITool.setTextColor(item, "_KW_TEXT_COUNT", cc.c3b(41, 55, 157))
        timeState = 3
    end

    local animNode = XH.UITool.seekNodeByName(item, "_KW_ANIM_FLASH")
    animNode:removeAllChildren()
    -- 刷新领取状态显隐
    if itemData.rewardFlag == TimeLoginActConfig.STATUS.CanReward or itemData.rewardFlag == TimeLoginActConfig.STATUS.CanSupple then
        XH.UITool.setVisible(item, "_KW_BTN_LINGQU", true)
        XH.UITool.setVisible(item, "_KW_IMG_LIGHT", true)
        if timeState == 1 then
            XH.SpineManager:playAni(animNode, spinePath, "zzb_dt_dlyl2", "lv", true)
        elseif timeState == 2 then
            XH.SpineManager:playAni(animNode, spinePath, "zzb_dt_dlyl2", "cheng", true)
        else
            XH.SpineManager:playAni(animNode, spinePath, "zzb_dt_dlyl2", "lan", true)
        end
    else
        XH.UITool.setVisible(item, "_KW_BTN_LINGQU", false)
        if not self.isTimeRewardCanGet and itemData.rewardFlag == TimeLoginActConfig.STATUS.NotInTime then
            if timeState == 1 then
                XH.SpineManager:playAni(animNode, spinePath, "zzb_dt_dlyl2", "lv", true)
            elseif timeState == 2 then
                XH.SpineManager:playAni(animNode, spinePath, "zzb_dt_dlyl2", "cheng", true)
            else
                XH.SpineManager:playAni(animNode, spinePath, "zzb_dt_dlyl2", "lan", true)
            end
        end
    end
    XH.UITool.addTouchEventListener(item, "_KW_BTN_LINGQU", handler(itemData, handler(self,self.onBtnLingQuItem)))
end

function TimeLoginActView:updateWheelItemUI()
    local wheelReward = XH.lobby:getModule("TimeLoginAct"):getWheelReward()
    if wheelReward and wheelReward[1] then
        local itemData = wheelReward[1]

        if itemData.curCnt >= itemData.wheelCnt then
            self._progressTips:setVisible(false)
            self._wheelBtn:setVisible(true)
        else
            self._wheelBtn:setVisible(false)
            self._progressTips:setVisible(true)
            for i = 1,3 do
                if itemData.curCnt >= i then
                    self['_progress'..i]:loadTexture("Img_dlyl_zp2.png", ccui.TextureResType.plistType)
                else
                    self['_progress'..i]:loadTexture("Img_dlyl_zp1.png", ccui.TextureResType.plistType)
                end
            end
        end
        local max = self:getMaxRewardNum(itemData)
        self._maxGoldNum:setText(XH.StringTool.numberToString(max).."金币")
    else
        XH.TipTool.showToast("未找到转盘配置")
    end
end

function TimeLoginActView:getMaxRewardNum(data)
    local max = 0;
    local goldId = XH.areaData:getGoldPropId()
    for i = 1, #data.props do
        local prop = data.props[i]
        if prop.propId == goldId and prop.propCnt > max then
            max = prop.propCnt
        end
    end
    return max
end

-- 包厢可领奖时的动画
function TimeLoginActView:showAwardBtnAni()
    self._imgBaoxiang:stopAllActions()
    local function playAni(node)
        if not node or not node:isVisible() then
            return 
        end
        local rotateRight = cc.RotateTo:create(0.5, 5);
        local rotateLeft = cc.RotateTo:create(0.5, -5);
        local rotateCenter = cc.RotateTo:create(0.5, 0);
        local seq = cc.Sequence:create(rotateRight, rotateLeft, rotateRight:clone(), rotateLeft:clone(), rotateCenter)
        node:runAction(seq)
    end
    playAni(self._imgBaoxiang)
    XH.UITool.createRepeateAction(self._imgBaoxiang, 2, function()
        if not self or tolua.isnull(self) or not self._imgBaoxiang then
            return
        end
        if not self._imgBaoxiang:isVisible() then
            self._imgBaoxiang:stopAllActions()
            return
        end
        playAni(self._imgBaoxiang)
    end)
end

function TimeLoginActView:onBtnLingQuItem(itemData, send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local realStartTime = itemData.startTime
    if itemData.startTime >= itemData.endTime then
        realStartTime = itemData.startTime - 86400
    end
    if realStartTime <= TimeLoginActConfig.TIME.MORNING then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010804,{page_item_id = "早间登录"})
    elseif realStartTime > TimeLoginActConfig.TIME.MORNING and realStartTime <= TimeLoginActConfig.TIME.NOON then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010804,{page_item_id = "午间登录"})
    elseif realStartTime > TimeLoginActConfig.TIME.NOON and realStartTime <= TimeLoginActConfig.TIME.EVENING then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010804,{page_item_id = "晚间登录"})
    end
    XH.lobby:getModule("TimeLoginAct"):reqClaimTimeLoginReward(itemData.rewardId)
end

function TimeLoginActView:onBtnWheelItem()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dlhd25010804,{page_item_id = "定时登录界面"})
    XH.viewManager:openView("TimeLoginActWheelView")
end

function TimeLoginActView:onTouchBaoXiang(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local curReward = XH.lobby:getModule("TimeLoginAct"):getCurShowBoxReward()
    if not curReward or curReward.rewardFlag ~= TimeLoginActConfig.STATUS.CanReward then
        if curReward.rewardFlag == TimeLoginActConfig.STATUS.NotInTime then
            XH.TipTool.showToast("您尚未解锁宝箱")
        end
        return
    end
    XH.lobby:getModule("TimeLoginAct"):reqClaimTimeLoginReward(curReward.rewardId)
end

function TimeLoginActView:onBtnClose()
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("close", {id = "TimeLoginAct"})
    end
    self:close()
end

function TimeLoginActView:onUpdateItemRewardStatus()
    local loginRewards = XH.lobby:getModule("TimeLoginAct"):getLoginRewards()
    local totalNeedCount = #loginRewards
    table.sort(loginRewards, function(a, b)
        local realATime = a.startTime
        if a.startTime >= a.endTime then
            realATime = a.startTime - 86400
        end
        local realBTime = b.startTime
        if b.startTime >= b.endTime then
            realBTime = b.startTime - 86400
        end
        return realATime < realBTime
    end)
    self.isTimeRewardCanGet = XH.lobby:getModule("TimeLoginAct"):isTimeRewardCanGet()
    self.cdIndex = -1
    for i = 1, totalNeedCount do
        local itemData = loginRewards[i]
        local item = self:getAwardItemByIndex(i)
        if item then
            self:updateItemUI(item, itemData, i)
        end
    end
    if self.cdIndex == -1 then
        self.cdIndex = 1
        self:updateItemTime();
    end
end

function TimeLoginActView:startScheduler()
    self.timeScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(handler(self, self.updateItemTime), 1, false)
end

function TimeLoginActView:removeScheduler()
    if self.timeScheduler ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.timeScheduler)
        self.timeScheduler = nil
    end
end

function TimeLoginActView:updateItemTime()
    local loginRewards = XH.lobby:getModule("TimeLoginAct"):getLoginRewards()
    local totalNeedCount = #loginRewards
    local time = XH.lobby:getModule("Shop"):getServerTime()
    local utcOffset = XH.SysTool.get_timezone_offset()
    local east8Offset = 28800
    time = time + east8Offset - utcOffset
    local today = os.date("*t", time)
    local todayZeroTime = os.time{year = today.year, month = today.month, day = today.day, hour = 0, min = 0, sec = 0}
    local daySecond = time - todayZeroTime
    if daySecond > TimeLoginActConfig.TIME.EVENING then
        daySecond = daySecond - 86400
    end
    local itemData = loginRewards[self.cdIndex]
    local item = self:getAwardItemByIndex(self.cdIndex)
    if item then
        self:updateItemTimeUI(item, itemData, self.cdIndex, daySecond)
    end
    if daySecond == TimeLoginActConfig.TIME.EVENING then
        self._rootPanel:runAction(cc.Sequence:create(cc.DelayTime:create(1),cc.CallFunc:create(function()
            XH.lobby:getModule("TimeLoginAct"):reqGetTimeLoginReward()
        end)))
    end
end

function TimeLoginActView:updateItemTimeUI(item, itemData, index, daySecond)
    if tolua.isnull(item) then
        return
    end
    local realStartTime = itemData.startTime
    if itemData.startTime >= itemData.endTime and index ~= 1 then
        realStartTime = itemData.startTime - 86400
    end
    local lefttime = realStartTime - daySecond
    if lefttime < 0 then
        if not self.timeUpRequest then
            self.timeUpRequest = true
            XH.lobby:getModule("TimeLoginAct"):reqGetTimeLoginReward()
        end
        return
    end
    local hour = math.floor(lefttime / 3600)
    local min = math.floor((lefttime % 3600) / 60)
    local sec = lefttime % 60
    XH.UITool.setText(item, "_KW_TEXT_TIME_CD", string.format("%02d:%02d:%02d", hour, min, sec))
    XH.UITool.setVisible(item, "_KW_TEXT_TIME_CD", true)
    XH.UITool.setVisible(item, "_KW_TEXT_STATE", false)
end

function TimeLoginActView:onCleanup()
    self:removeScheduler()
    TimeLoginActView.super.onCleanup(self)
end

return TimeLoginActView  Q  