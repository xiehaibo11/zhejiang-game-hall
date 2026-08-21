---@class TeaHouseMemberListItemEx : View
local TeaHouseMemberListItemEx = class("TeaHouseMemberListItemEx", import(".TeaHouseMemberListItem"))

TeaHouseMemberListItemEx.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseMemberItem/TeaHouseMemberListItemEx.csb",
    binding = {
        ["_KW_IMG_LIST_ITEM"] = {tag = "_KW_IMG_LIST_ITEM", name = "_imgListItem", class = "img"},
        ["_KW_PANEL_HEAD"] = {tag = "_KW_PANEL_HEAD", name = "_panelHead", class = "panel"},
        ["_KW_IMG_ADMIN_TAG"] = {tag = "_KW_IMG_ADMIN_TAG", name = "_imgAdminTag", class = "img"},
        ["_KW_IMG_BLACK_TAG"] = {tag = "_KW_IMG_BLACK_TAG", name = "_imgBlackTag", class = "img"},
        ["_KW_TEXT_NAME"] = {tag = "_KW_TEXT_NAME", name = "_textName", class = "text"},
        ["_KW_TEXT_INDEX"] = {tag = "_KW_TEXT_INDEX", name = "_textIndex", class = "text"},
        ["_KW_JOIN_TIME"] = {tag = "_KW_JOIN_TIME", name = "_textJoinTime", class = "text"},
        ["_KW_ONLINE_TIME"] = {tag = "_KW_ONLINE_TIME", name = "_textOnlineTime", class = "text"},
        ["_KW_TEXT_NEW_COST"] = {tag = "_KW_TEXT_NEW_COST", name = "_textNewCost", class = "text"},
        ["_KW_TEXT_OLD_COST"] = {tag = "_KW_TEXT_OLD_COST", name = "_textOldCost", class = "text"},
        ["_KW_TF_MAX_COST"] = {tag = "_KW_TF_MAX_COST", name = "_tfMaxCost", class = "textfield"},
        ["_KW_TEXT_MAX_COST"] = {tag = "_KW_TEXT_MAX_COST", name = "_textMaxCost", class = "text"},
        ["_KW_TEXT_MAX_COST_TIP"] = {tag = "_KW_TEXT_MAX_COST_TIP", name = "_textMaxCostTip", class = "text"},
        ["_KW_IMG_MAX_COST_BG"] = {tag = "_KW_IMG_MAX_COST_BG", name = "_imgMaxCostBg", class = "text"},
        ["_KW_BTN_MODIFY"] = {tag = "_KW_BTN_MODIFY", name = "_btnModify", class = "btn", events = "onModifyClicked"},
        ["_KW_BTN_MANAGE"] = {tag = "_KW_BTN_MANAGE", name = "_btnManage", class = "btn", events = "onManageClicked"},
        ["_KW_NODE_POP_POSITOIN"] = {tag = "_KW_NODE_POP_POSITOIN", name = "_nodePopPosition", class = "node"},

        ["_KW_TEXT_VISUAL_CARD"] = {tag = "_KW_TEXT_VISUAL_CARD", name = "_textVisualCard", class = "text"},
        ["_KW_TEXT_REAL_CARD"] = {tag = "_KW_TEXT_REAL_CARD", name = "_textRealCard", class = "text"},
        ["_KW_BTN_MODIFY_VISUAL_CARD"] = {tag = "_KW_BTN_MODIFY_VISUAL_CARD", name = "_btnModifyVisual", class = "btn", events = "onModifyClicked"},
        ["_KW_BTN_MODIFY_REAL_CARD"] = {tag = "_KW_BTN_MODIFY_REAL_CARD", name = "_btnModifyReal", class = "btn", events = "onModifyClicked"},
        ["_KW_BTN_MODIFY_VISUAL_CARD_DIS"] = {
            tag = "_KW_BTN_MODIFY_VISUAL_CARD_DIS",
            name = "_btnModifyVisualDis",
            class = "btn",
            events = "onModifyClickedDis"
        },
        ["_KW_BTN_MODIFY_REAL_CARD_DIS"] = {
            tag = "_KW_BTN_MODIFY_REAL_CARD_DIS",
            name = "_btnModifyRealDis",
            class = "btn",
            events = "onModifyClickedDis"
        }
    }
}

function TeaHouseMemberListItemEx:ctor()
    TeaHouseMemberListItemEx.super.ctor(self)
end

function TeaHouseMemberListItemEx:initUI()
    TeaHouseMemberListItemEx.super.initUI(self)
end

function TeaHouseMemberListItemEx:updateState()
    TeaHouseMemberListItemEx.super.updateState(self)
    self._imgMaxCostBg:setVisible(false)
    self._textVisualCard:setString(TeaHouse.manager.teaHouseVisualCardTransferModule:getMemberCardNum(self._info, true))
    self._textRealCard:setString(TeaHouse.manager.teaHouseVisualCardTransferModule:getMemberCardNum(self._info, false))
    local isVisualMode = TeaHouse.manager.teaHouseVisualCardTransferModule:isVisualCardMode()

    local isHavePower = self._btnModify:isVisible()

    self._btnModifyVisual:setVisible(isVisualMode and isHavePower)
    self._btnModifyVisualDis:setVisible(not isVisualMode and isHavePower)
    self._btnModifyRealDis:setVisible(isVisualMode and isHavePower)
    self._btnModifyReal:setVisible(not isVisualMode and isHavePower)
end

function TeaHouseMemberListItemEx:onModifyClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- local isVisualMode = TeaHouse.manager.teaHouseVisualCardTransferModule:isVisualCardMode()
    -- if send == self._btnModifyVisual then
    --     if not isVisualMode then
    --         TeaHouse.TipTool.showToast("旧房卡已不可用，近期会关闭展示")
    --         return
    --     end
    -- elseif send == self._btnModifyReal then
    --     if isVisualMode then
    --         TeaHouse.TipTool.showToast("请先转换为新房卡模式")
    --         return
    --     end
    -- end
    TeaHouseMemberListItemEx.super.onModifyClicked(self, send, eventType)
end
function TeaHouseMemberListItemEx:onModifyClickedDis(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if send == self._btnModifyVisualDis then
        TeaHouse.TipTool.showToast("旧房卡已不可用，近期会关闭展示")
    elseif send == self._btnModifyRealDis then
        TeaHouse.TipTool.showToast("请先转换为新房卡模式")
    end
end
return TeaHouseMemberListItemEx
