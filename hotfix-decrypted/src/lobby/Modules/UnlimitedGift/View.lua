local UnlimitedGiftView = class("UnlimitedGiftView",XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")

local spinePath = {
    POPUP = "res/animation/Lobby/Base/NewGoldHall/Common/",
    REWARDFRAME = "res/animation/Lobby/Base/zzb_jbdt_gxhd/",
    BTNSLASH = "res/animation/Lobby/Base/NewGoldHall/Shop/",
    UNLIMITEDGIFT = "res/animation/Lobby/Activity/UnlimitedGift/",
    FIRE = "res/animation/Lobby/Base/zzb_ty_huomiao/"
}

local TaskType = {
    Free = 1, --免费
    CardType = 2, --牌型任务
    Play = 3, --对局任务
    Win = 4, --获胜任务
    Purchase = 5, --购买商品任务
}

function UnlimitedGiftView:ctor(param)
    self._param = param or {}
    UnlimitedGiftView.super.ctor(self, param)
    self.TaskInfoPosX = {460, 794, 1126, 1459, 1790}
    self.TaskInfoPosY = {109, 114, 114, 114, 114}
    self._module = XH.lobby:getModule("UnlimitedGift")
    self._currentHyId = 0
    self._currentTaskId = 0
    self._maxShowTask = 4
    self._taskItemNode = {}
    local detailInfo = self._module:getDetailInfo()
    if detailInfo then
        self._detailName = detailInfo.name or ""
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dzl25050601, {page_item_id = self._detailName})
    end
end

function UnlimitedGiftView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/UnlimitedGift/UnlimitedGiftLayer.csb"
end

function UnlimitedGiftView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootLayer}
end

function UnlimitedGiftView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_rootLayer"},
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose" },
        ["_KW_TEXT_LEFTTIME"] =  { varName = "_lefttime"},
        ["_KW_HY_REWARD_BTN"] = { varName = "_hyRewardBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onGetHYReward" },
        ["_KW_TEXT_HY_1"] = { varName = "_hyProgressText1"},
        ["_KW_TEXT_HY_2"] = { varName = "_hyProgressText2"},
        ["_KW_PROGRESS_HY"] = { varName = "_hyProgressBar" },
        ["_KW_REWARD_LIST_HY"] = { varName = "_hyRewardList" },
        ["_KW_TASK_CARD"] = { varName = "_taskItem" },
        ["_KW_TASK_CARD2"] = { varName = "_taskItem2" },
        ["_KW_TASK_LIST"] = { varName = "_taskList" },
        ["_KW_UI_AWARD_ITEM"] = { varName = "_rewardItem" },
        ["_KW_IMG_HY_FINISH"] = { varName = "_hyImgFinish"},
        ["_KW_ANIM_BACK"] = { varName = "_animBackLayer" },
        ["_KW_ANIM_LIGHT"] = { varName = "_animLightLayer" },
        ["_KW_ANIM_SUN"] = { varName = "_animSunLayer" },
        ["_KW_ANIM_SUN2"] = { varName = "_animSunLayer2" },
        ["_KW_ANIM_FIRE"] = { varName = "_animFire" },
        ["_KW_ANIM_FIRE2"] = { varName = "_animFire2" },
        ["_KW_ANIM_BOX_BG"] = {varName = "_animBoxBg" },
        ["_KW_ANIM_BOX"] = { varName = "_animBox" },
        ["_KW_ANIM_BOX_2"] = { varName = "_animBox2" },
        ["_KW_IMAGE_HY_ICON"] = { varName = "_hyIcon" },
        ["_KW_UI_BTN_RULE"] = { varName = "_btnRule", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickRule" },
        ["_KW_TIP_TOUCH"] = { varName = "_tipTouch" },
        ["_KW_ITEM_TIP"] = { varName = "_tipItem" },
        -- ["KW_TEXT_TIP_NAME"] = { varName = "_tipName" },
        -- ["KW_TEXT_TIP_DESC"] = { varName = "_tipDesc" }
    }
end

function UnlimitedGiftView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("UnlimitedGift"), eventKeyName = "EVENT_UNGIFT_REFRESH_VIEW", callBack = "onRefreshView" },
        { module = XH.lobby:getModule("UnlimitedGift"), eventKeyName = "EVENT_UNGIFT_OPEN_BOX_ANIM", callBack = "onPlayBoxAnim" },
    }
end

function UnlimitedGiftView:onEnter()
    self._defaultHyIconPos = cc.p(self._hyIcon:getPosition())
    self:initUI()
    self.timeScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function ()
        self:updateLeftTime()
    end, 60, false)

    XH.SpineManager:playAni(self._animBackLayer, spinePath.UNLIMITEDGIFT, "zzb_wujinjx", "sidai", true)
    XH.SpineManager:playAni(self._animLightLayer, spinePath.UNLIMITEDGIFT, "zzb_wujinjx", "dengpao", true)

    XH.SpineManager:playAni(self._animSunLayer, spinePath.POPUP, "zzb_ty_tcbk2", "animation", false)

    self._animSunLayer2:setOpacity(0)
    self._animSunLayer2:runAction(cc.FadeIn:create(1))
    XH.SpineManager:playAni(self._animSunLayer2, spinePath.POPUP, "zzb_ty_taiyangguang2", "animation", true)

    self.animFire = XH.SpineManager:playAni(self._animFire, spinePath.FIRE, "zzb_ty_huomiao", "animation", true)

    -- self.animFire:runAction(cc.Sequence:create(cc.DelayTime:create(0.2),cc.CallFunc:create(function() 
    --     self.animFire:pause()
    -- end)))

    self._tipTouch:setSwallowTouches(false)
    self._tipTouch:addTouchEventListener(handler(self, self.onTouchTipTouchLayer))

    self._tipName = self._tipItem:getChildByName("KW_TEXT_TIP_NAME")
    self._tipDesc = self._tipItem:getChildByName("KW_TEXT_TIP_DESC")
end

function UnlimitedGiftView:onTouchTipTouchLayer(send, eventType)
    if eventType == ccui.TouchEventType.began then
        self._tipItem:setVisible(false)
    end
end

function UnlimitedGiftView:onExit()
    if self.timeScheduler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.timeScheduler)
        self.timeScheduler = nil
    end
    if self._progressScheduler then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._progressScheduler)
        self._progressScheduler = nil
    end
end

function UnlimitedGiftView:initUI()
    local lefttime = self._module:getLeftTime()
    if lefttime <= 0 then
        XH.TipTool.showToast("活动已结束，无法完成活动进度")
    end
    self:initTaskItem()
    self:updateLeftTime()
    self:updateHYInfo()
    self:updateTaskInfo()
end

function UnlimitedGiftView:initTaskItem()
    self._taskItem:setVisible(false)
    for i = 1,self._maxShowTask + 1 do
        local node = nil
        if i == 1 then
            node = self._taskItem:clone()
        else
            node = self._taskItem2:clone()
        end
        node:setVisible(true)
        self._taskList:addChild(node)
        local btn = node:getChildByName("_KW_TASK_BTN")
        XH.UIButton.create(btn,XH.UIButton.CLICK_STYLE.DEFAULT,function()
            self:onClickGetTaskItem()
        end)
        self._taskItemNode[i] = node
        node:setPosition(cc.p(self.TaskInfoPosX[i], self.TaskInfoPosY[i]))
    end
    local node = self._taskItem:clone()
    self._taskList:addChild(node)
    local btn = node:getChildByName("_KW_TASK_BTN")
    XH.UIButton.create(btn,XH.UIButton.CLICK_STYLE.DEFAULT,function()
        self:onClickGetTaskItem()
    end)
    self._animTaskItem = node
    self:resetAnimNode()
end

function UnlimitedGiftView:resetAnimNode()
    self._animTaskItem:setVisible(false)
    self._animTaskItem:setAnchorPoint(cc.p(1, 0))
    self._animTaskItem:setOpacity(0)
    self._animTaskItem:setPosition(cc.p(self.TaskInfoPosX[2], self.TaskInfoPosY[2]))
    self._animTaskItem:setScale(0.75)

    self._taskItemNode[5]:setPosition(cc.p(self.TaskInfoPosX[5], self.TaskInfoPosY[5]))
    self._taskItemNode[5]:setScale(0.75)
    self._taskItemNode[5]:setOpacity(255)

    self._hyIcon:setVisible(false)
    self._hyIcon:setPosition(self._defaultHyIconPos)
    self._hyIcon:setScale(1)
end

function UnlimitedGiftView:onClickClose()
    -- 动画测试
    -- self:playTaskCardAnim()
    -- self:onPlayBoxAnim({pid = 1,callBack = function() end})
    self:close()
end

function UnlimitedGiftView:updateLeftTime()
    local lefttime = self._module:getLeftTime()
    if lefttime > 0 then
        self._lefttime:setText(XH.StringTool.getLeftTimeStr(lefttime))
    else
        self._lefttime:setText("活动已结束")
    end
end

--更新活跃度
function UnlimitedGiftView:updateHYInfo()
    local actData = self._module:getActData()
    if actData and actData.hyrw then
        local hyrw = actData.hyrw
        local progress = hyrw.dqhy or 0
        local total = hyrw.mbhy or 1
        self.newNum = progress
        self.newPercent = progress/total*100

        if self._progressScheduler then
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._progressScheduler)
            self._progressScheduler = nil
        end
        if self.oldNum and self.newNum > self.oldNum then
            self._hyProgressText1:setText(tostring(self.oldNum))
            self._hyProgressBar:setPercent(self.oldPercent)
            self._progressCurNum = self.oldNum
            self._progressCurPro = self.oldPercent
            self._deltaNum = self.newNum - self.oldNum
            self._deltaPer = self.newPercent - self.oldPercent
            local updateProgressBar = function(dt)
                local speed = 0.5
                self._progressCurNum = self._progressCurNum + self._deltaNum*dt/speed
                self._progressCurPro = self._progressCurPro + self._deltaPer*dt/speed
                if self._progressCurNum >= self.newNum then
                    cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._progressScheduler)
                    self._progressScheduler = nil
                    self._hyProgressText1:setText(tostring(self.newNum))
                    self._hyProgressBar:setPercent(self.newPercent)
                else
                    self._hyProgressText1:setText(tostring(math.floor(self._progressCurNum)))
                    self._hyProgressBar:setPercent(self._progressCurPro)
                end
            end
            self._progressScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(updateProgressBar,0,false)
        else
            self._hyProgressText1:setText(tostring(progress))
            self._hyProgressBar:setPercent(progress/total*100)
        end
        self.oldNum = progress
        self.oldPercent = progress/total*100
        self._hyProgressText2:setText("/"..total)
        self._hyRewardBtn:setVisible(hyrw.status == 1)
        self._hyRewardList:removeAllChildren()
        if hyrw.rewardBox then
            hyrw.jbxpid = hyrw.jbxpid or {}
            self:addRewardIcon(self._hyRewardList,hyrw.rewardBox,hyrw.status == 1,hyrw.jbxpid[1])
        end
        self._currentHyId = hyrw.hyid
        self._hyImgFinish:setVisible(hyrw.status == 2)
    end
end

function UnlimitedGiftView:addRewardIcon(parent,data,canget,jbxpid)
    local boxItem = {}
    for i = 1,#data do
        local _data = data[i]
        if _data.name ~= nil and #_data.name > 0 then
            boxItem[_data.name] = boxItem[_data.name] or {}
            boxItem[_data.name].num = (boxItem[_data.name].num or 0) + 1
            boxItem[_data.name].img = _data.img
        else
            if _data.rewardInfo and #_data.rewardInfo > 0 then
                for j = 1,#_data.rewardInfo do
                    local rewardInfo = _data.rewardInfo[j]
                    local rewardNode = self._rewardItem:clone()
                    rewardNode:setVisible(true)
                    rewardNode:getChildByName("KW_UI_TEXT_COUNT"):setText(tostring(rewardInfo.count))
                    local bgNode = rewardNode:getChildByName("KW_UI_AWARD_BG")
                    local size = bgNode:getContentSize()
                    local imgNode = self:createRemoteImage(bgNode,cc.size(size.width*0.8,size.height*0.8),"KW_UI_IMG_AWARD")
                    imgNode:setUrl(rewardInfo.icon)
                    imgNode._propId = rewardInfo.id
                    parent:addChild(rewardNode)
                    if canget then
                        local animNode = XH.SpineManager:playAni(rewardNode, spinePath.REWARDFRAME, "zzb_ty_xxgx", "animation", true, nil, nil, false)
                        animNode:setPosition(cc.p(size.width*0.5+2,size.height*0.5+2))
                        animNode:setScale(1.1)
                    end
                end
            end
        end
    end
    for _,v in pairs(boxItem) do
        local rewardNode = self._rewardItem:clone()
        rewardNode:setVisible(true)
        rewardNode:getChildByName("KW_UI_TEXT_COUNT"):setText(tostring(v.num))
        local bgNode = rewardNode:getChildByName("KW_UI_AWARD_BG")
        local size = bgNode:getContentSize()
        local imgNode = self:createRemoteImage(bgNode,cc.size(size.width*0.8,size.height*0.8),"KW_UI_IMG_AWARD")
        imgNode:setUrl(v.img)
        imgNode._boxId = self._module:getGoldBoxId(jbxpid)
        parent:addChild(rewardNode)
        if canget then
            local animNode = XH.SpineManager:playAni(rewardNode, spinePath.REWARDFRAME, "zzb_ty_xxgx", "animation", true, nil, nil, false)
            animNode:setPosition(cc.p(size.width*0.5+2,size.height*0.5+2))
            animNode:setScale(1.1)
        end
    end
end

function UnlimitedGiftView:onGetHYReward()
    self._module:reqWuXianJingXiReward_HY()
end

function UnlimitedGiftView:onRefreshView()
    self:updateHYInfo()
    self:updateTaskInfo()
end

function UnlimitedGiftView:updateTaskInfo()
    local activeTask = self._module:getActiveTask()
    local jtid = activeTask.jtid
    local lefttime = self._module:getLeftTime()
    if self._currentTaskId == 0 or self._currentTaskId == jtid or lefttime <= 0 then
        self:_updateTaskInfo()
    else
        self:playTaskCardAnim()
    end
    self._currentTaskId = jtid
end

function UnlimitedGiftView:_updateTaskInfo()
    local actData = self._module:getActData()
    for i = 1,self._maxShowTask do
        if actData and actData.jtrw and actData.jtrw[i] then
            if i == 1 and actData.jtrw[i].status == 2 and #actData.jtrw == 1 then
                self._taskItemNode[i]:setVisible(false)
            else
                self:updateSingleTaskCard(self._taskItemNode[i], actData.jtrw[i], i)
            end
        else
            self._taskItemNode[i]:setVisible(false)
        end
    end
end

function UnlimitedGiftView:updateSingleTaskCard(node, data, index)
    local hyText = node:getChildByName("_KW_TASK_HY_TEXT")
    local taskName = node:getChildByName("_KW_TASK_NAME")
    local taskBtn = node:getChildByName("_KW_TASK_BTN")
    local taskProgress = node:getChildByName("_KW_TASK_PROGRESS")
    local rewardNode = node:getChildByName("_KW_UI_AWARD_CARD")
    local imgReward = rewardNode:getChildByName("KW_UI_IMG_AWARD")
    local nameReward = rewardNode:getChildByName("KW_UI_TEXT_NAME")
    local itemCount = rewardNode:getChildByName("KW_UI_TEXT_COUNT")
    if imgReward then
        imgReward:removeFromParent()
        imgReward = nil
    end
    local size = rewardNode:getContentSize()
    imgReward = self:createRemoteImage(rewardNode,size,"KW_UI_IMG_AWARD")

    local status = data.status
    local isActive = data.active == 1

    if data.hy == 0 then
        hyText:setText("")
    else
        hyText:setText(tostring(data.hy))
    end
    taskName:setText(data.desc)
    taskBtn:removeAllChildren()
    taskBtn:setTouchEnabled(isActive)
    taskProgress:setText(data.jd.."/"..data.mb)

    local btnPic = "lan"
    if self._module:findIndex(data.rwlx,TaskType.Free) then
        btnPic = "lv"
        taskProgress:setText("免费")
        taskName:setText("")
    elseif self._module:findIndex(data.rwlx,TaskType.Purchase) then
        if data.px[1] == 10001 then
            taskName:setText("")
            local productId = data.sp[1]
            local goods = self._module:getShopInfo(productId)
            -- local propId = data.px[2]
            -- local propNum = data.px[3]
            -- local propInfo = XH.lobby:getModule("BagSysNew"):getPropInfo(propId)
            if goods then
                -- local name = propInfo.propsname
                -- local imageUrl = ""
                -- propInfo.props_img = propInfo.props_img or {}
                -- for _, pinfo in pairs(propInfo.props_img) do
                --     if pinfo.package_id and tonumber(pinfo.package_id) == 2 then
                --         local imgArray = pinfo.img
                --         if imgArray then
                --             for idx = 1 , #imgArray do
                --                 imageUrl = imgArray[idx].img_url or ""
                --             end
                --         end
                --         break
                --     end
                -- end
                imgReward:setUrl(goods.image)
                if goods.type == "gold" then
                    nameReward:setText("金币")
                    imgReward._propId = XH.areaData:getGoldPropId()
                    itemCount:setText("x"..goods.value)
                elseif goods.type == "prop" then
                    nameReward:setText(goods.name)
                    itemCount:setText("x"..goods.prop_count)
                else
                    nameReward:setText(goods.name)
                    itemCount:setText("x"..goods.value)
                end
                taskProgress:setText(data.desc)
            else
                imgReward:setUrl("")
                nameReward:setText("未找到该道具配置")
                itemCount:setText("")
                taskProgress:setText("")
            end
        else
            if status == 1 and isActive then
                btnPic = "h"
                local animNode = XH.SpineManager:playAni(taskBtn, spinePath.BTNSLASH, "zzb_ty_ansg", "animation", true)
                animNode:setPosition(cc.p(180,55))
                animNode:setScaleX(1.13)
                animNode:setScaleY(1.05)
                taskProgress:setText("领取") 
            end
            if not isActive then
                taskProgress:setText("挑战")
            end
        end
    else
        if status == 1 and isActive then
            btnPic = "h"
            local animNode = XH.SpineManager:playAni(taskBtn, spinePath.BTNSLASH, "zzb_ty_ansg", "animation", true)
            animNode:setPosition(cc.p(180,55))
            animNode:setScaleX(1.13)
            animNode:setScaleY(1.05)
            taskProgress:setText("领取") 
        end
        if index ~= 1 then
            taskProgress:setText("挑战")
        end
    end
    if status == 2 then
        taskProgress:setText("已领取")
    end

    local imageUrl = "Btn_small_"..btnPic..".png"
    if index == 1 then
        imageUrl = "Btn_big_"..btnPic..".png"
        if taskName:getString() == "" then
            nameReward:setPositionY(-39)
            itemCount:setPositionY(-100)
        else
            nameReward:setPositionY(33)
            itemCount:setPositionY(-28)
        end
    end
    taskBtn:loadTexture(imageUrl, ccui.TextureResType.plistType)

    local rewardBox = data.rewardBox
    for i = 1,#rewardBox do
        local _data = rewardBox[i]
        if _data.name ~= nil and #_data.name > 0 then
            imgReward:setUrl(_data.img)
            data.jbxpid = data.jbxpid or {}
            imgReward._boxId = self._module:getGoldBoxId(data.jbxpid[1])
            local jbxStr = string.split(_data.name,"|")
            nameReward:setText(jbxStr[1])
            itemCount:setText("x"..#rewardBox)
        else
            if _data.rewardInfo and #_data.rewardInfo > 0 then
                for j = 1,#_data.rewardInfo do
                    local rewardInfo = _data.rewardInfo[j]
                    imgReward:setUrl(rewardInfo.icon)
                    imgReward._propId = rewardInfo.id
                    nameReward:setText(rewardInfo.name)
                    itemCount:setText("x"..rewardInfo.count)
                end
            end
        end
    end

    node:setVisible(true)
    node:stopAllActions()
    node:setOpacity(255)
end

function UnlimitedGiftView:createRemoteImage(parent,size,name)
    local pSize = parent:getContentSize()
    local imgReward = XH.RemoteImage.new()
        :setPosition(pSize.width/2, pSize.height / 2)
        :ignoreContentAdaptWithSize(true)
        :setContentSize(size.width, size.height)
        :setMaxContentSize(cc.size(size.width, size.height))
        :addTo(parent)
    imgReward:setName(name)
    imgReward:setTouchEnabled(true)
    imgReward:addTouchEventListener(handler(self, self.onAwardItemClick))
    return imgReward
end

function UnlimitedGiftView:onClickGetTaskItem(send, eventType)
    local lefttime = self._module:getLeftTime()
    local activeTask = self._module:getActiveTask()
    local jtid = activeTask.jtid
    local status = activeTask.status
    if self._module:findIndex(activeTask.rwlx,TaskType.Purchase) and activeTask.sp and activeTask.sp[1] and activeTask.px[1] == 10001 then
        if lefttime <= 0 then
            XH.TipTool.showToast("活动已结束，无法完成活动进度")
        else
            self._module:reqBuyPropByProductId(activeTask.sp[1],activeTask.px[2],activeTask.px[3])
        end
    elseif jtid > 0 and status == 1 then
        self._module:reqWuXianJingXiReward_Common()
    else
        self._module:doGotoTarget()
        self:close()
    end
end

function UnlimitedGiftView:onAwardItemClick(send, eventType)
    if eventType ~= ccui.TouchEventType.began then
        local boxId = send._boxId
        local propId = send._propId
        local textWidth = 270
        if boxId and boxId > 0 then
            local boxInfo = self._module:getGoldBoxInfo(boxId)
            if boxInfo then
                local jbxStr = string.split(boxInfo.jbxname,"|")
                self._tipName:setText(jbxStr[1] or "")
                local width = self._tipName:getContentSize().width
                textWidth = math.max(width,270)
                self._tipDesc:setTextAreaSize(cc.size(math.max(width,270),0))
                self._tipDesc:setText(jbxStr[2] or "")
            else
                self._tipName:setText("找不到对应金币箱")
                self._tipDesc:setText("")
            end
        elseif propId and propId > 0 then
            local propInfo = XH.lobby:getModule("BagSysNew"):getPropInfo(propId)
            if propInfo then
                self._tipName:setText(propInfo.propsname)
                local width = self._tipName:getContentSize().width
                textWidth = math.max(width,270)
                self._tipDesc:setTextAreaSize(cc.size(math.max(width,270),0))
                if propInfo.props_overview ~= propInfo.propsname then
                    self._tipDesc:setText(propInfo.props_overview)
                else
                    self._tipDesc:setText("")
                end
            else
                self._tipName:setText("未知道具")
                self._tipDesc:setText("")
            end
        end
        local nameSize = self._tipName:getContentSize()
        local descSize = self._tipDesc:getContentSize()
        if self._tipDesc:getString() == "" then
            self._tipItem:setContentSize(cc.size(nameSize.width+30,nameSize.height+30))
        else
            self._tipItem:setContentSize(cc.size(textWidth+30,descSize.height+70))
        end

        local sizeItem = self._tipItem:getContentSize()
        self._tipName:setPositionY(sizeItem.height - 14)
        self._tipDesc:setPositionY(sizeItem.height - 60)
        self._tipItem:setVisible(true)
        local worldPos = send:getParent():convertToWorldSpace(cc.p(send:getPositionX(), send:getPositionY()))
        local nodePos = self._rootLayer:convertToNodeSpace(worldPos)
        self._tipItem:setPosition(nodePos)
    end
end

function UnlimitedGiftView:playTaskCardAnim()
    self._animBoxBg:setVisible(true)
    self._animBoxBg:setOpacity(0)
    local activeSwap = self._taskItemNode[1]
    self._taskItemNode[1] = self._animTaskItem
    self._animTaskItem = activeSwap

    local lastSwap = self._taskItemNode[5]
    self._taskItemNode[5] = self._taskItemNode[2]
    for i = 2,4 do
        if i == 4 then
            self._taskItemNode[i] = lastSwap
        else
            self._taskItemNode[i] = self._taskItemNode[i+1]
        end
    end

    self:_updateTaskInfo()

    local callBackFunc = function()
        self._animBoxBg:setVisible(false)
        self:resetAnimNode()
    end

    --新的激活态任务划入
    local actionTime = 0.3
    local fadeIn = cc.FadeIn:create(actionTime)
    local scaleToOne = cc.ScaleTo:create(actionTime,1)
    local moveTo = cc.MoveTo:create(actionTime,cc.p(self.TaskInfoPosX[1],self.TaskInfoPosY[1]))
    local spawnAction = cc.Spawn:create(fadeIn,scaleToOne,moveTo)
    self._taskItemNode[1]:runAction(spawnAction)

    --老的激活态退出
    local contentSize = self._animTaskItem:getContentSize()
    self._animTaskItem:setAnchorPoint(cc.p(0.5, 0.5))
    self._animTaskItem:setPosition(cc.p(self.TaskInfoPosX[1]-contentSize.width*0.5,self.TaskInfoPosY[1]+contentSize.height*0.5))
    self._animTaskItem:runAction(cc.Sequence:create(cc.ScaleTo:create(actionTime,0),cc.DelayTime:create(0.1), cc.CallFunc:create(callBackFunc)))

    --小卡片处理
    local fadeOut = cc.FadeOut:create(actionTime)
    local scaleToOne = cc.ScaleTo:create(actionTime,1)
    local moveTo = cc.MoveTo:create(actionTime,cc.p(self.TaskInfoPosX[1],self.TaskInfoPosY[1]))
    local spawnAction = cc.Spawn:create(fadeOut,scaleToOne,moveTo)
    self._taskItemNode[5]:runAction(spawnAction)

    for i = 2,4 do
        local moveTo = cc.MoveTo:create(actionTime,cc.p(self.TaskInfoPosX[i],self.TaskInfoPosY[i]))
        self._taskItemNode[i]:runAction(moveTo)
    end

    if self._module:isPlayHyAnim() then
    --活跃度火焰
        local fireAnim = function()
            self.animFire:stopAllActions()
            local fireScale = cc.Sequence:create(cc.ScaleTo:create(0.2,2),cc.ScaleTo:create(0.2,0.8),cc.ScaleTo:create(0.2,1))
            self.animFire:runAction(fireScale)
            -- self.animFire:resume()
            -- self.animFire:runAction(cc.Sequence:create(cc.DelayTime:create(2),cc.CallFunc:create(function() 
            --     self.animFire:pause()
            -- end)))
            XH.SpineManager:playAni(self._animFire2, spinePath.FIRE, "zzb_ty_feilizi", "animation2", false)
        end

        self._hyIcon:setVisible(true)
        local scaleToZero = cc.ScaleTo:create(actionTime,0)
        local moveTo = cc.MoveTo:create(actionTime,cc.p(self._animFire:getPosition()))
        local spawnAction = cc.Spawn:create(scaleToZero,moveTo)
        self._hyIcon:runAction(cc.Sequence:create(spawnAction,cc.CallFunc:create(fireAnim)))
    end
end

function UnlimitedGiftView:onPlayBoxAnim(msg)
    self._animBoxBg:setVisible(true)
    self._animBoxBg:setOpacity(0.7*255)

    local jbxpid = msg.msg.jbxpid
    local callBack = msg.msg.callBack

    local animIndex = self._module:getGoldBoxId(jbxpid)

    self._animBox:setScale(1)
    local bkCallBack = function()
        local bkAnim = XH.SpineManager:playAni(self._animBox2, spinePath.POPUP, "zzb_ty_cjbaokai", "animation"..animIndex, false, function()
            self._animBoxBg:setVisible(false)
        end,nil,true)
        bkAnim:runAction(cc.ScaleTo:create(0.5,6))
        local bkAnim = XH.SpineManager:playAni(self._animBox2, spinePath.POPUP, "zzb_ty_cjbaokai", "animation"..animIndex, false, nil, nil,false)
        bkAnim:runAction(cc.ScaleTo:create(0.5,6))
        self._animBox:runAction(cc.ScaleTo:create(0.5,6))
    end

    XH.SpineManager:playAni(self._animBox, spinePath.UNLIMITEDGIFT, "zzb_wj_baoxiang", "animation"..animIndex, false, nil, {["gxhd"] = callBack,["bk"] = bkCallBack})
    
    -- local animNode = XH.SpineManager:playAni(self._animBox, spinePath.UNLIMITEDGIFT, "zzb_wj_baoxiang", "animation"..animIndex, false, nil, {["bk"] = bkCallBack})
end

function UnlimitedGiftView:onClickRule()
    XH.viewManager:openView("UnlimitedGiftRuleView")
end

return UnlimitedGiftView   �n  