local TablePreView = CF.gameClass("TablePreView", CF.ViewBase)
local SxVipConfig = require('lobby.Modules.Sxvip.Config')

function TablePreView:ctor(param)
    TablePreView.super.ctor(self, param)
    self._style = param.style
    self:initUI()
end

function TablePreView:getBindingInfo()
    return {
        
        ["_KW_PANAEL_BG"] = {varName = "_KW_PANAEL_BG", onTouchEnded = "close"},
        ["_KW_IMG_BG"] = {varName = "_imgBg"},
        ["_KW_BTN_OPENVIP"] = {varName = "_btnOpenVip", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnOpenVip"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "close"},
    }
end

function TablePreView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/TablePreViewLayer.csb"
end

function TablePreView:initUI()
    local bgPath = CF.settingData:getVipTableBgByStyle(self._style)
    if not bgPath or bgPath == "" then
        self:close()
    end
    self._imgBg:loadTexture(bgPath)
end

function TablePreView:onBtnOpenVip()
    XH.viewManager:openView("SxvipPrivilegeView", nil, SxVipConfig.ThrowData.source.VIPTableBG)
    local data = {
        block_item_id = CF.settingData:getBgNameByStyle(self._style),
        game_id = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()
    }
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.zyt2025071802, data)
    self:close()
end

function TablePreView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
end

return TablePreView