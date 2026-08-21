local InfoItemView = class("InfoItemView", XH.ViewBase)

InfoItemView.RedColor = cc.c3b(213, 101, 71)
InfoItemView.GreenColor = cc.c3b(27, 148, 104)

function InfoItemView:getCSBPath()
    return "cocosStudio/hall/CSB/Mail/MailInfoItem.csb"
end

function InfoItemView:getBindingInfo()
    return {
        -- icon
        ["_KW_MAIL_INFO_ICON"] = {varName = "_mailIcon"},
        -- 红点
        ["_KW_MAIL_RED_POINT"] = {varName = "_redPoint"},
        -- 礼盒
        ["_KW_AWARD_BOX"] = {varName = "_awardBox"},
        -- 复选框
        ["_KW_MAIL_CHECKBOX"] = {varName = "_mailCheckBox"},
        -- 标题
        --["_KW_MAIL_TITLE"] = {varName = "_mailTitle"},
        ["_KW_BMFONT_MAIL_TITLE"] = {varName = "_bmfontMailTitle"},
        -- 描述
        ["_KW_MAIL_DESC"] = {varName = "_mailDesc"},
        -- 时间
        --["_KW_MAIL_TIME"] = {varName = "_mailTime"}
        ["_KW_BMFONT_MAIL_TIME"] = { varName = "_bmfontMailTime"}
    }
end

function InfoItemView:ctor(info)
    InfoItemView.super.ctor(self)
    self:initUI()
    self:initTouchEvent()
    self._mailInfo = {}
    self:updateMailInfo(info)
end

function InfoItemView:initUI()
    --self._mailTitle:setText("")
    self._bmfontMailTitle:setText("")
    self._mailDesc:setText("")
    --self._mailTime:setText("")
    self._bmfontMailTime:setText("")
    self._mailCheckBox:setSelected(false)
    self._awardBox:setVisible(false)
    self._redPoint:setVisible(false)
end

function InfoItemView:setCallFunc(callFunc)
    self._callFunc = callFunc
end

function InfoItemView:initTouchEvent()
    self._mailCheckBox:addEventListener(handler(self, self.onTouchCheckBox))
end

-- 点击复选按钮
function InfoItemView:onTouchCheckBox(send, eventType)
    if eventType == ccui.CheckBoxEventType.selected then
        print("onTouchCheckBox...selected")
        self._mailInfo.isSelected = true
    elseif eventType == ccui.CheckBoxEventType.unselected then
        print("onTouchCheckBox...unselected")
        self._mailInfo.isSelected = false
    end
    if self._callFunc then
        self._callFunc()
    end
end

function InfoItemView:setSelectedType(eventType)
    self._mailCheckBox:setSelected(eventType)
    self._mailInfo.isSelected = eventType
end

function InfoItemView:getMailInfo()
    return self._mailInfo
end

function InfoItemView:updateMailInfo(info)
    self._mailInfo = info
    local read = self._mailInfo.isRead
    if self._redPoint then
        self._redPoint:setVisible(not read)
    end

    if self._mailInfo.isRead then
        self._mailIcon:loadTexture("mail_image_read.png", ccui.TextureResType.plistType)
    else
        self._mailIcon:loadTexture("mail_image_unread.png", ccui.TextureResType.plistType)
    end

    if self._awardBox then
        self._awardBox:setVisible(self._mailInfo.isAnnex)
    end

    --if self._mailTitle then
    --    local str = string.restorehtmlspecialchars(self._mailInfo.title) or ""
    --    self._mailTitle:setString(str)
    --end

    if self._bmfontMailTitle then
        local str = string.restorehtmlspecialchars(self._mailInfo.title) or ""
        self._bmfontMailTitle:setString(str)
    end

    if self._mailDesc then
        self._mailDesc:setString(string.restorehtmlspecialchars(self._mailInfo.intro or ""))
    end

    --if self._mailTime then
    --    self:updateTime()
    --end

    if self._bmfontMailTime then
        self:updateTime()
    end

    self._mailCheckBox:setSelected(self._mailInfo.isSelected or false)
end

function InfoItemView:updateTime()
    local timeStr = ""
    local leftTime = self._mailInfo.expire_time - os.time()
    if leftTime < 0 then
        self._bmfontMailTime:setString(timeStr)
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

    if leftDays > 7 then
        self._bmfontMailTime:setColor(InfoItemView.GreenColor)
    else
        self._bmfontMailTime:setColor(InfoItemView.RedColor)
    end

    self._bmfontMailTime:setText(timeStr)
end

return InfoItemView
