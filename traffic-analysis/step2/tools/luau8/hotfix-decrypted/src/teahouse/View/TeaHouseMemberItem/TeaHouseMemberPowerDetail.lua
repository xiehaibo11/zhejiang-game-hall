local TeaHouseMemberPowerDetail = class("TeaHouseMemberPowerDetail", TeaHouse.View)

local MemberPowerText = {
    POWER_MEMBER = "成员审批：在成员列表里同意新加入成员或踢出成员",
    DISMISS_TABLE = "解散桌子：游戏开局前解散成员牌桌",
    EDIT_MEMBER_CARD = "消耗设置：不同模式下在成员列表里给成员设置消耗数量",
    EDIT_RECORD = "战绩管理：未完成战绩中点击完成",
    RANK_SETTING = "排行榜设置：设置排行榜是否给玩家可见",
    EDIT_INVENTORY_CARD = "库存划卡：可将自己个人游戏账号房卡划入比赛场"
}

TeaHouseMemberPowerDetail.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberPowerExplain.csb",
    binding = {
        ["_KW_POWER_DETAIL"] = { tag = "_KW_POWER_DETAIL", name = "_powerDetailList"},
        ["_KW_POWER_TEXT_PANEL"] = { tag = "_KW_POWER_TEXT_PANEL", name = "_powerTextPanel", class = "panel"},
        ["_KW_POWER_EXPLAIN_TEXT"] = { tag = "_KW_POWER_EXPLAIN_TEXT", name = "_powerExplainText"},
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", events = "onClose"},
    }
}

function TeaHouseMemberPowerDetail:ctor(info)
    TeaHouseMemberPowerDetail.super.ctor(self)

    self._powerList = info
    self._powerDetailList:setScrollBarOpacity(0)
    self:initUI()
    
end

function TeaHouseMemberPowerDetail:initUI()
    if self._powerList then
        for _,v in ipairs(self._powerList) do
            local tempPower = self._powerTextPanel:clone()
            tempPower:getChildByName("_KW_POWER_EXPLAIN_TEXT"):setString(MemberPowerText[v])
            self._powerDetailList:addChild(tempPower)
        end
    end
end

function TeaHouseMemberPowerDetail:onClose(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

return TeaHouseMemberPowerDetail�