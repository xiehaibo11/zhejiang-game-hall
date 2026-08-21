local TableInfoUI = CF.gameClass("TableInfoUI", CF.ViewBase)

function TableInfoUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ShuKe/TableInfo.csb"
end

function TableInfoUI:getBindingInfo()
    return {
        ["_KW_TEXT_LAO_ZHUANG"] = {varName="_textLaozhaung"},
        ["_WK_PANEL_KUNG_1"] = {varName="_kungPanel_1"},
        ["_WK_PANEL_KUNG_2"] = {varName="_kungPanel_2"},
        ["_WK_PANEL_KUNG_3"] = {varName="_kungPanel_3"},
        ["_WK_PANEL_KUNG_4"] = {varName="_kungPanel_4"},
        ["_KW_FNT_WIN_NUM_1"] = {varName="_textWin_1"},
        ["_KW_FNT_WIN_NUM_2"] = {varName="_textWin_2"},
        ["_KW_FNT_WIN_NUM_3"] = {varName="_textWin_3"},
        ["_KW_FNT_WIN_NUM_4"] = {varName="_textWin_4"},
        ["_KW_FNT_LOSE_NUM_1"] = {varName="_textLost_1"},
        ["_KW_FNT_LOSE_NUM_2"] = {varName="_textLost_2"},
        ["_KW_FNT_LOSE_NUM_3"] = {varName="_textLost_3"},
        ["_KW_FNT_LOSE_NUM_4"] = {varName="_textLost_4"},
    }
end

function TableInfoUI:ctor(param)
    param = param or {}
	TableInfoUI.super.ctor(self,param)

end

function TableInfoUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_LAO_ZHUANG", callBack = "onUpdateLaoZhaung"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_ALL_INFO", callBack = "onClearAllInfo"},
        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SHOW_KUNG_SCORE_ANI", callBack = "onShowKungScoreAni"},
    }
end

--更新牢庄信息
function TableInfoUI:onUpdateLaoZhaung(event)
    if event.msg == nil then
        return
    end
    if event.msg.value == nil then
        return
    end
    self._textLaozhaung:setText("连庄:" .. event.msg.value)
end

--初始化全部数据
function TableInfoUI:onClearAllInfo(event)
    self._textLaozhaung:setText("连庄:--")
end

--杠分动画
function TableInfoUI:onShowKungScoreAni(event)
    local kungScore = event.msg.score
    local panelUI = {"_kungPanel_1", "_kungPanel_2", "_kungPanel_3", "_kungPanel_4"}
    local winTxtUI = {"_textWin_1", "_textWin_2", "_textWin_3", "_textWin_4"}
    local lostTxtUI = {"_textLost_1", "_textLost_2", "_textLost_3", "_textLost_4"}
    for i = 0, CF.roomData:getChairs() - 1 do
        local localSeat =CF.roomData:seatToLocal(i)
        local scoreUI = self[panelUI[localSeat]]
        if scoreUI then
            scoreUI:setVisible(true)
            if kungScore[i] > 0 then
                self[winTxtUI[localSeat]]:setText("+" .. kungScore[i])
            elseif kungScore[i] < 0 then
                self[lostTxtUI[localSeat]]:setText(kungScore[i])
            end
            self[winTxtUI[localSeat]]:setVisible(kungScore[i] > 0)
            self[lostTxtUI[localSeat]]:setVisible(kungScore[i] < 0)

            CF.SysTool.performWithDelayGlobal(function()
                scoreUI:setOpacity(255)
                scoreUI:setVisible(false)
            end,1.4)

            local appearAction = cc.Sequence:create(
                cc.FadeIn:create(0.2),
                cc.DelayTime:create(1),
                cc.FadeOut:create(0.2)
            )
            scoreUI:runAction(appearAction)
        end
    end
end

return TableInfoUI