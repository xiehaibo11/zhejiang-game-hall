local TableInfoUI = CF.gameClass("TableInfoUI", CF.ViewBase)

function TableInfoUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/NingBo/TableInfo.csb"
end

function TableInfoUI:getBindingInfo()
    return {
        ["_KW_PANAEL_QUANFENG"] = { varName = "_panelQuanfeng", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onQuickBtnClicked" },
        ["_KW_TEXT_QUANFENG"] = { varName = "_textQuanfeng", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onShowSettleBtnClicked" },
    }
end

function TableInfoUI:ctor(param)
    param = param or {}
    TableInfoUI.super.ctor(self, param)
    self:initUI()
end

function TableInfoUI:initUI()
    self._panelQuanfeng:setVisible(false)
end

function TableInfoUI:getAdaptationConfig()
    return {
        {node = self._panelQuanfeng, bRight = false, bHalf = true},
    }
end

function TableInfoUI:getProxyEvents()
    return {
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_QUANFENG", callBack = "onUpdateQuanfeng" }
    }
end

function TableInfoUI:onUpdateQuanfeng(event)
    if event.msg == nil then return end
    if event.msg.value == nil then return end
    self._textQuanfeng:setText(event.msg.value)
    self._panelQuanfeng:setVisible(true)
end

return TableInfoUI