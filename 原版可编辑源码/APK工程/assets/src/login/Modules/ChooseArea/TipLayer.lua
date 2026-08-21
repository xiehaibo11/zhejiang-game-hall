local ChooseAreaTipLayer = class("ChooseAreaTipLayer", XH.ViewBase)

function ChooseAreaTipLayer:getCSBPath()
    return "cocosStudio/hall/CSB/AreaChooseTipLayer.csb"
end

function ChooseAreaTipLayer:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = {varName="KWA_BTND_CLOSE",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onCloseClicked"},
		["_KWA_BTND_OK"] = {varName="KWA_BTND_OK",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onCloseClicked"},
		["_KW_PANEL_BG"] = {varName="_Bg",onTouchEnded = "onCloseClicked"},
		["_KWA_BTND_RECHOOSE"] = {varName="KWA_BTND_RECHOOSE",type = XH.UI_TYPE.PANEL_TOBUTTON,onTouchEnded = "onReChooseClicked"},
		["_KWA_MSG_LABEL_2"] = {varName="_textArea"},
    }
end

--加载窗口所需资
function ChooseAreaTipLayer:ctor(param)
    local tipParam = param or {}
	ChooseAreaTipLayer.super.ctor(self,tipParam)
    self:initUI(tipParam.msg)
    self._lobbyid = tipParam.lobbyid or -1
end

--刷新UI
function ChooseAreaTipLayer:initUI(msgString)
    self._textArea:setString("("..msgString..")")
end

function ChooseAreaTipLayer:onCloseClicked(send,eventType)
    self:close()
end

function ChooseAreaTipLayer:onReChooseClicked(send,eventType)
    XH.viewManager:openView("ChooseAreaView")
    self:close()
end

function ChooseAreaTipLayer:recordData(isChoose)
    local data = {}
    data.auto_areaid = self._lobbyid
    data.auto_areaid_choose = isChoose and 1 or 0
    XH.throwDataManager:throwData(XH.ThrowDataDefine.AreaSelected,data)
end

 
return ChooseAreaTipLayer