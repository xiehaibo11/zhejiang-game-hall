---@class TeaHouseRankListItem2 : View
local TeaHouseRankListItem2 = class("TeaHouseRankListItem2",XH.ViewBase)

local KW_RANK_NUM_DEFAULT_PNGS = {
    "tea_house_rank_1_tag.png",
    "tea_house_rank_2_tag.png",
    "tea_house_rank_3_tag.png"
}
local KW_RANK_NUM_DEFAULT_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_list_view.plist"

function TeaHouseRankListItem2:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/TeaHouseRankListItem2.csb"
end

function TeaHouseRankListItem2:getBindingInfo()
    return {       
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", varName = "_panelListItem"},
        ["_KW_IMG_RANK_NUM"] = { tag = "_KW_IMG_RANK_NUM", varName = "_imgRankNum"},
        ["_KW_TEXT_RANK_NUM"] = { tag = "_KW_TEXT_RANK_NUM", varName = "_textRankNum"},
        ["_KW_TEXT_RANK_NAME"] = { tag = "_KW_TEXT_RANK_NAME", varName = "_textRankName"},
        ["_KW_TEXT_RANK_DESC_1"] = { tag = "_KW_TEXT_RANK_DESC_1", varName = "_textRankDesc1"},
        ["_KW_TEXT_RANK_DESC_2"] = { tag = "_KW_TEXT_RANK_DESC_2", varName = "_textRankDesc2"},
        ["_KW_TEXT_RANK_DESC_3"] = { tag = "_KW_TEXT_RANK_DESC_3", varName = "_textRankDesc3"},
    }
end


TeaHouseRankListItem2.RAW_RES_BINDING_CSB = {
    binding = {
        ["_KW_PANEL_LIST_ITEM"] = { tag = "_KW_PANEL_LIST_ITEM", name = "_panelListItem", class = "panel" },
        ["_KW_IMG_RANK_NUM"] = { tag = "_KW_IMG_RANK_NUM", name = "_imgRankNum", class = "img" },
        ["_KW_TEXT_RANK_NUM"] = { tag = "_KW_TEXT_RANK_NUM", name = "_textRankNum", class = "text" },
        ["_KW_TEXT_RANK_NAME"] = { tag = "_KW_TEXT_RANK_NAME", name = "_textRankName", class = "text" },
        ["_KW_TEXT_RANK_DESC_1"] = { tag = "_KW_TEXT_RANK_DESC_1", name = "_textRankDesc1", class = "text" },
        ["_KW_TEXT_RANK_DESC_2"] = { tag = "_KW_TEXT_RANK_DESC_2", name = "_textRankDesc2", class = "text" },
        ["_KW_TEXT_RANK_DESC_3"] = { tag = "_KW_TEXT_RANK_DESC_3", name = "_textRankDesc3", class = "text" },
    }
}

function TeaHouseRankListItem2:ctor()
    TeaHouseRankListItem2.super.ctor(self)

    if self._panelListItem then
        self._panelListItem:removeFromParent()
        self:addChild(self._panelListItem)
    end
end

function TeaHouseRankListItem2:getSize()
    if self._panelListItem ~= nil then
        return self._panelListItem:getContentSize()
    end
    return cc.size(0, 0)
end

function TeaHouseRankListItem2:setRankNum(num)
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

function TeaHouseRankListItem2:setRankName(name, numid)
    if self._textRankName then
        self._textRankName:setString(XH.StringTool.cutStringByLength(name,12) .. "(" .. numid .. ")")
    end
end

function TeaHouseRankListItem2:setRankDesc(desc1, desc2, desc3)
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

function TeaHouseRankListItem2:updateInfo(type, info, index)
    self:setRankName(info.nickname, info.numid)
    self:setRankNum(index)
    -- local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    -- if SwitchConfig and SwitchConfig.ScoreRankWithAll == 1 then
    --     self:setRankDesc(info.totalScore, info.totalRoomCnt, info.bigWinCnt)
    -- else
    self:setRankDesc(info.totalScore, info.totalWinScore, info.totalLoseScore)
    -- end
end

return TeaHouseRankListItem2l