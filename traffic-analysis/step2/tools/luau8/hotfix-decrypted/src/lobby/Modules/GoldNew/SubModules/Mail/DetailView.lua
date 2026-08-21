local DetailView = class("DetailView", XH.ViewBase)
local LocalConfig = import("...Configs.LocalConfig")

function DetailView:getCSBPath()
    return XH.Bridge:getCCSResPath("Mail/MailDetailLayer.csb")
end

function DetailView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        -- 邮件详情-删除
        ["_KW_BTN_DELETE_ONLY"] = {varName = "_delOnlyBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchDel"},
        -- 邮件详情-删除
        ["_KW_BTN_DELETE"] = {varName = "_delBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchDel"},
        -- 邮件详情-领取
        ["_KW_BTN_AWARD"] = {varName = "_awardBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchAward"},
        -- 邮件过期时间
        ["_KW_TEXT_EXPIRE"] = {varName = "_mailExpire"},
        -- 邮件标题
        ["_KW_TEXT_TITLE"] = {varName = "_mailTitle"},
        
        ["_KW_TEXT_CONTENT"] = {varName = "_detailContent"},
        ["_KW_LIST_CONTENT"] = {varName = "_detailScrollView"},
        ["_KW_ITEM_AWARD_PANEL"] = {varName = "_awardItem"},
        ["_KW_TEXT_TIME"] = {varName = "_textTime"},
        ["_KW_LIST_AWARD"] = {varName = "_listAward"},
        -- 动画节点
        ["_KW_PANEL_ANI"] = {varName = "_KW_PANEL_ANI"},
        ["_KW_PANEL_XINXI"] = {varName = "_KW_PANEL_XINXI"},
    }
end

function DetailView:ctor(info)
    self:initData()
    DetailView.super.ctor(self)
    self:refreshDetail()
    self:initAnimation()
end

function DetailView:initData()
    self._module = XH.Bridge:getModule(LocalConfig.MP.Mail)
    self._mailData = self._module:getMailData()
end

function DetailView:getProxyEvents()
    return {
        {module = self._mailData, eventKeyName = "EVENT_MAIL_DETAIL_INFO", callBack = "refreshDetail"},
        {module = self._module, eventKeyName = "EVENT_POOL_PRIZES_SUCC", callBack = "refreshAward"},
    }
end

function DetailView:initAnimation()
    local path = LocalConfig.IMG_PATH.SPINE_ROOT .. "Mail/"
    XH.SpineManager:playAniWithComplete(self._KW_PANEL_ANI, path, "zzb_jbdt_youxiangtc", "cx", false, "loop", true)
    local jsonFilePath = path .. "zzb_jbdt_youxiangtc_ani.json"
    self._KW_PANEL_XINXI:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "xinxi", slotName = "xinxi" })
    self._delBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "btn", slotName = "btn" })
    self._delOnlyBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "btn", slotName = "btn" })
    self._awardBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "btn2", slotName = "btn2" })
    self._KW_BTN_CLOSE:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "x", slotName = "x" })
end

function DetailView:refreshDetail()
    self._mailDetail = self._mailData:getMailDetail()
    if not self._mailDetail then
        return
    end
    self._curMailInfo = self._mailData:getMailInfoByMailId(self._mailDetail.mailId)

    if self._curMailInfo then
        self._listAward:removeAllChildren()

        self._mailTitle:setText(self._curMailInfo.title)
        local expireTime = self._mailData:getExpireTime(self._mailDetail.mailId)
        self._mailExpire:setText("邮件有效期:" .. os.date("%Y-%m-%d", expireTime))
        self._textTime:setText(self._mailDetail.publishTime)
        local str = XH.StringTool.htmlToXML(self._mailDetail.mailContent)
        local textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='38' color='#474E69'>" .. str .. "</font>"
        local richText = ccui.RichText:createWithXML(textStr, { })
        richText:setAnchorPoint(cc.p(0.5, 1))
        richText:ignoreContentAdaptWithSize(false)
        richText:setContentSize(cc.size(self._detailContent:getContentSize().width, 0))
        richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
        richText:formatText()
        local finalHeight = richText:getContentSize().height
        richText:setPosition(cc.p(self._detailContent:getContentSize().width/2, self._detailContent:getContentSize().height))

        self._detailContent:setString("")
        self._detailContent:addChild(richText)

        self._delBtn:setVisible(self._curMailInfo.undraw)
        self._awardBtn:setVisible(self._curMailInfo.undraw)
        self._delOnlyBtn:setVisible(not self._curMailInfo.undraw)
        XH.UITool.setVisible(self._awardBtn, "KW_RED_POINT", self._curMailInfo.undraw)

        XH.UITool.setText(self._awardBtn, "Text_3", "领取")
        self._awardBtn:setGrayedAndEnabled(false, false)

        local showAward = #self._mailDetail.awards > 0 and true or false

        self._listAward:setVisible(showAward)
        -- 根据是否有奖励重置UI位置
        local scrollSize = showAward and cc.size(1240, 320) or cc.size(1240, 450)
        local posY = self._mailExpire:getPositionY()
        self._mailExpire:setPositionY(showAward and posY or posY - 60)
        self._detailScrollView:setContentSize(scrollSize)

        if finalHeight > scrollSize.height then
            scrollSize.height = finalHeight
        end
        self._detailScrollView:setInnerContainerSize(cc.size(scrollSize.width, scrollSize.height))
        self._detailContent:setPositionY(scrollSize.height)

        -- 奖励
        local award_list = {}
        if self._award_list and #self._award_list > 0 then
            award_list = self._award_list
            for i = 1, #award_list do
                self:updateAwardItem(award_list[i])
            end
            self:resizeAwardList()
        else
            local award_list = self._mailDetail.awards
            if self._mailDetail.haveAward == 2 then
                if #award_list == 1 then
                    self._module:reqPoolPrizes(award_list[1].pid)
                end
            else
                self._award_list = award_list
                for i = 1, #award_list do
                    self:updateAwardItem(award_list[i])
                end
                self:resizeAwardList()
            end
        end

        if #award_list > 0 and self._curMailInfo.undraw == false then
            self._delBtn:setVisible(true)
            self._awardBtn:setVisible(true)
            self._delOnlyBtn:setVisible(false)
            XH.UITool.setText(self._awardBtn, "Text_3", "已领取")
            self._awardBtn:setGrayedAndEnabled(true, true)
        end
    end
end

function DetailView:updateAwardItem(itemInfo)
    local item = self._awardItem:clone()
    XH.UITool.setVisible(item, "_KW_ITEM_AWARD_GET", not self._curMailInfo.undraw)

    -- 道具图片
    local imgAward = item:getChildByName("_KW_ITEM_AWARD")
    local propImage = XH.RemoteImage.new()
    propImage:setAnchorPoint(cc.p(0.5, 0.5))
    propImage:setPosition(imgAward:getContentSize().width * 0.5, imgAward:getContentSize().height * 0.5)
    propImage:ignoreContentAdaptWithSize(false)
    propImage:setContentSize(imgAward:getContentSize().width, imgAward:getContentSize().height)
    propImage:setMaxContentSize(cc.size(imgAward:getContentSize().width, imgAward:getContentSize().height))
    propImage:setUrl(itemInfo.imageUrl or "")
    imgAward:addChild(propImage)

    -- 道具数量
    if itemInfo.propValue then
        local showPropCnt = itemInfo.propValue
        if itemInfo.propId == XH.areaData:getPropLimitedTimeRoomCardID() then
            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                showPropCnt = showPropCnt / XH.areaData:getPropLimitedTimeRoomCardRatio()
            end
        end
        XH.UITool.setText(item, "_KW_ITEM_AWARD_CNT", "x" .. XH.StringTool.numberToString(showPropCnt, 4))
    else
        XH.UITool.setText(item, "_KW_ITEM_AWARD_CNT", "")
    end

    -- 道具数量
    if itemInfo.prizeName then
        XH.UITool.setText(item, "_KW_ITEM_AWARD_NAME", itemInfo.prizeName)
    else
        XH.UITool.setText(item, "_KW_ITEM_AWARD_NAME", "")
    end

    item:setVisible(true)
    self._listAward:addChild(item)
end

function DetailView:onTouchDel(send, eventType)
    if self._curMailInfo then
        if self._curMailInfo.undraw then
            XH.TipTool.showToast("您有未领取的附件，无法删除", 3)
            return
        end
        self._module:reqDelMail({self._curMailInfo.mailId})
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060402, {page = "金币大厅", block_label = "删除"})
        self:onTouchClose()
    end
end

function DetailView:onTouchAward(send, eventType)
    if self._curMailInfo.title == '实名认证' then
        --弹实名认证
        if XH.playerData:getIdentityStatus() == 2 then
            XH.viewManager:openView("IdentityCheckView",nil,{isAutoBindPhone = true})
            return
        end
    end
    if self._curMailInfo and self._curMailInfo.undraw then
        send:setEnabled(false)
        self._module:reqGetAward({self._curMailInfo.mailId})
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060402, {page = "金币大厅", block_label = "领取"})
    end
end

function DetailView:refreshAward()
    self._award_list = self._module:getAwardPoolGoods()
    for i = 1, #self._award_list do
        self:updateAwardItem(self._award_list[i])
    end
    self:resizeAwardList()
end

function DetailView:resizeAwardList()
    local items = self._listAward:getItems()
    if items and #items > 0 then
        local ItemSize = math.min(items[1]:getContentSize().width * #items + 20 * (#items - 1), 800)
        self._listAward:setContentSize(ItemSize, items[1]:getContentSize().height)
    end
end

function DetailView:onTouchClose(send, eventType)
    self._module:resetMailReqing()
    self:close()
end

return DetailView
0(