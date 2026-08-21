local RoomCenterInfoView = CF.gameClass("RoomCenterInfoView", "game.BaseCardGame.Modules.RoomInfo.CenterView")

local TABLE_BG_STYPE = { THREE_D = 1, TWO_D = 2,} --桌面3D,2D (各个游戏的桌布配置都有可能不相同)

RoomCenterInfoView.KW_TABLE_BG_FILE_NAME = {
    [1] = "res/tex/image/card_scene_bg.jpg",
    [2] = "res/tex/image/card_scene_bg_2d.jpg",
    [3] = "res/tex/image/card_scene_bg_2d_2.jpg",
    [4] = "", -- 霞光胜境，动画里带了
    [5] = "res/tex/image/background_3.jpg",
    [6] = "res/tex/image/background_2.jpg",
    [7] = "res/tex/image/background_1.jpg",
}

function RoomCenterInfoView:getProxyEvents()
    local proxyEvents = RoomCenterInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_DOUBLEKOU_TABLE_STYLE_CHANGED", callBack = "onTableBgChanged" }
    return proxyEvents
end

function RoomCenterInfoView:initUI()
    RoomCenterInfoView.super.initUI(self)
    self:initRoomIDVisible()
end

function RoomCenterInfoView:initRoomIDVisible()
    self._centerRoomIdImg:setVisible(false)
end

function RoomCenterInfoView:updateRoomIdImg()
end

function RoomCenterInfoView:onTableBgChanged()
    self:updateTableBg()
    self:updateTableBgProp()
end

function RoomCenterInfoView:getTableBgFileStr()
    local tableStyle = CF.settingData:getDoubleKouTableStyle()
    if CF.getLobbyModule("Sxvip"):isExpire() and CF.settingData:isVipTable(tableStyle) then
        tableStyle = 1
        CF.settingData:setDoubleKouTableStyle(1)
    end
    local tableBg = self.KW_TABLE_BG_FILE_NAME[1]
    if self.KW_TABLE_BG_FILE_NAME[tableStyle] then
        tableBg = self.KW_TABLE_BG_FILE_NAME[tableStyle]
    end
    return tableBg
end

--根据桌布背景2D/3D显示水印
function RoomCenterInfoView:updateTableBgProp()
    if not self._propTableBgPanel then return end
    local inUse = XH.lobby:getModule("SkinBundle"):isPropInUse(XH.XGSJ_PROP_ID.TABLE)
    if inUse then
        self._propTableBgPanel:removeAllChildren()
        return
    end
    local tableBgData = CF.roomData:getSelfTableBgData() or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    if next(tableBgData) then
        local tableBgUrl = tableBgData[1].img_url
        if CF.settingData:getDoubleKouTableStyle() == TABLE_BG_STYPE.THREE_D then
            GameBagUILogic.showTableBg(self._propTableBgPanel, tableBgUrl, cc.size(0,-60), nil, cc.p(1,0.7))
        else
            GameBagUILogic.showTableBg(self._propTableBgPanel, tableBgUrl)
        end
    end
end

return RoomCenterInfoView`
