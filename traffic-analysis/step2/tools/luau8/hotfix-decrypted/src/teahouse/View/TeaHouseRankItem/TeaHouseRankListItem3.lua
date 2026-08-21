---@class TeaHouseRankListItem3 : View
local TeaHouseRankListItem3 = class("TeaHouseRankListItem3", TeaHouse.View)

local KW_RANK_NUM_DEFAULT_PNGS = {
    "tea_house_rank_1_tag.png",
    "tea_house_rank_2_tag.png",
    "tea_house_rank_3_tag.png"
}
local KW_RANK_NUM_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_list_view.plist"
local KW_TAB_TYPE_PEAK_RACE = 6

TeaHouseRankListItem3.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRankItem/TeaHouseRankListItem3.csb",
    binding = {
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_IMG_RANK_NUM"] = { tag = "_KW_IMG_RANK_NUM", name = "_imgRankNum", class = "img" },
        ["_KW_TEXT_RANK_NUM"] = { tag = "_KW_TEXT_RANK_NUM", name = "_textRankNum", class = "text" },
        ["_KW_TEXT_RANK_NAME"] = { tag = "_KW_TEXT_RANK_NAME", name = "_textRankName", class = "text" },
        ["_KW_TEXT_RANK_DESC_1"] = { tag = "_KW_TEXT_RANK_DESC_1", name = "_textRankDesc1", class = "text" },
        ["_KW_TEXT_RANK_DESC_2"] = { tag = "_KW_TEXT_RANK_DESC_2", name = "_textRankDesc2", class = "text" },
        ["_KW_TEXT_RANK_DESC_3"] = { tag = "_KW_TEXT_RANK_DESC_3", name = "_textRankDesc3", class = "text" },
        ["_KW_BTN_DIANZAN"] = { tag = "_KW_BTN_DIANZAN", name = "_btnDianZan", class = "btn", events = "onBtnEventDianZan" },
    }
}

function TeaHouseRankListItem3:ctor()
    TeaHouseRankListItem3.super.ctor(self)

    if self._panelListItem then
        self._panelListItem:removeFromParent()
        self:addChild(self._panelListItem)
    end
end


function TeaHouseRankListItem3:onBtnEventDianZan(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.lobby:getModule("FinishBillClose"):reqFinishBillClose(1, {
        to_user_id = self._info.stUser.nNumId or 0,
        like_type = 1
    })
end

function TeaHouseRankListItem3:getSize()
    if self._panelListItem ~= nil then
        return self._panelListItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseRankListItem3:setRankNum(num)
    if num > 3 then
        if self._imgRankNum then
            self._imgRankNum:setVisible(false)
        end
        if self._textRankNum then
            self._textRankNum:setVisible(true)
            self._textRankNum:setString(num)
        end
    else
        if self._imgRankNum then
            self._imgRankNum:setVisible(true)
            cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_RANK_NUM_DEFAULT_PLIST)
            self._imgRankNum:loadTexture(KW_RANK_NUM_DEFAULT_PNGS[num], ccui.TextureResType.plistType)
        end
        if self._textRankNum then
            self._textRankNum:setVisible(false)
        end
    end
end

function TeaHouseRankListItem3:setRankName(name, numid)
    local teahouseSwitch = TeaHouse.manager.configManager.SwitchConfig
    if self._textRankName then
        if teahouseSwitch and teahouseSwitch.RankWithIds == 1 and numid then
            self._textRankName:setString(TeaHouse.StringTool.getTrimName(name, 12) .. "(" .. numid .. ")")
        else
            self._textRankName:setString(TeaHouse.StringTool.getTrimName(name, 12))
        end
    end
end

function TeaHouseRankListItem3:setRankDesc(desc1, desc2, desc3)
    if self._textRankDesc1 then
        self._textRankDesc1:setString(desc1)
    end
    if self._textRankDesc2 then
        self._textRankDesc2:setString(desc2)
    end
    if self._textRankDesc3 then
        self._textRankDesc3:setString(desc3)
    end
end

function TeaHouseRankListItem3:updateInfoEx(...)
    self:updateInfo(...)
end

function TeaHouseRankListItem3:updateInfo(type, info, likeUserIds, showDianzanByDate)
    self._info = info
    self:setRankName(info.stUser.acNickName, info.stUser.nNumId)
    self:setRankNum(info.nRank)
    self:setRankDesc(info.srcData.leaderLikeCount , info.srcData.playerLikeCount , info.srcData.likeScore)
    local isPeakRaceTab = type == KW_TAB_TYPE_PEAK_RACE
    local allowDianzan = (showDianzanByDate ~= false) and not isPeakRaceTab
    local isEnabled = true
    for i,v in ipairs(likeUserIds or {}) do
        if v == info.stUser.nNumId then
            isEnabled = false
            break
        end
    end
    if self._btnDianZan then
        self._btnDianZan:setVisible(allowDianzan)
        self._btnDianZan:setEnabled(isEnabled)
    end
end

return TeaHouseRankListItem3