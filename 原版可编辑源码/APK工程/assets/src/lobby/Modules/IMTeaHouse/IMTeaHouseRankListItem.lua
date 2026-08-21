---@class IMTeaHouseRankListItem : View
local IMTeaHouseRankListItem = class("IMTeaHouseRankListItem", XH.ViewBase)

local KW_RANK_NUM_DEFAULT_PNGS = {
    "tea_house_rank_1_tag.png",
    "tea_house_rank_2_tag.png",
    "tea_house_rank_3_tag.png"
}
local KW_RANK_NUM_DEFAULT_PLIST = "res/cocosstudio/hall/Image/tea_house_rank_view.plist"

function IMTeaHouseRankListItem:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseRankListItem.csb"
end

function IMTeaHouseRankListItem:getBindingInfo()
    return {       
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", varName = "_panelListItem"},
        ["_KW_IMG_RANK_NUM"] = { tag = "_KW_IMG_RANK_NUM", varName = "_imgRankNum"},
        ["_KW_TEXT_RANK_NUM"] = { tag = "_KW_TEXT_RANK_NUM", varName = "_textRankNum"},
        ["_KW_TEXT_RANK_NAME"] = { tag = "_KW_TEXT_RANK_NAME", varName = "_textRankName"},
        ["_KW_TEXT_RANK_DESC"] = { tag = "_KW_TEXT_RANK_DESC", varName = "_textRankDesc"},
        ["_KW_TEXT_RANK_TIME"] = { tag = "_KW_TEXT_RANK_TIME", varName = "_textRankTime"},
    }
end

function IMTeaHouseRankListItem:ctor()
    IMTeaHouseRankListItem.super.ctor(self)
    if self._panelListItem then
        self._panelListItem:removeFromParent()
        self:addChild(self._panelListItem)
    end
end

function IMTeaHouseRankListItem:getSize()
    if self._panelListItem ~= nil then
        return self._panelListItem:getContentSize()
    end
    return cc.size(0, 0)
end

function IMTeaHouseRankListItem:setRankNum(num)
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

function IMTeaHouseRankListItem:setRankName(name, numid)
    if self._textRankName then
        self._textRankName:setString(XH.StringTool.cutStringByLength(name,12) .. "(" .. numid .. ")")
    end
end

function IMTeaHouseRankListItem:setRankDesc(desc)
    if self._textRankDesc then
        self._textRankDesc:setString(desc)
    end
end

function IMTeaHouseRankListItem:setRankTime(time)
    if self._textRankTime then
        if time ~= nil then
            self._textRankTime:setString(os.date("%Y-%m-%d %H:%M:%S", time))
        else
            self._textRankTime:setString(os.date("-------- --:--:--", time))
        end
    end
end

function IMTeaHouseRankListItem:updateInfoEx(type, info)
    self:setRankName(info.stUser.acNickName, info.stUser.nNumId)
    self:setRankNum(info.nRank)
    self:setRankDesc(info.nScore)
    local _, jsonData = xpcall(cjson.decode, __G__TRACKBACK__, info.stUser.acExtraData)
    if jsonData then
        self:setRankTime(jsonData.lastfighttime)
    else
        self:setRankTime()
    end
end

return IMTeaHouseRankListItem