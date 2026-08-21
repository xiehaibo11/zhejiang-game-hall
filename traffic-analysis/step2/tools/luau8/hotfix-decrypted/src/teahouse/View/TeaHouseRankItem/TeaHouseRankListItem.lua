---@class TeaHouseRankListItem : View
local TeaHouseRankListItem = class("TeaHouseRankListItem", TeaHouse.View)

local KW_RANK_NUM_DEFAULT_PNGS = {
    "tea_house_rank_1_tag.png",
    "tea_house_rank_2_tag.png",
    "tea_house_rank_3_tag.png"
}
local KW_RANK_NUM_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_list_view.plist"

TeaHouseRankListItem.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRankItem/TeaHouseRankListItem.csb",
    binding = {
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_IMG_RANK_NUM"] = { tag = "_KW_IMG_RANK_NUM", name = "_imgRankNum", class = "img" },
        ["_KW_TEXT_RANK_NUM"] = { tag = "_KW_TEXT_RANK_NUM", name = "_textRankNum", class = "text" },
        ["_KW_TEXT_RANK_NAME"] = { tag = "_KW_TEXT_RANK_NAME", name = "_textRankName", class = "text" },
        ["_KW_TEXT_RANK_DESC"] = { tag = "_KW_TEXT_RANK_DESC", name = "_textRankDesc", class = "text" },
        ["_KW_TEXT_RANK_TIME"] = { tag = "_KW_TEXT_RANK_TIME", name = "_textRankTime", class = "text" },
    }
}

function TeaHouseRankListItem:ctor()
    TeaHouseRankListItem.super.ctor(self)

    if self._panelListItem then
        self._panelListItem:removeFromParent()
        self:addChild(self._panelListItem)
    end
end

function TeaHouseRankListItem:getSize()
    if self._panelListItem ~= nil then
        return self._panelListItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseRankListItem:setRankNum(num)
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

function TeaHouseRankListItem:setRankName(name, numid)
    local teahouseSwitch = TeaHouse.manager.configManager.SwitchConfig
    if self._textRankName then
        if teahouseSwitch and teahouseSwitch.RankWithIds == 1 and numid then
            self._textRankName:setString(TeaHouse.StringTool.getTrimName(name, 12) .. "(" .. numid .. ")")
        else
            self._textRankName:setString(TeaHouse.StringTool.getTrimName(name, 12))
        end
    end
end

function TeaHouseRankListItem:setRankDesc(desc)
    if self._textRankDesc then
        self._textRankDesc:setString(desc)
    end
end

function TeaHouseRankListItem:setRankTime(time)
    if self._textRankTime then
        if time ~= nil then
            self._textRankTime:setString(os.date("%Y-%m-%d %H:%M:%S", time))
        else
            self._textRankTime:setString(os.date("-------- --:--:--", time))
        end
    end
end

function TeaHouseRankListItem:updateInfo(type, info)
    self:setRankName(info.stUserInfo.nickName, info.stUserInfo.numid)
    self:setRankNum(info.nRank)
    self:setRankDesc(info.nScore)
    self:setRankTime(info.stUserInfo.nLastFightTime)
end

function TeaHouseRankListItem:updateInfoEx(type, info)
    self:setRankName(info.stUser.acNickName, info.stUser.nNumId)
    self:setRankNum(info.nRank)
    self:setRankDesc(info.nScore)
    local _, jsonData = xpcall(cjson.decode, __G__TRACKBACK__, info.stUser.acExtraData)
    if jsonData then
        self:setRankTime(jsonData.lastfighttime)
    else
        self:setRankTime()
    end
    if info.isHideLastFight then
        self._textRankTime:setString("")
    end
end

return TeaHouseRankListItemn