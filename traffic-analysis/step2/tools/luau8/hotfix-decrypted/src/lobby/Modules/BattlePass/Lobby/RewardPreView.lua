local BattlePassRewardPreView = class("BattlePassRewardPreView", XH.ViewBase)

-- UI名字定义
function BattlePassRewardPreView:getCSBPath()
    return "hall/CSB/BattlePass/Lobby/AwardPreView.csb"
end

--- 获得节点的绑定信息
function BattlePassRewardPreView:getBindingInfo()
    return {
        ["_KW_LIST_1"] = {varName = "_list1"},
        ["_KW_LIST_2"] = {varName = "_list2"},
        ["_KW_LIST_3"] = {varName = "_list3"},
        ["_KW_LIST_MODEL"] = {varName = "_listModel"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "close"}
    }
end

function BattlePassRewardPreView:ctor(param)
    param = param or {}
    BattlePassRewardPreView.super.ctor(self, param)
    self._tabIndex = param.tabIndex or 1

    self._listModel:setVisible(false)
    self._list1:setScrollBarEnabled(false)
    self._list2:setScrollBarEnabled(false)
    self._list3:setScrollBarEnabled(false)

    local a = XH.lobby:getModule("BattlePass.Lobby"):getAwardFromLvToLv(self._tabIndex, 0, 100000)
    local a1 = a[1]
    self:sortTable(a1)
    local index = 1
    for _ = 1, math.floor(#a1 / 6) + 1 do
        local listMoel1 = self._listModel:clone()
        self._list1:addChild(listMoel1)
        listMoel1:setVisible(true)
        listMoel1:setScrollBarEnabled(false)
        listMoel1:removeAllChildren()
        for j = index, #a1 do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(a1[j], {})
            listMoel1:pushBackCustomItem(item)
            index = index + 1
        end
    end

    local a2 = a[2]
    self:sortTable(a2)
    local index2 = 1
    for _ = 1, math.floor(#a2 / 6) + 1 do
        local listMoel2 = self._listModel:clone()
        self._list2:pushBackCustomItem(listMoel2)
        listMoel2:setVisible(true)
        listMoel2:setScrollBarEnabled(false)
        listMoel2:removeAllChildren()
        for _ = index2, #a2 do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(a2[index2], {})
            listMoel2:pushBackCustomItem(item)
            index2 = index2 + 1
        end
    end


    local a3 = a[3]
    self:sortTable(a3)
    local index3 = 1
    for _ = 1, math.floor(#a3 / 6) + 1 do
        local listMoel2 = self._listModel:clone()
        self._list3:pushBackCustomItem(listMoel2)
        listMoel2:setVisible(true)
        listMoel2:setScrollBarEnabled(false)
        listMoel2:removeAllChildren()
        for _ = index3, #a3 do
            local item = require("lobby.Modules.BattlePass.AwardItemView").new()
            item:init(a3[index3], {})
            listMoel2:pushBackCustomItem(item)
            index3 = index3 + 1
        end
    end
end

function BattlePassRewardPreView:sortTable(t)
    table.sort(
        t,
        function(a, b)
            if a.awardLv == b.awardLv then
                return tonumber(a.propValue) > tonumber(b.propValue)
            else
                return a.awardLv > b.awardLv
            end
        end
    )
end

return BattlePassRewardPreView
n