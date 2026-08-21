local TableInfoLayer = CF.gameClass("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/JinHua/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_TEXT_ROOM_INFO_EX"] = { varName = "_textRoomInfoEx" },
        ["_KW_TEXT_MAI_DI_STATE_"] = {varName = "_textMaiZiState_", beginIndex = 1, endIndex = 4},

        --买子--兰溪特有
        ["_KW_PANEL_MAI_ZI"] = { varName = "_maiZiPanel" },
        ["_KW_BTN_BU_MAI_0"] = {varName = "_btnBuMai", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventMaiZi"},
        ["_KW_BTN_MAI_DI_"] = {varName = "_btnMaiZi_", beginIndex = 1, endIndex = 10, type = CF.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventMaiZi"},
    }
end

function TableInfoLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("RoomInfo"), eventKeyName = "EVENT_UPDATE_ROOM_INFO_EX", callBack = "onUpdateRoomInfoEx"},
    }
end

function TableInfoLayer:getAdaptationConfig()
    local config = {}
    config[#config + 1] = {node = self._textMaiZiState_1, bRight = false, bHalf = false}
    config[#config + 1] = {node = self._textMaiZiState_2, bRight = false, bHalf = false}
    config[#config + 1] = {node = self._textMaiZiState_3, bRight = true, bHalf = true}
    config[#config + 1] = {node = self._textMaiZiState_4, bRight = true, bHalf = true}
    return config
end

--更新信息
function TableInfoLayer:onUpdateRoomInfoEx(event)
    local data = event.msg
    self._textRoomInfoEx:setString(data)
    self._textRoomInfoEx:setVisible(true)
end

function TableInfoLayer:onTouchEventMaiZi(send, eventType)

end

return TableInfoLayer
