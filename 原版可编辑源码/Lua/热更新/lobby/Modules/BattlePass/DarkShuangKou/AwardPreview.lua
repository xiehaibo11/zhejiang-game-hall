local BattlePassDarkShuangKouAwardPreview = class("BattlePassDarkShuangKouAwardPreview", XH.ViewBase)

local uiInfo = {
    {bg = "BattlePass3_Img_1.png"},
    {bg = "BattlePass3_Img_2.png"},
    {bg = "BattlePass3_Img_3.png"}
}

-- UI名字定义
function BattlePassDarkShuangKouAwardPreview:getCSBPath()
    return "hall/CSB/BattlePass/DarkShuangKou/AwardPreview.csb"
end

--- 获得节点的绑定信息
function BattlePassDarkShuangKouAwardPreview:getBindingInfo()
    return {
        ["_KW_LIST_1"] = {varName = "_list1"},
        ["_KW_LIST_2"] = {varName = "_list2"},
        ["_KW_IMG_BG"] = {varName = "_imgBg"},
        ["_KW_LIST_MODEL"] = {varName = "_listModel"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "close"}
    }
end

function BattlePassDarkShuangKouAwardPreview:ctor(param)
    param = param or {}
    BattlePassDarkShuangKouAwardPreview.super.ctor(self, param)
    self._tabIndex = param.tabIndex or 1

    self._imgBg:loadTexture(uiInfo[self._tabIndex].bg, ccui.TextureResType.plistType)
    self._listModel:setVisible(false)
    self._list1:setScrollBarEnabled(false)
    self._list2:setScrollBarEnabled(false)

    local a = XH.lobby:getModule("BattlePass.DarkShuangKou"):getAwardFromLvToLv(self._tabIndex, 0, 100000)
    local a1 = a[1]
    self:sortTable(a1)
    local index = 1
    for _ = 1, math.floor((#a1 - 1) / 6) + 1 do
        local listMoel1 = self._listModel:clone()
        self._list1:addChild(listMoel1)
        listMoel1:setVisible(true)
        listMoel1:setScrollBarEnabled(false)
        listMoel1:removeAllChildren()
        for j = index, math.min(#a1, index + 5) do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(a1[j], {})
            listMoel1:pushBackCustomItem(item)
            index = index + 1
        end
    end

    local a2 = XH.lobby:getModule("BattlePass"):mergeAwardList(a[2], a[3])
    self:sortTable(a2)
    local index2 = 1
    for _ = 1, math.floor((#a2 - 1) / 6) + 1 do
        local listMoel2 = self._listModel:clone()
        self._list2:pushBackCustomItem(listMoel2)
        listMoel2:setVisible(true)
        listMoel2:setScrollBarEnabled(false)
        listMoel2:removeAllChildren()
        for _ = index2, math.min(#a2, index2 + 5) do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(a2[index2], {})
            listMoel2:pushBackCustomItem(item)
            index2 = index2 + 1
        end
    end
end

function BattlePassDarkShuangKouAwardPreview:sortTable(t)
    table.sort(
        t,
        function(a, b)
            if a.awardLv == b.awardLv then
                return a.propId > b.propId
            else
                return a.awardLv > b.awardLv
            end
        end
    )
end

return BattlePassDarkShuangKouAwardPreview
