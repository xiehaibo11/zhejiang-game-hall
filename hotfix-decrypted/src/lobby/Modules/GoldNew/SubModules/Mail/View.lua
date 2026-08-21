-- 邮件UI
local MailView = class("MailView", XH.ViewBase)
local LocalConfig = import("...Configs.LocalConfig")
local KW_TBLEVIEW_NEED_OFFSET = 160

function MailView:getCSBPath()
    return XH.Bridge:getCCSResPath("Mail/MailMainLayer.csb")
end

function MailView:getBindingInfo()
    return {
        -- 关闭按钮
        ["_KW_BTN_CLOSE"] = {varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        -- 邮件列表
        ["_KW_MAIL_LIST"] = {varName = "_mailListView"},
        ["_KW_PANEL_MAIL_LIST"] = {varName = "_panelMailList"},
        -- 是否有邮件
        ["_KW_IMG_LEFT_TITLE"] = {varName = "_KW_IMG_LEFT_TITLE"},
        -- 一键已读
        ["_KW_BTN_READALL"] = {varName = "_readAllBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchReadAll"},
        -- 一键领取
        ["_KW_BTN_AWARDALL"] = {varName = "_awardAllBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchAwardAll"},
        -- 全选删除
        ["_KW_BTN_DELALL"] = {varName = "_deleteAllBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchDeleteAll"},
        -- 无邮件
        ["_KW_NO_MAIL"] = {varName = "_noMail"},
        ["_KW_MAIL_DETAIL_ITEM"] = {varName = "_KW_MAIL_DETAIL_ITEM"},
        -- 以下是动画节点
        ["_KW_ANI_NODE"] = {varName = "_KW_ANI_NODE"},
        ["_img_mail_bg"] = {varName = "_img_mail_bg"},
        ["_KW_PANEL_RIGHT_CENTER"] = {varName = "_KW_PANEL_RIGHT_CENTER"},
    }
end

function MailView:getProxyEvents()
    return {
        {module = self._mailData, eventKeyName = "EVENT_MAIL_DATA_CHANGED", callBack = "onMailDataEvent"},
        {module = self._mailData, eventKeyName = "EVENT_MAIL_DETAIL_INFO", callBack = "onMailDetailEvent"}
    }
end

function MailView:ctor()
    self:initData()
    MailView.super.ctor(self)
    self._mailArray = {}
    self._isTableViewBottom = false
    self._isTableViewTop = false
    self._pageCnt = 0
    self:initUI()
    self:reqGetPlayerMailList()
    self:initAnimation()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060401, {page = "金币大厅"})
end

function MailView:reqGetPlayerMailList()
    self._module:reqGetPlayerMailList()
    self._mailData._newMailCount = 0
    self._mailData:setMailFirst(false)
end

function MailView:initData()
    self._module = XH.Bridge:getModule(LocalConfig.MP.Mail)
    self._mailData = self._module:getMailData()
    self._mailData:resetMailData()
end

function MailView:initUI()
    self._KW_MAIL_DETAIL_ITEM:setVisible(false)
    self._mailTableView = self._panelMailList:tryAddLuaComponent(
        cc.ext.CompTableView,
        {
            direction = cc.SCROLLVIEW_DIRECTION_VERTICAL,
            itemNode = self._KW_MAIL_DETAIL_ITEM,
            itemUpdateEvent = handler(self, self.itemUpdateEvent),
            itemClickEvent = handler(self, self.itemClickEvent),
            scrollViewDidScrollEvent = handler(self, self.scrollViewDidScrollEvent),
            preciseClick = true,
        }
    )
    self._awardAllBtn:setEnabled(true)
    self:changeMailState()
end

function MailView:itemClickEvent(itemNode, datas, index)
    local mailInfo = datas[index]
    self._module:reqGetMailDetail(mailInfo.mailId)
end

function MailView:itemUpdateEvent(item, data, index)
    if not item then
        return
    end
    self._pageCnt = self._mailTableView:getPageCnt()
    if self._pageCnt >= index and not self._showItemAni then
        XH.SysTool.performDelayOnce(function ()
            if not item or tolua.isnull(item) then
                return
            end
            item:setPositionY(-150)
            local fadeAction = cc.FadeTo:create(4/30, 255)
            local moveAction = cc.MoveTo:create(10/30, cc.p(0, 0))
            item:runAction(cc.Sequence:create(
                cc.DelayTime:create((index - 1) / 30), 
                cc.Spawn:create(fadeAction, moveAction)
            ))
        end, 10/30)
    else
        self._showItemAni = true
    end
    item:setVisible(true)
    item:setOpacity(self._showItemAni and 255 or 0)

    if not self._showItemAni then
        self._showItemAni = (index == self._pageCnt or index == #self._mailArray)
    end

    XH.BindUITool.bindingNode(
        item,
        {
            -- icon
            ["_KW_MAIL_INFO_ICON"] = {varName = "_mailIcon"},
            -- 红点
            ["_KW_MAIL_RED_POINT"] = {varName = "_redPoint"},
            -- 礼盒
            ["_KW_AWARD_BOX"] = {varName = "_awardBox"},
            -- 复选框
            ["_KW_MAIL_CHECKBOX"] = {varName = "_mailCheckBox"},
            ["_KW_TEXT_MAIL_TITLE"] = {varName = "_mailTitle"},
            -- 描述
            ["_KW_MAIL_DESC"] = {varName = "_mailDesc"},
            -- 时间
            ["_KW_PANEL_TIME"] = {varName = "_panelLeftTime"},
            ["_KW_TEXT_MAIL_TIME"] = {varName = "_mailLeftTime"},
            -- 删除
            ["_KW_BTN_DELETE"] = {varName = "_btnDelete"},
            ["_KW_PANEL_HIDE_POS"] = {varName = "_KW_PANEL_HIDE_POS"},
            ["_KW_PANEL_SHOW_POS"] = {varName = "_KW_PANEL_SHOW_POS"},
        }
    )
    self:updateMailInfo(data, item)
end

function MailView:scrollViewDidScrollEvent()
    local listPanel = self._panelMailList
    if not listPanel or not self._mailTableView or not self._mailTableView._tableView then
        return
    end

    local tableView = self._mailTableView._tableView

    local listSize = listPanel:getContentSize()
    local tableSize = tableView:getContentSize()
    local offsetHeight = 0
    if tableSize.height < listSize.height then
        offsetHeight = listSize.height - tableSize.height
    end
    local tableOffset = tableView:getContentOffset()
    tableOffset.y = tableOffset.y - offsetHeight
    if tableOffset.y > KW_TBLEVIEW_NEED_OFFSET and not self._isTableViewBottom then
        self._isTableViewBottom = true
        self:onScrollToBottomOrTop()
    end
    local offset = listSize.height - tableSize.height

    if (offset - tableOffset.y) > KW_TBLEVIEW_NEED_OFFSET and not self._isTableViewTop then
        self._isTableViewTop = true
        self:onScrollToBottomOrTop(1)
    end
    if tableOffset.y <= 0 then
        self._isTableViewBottom = false
    end
    if offset - tableOffset.y < 10 then
        self._isTableViewTop = false
    end
end

-- 拉取最新
function MailView:onScrollToBottomOrTop(page)
    self._module:reqGetPlayerMailList(page)
end

function MailView:initAnimation()
    local commonAniPath = "res/animation/Common/"
    local path = LocalConfig.IMG_PATH.SPINE_ROOT .. "Mail/"
    XH.SpineManager:playAniWithComplete(self._KW_ANI_NODE, path, "zzb_jbdt_youxiang", "cx", false, "loop", true)
    local jsonFilePath = path .. "zzb_jbdt_youxiang_ani.json"
    self._closeBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "root", slotName = "shang" })
    self._KW_IMG_LEFT_TITLE:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "tips", slotName = "tips" })
    self._img_mail_bg:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "bg", slotName = "bg" })
    self._img_mail_bg:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "zhengti", slotName = "zhengti" })
    self._KW_PANEL_RIGHT_CENTER:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, slotName = "di" })

    -- 按钮动画 每个错开1帧
    self._readAllBtn:setOpacity(0)
    self._awardAllBtn:setOpacity(0)
    self._deleteAllBtn:setOpacity(0)
    self._deleteAllBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "btn", slotName = "btn" })
    XH.SysTool.performDelayOnce(function ()
        if not self or tolua.isnull(self) then
            return
        end
        self._readAllBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "btn", slotName = "btn" })
        XH.SysTool.performDelayOnce(function ()
            if not self or tolua.isnull(self) then
                return
            end
            self._awardAllBtn:tryAddLuaComponent(cc.ext.CompSpineAction, { jsonFilePath = jsonFilePath, animationName = "cx", isLoop = false, boneName = "btn", slotName = "btn" })
            XH.SysTool.performDelayOnce(function ()
                if not self or tolua.isnull(self) then
                    return
                end
                local hasMail = #self._mailArray > 0 and true or false
                if hasMail and self:checkAwardBtnAni() then
                    local saoguangNode = XH.SpineManager:playAni(XH.UITool.seekNodeByName(self._awardAllBtn, "KW_ANI_NODE"), commonAniPath, "zzb_ty_ansg", "animation", true)
                    saoguangNode:setScaleX(0.95)
                    saoguangNode:setScaleY(1.15)
                    XH.SpineManager:playAni(XH.UITool.seekNodeByName(self._awardAllBtn, "KW_ANI_NODE_1"), commonAniPath, "zzb_ty_anzqgx", "animation", true)
                end
            end, 0.8)
        end, 1/30)
    end, 1/30)
end

function MailView:onMailDataEvent(event)
    self:refreshData()
end

function MailView:onMailDetailEvent(event)
    self:refreshData()
    self:checkAwardBtnAni()
    if not self._awardAll and not XH.viewManager:isViewExist("GoldHallMailDetailView") then
        XH.viewManager:openView("GoldHallMailDetailView")
    end
    self._awardAll = false
end

-- 停留在当前位置
function MailView:refreshData()
    self._mailArray = self._mailData:getMailList()
    self._mailTableView:setData(self._mailArray)
    self:changeMailState()
end

function MailView:checkAwardBtnAni()
    local tmpMailArray = self._mailData:getMailList()
    local needPlayAwardBtnAni = false
    for k, v in pairs(tmpMailArray) do 
        if v.undraw == true then
            needPlayAwardBtnAni = true
            break
        end
    end
    if not needPlayAwardBtnAni then
        XH.UITool.removeAllChildren(self._awardAllBtn, "KW_ANI_NODE")
        XH.UITool.removeAllChildren(self._awardAllBtn, "KW_ANI_NODE_1")
    end
    return needPlayAwardBtnAni
end

function MailView:updateImg(node, url)
    if not url then
        return
    end

    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new():setTouchEnabled(true):setPosition(size.width / 2, size.height / 2):setContentSize(size.width, size.height):setMaxContentSize(cc.size(size.width * 0.85,size.height * 0.85)):addTo(node)
    imageNode:setUrl(url, true)
end

function MailView:setSelectedType(type)
    for index, mailInfo in ipairs(self._mailArray) do
        mailInfo.isSelected = type
        local cell = self._mailTableView:cellAtIndex(index - 1)
        if cell ~= nil then
            local mailInfoItem = cell:getChildByName("Item")
            if mailInfoItem ~= nil then
                self:updateMailInfo(mailInfo, mailInfoItem)
            end
        end
    end
end

function MailView:onTouchReadAll(send, eventType)
    local mails = self._mailData:getUnReadMails()
    if #mails == 0 then
        XH.TipTool.showToast("当前没有未读邮件！", 3)
        return
    end
    self._module:reqReadAllMail()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060402, {page = "金币大厅", block_label = "全部已读"})
end

function MailView:onTouchAwardAll(send, eventType)
    -- send:setEnabled(false)
    local mails = self._mailData:getAwardMails()
    if #mails == 0 then
        XH.TipTool.showToast("当前没有奖励可领取！", 3)
        return
    end   
    for _, value in ipairs(self._mailArray) do
        if value.title == '实名认证' then
            --弹实名认证
            if XH.playerData:getIdentityStatus() == 2 then
                XH.viewManager:openView("IdentityCheckView",nil,{isAutoBindPhone = true})
                send:setEnabled(true)
                return
            end
        end
    end
    self._awardAll = true
    self._module:reqGetAward(mails)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060402, {page = "金币大厅", block_label = "一键领取"})
end

function MailView:onTouchDeleteAll(send, eventType)
    self:setSelectedType(true)
    local selectCnt = self:getSelectedCnt()
    if selectCnt == 0 then
        XH.TipTool.showToast("你未选中任何邮件！", 3)
        return
    end
    self:reqDel()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.cyyj25060402, {page = "金币大厅", block_label = "全部删除"})
end

-- UI显示
function MailView:changeMailState()
    self._mailDetail = self._mailData:getMailDetail()
    local hasMail = #self._mailArray > 0 and true or false
    local hasDetail = self._mailDetail and true or false
    self._panelMailList:setVisible(hasMail)
    self._readAllBtn:setVisible(hasMail)
    self._awardAllBtn:setVisible(hasMail)
    self._deleteAllBtn:setVisible(hasMail)
    self._noMail:setVisible(not hasMail)
    XH.UITool.setVisible(self._KW_IMG_LEFT_TITLE, "KW_IMG_HAVE", hasMail)
    XH.UITool.setVisible(self._KW_IMG_LEFT_TITLE, "KW_IMG_EMPTY", not hasMail)
end

-- 关闭
function MailView:onTouchClose(send, eventType)
    self:setSelectedType(false)

    -- 重置详情数据
    self._mailData:resetMailData()

    self._module:resetMailReqing()

    self._module:reqCheckNewMail()

    self:close()
end

function MailView:getSelectedCnt()
    local selectCnt = 0
    for _, mailInfo in ipairs(self._mailArray) do
        if mailInfo.isSelected == true then
            selectCnt = selectCnt + 1
        end
    end
    return selectCnt
end

function MailView:reqDel()
    local delMail = {}
    local delMailId = {}
    for _, mailInfo in ipairs(self._mailArray) do
        if mailInfo.isSelected == true then
            delMail[#delMail + 1] = mailInfo
        end
    end

    if #delMail == 1 and delMail[1].undraw then
        XH.TipTool.showToast("您有未领取的附件，无法删除", 3)
        return
    end

    for i = 1, #delMail do
        if delMail[i].undraw == false and delMail[i].unread == false then
            delMailId[#delMailId + 1] = delMail[i].mailId
        end
    end

    if #delMailId > 0 then
        self._module:reqDelMail(delMailId)
    elseif #delMail > 0 then
        XH.TipTool.showToast("您有未领取的附件或未读邮件，无法删除", 3)
    end
end

function MailView:updateMailInfo(info, item)
    item._mailTitle:setText("")
    item._mailDesc:setText("")
    item._panelLeftTime:setVisible(false)
    item._mailLeftTime:setText("")
    item._mailCheckBox:setSelected(false)
    item._awardBox:setVisible(false)
    item._redPoint:setVisible(false)
    item._btnDelete:setPositionX(item._KW_PANEL_HIDE_POS:getPositionX())
    item._mailCheckBox:addEventListener(function(send, eventType)
        self:onTouchCheckBox(item, send, eventType)
    end)
    item._btnDelete:addTouchEventListener(function(send, eventType)
        self:onBtnDeleteMail(item, send, eventType)
    end)

    item.mailInfo = info
    local unread = item.mailInfo.unread
    if item._redPoint then
        item._redPoint:setVisible(unread)
    end

    if unread then
        item._mailIcon:loadTexture("Img_mail_yj_1.png", ccui.TextureResType.plistType)
    else
        item._mailIcon:loadTexture("Img_mail_yj_2.png", ccui.TextureResType.plistType)
    end

    if item._awardBox then
        item._awardBox:setVisible(item.mailInfo.undraw)
    end

    if item._mailTitle then
        local str = string.restorehtmlspecialchars(item.mailInfo.title) or ""
        item._mailTitle:setString(str)
    end

    if item._mailDesc then
        -- item._mailDesc:setString(os.date("%Y-%m-%d %H:%M:%S", (item.mailInfo.publishTime)))
        item._mailDesc:setString(string.restorehtmlspecialchars(item.mailInfo.intro or ""))
    end

    if item._mailLeftTime then
        self:updateTime(item)
    end

    item._mailCheckBox:setSelected(item.mailInfo.isSelected or false)
end

function MailView:updateTime(item)
    if not item._panelLeftTime or not item._mailLeftTime then
        return
    end
    local timeStr = ""
    local leftTime = item.mailInfo.expireTime - os.time()
    if leftTime < 0 then
        item._panelLeftTime:setVisible(false)
        item._mailLeftTime:setString(timeStr)
        return
    end
    local leftDays = math.floor(leftTime / 86400)
    if leftDays < 1 then
        if leftTime < 60 * 60 then
            timeStr = "即将到期"
        else
            local leftHour = math.floor(leftTime / 3600)
            timeStr = "剩余" .. leftHour .. "小时"
        end
    else
        timeStr = "剩余" .. leftDays .. "天"
    end

    item._panelLeftTime:setVisible(true)
    item._panelLeftTime:setOpacity(255)
    item._mailLeftTime:setText(timeStr)
end

-- 点击复选按钮
function MailView:onTouchCheckBox(item, send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        print("onTouchCheckBox...selected")
        item._btnDelete:setVisible(true)
        item._btnDelete:setScaleX(0.1)
        local currentScaleY = item._btnDelete:getScaleY()
        local moveAction = cc.MoveTo:create(0.3, cc.p(item._KW_PANEL_SHOW_POS:getPositionX(), item._btnDelete:getPositionY()))
        local scaleAction = cc.ScaleTo:create(0.4, 1, currentScaleY)
        item._btnDelete:runAction(
            cc.Spawn:create(
                moveAction,
                scaleAction
            )
        )
        item._panelLeftTime:runAction(
            cc.Sequence:create(
                cc.FadeOut:create(0.3),
                cc.CallFunc:create(function()
                    if item and not tolua.isnull(item) then
                        item._panelLeftTime:setVisible(false)
                    end
                end)
            )
        )
        item.mailInfo.isSelected = true
    elseif eventType == ccui.CheckBoxEventType.unselected then
        print("onTouchCheckBox...unselected")
        item._btnDelete:runAction(cc.MoveTo:create(0.3, cc.p(item._KW_PANEL_HIDE_POS:getPositionX(), item._btnDelete:getPositionY())))
        self:updateTime(item)
        item.mailInfo.isSelected = false
    end
end

function MailView:onBtnDeleteMail(item, send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if item.mailInfo then
        if item.mailInfo.undraw then
            XH.TipTool.showToast("您有未领取的附件，无法删除", 3)
            return
        end
        self._module:reqDelMail({item.mailInfo.mailId})
    end
end

return MailView
   UK  