-- 选择需要创建的比赛场
local TeaHouseCardModeTransferView = class("TeaHouseCardModeTransferView", TeaHouse.View)

TeaHouseCardModeTransferView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseCardModeTransferView.csb",
    binding = {
        ["_btnClose"] = {tag = "_btnClose", name = "_btnClose", class = "btn", events = "onCloseClicked"},
        ["_btnSure"] = {tag = "_btnSure", name = "_btnSure", class = "btn", events = "onSureClicked"},
        ["_btnKF"] = {tag = "_btnKF", name = "_btnKF", class = "btn", events = "onkeFuClicked"},
        ["_txtAwardNum"] = {tag = "_txtAwardNum", name = "_txtAwardNum", class = "text"},
        ["_txtContent"] = {tag = "_txtContent", name = "_txtContent", class = "text"},
        ["_panelAward"] = {tag = "_panelAward", name = "_panelAward", class = "text"},
        ["_list"] = {tag = "_list", name = "_list", class = "listview"}
    }
}

function TeaHouseCardModeTransferView:ctor(data)
    TeaHouseCardModeTransferView.super.ctor(self)
    self._isAuto = data and data.isAuto
    local teahouseMain = TeaHouse.manager.teahouseMain
    self:createListener(teahouseMain)
    :addEventListener(teahouseMain.EVENT_PAY_MODE_UPDATE, handler(self, self.onSetupUpdateNotify))

    local tip = TeaHouse.manager.teaHouseVisualCardTransferModule:getNotice()
    local tempTip = table.concat(tip, "")
    tempTip = string.gsub(tempTip, "<", "")
    -- {
    --     "xx年x月x日10:00起，比赛场", "<玩家可用房卡模式", "将进行调整届时玩家的", "<(旧)可用房卡",
    --     "将会调整为使用", "<(新)可用房卡", "，房间对局会消耗玩家的(新)可用房卡，且", "<不再消耗比赛场房卡",
    --     "。但为玩家增加(新)可用房卡时需要扣除比赛场房卡。为了不影响您的正常对局，请您尽快为玩家转入(新)可用房卡并完成模式转换，提前转换有奖哦~"
    -- }
    local lable = cc.Label:createWithTTF(tempTip, "cocosStudio/Common/Font/fangzhengcuyuan.TTF", 46)
    lable:setDimensions(1260, 0)
    lable:setColor(cc.c3b(0,0,0))
    lable:setPosition(display.cx, display.cy)
    
    -- self:addChild(lable)

    local allTips = {}
    for i, v in ipairs(tip) do
        local content = v
        local isRed = string.sub(content, 1, 1) == "<"
        if isRed then
            content = string.sub(content, 2, #content)
        end
        allTips[i] = self:getRichContent(content, isRed and '#f03737' or '#b97345')
    end
    local richText = ccui.RichText:createWithXML(table.concat(allTips, ""), {})
    richText:setAnchorPoint(cc.p(0, 1))
    richText:ignoreContentAdaptWithSize(false)
    richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
    local contentSize = self._list:getContentSize()
    richText:setContentSize(contentSize.width, 0)
    self._txtContent:getParent():addChild(richText)
    self._txtContent:getParent():setContentSize(contentSize.width, lable:getContentSize().height)
    richText:setPosition(0, lable:getContentSize().height)
    local awardNum = TeaHouse.manager.teaHouseVisualCardTransferModule:getTransferAwardCount()
    self._txtAwardNum:setString(awardNum)
    self._panelAward:setVisible(awardNum and awardNum > 0)

    XH.NewThrowDataManager:throwData("lys25121802", {
        club_id = XH.areaData:getAreaID() .. "_" .. TeaHouse.manager.teahouseData:getTeaNumber(),
        page_item_id = self._isAuto and "自动" or "手动"
    })
end

function TeaHouseCardModeTransferView:onSetupUpdateNotify()
    self:close()
end

function TeaHouseCardModeTransferView:cleanup()
    TeaHouseCardModeTransferView.super.cleanup(self)
end

function TeaHouseCardModeTransferView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function TeaHouseCardModeTransferView:onSureClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    TeaHouse.manager.viewManager:openView("TeaHouseCardModeTransferSecondView")
end

function TeaHouseCardModeTransferView:onkeFuClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.Bridge:getModule("CusService"):oponCusServerView(nil, "TEA_CARD_MODE_TRANSFER")
end

function TeaHouseCardModeTransferView:getRichContent(content, color, font)
    return string.format("<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='%s' color='%s'>%s</font>", font or 46, color, content)
end
return TeaHouseCardModeTransferView
