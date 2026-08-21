local TeaHouseOperateLogView = class("TeaHouseOperateLogView", TeaHouse.View)

TeaHouseOperateLogView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseOperateLogView.csb",
    binding = {
        ["_KW_BTN_CLOSE"] = { tag = "_KW_BTN_CLOSE", name = "_btnClose", class = "btn", events = "onCloseClicked" },
        ["_KW_LIST_VIEW"] = { tag = "_KW_LIST_VIEW", name = "_listView", class = "panel" },
        ["_KW_ITEM_LOG"] = { tag = "_KW_ITEM_LOG", name = "_itemLog", class = "panel" },
    }
}

function TeaHouseOperateLogView:ctor(param)
    TeaHouseOperateLogView.super.ctor(self)
    self._logs = param.log or {}
    self:initUI()
end

function TeaHouseOperateLogView:initUI()
    if self._listView and self._itemLog then
        self._listView:setItemModel(self._itemLog)
    end
    
    for i,v in pairs(self._logs) do
        if v.oper_type == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.ADD_PLAYERFEE then
            self._logs[i].needHide = true
        end
    end
    for _, v in pairs(self._logs) do
        if not v.needHide then
            self._listView:pushBackDefaultItem()
            local tmpItems = self._listView:getItems()
            TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_TIME", self:formatTime(v.time))
            if v.oper_type and v.oper_type == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.TRANSFERCARD_TO_PLAYER then
                TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_PERSON_TYPE", "为玩家")
                TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_NAME", self:formatNick(v.player_nick))
                TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_ID", "(" .. v.player_numid .. ")")
            else
                if v.oper_right == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.RIGHT.MANAGER then
                    TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_PERSON_TYPE", "副领队")
                else
                    TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_PERSON_TYPE", "领队")
                end
                TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_NAME", self:formatNick(v.oper_nick))
                TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_ID", "(" .. v.oper_numid .. ")")
            end
            TeaHouse.BridgeUI.setText(tmpItems[#tmpItems], "KW_TXT_OPERATE", self:formatComments(v.comments, v.oper_type))
            tmpItems[#tmpItems]:setVisible(true)
        end
    end
end

function TeaHouseOperateLogView:formatTime(time)
    if not time or time <= 0 then
        return ""
    end
    local month = os.date("%m", time)
    local day = os.date("%d", time)
    local hour = os.date("%H", time)
    local minute = os.date("%M", time)
    local timeStr = month .. "-" .. day .. " " .. hour .. ":" .. minute
    return timeStr
end

function TeaHouseOperateLogView:formatNick(nick)
    if not nick then
        return ""
    end
    return TeaHouse.BridgeString.cutStringByLength(clone(nick), 8)
end

function TeaHouseOperateLogView:formatComments(comments, operType)
    if not comments then
        return ""
    end
    local tmp = string.split(comments, ",")
    for i = 1, #tmp do
        if string.find(tmp[i], "propcount=") then
            local num = string.sub(tmp[i], string.len("propcount=") + 1)
            if num then
                if operType and operType == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.AUTO_TRANSFERCARD_LOBBY then
                    return "自动补卡" .. num .. "张到比赛场"
                else
                    return "补卡" .. num .. "张到比赛场"
                end
            end
        elseif string.find(tmp[i], "nAddCnt=") then
            local num = string.sub(tmp[i], string.len("nAddCnt=") + 1)
            if num then
                if operType and operType == TeaHouse.TeaHouseProtocol.RespTeaAndPlayerOperation.OPERTYPE.TRANSFERCARD_TO_PLAYER then
                    return "手动划卡" .. num .. "张"
                end
            end
        end
    end
    return ""
end

function TeaHouseOperateLogView:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

return TeaHouseOperateLogViewy