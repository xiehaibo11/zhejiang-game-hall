local TableInfoLayer = CF.gameClass("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ZhouShan/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_PANAEL_QUANFENG"] = {varName="_panelQuanfeng"},
        ["_KW_TEXT_QUANFENG"] = {varName="_textQuanfeng"},
    }
end

function TableInfoLayer:getAdaptationConfig()
    return {
        {node = self._panelQuanfeng, bRight = false, bHalf = true},
    }
end

function TableInfoLayer:ctor(param)
    param = param or {}
	TableInfoLayer.super.ctor(self,param)

    self:initUI()
end

function TableInfoLayer:initUI()
    self._panelQuanfeng:setVisible(false)
end

function TableInfoLayer:getProxyEvents()
    return {
        { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_QUANFENG", callBack = "onUpdateQuanfeng"},
    }
end

function TableInfoLayer:onUpdateQuanfeng(event)
    if event.msg == nil then return end
    if event.msg.value == nil then return end
    self._textQuanfeng:setText(event.msg.value)
    self._panelQuanfeng:setVisible(true)
end

return TableInfoLayer�