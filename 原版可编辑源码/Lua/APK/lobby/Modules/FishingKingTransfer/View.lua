local FishingKingTransferView = class("FishingKingTransferView", XH.ViewBase)

function FishingKingTransferView:getCSBPath()
    return "cocosStudio/hall/CSB/window/FishingKingTransfer/FishingKingAnnounce.csb"
end

function FishingKingTransferView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_GO"] = { varName = "_btnGo", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGo" },
        ["_KW_PANEL_GAME_RULE"] = {varName="_panelGameRule"},
        ["_KW_TXT_1"] = {varName="_txt1"},
        ["_KW_TXT_2"] = {varName="_txt2"},
    }
end

function FishingKingTransferView:ctor(param)
    param = param or {}
	FishingKingTransferView.super.ctor(self, param)
    self._end = os.time() > os.time({year =  2022, month = 10, day = 8, hour = 12, min = 0, sec = 0})
    self:initUI()
end

function FishingKingTransferView:initUI()
    if not self._end then
        self._btnGo:setVisible(false)
        self._txt1:setVisible(true)
    else
        self._btnGo:setVisible(true)
        self._txt2:setVisible(true)
    end
end

function FishingKingTransferView:onTouchEventClose(send, eventType)
    if not self._end then
        XH.lobby:getModule("Lobby"):startH5Game(XH.lobby:getModule("Lobby").H5GameNameList.BUYU)
    end
    self:close()
end

function FishingKingTransferView:onTouchEventGo(send, eventType)
    if not XH.lobby:getModule("RRBuYu"):isSupportRRBY() then
        return
    end
    XH.TipTool.showLoading(5)
    XH.lobby:getModule("RRBuYu"):isDownloadCompleted(true)
    XH.lobby:getModule("Replugin"):postToSepperllitaPlugin(1)
    self:close()
end

return FishingKingTransferView