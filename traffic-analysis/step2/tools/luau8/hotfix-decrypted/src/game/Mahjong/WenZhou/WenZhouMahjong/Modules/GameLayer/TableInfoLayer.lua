local TableInfoLayer = CF.gameClass("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/WenZhou/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_TEXT_LAO_ZHUANG"] = {varName="_textLaozhaung"},
        ["_KW_TEXT_DI_SHU"] = {varName="_textDiShu"},
        ["_KW_TEXT_MAI_DI"] = {varName="_textMaidi"},
        ["_KW_TEXT_DING_DI"] = {varName="_textDingDi"},
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
        ["_KW_PANEL_MDD_INFO"] = {varName = "_mddInfo"},
        ["_KW_BTN_DOUBLE"] = {varName="_doubleBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onDoubleBtnClicked"},
    }
end

function TableInfoLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_LAO_ZHUANG", callBack = "onUpdateLaoZhaung"},
        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_UPDATE_DI_SHU", callBack = "onUpdateDiShu"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MAI_DI", callBack = "onUpdateMaiDi"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_DING_DI", callBack = "onUpdateDingDi"},

        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_ALL_INFO", callBack = "onClearAllInfo"},

        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_SHOW_KUNG_SCORE_ANI", callBack = "onShowKungScoreAni"},
        {module = CF.game:getModule("PropUse"), eventKeyName = "EVENT_UPDATE_DOUBLE_STATE", callBack = "onUpdateDoubleState"},
    }
end

function TableInfoLayer:getAdaptationConfig()
    return {
        {node = self._mddInfo, bRight = false, bHalf = true},
    }
end

function TableInfoLayer:ctor(param)
	param = param or {}
	TableInfoLayer.super.ctor(self,param)
end

--更新牢庄信息
function TableInfoLayer:onUpdateLaoZhaung(event)
    if event.msg == nil then
        return
    end
    if event.msg.value == nil then
        return
    end
    self._textLaozhaung:setText("牢庄:" .. event.msg.value)
end

--更新底数信息
function TableInfoLayer:onUpdateDiShu(event)
    if event.msg == nil then
        return
    end
    if event.msg.value == nil then
        return
    end
    self._textDiShu:setText("底数:" .. event.msg.value)
end

--更新买底信息
function TableInfoLayer:onUpdateMaiDi(event)
    if event.msg == nil then
        return
    end
    if event.msg.value == nil then
        return
    end
    self._textMaidi:setText("买底:" .. event.msg.value)
end

--更新顶底信息
function TableInfoLayer:onUpdateDingDi(event)
    if event.msg == nil then
        return
    end
    if event.msg.value == nil then
        return
    end
    self._textDingDi:setText("顶底:" .. event.msg.value)
end

--初始化全部数据
function TableInfoLayer:onClearAllInfo(event)
    self._textLaozhaung:setText("牢庄:--")
    self._textDiShu:setText("底数:--")
    self._textMaidi:setText("买底:--")
    self._textDingDi:setText("顶底:--")
end

--杠分动画
function TableInfoLayer:onShowKungScoreAni(event)
    local kungScore = event.msg.score
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

-- 更新加倍按钮显示状态
function TableInfoLayer:onUpdateDoubleState(event)
    if CF.roomData and CF.roomData:getIsSeer() then
        self._doubleBtn:setVisible(false)
        return
    end
    local msg = event.msg
    self._doubleBtn:setVisible(msg.bShow)
    self._doubleBtn:setBright(msg.bClick)
    self._doubleBtn:setTouchEnabled(msg.bClick)
    self._doubleBtn:setEnabled(msg.bClick)
end

-- 加倍按钮点击事件
function TableInfoLayer:onDoubleBtnClicked(send, eventType)
    print("spideman onDoubleBtnClicked")
    local tipLayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK_CANCEL})
    tipLayer:setText("下局加倍（下局胜负翻倍）需使用0.5张房卡")
    tipLayer:setButtonMoreEvent(CF.TipLayer.ENUM_BUTTON_TYPE.OK, function()
        local shuffleType = CF.gameSub:getShuffleType(CF.roomData:getGameID())
        CF.msgManager:sendRequestUseProps(CF.areaData:getPropList().smallRoomCardID, 500, shuffleType, "nextDouble=1")
    end)
end

return TableInfoLayer
K