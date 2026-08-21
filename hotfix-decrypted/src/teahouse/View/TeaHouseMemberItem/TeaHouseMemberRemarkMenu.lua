---@class TeaHouseMemberRemarkMenu : View
local TeaHouseMemberRemarkMenu = class("TeaHouseMemberRemarkMenu", TeaHouse.View)

local KW_ICON_DEFAULT_PNG = "tea_house_member_item_head.png"
local KW_ICON_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_member_view.plist"

TeaHouseMemberRemarkMenu.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberRemarkMenu.csb",
    binding = {
        ["_KW_PANEL_HEAD"] = { tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel" },
        ["_KW_TEXT_NAME"] = { tag = "_KW_TEXT_NAME", name = "_textName", class = "text" },
        ["_KW_TEXT_ID"] = { tag = "_KW_TEXT_ID", name = "_textID", class = "text" },
        ["_KW_PANEL_MASK"] = { tag = "_KW_PANEL_MASK", name = "_panelMask", class = "panel", events = "onMaskClicked" },
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_BTN_SAVE"] = { tag = "_KW_BTN_SAVE", name = "_btnSave", class = "btn", events = "onSaveClicked" },
        ["_KW_TF_REMARK_NAME"] = { tag = "_KW_TF_REMARK_NAME", name = "_tfRemarkName", class = "textfield" },
        ["_KW_TEXT_REMARK_NAME"] = { tag = "_KW_TEXT_REMARK_NAME", name = "_textRemarkName", class = "text" },
        ["_KW_TEXT_REMARK_NAME_TIP"] = { tag = "_KW_TEXT_REMARK_NAME_TIP", name = "_textRemarkNameTip", class = "text" },
        ["_KW_TF_REMARK_WX"] = { tag = "_KW_TF_REMARK_WX", name = "_tfRemarkWX", class = "textfield" },
        ["_KW_TEXT_REMARK_WX"] = { tag = "_KW_TEXT_REMARK_WX", name = "_textRemarkWX", class = "text" },
        ["_KW_TEXT_REMARK_WX_TIP"] = { tag = "_KW_TEXT_REMARK_WX_TIP", name = "_textRemarkWXTip", class = "text" },
        ["_KW_TF_REMARK_PHONE"] = { tag = "_KW_TF_REMARK_PHONE", name = "_tfRemarkPhone", class = "textfield" },
        ["_KW_TEXT_REMARK_PHONE"] = { tag = "_KW_TEXT_REMARK_PHONE", name = "_textRemarkPhone", class = "text" },
        ["_KW_TEXT_REMARK_PHONE_TIP"] = { tag = "_KW_TEXT_REMARK_PHONE_TIP", name = "_textRemarkPhoneTip", class = "text" },
    }
}

function TeaHouseMemberRemarkMenu:ctor(info)
    TeaHouseMemberRemarkMenu.super.ctor(self)

    self._info = info

    self:initUI()
end

function TeaHouseMemberRemarkMenu:onEnter()
    self:initEvents()
end

function TeaHouseMemberRemarkMenu:initEvents()
    local teahouseMember = TeaHouse.manager.teahouseMember
    self:createListener(teahouseMember)
    :addEventListener(teahouseMember.EVENT_PLAYER_CUSTOM_INFO, handler(self, self.onPlayerCustomInfo))

    teahouseMember:reqGetPlayerCustomInfo(self._info.areaid, self._info.numid)
end

function TeaHouseMemberRemarkMenu:initUI()
    if self._panelHead then
        if not self._remoteImage then
            local size = self._panelHead:getContentSize()
            self._remoteImage = TeaHouse.RemoteImage.new()
            :setPosition(size.width / 2, size.height / 2)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 5, size.height - 5)
            :addTo(self._panelHead)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_ICON_DEFAULT_PLIST)
            self._remoteImage:loadTexture(KW_ICON_DEFAULT_PNG, ccui.TextureResType.plistType)
        end
        TeaHouse.SysTool.loadRemoteImage(self._remoteImage, self._info.url, KW_ICON_DEFAULT_PNG, KW_ICON_DEFAULT_PLIST)
    end
    if self._textName then
        self._textName:setString(TeaHouse.StringTool.getTrimName(self._info.nickName, 16))
    end
    if self._textID then
        self._textID:setString("序号：" .. self._info.numid)
    end
    if self._tfRemarkName and self._textRemarkName and self._textRemarkNameTip then
        self._tfRemarkName:setFontColor(cc.c3b(163, 111, 72))
        self._tfRemarkName:setEnabled(false)
        -- self._tfRemarkName:registerScriptEditBoxHandler(function(eventName)
        --     if eventName == "began" then
        --         self._textRemarkName:setVisible(false)
        --         self._textRemarkNameTip:setVisible(false)
        --     elseif eventName == "changed" then
        --         self._textRemarkName:setString(self._tfRemarkName:getText())
        --     elseif eventName == "ended" or eventName == "return" then
        --         local text = self._textRemarkName:getString()
        --         self._textRemarkName:setVisible(true)
        --         self._textRemarkNameTip:setVisible(#text <= 0)
        --     end
        -- end)
    end
    if self._tfRemarkWX and self._textRemarkWX and self._textRemarkWXTip then
        self._tfRemarkWX:setFontColor(cc.c3b(163, 111, 72))
        self._tfRemarkWX:setEnabled(false)
        -- self._tfRemarkWX:registerScriptEditBoxHandler(function(eventName)
        --     if eventName == "began" then
        --         self._textRemarkWX:setVisible(false)
        --         self._textRemarkWXTip:setVisible(false)
        --     elseif eventName == "changed" then
        --         self._textRemarkWX:setString(self._tfRemarkWX:getText())
        --     elseif eventName == "ended" or eventName == "return" then
        --         local text = self._textRemarkWX:getString()
        --         self._textRemarkWX:setVisible(true)
        --         self._textRemarkWXTip:setVisible(#text <= 0)
        --     end
        -- end)
    end
    if self._tfRemarkPhone and self._textRemarkPhone and self._textRemarkPhoneTip then
        self._tfRemarkPhone:setFontColor(cc.c3b(163, 111, 72))
        self._tfRemarkPhone:setEnabled(false)
        -- self._tfRemarkPhone:registerScriptEditBoxHandler(function(eventName)
        --     if eventName == "began" then
        --         self._textRemarkPhone:setVisible(false)
        --         self._textRemarkPhoneTip:setVisible(false)
        --     elseif eventName == "changed" then
        --         self._textRemarkPhone:setString(self._tfRemarkPhone:getText())
        --     elseif eventName == "ended" or eventName == "return" then
        --         local text = self._textRemarkPhone:getString()
        --         self._textRemarkPhone:setVisible(true)
        --         self._textRemarkPhoneTip:setVisible(#text <= 0)
        --     end
        -- end)
    end
    self._btnSave:setVisible(false)
end

function TeaHouseMemberRemarkMenu:onMaskClicked(send, eventType)
    TeaHouse.UITool.onNoActionButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseMemberRemarkMenu:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    self:close()
end

function TeaHouseMemberRemarkMenu:onSaveClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local data = {}
    if self._textRemarkName then
        data.fullName = self._textRemarkName:getString()
    end
    if self._textRemarkWX then
        data.weChat = self._textRemarkWX:getString()
    end
    if self._textRemarkPhone then
        data.phoneNumber = self._textRemarkPhone:getString()
    end
    TeaHouse.manager.teahouseMember:reqSetPlayerCustomInfo(self._info.areaid, self._info.numid, json.encode(data))
end

function TeaHouseMemberRemarkMenu:onPlayerCustomInfo(event)
    local data = event.msg.data
    if data == nil then
        return
    end
    local customData = ""
    if #data > 0 then
        customData = json.decode(data)
    end
    if self._tfRemarkName and self._textRemarkName and self._textRemarkNameTip then
        local fullName = customData.fullName or ""
        self._tfRemarkName:setText(fullName)
        self._textRemarkName:setString(fullName)
        self._textRemarkNameTip:setVisible(#fullName <= 0)
    end
    if self._tfRemarkWX and self._textRemarkWX and self._textRemarkWXTip then
        local weChat = customData.weChat or ""
        self._tfRemarkWX:setText(weChat)
        self._textRemarkWX:setString(weChat)
        self._textRemarkWXTip:setVisible(#weChat <= 0)
    end
    if self._tfRemarkPhone and self._textRemarkPhone and self._textRemarkPhoneTip then
        local phoneNumber = customData.phoneNumber or ""
        self._tfRemarkPhone:setText(phoneNumber)
        self._textRemarkPhone:setString(phoneNumber)
        self._textRemarkPhoneTip:setVisible(#phoneNumber <= 0)
    end
end

return TeaHouseMemberRemarkMenu  �!  