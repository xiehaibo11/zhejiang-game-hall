local TableInfoLayer = CF.gameClass("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/RuiAn/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_PANEL_MDD_INFO"] = {varName="_panelInfo"},
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

function TableInfoLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SHOW_KUNG_SCORE_ANI", callBack = "onShowKungScoreAni"},
    }
end

--杠分动画
function TableInfoLayer:onShowKungScoreAni(event)
    local kungScore = event.msg
    local panelUI = {"_kungPanel_1", "_kungPanel_2", "_kungPanel_3", "_kungPanel_4"}
    local winTxtUI = {"_textWin_1", "_textWin_2", "_textWin_3", "_textWin_4"}
    local lostTxtUI = {"_textLost_1", "_textLost_2", "_textLost_3", "_textLost_4"}
    for i = 0, CF.roomData:getChairs() - 1 do
        local localSeat = CF.roomData:seatToLocal(i)
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

return TableInfoLayer
&
